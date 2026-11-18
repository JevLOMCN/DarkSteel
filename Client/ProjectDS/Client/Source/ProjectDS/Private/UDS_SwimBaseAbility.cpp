// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// GetSwimStep @ 14b414020

EDS_SwimStep __thiscall UDS_SwimBaseAbility::GetSwimStep(UDS_SwimBaseAbility *this)

{
  return Max;
}

// ShouldCheckDiveConditionOnWaterVolumeChange @ 14b4140a0

bool __thiscall
UDS_SwimBaseAbility::ShouldCheckDiveConditionOnWaterVolumeChange(UDS_SwimBaseAbility *this)

{
  return false;
}

// ShouldStopAbilityOnExhaustedStamina @ 14b414140

bool __thiscall UDS_SwimBaseAbility::ShouldStopAbilityOnExhaustedStamina(UDS_SwimBaseAbility *this)

{
  return false;
}

// StaticClass @ 14b4141f0

UClass * __cdecl UDS_SwimBaseAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SwimBaseAbility.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SwimBaseAbility",
               &Z_Registration_Info_UClass_UDS_SwimBaseAbility.InnerSingleton,
               StaticRegisterNativesUDS_SwimBaseAbility,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SwimBaseAbility>,
               InternalVTableHelperCtorCaller<UDS_SwimBaseAbility>,aFStackX_8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SwimBaseAbility.InnerSingleton;
}

// UDS_SwimBaseAbility @ 14b5b1760

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

UDS_SwimBaseAbility * __thiscall
UDS_SwimBaseAbility::UDS_SwimBaseAbility(UDS_SwimBaseAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->SwimAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->MainCharacter).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_SwimBaseAbility @ 14b5b17b0

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

UDS_SwimBaseAbility * __thiscall
UDS_SwimBaseAbility::UDS_SwimBaseAbility(UDS_SwimBaseAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->SwimAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->MainCharacter).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_SwimBaseAbility @ 14b5b2690

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

void __thiscall UDS_SwimBaseAbility::~UDS_SwimBaseAbility(UDS_SwimBaseAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b4150

UClass * __cdecl UDS_SwimBaseAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SwimBaseAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SwimBaseAbility",
               &Z_Registration_Info_UClass_UDS_SwimBaseAbility.InnerSingleton,
               StaticRegisterNativesUDS_SwimBaseAbility,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SwimBaseAbility>,
               InternalVTableHelperCtorCaller<UDS_SwimBaseAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SwimBaseAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_SwimBaseAbility @ 14b5b5880

void __cdecl UDS_SwimBaseAbility::StaticRegisterNativesUDS_SwimBaseAbility(void)

{
  return;
}

// CanNextStep @ 14b825ea0

bool __thiscall UDS_SwimBaseAbility::CanNextStep(UDS_SwimBaseAbility *this,EDS_SwimStep param_1)

{
  bool bVar1;
  UDS_SwimAbilityData *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->SwimAbilityData).WeakPtr);
  if (!bVar1) {
    return false;
  }
  this_00 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get(&(this->SwimAbilityData).WeakPtr);
  bVar1 = UDS_SwimAbilityData::CanNextStep(this_00,param_1);
  return bVar1;
}

// CheckEnoughCost @ 14b8266e0

bool __thiscall UDS_SwimBaseAbility::CheckEnoughCost(UDS_SwimBaseAbility *this,EDS_SwimStep param_1)

{
  bool bVar1;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar2;
  UDS_SwimAbilityData *this_01;
  FDS_SwimStepInfo *pFVar3;
  FWeakObjectPtr local_res8;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->SwimAbilityData).WeakPtr);
  if (bVar1) {
    UDS_CharStatusData::GetData((ulong64)&local_res8);
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_res8);
      pFVar2 = UDS_CharStatusData::GetStatusInfo(this_00,Stamina);
      if (pFVar2 != (FDS_StatusInfo *)0x0) {
        this_01 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get(&(this->SwimAbilityData).WeakPtr);
        pFVar3 = UDS_SwimAbilityData::GetSwimStepInfo(this_01,param_1);
        return pFVar3->UseCostStamina <= pFVar2->CurrentValue;
      }
    }
  }
  return false;
}

