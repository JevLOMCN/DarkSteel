// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b5352e0

UClass * __cdecl UDS_NPCClientControlAbility_Falling::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Falling.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCClientControlAbility_Falling",
               &Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Falling.InnerSingleton,
               StaticRegisterNativesUDS_NPCClientControlAbility_Falling,400,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NPCClientControlAbility_Falling>,
               InternalVTableHelperCtorCaller<UDS_NPCClientControlAbility_Falling>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Falling.InnerSingleton;
}

// UDS_NPCClientControlAbility_Falling @ 14b5386f0

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

UDS_NPCClientControlAbility_Falling * __thiscall
UDS_NPCClientControlAbility_Falling::UDS_NPCClientControlAbility_Falling
          (UDS_NPCClientControlAbility_Falling *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->NPCClientControlAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NPCClientControlAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  this->FallingSpeed = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->HorizontalVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->HorizontalVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->HorizontalVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ExecuteProcessTimer).Handle = 0;
  this->bIsExecuteProcess = false;
  return this;
}

// UDS_NPCClientControlAbility_Falling @ 14b538780

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

UDS_NPCClientControlAbility_Falling * __thiscall
UDS_NPCClientControlAbility_Falling::UDS_NPCClientControlAbility_Falling
          (UDS_NPCClientControlAbility_Falling *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->NPCClientControlAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NPCClientControlAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  this->FallingSpeed = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->HorizontalVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->HorizontalVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->HorizontalVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ExecuteProcessTimer).Handle = 0;
  this->bIsExecuteProcess = false;
  return this;
}

// ~UDS_NPCClientControlAbility_Falling @ 14b538fa0

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
UDS_NPCClientControlAbility_Falling::~UDS_NPCClientControlAbility_Falling
          (UDS_NPCClientControlAbility_Falling *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b53a510

UClass * __cdecl UDS_NPCClientControlAbility_Falling::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Falling.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCClientControlAbility_Falling",
               &Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Falling.InnerSingleton,
               StaticRegisterNativesUDS_NPCClientControlAbility_Falling,400,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NPCClientControlAbility_Falling>,
               InternalVTableHelperCtorCaller<UDS_NPCClientControlAbility_Falling>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Falling.InnerSingleton;
}

// ShouldTickComponent @ 14b53a8d0

bool __thiscall
UDS_NPCClientControlAbility_Falling::ShouldTickComponent(UDS_NPCClientControlAbility_Falling *this)

{
  return true;
}

// StaticRegisterNativesUDS_NPCClientControlAbility_Falling @ 14b53a9a0

void __cdecl
UDS_NPCClientControlAbility_Falling::StaticRegisterNativesUDS_NPCClientControlAbility_Falling(void)

{
  return;
}

// ClearMemberVariables @ 14b827930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_NPCClientControlAbility_Falling::ClearMemberVariables(UDS_NPCClientControlAbility_Falling *this)

{
  undefined8 uVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  
  this->FallingSpeed = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->HorizontalVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->HorizontalVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->HorizontalVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bIsExecuteProcess = false;
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar2 = FTimerManager::FindTimer(this_00,&this->ExecuteProcessTimer);
  if (pFVar2 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->ExecuteProcessTimer).Handle);
  }
  (this->ExecuteProcessTimer).Handle = 0;
  return;
}

// ExecuteProcess @ 14b830150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UDS_NPCClientControlAbility_Falling::ExecuteProcess(UDS_NPCClientControlAbility_Falling *this)

{
  double dVar1;
  bool bVar2;
  UDS_MovementCore *this_00;
  UObject *pUVar3;
  UDS_LogManager *pUVar4;
  float fVar5;
  double dVar6;
  undefined1 auStackY_188 [32];
  EDS_AbilityDeactivateType local_158 [8];
  TVector<double>_u_0 local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  ClearMemberVariables(this);
  bVar2 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Falling,FWeakObjectPtr>::UEOpEquals
                    (&this->NPCClientControlAbilityData,(void *)0x0);
  if (bVar2) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NPCClientControlAbility_Falling::ExecuteProcess",0x33,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0xa4,L"Failed to InitMemberVariables().");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_158[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_158);
  }
  else {
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_MovementCore::GetActorLocation(this_00,(TVector<double> *)&local_150._s_0);
    pUVar3 = FWeakObjectPtr::Get(&(this->NPCClientControlAbilityData).WeakPtr);
    fVar5 = (float)(local_150._s_0.Z - *(double *)&pUVar3[2].field_0x18);
    if ((0.0 < fVar5) && (fVar5 = SQRT(fVar5 * ___real_3b05bf37), __real_322bcc77 < fVar5)) {
      dVar1 = *(double *)&pUVar3[2].field_0x10;
      dVar6 = __real_3ff0000000000000 / (double)fVar5;
      (this->HorizontalVelocity).field0_0x0._s_0.X =
           (*(double *)&pUVar3[2].field_0x8 - local_150._s_0.X) * dVar6;
      (this->HorizontalVelocity).field0_0x0._s_0.Y = (dVar1 - local_150._s_0.Y) * dVar6;
      (this->HorizontalVelocity).field0_0x0._s_0.Z = 0.0;
    }
    local_158[0] = 0x8c;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_158);
    this->bIsExecuteProcess = true;
  }
  return;
}

