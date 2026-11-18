// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 37

// StaticClass @ 14b40ca10

UClass * __cdecl UDS_AirWalkAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirWalkAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirWalkAbilityData",
               &Z_Registration_Info_UClass_UDS_AirWalkAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_AirWalkAbilityData,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AirWalkAbilityData>,
               InternalVTableHelperCtorCaller<UDS_AirWalkAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirWalkAbilityData.InnerSingleton;
}

// UDS_AirWalkAbilityData @ 14b4115c0

UDS_AirWalkAbilityData * __thiscall
UDS_AirWalkAbilityData::UDS_AirWalkAbilityData(UDS_AirWalkAbilityData *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AirWalkAbilityData__6B_;
  (this->FallingHigherTimerHandle).Handle = 0;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->AirWalkStepInfoMap = 0;
  *(undefined8 *)&(this->AirWalkStepInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->AirWalkStepInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->AirWalkStepInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->AirWalkStepInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AirWalkStepInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->AirWalkStepInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AirWalkStepInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->AirWalkStepInfoMap).field_0x48 = 0;
  this->PrevAirWalkStep = Ready;
  this->StepStartTime = 0.0;
  this->FallingStartTime = 0.0;
  this->bIsFalling = false;
  this->bIsFlying = false;
  this->bIsFlyingCrash = false;
  this->bFallingHigher = false;
  this->bIsStopping = false;
  this->bIsAirAttack = false;
  this->AirwalkCooltime = 0.0;
  this->AirwalkCoolEndTime = 0.0;
  *(undefined8 *)&this->OnLandEnterDelegate = 0;
  *(undefined8 *)&(this->OnLandEnterDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnLandEnterDelegate).field_0x10 = 0;
  this->AirWalkStep = Ready;
  this->AbilityTagType = AirWalk_Process;
  *(undefined8 *)&(this->OnLandEnterDelegate).field_0x18 = 2;
  return this;
}

// ~UDS_AirWalkAbilityData @ 14b411fc0

void __thiscall UDS_AirWalkAbilityData::~UDS_AirWalkAbilityData(UDS_AirWalkAbilityData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_AirWalkAbilityData__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLandEnterDelegate).field_0x8,*(int *)&(this->OnLandEnterDelegate).field_0x10
            );
  pvVar1 = *(void **)&(this->OnLandEnterDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLandEnterDelegate);
  *(undefined4 *)&(this->AirWalkStepInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AirWalkStepInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_AirWalkStep,TSharedPtr<FDS_AirWalkStepInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_AirWalkStep,TSharedPtr<FDS_AirWalkStepInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->AirWalkStepInfoMap);
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b413960

UClass * __cdecl UDS_AirWalkAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirWalkAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirWalkAbilityData",
               &Z_Registration_Info_UClass_UDS_AirWalkAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_AirWalkAbilityData,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AirWalkAbilityData>,
               InternalVTableHelperCtorCaller<UDS_AirWalkAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirWalkAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_AirWalkAbilityData @ 14b4142c0

void __cdecl UDS_AirWalkAbilityData::StaticRegisterNativesUDS_AirWalkAbilityData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_AirWalkAbilityData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnGroundAfterFallingHigherTimer @ 14b415920

void __cdecl
UDS_AirWalkAbilityData::execOnGroundAfterFallingHigherTimer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnGroundAfterFallingHigherTimer((UDS_AirWalkAbilityData *)param_1);
  return;
}

// UDS_AirWalkAbilityData @ 14b9d7ef0

UDS_AirWalkAbilityData * __thiscall
UDS_AirWalkAbilityData::UDS_AirWalkAbilityData
          (UDS_AirWalkAbilityData *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AirWalkAbilityData__6B_;
  (this->FallingHigherTimerHandle).Handle = 0;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->AirWalkStepInfoMap = 0;
  *(undefined8 *)&(this->AirWalkStepInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->AirWalkStepInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->AirWalkStepInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->AirWalkStepInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AirWalkStepInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->AirWalkStepInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AirWalkStepInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->AirWalkStepInfoMap).field_0x48 = 0;
  this->PrevAirWalkStep = Ready;
  this->StepStartTime = 0.0;
  this->FallingStartTime = 0.0;
  this->bIsFalling = false;
  this->bIsFlying = false;
  this->bIsFlyingCrash = false;
  this->bFallingHigher = false;
  this->bIsStopping = false;
  this->bIsAirAttack = false;
  this->AirwalkCooltime = 0.0;
  this->AirwalkCoolEndTime = 0.0;
  *(undefined8 *)&this->OnLandEnterDelegate = 0;
  *(undefined8 *)&(this->OnLandEnterDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnLandEnterDelegate).field_0x10 = 0;
  this->AirWalkStep = Ready;
  this->AbilityTagType = AirWalk_Process;
  *(undefined8 *)&(this->OnLandEnterDelegate).field_0x18 = 2;
  return this;
}

// ActivateStep @ 14b9de690

void __thiscall
UDS_AirWalkAbilityData::ActivateStep(UDS_AirWalkAbilityData *this,EDS_AirWalkStep param_1)