// CheckRequiredStaminaWithMessage @ 14b8267a0

bool __thiscall
UDS_SwimBaseAbility::CheckRequiredStaminaWithMessage(UDS_SwimBaseAbility *this,EDS_SwimStep param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar4;
  FWeakObjectPtr local_res8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    UDS_CharStatusData::GetData((ulong64)&local_res8);
    bVar2 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&local_res8,(void *)0x0)
    ;
    if (!bVar2) {
      this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_res8);
      pFVar4 = UDS_CharStatusData::GetStatusInfo(this_00,Stamina);
      if (pFVar4 != (FDS_StatusInfo *)0x0) {
        iVar1 = pFVar4->CurrentValue;
        iVar3 = DS_CommonDataHelper::RateMinRequireDiveStamina();
        if (iVar1 < (int)((float)iVar3 * pFVar4->MaxValue * __real_358637bd)) {
          local_28._0_8_ = 0;
          local_28._8_8_ = 0;
          local_28._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x4ca92,Alert_System_01,&local_28);
          return false;
        }
      }
    }
  }
  return true;
}

// DoNextStep @ 14b82cce0

void __thiscall UDS_SwimBaseAbility::DoNextStep(UDS_SwimBaseAbility *this,EDS_SwimStep param_1)

{
  bool bVar1;
  UDS_SwimAbilityData *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->SwimAbilityData).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get(&(this->SwimAbilityData).WeakPtr);
    UDS_SwimAbilityData::DoNextStep(this_00,param_1);
  }
  return;
}

// GetCurrentWaterVolumeTableRow @ 14b8314e0

FDS_WaterVolumeTableRow * __thiscall
UDS_SwimBaseAbility::GetCurrentWaterVolumeTableRow(UDS_SwimBaseAbility *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  longlong lVar4;
  FString *pFVar5;
  FDS_WaterVolumeTableRow *pFVar6;
  FWeakObjectPtr local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  ADS_MainCharacter::GetMainPlayer();
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res10);
    lVar4 = (**(code **)(*(longlong *)pUVar3 + 0x510))(pUVar3);
    if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x304) & 1) != 0)) {
      local_res18[0] = *(FName *)(lVar4 + 0x18);
      ::FName::ToString(local_res18,&local_28);
      pFVar5 = ::FString::FString(&local_18,&local_28);
      pFVar6 = FDS_WaterVolumeTableRow::GetRefByUniqueID(pFVar5);
      bVar2 = FDS_WaterVolumeTableRow::IsValid(pFVar6);
      if (!bVar2) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6628968243950256446>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_SwimBaseAbility.cpp"
                           ,0x13e,"waterVolumeTable.IsValid()");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FDS_WaterVolumeTableRow *)(*pcVar1)();
          return pFVar6;
        }
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return pFVar6;
    }
  }
  return &FDS_WaterVolumeTableRow::DefaultObject;
}

// IsFullySubmerged @ 14b836300

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

bool __thiscall UDS_SwimBaseAbility::IsFullySubmerged(UDS_SwimBaseAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_CharStateData *this_00;
  EDS_CharDetailState local_res8 [2];
  FWeakObjectPtr local_res10 [3];
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->MainCharacter).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
    FDS_EntityBase::GetCharStateData((FDS_EntityBase *)&pUVar2[0x29].field_0x10);
    bVar1 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar1) {
      this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
      local_res8[0] = SwimSubmerge;
      bVar1 = UDS_CharStateData::HasCharDetailState(this_00,local_res8);
      return bVar1;
    }
  }
  return false;
}

// IsNearSurface @ 14b836380

bool __thiscall UDS_SwimBaseAbility::IsNearSurface(UDS_SwimBaseAbility *this)