// InitMemberVariables @ 14b833e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UDS_NPCClientControlAbility_Falling::InitMemberVariables(UDS_NPCClientControlAbility_Falling *this)

{
  double dVar1;
  bool bVar2;
  UDS_MovementCore *this_00;
  UObject *pUVar3;
  float fVar4;
  double dVar5;
  TVector<double>_u_0 local_28;
  
  ClearMemberVariables(this);
  bVar2 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Falling,FWeakObjectPtr>::UEOpEquals
                    (&this->NPCClientControlAbilityData,(void *)0x0);
  if (bVar2) {
    return false;
  }
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_MovementCore::GetActorLocation(this_00,(TVector<double> *)&local_28._s_0);
  pUVar3 = FWeakObjectPtr::Get(&(this->NPCClientControlAbilityData).WeakPtr);
  fVar4 = (float)(local_28._s_0.Z - *(double *)&pUVar3[2].field_0x18);
  if ((0.0 < fVar4) && (fVar4 = SQRT(fVar4 * ___real_3b05bf37), __real_322bcc77 < fVar4)) {
    dVar1 = *(double *)&pUVar3[2].field_0x10;
    dVar5 = __real_3ff0000000000000 / (double)fVar4;
    (this->HorizontalVelocity).field0_0x0._s_0.X =
         (*(double *)&pUVar3[2].field_0x8 - local_28._s_0.X) * dVar5;
    (this->HorizontalVelocity).field0_0x0._s_0.Y = (dVar1 - local_28._s_0.Y) * dVar5;
    (this->HorizontalVelocity).field0_0x0._s_0.Z = 0.0;
  }
  return true;
}

// OnCanActivate @ 14b838d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_NPCClientControlAbility_Falling::OnCanActivate(UDS_NPCClientControlAbility_Falling *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_NPCClientControlAbilityData_Falling,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Falling,FWeakObjectPtr>::UEOpEquals
                      (&this->NPCClientControlAbilityData,(void *)0x0);
    if (bVar1) {
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_NPCClientControlAbilityData_Falling>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->NPCClientControlAbilityData).WeakPtr = *TVar2.WeakPtr;
    }
    bVar1 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Falling,FWeakObjectPtr>::UEOpEquals
                      (&this->NPCClientControlAbilityData,(void *)0x0);
    if (!bVar1) {
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NPCClientControlAbility_Falling::OnCanActivate",0x32,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x1f,L"NPCClientControlAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b83eef0

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
UDS_NPCClientControlAbility_Falling::OnDeactivateAbility
          (UDS_NPCClientControlAbility_Falling *this,bool *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  EDS_StateTagType local_res8 [16];
  FWeakObjectPtr local_res18 [2];
  
  ClearMemberVariables(this);
  UDS_EntityData::GetData((ulong64)local_res18,this->_padding_);
  bVar1 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)local_res18,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res18);
    pUVar2[3].field_0x6 = 0;
  }
  local_res8[0] = NPCClientControl_Falling;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  bVar1 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Falling,FWeakObjectPtr>::UEOpEquals
                    (&this->NPCClientControlAbilityData,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->NPCClientControlAbilityData).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2);
  }
  return;
}

// OnPostActivateAbility @ 14b8436e0

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
UDS_NPCClientControlAbility_Falling::OnPostActivateAbility
          (UDS_NPCClientControlAbility_Falling *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  FTimerManager *this_00;
  undefined1 auStackY_198 [32];
  EDS_AbilityDeactivateType local_158 [16];
  code *local_148;
  undefined8 uStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar1 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Falling,FWeakObjectPtr>::UEOpEquals
                    (&this->NPCClientControlAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NPCClientControlAbility_Falling::OnPostActivateAbility",0x3a,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x2c,L"NPCClientControlAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_158[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_158);
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->NPCClientControlAbilityData).WeakPtr);
    if ((float)(*(uint *)&pUVar3[2].field_0x20 & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        __real_322bcc77) {
      ExecuteProcess(this);
    }
    else {
      this_00 = FDS_TimerManager::Get((UObject *)0x0);
      uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
      local_148 = ExecuteProcess;
      FTimerManager::SetTimer<UDS_NPCClientControlAbility_Falling>
                (this_00,&this->ExecuteProcessTimer,this,(pmf_9bc96472 *)&local_148,
                 *(float *)&pUVar3[2].field_0x20,false,__real_bf800000);
    }
  }
  return;
}

