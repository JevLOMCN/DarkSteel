// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 29

// StaticClass @ 14b4f3470

UClass * __cdecl UDS_MountAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAbilityData",
               &Z_Registration_Info_UClass_UDS_MountAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_MountAbilityData,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountAbilityData>,
               InternalVTableHelperCtorCaller<UDS_MountAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAbilityData.InnerSingleton;
}

// UDS_MountAbilityData @ 14b4f77c0

UDS_MountAbilityData * __thiscall
UDS_MountAbilityData::UDS_MountAbilityData(UDS_MountAbilityData *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MountAbilityData__6B_;
  *(undefined8 *)&this->MountAnimEventDelegate = 0;
  *(undefined8 *)&(this->MountAnimEventDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->MountAnimEventDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->MountAnimEventDelegate).field_0x18 = 2;
  this->IsMount = false;
  this->IsSwim = false;
  this->IsAirwalk = false;
  this->IsMoved = false;
  this->IsDespawn = false;
  (this->NameTagLocationOrigin).field0_0x0._s_0.X = 0.0;
  (this->NameTagLocationOrigin).field0_0x0._s_0.Y = 0.0;
  (this->NameTagLocationOrigin).field0_0x0._s_0.Z = 0.0;
  (this->CoolDownTimerHandle).Handle = 0;
  *(undefined8 *)&this->MountStepInfoMap = 0;
  *(undefined8 *)&(this->MountStepInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->MountStepInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->MountStepInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->MountStepInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MountStepInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->MountStepInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MountStepInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->MountStepInfoMap).field_0x48 = 0;
  this->PreviousStep = Ready;
  this->CurrentStep = Ready;
  this->ForbidMountJumpState = false;
  this->ForbidMountSprintState = false;
  (this->LastMoveVector).field0_0x0._s_0.X = 0.0;
  (this->LastMoveVector).field0_0x0._s_0.Y = 0.0;
  (this->LastMoveVector).field0_0x0._s_0.Z = 0.0;
  this->MountFlyUpDownState = None;
  (this->MountSoulComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->MountSoulComponent).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_MountAbilityData @ 14b4f78a0

UDS_MountAbilityData * __thiscall
UDS_MountAbilityData::UDS_MountAbilityData(UDS_MountAbilityData *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MountAbilityData__6B_;
  *(undefined8 *)&this->MountAnimEventDelegate = 0;
  *(undefined8 *)&(this->MountAnimEventDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->MountAnimEventDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->MountAnimEventDelegate).field_0x18 = 2;
  this->IsMount = false;
  this->IsSwim = false;
  this->IsAirwalk = false;
  this->IsMoved = false;
  this->IsDespawn = false;
  (this->NameTagLocationOrigin).field0_0x0._s_0.X = 0.0;
  (this->NameTagLocationOrigin).field0_0x0._s_0.Y = 0.0;
  (this->NameTagLocationOrigin).field0_0x0._s_0.Z = 0.0;
  (this->CoolDownTimerHandle).Handle = 0;
  *(undefined8 *)&this->MountStepInfoMap = 0;
  *(undefined8 *)&(this->MountStepInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->MountStepInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->MountStepInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->MountStepInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MountStepInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->MountStepInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MountStepInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->MountStepInfoMap).field_0x48 = 0;
  this->PreviousStep = Ready;
  this->CurrentStep = Ready;
  this->ForbidMountJumpState = false;
  this->ForbidMountSprintState = false;
  (this->LastMoveVector).field0_0x0._s_0.X = 0.0;
  (this->LastMoveVector).field0_0x0._s_0.Y = 0.0;
  (this->LastMoveVector).field0_0x0._s_0.Z = 0.0;
  this->MountFlyUpDownState = None;
  (this->MountSoulComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->MountSoulComponent).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_MountAbilityData @ 14b4f8530

void __thiscall UDS_MountAbilityData::~UDS_MountAbilityData(UDS_MountAbilityData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_MountAbilityData__6B_;
  *(undefined4 *)&(this->MountStepInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MountStepInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->MountStepInfoMap);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MountAnimEventDelegate).field_0x8,
             *(int *)&(this->MountAnimEventDelegate).field_0x10);
  pvVar1 = *(void **)&(this->MountAnimEventDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MountAnimEventDelegate);
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b4f9bf0

UClass * __cdecl UDS_MountAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAbilityData",
               &Z_Registration_Info_UClass_UDS_MountAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_MountAbilityData,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountAbilityData>,
               InternalVTableHelperCtorCaller<UDS_MountAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_MountAbilityData @ 14b4fa830

void __cdecl UDS_MountAbilityData::StaticRegisterNativesUDS_MountAbilityData(void)

{
  return;
}

// ActivateStep @ 14b9de790

void __thiscall UDS_MountAbilityData::ActivateStep(UDS_MountAbilityData *this,EDS_MountStep param_1)

{
  longlong lVar1;
  FDS_MountStepInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<FDS_MountStepInfo,1> *pTVar6;
  UDS_MountEvent *pUVar7;
  undefined1 *puVar8;
  double dVar9;
  
  if ((param_1 != Ready) &&
     (*(int *)&(this->MountStepInfoMap).field_0x8 != *(int *)&(this->MountStepInfoMap).field_0x34))
  {
    puVar8 = *(undefined1 **)&(this->MountStepInfoMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->MountStepInfoMap).field_0x38;
    }
    iVar5 = *(int *)(puVar8 + ((ulonglong)(*(int *)&(this->MountStepInfoMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&this->MountStepInfoMap;
      while (*(EDS_MountStep *)((longlong)iVar5 * 0x20 + lVar1) != param_1) {
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + lVar1);
        if (iVar5 == -1) {
          return;
        }
      }
      pTVar6 = TMapBase<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,0>_>
               ::FindChecked(&this->MountStepInfoMap,param_1);
      if ((pTVar6->Object == (FDS_MountStepInfo *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = pTVar6->Object;
      dVar9 = UDS_TimeUtilManager::GetCurrentServerTime();
      pFVar2->IsActive = true;
      pFVar2->ActivationStartTime = dVar9;
      pFVar2->ActivationEndTime = (double)pFVar2->Duration + dVar9;
      pUVar7 = UDS_MountEvent::GetEvent();
      if (pUVar7 != (UDS_MountEvent *)0x0) {
        FDS_EventDelegate<FDS_MountStepInfo_const_&>::Broadcast(&pUVar7->OnChangedMountStep,pFVar2);
        FDS_FilteredEventDelegate<enum_EDS_MountStep_const_,FDS_MountStepInfo_const_&>::Broadcast
                  (&pUVar7->OnChangedMountStep_Filtered,&pFVar2->MountStep,pFVar2);
      }
      UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
    }
  }
  return;
}

// Created @ 14b9e6680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_MountAbilityData::Created(UDS_MountAbilityData *this)

{
  FDS_EventDelegate<int> *this_00;
  code *pcVar1;
  bool bVar2;
  EDS_EntityType EVar3;
  int iVar4;
  UDS_DataSetBase *this_01;
  TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> this_02;
  UObject *pUVar5;
  UDS_CharBuffData *pUVar6;
  UDS_CharStatusData *this_03;
  FDS_StatusInfo *pFVar7;
  UDS_LogManager *pUVar8;
  UDS_MountEvent *pUVar9;
  undefined1 auStackY_228 [32];
  int local_1f8 [2];
  FWeakObjectPtr local_1f0;
  EDS_SpecialBuffType local_1e8 [2];
  FWeakObjectPtr local_1e0;
  FWeakObjectPtr local_1d8;
  FName local_1d0;
  undefined1 uStack_1c8;
  uint7 uStack_1c7;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined1 local_1a0 [16];
  undefined1 local_190 [24];
  FDS_ChangedCharStateInfo local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_228;
  bVar2 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar2) {
    this_01 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    this_02 = UDS_DataSetBase::GetMyDataSetContainer(this_01);
    bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)this_02.WeakPtr,
                       (void *)0x0);
    if (!bVar2) {
      UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
      UDS_CharStateData::GetData((ulong64)&local_1e0);
      bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_1e0,(void *)0x0)
      ;
      if (!bVar2) {
        pUVar5 = FWeakObjectPtr::Get(&local_1e0);
        TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_MountAbilityData>
                  ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                    *)&pUVar5[7].field_0x20,(UDS_MountAbilityData *)local_1a0,(pmf_f57b1d25)this);
        local_1d0 = FGameplayTag::EmptyTag.TagName;
        uStack_1c8 = 0;
        local_178._8_8_ = (ulonglong)uStack_1c7 << 8;
        local_1c0 = 0;
        uStack_1b8 = 0;
        local_1b0 = 0;
        local_178.StateTag.TagName = FGameplayTag::EmptyTag.TagName;
        local_178.AddedCharDetailState = None;
        local_178.RemovedCharDetailState = None;
        local_178.AddedCharState = None;
        local_178.RemovedCharState = None;
        OnChangedCharState(this,(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)local_1e0,
                           &local_178);
        UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
        UDS_CharBuffData::GetData((ulong64)&local_1f0);
        bVar2 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)&local_1f0,(void *)0x0
                          );
        if (!bVar2) {
          pUVar5 = FWeakObjectPtr::Get(&local_1f0);
          TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,enum_EDS_SpecialBuffType_const_&,bool_const_&),FDefaultDelegateUserPolicy>
          ::AddUObject<UDS_MountAbilityData>
                    (pUVar5 + 7,(UDS_MountAbilityData *)(local_1a0 + 8),(pmf_11f1e878)this);
          local_1f8[0] = 0;
          pUVar6 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&local_1f0);
          local_1e8[0] = ForbidMountJump;
          bVar2 = UDS_CharBuffData::HasSpecialBuffInfo(pUVar6,local_1e8,local_1f8);
          this->ForbidMountJumpState = bVar2;
          pUVar6 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&local_1f0);
          local_1e8[1] = 0x1073;
          bVar2 = UDS_CharBuffData::HasSpecialBuffInfo(pUVar6,local_1e8 + 1,local_1f8);
          this->ForbidMountSprintState = bVar2;
          EVar3 = UDS_DataBase::GetEntityType((UDS_DataBase *)this);
          if (EVar3 == MainCharacter) {
            UDS_DataBase::GetEntityID((UDS_DataBase *)this);
            UDS_CharStatusData::GetData((ulong64)&local_1d8);
            bVar2 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&local_1d8,
                               (void *)0x0);
            if (bVar2) {
              return;
            }
            this_03 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_1d8);
            pFVar7 = UDS_CharStatusData::GetStatusInfo(this_03,Stamina);
            if (pFVar7 == (FDS_StatusInfo *)0x0) {
              pUVar8 = UDS_LogManager::GetInst();
              if (pUVar8 != (UDS_LogManager *)0x0) {
                pUVar8 = UDS_LogManager::GetInst();
                local_148._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_148,"UDS_MountAbilityData::Created",0x1d,Yes);
                UDS_LogManager::PrintLog
                          (pUVar8,1,Warning,local_148.Ptr,0x1a6,L"statusInfo is nullptr.");
                if ((void *)local_148._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_148._padding_);
                }
              }
              bVar2 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<1442693250031813031>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_MountAbilityData.cpp"
                                 ,0x1a7,"false");
              if (!bVar2) {
                return;
              }
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pFVar7->ChangeStatusDelegate,this);
            TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>::
            AddUObject<UDS_MountAbilityData>
                      ((TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>
                        *)&pFVar7->ChangeStatusDelegate,(UDS_MountAbilityData *)local_190,
                       (pmf_9d351d2a)this);
            OnChangedStatus_MountStamina(this,(float)pFVar7->CurrentValue,pFVar7->MaxValue);
          }
          pUVar9 = UDS_MountEvent::GetEvent();
          if (pUVar9 != (UDS_MountEvent *)0x0) {
            this_00 = &pUVar9->OnChangedSelectedMount;
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
            TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
            AddUObject<UDS_MountAbilityData>
                      ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>
                        *)this_00,(UDS_MountAbilityData *)(local_190 + 8),(pmf_9cee9262)this);
          }
          iVar4 = UDS_MountManager::GetMountIdByMainPlayer();
          OnChangedSelectedMount(this,iVar4);
        }
      }
    }
  }
  return;
}