{
  TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *this_00;
  bool bVar1;
  UObject *pUVar2;
  ADS_MainCharacter *this_01;
  UDS_CharacterTrajectoryComponent *this_02;
  FTransformTrajectory *pFVar3;
  uint uVar4;
  uint uVar5;
  FWeakObjectPtr local_res8 [4];
  TVector<double> local_68;
  FTransformTrajectorySample local_48;
  
  this_00 = &this->MainCharacter;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    (**(code **)(*(longlong *)&pUVar2[0x29].field_0x10 + 0x1c0))
              (&pUVar2[0x29].field_0x10,local_res8);
    bVar1 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar1) {
      this_01 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      ADS_MainCharacter::GetFluxSurfaceLocation(this_01,&local_68);
      uVar4 = SUB84(local_68.field0_0x0._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar5 = (uint)((ulonglong)local_68.field0_0x0._0_8_ >> 0x20) &
              __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((((double)CONCAT44(uVar5,uVar4) < __real_3fb99999a0000000 ||
            (double)CONCAT44(uVar5,uVar4) == __real_3fb99999a0000000) &&
          (uVar4 = SUB84(local_68.field0_0x0._s_0.Y,0) &
                   (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar5 = (uint)((ulonglong)local_68.field0_0x0._8_8_ >> 0x20) &
                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          (double)CONCAT44(uVar5,uVar4) < __real_3fb99999a0000000 ||
          (double)CONCAT44(uVar5,uVar4) == __real_3fb99999a0000000)) &&
         (uVar4 = SUB84(local_68.field0_0x0._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
         , uVar5 = (uint)((ulonglong)local_68.field0_0x0._16_8_ >> 0x20) &
                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         (double)CONCAT44(uVar5,uVar4) < __real_3fb99999a0000000 ||
         (double)CONCAT44(uVar5,uVar4) == __real_3fb99999a0000000)) {
        return true;
      }
      local_48.Facing.X = UE::Math::TQuat<double>::Identity.X;
      local_48.Facing.Y = UE::Math::TQuat<double>::Identity.Y;
      local_48.TimeInSeconds = 0.0;
      local_48.Facing.Z = UE::Math::TQuat<double>::Identity.Z;
      local_48.Facing.W = UE::Math::TQuat<double>::Identity.W;
      local_48.Position.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_48.Position.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_48.Position.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      this_02 = (UDS_CharacterTrajectoryComponent *)FWeakObjectPtr::Get(local_res8);
      pFVar3 = UDS_CharacterTrajectoryComponent::GetPoseSearchQueryTrajectory(this_02);
      UPoseSearchTrajectoryLibrary::GetTransformTrajectorySampleAtTime
                (pFVar3,__real_3f19999a,&local_48,false);
      return local_68.field0_0x0._s_0.Z < local_48.Position.field0_0x0._s_0.Z;
    }
  }
  return false;
}

// IsValidReferencedPtr @ 14b836a50

bool __thiscall UDS_SwimBaseAbility::IsValidReferencedPtr(UDS_SwimBaseAbility *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->MainCharacter).WeakPtr);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->SwimAbilityData).WeakPtr);
    if (bVar1) {
      bVar1 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

// NotifyActionProgressFlicker @ 14b836e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_SwimBaseAbility::NotifyActionProgressFlicker(UDS_SwimBaseAbility *this)

{
  UDS_EventManager *this_00;
  UDS_LogManager *pUVar1;
  UDS_UIEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    if ((char)this_00->_padding_ == '\x01') {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 != (UDS_LogManager *)0x0) {
        pUVar1 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_EventManager::GetEvent",0x1a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar1,1,Warning,local_138.Ptr,0x31,
                   L"Cannot access event during UDS_EventManager destruction.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
          return;
        }
      }
    }
    else {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_UIEvent>(this_00);
      if (pUVar2 != (UDS_UIEvent *)0x0) {
        FDS_EventDelegate<enum_EDS_ActionProgressType>::Broadcast
                  (&pUVar2->OnActionProgressFlicker,Fly);
      }
    }
  }
  return;
}

