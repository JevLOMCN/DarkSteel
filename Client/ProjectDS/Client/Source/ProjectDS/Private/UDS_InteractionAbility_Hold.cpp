// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 28

// StaticClass @ 14b4bbd70

UClass * __cdecl UDS_InteractionAbility_Hold::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_Hold.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_Hold",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_Hold.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_Hold,0x1e8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_Hold>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_Hold>,local_res8,
               UDS_InteractionAbility_ObjectHandling::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_Hold.InnerSingleton;
}

// UDS_InteractionAbility_Hold @ 14b4c0e70

UDS_InteractionAbility_Hold * __thiscall
UDS_InteractionAbility_Hold::UDS_InteractionAbility_Hold
          (UDS_InteractionAbility_Hold *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_InteractionAbility_ObjectHandling::UDS_InteractionAbility_ObjectHandling
            ((UDS_InteractionAbility_ObjectHandling *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->InteractionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->InteractionAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  (this->AttachTimer).Handle = 0;
  this->bIsAttached = false;
  this->AttachDist2D = 0.0;
  this->MaxStepHeight = 0.0;
  (this->HandlingSocketName).ComparisonIndex = 0;
  (this->HandlingSocketName).Number = 0;
  this->bAlreadySendHandlingEnd = false;
  return this;
}

// UDS_InteractionAbility_Hold @ 14b4c0ef0

UDS_InteractionAbility_Hold * __thiscall
UDS_InteractionAbility_Hold::UDS_InteractionAbility_Hold
          (UDS_InteractionAbility_Hold *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_InteractionAbility_ObjectHandling::UDS_InteractionAbility_ObjectHandling
            ((UDS_InteractionAbility_ObjectHandling *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->InteractionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->InteractionAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  (this->AttachTimer).Handle = 0;
  this->bIsAttached = false;
  this->AttachDist2D = 0.0;
  this->MaxStepHeight = 0.0;
  (this->HandlingSocketName).ComparisonIndex = 0;
  (this->HandlingSocketName).Number = 0;
  this->bAlreadySendHandlingEnd = false;
  return this;
}

// ~UDS_InteractionAbility_Hold @ 14b4c22d0

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
UDS_InteractionAbility_Hold::~UDS_InteractionAbility_Hold(UDS_InteractionAbility_Hold *this)

{
  this->_padding_ = (longlong)&UDS_InteractionAbility_ObjectHandling::_vftable__for__UObject__;
  this->_padding_ =
       (longlong)
       &UDS_InteractionAbility_ObjectHandling::_vftable__for__IGameplayTaskOwnerInterface__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4c4720

UClass * __cdecl UDS_InteractionAbility_Hold::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_Hold.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_Hold",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_Hold.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_Hold,0x1e8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_Hold>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_Hold>,local_res8,
               UDS_InteractionAbility_ObjectHandling::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_Hold.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b4c53f0

bool __thiscall
UDS_InteractionAbility_Hold::ShouldNotifyChangedCharState(UDS_InteractionAbility_Hold *this)

{
  return true;
}

// ShouldNotifyChangedSpecialBuff @ 14b4c54b0

bool __thiscall
UDS_InteractionAbility_Hold::ShouldNotifyChangedSpecialBuff(UDS_InteractionAbility_Hold *this)

{
  return true;
}

// ShouldTickComponent @ 14b4c54d0

bool __thiscall UDS_InteractionAbility_Hold::ShouldTickComponent(UDS_InteractionAbility_Hold *this)

{
  return true;
}

// StaticRegisterNativesUDS_InteractionAbility_Hold @ 14b4c5640

void __cdecl UDS_InteractionAbility_Hold::StaticRegisterNativesUDS_InteractionAbility_Hold(void)

{
  return;
}

// CheckCliff @ 14b7dc360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDS_InteractionAbility_Hold::CheckCliff
          (UDS_InteractionAbility_Hold *this,TVector<double> *param_1,float *param_2,float *param_3,
          FHitResult *param_4)

{
  bool bVar1;
  UWorld *this_00;
  FCollisionObjectQueryParams local_res8 [4];
  FCollisionShape local_48;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  local_38._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_38._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_48.ShapeType = Box;
  local_48.field1_0x4.Box.HalfExtentX = *param_3 * __real_3f333333;
  local_res8[0].IgnoreMask = '\0';
  local_res8[0].ObjectTypesToQuery = 0x1000001;
  local_48.field1_0x4.Box.HalfExtentZ = *param_2;
  local_20._s_0.Z = (param_1->field0_0x0)._s_0.Z + __real_4049000000000000;
  local_38._s_0.Z =
       (param_1->field0_0x0)._s_0.Z +
       (double)(float)((uint)this->MaxStepHeight ^ __xmm_80000000800000008000000080000000);
  local_48.field1_0x4.Box.HalfExtentY = local_48.field1_0x4.Box.HalfExtentX;
  local_20._s_0.X = local_38._s_0.X;
  local_20._s_0.Y = local_38._s_0.Y;
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  bVar1 = UWorld::SweepSingleByObjectType
                    (this_00,param_4,(TVector<double> *)&local_20._s_0,
                     (TVector<double> *)&local_38._s_0,&UE::Math::TQuat<double>::Identity,local_res8
                     ,&local_48,&FCollisionQueryParams::DefaultQueryParam);
  return !bVar1;
}

// CloseInputKeyGroupWindow @ 14b7dc980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_Hold::CloseInputKeyGroupWindow(UDS_InteractionAbility_Hold *this)

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
                (&local_138,"UDS_InteractionAbility_Hold::CloseInputKeyGroupWindow",0x35,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x2e2,L"windowMng is nullptr.");
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

// Deactivate @ 14b7e3380

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
UDS_InteractionAbility_Hold::Deactivate(ulong64 *param_1,EDS_AbilityDeactivateType *param_2)

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
              (&local_138,"UDS_InteractionAbility_Hold::Deactivate",0x27,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x289,L"Invalid parameter.");
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this != (FDS_EntityBase *)0x0) {
      local_148[0] = Interaction_Hold;
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
              (&local_138,"UDS_InteractionAbility_Hold::Deactivate",0x27,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_138.Ptr,0x290,L"sourceEntity is nullptr. (%llu)");
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// ExecuteAttach @ 14b7e6df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_InteractionAbility_Hold::ExecuteAttach(UDS_InteractionAbility_Hold *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_MovementCore *pUVar3;
  TVector<double> *pTVar4;
  TVector<double> *pTVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auStackY_1a8 [32];
  uint uVar9;
  wchar_t *pwVar10;
  FWeakObjectPtr local_178;
  TVector<double> local_170;
  TVector<double> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_Hold::ExecuteAttach",0x2a,Yes);
    pwVar10 = L"InteractionAbilityData is nullptr.";
    uVar9 = 0x2ee;
  }
  else {
    FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_MovementCore::GetMovementCore((ulong64)&local_178);
    bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_178,(void *)0x0);
    if (!bVar1) {
      this->bIsAttached = true;
      pUVar3 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pTVar4 = UDS_MovementCore::GetActorFootLocation(pUVar3,&local_170);
      pUVar3 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_178);
      pTVar5 = UDS_MovementCore::GetActorFootLocation(pUVar3,&local_158);
      dVar6 = (pTVar4->field0_0x0)._s_0.Y - (pTVar5->field0_0x0)._s_0.Y;
      dVar8 = (pTVar4->field0_0x0)._s_0.X - (pTVar5->field0_0x0)._s_0.X;
      auVar7._0_8_ = dVar6 * dVar6 + dVar8 * dVar8;
      auVar7._8_8_ = 0;
      auVar7 = sqrtpd(auVar7,auVar7);
      this->AttachDist2D = (float)auVar7._0_8_;
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_Hold::ExecuteAttach",0x2a,Yes);
    pwVar10 = L"targetMovementCore is nullptr.";
    uVar9 = 0x2f6;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar9,pwVar10);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// InitObjectHandlingVariables @ 14b7f1a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_Hold::InitObjectHandlingVariables(UDS_InteractionAbility_Hold *this)

{
  longlong lVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_Hold::InitObjectHandlingVariables",0x38,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x238,L"InteractionAbilityData is nullptr.");
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

// OnAbilityRetryActivate @ 14b7f4650

void __thiscall
UDS_InteractionAbility_Hold::OnAbilityRetryActivate(UDS_InteractionAbility_Hold *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6289792095309790965>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_InteractionAbility_Hold.cpp"
                     ,0x10b,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnCanActivate @ 14b7f6050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_InteractionAbility_Hold::OnCanActivate(UDS_InteractionAbility_Hold *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr> *this_00;
  int iVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr> TVar3;
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
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr>::UEOpEquals
                      (this_00,(void *)0x0);
    if (bVar2) {
      TVar3 = UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_Hold>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      this_00->WeakPtr = *TVar3.WeakPtr;
    }
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr>::UEOpEquals
                      (this_00,(void *)0x0);
    if (bVar2) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_Hold::OnCanActivate",0x2a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_138.Ptr,0x38,L"InteractionAbilityData is nullptr.");
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

// OnChangedCharState @ 14b7f8370

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
UDS_InteractionAbility_Hold::OnChangedCharState
          (UDS_InteractionAbility_Hold *this,
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
                (&local_138,"UDS_InteractionAbility_Hold::OnChangedCharState",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x114,L"InCharStateData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr>::UEOpEquals
                      (&this->InteractionAbilityData,(void *)0x0);
    if (bVar2) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_Hold::OnChangedCharState",0x2f,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0x11b,L"InteractionAbilityData is nullptr.");
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

// OnChangedSpecialBuff @ 14b7fa5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_Hold::OnChangedSpecialBuff
          (UDS_InteractionAbility_Hold *this,ulong64 *param_1,EDS_SpecialBuffType *param_2,
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
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_Hold::OnChangedSpecialBuff",0x31,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x132,L"InteractionAbilityData is nullptr.");
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

// OnDeactivateAbility @ 14b7fb4a0

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
UDS_InteractionAbility_Hold::OnDeactivateAbility(UDS_InteractionAbility_Hold *this,bool *param_1)

{
  bool bVar1;
  FGameplayTag *pFVar2;
  FTimerManager *this_00;
  FTimerData *pFVar3;
  UObject *pUVar4;
  UDS_InputEvent *pUVar5;
  TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr> *this_01;
  EDS_StateTagType local_res8 [8];
  
  UDS_InteractionAbility_ObjectHandling::OnDeactivateAbility
            ((UDS_InteractionAbility_ObjectHandling *)this,param_1);
  this->bIsAttached = false;
  this->bAlreadySendHandlingEnd = false;
  local_res8[0] = Interaction_Hold;
  pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar2);
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar3 = FTimerManager::FindTimer(this_00,&this->AttachTimer);
  if (pFVar3 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->AttachTimer).Handle);
  }
  (this->AttachTimer).Handle = 0;
  if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar4 + 0x4b8))(pUVar4);
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar4 + 0x4d0))(pUVar4);
    pUVar5 = UDS_InputEvent::GetEvent();
    if (pUVar5 != (UDS_InputEvent *)0x0) {
      FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
      ::Remove<UDS_InteractionAbility_Hold>(&pUVar5->OnInputEvent,this);
    }
    CloseInputKeyGroupWindow(this);
    local_res8[0] = Lock_Rotation;
    pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar2);
    local_res8[0] = Lock_CameraFront;
    pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar2);
  }
  this_01 = &this->InteractionAbilityData;
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr>::UEOpEquals
                    (this_01,(void *)0x0);
  if (!bVar1) {
    local_res8[0] = NPCClientControl_Holded;
    pUVar4 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    FDS_EntityBase::RemoveStateTag((ulong64 *)&pUVar4[2].field_0x8,local_res8);
    pUVar4 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar4[3].field_0x18);
    pUVar4 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    (**(code **)(*(longlong *)pUVar4 + 0x2c8))(pUVar4);
  }
  return;
}

