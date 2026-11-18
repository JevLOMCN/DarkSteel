// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b4fca10

UClass * __cdecl UDS_MoveToPointAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MoveToPointAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MoveToPointAbility",
               &Z_Registration_Info_UClass_UDS_MoveToPointAbility.InnerSingleton,
               StaticRegisterNativesUDS_MoveToPointAbility,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MoveToPointAbility>,
               InternalVTableHelperCtorCaller<UDS_MoveToPointAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MoveToPointAbility.InnerSingleton;
}

// UDS_MoveToPointAbility @ 14b501420

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

UDS_MoveToPointAbility * __thiscall
UDS_MoveToPointAbility::UDS_MoveToPointAbility(UDS_MoveToPointAbility *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->MoveToPointAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->MoveToPointAbilityData).WeakPtr,(FObjectPtr)local_res8);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PreSourceLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreSourceLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->PreSourceLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bIsLandMove = false;
  return this;
}

// UDS_MoveToPointAbility @ 14b5014a0

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

UDS_MoveToPointAbility * __thiscall
UDS_MoveToPointAbility::UDS_MoveToPointAbility
          (UDS_MoveToPointAbility *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->MoveToPointAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->MoveToPointAbilityData).WeakPtr,(FObjectPtr)local_res8);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PreSourceLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreSourceLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->PreSourceLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bIsLandMove = false;
  return this;
}

// ~UDS_MoveToPointAbility @ 14b5027c0

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

void __thiscall UDS_MoveToPointAbility::~UDS_MoveToPointAbility(UDS_MoveToPointAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b504a20

UClass * __cdecl UDS_MoveToPointAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MoveToPointAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MoveToPointAbility",
               &Z_Registration_Info_UClass_UDS_MoveToPointAbility.InnerSingleton,
               StaticRegisterNativesUDS_MoveToPointAbility,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MoveToPointAbility>,
               InternalVTableHelperCtorCaller<UDS_MoveToPointAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MoveToPointAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b505aa0

bool __thiscall UDS_MoveToPointAbility::ShouldTickComponent(UDS_MoveToPointAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_MoveToPointAbility @ 14b505b70

void __cdecl UDS_MoveToPointAbility::StaticRegisterNativesUDS_MoveToPointAbility(void)

{
  return;
}

// ClearMemberVariables @ 14b827900

void __thiscall UDS_MoveToPointAbility::ClearMemberVariables(UDS_MoveToPointAbility *this)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PreSourceLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreSourceLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->PreSourceLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bIsLandMove = false;
  return;
}

// InitMemberVariables @ 14b833d80

bool __thiscall UDS_MoveToPointAbility::InitMemberVariables(UDS_MoveToPointAbility *this)

{
  double dVar1;
  undefined8 uVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_MovementCore *this_00;
  TVector<double> *pTVar5;
  TVector<double> local_28;
  
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PreSourceLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreSourceLocation).field0_0x0._s_0.Y = (double)uVar2;
  (this->PreSourceLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bIsLandMove = false;
  bVar3 = TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->MoveToPointAbilityData,(void *)0x0);
  if (bVar3) {
    return false;
  }
  pUVar4 = FWeakObjectPtr::Get(&(this->MoveToPointAbilityData).WeakPtr);
  if (*(int *)&pUVar4[2].field_0x8 == 0) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar5 = (TVector<double> *)(**(code **)(*(longlong *)pUVar4 + 0x338))(pUVar4,&local_28);
  }
  else {
    if (*(int *)&pUVar4[2].field_0x8 != 1) {
      return true;
    }
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar5 = UDS_MovementCore::GetActorFootLocation(this_00,&local_28);
  }
  dVar1 = (pTVar5->field0_0x0)._s_0.Y;
  (this->PreSourceLocation).field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
  (this->PreSourceLocation).field0_0x0._s_0.Y = dVar1;
  (this->PreSourceLocation).field0_0x0._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
  return true;
}

// OnCanActivate @ 14b838c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_MoveToPointAbility::OnCanActivate(UDS_MoveToPointAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->MoveToPointAbilityData,(void *)0x0);
    if (bVar1) {
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_MoveToPointAbilityData>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->MoveToPointAbilityData).WeakPtr = *TVar2.WeakPtr;
    }
    bVar1 = TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->MoveToPointAbilityData,(void *)0x0);
    if (!bVar1) {
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_MoveToPointAbility::OnCanActivate",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x25,L"MoveToPointAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b83ed00

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
UDS_MoveToPointAbility::OnDeactivateAbility(UDS_MoveToPointAbility *this,bool *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  UObject *pUVar3;
  EDS_StateTagType local_res8 [32];
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res8[0] = Trace;
  (this->PreSourceLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreSourceLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->PreSourceLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bIsLandMove = false;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  bVar2 = TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->MoveToPointAbilityData,(void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->MoveToPointAbilityData).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014b83ed6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3,*(code **)(*(longlong *)pUVar3 + 0x2c8));
    return;
  }
  return;
}