// OnCanActivate @ 14b83ae10

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

bool __thiscall UDS_SwimBaseAbility::OnCanActivate(UDS_SwimBaseAbility *this)

{
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *this_00;
  int iVar1;
  bool bVar2;
  char cVar3;
  EDS_SwimStep EVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_SwimAbilityData,FWeakObjectPtr> TVar6;
  UObject *pUVar7;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar8;
  UDS_CharStateData *this_01;
  UDS_CharStatusData *this_02;
  FDS_StatusInfo *pFVar9;
  UDS_SwimAbilityData *this_03;
  FDS_SwimStepInfo *pFVar10;
  FWeakObjectPtr local_res10;
  ulong64 local_res18 [2];
  
  bVar2 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (!bVar2) {
    return false;
  }
  bVar2 = FWeakObjectPtr::IsValid(&(this->MainCharacter).WeakPtr);
  if (bVar2) goto LAB_14b83aea5;
  local_res10 = (FWeakObjectPtr)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (local_res10 == (FWeakObjectPtr)0x0) {
LAB_14b83ae77:
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
  }
  else {
    pUVar5 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)((longlong)local_res10 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)local_res10 + 0x10) + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) goto LAB_14b83ae77;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (FWeakObjectPtr)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  FWeakObjectPtr::operator=(&(this->MainCharacter).WeakPtr,(FObjectPtr)&local_res10);
LAB_14b83aea5:
  bVar2 = FWeakObjectPtr::IsValid(&(this->MainCharacter).WeakPtr);
  if (!bVar2) {
    return false;
  }
  bVar2 = FWeakObjectPtr::IsValid(&(this->SwimAbilityData).WeakPtr);
  if (!bVar2) {
    local_res10.ObjectIndex._0_1_ = 5;
    TVar6 = UDS_AbilityDataSet::GetAbilityData<UDS_SwimAbilityData>
                      (local_res18,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
    (this->SwimAbilityData).WeakPtr = *TVar6.WeakPtr;
  }
  this_00 = &this->CharStateData;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (!bVar2) {
    pUVar7 = FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
    TVar8 = FDS_EntityBase::GetCharStateData((FDS_EntityBase *)&pUVar7[0x29].field_0x10);
                    /* WARNING: Load size is inaccurate */
    this_00->WeakPtr = *TVar8.WeakPtr;
  }
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar2) {
    this_01 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_res10.ObjectIndex = 1;
    local_res10.ObjectSerialNumber = 0;
    bVar2 = UDS_CharStateData::HasCharState(this_01,(EDS_CharState *)&local_res10);
    if (!bVar2) {
      return false;
    }
  }
  cVar3 = (**(code **)(this->_padding_ + 1000))(this);
  if (cVar3 == '\x01') {
    EVar4 = (**(code **)(this->_padding_ + 0x3d8))(this);
    bVar2 = FWeakObjectPtr::IsValid(&(this->SwimAbilityData).WeakPtr);
    if (!bVar2) {
      return false;
    }
    UDS_CharStatusData::GetData((ulong64)&local_res10);
    bVar2 = FWeakObjectPtr::IsValid(&local_res10);
    if (!bVar2) {
      return false;
    }
    this_02 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_res10);
    pFVar9 = UDS_CharStatusData::GetStatusInfo(this_02,Stamina);
    if (pFVar9 == (FDS_StatusInfo *)0x0) {
      return false;
    }
    this_03 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get(&(this->SwimAbilityData).WeakPtr);
    pFVar10 = UDS_SwimAbilityData::GetSwimStepInfo(this_03,EVar4);
    if (pFVar9->CurrentValue < pFVar10->UseCostStamina) {
      return false;
    }
  }
  bVar2 = FWeakObjectPtr::IsValid(&(this->MainCharacter).WeakPtr);
  if (((bVar2) && (bVar2 = FWeakObjectPtr::IsValid(&(this->SwimAbilityData).WeakPtr), bVar2)) &&
     (bVar2 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr), bVar2)) {
    return true;
  }
  return false;
}