{
  FDS_AirWalkStepInfo *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSharedPtr<FDS_AirWalkStepInfo,1> *pTVar5;
  undefined1 *puVar6;
  double dVar7;
  
  this->AirWalkStep = param_1;
  if ((param_1 != Ready) &&
     (*(int *)&(this->AirWalkStepInfoMap).field_0x8 !=
      *(int *)&(this->AirWalkStepInfoMap).field_0x34)) {
    puVar6 = *(undefined1 **)&(this->AirWalkStepInfoMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->AirWalkStepInfoMap).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + ((ulonglong)(*(int *)&(this->AirWalkStepInfoMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar4 != -1) {
      while (*(EDS_AirWalkStep *)((longlong)iVar4 * 0x20 + *(longlong *)&this->AirWalkStepInfoMap)
             != param_1) {
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)&this->AirWalkStepInfoMap);
        if (iVar4 == -1) {
          return;
        }
      }
      pTVar5 = TMapBase<enum_EDS_AirWalkStep,TSharedPtr<FDS_AirWalkStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AirWalkStep,TSharedPtr<FDS_AirWalkStepInfo,1>,0>_>
               ::FindChecked(&this->AirWalkStepInfoMap,param_1);
      if (pTVar5->Object == (FDS_AirWalkStepInfo *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar1 = pTVar5->Object;
      dVar7 = UDS_TimeUtilManager::GetCurrentServerTime();
      pFVar1->IsActive = true;
      pFVar1->ActivationStartTime = dVar7;
      pFVar1->ActivationEndTime = (double)pFVar1->AirWalkTime + dVar7;
      UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
    }
  }
  return;
}

// CheckAirWalkTime @ 14b9e2640

bool __thiscall
UDS_AirWalkAbilityData::CheckAirWalkTime(UDS_AirWalkAbilityData *this,EDS_AirWalkStep param_1)

{
  FDS_AirWalkStepInfo *pFVar1;
  double dVar2;
  
  pFVar1 = GetAirWalkStepInfo(this,param_1);
  dVar2 = UDS_TimeUtilManager::GetCurrentServerTime();
  return dVar2 < pFVar1->ActivationEndTime || dVar2 == pFVar1->ActivationEndTime;
}

// CheckCharacterState @ 14b9e2940

bool __thiscall
UDS_AirWalkAbilityData::CheckCharacterState(UDS_AirWalkAbilityData *this,EDS_AirWalkStep param_1)

{
  bool bVar1;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar2;
  UDS_CharStateData *this_00;
  EDS_CharState local_res8;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
  if (!bVar1) {
    UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
    TVar2 = UDS_CharStateData::GetData((ulong64)&local_res8);
                    /* WARNING: Load size is inaccurate */
    (this->CharStateData).WeakPtr = *TVar2.WeakPtr;
    bVar1 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
    if (!bVar1) {
      return false;
    }
  }
  this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
  if (1 < (byte)(param_1 - PowerJumpCharging)) {
    local_res8 = Battle|Skill|Avoid|Swim;
    bVar1 = UDS_CharStateData::HasCharState(this_00,&local_res8);
    if (bVar1) {
      return false;
    }
    return true;
  }
  local_res8 = Skill|Avoid|Swim;
  bVar1 = UDS_CharStateData::HasCharState(this_00,&local_res8);
  return !bVar1;
}

// CheckCoolTime @ 14b9e2ae0

bool __thiscall UDS_AirWalkAbilityData::CheckCoolTime(UDS_AirWalkAbilityData *this)

{
  double dVar1;
  
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  return this->AirwalkCoolEndTime <= dVar1;
}

// Created @ 14b9e61b0

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

void __thiscall UDS_AirWalkAbilityData::Created(UDS_AirWalkAbilityData *this)

{
  bool bVar1;
  UDS_DataSetBase *this_00;
  TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> this_01;
  FDS_EntityBase *pFVar2;
  FWeakObjectPtr *pFVar3;
  UObject *pUVar4;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar5;
  UDS_LogManager *pUVar6;
  undefined1 auStackY_1e8 [32];
  FWeakObjectPtr local_1b8;
  ulong64 local_1b0;
  undefined1 local_1a8 [56];
  longlong lStack_170;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    this_01 = UDS_DataSetBase::GetMyDataSetContainer(this_00);
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01.WeakPtr);
    if (bVar1) {
      UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
      UDS_CharStateData::GetData((ulong64)&local_1b8);
      bVar1 = FWeakObjectPtr::IsValid(&local_1b8);
      if (bVar1) {
        local_1b0 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
        pFVar2 = FDS_EntityBase::GetEntityBase(&local_1b0);
        if (pFVar2 != (FDS_EntityBase *)0x0) {
          pFVar3 = (FWeakObjectPtr *)(**(code **)(pFVar2->_padding_ + 0x150))(pFVar2,local_1a8);
          (this->OwnerActor).WeakPtr = *pFVar3;
        }
        pUVar4 = FWeakObjectPtr::Get(&local_1b8);
        TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_AirWalkAbilityData>
                  ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                    *)&pUVar4[7].field_0x20,(UDS_AirWalkAbilityData *)local_1a8,(pmf_bd74d7ff)this);
        local_1a8._8_4_ = FGameplayTag::EmptyTag.TagName.ComparisonIndex.Value;
        local_1a8._12_4_ = FGameplayTag::EmptyTag.TagName.Number;
        local_1a8[0x10] = 0;
        lStack_170 = (ulonglong)(uint7)local_1a8._17_7_ << 8;
        local_1a8._24_8_ = 0;
        local_1a8._32_8_ = 0;
        local_1a8._40_8_ = 0;
        local_1a8._48_4_ = FGameplayTag::EmptyTag.TagName.ComparisonIndex.Value;
        local_1a8._52_4_ = FGameplayTag::EmptyTag.TagName.Number;
        local_158 = 0;
        local_168 = 0;
        lStack_160 = 0;
        OnChangedCharState(this,(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)local_1b8,
                           (FDS_ChangedCharStateInfo *)(local_1a8 + 0x30));
        bVar1 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
        if (!bVar1) {
          UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
          TVar5 = UDS_CharStateData::GetData((ulong64)local_1a8);
                    /* WARNING: Load size is inaccurate */
          (this->CharStateData).WeakPtr = *TVar5.WeakPtr;
          bVar1 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
          if (!bVar1) {
            return;
          }
        }
        if ((pFVar2 != (FDS_EntityBase *)0x0) && (pFVar2->EntityType == MainCharacter)) {
          bVar1 = InitAirWalkData(this);
          if (bVar1) {
            UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
          }
          else {
            pUVar6 = UDS_LogManager::GetInst();
            if (pUVar6 != (UDS_LogManager *)0x0) {
              pUVar6 = UDS_LogManager::GetInst();
              local_148._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_148,"UDS_AirWalkAbilityData::Created",0x1f,Yes);
              UDS_LogManager::PrintLog
                        (pUVar6,1,Warning,local_148.Ptr,0x4e,
                         L"UDS_AirWalkAbilityData::OnCompleteAirWalkTableLoad() InitAirWalkData() == false"
                        );
              if ((void *)local_148._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_148._padding_);
              }
            }
          }
        }
      }
    }
  }
  return;
}