// OnPostActivateAbility @ 14b843310

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

void __thiscall UDS_MoveToPointAbility::OnPostActivateAbility(UDS_MoveToPointAbility *this)

{
  double dVar1;
  undefined8 uVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_MovementCore *this_00;
  TVector<double> *pTVar5;
  UDS_LogManager *pUVar6;
  undefined1 auStackY_188 [32];
  EDS_AbilityDeactivateType local_158 [8];
  TVector<double> local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  (this->PreSourceLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreSourceLocation).field0_0x0._s_0.Y = (double)uVar2;
  (this->PreSourceLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bIsLandMove = false;
  bVar3 = TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->MoveToPointAbilityData,(void *)0x0);
  if (bVar3) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_MoveToPointAbility::OnPostActivateAbility",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_138.Ptr,0x33,L"Failed to InitMemberVariables().");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_158[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_158);
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&(this->MoveToPointAbilityData).WeakPtr);
  if (*(int *)&pUVar4[2].field_0x8 == 0) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar5 = (TVector<double> *)(**(code **)(*(longlong *)pUVar4 + 0x338))(pUVar4,&local_150);
  }
  else {
    if (*(int *)&pUVar4[2].field_0x8 != 1) goto LAB_14b8433d8;
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar5 = UDS_MovementCore::GetActorFootLocation(this_00,&local_150);
  }
  dVar1 = (pTVar5->field0_0x0)._s_0.Y;
  (this->PreSourceLocation).field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
  (this->PreSourceLocation).field0_0x0._s_0.Y = dVar1;
  (this->PreSourceLocation).field0_0x0._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
LAB_14b8433d8:
  local_158[0] = 7;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_158);
  return;
}

// OnTickComponent @ 14b848540

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

void __thiscall UDS_MoveToPointAbility::OnTickComponent(UDS_MoveToPointAbility *this,float param_1)