// OnChangedSwimStamina @ 14b83d290

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

void __thiscall UDS_SwimBaseAbility::OnChangedSwimStamina(UDS_SwimBaseAbility *this,float param_1)

{
  EDS_AbilityDeactivateType local_res8 [32];
  
  local_res8[0] = (**(code **)(this->_padding_ + 1000))();
  if ((local_res8[0] == Success) && (param_1 <= 0.0)) {
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  }
  return;
}

// OnDeactivateAbility @ 14b83fae0

void __thiscall UDS_SwimBaseAbility::OnDeactivateAbility(UDS_SwimBaseAbility *this,bool *param_1)

{
  char cVar1;
  bool bVar2;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar3;
  UDS_SwimEvent *pUVar4;
  FWeakObjectPtr local_res8 [4];
  
  cVar1 = (**(code **)(this->_padding_ + 1000))();
  if (cVar1 == '\x01') {
    UDS_CharStatusData::GetData((ulong64)local_res8);
    bVar2 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)local_res8,(void *)0x0);
    if (!bVar2) {
      this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(local_res8);
      pFVar3 = UDS_CharStatusData::GetStatusInfo(this_00,Stamina);
      if (pFVar3 != (FDS_StatusInfo *)0x0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pFVar3->ChangeCurrentValueDelegate,this);
      }
    }
  }
  cVar1 = (**(code **)(this->_padding_ + 0x3f0))(this);
  if (cVar1 == '\x01') {
    pUVar4 = UDS_SwimEvent::GetEvent();
    if (pUVar4 != (UDS_SwimEvent *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->OnWaterVolumeChanged
                 ,this);
      return;
    }
  }
  return;
}

// OnPostActivateAbility @ 14b8463a0

void __thiscall UDS_SwimBaseAbility::OnPostActivateAbility(UDS_SwimBaseAbility *this)

{
  char cVar1;
  bool bVar2;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar3;
  UDS_SwimEvent *pUVar4;
  FWeakObjectPtr local_res8 [2];
  
  cVar1 = (**(code **)(this->_padding_ + 1000))();
  if (cVar1 == '\x01') {
    UDS_CharStatusData::GetData((ulong64)local_res8);
    bVar2 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)local_res8,(void *)0x0);
    if (!bVar2) {
      this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(local_res8);
      pFVar3 = UDS_CharStatusData::GetStatusInfo(this_00,Stamina);
      if (pFVar3 != (FDS_StatusInfo *)0x0) {
        TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_SwimBaseAbility>
                  ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *
                   )&pFVar3->ChangeCurrentValueDelegate,(UDS_SwimBaseAbility *)(local_res8 + 1),
                   (pmf_0553700b *)this);
      }
    }
  }
  cVar1 = (**(code **)(this->_padding_ + 0x3f0))(this);
  if (cVar1 == '\x01') {
    pUVar4 = UDS_SwimEvent::GetEvent();
    if (pUVar4 != (UDS_SwimEvent *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->OnWaterVolumeChanged
                 ,this);
      TMulticastDelegateRegistration<void___cdecl(APhysicsVolume_const_*),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_SwimBaseAbility>
                ((TMulticastDelegateRegistration<void___cdecl(APhysicsVolume_const_*),FDefaultDelegateUserPolicy>
                  *)&pUVar4->OnWaterVolumeChanged,(UDS_SwimBaseAbility *)local_res8,
                 (pmf_53a7614f *)this);
    }
  }
  return;
}

// OnWaterVolumeChanged @ 14b84a9b0

void __thiscall
UDS_SwimBaseAbility::OnWaterVolumeChanged(UDS_SwimBaseAbility *this,APhysicsVolume *param_1)

{
  return;
}