// DeActivateStep @ 14b9e6a30

void __thiscall
UDS_AirWalkAbilityData::DeActivateStep(UDS_AirWalkAbilityData *this,EDS_AirWalkStep param_1)

{
  FDS_AirWalkStepInfo *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSharedPtr<FDS_AirWalkStepInfo,1> *pTVar5;
  undefined1 *puVar6;
  double dVar7;
  
  this->PrevAirWalkStep = param_1;
  if ((param_1 != Ready) &&
     (*(int *)&(this->AirWalkStepInfoMap).field_0x8 !=
      *(int *)&(this->AirWalkStepInfoMap).field_0x34)) {
    puVar6 = *(undefined1 **)&(this->AirWalkStepInfoMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->AirWalkStepInfoMap).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + ((ulonglong)(*(int *)&(this->AirWalkStepInfoMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar4 != -1) {
      while (*(EDS_AirWalkStep *)((longlong)iVar4 * 0x20 + *(longlong *)&this->AirWalkStepInfoMap)
             != param_1) {
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)&this->AirWalkStepInfoMap);
        if (iVar4 == -1) {
          return;
        }
      }
      pTVar5 = TMapBase<enum_EDS_AirWalkStep,TSharedPtr<FDS_AirWalkStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AirWalkStep,TSharedPtr<FDS_AirWalkStepInfo,1>,0>_>
               ::FindChecked(&this->AirWalkStepInfoMap,param_1);
      if (pTVar5->Object == (FDS_AirWalkStepInfo *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar1 = pTVar5->Object;
      dVar7 = UDS_TimeUtilManager::GetCurrentServerTime();
      pFVar1->DeActivateTime = dVar7;
      pFVar1->IsActive = false;
      UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
    }
  }
  return;
}

// Deleted @ 14b9e6ce0

void __thiscall UDS_AirWalkAbilityData::Deleted(UDS_AirWalkAbilityData *this)

{
  bool bVar1;
  UDS_DataSetBase *pUVar2;
  TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> TVar3;
  UDS_DataSetContainer *this_00;
  UObject *pUVar4;
  FWeakObjectPtr local_res8 [2];
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    pUVar2 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    TVar3 = UDS_DataSetBase::GetMyDataSetContainer(pUVar2);
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)TVar3.WeakPtr);
    if (bVar1) {
      pUVar2 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      TVar3 = UDS_DataSetBase::GetMyDataSetContainer(pUVar2);
      this_00 = (UDS_DataSetContainer *)FWeakObjectPtr::Get((FWeakObjectPtr *)TVar3.WeakPtr);
      UDS_DataSetContainer::GetContainerKey(this_00);
      UDS_CharStateData::GetData((ulong64)local_res8);
      bVar1 = FWeakObjectPtr::IsValid(local_res8);
      if (bVar1) {
        pUVar4 = FWeakObjectPtr::Get(local_res8);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[7].field_0x20,this)
        ;
      }
    }
  }
  return;
}

// DoJump @ 14b9e8330

bool __thiscall UDS_AirWalkAbilityData::DoJump(UDS_AirWalkAbilityData *this)

{
  bool bVar1;
  
  if (this->bIsFalling == false) {
    if (this->bIsFlying == false) {
      bVar1 = DoNextStep(this,Jump1);
      return bVar1;
    }
  }
  else if (this->bIsFalling == true) {
    bVar1 = DoNextStep(this,Jump2);
    return bVar1;
  }
  return false;
}

// DoNextStep @ 14b9e8360

bool __thiscall
UDS_AirWalkAbilityData::DoNextStep(UDS_AirWalkAbilityData *this,EDS_AirWalkStep param_1)

{
  EDS_AirWalkStep EVar1;
  EDS_AbilityTagType EVar2;
  double dVar3;
  
  dVar3 = UDS_TimeUtilManager::GetCurrentServerTime();
  switch(param_1) {
  case Jump1:
  case Jump2:
    EVar2 = AirWalk_Jump;
    break;
  case Hovering:
    EVar2 = AirWalk_Hovering;
    break;
  case AirDash:
    EVar2 = AirWalk_Dash;
    break;
  case PowerJumpCharging:
    EVar2 = AirWalk_PowerJump;
    break;
  default:
    EVar2 = None;
    break;
  case UseSkillAirDash:
    EVar2 = AirWalk_DashAttack;
  }
  EVar1 = this->AirWalkStep;
  this->AbilityTagType = EVar2;
  if ((EVar1 == Ready) || (param_1 != Ready)) {
    this->StepStartTime = dVar3;
    DeActivateStep(this,EVar1);
  }
  else {
    this->StepStartTime = dVar3;
    DeActivateStep(this,EVar1);
    param_1 = Ready;
  }
  ActivateStep(this,param_1);
  return true;
}

// DoPowerJump @ 14b9e8560

bool __thiscall UDS_AirWalkAbilityData::DoPowerJump(UDS_AirWalkAbilityData *this)

{
  bool bVar1;
  
  if ((this->bIsFalling == false) && (this->bIsFlying == false)) {
    bVar1 = DoNextStep(this,PowerJump);
    return bVar1;
  }
  return false;
}

// DoPowerJumpCharging @ 14b9e8590

bool __thiscall UDS_AirWalkAbilityData::DoPowerJumpCharging(UDS_AirWalkAbilityData *this)

{
  bool bVar1;
  
  if ((this->bIsFalling == false) && (this->bIsFlying == false)) {
    bVar1 = DoNextStep(this,PowerJumpCharging);
    return bVar1;
  }
  return false;
}

// DoStop @ 14b9e85c0

bool __thiscall UDS_AirWalkAbilityData::DoStop(UDS_AirWalkAbilityData *this)

{
  this->bIsStopping = true;
  return true;
}

// GetAirWalkAbilityTag @ 14b9ec9c0

FGameplayTag __cdecl UDS_AirWalkAbilityData::GetAirWalkAbilityTag(EDS_AirWalkStep param_1)