{
  TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr> *this_00;
  code *pcVar1;
  bool bVar2;
  EDS_MoveMode EVar3;
  EDS_MoveToPointProcessResult EVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  FDS_EntityBase *pFVar7;
  UDS_EntityData *pUVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStackY_228 [32];
  wchar_t *pwVar11;
  EDS_AbilityDeactivateType local_1f8 [8];
  FWeakObjectPtr local_1f0;
  TVector<double>_u_0 local_1e8;
  FWeakObjectPtr local_1d0;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1a8;
  TRotator<double> local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  this_00 = &this->MoveToPointAbilityData;
  bVar2 = TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0)
  ;
  if (bVar2) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_MoveToPointAbility::OnTickComponent",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_168.Ptr,0x53,L"MoveToPointAbilityData is nullptr.");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    local_1f8[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_1f8);
    return;
  }
  pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  if (*(int *)&pUVar6[2].field_0x8 == 0) {
    EVar4 = Process_AddInputVector(this);
    if (EVar4 != Success) goto LAB_14b848845;
    bVar2 = TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr>::UEOpEquals
                      (this_00,(void *)0x0);
    if (!bVar2) {
      pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      if ((*(longlong *)&pUVar6[3].field_0x10 != 0) &&
         (pFVar7 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar6[3].field_0x10),
         pFVar7 != (FDS_EntityBase *)0x0)) {
        UDS_MovementCore::GetMovementCore((ulong64)&local_1d0);
        bVar2 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_1d0,(void *)0x0
                          );
        if (!bVar2) {
          pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          (**(code **)(*(longlong *)pUVar6 + 0x338))(pUVar6,&local_1a8);
          pUVar6 = FWeakObjectPtr::Get(&local_1d0);
          (**(code **)(*(longlong *)pUVar6 + 0x338))(pUVar6,&local_1c8);
          local_1e8._s_0.X = local_1c8._s_0.X - local_1a8._s_0.X;
          local_1e8._s_0.Y = local_1c8._s_0.Y - local_1a8._s_0.Y;
          local_1e8._s_0.Z = 0.0;
          UE::Math::TVector<double>::Normalize
                    ((TVector<double> *)&local_1e8._s_0,__real_3e45798ee0000000);
          pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          pcVar1 = *(code **)(*(longlong *)pUVar6 + 0x370);
          UE::Math::TVector<double>::ToOrientationRotator
                    ((TVector<double> *)&local_1e8._s_0,&local_188);
          (*pcVar1)(pUVar6,&local_188);
        }
      }
    }
    UDS_CharData::GetData((ulong64)&local_1f0);
    bVar2 = TWeakObjectPtr<UDS_CharData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharData,FWeakObjectPtr> *)&local_1f0,(void *)0x0);
    if (!bVar2) {
      pUVar8 = (UDS_EntityData *)FWeakObjectPtr::Get(&local_1f0);
      EVar3 = UDS_EntityData::GetMoveMode(pUVar8);
      if (EVar3 != Idle) {
        pUVar8 = (UDS_EntityData *)FWeakObjectPtr::Get(&local_1f0);
        EVar3 = UDS_EntityData::GetMoveMode(pUVar8);
        if (EVar3 != SwimSubmerge) {
          return;
        }
      }
      goto LAB_14b848845;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_MoveToPointAbility::OnTickComponent",0x27,Yes);
      pwVar11 = L"charData is nullptr.";
      uVar9 = 0x69;
LAB_14b8487e0:
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_168.Ptr,uVar9,pwVar11);
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
LAB_14b84880b:
    local_1f8[0] = Cancel;
  }
  else {
    if (*(int *)&pUVar6[2].field_0x8 != 1) {
      return;
    }
    EVar4 = Process_SetActorLocation(this,param_1);
LAB_14b848845:
    if (EVar4 != Success) {
      if (EVar4 != Failure) {
        return;
      }
      local_1f8[0] = Cancel;
      goto LAB_14b848a3e;
    }
    pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    uVar9 = (uint)*(undefined8 *)&pUVar6[2].field_0x10 &
            (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar10 = (uint)((ulonglong)*(undefined8 *)&pUVar6[2].field_0x10 >> 0x20) &
             __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((double)CONCAT44(uVar10,uVar9) < __real_3e45798ee2308c3a ||
        (double)CONCAT44(uVar10,uVar9) == __real_3e45798ee2308c3a) {
      bVar2 = TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr>::UEOpEquals
                        (this_00,(void *)0x0);
      if (bVar2) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_MoveToPointAbility::SnapToDestination",0x29,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_168.Ptr,0x1c4,L"MoveToPointAbilityData is nullptr.");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_MoveToPointAbility::OnTickComponent",0x27,Yes);
          pwVar11 = L"SnapToDestination is nullptr.";
          uVar9 = 0x8e;
          goto LAB_14b8487e0;
        }
        goto LAB_14b84880b;
      }
      pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_1e8._s_0.X = (double)*(undefined8 *)&pUVar6[2].field_0x18;
      local_1e8._s_0.Y = (double)*(undefined8 *)&pUVar6[2].field_0x20;
      local_1e8._s_0.Z = (double)*(undefined8 *)(pUVar6 + 3);
      if (this->bIsLandMove == true) {
        local_1a8._s_0.X = (double)*(undefined8 *)&pUVar6[2].field_0x18;
        local_1a8._s_0.Y = (double)*(undefined8 *)&pUVar6[2].field_0x20;
        local_1a8._s_0.Z = (double)*(undefined8 *)(pUVar6 + 3);
        DS_Util::GetNPCFloorLocationByLocation
                  ((TVector<double> *)&local_1c8._s_0,(TVector<double> *)&local_1a8._s_0,
                   __real_43160000,false);
        uVar9 = SUB84(local_1c8._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar10 = (uint)((ulonglong)local_1c8._0_8_ >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar10,uVar9) &&
              (double)CONCAT44(uVar10,uVar9) != __real_3f1a36e2e0000000) ||
            (uVar9 = SUB84(local_1c8._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
            uVar10 = (uint)((ulonglong)local_1c8._8_8_ >> 0x20) &
                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
            __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar10,uVar9) &&
            (double)CONCAT44(uVar10,uVar9) != __real_3f1a36e2e0000000)) ||
           (uVar9 = SUB84(local_1c8._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar10 = (uint)((ulonglong)local_1c8._16_8_ >> 0x20) &
                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar10,uVar9) &&
           (double)CONCAT44(uVar10,uVar9) != __real_3f1a36e2e0000000)) {
          local_1e8._0_8_ = local_1c8._s_0.X;
          local_1e8._8_8_ = local_1c8._s_0.Y;
          local_1e8._s_0.Z = (double)*(float *)(this->_padding_ + 0x58) + local_1c8._s_0.Z;
        }
      }
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar6 + 0x358))(pUVar6,&local_1e8);
    }
    local_1f8[0] = Success;
  }
LAB_14b848a3e:
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_1f8);
  return;
}