// DeActivateStep @ 14b9e6b20

void __thiscall
UDS_MountAbilityData::DeActivateStep(UDS_MountAbilityData *this,EDS_MountStep param_1)

{
  longlong lVar1;
  FDS_MountStepInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<FDS_MountStepInfo,1> *pTVar6;
  UDS_MountEvent *pUVar7;
  undefined1 *puVar8;
  double dVar9;
  
  if ((param_1 != Ready) &&
     (*(int *)&(this->MountStepInfoMap).field_0x8 != *(int *)&(this->MountStepInfoMap).field_0x34))
  {
    puVar8 = *(undefined1 **)&(this->MountStepInfoMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->MountStepInfoMap).field_0x38;
    }
    iVar5 = *(int *)(puVar8 + ((ulonglong)(*(int *)&(this->MountStepInfoMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&this->MountStepInfoMap;
      while (*(EDS_MountStep *)((longlong)iVar5 * 0x20 + lVar1) != param_1) {
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + lVar1);
        if (iVar5 == -1) {
          return;
        }
      }
      pTVar6 = TMapBase<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,0>_>
               ::FindChecked(&this->MountStepInfoMap,param_1);
      if ((pTVar6->Object == (FDS_MountStepInfo *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = pTVar6->Object;
      dVar9 = UDS_TimeUtilManager::GetCurrentServerTime();
      pFVar2->IsActive = false;
      pFVar2->ActivationEndTime = 0.0;
      pFVar2->DeActivateTime = dVar9;
      pFVar2->CoolTimeEndTime = (double)pFVar2->CoolTime + dVar9;
      pUVar7 = UDS_MountEvent::GetEvent();
      if (pUVar7 != (UDS_MountEvent *)0x0) {
        FDS_EventDelegate<FDS_MountStepInfo_const_&>::Broadcast(&pUVar7->OnChangedMountStep,pFVar2);
        FDS_FilteredEventDelegate<enum_EDS_MountStep_const_,FDS_MountStepInfo_const_&>::Broadcast
                  (&pUVar7->OnChangedMountStep_Filtered,&pFVar2->MountStep,pFVar2);
      }
      UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
    }
  }
  return;
}

// Deleted @ 14b9e6da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_MountAbilityData::Deleted(UDS_MountAbilityData *this)

{
  code *pcVar1;
  EDS_EntityType EVar2;
  bool bVar3;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  EVar2 = UDS_DataBase::GetEntityType((UDS_DataBase *)this);
  if (EVar2 == MainCharacter) {
    UDS_DataBase::GetEntityID((UDS_DataBase *)this);
    UDS_CharStatusData::GetData((ulong64)local_148);
    bVar3 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)local_148,(void *)0x0);
    if (!bVar3) {
      this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(local_148);
      pFVar4 = UDS_CharStatusData::GetStatusInfo(this_00,Stamina);
      if (pFVar4 == (FDS_StatusInfo *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_MountAbilityData::Deleted",0x1d,Yes);
          UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x1c6,L"statusInfo is nullptr.");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1442693250031813063>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_MountAbilityData.cpp"
                           ,0x1c7,"false");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pFVar4->ChangeStatusDelegate,this);
      }
    }
  }
  return;
}