{
  FName *pFVar1;
  undefined7 in_register_00000009;
  FName FVar2;
  char in_DL;
  EDS_AbilityTagType local_res10 [24];
  
  FVar2._1_7_ = in_register_00000009;
  FVar2.ComparisonIndex.Value._0_1_ = param_1;
  if ((in_DL == '\x01') || (in_DL == '\x02')) {
    local_res10[0] = AirWalk_Jump;
  }
  else if (in_DL == '\x03') {
    local_res10[0] = AirWalk_Hovering;
  }
  else if (in_DL == '\x04') {
    local_res10[0] = AirWalk_Dash;
  }
  else {
    if (in_DL != '\x05') {
      *(FName *)FVar2 = FGameplayTag::EmptyTag.TagName;
      return (FGameplayTag)FVar2;
    }
    local_res10[0] = AirWalk_PowerJump;
  }
  pFVar1 = &FDS_GameplayTags::GetAbilityTag(local_res10)->TagName;
  *(FName *)FVar2 = *pFVar1;
  return (FGameplayTag)FVar2;
}

// GetAirWalkAbilityTagType @ 14b9eca40

EDS_AbilityTagType __cdecl UDS_AirWalkAbilityData::GetAirWalkAbilityTagType(EDS_AirWalkStep param_1)

{
  switch(param_1) {
  case Jump1:
  case Jump2:
    return AirWalk_Jump;
  case Hovering:
    return AirWalk_Hovering;
  case AirDash:
    return AirWalk_Dash;
  case PowerJumpCharging:
    return AirWalk_PowerJump;
  default:
    return None;
  case UseSkillAirDash:
    return AirWalk_DashAttack;
  }
}

// GetAirWalkStepInfo @ 14b9ecaa0