// Process_AddInputVector @ 14b84c580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EDS_MoveToPointProcessResult __thiscall
UDS_MoveToPointAbility::Process_AddInputVector(UDS_MoveToPointAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  UDS_CharStateData *this_00;
  UObject *pUVar5;
  double *pdVar6;
  TVector<double> *pTVar7;
  undefined1 auStackY_208 [32];
  uint uVar8;
  wchar_t *pwVar9;
  float local_1d8 [2];
  TVector<double>_u_0 local_1d0;
  FWeakObjectPtr local_1b8;
  TVector<double>_u_0 local_1b0;
  TVector<double>_u_0 local_198;
  TVector<double> local_178;
  undefined1 local_160 [24];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  bVar1 = TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->MoveToPointAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return Failure;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_MoveToPointAbility::Process_AddInputVector",0x2e,Yes);
    pwVar9 = L"MoveToPointAbilityData is nullptr.";
    uVar8 = 0x110;
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->MoveToPointAbilityData).WeakPtr);
    pUVar4 = FWeakObjectPtr::Get(&(this->MoveToPointAbilityData).WeakPtr);
    UDS_CharStateData::GetData((ulong64)&local_1b8);
    bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_1b8,(void *)0x0);
    if (!bVar1) {
      this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_1b8);
      local_1d8[0] = 1.4013e-45;
      local_1d8[1] = 0.0;
      bVar1 = UDS_CharStateData::HasCharState(this_00,(EDS_CharState *)local_1d8);
      if (!bVar1) {
        this->bIsLandMove = true;
      }
      local_1d0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_1d0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1d0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (this->bIsLandMove == true) {
        pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pdVar6 = (double *)(**(code **)(*(longlong *)pUVar5 + 0x338))(pUVar5,local_160);
        local_198._s_0.X = *pdVar6;
        local_198._s_0.Y = pdVar6[1];
        local_198._s_0.Z = pdVar6[2];
        pTVar7 = DS_Util::GetNPCFloorLocationByLocation
                           (&local_178,(TVector<double> *)&local_198._s_0,__real_43160000,false);
      }
      else {
        pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pTVar7 = (TVector<double> *)(**(code **)(*(longlong *)pUVar5 + 0x338))(pUVar5,&local_178);
      }
      local_1d0._s_0.X = (pTVar7->field0_0x0)._s_0.X;
      local_1d0._s_0.Y = (pTVar7->field0_0x0)._s_0.Y;
      local_1d0._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
      local_1d8[0] = (float)*(double *)&pUVar3[2].field_0x10;
      bVar1 = DS_Util::IsCloseDist
                        ((TVector<double> *)&local_1d0._s_0,(TVector<double> *)&pUVar4[2].field_0x18
                         ,local_1d8);
      if (!bVar1) {
        local_1b0._s_0.X = *(double *)&pUVar4[2].field_0x18 - local_1d0._s_0.X;
        local_1b0._s_0.Z = *(double *)(pUVar4 + 3) - local_1d0._s_0.Z;
        local_1b0._s_0.Y = *(double *)&pUVar4[2].field_0x20 - local_1d0._s_0.Y;
        if (0.0 <= (*(double *)&pUVar4[2].field_0x20 - (this->PreSourceLocation).field0_0x0._s_0.Y)
                   * local_1b0._s_0.Y +
                   (*(double *)&pUVar4[2].field_0x18 - (this->PreSourceLocation).field0_0x0._s_0.X)
                   * local_1b0._s_0.X +
                   (*(double *)(pUVar4 + 3) - (this->PreSourceLocation).field0_0x0._s_0.Z) *
                   local_1b0._s_0.Z) {
          UE::Math::TVector<double>::Normalize
                    ((TVector<double> *)&local_1b0._s_0,__real_3e45798ee0000000);
          pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          (**(code **)(*(longlong *)pUVar3 + 0x2e0))(pUVar3,&local_1b0);
          (this->PreSourceLocation).field0_0x0._s_0.X = local_1d0._s_0.X;
          (this->PreSourceLocation).field0_0x0._s_0.Y = local_1d0._s_0.Y;
          (this->PreSourceLocation).field0_0x0._s_0.Z = local_1d0._s_0.Z;
          return Processing;
        }
      }
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar3 + 0x2d8))(pUVar3);
      return Success;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return Failure;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_MoveToPointAbility::Process_AddInputVector",0x2e,Yes);
    pwVar9 = L"charStateData is nullptr.";
    uVar8 = 0x119;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar8,pwVar9);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return Failure;
}