// OnTickComponent @ 14b848ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UDS_NPCClientControlAbility_Falling::OnTickComponent
          (UDS_NPCClientControlAbility_Falling *this,float param_1)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_MovementCore *this_00;
  UObject *pUVar5;
  UObject *pUVar6;
  float fVar7;
  undefined1 auStackY_1b8 [32];
  EDS_AbilityDeactivateType local_188 [8];
  TVector<double>_u_0 local_180;
  double local_168;
  double local_160;
  double local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  if (this->bIsExecuteProcess != false) {
    bVar3 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Falling,FWeakObjectPtr>::UEOpEquals
                      (&this->NPCClientControlAbilityData,(void *)0x0);
    if (bVar3) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_NPCClientControlAbility_Falling::OnTickComponent",0x34,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_148.Ptr,0x5f,L"NPCClientControlAbilityData is nullptr.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
      local_188[0] = Cancel;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_188);
    }
    else {
      this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_MovementCore::GetActorLocation(this_00,(TVector<double> *)&local_180._s_0);
      pUVar5 = FWeakObjectPtr::Get(&(this->NPCClientControlAbilityData).WeakPtr);
      fVar7 = this->FallingSpeed - param_1 * ___real_44750000;
      dVar1 = (this->HorizontalVelocity).field0_0x0._s_0.Y;
      dVar2 = (this->HorizontalVelocity).field0_0x0._s_0.X;
      this->FallingSpeed = fVar7;
      local_160 = (double)param_1 * dVar1 + local_180._s_0.Y;
      local_168 = (double)param_1 * dVar2 + local_180._s_0.X;
      local_158 = (double)(fVar7 * param_1) + local_180._s_0.Z;
      if (*(double *)&pUVar5[2].field_0x18 <= local_158 &&
          local_158 != *(double *)&pUVar5[2].field_0x18) {
        pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        (**(code **)(*(longlong *)pUVar5 + 0x358))(pUVar5,&local_168);
      }
      else {
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        (**(code **)(*(longlong *)pUVar6 + 0x358))(pUVar6,&pUVar5[2].field_0x8);
        local_188[0] = Success;
        UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_188);
      }
    }
  }
  return;
}

// TryActivate @ 14b8524f0

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
UDS_NPCClientControlAbility_Falling::TryActivate
          (ulong64 *param_1,TVector<double> *param_2,float *param_3)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_EntityBase *this;
  UObject *pUVar3;
  undefined1 auStackY_1d8 [32];
  uint uVar4;
  wchar_t *pwVar5;
  EDS_AbilityTagType local_198 [8];
  FWeakObjectPtr local_190;
  undefined8 local_188;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (*param_1 == 0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_NPCClientControlAbility_Falling::TryActivate",0x30,Yes);
    pwVar5 = L"Invalid parameter.";
    uVar4 = 0x84;
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_NPCClientControlAbility_Falling::TryActivate",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,0x8b,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b852696;
    }
    local_198[0] = NPCClientControl_Falling;
    UDS_AbilityDataSet::GetAbilityData<UDS_NPCClientControlAbilityData_Falling>
              ((ulong64 *)&local_190,(EDS_AbilityTagType *)param_1);
    bVar1 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Falling,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCClientControlAbilityData_Falling,FWeakObjectPtr> *)
                       &local_190,(void *)0x0);
    if (!bVar1) {
      local_168._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_168._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_168._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      DS_Util::GetNPCFloorLocationByLocation
                ((TVector<double> *)&local_180._s_0,(TVector<double> *)&local_168._s_0,
                 __real_43160000,false);
      local_180._s_0.Z = local_180._s_0.Z + (double)this->ScaledCapsuleHalfHeight;
      pUVar3 = FWeakObjectPtr::Get(&local_190);
      *(double *)&pUVar3[2].field_0x8 = local_180._s_0.X;
      *(double *)&pUVar3[2].field_0x10 = local_180._s_0.Y;
      *(double *)&pUVar3[2].field_0x18 = local_180._s_0.Z;
      pUVar3 = FWeakObjectPtr::Get(&local_190);
      local_188 = 0;
      local_198[0] = NPCClientControl_Falling;
      *(float *)&pUVar3[2].field_0x20 = *param_3;
      bVar1 = FDS_EntityBase::TryActivateAbility
                        (this,local_198,(TObjectPtr<UWN_AbilityContext>)&local_188);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_NPCClientControlAbility_Falling::TryActivate",0x30,Yes);
    pwVar5 = L"abilityData is nullptr.";
    uVar4 = 0x92;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar4,pwVar5);
LAB_14b852696:
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