// OnInputEvent_HoldCancel @ 14b7fd9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_Hold::OnInputEvent_HoldCancel
          (UDS_InteractionAbility_Hold *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  if (param_2 == Completed) {
    local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
    bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr>::UEOpEquals
                      (&this->InteractionAbilityData,(void *)0x0);
    if (bVar1) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_Hold::OnInputEvent_HoldCancel",0x34,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_138.Ptr,0x2a0,L"InteractionAbilityData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      OnProcess_HoldCancel(this);
      if (this->bAlreadySendHandlingEnd == false) {
        this->bAlreadySendHandlingEnd = true;
        FDS_ObjectHandlingService::SendHandlingEnd();
      }
    }
  }
  return;
}

// OnOpenInputKeyGroupWindow @ 14b7fff10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_Hold::OnOpenInputKeyGroupWindow
          (UDS_InteractionAbility_Hold *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  FDS_ViewModelContext_InputKeyGroup *pFVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_1a8 [32];
  EDS_KeyActionType local_178 [2];
  FWeakObjectPtr local_170;
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
                (&local_138,"UDS_InteractionAbility_Hold::OnOpenInputKeyGroupWindow",0x36,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x2cf,L"InWidget is nullptr.");
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
    local_178[0] = IA_HoldCancel;
    TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<enum_EDS_KeyActionType,int>
              (&pFVar2->DefaultKeys,local_178,1,(pFVar2->DefaultKeys).ArrayMax);
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
    local_170.ObjectIndex = 0;
    local_170.ObjectSerialNumber = 0;
    local_168[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_170,(FObjectPtr)local_168);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_170,&local_148,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnPostActivateAbility @ 14b801a00

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
UDS_InteractionAbility_Hold::OnPostActivateAbility(UDS_InteractionAbility_Hold *this)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  FDS_EntityBase *pFVar7;
  UDS_InputEvent *pUVar8;
  FGameplayTag *pFVar9;
  UDS_MovementCore *this_00;
  USceneComponent *this_01;
  FString *this_02;
  FTimerManager *this_03;
  int iVar10;
  undefined1 *puVar11;
  int *piVar12;
  ForAnyElementType this_04;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined1 auStackY_258 [32];
  uint uVar16;
  wchar_t *pwVar17;
  EDS_StateTagType local_218 [16];
  FString local_208;
  FWeakObjectPtr local_1f8;
  UObject *local_1f0;
  undefined1 local_1e8 [16];
  TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> local_1d8;
  FWeakObjectPtr local_1d0;
  FString local_1c8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_1b8;
  TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  TVector<double>_u_0 local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  UDS_InteractionAbility_ObjectHandling::OnPostActivateAbility
            ((UDS_InteractionAbility_ObjectHandling *)this);
  this->bIsAttached = false;
  this->bAlreadySendHandlingEnd = false;
  bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar3) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_InteractionAbility_Hold::OnPostActivateAbility",0x32,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Warning,local_168.Ptr,0x58,L"InteractionAbilityData is nullptr.");
    if ((void *)local_168._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_168._padding_);
    return;
  }
  pUVar6 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
  pFVar7 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar6[2].field_0x8);
  if (pFVar7 == (FDS_EntityBase *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_InteractionAbility_Hold::OnPostActivateAbility",0x32,Yes);
    pwVar17 = L"targetEntity is nullptr.";
    uVar16 = 0x60;
  }
  else {
    FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_MovementCore::GetMovementCore((ulong64)&local_1a8);
    bVar3 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals(&local_1a8,(void *)0x0);
    if (bVar3) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_InteractionAbility_Hold::OnPostActivateAbility",0x32,Yes);
      pwVar17 = L"targetMovementCore is nullptr.";
      uVar16 = 0x68;
    }
    else {
      local_208.Data._8_8_ = local_208.Data._8_8_ & 0xffffffff00000000;
      local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnProcess_HoldCancel;
      if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
        pUVar6 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
        TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        BindUObject<UDS_InteractionAbility_Hold>
                  ((TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &pUVar6[3].field_0x18,this,(pmf_6bea3737 *)&local_208);
        pUVar8 = UDS_InputEvent::GetEvent();
        if (pUVar8 == (UDS_InputEvent *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar5 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_InteractionAbility_Hold::OnPostActivateAbility",0x32,Yes);
          pwVar17 = L"inputEvent is nullptr.";
          uVar16 = 0x77;
        }
        else {
          local_1e8._0_4_ = 0xc353;
          local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnInputEvent_HoldCancel
          ;
          local_208.Data._8_8_ = local_208.Data._8_8_ & 0xffffffff00000000;
          if (*(int *)&(pUVar8->OnInputEvent).Subscriptions.field_0x8 !=
              *(int *)&(pUVar8->OnInputEvent).Subscriptions.field_0x34) {
            puVar11 = *(undefined1 **)&(pUVar8->OnInputEvent).Subscriptions.field_0x40;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = &(pUVar8->OnInputEvent).Subscriptions.field_0x38;
            }
            iVar10 = *(int *)(puVar11 +
                             (ulonglong)
                             (*(int *)&(pUVar8->OnInputEvent).Subscriptions.field_0x48 - 1U & 0xc353
                             ) * 4);
            if (iVar10 != -1) {
              do {
                piVar12 = (int *)((longlong)iVar10 * 0x50 +
                                 *(longlong *)&(pUVar8->OnInputEvent).Subscriptions);
                if (*piVar12 == 0xc353) {
                  if (piVar12 != (int *)0x0) goto LAB_14b801d4e;
                  break;
                }
                iVar10 = piVar12[0x12];
              } while (iVar10 != -1);
            }
          }
          local_1f0 = (UObject *)local_1e8;
          TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
                    (&(pUVar8->OnInputEvent).Subscriptions,(int)local_1e8 + 4,
                     (TKeyInitializer<EDS_KeyActionType_const_&> *)0xc353,(bool *)&local_1f0);
          piVar12 = (int *)((longlong)(int)local_1e8._4_4_ * 0x50 +
                           *(longlong *)&(pUVar8->OnInputEvent).Subscriptions);
LAB_14b801d4e:
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
                    ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar12 + 2),this);
          TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
          ::AddUObject<UDS_InteractionAbility_Hold>
                    (piVar12 + 2,(UDS_InteractionAbility_Hold *)&local_1f0,(pmf_384e67dc *)this);
          OpenInputKeyGroupWindow(this);
          local_218[0] = Lock_Rotation;
          pFVar9 = FDS_GameplayTags::GetStateTag(local_218);
          UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar9);
          local_218[0] = Lock_CameraFront;
          pFVar9 = FDS_GameplayTags::GetStateTag(local_218);
          UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar9);
          (**(code **)(pFVar7->_padding_ + 0x160))(pFVar7);
          bVar3 = TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>::UEOpEquals
                            (&local_1d8,(void *)0x0);
          if (!bVar3) {
            pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
            (**(code **)(*(longlong *)pUVar6 + 0x4c8))(pUVar6);
            goto LAB_14b801e63;
          }
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar5 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_InteractionAbility_Hold::OnPostActivateAbility",0x32,Yes);
          pwVar17 = L"targetCapsule is nullptr.";
          uVar16 = 0x89;
        }
      }
      else {
        pUVar6 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
        TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        BindUObject<UDS_InteractionAbility_Hold>
                  ((TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &pUVar6[3].field_0x18,this,(pmf_6bea3737 *)&local_208);
LAB_14b801e63:
        ADS_MainCharacter::GetMainPlayer();
        bVar3 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_1d0,
                           (void *)0x0);
        if (bVar3) {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar5 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_InteractionAbility_Hold::OnPostActivateAbility",0x32,Yes);
          pwVar17 = L"mainCharacter is nullptr.";
          uVar16 = 0x9a;
        }
        else {
          pUVar6 = FWeakObjectPtr::Get(&local_1d0);
          pUVar6 = *(UObject **)(pUVar6 + 0x15);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          local_1f8.ObjectIndex = 0;
          local_1f8.ObjectSerialNumber = 0;
          local_1f0 = pUVar6;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1f0);
          bVar3 = TWeakObjectPtr<UCharacterMovementComponent,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UCharacterMovementComponent,FWeakObjectPtr> *)
                             &local_1f8,(void *)0x0);
          if (bVar3) {
            pUVar5 = UDS_LogManager::GetInst();
            if (pUVar5 == (UDS_LogManager *)0x0) {
              return;
            }
            pUVar5 = UDS_LogManager::GetInst();
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"UDS_InteractionAbility_Hold::OnPostActivateAbility",0x32,Yes);
            pwVar17 = L"sourceMovementComp is nullptr.";
            uVar16 = 0xa2;
          }
          else {
            pUVar6 = FWeakObjectPtr::Get(&local_1f8);
            this->MaxStepHeight = *(float *)&pUVar6[10].field_0x1c + __real_41200000;
            (**(code **)(pFVar7->_padding_ + 0x80))(pFVar7);
            bVar3 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)
                               (local_1e8 + 8),(void *)0x0);
            if (!bVar3) {
              this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
              UDS_MovementCore::GetActorFootLocation(this_00,(TVector<double> *)&local_188._s_0);
              fVar15 = __real_7f7fffff;
              bVar3 = false;
              ::FString::FString(&local_1c8,L"interaction_handling");
              this_01 = (USceneComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_1e8 + 8));
              USceneComponent::GetAllSocketNames(this_01,&local_1b8);
              iVar10 = local_1b8.ArrayNum;
              pFVar1 = (FName *)(local_1b8.AllocatorInstance.Data + (longlong)iVar10 * 8);
              this_04.Data = local_1b8.AllocatorInstance.Data;
              while( true ) {
                if (local_1b8.ArrayNum != iVar10) {
                  `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (local_218);
                }
                if ((FName *)this_04.Data == pFVar1) break;
                this_02 = ::FName::ToString((FName *)this_04.Data,&local_208);
                iVar13 = local_1c8.Data.ArrayNum + -1;
                FVar2.Data = local_1c8.Data.AllocatorInstance.Data;
                if (local_1c8.Data.ArrayNum == 0) {
                  iVar13 = 0;
                  FVar2.Data = (FScriptContainerElement *)L"";
                }
                bVar4 = ::FString::StartsWith(this_02,(wchar_t *)FVar2.Data,iVar13,IgnoreCase);
                if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_208.Data.AllocatorInstance.Data);
                }
                if (bVar4) {
                  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_1e8 + 8));
                  (**(code **)(*(longlong *)pUVar6 + 0x528))
                            (pUVar6,&local_1a0,*(FName *)this_04.Data);
                  fVar14 = (float)((local_198 - local_188._s_0.Y) * (local_198 - local_188._s_0.Y) +
                                   (local_1a0 - local_188._s_0.X) * (local_1a0 - local_188._s_0.X) +
                                  (local_190 - local_188._s_0.Z) * (local_190 - local_188._s_0.Z));
                  if (fVar14 < fVar15) {
                    bVar3 = true;
                    this->HandlingSocketName = *(FName *)this_04.Data;
                    fVar15 = fVar14;
                  }
                }
                this_04.Data = this_04.Data + 8;
              }
              if (bVar3) {
                local_218[0] = Interaction_Hold;
                pFVar9 = FDS_GameplayTags::GetStateTag(local_218);
                UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar9);
                local_218[0] = NPCClientControl_Holded;
                pUVar6 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
                FDS_EntityBase::AddStateTag((ulong64 *)&pUVar6[2].field_0x8,local_218);
                this_03 = FDS_TimerManager::Get((UObject *)0x0);
                local_208.Data._8_8_ = local_208.Data._8_8_ & 0xffffffff00000000;
                local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)ExecuteAttach;
                FTimerManager::SetTimer<UDS_InteractionAbility_Hold>
                          (this_03,&this->AttachTimer,this,(pmf_6bea3737 *)&local_208,
                           __real_3e4ccccd,false,__real_bf800000);
              }
              else {
                pUVar5 = UDS_LogManager::GetInst();
                if (pUVar5 != (UDS_LogManager *)0x0) {
                  pUVar5 = UDS_LogManager::GetInst();
                  local_168._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_168,"UDS_InteractionAbility_Hold::OnPostActivateAbility",0x32,
                             Yes);
                  UDS_LogManager::PrintLog
                            (pUVar5,1,Warning,local_168.Ptr,0xcb,L"Couldn\'t find socket. (%s)");
                  if ((FScriptContainerElement *)local_168._padding_ !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free((void *)local_168._padding_);
                  }
                }
              }
              if ((FName *)local_1b8.AllocatorInstance.Data != (FName *)0x0) {
                FMemory::Free(local_1b8.AllocatorInstance.Data);
              }
              goto LAB_14b8022c7;
            }
            pUVar5 = UDS_LogManager::GetInst();
            if (pUVar5 == (UDS_LogManager *)0x0) {
              return;
            }
            pUVar5 = UDS_LogManager::GetInst();
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"UDS_InteractionAbility_Hold::OnPostActivateAbility",0x32,Yes);
            pwVar17 = L"targetSKM is nullptr.";
            uVar16 = 0xad;
          }
        }
      }
    }
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_168.Ptr,uVar16,pwVar17);
  local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_168._padding_;
LAB_14b8022c7:
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  return;
}

// OnProcess_HoldCancel @ 14b807660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_InteractionAbility_Hold::OnProcess_HoldCancel(UDS_InteractionAbility_Hold *this)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  UDS_LogManager *pUVar4;
  UDS_AbilitySystemComponent *this_00;
  undefined1 auStackY_178 [32];
  bool local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (!bVar2) {
    lVar1 = this->_padding_;
    *(undefined1 *)&this->_padding_ = 3;
    if ((((char)lVar1 != '\x03') ||
        (cVar3 = (**(code **)(this->_padding_ + 0x3c8))(this), cVar3 != '\x03')) &&
       (local_148[0] = (char)this->_padding_ == '\x03',
       *(char *)((longlong)&this->_padding_ + 1) != '\0')) {
      this_00 = (UDS_AbilitySystemComponent *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_AbilitySystemComponent::SetIgnoreInput(this_00,(FGameplayTag *)&this->_padding_,local_148)
      ;
    }
    if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
      CloseInputKeyGroupWindow(this);
    }
    return;
  }
  pUVar4 = UDS_LogManager::GetInst();
  if (pUVar4 == (UDS_LogManager *)0x0) {
    return;
  }
  pUVar4 = UDS_LogManager::GetInst();
  local_138._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_138,"UDS_InteractionAbility_Hold::OnProcess_HoldCancel",0x31,Yes);
  UDS_LogManager::PrintLog
            (pUVar4,1,Warning,local_138.Ptr,0x2ad,L"InteractionAbilityData is nullptr.");
  if ((void *)local_138._padding_ == (void *)0x0) {
    return;
  }
  FMemory::Free((void *)local_138._padding_);
  return;
}

// OnTickComponent @ 14b80a6c0

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
UDS_InteractionAbility_Hold::OnTickComponent(UDS_InteractionAbility_Hold *this,float param_1)

{
  longlong lVar1;
  double dVar2;
  char cVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  FDS_EntityBase *pFVar7;
  UDS_MovementCore *pUVar8;
  TVector<double> *pTVar9;
  undefined1 auStackY_348 [32];
  uint uVar10;
  wchar_t *pwVar11;
  FWeakObjectPtr local_318;
  FWeakObjectPtr local_310;
  TVector<double>_u_0 local_308;
  undefined4 uStack_2f0;
  undefined1 uStack_2ec;
  undefined2 uStack_2eb;
  undefined1 uStack_2e9;
  TVector<double> local_2e8;
  TVector<double>_u_0 local_2c8;
  TVector<double>_u_0 local_2a8;
  undefined1 local_290 [16];
  double local_280;
  undefined1 local_278 [16];
  TVector<double> local_268 [6];
  int local_1d4;
  FWeakObjectPtr local_1c0;
  FWeakObjectPtr FStack_1b8;
  IActorInstanceManagerInterface *local_1b0;
  longlong lStack_1a8;
  void *local_178;
  wchar_t *local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_348;
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  if (((*(char *)((longlong)&this->_padding_ + 1) == '\x01') && ((char)this->_padding_ == '\0')) &&
     (cVar3 = (**(code **)(this->_padding_ + 0x3c8))(this), cVar3 == '\0')) {
    UDS_InteractionAbility_ObjectHandling::CheckActivityRange
              ((UDS_InteractionAbility_ObjectHandling *)this);
  }
  if (this->bAlreadySendHandlingEnd == true) {
    return;
  }
  bVar4 = TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar4) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_178 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278,
               "UDS_InteractionAbility_Hold::OnTickComponent",0x2c,Yes);
    pwVar11 = L"InteractionAbilityData is nullptr.";
    uVar10 = 0x14a;
  }
  else {
    if (this->HandlingSocketName != (FName)0x0) {
      if (this->bIsAttached != true) {
        return;
      }
      pUVar6 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      pFVar7 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar6[2].field_0x8);
      if (pFVar7 == (FDS_EntityBase *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar5 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_InteractionAbility_Hold::OnTickComponent",0x2c,Yes);
        pwVar11 = L"targetEntity is nullptr.";
        uVar10 = 0x15c;
      }
      else {
        FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
        UDS_MovementCore::GetMovementCore((ulong64)&local_318);
        bVar4 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_318,(void *)0x0
                          );
        if (bVar4) {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar5 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_InteractionAbility_Hold::OnTickComponent",0x2c,Yes);
          pwVar11 = L"targetMovementCore is nullptr.";
          uVar10 = 0x164;
        }
        else {
          (**(code **)(pFVar7->_padding_ + 0x80))(pFVar7);
          bVar4 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_310,
                             (void *)0x0);
          if (!bVar4) {
            if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
              UpdateTargetCollision(this,param_1);
            }
            memset(local_278,0,0x100);
            uStack_2f0 = 0xffffffff;
            uStack_2eb = 0;
            uStack_2e9 = 0;
            local_308._s_0.Z = 0.0;
            uStack_2ec = 0;
            local_1c0.ObjectIndex = 0;
            local_1c0.ObjectSerialNumber = 0;
            FStack_1b8.ObjectIndex = 0;
            FStack_1b8.ObjectSerialNumber = 0;
            local_278._4_4_ = 1.0;
            lStack_1a8 = 0xffffffff;
            local_1d4 = -1;
            local_1b0 = (IActorInstanceManagerInterface *)0x0;
            if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
              lVar1 = this->_padding_;
              pUVar8 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
              pTVar9 = UDS_MovementCore::GetActorLocation(pUVar8,(TVector<double> *)&local_308._s_0)
              ;
              bVar4 = CheckCliff(this,pTVar9,(float *)(lVar1 + 0x58),(float *)(lVar1 + 0x5c),
                                 (FHitResult *)local_278);
              if (bVar4) {
                if (this->bAlreadySendHandlingEnd != false) {
                  return;
                }
                this->bAlreadySendHandlingEnd = true;
                FDS_ObjectHandlingService::SendHandlingEnd();
                return;
              }
            }
            pUVar8 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
            UDS_MovementCore::GetActorForwardVector(pUVar8,(TVector<double> *)&local_2a8._s_0);
            pUVar8 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
            pTVar9 = UDS_MovementCore::GetActorFootLocation
                               (pUVar8,(TVector<double> *)&local_2c8._s_0);
            dVar2 = (double)this->AttachDist2D;
            local_308._s_0.Y = local_2a8._s_0.Y * dVar2 + (pTVar9->field0_0x0)._s_0.Y;
            local_308._s_0.X = local_2a8._s_0.X * dVar2 + (pTVar9->field0_0x0)._s_0.X;
            local_308._s_0.Z =
                 local_2a8._s_0.Z * dVar2 + (pTVar9->field0_0x0)._s_0.Z +
                 (double)pFVar7->ScaledCapsuleHalfHeight;
            local_2c8._s_0.X = local_308._s_0.X;
            local_2c8._s_0.Y = local_308._s_0.Y;
            local_2c8._s_0.Z = local_308._s_0.Z;
            DS_Util::GetNPCFloorLocationByLocation
                      (&local_2e8,(TVector<double> *)&local_2c8._s_0,__real_43160000,false);
            local_2e8.field0_0x0._s_0.Z =
                 local_2e8.field0_0x0._s_0.Z + (double)pFVar7->ScaledCapsuleHalfHeight;
            bVar4 = CheckCliff(this,(TVector<double> *)&local_308._s_0,
                               &pFVar7->ScaledCapsuleHalfHeight,&pFVar7->ScaledCapsuleRadius,
                               (FHitResult *)local_278);
            if (bVar4) {
              if ((bool)*(char *)((longlong)&this->_padding_ + 1) == bVar4) {
                if (this->bAlreadySendHandlingEnd != false) {
                  return;
                }
                this->bAlreadySendHandlingEnd = bVar4;
                FDS_ObjectHandlingService::SendHandlingEnd();
                return;
              }
            }
            else {
              if ((float)((double)local_268[0].field0_0x0._16_8_ - local_2e8.field0_0x0._s_0.Z) <
                  this->MaxStepHeight ||
                  (float)((double)local_268[0].field0_0x0._16_8_ - local_2e8.field0_0x0._s_0.Z) ==
                  this->MaxStepHeight) {
                pUVar6 = FWeakObjectPtr::Get(&local_318);
                pTVar9 = &local_2e8;
              }
              else {
                pUVar6 = FWeakObjectPtr::Get(&local_318);
                pTVar9 = local_268;
              }
              (**(code **)(*(longlong *)pUVar6 + 0x358))(pUVar6,pTVar9);
            }
            pUVar6 = FWeakObjectPtr::Get(&local_310);
            (**(code **)(*(longlong *)pUVar6 + 0x528))(pUVar6,local_290,this->HandlingSocketName);
            pUVar8 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
            pTVar9 = UDS_MovementCore::GetActorFootLocation
                               (pUVar8,(TVector<double> *)&local_308._s_0);
            dVar2 = (pTVar9->field0_0x0)._s_0.Z;
            pUVar6 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
            *(float *)&pUVar6[3].field_0x10 = (float)(local_280 - dVar2);
            return;
          }
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar5 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_InteractionAbility_Hold::OnTickComponent",0x2c,Yes);
          pwVar11 = L"targetSKM is nullptr.";
          uVar10 = 0x16c;
        }
      }
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,uVar10,pwVar11);
      if ((void *)local_158._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_158._padding_);
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_178 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_278,
               "UDS_InteractionAbility_Hold::OnTickComponent",0x2c,Yes);
    pwVar11 = L"HandlingSocketName is NAME_None.";
    uVar10 = 0x151;
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_170,uVar10,pwVar11);
  if (local_178 != (void *)0x0) {
    FMemory::Free(local_178);
  }
  return;
}

// OpenInputKeyGroupWindow @ 14b80b6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_Hold::OpenInputKeyGroupWindow(UDS_InteractionAbility_Hold *this)

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
  UDS_InteractionAbility_Hold *local_178;
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
                (&local_148,"UDS_InteractionAbility_Hold::OpenInputKeyGroupWindow",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_148.Ptr,0x2c2,L"windowMng is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    uStack_190 = 0;
    local_198 = OnOpenInputKeyGroupWindow;
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_Hold____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_InteractionAbility_Hold *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_178 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_InteractionAbility_Hold *)0x0)) {
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

// SendHandlingEnd @ 14b810ba0

bool __thiscall UDS_InteractionAbility_Hold::SendHandlingEnd(UDS_InteractionAbility_Hold *this)

{
  bool bVar1;
  
  if (this->bAlreadySendHandlingEnd == false) {
    this->bAlreadySendHandlingEnd = true;
    bVar1 = FDS_ObjectHandlingService::SendHandlingEnd();
    return bVar1;
  }
  return true;
}

// TryActivate @ 14b813110

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
UDS_InteractionAbility_Hold::TryActivate(ulong64 *param_1,ulong64 *param_2,int *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  FDS_EntityBase *this;
  UDS_LogManager *pUVar4;
  FDS_EntityBase *pFVar5;
  UDS_NPCDataSet *this_00;
  UObject *pUVar6;
  UObject *pUVar7;
  undefined1 auStackY_1d8 [32];
  uint uVar8;
  wchar_t *pwVar9;
  EDS_AbilityTagType local_198 [8];
  FWeakObjectPtr local_190;
  FWeakObjectPtr local_188;
  FWeakObjectPtr local_180;
  undefined8 local_178 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((*param_1 == 0) || (*param_2 == 0)) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_InteractionAbility_Hold::TryActivate",0x28,Yes);
    pwVar9 = L"Invalid parameter.";
    uVar8 = 0x248;
LAB_14b8134f6:
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_168.Ptr,uVar8,pwVar9);
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_168._padding_ = (longlong)this;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_InteractionAbility_Hold::TryActivate",0x28,Yes);
      pwVar9 = L"sourceEntity is nullptr. (%llu)";
      uVar8 = 0x24f;
    }
    else {
      pFVar5 = FDS_EntityBase::GetEntityBase(param_2);
      if (pFVar5 == (FDS_EntityBase *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar4 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_InteractionAbility_Hold::TryActivate",0x28,Yes);
        pwVar9 = L"targetEntity is nullptr. (%llu)";
        uVar8 = 0x256;
      }
      else {
        UDS_NPCObjectHandlingData::GetData((ulong64)&local_180);
        bVar2 = TWeakObjectPtr<UDS_NPCObjectHandlingData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_NPCObjectHandlingData,FWeakObjectPtr> *)&local_180,
                           (void *)0x0);
        if (bVar2) {
          pUVar4 = UDS_LogManager::GetInst();
          if (pUVar4 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar4 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_InteractionAbility_Hold::TryActivate",0x28,Yes);
          pwVar9 = L"npcObjectHandlingData is nullptr. (%llu)";
          uVar8 = 0x25d;
        }
        else {
          TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_188);
          bVar2 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_188,(void *)0x0
                            );
          if (bVar2) {
            pUVar4 = UDS_LogManager::GetInst();
            if (pUVar4 == (UDS_LogManager *)0x0) {
              return false;
            }
            pUVar4 = UDS_LogManager::GetInst();
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"UDS_InteractionAbility_Hold::TryActivate",0x28,Yes);
            pwVar9 = L"npcDataSet is nullptr. (%llu)";
            uVar8 = 0x264;
          }
          else {
            this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_188);
            iVar3 = UDS_NPCDataSet::GetInteractionFunctionValue(this_00,*param_3,Handling);
            pFVar5 = (FDS_EntityBase *)FDS_ActionHandlingTableRow::Get((longlong)iVar3,true);
            if (pFVar5 != (FDS_EntityBase *)0x0) {
              local_198[0] = Interaction_Hold;
              UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_Hold>
                        ((ulong64 *)&local_190,(EDS_AbilityTagType *)param_1);
              bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr> *)
                                 &local_190,(void *)0x0);
              if (!bVar2) {
                pUVar6 = FWeakObjectPtr::Get(&local_190);
                *(ulong64 *)&pUVar6[2].field_0x8 = *param_2;
                pUVar6 = FWeakObjectPtr::Get(&local_190);
                *(int *)&pUVar6[2].field_0x10 = *param_3;
                pUVar6 = FWeakObjectPtr::Get(&local_190);
                pUVar7 = FWeakObjectPtr::Get(&local_180);
                uVar1 = *(undefined8 *)&pUVar7[2].field_0x10;
                *(undefined8 *)&pUVar6[2].field_0x18 = *(undefined8 *)&pUVar7[2].field_0x8;
                *(undefined8 *)&pUVar6[2].field_0x20 = uVar1;
                *(undefined8 *)(pUVar6 + 3) = *(undefined8 *)&pUVar7[2].field_0x18;
                pUVar6 = FWeakObjectPtr::Get(&local_190);
                local_178[0] = 0;
                local_198[0] = Interaction_Hold;
                *(FDS_EntityBase **)&pUVar6[3].field_0x8 = pFVar5;
                bVar2 = FDS_EntityBase::TryActivateAbility
                                  (this,local_198,(TObjectPtr<UWN_AbilityContext>)local_178);
                return bVar2;
              }
              pUVar4 = UDS_LogManager::GetInst();
              if (pUVar4 == (UDS_LogManager *)0x0) {
                return false;
              }
              pUVar4 = UDS_LogManager::GetInst();
              local_168._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_168,"UDS_InteractionAbility_Hold::TryActivate",0x28,Yes);
              pwVar9 = L"abilityData is nullptr.";
              uVar8 = 0x273;
              goto LAB_14b8134f6;
            }
            pUVar4 = UDS_LogManager::GetInst();
            if (pUVar4 == (UDS_LogManager *)0x0) {
              return false;
            }
            pUVar4 = UDS_LogManager::GetInst();
            local_168._padding_ = (longlong)pFVar5;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"UDS_InteractionAbility_Hold::TryActivate",0x28,Yes);
            pwVar9 = L"actionHandlingTable is nullptr. (%d)";
            uVar8 = 0x26c;
          }
        }
      }
    }
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_168.Ptr,uVar8,pwVar9);
  }
  if ((FDS_EntityBase *)local_168._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
  return false;
}

// UpdateTargetCollision @ 14b818720

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
UDS_InteractionAbility_Hold::UpdateTargetCollision(UDS_InteractionAbility_Hold *this,float param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  char cVar11;
  UDS_LogManager *pUVar12;
  UObject *pUVar13;
  UClass *pUVar14;
  FDS_EntityBase *pFVar15;
  UObject *pUVar16;
  FPayload *pFVar17;
  TRotator<double> *pTVar18;
  TVector<double> *pTVar19;
  TVector<double>_u_0 *pTVar20;
  double *pdVar21;
  UDS_MovementCore *this_00;
  AActor *pAVar22;
  FWeakObjectPtr *this_01;
  UWorld *this_02;
  int iVar23;
  FRotationConversionCache *this_03;
  uint uVar24;
  longlong lVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  double dVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStackY_5e8 [32];
  wchar_t *pwVar37;
  FWeakObjectPtr local_598;
  FWeakObjectPtr local_590;
  UObject *local_588;
  TVector<double>_u_0 local_580;
  undefined4 uStack_568;
  undefined4 uStack_564;
  TVector<double>_u_0 local_558;
  double dStack_540;
  float local_538 [4];
  double local_528;
  double dStack_520;
  double local_518;
  TRotator<double> local_508;
  TVector<double>_u_0 local_4f0;
  FCollisionShape local_4d8;
  TVector<double>_u_0 local_4c8;
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  undefined1 local_488 [72];
  double local_440;
  int local_3e4;
  FWeakObjectPtr local_3d0;
  FWeakObjectPtr FStack_3c8;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  int iStack_3b8;
  undefined4 uStack_3b4;
  undefined1 local_388 [32];
  undefined1 local_368 [173];
  byte local_2bb;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  FCollisionQueryParams local_148;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_5e8;
  local_538[0] = param_1;
  bVar10 = TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr>::UEOpEquals
                     (&this->InteractionAbilityData,(void *)0x0);
  if (bVar10) {
    pUVar12 = UDS_LogManager::GetInst();
    if (pUVar12 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar12 = UDS_LogManager::GetInst();
    local_268._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_268,"UDS_InteractionAbility_Hold::UpdateTargetCollision",0x32,Yes);
    pwVar37 = L"InteractionAbilityData is nullptr.";
    uVar24 = 0x1b2;
    goto LAB_14b8187be;
  }
  pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar13 == (UObject *)0x0) {
LAB_14b81882b:
    pUVar13 = (UObject *)0x0;
  }
  else {
    pUVar14 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    iVar23 = (int)pUVar14->_padding_;
    if ((*(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38) < iVar23) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar23 * 8) !=
        &pUVar14->_padding_)) goto LAB_14b81882b;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar13);
  }
  local_598.ObjectIndex = 0;
  local_598.ObjectSerialNumber = 0;
  local_588 = pUVar13;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar13);
  }
  FWeakObjectPtr::operator=(&local_598,(FObjectPtr)&local_588);
  bVar10 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_598,(void *)0x0);
  if (bVar10) {
    pUVar12 = UDS_LogManager::GetInst();
    if (pUVar12 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar12 = UDS_LogManager::GetInst();
    local_268._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_268,"UDS_InteractionAbility_Hold::UpdateTargetCollision",0x32,Yes);
    pwVar37 = L"mainCharacter is nullptr.";
    uVar24 = 0x1bb;
LAB_14b8187be:
    UDS_LogManager::PrintLog(pUVar12,1,Warning,local_268.Ptr,uVar24,pwVar37);
    if ((void *)local_268._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_268._padding_);
    }
    return;
  }
  pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar13 + 0x4b8))(pUVar13);
  pUVar13 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
  pFVar15 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar13[2].field_0x8);
  if (pFVar15 == (FDS_EntityBase *)0x0) {
    pUVar12 = UDS_LogManager::GetInst();
    if (pUVar12 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar12 = UDS_LogManager::GetInst();
    local_268._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_268,"UDS_InteractionAbility_Hold::UpdateTargetCollision",0x32,Yes);
    pwVar37 = L"targetEntity is nullptr.";
    uVar24 = 0x1c6;
  }
  else {
    (**(code **)(pFVar15->_padding_ + 0x160))(pFVar15);
    uVar29 = 0;
    bVar10 = TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *)&local_590,(void *)0x0);
    if (!bVar10) {
      pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      if (pUVar13[6].field_0x11 == '\0') {
        return;
      }
      pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pUVar16 = FWeakObjectPtr::Get(&local_598);
      lVar25 = *(longlong *)(pUVar16 + 0xb);
      if (lVar25 == 0) {
        uVar26 = SUB84(UE::Math::TRotator<double>::ZeroRotator.Roll,0);
        uVar28 = (undefined4)((ulonglong)UE::Math::TRotator<double>::ZeroRotator.Roll >> 0x20);
        uVar29 = UE::Math::TRotator<double>::ZeroRotator.Yaw._0_4_;
        uVar30 = UE::Math::TRotator<double>::ZeroRotator.Yaw._4_4_;
      }
      else {
        local_558._0_16_ = *(undefined1 (*) [16])(lVar25 + 0x1f0);
        local_558._s_0.Z = *(double *)(lVar25 + 0x200);
        dStack_540 = *(double *)(lVar25 + 0x208);
        this_03 = (FRotationConversionCache *)(lVar25 + 0x1e0);
        pFVar17 = FRotationConversionCache::GetOrCreatePayload(this_03);
        lVar25 = -(ulonglong)((pFVar17->CachedQuat).W != dStack_540);
        auVar3._8_4_ = (int)lVar25;
        auVar3._0_8_ = -(ulonglong)((pFVar17->CachedQuat).Z != local_558._s_0.Z);
        auVar3._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        uVar24 = movmskpd(uVar29,auVar3);
        lVar25 = -(ulonglong)(local_558._s_0.Y != (pFVar17->CachedQuat).Y);
        auVar5._8_4_ = (int)lVar25;
        auVar5._0_8_ = -(ulonglong)(local_558._s_0.X != (pFVar17->CachedQuat).X);
        auVar5._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        iVar23 = movmskpd((int)this_03,auVar5);
        if ((uVar24 & 0x3fffffff) != 0 || iVar23 != 0) {
          (pFVar17->CachedQuat).X = local_558._s_0.X;
          (pFVar17->CachedQuat).Y = local_558._s_0.Y;
          (pFVar17->CachedQuat).Z = local_558._s_0.Z;
          (pFVar17->CachedQuat).W = dStack_540;
          pTVar18 = UE::Math::TQuat<double>::Rotator
                              ((TQuat<double> *)&local_558._s_0,(TRotator<double> *)&local_580._s_0)
          ;
          dVar31 = pTVar18->Yaw;
          (pFVar17->CachedRotator).Pitch = pTVar18->Pitch;
          (pFVar17->CachedRotator).Yaw = dVar31;
          (pFVar17->CachedRotator).Roll = pTVar18->Roll;
        }
        dVar31 = (pFVar17->CachedRotator).Roll;
        uVar26 = SUB84(dVar31,0);
        uVar28 = (undefined4)((ulonglong)dVar31 >> 0x20);
        uVar29 = *(undefined4 *)&(pFVar17->CachedRotator).Yaw;
        uVar30 = *(undefined4 *)((longlong)&(pFVar17->CachedRotator).Yaw + 4);
      }
      local_508.Pitch = 0.0;
      local_508.Yaw = (double)CONCAT44(uVar30,uVar29);
      local_508.Roll = 0.0;
      local_580._s_0.Z = (double)CONCAT44(uVar28,uVar26);
      pTVar19 = UE::Math::TRotator<double>::RotateVector
                          (&local_508,(TVector<double> *)&local_580._s_0,
                           &UE::Math::TVector<double>::RightVector);
      dVar31 = *(double *)(pUVar13 + 6);
      dVar1 = (pTVar19->field0_0x0)._s_0.X;
      dVar2 = (pTVar19->field0_0x0)._s_0.Y;
      pTVar19 = UE::Math::TRotator<double>::RotateVector
                          (&local_508,(TVector<double> *)&local_558._s_0,
                           &UE::Math::TVector<double>::ForwardVector);
      local_558._s_0.Z = 0.0;
      local_580._s_0.Z = 0.0;
      dVar2 = *(double *)&pUVar13[6].field_0x8 * (pTVar19->field0_0x0)._s_0.Y + dVar31 * dVar2;
      local_580._8_4_ = SUB84(dVar2,0);
      local_580._s_0.X =
           *(double *)&pUVar13[6].field_0x8 * (pTVar19->field0_0x0)._s_0.X + dVar31 * dVar1;
      local_580._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      UE::Math::TVector<double>::Normalize
                ((TVector<double> *)&local_580._s_0,__real_3e45798ee0000000);
      pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar13 + 0x498))(pUVar13,local_368);
      uVar29 = SUB84(UE::Math::TQuat<double>::Identity.W,0);
      uVar30 = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.W >> 0x20);
      uVar26 = SUB84(UE::Math::TQuat<double>::Identity.X,0);
      uVar28 = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.X >> 0x20);
      uVar35 = SUB84(UE::Math::TQuat<double>::Identity.Y,0);
      uVar36 = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.Y >> 0x20);
      local_558._s_0.Y = (double)0;
      local_558._s_0.X = UE::Math::TQuat<double>::Identity.W;
      local_528 = UE::Math::TQuat<double>::Identity.X;
      dStack_520 = 0.0;
      if ((local_2bb & 1) == 0) {
        uVar32 = SUB84(UE::Math::TQuat<double>::Identity.Z,0);
        uVar33 = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.Z >> 0x20);
        dVar31 = UE::Math::TQuat<double>::Identity.Z;
      }
      else {
        pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pcVar4 = *(code **)(*(longlong *)pUVar13 + 0x4a0);
        pUVar16 = FWeakObjectPtr::Get(&local_598);
        if (*(USceneComponent **)(pUVar16 + 0xb) == (USceneComponent *)0x0) {
          pTVar20 = &local_558;
          local_558._s_0.Y = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
          local_558._s_0.X = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
          local_558._s_0.Z = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
        }
        else {
          pTVar20 = &USceneComponent::GetRightVector
                               (*(USceneComponent **)(pUVar16 + 0xb),
                                (TVector<double> *)&local_558._s_0)->field0_0x0;
        }
        local_528 = (((TVector<double>_u_0 *)&(pTVar20->_s_0).X)->_s_0).X;
        dStack_520 = (pTVar20->_s_0).Y;
        local_518 = (pTVar20->_s_0).Z;
        pdVar21 = (double *)(*pcVar4)(pUVar13,local_388,&local_528);
        auVar3 = *(undefined1 (*) [16])(pdVar21 + 2);
        uVar32 = auVar3._0_4_;
        uVar33 = auVar3._4_4_;
        uVar29 = auVar3._8_4_;
        uVar30 = auVar3._12_4_;
        uVar26 = *(undefined4 *)pdVar21;
        uVar28 = *(undefined4 *)((longlong)pdVar21 + 4);
        local_528 = *pdVar21;
        uVar35 = *(undefined4 *)(pdVar21 + 1);
        uVar36 = *(undefined4 *)((longlong)pdVar21 + 0xc);
        dStack_520 = pdVar21[1];
        local_558._8_4_ = uVar29;
        local_558._s_0.X = (double)auVar3._8_8_;
        local_558._12_4_ = uVar30;
        dVar31 = auVar3._0_8_;
      }
      dVar2 = (double)CONCAT44(uVar36,uVar35) * local_580._s_0.Z - dVar31 * local_580._s_0.Y;
      dVar2 = dVar2 + dVar2;
      dVar6 = dVar31 * local_580._s_0.X - (double)CONCAT44(uVar28,uVar26) * local_580._s_0.Z;
      dVar6 = dVar6 + dVar6;
      dVar1 = (double)CONCAT44(uVar28,uVar26) * local_580._s_0.Y -
              (double)CONCAT44(uVar36,uVar35) * local_580._s_0.X;
      dVar1 = dVar1 + dVar1;
      dVar7 = (dVar1 * (double)CONCAT44(uVar36,uVar35) - dVar6 * dVar31) +
              dVar2 * (double)CONCAT44(uVar30,uVar29) + local_580._s_0.X;
      local_588 = (UObject *)
                  ((dVar2 * dVar31 - dVar1 * (double)CONCAT44(uVar28,uVar26)) +
                  dVar6 * (double)CONCAT44(uVar30,uVar29) + local_580._s_0.Y);
      this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      fVar27 = UDS_MovementCore::GetMoveSpeed(this_00);
      fVar34 = fVar27 * local_538[0];
      if (fVar27 * local_538[0] <= __real_42c80000) {
        fVar34 = __real_42c80000;
      }
      pUVar13 = FWeakObjectPtr::Get(&local_590);
      local_4c8._s_0.X = (double)*(undefined8 *)&pUVar13[0xd].field_0x8;
      local_4c8._s_0.Y = (double)*(undefined8 *)&pUVar13[0xd].field_0x10;
      local_4c8._s_0.Z = (double)*(undefined8 *)&pUVar13[0xd].field_0x18;
      dVar31 = (double)fVar34;
      local_4f0._s_0.X = dVar31 * dVar7 + local_4c8._s_0.X;
      local_4f0._s_0.Y = dVar31 * (double)local_588 + local_4c8._s_0.Y;
      local_4f0._s_0.Z =
           ((dVar6 * local_528 - dVar2 * (double)CONCAT44(uVar36,uVar35)) +
           dVar1 * local_558._s_0.X + local_580._s_0.Z) * dVar31 + local_4c8._s_0.Z;
      pUVar13 = FWeakObjectPtr::Get(&local_590);
      dVar2 = *(double *)&pUVar13[0xc].field_0x20;
      dVar6 = *(double *)(pUVar13 + 0xd);
      dVar8 = *(double *)&pUVar13[0xc].field_0x10;
      dVar9 = *(double *)&pUVar13[0xc].field_0x18;
      dVar31 = (double)CONCAT44(uVar33,uVar32) * dVar8 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1] +
               (double)CONCAT44(uVar36,uVar35) * dVar6 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               (double)CONCAT44(uVar30,uVar29) * dVar9 +
               (double)CONCAT44(uVar28,uVar26) * dVar2 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
      dVar1 = (double)CONCAT44(uVar33,uVar32) * dVar2 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1] +
              (double)CONCAT44(uVar36,uVar35) * dVar9 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              (double)CONCAT44(uVar30,uVar29) * dVar6 +
              (double)CONCAT44(uVar28,uVar26) * dVar8 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
      local_4a8._8_4_ = SUB84(dVar31,0);
      local_4a8._0_8_ =
           (double)CONCAT44(uVar33,uVar32) * dVar9 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0] +
           (double)CONCAT44(uVar36,uVar35) * dVar2 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           (double)CONCAT44(uVar30,uVar29) * dVar8 +
           (double)CONCAT44(uVar28,uVar26) * dVar6 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
      local_4a8._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      local_498._8_4_ = SUB84(dVar1,0);
      local_498._0_8_ =
           (double)CONCAT44(uVar33,uVar32) * dVar6 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0] +
           (double)CONCAT44(uVar36,uVar35) * dVar8 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           (double)CONCAT44(uVar30,uVar29) * dVar2 +
           (double)CONCAT44(uVar28,uVar26) * dVar9 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      local_498._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      pUVar13 = FWeakObjectPtr::Get(&local_590);
      (**(code **)(*(longlong *)pUVar13 + 0x8b8))(pUVar13,&local_4d8,0);
      FCollisionQueryParams::FCollisionQueryParams(&local_148);
      pAVar22 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      FCollisionQueryParams::AddIgnoredActor(&local_148,pAVar22);
      this_01 = (FWeakObjectPtr *)(**(code **)(pFVar15->_padding_ + 0x150))(pFVar15,local_538);
      pAVar22 = (AActor *)FWeakObjectPtr::Get(this_01);
      FCollisionQueryParams::AddIgnoredActor(&local_148,pAVar22);
      memset(local_488,0,0x100);
      local_3d0.ObjectIndex = 0;
      local_3d0.ObjectSerialNumber = 0;
      FStack_3c8.ObjectIndex = 0;
      FStack_3c8.ObjectSerialNumber = 0;
      local_580._s_0.Z = 0.0;
      uStack_568 = 0xffffffff;
      uStack_564 = 0;
      local_488._4_4_ = 1.0;
      local_3e4 = -1;
      local_3c0 = 0;
      uStack_3bc = 0;
      iStack_3b8 = -1;
      uStack_3b4._0_1_ = Invalid;
      uStack_3b4._1_3_ = 0;
      this_02 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
      bVar10 = UWorld::SweepSingleByChannel
                         (this_02,(FHitResult *)local_488,(TVector<double> *)&local_4c8._s_0,
                          (TVector<double> *)&local_4f0._s_0,(TQuat<double> *)local_4a8,
                          ECC_GameTraceChannel1,&local_4d8,&local_148,
                          &FCollisionResponseParams::DefaultResponseParam);
      if ((bVar10) && (dVar7 * (double)local_488._64_8_ + (double)local_588 * local_440 < 0.0)) {
        pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        cVar11 = (**(code **)(*(longlong *)pUVar13 + 0x328))(pUVar13,local_488,1);
        if (cVar11 != '\0') {
          pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          (**(code **)(*(longlong *)pUVar13 + 0x4b0))(pUVar13,local_488);
        }
      }
      if (local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
      }
      goto LAB_14b8190e1;
    }
    pUVar12 = UDS_LogManager::GetInst();
    if (pUVar12 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar12 = UDS_LogManager::GetInst();
    local_268._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_268,"UDS_InteractionAbility_Hold::UpdateTargetCollision",0x32,Yes);
    pwVar37 = L"targetCapsule is nullptr.";
    uVar24 = 0x1ce;
  }
  UDS_LogManager::PrintLog(pUVar12,1,Warning,local_268.Ptr,uVar24,pwVar37);
  local_148.IgnoreComponents.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)local_268._padding_;
LAB_14b8190e1:
  if (local_148.IgnoreComponents.AllocatorInstance.SecondaryData ==
      (ForElementType<unsigned_int>)0x0) {
    return;
  }
  FMemory::Free((void *)local_148.IgnoreComponents.AllocatorInstance.SecondaryData);
  return;
}