// Process_SetActorLocation @ 14b84c8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EDS_MoveToPointProcessResult __thiscall
UDS_MoveToPointAbility::Process_SetActorLocation(UDS_MoveToPointAbility *this,float param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  EDS_MoveMode EVar7;
  UDS_LogManager *pUVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  UDS_EntityData *pUVar12;
  UDS_MovementCore *pUVar13;
  TVector<double> *pTVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  undefined1 auStackY_268 [32];
  uint uVar18;
  wchar_t *pwVar19;
  TVector<double>_u_0 local_238;
  float local_220 [2];
  FWeakObjectPtr local_218;
  double local_210;
  double dStack_208;
  double local_200;
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 local_1d8;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_268;
  bVar6 = TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->MoveToPointAbilityData,(void *)0x0);
  if (bVar6) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return Failure;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_178._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_178,"UDS_MoveToPointAbility::Process_SetActorLocation",0x30,Yes);
    pwVar19 = L"MoveToPointAbilityData is nullptr.";
    uVar18 = 0x15b;
  }
  else {
    pUVar9 = FWeakObjectPtr::Get(&(this->MoveToPointAbilityData).WeakPtr);
    pUVar10 = FWeakObjectPtr::Get(&(this->MoveToPointAbilityData).WeakPtr);
    pUVar11 = FWeakObjectPtr::Get(&(this->MoveToPointAbilityData).WeakPtr);
    UDS_EntityData::GetData((ulong64)&local_218,this->_padding_);
    bVar6 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)&local_218,(void *)0x0);
    if (!bVar6) {
      pUVar12 = (UDS_EntityData *)FWeakObjectPtr::Get(&local_218);
      EVar7 = UDS_EntityData::GetMoveMode(pUVar12);
      if (EVar7 != Walk) {
        pUVar12 = (UDS_EntityData *)FWeakObjectPtr::Get(&local_218);
        EVar7 = UDS_EntityData::GetMoveMode(pUVar12);
        if (EVar7 != Run) {
          return Processing;
        }
      }
      if (*(char *)(this->_padding_ + 0x10) != '\x06') {
        this->bIsLandMove = true;
      }
      local_238._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_238._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_238._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (this->bIsLandMove == true) {
        pUVar13 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pTVar14 = UDS_MovementCore::GetActorFootLocation(pUVar13,(TVector<double> *)&local_1b8._s_0)
        ;
        local_1d8._s_0.X = (pTVar14->field0_0x0)._s_0.X;
        local_1d8._s_0.Y = (pTVar14->field0_0x0)._s_0.Y;
        local_1d8._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
        pTVar14 = DS_Util::GetNPCFloorLocationByLocation
                            ((TVector<double> *)&local_1f8._s_0,(TVector<double> *)&local_1d8._s_0,
                             __real_43160000,false);
      }
      else {
        pUVar13 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pTVar14 = UDS_MovementCore::GetActorFootLocation(pUVar13,(TVector<double> *)&local_1b8._s_0)
        ;
      }
      local_238._s_0.X = (pTVar14->field0_0x0)._s_0.X;
      local_238._s_0.Y = (pTVar14->field0_0x0)._s_0.Y;
      local_238._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
      local_220[0] = (float)*(double *)&pUVar9[2].field_0x10;
      bVar6 = DS_Util::IsCloseDist
                        ((TVector<double> *)&local_238._s_0,
                         (TVector<double> *)&pUVar10[2].field_0x18,local_220);
      uVar2 = local_238._s_0.X;
      if (!bVar6) {
        local_1f8._s_0.Y = *(double *)&pUVar10[2].field_0x20 - local_238._s_0.Y;
        local_1f8._s_0.Z = *(double *)(pUVar10 + 3) - local_238._s_0.Z;
        local_1f8._s_0.X = *(double *)&pUVar10[2].field_0x18 - local_238._s_0.X;
        if (0.0 <= (*(double *)&pUVar10[2].field_0x20 - (this->PreSourceLocation).field0_0x0._s_0.Y)
                   * local_1f8._s_0.Y +
                   (*(double *)&pUVar10[2].field_0x18 - (this->PreSourceLocation).field0_0x0._s_0.X)
                   * local_1f8._s_0.X +
                   (*(double *)(pUVar10 + 3) - (this->PreSourceLocation).field0_0x0._s_0.Z) *
                   local_1f8._s_0.Z) {
          UE::Math::TVector<double>::Normalize
                    ((TVector<double> *)&local_1f8._s_0,__real_3e45798ee0000000);
          dVar17 = (double)*(float *)&pUVar11[3].field_0x8;
          dVar16 = (double)param_1;
          local_210 = dVar17 * local_1f8._s_0.X * dVar16 + (double)uVar2;
          uVar3 = local_1f8._0_4_;
          uVar4 = local_1f8._4_4_;
          uVar5 = local_1f8._8_4_;
          uVar1 = (ulonglong)local_1f8._8_8_ >> 0x20;
          local_200 = dVar17 * local_1f8._s_0.Z * dVar16 + local_238._s_0.Z;
          dStack_208 = dVar17 * local_1f8._s_0.Y * dVar16 + local_238._s_0.Y;
          if ((this->bIsLandMove == true) &&
             (((local_1b8._s_0.X = local_210, local_1b8._s_0.Y = dStack_208,
               local_1b8._s_0.Z = local_200,
               DS_Util::GetNPCFloorLocationByLocation
                         ((TVector<double> *)&local_1d8._s_0,(TVector<double> *)&local_1b8._s_0,
                          __real_43160000,false),
               uVar18 = SUB84(local_1d8._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
               uVar15 = (uint)((ulonglong)local_1d8._0_8_ >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
               __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar15,uVar18) &&
               (double)CONCAT44(uVar15,uVar18) != __real_3f1a36e2e0000000 ||
               (uVar18 = SUB84(local_1d8._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
               uVar15 = (uint)((ulonglong)local_1d8._8_8_ >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
               __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar15,uVar18) &&
               (double)CONCAT44(uVar15,uVar18) != __real_3f1a36e2e0000000)) ||
              (uVar18 = SUB84(local_1d8._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
              uVar15 = (uint)((ulonglong)local_1d8._16_8_ >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
              __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar15,uVar18) &&
              (double)CONCAT44(uVar15,uVar18) != __real_3f1a36e2e0000000)))) {
            local_210 = local_1d8._s_0.X;
            dStack_208 = local_1d8._s_0.Y;
            local_200 = (double)*(float *)(this->_padding_ + 0x58) + local_1d8._s_0.Z;
          }
          pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          (**(code **)(*(longlong *)pUVar9 + 0x358))(pUVar9,&local_210);
          dVar16 = __real_3e45798ee0000000;
          (this->PreSourceLocation).field0_0x0._s_0.X = local_238._s_0.X;
          (this->PreSourceLocation).field0_0x0._s_0.Y = local_238._s_0.Y;
          local_198._s_0.Z = 0.0;
          local_198._0_4_ = uVar3;
          local_198._4_4_ = uVar4;
          local_198._8_4_ = uVar5;
          (this->PreSourceLocation).field0_0x0._s_0.Z = local_238._s_0.Z;
          local_198._12_4_ = (int)uVar1;
          bVar6 = UE::Math::TVector<double>::Normalize((TVector<double> *)&local_198._s_0,dVar16);
          if (bVar6) {
            UE::Math::TVector<double>::ToOrientationRotator
                      ((TVector<double> *)&local_198._s_0,(TRotator<double> *)&local_1b8._s_0);
            pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
            (**(code **)(*(longlong *)pUVar9 + 0x370))(pUVar9,&local_1b8);
          }
          return Processing;
        }
      }
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
      return Success;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return Failure;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_178._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_178,"UDS_MoveToPointAbility::Process_SetActorLocation",0x30,Yes);
    pwVar19 = L"entityData is nullptr.";
    uVar18 = 0x165;
  }
  UDS_LogManager::PrintLog(pUVar8,1,Warning,local_178.Ptr,uVar18,pwVar19);
  if ((void *)local_178._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_178._padding_);
  }
  return Failure;
}