FDS_AirWalkStepInfo * __thiscall
UDS_AirWalkAbilityData::GetAirWalkStepInfo(UDS_AirWalkAbilityData *this,EDS_AirWalkStep param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_AirWalkStepInfo *pFVar5;
  TSharedPtr<FDS_AirWalkStepInfo,1> *pTVar6;
  undefined1 *puVar7;
  
  if (*(int *)&(this->AirWalkStepInfoMap).field_0x8 !=
      *(int *)&(this->AirWalkStepInfoMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->AirWalkStepInfoMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->AirWalkStepInfoMap).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + ((ulonglong)(*(int *)&(this->AirWalkStepInfoMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->AirWalkStepInfoMap;
      do {
        if (*(EDS_AirWalkStep *)((longlong)iVar4 * 0x20 + lVar1) == param_1) {
          pTVar6 = TMapBase<enum_EDS_AirWalkStep,TSharedPtr<FDS_AirWalkStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AirWalkStep,TSharedPtr<FDS_AirWalkStepInfo,1>,0>_>
                   ::FindChecked(&this->AirWalkStepInfoMap,param_1);
          if (pTVar6->Object == (FDS_AirWalkStepInfo *)0x0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pFVar5 = (FDS_AirWalkStepInfo *)(*pcVar2)();
              return pFVar5;
            }
          }
          return pTVar6->Object;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar1);
      } while (iVar4 != -1);
    }
  }
  if (EmptySharedStepInfo.Object == (FDS_AirWalkStepInfo *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDS_AirWalkStepInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  return EmptySharedStepInfo.Object;
}

// GetCurTime @ 14b9eea10

double __thiscall UDS_AirWalkAbilityData::GetCurTime(UDS_AirWalkAbilityData *this)

{
  double dVar1;
  longlong lVar2;
  bool bVar3;
  FDS_TimeInfo *pFVar4;
  longlong lStackX_8;
  FDateTime aFStackX_10 [3];
  FDS_TimeInfo FStack_38;
  
  bVar3 = UDS_GameInstance::GetIsCCSAIMode();
  if (!bVar3) {
    bVar3 = UDS_GameInstance::GetIsDungeonPlayBuild();
    if (!bVar3) {
      pFVar4 = UDS_TimeData::GetTime(&FStack_38,NTPTime);
      lVar2 = (pFVar4->ChronoTime)._MyDur._MyRep;
      dVar1 = pFVar4->Time;
      std::chrono::steady_clock::now();
      return ((double)(lStackX_8 - lVar2) * __real_3e112e0be826d695 + dVar1) -
             UDS_TimeUtilManager::DiffServerTime;
    }
  }
  FDateTime::UtcNow();
  FDateTime::FDateTime(aFStackX_10,0x7b2,1,1,0,0,0,0);
  return (double)(lStackX_8 - aFStackX_10[0].Ticks) * __real_3e7ad7f29abcaf48 -
         UDS_TimeUtilManager::DiffServerTime;
}

// GetElapsedTimeCooltime @ 14b9efbc0

double __thiscall UDS_AirWalkAbilityData::GetElapsedTimeCooltime(UDS_AirWalkAbilityData *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  dVar2 = this->AirwalkCooltime;
  if (dVar1 < this->AirwalkCoolEndTime) {
    dVar2 = dVar2 - (this->AirwalkCoolEndTime - dVar1);
  }
  return dVar2;
}

// GetElapsedTimeSinceStepStart @ 14b9efc60

double __thiscall UDS_AirWalkAbilityData::GetElapsedTimeSinceStepStart(UDS_AirWalkAbilityData *this)

{
  double dVar1;
  
  if (this->AirWalkStep == Ready) {
    return 0.0;
  }
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  return dVar1 - this->StepStartTime;
}

// GetMovementMode @ 14b9f0d90

EMovementMode __thiscall UDS_AirWalkAbilityData::GetMovementMode(UDS_AirWalkAbilityData *this)

{
  EDS_AirWalkStep EVar1;
  EMovementMode EVar2;
  
  EVar1 = this->AirWalkStep;
  if ((EVar1 != AirDash) && (EVar1 != Hovering)) {
    EVar2 = MOVE_Flying;
    if (EVar1 != AirStop) {
      EVar2 = MOVE_Falling;
    }
    return EVar2;
  }
  return MOVE_Flying;
}

// GetReferenceAirWalkStep @ 14b9f1220

EDS_AirWalkStep __thiscall
UDS_AirWalkAbilityData::GetReferenceAirWalkStep(UDS_AirWalkAbilityData *this)

{
  EDS_AirWalkStep EVar1;
  EDS_AirWalkStep EVar2;
  
  EVar2 = this->AirWalkStep;
  if (((EVar2 == Ready) && (EVar1 = this->PrevAirWalkStep, EVar1 != Ready)) &&
     (EVar1 != PowerJumpCharging)) {
    EVar2 = EVar1;
  }
  return EVar2;
}

// InitAirWalkData @ 14b9f6470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UDS_AirWalkAbilityData::InitAirWalkData(UDS_AirWalkAbilityData *this)

{
  FScriptContainerElement *pFVar1;
  FDS_ActionAirWalkTableRow *pFVar2;
  undefined1 *puVar3;
  code *pcVar4;
  FDS_AirWalkStepInfo *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  int iVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  TReferenceControllerBase<1> *pTVar11;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar12;
  undefined1 *puVar13;
  TReferenceControllerBase<1> *pTVar14;
  ForAnyElementType FVar15;
  undefined1 local_res8 [8];
  TPairInitializer<EDS_AirWalkStep_&,TSharedPtr<FDS_AirWalkStepInfo,1>_&> local_res10;
  FDS_AirWalkStepInfo *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  TArray<FDS_ActionAirWalkTableRow_const_*,TSizedDefaultAllocator<32>_> local_68;
  FDS_AirWalkStepInfo *local_58;
  FDS_AirWalkStepInfo **local_50;
  
  if (*(int *)&(this->AirWalkStepInfoMap).field_0x8 ==
      *(int *)&(this->AirWalkStepInfoMap).field_0x34) {
    FDS_ActionAirWalkTableRow::GetAll(&local_68);
    iVar7 = local_68.ArrayNum;
    pTVar6 = _UNK_150651568;
    pFVar5 = ___xmm_00000000000000000000000000000010;
    pFVar1 = local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 8;
    FVar15.Data = local_68.AllocatorInstance.Data;
    while( true ) {
      pTVar14 = (TReferenceControllerBase<1> *)0x0;
      if (local_68.ArrayNum != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FDS_ActionAirWalkTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (FVar15.Data == pFVar1) break;
      pFVar2 = *(FDS_ActionAirWalkTableRow **)FVar15.Data;
      if (pFVar2 != (FDS_ActionAirWalkTableRow *)0x0) {
        pTVar11 = ::operator_new(0xc0);
        if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
          local_78 = pFVar5;
          pTStack_70 = pTVar6;
        }
        else {
          pTVar11->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFDS_AirWalkStepInfo___00_SharedPointerInternals__6B_
          ;
          pTVar11->SharedReferenceCount = (atomic<int>)0x1;
          pTVar11->WeakReferenceCount = (atomic<int>)0x1;
          *(undefined2 *)((longlong)&pTVar11[1]._padding_ + 1) = 0;
          *(undefined1 *)((longlong)&pTVar11[1]._padding_ + 3) = 0;
          *(undefined4 *)((longlong)&pTVar11[5]._padding_ + 2) = 0;
          *(undefined2 *)((longlong)&pTVar11[5]._padding_ + 6) = 0;
          pTVar11[4].WeakReferenceCount = (atomic<int>)0x0;
          pTVar11[5].SharedReferenceCount = (atomic<int>)0x0;
          pTVar11[5].WeakReferenceCount = (atomic<int>)0x0;
          pTVar11[6]._padding_ = 0;
          pTVar11[6].SharedReferenceCount = (atomic<int>)0x0;
          pTVar11[6].WeakReferenceCount = (atomic<int>)0x0;
          *(undefined1 *)&pTVar11[1]._padding_ = 0;
          *(undefined8 *)((longlong)&pTVar11[1]._padding_ + 4) = 0;
          *(undefined8 *)&pTVar11[1].WeakReferenceCount = 0;
          *(undefined8 *)((longlong)&pTVar11[2]._padding_ + 4) = 0;
          *(undefined8 *)&pTVar11[2].WeakReferenceCount = 0;
          *(undefined8 *)((longlong)&pTVar11[3]._padding_ + 4) = 0;
          *(undefined8 *)&pTVar11[3].WeakReferenceCount = 0;
          *(undefined8 *)((longlong)&pTVar11[4]._padding_ + 4) = 0;
          *(undefined2 *)&pTVar11[5]._padding_ = 0;
          pTVar11[8]._padding_ = 0;
          pTVar11[8].SharedReferenceCount = (atomic<int>)0x0;
          pTVar11[8].WeakReferenceCount = (atomic<int>)0x0;
          pTVar11[10].SharedReferenceCount = (atomic<int>)0x0;
          pTVar11[10].WeakReferenceCount = (atomic<int>)0x0;
          pTVar11[0xb].SharedReferenceCount = (atomic<int>)0x0;
          pTVar11[0xb].WeakReferenceCount = (atomic<int>)0x0;
          pTVar11[7]._padding_ = 0;
          pTVar11[9]._padding_ = 0;
          pTVar11[7].SharedReferenceCount = (atomic<int>)0x0;
          pTVar11[7].WeakReferenceCount = (atomic<int>)0x0;
          pTVar11[9].SharedReferenceCount = (atomic<int>)0x0;
          pTVar11[9].WeakReferenceCount = (atomic<int>)0x80;
          *(undefined4 *)((longlong)&pTVar11[10]._padding_ + 4) = 0;
          *(undefined4 *)&pTVar11[10]._padding_ = 0xffffffff;
          pTVar11[0xb]._padding_ = 0;
          if (((FDS_AirWalkStepInfo *)(pTVar11 + 1) == (FDS_AirWalkStepInfo *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
          pTVar14 = pTVar11;
          local_78 = (FDS_AirWalkStepInfo *)(pTVar11 + 1);
          pTStack_70 = pTVar11;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
        if ((local_78 == (FDS_AirWalkStepInfo *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        FDS_AirWalkStepInfo::InitAirWalkInfo(local_78,pFVar2);
        if ((local_78 == (FDS_AirWalkStepInfo *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        if (*(int *)&(this->AirWalkStepInfoMap).field_0x8 !=
            *(int *)&(this->AirWalkStepInfoMap).field_0x34) {
          puVar3 = *(undefined1 **)&(this->AirWalkStepInfoMap).field_0x40;
          puVar13 = &(this->AirWalkStepInfoMap).field_0x38;
          if (puVar3 != (undefined1 *)0x0) {
            puVar13 = puVar3;
          }
          iVar10 = *(int *)(puVar13 +
                           ((ulonglong)(*(int *)&(this->AirWalkStepInfoMap).field_0x48 - 1) &
                           (ulonglong)local_78->AirWalkStep) * 4);
          if (iVar10 != -1) {
            do {
              if (*(EDS_AirWalkStep *)
                   ((longlong)iVar10 * 0x20 + *(longlong *)&this->AirWalkStepInfoMap) ==
                  local_78->AirWalkStep) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTStack_70);
                goto LAB_14b9f672c;
              }
              iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 +
                               *(longlong *)&this->AirWalkStepInfoMap);
            } while (iVar10 != -1);
          }
        }
        local_58 = local_78;
        local_50 = &local_78;
        TSet<TTuple<enum_EDS_AirWalkStep,TSharedPtr<FDS_AirWalkStepInfo,1>_>,TDefaultMapHashableKeyFuncs<enum_EDS_AirWalkStep,TSharedPtr<FDS_AirWalkStepInfo,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<enum_EDS_AirWalkStep_&,TSharedPtr<FDS_AirWalkStepInfo,1>_&>_>
                  (&this->AirWalkStepInfoMap,&local_res10,(bool *)&local_58);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_70);
      }
      FVar15.Data = FVar15.Data + 8;
    }
LAB_14b9f672c:
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    bVar8 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
    if (!bVar8) {
      UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
      TVar12 = UDS_CharStateData::GetData((ulong64)&local_res10.Value);
                    /* WARNING: Load size is inaccurate */
      (this->CharStateData).WeakPtr = *TVar12.WeakPtr;
      bVar8 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
      return bVar8;
    }
  }
  return true;
}

// IsNextSkillPossible @ 14b9f9580

bool __thiscall
UDS_AirWalkAbilityData::IsNextSkillPossible(UDS_AirWalkAbilityData *this,int param_1)

{
  FDS_AirWalkStepInfo *pFVar1;
  double dVar2;
  float fVar3;
  
  if (this->bFallingHigher != true) {
    pFVar1 = GetAirWalkStepInfo(this,this->AirWalkStep);
    if (this->AirWalkStep == Ready) {
      dVar2 = 0.0;
    }
    else {
      dVar2 = UDS_TimeUtilManager::GetCurrentServerTime();
      dVar2 = dVar2 - this->StepStartTime;
    }
    fVar3 = (float)dVar2;
    if ((pFVar1->UnableTime <= fVar3) &&
       (fVar3 < pFVar1->AirWalkTime || fVar3 == pFVar1->AirWalkTime)) {
      return true;
    }
  }
  return false;
}

// IsNextStepPossible @ 14b9f9890

bool __thiscall
UDS_AirWalkAbilityData::IsNextStepPossible
          (UDS_AirWalkAbilityData *this,EDS_AirWalkStep param_1,EDS_AirWalkStep param_2)

{
  EDS_AirWalkStep EVar1;
  bool bVar2;
  int iVar3;
  FDS_AirWalkStepInfo *pFVar4;
  FDS_AirWalkStepInfo *pFVar5;
  UDS_CharStateData *pUVar6;
  float *pfVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  EDS_CharState local_res8;
  FWeakObjectPtr local_res20;
  EDS_CharState local_48 [6];
  
  if ((this->bFallingHigher != true) &&
     (dVar9 = UDS_TimeUtilManager::GetCurrentServerTime(), this->AirwalkCoolEndTime <= dVar9)) {
    pFVar4 = GetAirWalkStepInfo(this,param_1);
    pFVar5 = GetAirWalkStepInfo(this,param_2);
    if (this->AirWalkStep == Ready) {
      dVar9 = 0.0;
    }
    else {
      dVar9 = UDS_TimeUtilManager::GetCurrentServerTime();
      dVar9 = dVar9 - this->StepStartTime;
    }
    if (pFVar4->AirWalkStep == Ready) {
LAB_14b9f997d:
      if (pFVar4->UnableTime <= (float)dVar9) {
        if (*(int *)&(pFVar4->NextStepAvailableTimeMap).field_0x8 !=
            *(int *)&(pFVar4->NextStepAvailableTimeMap).field_0x34) {
          puVar8 = *(undefined1 **)&(pFVar4->NextStepAvailableTimeMap).field_0x40;
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &(pFVar4->NextStepAvailableTimeMap).field_0x38;
          }
          iVar3 = *(int *)(puVar8 + ((ulonglong)
                                     (*(int *)&(pFVar4->NextStepAvailableTimeMap).field_0x48 - 1) &
                                    (ulonglong)param_2) * 4);
          if (iVar3 != -1) {
            do {
              if (*(EDS_AirWalkStep *)
                   (*(longlong *)&pFVar4->NextStepAvailableTimeMap + (longlong)iVar3 * 0x10) ==
                  param_2) {
                pfVar7 = TMapBase<enum_EDS_AirWalkStep,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AirWalkStep,float,0>_>
                         ::FindChecked(&pFVar4->NextStepAvailableTimeMap,param_2);
                fVar11 = *pfVar7;
                goto LAB_14b9f99da;
              }
              iVar3 = *(int *)(*(longlong *)&pFVar4->NextStepAvailableTimeMap + 8 +
                              (longlong)iVar3 * 0x10);
            } while (iVar3 != -1);
          }
        }
        fVar11 = 0.0;
LAB_14b9f99da:
        if ((((pFVar4->AirWalkStep == Ready) || (pFVar4->IsActive != false)) ||
            (dVar10 = UDS_TimeUtilManager::GetCurrentServerTime(),
            dVar10 - pFVar4->DeActivateTime <= (double)fVar11)) &&
           ((float)dVar9 <= fVar11 + pFVar4->AirWalkTime)) {
          bVar2 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
          if (bVar2) {
            local_res20 = (this->CharStateData).WeakPtr;
            EVar1 = pFVar5->AirWalkStep;
            local_48[0] = Warp|Battle|Skill|Avoid;
            if (((EVar1 == PowerJumpCharging) || (EVar1 == PowerJump)) || (EVar1 == Jump1)) {
              local_48[0] = Warp|Skill|Avoid;
            }
            pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res20);
            bVar2 = UDS_CharStateData::HasCharState(pUVar6,local_48);
            if (bVar2) {
              return false;
            }
            pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res20);
            local_res8 = Swim;
            bVar2 = UDS_CharStateData::HasCharState(pUVar6,&local_res8);
            if (bVar2) {
              pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res20);
              local_res8 = CONCAT44(local_res8._4_4_,6);
              bVar2 = UDS_CharStateData::HasCharDetailState
                                (pUVar6,(EDS_CharDetailState *)&local_res8);
              if (bVar2) {
                return false;
              }
            }
          }
          if ((this->bIsFalling != true) || (1 < (byte)(param_2 - PowerJumpCharging))) {
            if (this->AirWalkStep == Ready) {
              if (((param_2 - Hovering & 0xfa) == 0) && (param_2 != AirStop)) {
                return false;
              }
              if (this->bIsFalling == true) {
                if (param_2 == Jump1) {
                  return false;
                }
                if (param_2 == Jump2) {
                  pFVar4 = GetAirWalkStepInfo(this,Jump1);
                  dVar10 = UDS_TimeUtilManager::GetCurrentServerTime();
                  dVar9 = this->FallingStartTime;
                  fVar11 = FDS_AirWalkStepInfo::GetAdditionalAvailableTime(pFVar4,Jump2);
                  if ((double)fVar11 < dVar10 - dVar9) {
                    return false;
                  }
                }
              }
            }
            return true;
          }
        }
      }
    }
    else if (*(int *)&(pFVar4->NextStepAvailableTimeMap).field_0x8 !=
             *(int *)&(pFVar4->NextStepAvailableTimeMap).field_0x34) {
      puVar8 = *(undefined1 **)&(pFVar4->NextStepAvailableTimeMap).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(pFVar4->NextStepAvailableTimeMap).field_0x38;
      }
      iVar3 = *(int *)(puVar8 + ((ulonglong)
                                 (*(int *)&(pFVar4->NextStepAvailableTimeMap).field_0x48 - 1) &
                                (ulonglong)param_2) * 4);
      if (iVar3 != -1) {
        do {
          if (*(EDS_AirWalkStep *)
               (*(longlong *)&pFVar4->NextStepAvailableTimeMap + (longlong)iVar3 * 0x10) == param_2)
          goto LAB_14b9f997d;
          iVar3 = *(int *)(*(longlong *)&pFVar4->NextStepAvailableTimeMap + 8 +
                          (longlong)iVar3 * 0x10);
        } while (iVar3 != -1);
      }
    }
  }
  return false;
}

// IsNextStepPossible @ 14b9f9b60

bool __thiscall
UDS_AirWalkAbilityData::IsNextStepPossible(UDS_AirWalkAbilityData *this,EDS_AirWalkStep param_1)

{
  bool bVar1;
  
  bVar1 = IsNextStepPossible(this,this->AirWalkStep,param_1);
  return bVar1;
}

// OnChangedCharState @ 14b9fd960

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
UDS_AirWalkAbilityData::OnChangedCharState
          (UDS_AirWalkAbilityData *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  EDS_AirWalkStep EVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  UDS_CharStateData *pUVar5;
  FDS_AirWalkStepInfo *pFVar6;
  FDS_EntityBase *pFVar7;
  FTimerManager *this_00;
  FGameplayTag *pFVar8;
  UDS_AbilitySystemComponent *this_01;
  double dVar9;
  FWeakObjectPtr local_res10;
  ulong64 local_res20;
  bool local_38 [8];
  FWeakObjectPtr local_30 [3];
  
  local_res10 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar3) {
    return;
  }
  bVar3 = this->bIsFalling;
  if ((bVar3 == false) && (this->bIsFlying == false)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
  local_res20._0_4_ = Falling;
  bVar4 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
  this->bIsFalling = bVar4;
  pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
  local_res20._0_4_ = Flying;
  bVar4 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
  this->bIsFlying = bVar4;
  pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
  local_res20 = CONCAT44(local_res20._4_4_,0x23);
  bVar4 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
  this->bFallingHigher = bVar4;
  if ((bVar3 == false) && (this->bIsFalling == true)) {
    dVar9 = UDS_TimeUtilManager::GetCurrentServerTime();
    this->FallingStartTime = dVar9;
  }
  pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
  local_res20 = CONCAT44(local_res20._4_4_,0x25);
  bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
  if (bVar3) {
    this->bIsFlyingCrash = true;
  }
  if (!bVar2) {
    if (this->bIsFalling != false) {
      return;
    }
    if (this->bIsFlying == false) {
      if (this->AirWalkStep != Ready) {
        dVar9 = UDS_TimeUtilManager::GetCurrentServerTime();
        pFVar6 = GetAirWalkStepInfo(this,this->AirWalkStep);
        this->AirwalkCoolEndTime = (double)pFVar6->AirCoolTime + dVar9;
        this->AirwalkCooltime = (double)pFVar6->AirCoolTime;
      }
      if ((this->bFallingHigher == true) && ((this->FallingHigherTimerHandle).Handle == 0)) {
        local_res20 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
        pFVar7 = FDS_EntityBase::GetEntityBase(&local_res20);
        if (pFVar7 == (FDS_EntityBase *)0x0) {
          return;
        }
        this_00 = FDS_TimerManager::Get((UObject *)0x0);
        FTimerManager::SetTimer<UDS_AirWalkAbilityData>
                  (this_00,&this->FallingHigherTimerHandle,this,(pmf_5b7d6e46)0x14b9ff7b0,
                   __real_3f800000,false,__real_bf800000);
        (**(code **)(pFVar7->_padding_ + 0x178))(pFVar7);
        bVar3 = FWeakObjectPtr::IsValid(local_30);
        if (bVar3) {
          local_res20 = CONCAT71(local_res20._1_7_,0x2d);
          pFVar8 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)&local_res20);
          this_01 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get(local_30);
          local_38[0] = true;
          UDS_AbilitySystemComponent::SetIgnoreInput(this_01,pFVar8,local_38);
        }
      }
      if (this->AirWalkStep == PowerJumpCharging) {
        return;
      }
      if (this->AirWalkStep == PowerJump) {
        return;
      }
      (**(code **)(this->_padding_ + 0x2c8))(this);
      DoNextStep(this,Ready);
      UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnLandEnterDelegate);
      return;
    }
  }
  if ((((this->bIsFalling == false) && (this->bIsFlying == false)) &&
      (EVar1 = this->AirWalkStep, EVar1 != PowerJumpCharging)) &&
     ((EVar1 != PowerJump && (EVar1 != Jump1)))) {
    (**(code **)(this->_padding_ + 0x2c8))(this);
    UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  }
  return;
}

// OnFallingEnter @ 14b9ff780

void __thiscall UDS_AirWalkAbilityData::OnFallingEnter(UDS_AirWalkAbilityData *this)

{
  double dVar1;
  
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  this->FallingStartTime = dVar1;
  return;
}

// OnGroundAfterFallingHigherTimer @ 14b9ff7b0

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
UDS_AirWalkAbilityData::OnGroundAfterFallingHigherTimer(UDS_AirWalkAbilityData *this)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  FWeakObjectPtr *pFVar3;
  FGameplayTag *pFVar4;
  UDS_AbilitySystemComponent *this_00;
  EDS_StateTagType local_res8 [8];
  ulong64 local_res10;
  FWeakObjectPtr local_res18;
  undefined1 local_res20 [8];
  
  this->bFallingHigher = false;
  local_res10 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
  pFVar2 = FDS_EntityBase::GetEntityBase(&local_res10);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    local_res8[0] = AirWalk_FallingHigher;
    pFVar3 = (FWeakObjectPtr *)(**(code **)(pFVar2->_padding_ + 0x178))(pFVar2,local_res20);
    UDS_AbilitySystemComponent::RemoveStateTag
              ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)*pFVar3,local_res8);
    (**(code **)(pFVar2->_padding_ + 0x178))(pFVar2,&local_res18);
    bVar1 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar1) {
      local_res8[0] = AirWalk_FallingHigher;
      pFVar4 = FDS_GameplayTags::GetStateTag(local_res8);
      this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_res18);
      local_res10 = local_res10 & 0xffffffffffffff00;
      UDS_AbilitySystemComponent::SetIgnoreInput(this_00,pFVar4,(bool *)&local_res10);
    }
    (this->FallingHigherTimerHandle).Handle = 0;
  }
  return;
}