// GetCurTime @ 14b9eea60

double __thiscall UDS_MountAbilityData::GetCurTime(UDS_MountAbilityData *this)

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

// GetIsGround @ 14b9f0b20

bool __thiscall UDS_MountAbilityData::GetIsGround(UDS_MountAbilityData *this)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  FWeakObjectPtr local_res10;
  EDS_CharState local_res18 [2];
  
  UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
  UDS_CharStateData::GetData((ulong64)&local_res10);
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res18[0] = Swim;
    bVar1 = UDS_CharStateData::HasCharState(this_00,local_res18);
    if (!bVar1) {
      return this->IsAirwalk == false;
    }
  }
  return true;
}

// GetMountStepInfo @ 14b9f0c80

FDS_MountStepInfo * __thiscall
UDS_MountAbilityData::GetMountStepInfo(UDS_MountAbilityData *this,EDS_MountStep param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_MountStepInfo *pFVar5;
  TSharedPtr<FDS_MountStepInfo,1> *pTVar6;
  undefined1 *puVar7;
  
  if (*(int *)&(this->MountStepInfoMap).field_0x8 != *(int *)&(this->MountStepInfoMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->MountStepInfoMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->MountStepInfoMap).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + ((ulonglong)(*(int *)&(this->MountStepInfoMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->MountStepInfoMap;
      do {
        if (*(EDS_MountStep *)((longlong)iVar4 * 0x20 + lVar1) == param_1) {
          pTVar6 = TMapBase<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,0>_>
                   ::FindChecked(&this->MountStepInfoMap,param_1);
          if (pTVar6->Object == (FDS_MountStepInfo *)0x0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pFVar5 = (FDS_MountStepInfo *)(*pcVar2)();
              return pFVar5;
            }
          }
          return pTVar6->Object;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar1);
      } while (iVar4 != -1);
    }
  }
  if (EmptySharedMountStepInfo.Object == (FDS_MountStepInfo *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDS_MountStepInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  return EmptySharedMountStepInfo.Object;
}

// InitMountSkillInfo @ 14b9f7f00

void __thiscall UDS_MountAbilityData::InitMountSkillInfo(UDS_MountAbilityData *this,int param_1)

{
  undefined1 *puVar1;
  TMap<EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,0>_>
  *this_00;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FDS_ActionMountTableRow *pFVar4;
  bool bVar5;
  FDS_MountBaseTableRow *pFVar6;
  TSharedRef<FDS_MountStepInfo,1> *pTVar7;
  ForAnyElementType FVar8;
  TPairInitializer<EDS_MountStep_const_&,TSharedPtr<FDS_MountStepInfo,1>_&> local_res8;
  FDS_MountStepInfo *local_68;
  TReferenceControllerBase<1> *local_60;
  TArray<FDS_ActionMountTableRow_const_*,TSizedDefaultAllocator<32>_> local_58;
  EDS_MountStep *local_48;
  FDS_MountStepInfo **local_40;
  TSharedRef<FDS_MountStepInfo,1> local_38;
  
  this_00 = &this->MountStepInfoMap;
  bVar5 = 1 < *(int *)&(this->MountStepInfoMap).field_0x48;
  if (!bVar5) {
    TSet<TTuple<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>_>,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(this_00,0,*(int *)&(this->MountStepInfoMap).field_0x8);
  puVar1 = &(this->MountStepInfoMap).field_0xc;
  *(undefined4 *)&(this->MountStepInfoMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->MountStepInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MountStepInfoMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->MountStepInfoMap).field_0x2c;
  *(undefined4 *)&(this->MountStepInfoMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->MountStepInfoMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MountStepInfoMap).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->MountStepInfoMap).field_0x48 = 1;
    TSet<TTuple<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>_>,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  if (param_1 != 0) {
    pFVar6 = FDS_MountBaseTableRow::GetRef((longlong)param_1,true);
    FDS_ActionMountTableRow::GetAll(&local_58);
    iVar3 = local_58.ArrayNum;
    pFVar2 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8;
    FVar8.Data = local_58.AllocatorInstance.Data;
    while( true ) {
      if (local_58.ArrayNum != iVar3) {
        `TCheckedPointerIterator<FDS_ActionMountTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8.Value);
      }
      if (FVar8.Data == pFVar2) break;
      pFVar4 = *(FDS_ActionMountTableRow **)FVar8.Data;
      if ((pFVar4 != (FDS_ActionMountTableRow *)0x0) &&
         (pFVar6->RequiredSkill == pFVar4->PlayerSkillBase)) {
        pTVar7 = MakeShared<FDS_MountStepInfo,1>(&local_38);
        local_68 = pTVar7->Object;
        local_60 = (pTVar7->SharedReferenceCount).ReferenceController;
        if (local_60 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
        if (local_68 != (FDS_MountStepInfo *)0x0) {
          FDS_MountStepInfo::InitMountStepInfo(local_68,pFVar4);
          local_48 = &pFVar4->MountStep;
          local_40 = &local_68;
          TSet<TTuple<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>_>,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<enum_EDS_MountStep_const_&,TSharedPtr<FDS_MountStepInfo,1>_&>_>
                    (this_00,&local_res8,(bool *)&local_48);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60);
      }
      FVar8.Data = FVar8.Data + 8;
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  return;
}

// Mount @ 14b9fca30

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

void __thiscall UDS_MountAbilityData::Mount(UDS_MountAbilityData *this,FDS_EventDelegate<> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  FDS_EntityBase *pFVar5;
  UDS_LogManager *pUVar6;
  FWeakObjectPtr *pFVar7;
  UDS_MountManager *this_00;
  undefined1 auStackY_1c8 [32];
  FWeakObjectPtr local_188;
  FWeakObjectPtr local_180;
  ulong64 local_178;
  UDS_MountManager *local_170;
  ulong64 local_168;
  ulong64 local_160 [2];
  undefined1 local_150 [8];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this->IsDespawn = false;
  UDS_DataBase::GetEntityID((UDS_DataBase *)this);
  TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_180);
  bVar3 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_180,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1442693250031813085>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_MountAbilityData.cpp"
                       ,0x1dd,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                &(param_1->Delegate).field_0x8,*(int *)&(param_1->Delegate).field_0x10);
    pvVar1 = *(void **)&(param_1->Delegate).field_0x8;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
  }
  else {
    pUVar4 = FWeakObjectPtr::Get(&local_180);
    local_178 = *(ulong64 *)(pUVar4 + 5);
    pFVar5 = FDS_EntityBase::GetEntityBase(&local_178);
    if (pFVar5 == (FDS_EntityBase *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        FWeakObjectPtr::Get(&local_180);
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_MountAbilityData::Mount",0x1b,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,0x1e4,L"entity is nullptr. (%llu)");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pFVar7 = (FWeakObjectPtr *)(**(code **)(pFVar5->_padding_ + 0x80))(pFVar5,local_150);
      (this->MountSoulComponent).WeakPtr = *pFVar7;
      local_170 = UDS_MountManager::GetInst();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_170 != (UDS_MountManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_170);
      }
      local_188.ObjectIndex = 0;
      local_188.ObjectSerialNumber = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_170 != (UDS_MountManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_170);
      }
      FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_170);
      bVar3 = TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr> *)&local_188,(void *)0x0);
      if (!bVar3) {
        this_00 = (UDS_MountManager *)FWeakObjectPtr::Get(&local_188);
        pUVar4 = FWeakObjectPtr::Get(&local_180);
        local_168 = *(ulong64 *)(pUVar4 + 5);
        local_160[0] = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
        bVar3 = UDS_MountManager::AttachMountActor(this_00,local_160,&local_168);
        if (bVar3) {
          local_160[1] = 0x400;
          (**(code **)(pFVar5->_padding_ + 0x60))(pFVar5,local_160 + 1,0);
        }
      }
    }
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                &(param_1->Delegate).field_0x8,*(int *)&(param_1->Delegate).field_0x10);
    pvVar1 = *(void **)&(param_1->Delegate).field_0x8;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// OnChangedCharState @ 14b9fdca0

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
UDS_MountAbilityData::OnChangedCharState
          (UDS_MountAbilityData *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  undefined1 *puVar1;
  FDS_EventDelegate<float_const_> *this_00;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  UDS_CharStateData *pUVar11;
  UDS_DataBase *pUVar12;
  FDS_EntityBase *pFVar13;
  UObject *pUVar14;
  UDS_DataSetBase *this_01;
  ulong64 uVar15;
  FDS_MountBaseTableRow *pFVar16;
  UDS_MountEvent *pUVar17;
  uint uVar18;
  longlong lVar19;
  FWeakObjectPtr local_res10 [2];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_78;
  EDS_CharState local_70 [3];
  ulong64 local_58;
  FDestructionSentinel local_50;
  
  local_res10[0] = param_1.WeakPtr;
  bVar7 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (!bVar7) {
    pUVar11 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_70[0] = AirWalk;
    bVar7 = UDS_CharStateData::HasCharState(pUVar11,local_70);
    this->IsAirwalk = bVar7;
    pUVar11 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_70[1] = 1;
    bVar7 = UDS_CharStateData::HasCharState(pUVar11,local_70 + 1);
    this->IsSwim = bVar7;
    pUVar11 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_70[2] = 0x10000000;
    bVar7 = UDS_CharStateData::HasCharState(pUVar11,local_70 + 2);
    if ((this->IsMount != bVar7) && (this->IsMount = bVar7, bVar7)) {
      pUVar12 = (UDS_DataBase *)FWeakObjectPtr::Get(local_res10);
      local_58 = UDS_DataBase::GetEntityID(pUVar12);
      pFVar13 = FDS_EntityBase::GetEntityBase(&local_58);
      if ((pFVar13 != (FDS_EntityBase *)0x0) && (pFVar13->EntityType == MainCharacter)) {
        pUVar12 = (UDS_DataBase *)FWeakObjectPtr::Get(local_res10);
        UDS_DataBase::GetEntityID(pUVar12);
        TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_res20);
        bVar7 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_res20,
                           (void *)0x0);
        if (bVar7) {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1442693250031813267>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_MountAbilityData.cpp"
                             ,0x293,"false");
          if (!bVar7) {
            return;
          }
code_r0x00014b9fde3e:
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pUVar14 = FWeakObjectPtr::Get(&local_res20);
        uVar3 = *(undefined8 *)&pUVar14[4].field_0x20;
        this_01 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res20);
        uVar15 = UDS_DataSetBase::GetDataContainerKey(this_01);
        UDS_MountData::GetData((ulong64)&local_78,uVar15,SUB81(uVar3,0));
        bVar7 = TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_MountData,FWeakObjectPtr> *)&local_78,(void *)0x0);
        if (bVar7) {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1442693250031813274>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_MountAbilityData.cpp"
                             ,0x29a,"false");
          if (bVar7) goto code_r0x00014b9fde3e;
        }
        else {
          pUVar14 = FWeakObjectPtr::Get(&local_78);
          pFVar16 = FDS_MountBaseTableRow::GetRef((longlong)*(int *)&pUVar14[2].field_0x18,true);
          pUVar17 = UDS_MountEvent::GetEvent();
          if (pUVar17 != (UDS_MountEvent *)0x0) {
            this_00 = &pUVar17->SetMountRotationAngleDel;
            fVar2 = pFVar16->MountRotateAngle;
            bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
            if (bVar7) {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                         (FWriteAccessScope *)&local_50);
              puVar1 = &(pUVar17->SetMountRotationAngleDel).Delegate.field_0x1c;
              *(int *)puVar1 = *(int *)puVar1 + 1;
              bVar7 = false;
              uVar18 = *(int *)&(pUVar17->SetMountRotationAngleDel).Delegate.field_0x10 - 1;
              if (-1 < (int)uVar18) {
                lVar19 = (longlong)(int)uVar18 << 4;
                bVar7 = false;
                do {
                  uVar10 = 0;
                  if ((int)uVar18 < *(int *)&(pUVar17->SetMountRotationAngleDel).Delegate.field_0x10
                     ) {
                    uVar10 = ~uVar18 >> 0x1f;
                  }
                  if ((uVar10 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  lVar4 = *(longlong *)&(pUVar17->SetMountRotationAngleDel).Delegate.field_0x8;
                  if (((*(int *)(lVar4 + 8 + lVar19) == 0) ||
                      (plVar5 = *(longlong **)(lVar4 + lVar19), plVar5 == (longlong *)0x0)) ||
                     (cVar9 = (**(code **)(*plVar5 + 0x68))(plVar5,fVar2), cVar9 == '\0')) {
                    bVar7 = true;
                  }
                  lVar19 = lVar19 + -0x10;
                  uVar18 = uVar18 - 1;
                } while (-1 < (int)uVar18);
              }
              puVar1 = &(pUVar17->SetMountRotationAngleDel).Delegate.field_0x1c;
              *(int *)puVar1 = *(int *)puVar1 + -1;
              if (bVar7) {
                TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
              }
              if (local_50.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
              }
            }
          }
        }
      }
    }
  }
  return;
}

// OnChangedSelectedMount @ 14b9fdfb0

void __thiscall UDS_MountAbilityData::OnChangedSelectedMount(UDS_MountAbilityData *this,int param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res18 [2];
  
  InitMountSkillInfo(this,param_1);
  UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
  UDS_CharBuffData::GetData((ulong64)local_res18);
  bVar1 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)local_res18,(void *)0x0);
  if (!bVar1) {
    UpdateForbidMountJumpState(this,(TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>)local_res18[0])
    ;
    UpdateForbidMountSprintState
              (this,(TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>)local_res18[0]);
  }
  return;
}

// OnChangedSpecialBuff @ 14b9fe010

void __thiscall
UDS_MountAbilityData::OnChangedSpecialBuff
          (UDS_MountAbilityData *this,ulong64 *param_1,EDS_SpecialBuffType *param_2,bool *param_3)

{
  bool bVar1;
  FWeakObjectPtr local_res18 [2];
  
  if (*param_2 == ForbidMountJump) {
    this->ForbidMountJumpState = *param_3;
  }
  if (*param_2 == ForbidMountSprint) {
    this->ForbidMountSprintState = *param_3;
  }
  UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
  UDS_CharBuffData::GetData((ulong64)local_res18);
  bVar1 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)local_res18,(void *)0x0);
  if (!bVar1) {
    UpdateForbidMountJumpState(this,(TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>)local_res18[0])
    ;
    UpdateForbidMountSprintState
              (this,(TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>)local_res18[0]);
  }
  return;
}

// OnChangedStatus_MountStamina @ 14b9fe090

void __thiscall
UDS_MountAbilityData::OnChangedStatus_MountStamina
          (UDS_MountAbilityData *this,float param_1,float param_2)

{
  TMap<EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,0>_>
  *this_00;
  bool bVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement *pFVar3;
  undefined1 *puVar4;
  bool bVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UDS_MountManager *this_01;
  TArray<EDS_MountStep,TSizedDefaultAllocator<32>_> *pTVar9;
  TSharedPtr<FDS_MountStepInfo,1> *pTVar10;
  undefined1 *puVar11;
  int iVar12;
  size_t _Size;
  ForAnyElementType FVar13;
  FWeakObjectPtr local_res8;
  undefined1 local_res10 [8];
  UDS_MountManager *local_res20;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  bVar5 = __real_3dcccccd <= param_1 / param_2;
  bVar1 = this->IsMoved;
  local_res20 = UDS_MountManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res20 != (UDS_MountManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res20 != (UDS_MountManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  bVar7 = TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if (!bVar7) {
    this_01 = (UDS_MountManager *)FWeakObjectPtr::Get(&local_res8);
    pTVar9 = UDS_MountManager::GetMountStepArrayByAbilityTag(this_01,Mount_Sprint);
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = pTVar9->ArrayNum;
    _Size = (size_t)local_40;
    pFVar3 = (pTVar9->AllocatorInstance).Data;
    if (local_40 == 0) {
      local_3c = 0;
      iVar12 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_40,0,&local_48,local_40,&local_3c);
      memcpy(local_48.Data,pFVar3,_Size);
      iVar12 = local_40;
    }
    pFVar3 = local_48.Data + iVar12;
    FVar13.Data = local_48.Data;
    iVar8 = iVar12;
    while( true ) {
      if (iVar8 != iVar12) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<enum_EDS_MountStep_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar13.Data == pFVar3) break;
      this_00 = &this->MountStepInfoMap;
      FVar2 = *FVar13.Data;
      if (*(int *)&(this->MountStepInfoMap).field_0x8 ==
          *(int *)&(this->MountStepInfoMap).field_0x34) break;
      puVar4 = *(undefined1 **)&(this->MountStepInfoMap).field_0x40;
      puVar11 = &(this->MountStepInfoMap).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar11 = puVar4;
      }
      iVar8 = *(int *)(puVar11 +
                      ((ulonglong)(*(int *)&(this->MountStepInfoMap).field_0x48 - 1) &
                      (ulonglong)(byte)FVar2) * 4);
      if (iVar8 == -1) break;
      while (*(FScriptContainerElement *)((longlong)iVar8 * 0x20 + *(longlong *)this_00) != FVar2) {
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *(longlong *)this_00);
        if (iVar8 == -1) goto LAB_14b9fe244;
      }
      pTVar10 = TMapBase<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,0>_>
                ::FindChecked(this_00,(EDS_MountStep)FVar2);
      if (pTVar10->Object == (FDS_MountStepInfo *)0x0) break;
      pTVar10 = TMapBase<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,0>_>
                ::FindChecked(this_00,(EDS_MountStep)FVar2);
      if ((pTVar10->Object == (FDS_MountStepInfo *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (pTVar10->Object->IsActive == true) break;
      pTVar10 = TMapBase<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,0>_>
                ::FindChecked(this_00,(EDS_MountStep)FVar2);
      if ((pTVar10->Object == (FDS_MountStepInfo *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FDS_MountStepInfo::SetEnable(pTVar10->Object,bVar1 != false && (bVar5 && 0.0 < param_2));
      FVar13.Data = FVar13.Data + 1;
      iVar8 = local_40;
    }
LAB_14b9fe244:
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}

// ResetData @ 14ba18b50

void __thiscall UDS_MountAbilityData::ResetData(UDS_MountAbilityData *this)

{
  return;
}

// SetIsMoved @ 14ba1cdf0

void __thiscall UDS_MountAbilityData::SetIsMoved(UDS_MountAbilityData *this,bool *param_1)

{
  bool bVar1;
  
  bVar1 = *param_1;
  if ((this->IsMoved != bVar1) && (this->ForbidMountSprintState == false)) {
    SetMountStepInfoEnableByAbilityTagType(this,Mount_Sprint,bVar1);
    this->IsMoved = *param_1;
    return;
  }
  this->IsMoved = bVar1;
  return;
}

// SetLastMoveVector @ 14ba1ce40

void __thiscall
UDS_MountAbilityData::SetLastMoveVector(UDS_MountAbilityData *this,TVector<double> *param_1)

{
  undefined1 *puVar1;
  FDS_EventDelegate<EDS_MountFlyUpDownState_const_&> *this_00;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  EDS_MountFlyUpDownState EVar9;
  UDS_MountEvent *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  FDestructionSentinel local_38;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  EVar9 = None;
  (this->LastMoveVector).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->LastMoveVector).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  (this->LastMoveVector).field0_0x0._s_0.Z = dVar2;
  uVar12 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar13,uVar12) &&
      (double)CONCAT44(uVar13,uVar12) != __real_3f1a36e2e0000000) {
    EVar9 = (dVar2 < 0.0) + Ascent;
  }
  if (EVar9 != this->MountFlyUpDownState) {
    this->MountFlyUpDownState = EVar9;
    pUVar10 = UDS_MountEvent::GetEvent();
    if (pUVar10 != (UDS_MountEvent *)0x0) {
      this_00 = &pUVar10->MountFlyUpDownStateChangeDel;
      bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
      if (bVar6) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)&local_38);
        puVar1 = &(pUVar10->MountFlyUpDownStateChangeDel).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar6 = false;
        uVar12 = *(int *)&(pUVar10->MountFlyUpDownStateChangeDel).Delegate.field_0x10 - 1;
        if (-1 < (int)uVar12) {
          lVar11 = (longlong)(int)uVar12 << 4;
          bVar6 = false;
          do {
            uVar13 = 0;
            if ((int)uVar12 < *(int *)&(pUVar10->MountFlyUpDownStateChangeDel).Delegate.field_0x10)
            {
              uVar13 = ~uVar12 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar3 = *(longlong *)&(pUVar10->MountFlyUpDownStateChangeDel).Delegate.field_0x8;
            if (((*(int *)(lVar3 + 8 + lVar11) == 0) ||
                (plVar4 = *(longlong **)(lVar3 + lVar11), plVar4 == (longlong *)0x0)) ||
               (cVar8 = (**(code **)(*plVar4 + 0x68))(), cVar8 == '\0')) {
              bVar6 = true;
            }
            lVar11 = lVar11 + -0x10;
            uVar12 = uVar12 - 1;
          } while (-1 < (int)uVar12);
        }
        puVar1 = &(pUVar10->MountFlyUpDownStateChangeDel).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar6) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
        }
        if (local_38.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
        }
      }
    }
  }
  return;
}

// SetMountStepInfoEnableByAbilityTagType @ 14ba1d210

void __thiscall
UDS_MountAbilityData::SetMountStepInfoEnableByAbilityTagType
          (UDS_MountAbilityData *this,EDS_AbilityTagType param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UDS_MountManager *this_00;
  TArray<EDS_MountStep,TSizedDefaultAllocator<32>_> *pTVar8;
  TSharedPtr<FDS_MountStepInfo,1> *pTVar9;
  undefined1 *puVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res20 [8];
  FWeakObjectPtr local_38;
  UDS_MountManager *local_30;
  
  local_30 = UDS_MountManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UDS_MountManager *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_30);
  }
  local_38.ObjectIndex = 0;
  local_38.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UDS_MountManager *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_30);
  }
  FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_30);
  bVar6 = TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (!bVar6) {
    this_00 = (UDS_MountManager *)FWeakObjectPtr::Get(&local_38);
    pTVar8 = UDS_MountManager::GetMountStepArrayByAbilityTag(this_00,param_1);
    pFVar11 = (pTVar8->AllocatorInstance).Data;
    iVar3 = pTVar8->ArrayNum;
    pFVar1 = pFVar11 + iVar3;
    while( true ) {
      if (pTVar8->ArrayNum != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<enum_EDS_MountStep_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar11 == pFVar1) break;
      FVar2 = *pFVar11;
      if (*(int *)&(this->MountStepInfoMap).field_0x8 ==
          *(int *)&(this->MountStepInfoMap).field_0x34) {
LAB_14ba1d386:
        pFVar11 = pFVar11 + 1;
      }
      else {
        puVar4 = *(undefined1 **)&(this->MountStepInfoMap).field_0x40;
        puVar10 = &(this->MountStepInfoMap).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar10 = puVar4;
        }
        iVar7 = *(int *)(puVar10 +
                        ((ulonglong)(*(int *)&(this->MountStepInfoMap).field_0x48 - 1) &
                        (ulonglong)(byte)FVar2) * 4);
        if (iVar7 == -1) goto LAB_14ba1d386;
        do {
          if (*(FScriptContainerElement *)
               ((longlong)iVar7 * 0x20 + *(longlong *)&this->MountStepInfoMap) == FVar2) {
            pTVar9 = TMapBase<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,0>_>
                     ::FindChecked(&this->MountStepInfoMap,(EDS_MountStep)FVar2);
            if ((pTVar9->Object == (FDS_MountStepInfo *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FDS_MountStepInfo::SetEnable(pTVar9->Object,param_2);
            goto LAB_14ba1d386;
          }
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *(longlong *)&this->MountStepInfoMap);
        } while (iVar7 != -1);
        pFVar11 = pFVar11 + 1;
      }
    }
  }
  return;
}

// TamingMount @ 14ba1d7a0

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
UDS_MountAbilityData::TamingMount
          (UDS_MountAbilityData *this,long64 param_1,long64 param_2,FName *param_3,
          FDS_EventDelegate<> *param_4)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  FDS_EntityBase *pFVar7;
  FDS_EntityBase *pFVar8;
  UDS_MountDataSet *this_00;
  longlong lVar9;
  AActor *pAVar10;
  USceneComponent *pUVar11;
  UObject *pUVar12;
  UDS_LogManager *pUVar13;
  void *pvVar14;
  undefined1 auStackY_488 [32];
  FWeakObjectPtr local_448;
  FWeakObjectPtr local_440;
  FWeakObjectPtr local_438;
  FWeakObjectPtr local_430;
  FWeakObjectPtr local_428;
  FName local_420;
  ulong64 local_418;
  ulong64 local_410;
  TWeakObjectPtr<AActor,FWeakObjectPtr> local_408;
  FName *local_400;
  TVector<double>_u_0 local_3f8;
  TVector<double>_u_0 local_3d8;
  TVector<double>_u_0 local_3b8;
  TVector<double>_u_0 local_398;
  TQuat<double> local_378 [2];
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1a8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_488;
  local_418 = param_1;
  local_400 = param_3;
  pFVar7 = FDS_EntityBase::GetEntityBase(&local_418);
  local_410 = param_2;
  pFVar8 = FDS_EntityBase::GetEntityBase(&local_410);
  if ((pFVar7 == (FDS_EntityBase *)0x0) || (pFVar8 == (FDS_EntityBase *)0x0)) {
    pUVar13 = UDS_LogManager::GetInst();
    if (pUVar13 == (UDS_LogManager *)0x0) goto LAB_14ba1dc55;
    pUVar13 = UDS_LogManager::GetInst();
    local_1a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1a8,"UDS_MountAbilityData::TamingMount",0x21,Yes);
    UDS_LogManager::PrintLog
              (pUVar13,1,Warning,local_1a8.Ptr,0x1ff,L"Entity is nullptr. (%lld, %lld)");
    pvVar14 = (void *)local_1a8._padding_;
  }
  else {
    (**(code **)(pFVar7->_padding_ + 0x150))(pFVar7,&local_448);
    (**(code **)(pFVar8->_padding_ + 0x150))(pFVar8);
    bVar5 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_448,(void *)0x0);
    if ((!bVar5) &&
       (bVar5 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(&local_408,(void *)0x0), !bVar5))
    {
      (**(code **)(pFVar8->_padding_ + 0x80))(pFVar8);
      bVar5 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_440,
                         (void *)0x0);
      if (!bVar5) {
        (**(code **)(pFVar7->_padding_ + 0x80))(pFVar7);
        bVar5 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_438,
                           (void *)0x0);
        if (!bVar5) {
          TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_428);
          bVar5 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_428,
                             (void *)0x0);
          if (!bVar5) {
            this_00 = (UDS_MountDataSet *)FWeakObjectPtr::Get(&local_428);
            iVar6 = UDS_MountDataSet::GetMountID(this_00);
            FDS_MountBaseTableRow::GetRef((longlong)iVar6,true);
            lVar9 = (**(code **)(pFVar7->_padding_ + 0x28))(pFVar7);
            pAVar10 = (AActor *)FWeakObjectPtr::Get(&local_448);
            local_420.ComparisonIndex.Value = 0;
            local_420.Number = 0;
            pUVar11 = (USceneComponent *)FWeakObjectPtr::Get(&local_440);
            AActor::AttachToComponent
                      (pAVar10,pUVar11,&FAttachmentTransformRules::SnapToTargetNotIncludingScale,
                       local_420);
            pAVar10 = (AActor *)FWeakObjectPtr::Get(&local_448);
            local_3b8._s_0.Z = (double)*(float *)(lVar9 + 0x50);
            local_3b8._s_0.X = 0.0;
            local_3b8._s_0.Y = 0.0;
            AActor::SetActorRelativeLocation
                      (pAVar10,(TVector<double> *)&local_3b8._s_0,false,(FHitResult *)0x0,None);
            pUVar12 = FWeakObjectPtr::Get(&local_440);
            (**(code **)(*(longlong *)pUVar12 + 0x520))(pUVar12,&local_328);
            pUVar12 = FWeakObjectPtr::Get(&local_448);
            lVar9 = *(longlong *)(pUVar12 + 0xb);
            dVar3 = *(double *)(lVar9 + 0x148);
            dVar4 = *(double *)(lVar9 + 0x150);
            dVar1 = *(double *)(lVar9 + 0x158);
            pUVar11 = (USceneComponent *)FWeakObjectPtr::Get(&local_438);
            local_3d8._s_0.X = local_308 - dVar3;
            local_3d8._s_0.Z = local_2f8 - dVar1;
            local_3d8._s_0.Y = dStack_300 - dVar4;
            USceneComponent::SetRelativeLocation
                      (pUVar11,(TVector<double> *)&local_3d8._s_0,false,(FHitResult *)0x0,None);
            pUVar11 = (USceneComponent *)FWeakObjectPtr::Get(&local_438);
            local_378[0].X = local_328;
            local_378[0].Y = dStack_320;
            local_378[0].Z = local_318;
            local_378[0].W = dStack_310;
            local_3f8._s_0.X = (pUVar11->RelativeLocation).field0_0x0._s_0.X;
            local_3f8._s_0.Y = (pUVar11->RelativeLocation).field0_0x0._s_0.Y;
            local_3f8._s_0.Z = (pUVar11->RelativeLocation).field0_0x0._s_0.Z;
            USceneComponent::SetRelativeLocationAndRotation
                      (pUVar11,(TVector<double> *)&local_3f8._s_0,local_378,false,(FHitResult *)0x0,
                       None);
            (**(code **)(pFVar7->_padding_ + 0x170))(pFVar7,&local_430);
            bVar5 = FWeakObjectPtr::IsValid(&local_430);
            if (bVar5) {
              pUVar12 = FWeakObjectPtr::Get(&local_430);
              dVar4 = __real_c059000000000000;
              dVar1 = *(double *)&pUVar12[8].field_0x8;
              dVar3 = *(double *)&pUVar12[8].field_0x10;
              (this->NameTagLocationOrigin).field0_0x0._s_0.X = dVar1;
              (this->NameTagLocationOrigin).field0_0x0._s_0.Y = dVar3;
              (this->NameTagLocationOrigin).field0_0x0._s_0.Z = *(double *)&pUVar12[8].field_0x18;
              pUVar11 = (USceneComponent *)FWeakObjectPtr::Get(&local_430);
              local_398._s_0.Z = dVar4;
              local_398._s_0.X = dVar1;
              local_398._s_0.Y = dVar3;
              USceneComponent::SetRelativeLocation
                        (pUVar11,(TVector<double> *)&local_398._s_0,false,(FHitResult *)0x0,None);
            }
            FDS_EventDelegate<>::~FDS_EventDelegate<>(param_4);
            return;
          }
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1442693250031813147>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_MountAbilityData.cpp"
                             ,0x21b,"false");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
      FDS_EventDelegate<>::~FDS_EventDelegate<>(param_4);
      return;
    }
    pUVar13 = UDS_LogManager::GetInst();
    if (pUVar13 == (UDS_LogManager *)0x0) goto LAB_14ba1dc55;
    pUVar13 = UDS_LogManager::GetInst();
    local_2c8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_2c8,"UDS_MountAbilityData::TamingMount",0x21,Yes);
    UDS_LogManager::PrintLog(pUVar13,1,Warning,local_2c8.Ptr,0x208,L"Actor is nullptr.");
    pvVar14 = (void *)local_2c8._padding_;
  }
  if (pvVar14 != (void *)0x0) {
    FMemory::Free(pvVar14);
  }
LAB_14ba1dc55:
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(param_4->Delegate).field_0x8
             ,*(int *)&(param_4->Delegate).field_0x10);
  pvVar14 = *(void **)&(param_4->Delegate).field_0x8;
  if (pvVar14 != (void *)0x0) {
    FMemory::Free(pvVar14);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_4);
  return;
}

// TamingUnmount @ 14ba1dd90

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
UDS_MountAbilityData::TamingUnmount(UDS_MountAbilityData *this,long64 param_1,long64 param_2)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  FDS_EntityBase *pFVar3;
  AActor *this_00;
  USceneComponent *this_01;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_1e8 [32];
  FWeakObjectPtr local_1a8;
  FWeakObjectPtr local_1a0;
  ulong64 local_198;
  ulong64 local_190;
  TWeakObjectPtr<AActor,FWeakObjectPtr> local_188;
  TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> local_180;
  TVector<double>_u_0 local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_198 = param_1;
  pFVar2 = FDS_EntityBase::GetEntityBase(&local_198);
  local_190 = param_2;
  pFVar3 = FDS_EntityBase::GetEntityBase(&local_190);
  if ((pFVar3 == (FDS_EntityBase *)0x0) || (pFVar2 == (FDS_EntityBase *)0x0)) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_MountAbilityData::TamingUnmount",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0x254,L"Entity is nullptr. (%lld, lld)")
    ;
  }
  else {
    (**(code **)(pFVar2->_padding_ + 0x150))(pFVar2,&local_1a8);
    (**(code **)(pFVar3->_padding_ + 0x150))(pFVar3);
    bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(&local_188,(void *)0x0);
    if ((!bVar1) &&
       (bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_1a8,(void *)0x0), !bVar1)
       ) {
      (**(code **)(pFVar2->_padding_ + 0x80))(pFVar2);
      bVar1 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                        (&local_180,(void *)0x0);
      if (bVar1) {
        return;
      }
      this_00 = (AActor *)FWeakObjectPtr::Get(&local_1a8);
      AActor::DetachFromActor(this_00,&FDetachmentTransformRules::KeepWorldTransform);
      (**(code **)(pFVar2->_padding_ + 0x170))(pFVar2,&local_1a0);
      bVar1 = FWeakObjectPtr::IsValid(&local_1a0);
      if (!bVar1) {
        return;
      }
      this_01 = (USceneComponent *)FWeakObjectPtr::Get(&local_1a0);
      local_178._s_0.X = (this->NameTagLocationOrigin).field0_0x0._s_0.X;
      local_178._s_0.Y = (this->NameTagLocationOrigin).field0_0x0._s_0.Y;
      local_178._s_0.Z = (this->NameTagLocationOrigin).field0_0x0._s_0.Z;
      USceneComponent::SetRelativeLocation
                (this_01,(TVector<double> *)&local_178._s_0,false,(FHitResult *)0x0,None);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_MountAbilityData::TamingUnmount",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0x25c,L"Actor is nullptr.");
  }
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return;
}

// Unmount @ 14ba23290

void __thiscall UDS_MountAbilityData::Unmount(UDS_MountAbilityData *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_MountManager *this_00;
  UObject *pUVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UDS_MountManager *local_38;
  ulong64 local_30;
  ulong64 local_28;
  undefined8 local_20;
  
  UDS_DataBase::GetEntityID((UDS_DataBase *)this);
  TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_res20);
  bVar2 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1442693250031813184>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_MountAbilityData.cpp"
                       ,0x240,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_38 = UDS_MountManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_38 != (UDS_MountManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_38 != (UDS_MountManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_38);
    bVar2 = TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr> *)&local_res10,(void *)0x0);
    if (!bVar2) {
      this_00 = (UDS_MountManager *)FWeakObjectPtr::Get(&local_res10);
      pUVar3 = FWeakObjectPtr::Get(&local_res20);
      local_30 = *(ulong64 *)(pUVar3 + 5);
      local_28 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
      UDS_MountManager::DettachMountActor(this_00,&local_28,&local_30);
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_20 = 0;
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_20);
      (this->MountSoulComponent).WeakPtr = local_res18;
    }
  }
  return;
}

// UpdateForbidMountJumpState @ 14ba23ea0

void __thiscall
UDS_MountAbilityData::UpdateForbidMountJumpState
          (UDS_MountAbilityData *this,TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> param_1)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  undefined1 *puVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  UDS_CharBuffData *this_00;
  UDS_MountManager *this_01;
  TArray<EDS_MountStep,TSizedDefaultAllocator<32>_> *pTVar8;
  TSharedPtr<FDS_MountStepInfo,1> *pTVar9;
  undefined1 *puVar10;
  ForAnyElementType FVar11;
  size_t _Size;
  FWeakObjectPtr local_res10;
  undefined1 local_res18 [8];
  int local_res20 [2];
  EDS_SpecialBuffType local_58 [2];
  FWeakObjectPtr local_50;
  UDS_MountManager *local_48;
  ForAnyElementType local_40;
  int local_38;
  int local_34 [3];
  
  local_res10 = param_1.WeakPtr;
  bVar6 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar6) {
    local_res20[0] = 0;
    this_00 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&local_res10);
    local_58[0] = ForbidMountJump;
    bVar6 = UDS_CharBuffData::HasSpecialBuffInfo(this_00,local_58,local_res20);
    this->ForbidMountJumpState = bVar6;
    local_48 = UDS_MountManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_48 != (UDS_MountManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48);
    }
    local_50.ObjectIndex = 0;
    local_50.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_48 != (UDS_MountManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48);
    }
    FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_48);
    bVar6 = TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr> *)&local_50,(void *)0x0);
    if (!bVar6) {
      this_01 = (UDS_MountManager *)FWeakObjectPtr::Get(&local_50);
      pTVar8 = UDS_MountManager::GetMountStepArrayByAbilityTag(this_01,AirWalk_Jump);
      local_40.Data = (FScriptContainerElement *)0x0;
      local_38 = pTVar8->ArrayNum;
      _Size = (size_t)local_38;
      pFVar2 = (pTVar8->AllocatorInstance).Data;
      if (local_38 == 0) {
        local_34[0] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_38,0,&local_40,local_38,local_34);
        memcpy(local_40.Data,pFVar2,_Size);
      }
      iVar5 = local_38;
      pFVar2 = local_40.Data + local_38;
      FVar11.Data = local_40.Data;
      while( true ) {
        if (local_38 != iVar5) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<enum_EDS_MountStep_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (FVar11.Data == pFVar2) break;
        FVar1 = *FVar11.Data;
        if (*(int *)&(this->MountStepInfoMap).field_0x8 ==
            *(int *)&(this->MountStepInfoMap).field_0x34) {
LAB_14ba240a3:
          FVar11.Data = FVar11.Data + 1;
        }
        else {
          puVar3 = *(undefined1 **)&(this->MountStepInfoMap).field_0x40;
          puVar10 = &(this->MountStepInfoMap).field_0x38;
          if (puVar3 != (undefined1 *)0x0) {
            puVar10 = puVar3;
          }
          iVar7 = *(int *)(puVar10 +
                          ((ulonglong)(*(int *)&(this->MountStepInfoMap).field_0x48 - 1) &
                          (ulonglong)(byte)FVar1) * 4);
          if (iVar7 == -1) goto LAB_14ba240a3;
          do {
            if (*(FScriptContainerElement *)
                 ((longlong)iVar7 * 0x20 + *(longlong *)&this->MountStepInfoMap) == FVar1) {
              pTVar9 = TMapBase<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,0>_>
                       ::FindChecked(&this->MountStepInfoMap,(EDS_MountStep)FVar1);
              if ((pTVar9->Object == (FDS_MountStepInfo *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (pTVar9->Object->IsActive != true) goto LAB_14ba240a3;
              local_58[1] = 0x1074;
              UDS_CharBuffData::ShowForbidSpecialBuffMessage(local_res20,local_58 + 1);
              goto LAB_14ba240bf;
            }
            iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *(longlong *)&this->MountStepInfoMap);
          } while (iVar7 != -1);
          FVar11.Data = FVar11.Data + 1;
        }
      }
LAB_14ba240bf:
      SetMountStepInfoEnableByAbilityTagType(this,AirWalk_Jump,this->ForbidMountJumpState == false);
      if (local_40.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data);
      }
    }
  }
  return;
}

// UpdateForbidMountSprintState @ 14ba24110

void __thiscall
UDS_MountAbilityData::UpdateForbidMountSprintState
          (UDS_MountAbilityData *this,TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UDS_CharBuffData *this_00;
  UDS_MountManager *this_01;
  TArray<EDS_MountStep,TSizedDefaultAllocator<32>_> *pTVar8;
  TSharedPtr<FDS_MountStepInfo,1> *pTVar9;
  undefined1 *puVar10;
  FScriptContainerElement *pFVar11;
  FWeakObjectPtr local_res10;
  undefined1 local_res18 [8];
  int local_res20 [2];
  EDS_SpecialBuffType local_48 [2];
  FWeakObjectPtr local_40;
  UDS_MountManager *local_38 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar6 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar6) {
    if (this->IsMoved == false) {
      SetMountStepInfoEnableByAbilityTagType(this,Mount_Sprint,false);
      return;
    }
    local_res20[0] = 0;
    this_00 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&local_res10);
    local_48[0] = ForbidMountSprint;
    bVar6 = UDS_CharBuffData::HasSpecialBuffInfo(this_00,local_48,local_res20);
    this->ForbidMountSprintState = bVar6;
    if (bVar6) {
      local_38[0] = UDS_MountManager::GetInst();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_38[0] != (UDS_MountManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_38[0]);
      }
      local_40.ObjectIndex = 0;
      local_40.ObjectSerialNumber = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_38[0] != (UDS_MountManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_38[0]);
      }
      FWeakObjectPtr::operator=(&local_40,(FObjectPtr)local_38);
      bVar6 = TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr> *)&local_40,(void *)0x0);
      if (bVar6) {
        return;
      }
      this_01 = (UDS_MountManager *)FWeakObjectPtr::Get(&local_40);
      pTVar8 = UDS_MountManager::GetMountStepArrayByAbilityTag(this_01,Mount_Sprint);
      pFVar11 = (pTVar8->AllocatorInstance).Data;
      iVar3 = pTVar8->ArrayNum;
      pFVar1 = pFVar11 + iVar3;
      while( true ) {
        if (pTVar8->ArrayNum != iVar3) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<enum_EDS_MountStep_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (pFVar11 == pFVar1) break;
        FVar2 = *pFVar11;
        if (*(int *)&(this->MountStepInfoMap).field_0x8 ==
            *(int *)&(this->MountStepInfoMap).field_0x34) {
LAB_14ba242f6:
          pFVar11 = pFVar11 + 1;
        }
        else {
          puVar4 = *(undefined1 **)&(this->MountStepInfoMap).field_0x40;
          puVar10 = &(this->MountStepInfoMap).field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar10 = puVar4;
          }
          iVar7 = *(int *)(puVar10 +
                          ((ulonglong)(*(int *)&(this->MountStepInfoMap).field_0x48 - 1) &
                          (ulonglong)(byte)FVar2) * 4);
          if (iVar7 == -1) goto LAB_14ba242f6;
          do {
            if (*(FScriptContainerElement *)
                 ((longlong)iVar7 * 0x20 + *(longlong *)&this->MountStepInfoMap) == FVar2) {
              pTVar9 = TMapBase<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,0>_>
                       ::FindChecked(&this->MountStepInfoMap,(EDS_MountStep)FVar2);
              if ((pTVar9->Object == (FDS_MountStepInfo *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (pTVar9->Object->IsActive != true) goto LAB_14ba242f6;
              local_48[1] = 0x1073;
              UDS_CharBuffData::ShowForbidSpecialBuffMessage(local_res20,local_48 + 1);
              goto LAB_14ba24327;
            }
            iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *(longlong *)&this->MountStepInfoMap);
          } while (iVar7 != -1);
          pFVar11 = pFVar11 + 1;
        }
      }
    }
LAB_14ba24327:
    SetMountStepInfoEnableByAbilityTagType(this,Mount_Sprint,this->ForbidMountSprintState == false);
  }
  return;
}

// UpdateSpecialBuff @ 14ba24500

void __thiscall UDS_MountAbilityData::UpdateSpecialBuff(UDS_MountAbilityData *this)

{
  bool bVar1;
  FWeakObjectPtr local_res10 [3];
  
  UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
  UDS_CharBuffData::GetData((ulong64)local_res10);
  bVar1 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (!bVar1) {
    UpdateForbidMountJumpState(this,(TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>)local_res10[0])
    ;
    UpdateForbidMountSprintState
              (this,(TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>)local_res10[0]);
  }
  return;
}