// RotateToTarget @ 14b84e870

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

void __thiscall UDS_MoveToPointAbility::RotateToTarget(UDS_MoveToPointAbility *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FDS_EntityBase *pFVar4;
  FWeakObjectPtr local_res8;
  TVector<double>_u_0 local_68;
  double local_50;
  double local_48;
  double local_38;
  double local_30;
  TRotator<double> local_20;
  
  bVar2 = TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->MoveToPointAbilityData,(void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->MoveToPointAbilityData).WeakPtr);
    if (*(longlong *)&pUVar3[3].field_0x10 != 0) {
      pFVar4 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar3[3].field_0x10);
      if (pFVar4 != (FDS_EntityBase *)0x0) {
        UDS_MovementCore::GetMovementCore((ulong64)&local_res8);
        bVar2 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_res8,
                           (void *)0x0);
        if (!bVar2) {
          pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          (**(code **)(*(longlong *)pUVar3 + 0x338))(pUVar3,&local_38);
          pUVar3 = FWeakObjectPtr::Get(&local_res8);
          (**(code **)(*(longlong *)pUVar3 + 0x338))(pUVar3,&local_50);
          local_68._s_0.X = local_50 - local_38;
          local_68._s_0.Y = local_48 - local_30;
          local_68._s_0.Z = 0.0;
          UE::Math::TVector<double>::Normalize
                    ((TVector<double> *)&local_68._s_0,__real_3e45798ee0000000);
          pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          pcVar1 = *(code **)(*(longlong *)pUVar3 + 0x370);
          UE::Math::TVector<double>::ToOrientationRotator
                    ((TVector<double> *)&local_68._s_0,&local_20);
          (*pcVar1)(pUVar3,&local_20);
        }
      }
    }
  }
  return;
}