// OnLandEnter @ 14ba00f90

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

void __thiscall UDS_AirWalkAbilityData::OnLandEnter(UDS_AirWalkAbilityData *this)

{
  bool bVar1;
  FDS_AirWalkStepInfo *pFVar2;
  FDS_EntityBase *pFVar3;
  FTimerManager *this_00;
  FGameplayTag *pFVar4;
  UDS_AbilitySystemComponent *this_01;
  double dVar5;
  ulong64 local_res8;
  bool local_res10 [8];
  FWeakObjectPtr local_res18 [2];
  
  if (this->AirWalkStep != Ready) {
    dVar5 = UDS_TimeUtilManager::GetCurrentServerTime();
    pFVar2 = GetAirWalkStepInfo(this,this->AirWalkStep);
    this->AirwalkCoolEndTime = (double)pFVar2->AirCoolTime + dVar5;
    this->AirwalkCooltime = (double)pFVar2->AirCoolTime;
  }
  if ((this->bFallingHigher == true) && ((this->FallingHigherTimerHandle).Handle == 0)) {
    local_res8 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
    pFVar3 = FDS_EntityBase::GetEntityBase(&local_res8);
    if (pFVar3 == (FDS_EntityBase *)0x0) {
      return;
    }
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    FTimerManager::SetTimer<UDS_AirWalkAbilityData>
              (this_00,&this->FallingHigherTimerHandle,this,(pmf_5b7d6e46)0x14b9ff7b0,
               __real_3f800000,false,__real_bf800000);
    (**(code **)(pFVar3->_padding_ + 0x178))(pFVar3);
    bVar1 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar1) {
      local_res8 = CONCAT71(local_res8._1_7_,0x2d);
      pFVar4 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)&local_res8);
      this_01 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get(local_res18);
      local_res10[0] = true;
      UDS_AbilitySystemComponent::SetIgnoreInput(this_01,pFVar4,local_res10);
    }
  }
  if ((this->AirWalkStep != PowerJumpCharging) && (this->AirWalkStep != PowerJump)) {
    (**(code **)(this->_padding_ + 0x2c8))(this);
    DoNextStep(this,Ready);
    UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnLandEnterDelegate);
  }
  return;
}

// OnLanded @ 14ba01120

void __thiscall UDS_AirWalkAbilityData::OnLanded(UDS_AirWalkAbilityData *this)

{
  EDS_AirWalkStep EVar1;
  
  EVar1 = this->AirWalkStep;
  if (((EVar1 != PowerJumpCharging) && (EVar1 != PowerJump)) && (EVar1 != Jump1)) {
    (**(code **)(this->_padding_ + 0x2c8))();
    UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
    return;
  }
  return;
}

// ResetData @ 14ba18540

void __thiscall UDS_AirWalkAbilityData::ResetData(UDS_AirWalkAbilityData *this)

{
  ulong64 uVar1;
  
  uVar1 = (this->FallingHigherTimerHandle).Handle;
  this->AirWalkStep = Ready;
  this->PrevAirWalkStep = Ready;
  this->StepStartTime = 0.0;
  this->bIsFalling = false;
  this->bIsFlying = false;
  this->bIsFlyingCrash = false;
  if (uVar1 == 0) {
    this->bFallingHigher = false;
  }
  return;
}