// SnapToDestination @ 14b850770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_MoveToPointAbility::SnapToDestination(UDS_MoveToPointAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStackY_1b8 [32];
  double local_188;
  double dStack_180;
  double local_178;
  TVector<double>_u_0 local_170;
  TVector<double>_u_0 local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar1 = TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->MoveToPointAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_MoveToPointAbility::SnapToDestination",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x1c4,L"MoveToPointAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->MoveToPointAbilityData).WeakPtr);
    local_188 = *(double *)&pUVar3[2].field_0x18;
    dStack_180 = *(double *)&pUVar3[2].field_0x20;
    local_178 = *(double *)(pUVar3 + 3);
    if (this->bIsLandMove == true) {
      local_158._s_0.X = (double)*(undefined8 *)&pUVar3[2].field_0x18;
      local_158._s_0.Y = (double)*(undefined8 *)&pUVar3[2].field_0x20;
      local_158._s_0.Z = (double)*(undefined8 *)(pUVar3 + 3);
      DS_Util::GetNPCFloorLocationByLocation
                ((TVector<double> *)&local_170._s_0,(TVector<double> *)&local_158._s_0,
                 __real_43160000,false);
      uVar4 = SUB84(local_170._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar5 = (uint)((ulonglong)local_170._0_8_ >> 0x20) &
              __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
            (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000) ||
          (uVar4 = SUB84(local_170._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar5 = (uint)((ulonglong)local_170._8_8_ >> 0x20) &
                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
          (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000)) ||
         (uVar4 = SUB84(local_170._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar5 = (uint)((ulonglong)local_170._16_8_ >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
         (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000)) {
        local_188 = local_170._s_0.X;
        dStack_180 = local_170._s_0.Y;
        local_178 = (double)*(float *)(this->_padding_ + 0x58) + local_170._s_0.Z;
      }
    }
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar3 + 0x358))(pUVar3,&local_188);
    bVar1 = true;
  }
  return bVar1;
}

// TryActivate_Entity @ 14b854290

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
UDS_MoveToPointAbility::TryActivate_Entity
          (ulong64 *param_1,double *param_2,TVector<double> *param_3,float *param_4)

{
  undefined8 uVar1;
  double dVar2;
  bool bVar3;
  FDS_EntityBase *this;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStackY_1a8 [32];
  wchar_t *pwVar8;
  EDS_AbilityTagType local_168 [8];
  FWeakObjectPtr local_160;
  undefined8 local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (((*param_1 == 0) ||
      (((uVar6 = (uint)*(undefined8 *)&param_3->field0_0x0 &
                 (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar7 = (uint)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar7,uVar6) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar7,uVar6) == __real_3f1a36e2e0000000 &&
        (uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8),
        uVar6 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar7 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar7,uVar6) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar7,uVar6) == __real_3f1a36e2e0000000)) &&
       (uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10),
       uVar6 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar7 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar7,uVar6) < __real_3f1a36e2e0000000 ||
       (double)CONCAT44(uVar7,uVar6) == __real_3f1a36e2e0000000)))) ||
     ((float)((uint)*param_4 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_MoveToPointAbility::TryActivate_Entity",0x2a,Yes);
    pwVar8 = L"Invalid parameter.";
    uVar6 = 0xd0;
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_MoveToPointAbility::TryActivate_Entity",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xd7,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b854502;
    }
    local_168[0] = MoveToPoint;
    UDS_AbilityDataSet::GetAbilityData<UDS_MoveToPointAbilityData>
              ((ulong64 *)&local_160,(EDS_AbilityTagType *)param_1);
    bVar3 = TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr> *)&local_160,
                       (void *)0x0);
    if (!bVar3) {
      pUVar5 = FWeakObjectPtr::Get(&local_160);
      *(undefined4 *)&pUVar5[2].field_0x8 = 1;
      pUVar5 = FWeakObjectPtr::Get(&local_160);
      *(double *)&pUVar5[2].field_0x10 = *param_2;
      pUVar5 = FWeakObjectPtr::Get(&local_160);
      dVar2 = (param_3->field0_0x0)._s_0.Y;
      *(double *)&pUVar5[2].field_0x18 = (param_3->field0_0x0)._s_0.X;
      *(double *)&pUVar5[2].field_0x20 = dVar2;
      *(double *)(pUVar5 + 3) = (param_3->field0_0x0)._s_0.Z;
      pUVar5 = FWeakObjectPtr::Get(&local_160);
      local_158[0] = 0;
      local_168[0] = MoveToPoint;
      *(float *)&pUVar5[3].field_0x8 = *param_4;
      bVar3 = FDS_EntityBase::TryActivateAbility
                        (this,local_168,(TObjectPtr<UWN_AbilityContext>)local_158);
      return bVar3;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_MoveToPointAbility::TryActivate_Entity",0x2a,Yes);
    pwVar8 = L"abilityData is nullptr.";
    uVar6 = 0xde;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar6,pwVar8);
LAB_14b854502:
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

// TryActivate_MainCharacter @ 14b854550

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
UDS_MoveToPointAbility::TryActivate_MainCharacter
          (ulong64 *param_1,double *param_2,TVector<double> *param_3,ulong64 *param_4)

{
  undefined8 uVar1;
  double dVar2;
  bool bVar3;
  FDS_EntityBase *this;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStackY_1a8 [32];
  wchar_t *pwVar8;
  EDS_AbilityTagType local_168 [8];
  FWeakObjectPtr local_160;
  undefined8 local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((*param_1 == 0) ||
     (((uVar6 = (uint)*(undefined8 *)&param_3->field0_0x0 &
                (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar7 = (uint)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar7,uVar6) < __real_3f1a36e2e0000000 ||
       (double)CONCAT44(uVar7,uVar6) == __real_3f1a36e2e0000000 &&
       (uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8),
       uVar6 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar7 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar7,uVar6) < __real_3f1a36e2e0000000 ||
       (double)CONCAT44(uVar7,uVar6) == __real_3f1a36e2e0000000)) &&
      (uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10),
      uVar6 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar7 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar7,uVar6) < __real_3f1a36e2e0000000 ||
      (double)CONCAT44(uVar7,uVar6) == __real_3f1a36e2e0000000)))) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_MoveToPointAbility::TryActivate_MainCharacter",0x31,Yes);
    pwVar8 = L"Invalid parameter.";
    uVar6 = 0xa8;
LAB_14b8547ef:
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar6,pwVar8);
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)this;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_MoveToPointAbility::TryActivate_MainCharacter",0x31,Yes);
      pwVar8 = L"sourceEntity is nullptr. (%llu)";
      uVar6 = 0xaf;
    }
    else {
      if (this->EntityType == MainCharacter) {
        local_168[0] = MoveToPoint;
        UDS_AbilityDataSet::GetAbilityData<UDS_MoveToPointAbilityData>
                  ((ulong64 *)&local_160,(EDS_AbilityTagType *)param_1);
        bVar3 = TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr> *)&local_160,
                           (void *)0x0);
        if (!bVar3) {
          pUVar5 = FWeakObjectPtr::Get(&local_160);
          *(undefined4 *)&pUVar5[2].field_0x8 = 0;
          pUVar5 = FWeakObjectPtr::Get(&local_160);
          *(double *)&pUVar5[2].field_0x10 = *param_2;
          pUVar5 = FWeakObjectPtr::Get(&local_160);
          dVar2 = (param_3->field0_0x0)._s_0.Y;
          *(double *)&pUVar5[2].field_0x18 = (param_3->field0_0x0)._s_0.X;
          *(double *)&pUVar5[2].field_0x20 = dVar2;
          *(double *)(pUVar5 + 3) = (param_3->field0_0x0)._s_0.Z;
          pUVar5 = FWeakObjectPtr::Get(&local_160);
          local_158[0] = 0;
          local_168[0] = MoveToPoint;
          *(ulong64 *)&pUVar5[3].field_0x10 = *param_4;
          bVar3 = FDS_EntityBase::TryActivateAbility
                            (this,local_168,(TObjectPtr<UWN_AbilityContext>)local_158);
          return bVar3;
        }
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar4 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_MoveToPointAbility::TryActivate_MainCharacter",0x31,Yes);
        pwVar8 = L"abilityData is nullptr.";
        uVar6 = 0xbc;
        goto LAB_14b8547ef;
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_MoveToPointAbility::TryActivate_MainCharacter",0x31,Yes);
      pwVar8 = L"sourceEntity is not MainCharacter. (%llu)";
      uVar6 = 0xb5;
    }
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar6,pwVar8);
  }
  if ((FDS_EntityBase *)local_148._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

