// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b5aecd0

UClass * __cdecl UDS_SwimAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SwimAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SwimAbilityData",
               &Z_Registration_Info_UClass_UDS_SwimAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_SwimAbilityData,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SwimAbilityData>,
               InternalVTableHelperCtorCaller<UDS_SwimAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SwimAbilityData.InnerSingleton;
}

// UDS_SwimAbilityData @ 14b5b16d0

UDS_SwimAbilityData * __thiscall
UDS_SwimAbilityData::UDS_SwimAbilityData(UDS_SwimAbilityData *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SwimAbilityData__6B_;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->SwimStepInfoMap = 0;
  *(undefined8 *)&(this->SwimStepInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->SwimStepInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->SwimStepInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->SwimStepInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SwimStepInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->SwimStepInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SwimStepInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->SwimStepInfoMap).field_0x48 = 0;
  this->PreviousStep = Ready;
  this->CurrentStep = Ready;
  *(undefined8 *)&this->OnLandEnterDelegate = 0;
  *(undefined8 *)&(this->OnLandEnterDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnLandEnterDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnLandEnterDelegate).field_0x18 = 2;
  return this;
}

// ~UDS_SwimAbilityData @ 14b5b2600

void __thiscall UDS_SwimAbilityData::~UDS_SwimAbilityData(UDS_SwimAbilityData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_SwimAbilityData__6B_;
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
  *(undefined4 *)&(this->SwimStepInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SwimStepInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_SwimStep,TSharedPtr<FDS_SwimStepInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_SwimStep,TSharedPtr<FDS_SwimStepInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->SwimStepInfoMap);
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b4090

UClass * __cdecl UDS_SwimAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SwimAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SwimAbilityData",
               &Z_Registration_Info_UClass_UDS_SwimAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_SwimAbilityData,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SwimAbilityData>,
               InternalVTableHelperCtorCaller<UDS_SwimAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SwimAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_SwimAbilityData @ 14b5b5870

void __cdecl UDS_SwimAbilityData::StaticRegisterNativesUDS_SwimAbilityData(void)

{
  return;
}

// UDS_SwimAbilityData @ 14ba33680

UDS_SwimAbilityData * __thiscall
UDS_SwimAbilityData::UDS_SwimAbilityData(UDS_SwimAbilityData *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SwimAbilityData__6B_;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->SwimStepInfoMap = 0;
  *(undefined8 *)&(this->SwimStepInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->SwimStepInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->SwimStepInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->SwimStepInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SwimStepInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->SwimStepInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SwimStepInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->SwimStepInfoMap).field_0x48 = 0;
  this->PreviousStep = Ready;
  this->CurrentStep = Ready;
  *(undefined8 *)&this->OnLandEnterDelegate = 0;
  *(undefined8 *)&(this->OnLandEnterDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnLandEnterDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnLandEnterDelegate).field_0x18 = 2;
  return this;
}

// ActivateStep @ 14ba34b70

void __thiscall UDS_SwimAbilityData::ActivateStep(UDS_SwimAbilityData *this,EDS_SwimStep param_1)

{
  FDS_SwimStepInfo *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSharedPtr<FDS_SwimStepInfo,1> *pTVar5;
  UDS_SwimEvent *pUVar6;
  UObject *pUVar7;
  undefined1 *puVar8;
  double dVar9;
  
  this->CurrentStep = param_1;
  if ((param_1 != Ready) &&
     (*(int *)&(this->SwimStepInfoMap).field_0x8 != *(int *)&(this->SwimStepInfoMap).field_0x34)) {
    puVar8 = *(undefined1 **)&(this->SwimStepInfoMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->SwimStepInfoMap).field_0x38;
    }
    iVar4 = *(int *)(puVar8 + ((ulonglong)(*(int *)&(this->SwimStepInfoMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar4 != -1) {
      while (*(EDS_SwimStep *)((longlong)iVar4 * 0x20 + *(longlong *)&this->SwimStepInfoMap) !=
             param_1) {
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)&this->SwimStepInfoMap);
        if (iVar4 == -1) {
          return;
        }
      }
      pTVar5 = TMapBase<enum_EDS_SwimStep,TSharedPtr<FDS_SwimStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_SwimStep,TSharedPtr<FDS_SwimStepInfo,1>,0>_>
               ::FindChecked(&this->SwimStepInfoMap,param_1);
      if ((pTVar5->Object == (FDS_SwimStepInfo *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = pTVar5->Object;
      dVar9 = UDS_TimeUtilManager::GetCurrentServerTime();
      pFVar1->IsActive = true;
      pFVar1->ActivationStartTime = dVar9;
      pFVar1->ActivationEndTime = (double)pFVar1->Duration + dVar9;
      pUVar6 = UDS_SwimEvent::GetEvent();
      if (pUVar6 != (UDS_SwimEvent *)0x0) {
        FDS_EventDelegate<FDS_SwimStepInfo_const_&>::Broadcast(&pUVar6->OnChangedSwimStep,pFVar1);
        FDS_FilteredEventDelegate<enum_EDS_SwimStep_const_,FDS_SwimStepInfo_const_&>::Broadcast
                  (&pUVar6->OnChangedSwimStep_Filtered,&pFVar1->SwimStep,pFVar1);
      }
      *(undefined1 *)&this->_padding_ = 1;
      bVar3 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                         (void *)0x0);
      if (!bVar3) {
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pUVar7[4].field_0x8 = 1;
        bVar3 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar7 + 4),
                           (void *)0x0);
        if (!bVar3) {
          pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar7 + 4));
          pUVar7[3].field_0x20 = 1;
        }
      }
    }
  }
  return;
}

// CanNextStep @ 14ba38040

bool __thiscall UDS_SwimAbilityData::CanNextStep(UDS_SwimAbilityData *this,EDS_SwimStep param_1)

{
  bool bVar1;
  
  bVar1 = IsNextStepPossible(this,this->CurrentStep,param_1);
  return bVar1;
}

// Created @ 14ba3c2e0

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

void __thiscall UDS_SwimAbilityData::Created(UDS_SwimAbilityData *this)

{
  bool bVar1;
  UObject *pUVar2;
  FDS_EntityBase *pFVar3;
  FWeakObjectPtr *pFVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_178 [32];
  ulong64 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (bVar1) {
    local_148[0] = 0;
  }
  else {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (bVar1) {
      local_148[0] = 0;
    }
    else {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      local_148[0] = *(ulong64 *)(pUVar2 + 1);
    }
  }
  pFVar3 = FDS_EntityBase::GetEntityBase(local_148);
  if (pFVar3 != (FDS_EntityBase *)0x0) {
    pFVar4 = (FWeakObjectPtr *)(**(code **)(pFVar3->_padding_ + 0x150))(pFVar3);
    (this->OwnerActor).WeakPtr = *pFVar4;
    bVar1 = InitSwimData(this);
    if (bVar1) {
      *(undefined1 *)&this->_padding_ = 1;
      bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                         (void *)0x0);
      if (!bVar1) {
        pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pUVar2[4].field_0x8 = 1;
        bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                           (void *)0x0);
        if (!bVar1) {
          pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
          pUVar2[3].field_0x20 = 1;
        }
      }
    }
    else {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_SwimAbilityData::Created",0x1c,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_138.Ptr,0x35,
                   L"UDS_SwimAbilityData::Created -> InitSwimData == false");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return;
}

// DeActivateStep @ 14ba3c4a0

void __thiscall UDS_SwimAbilityData::DeActivateStep(UDS_SwimAbilityData *this,EDS_SwimStep param_1)

{
  FDS_SwimStepInfo *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSharedPtr<FDS_SwimStepInfo,1> *pTVar5;
  UDS_SwimEvent *pUVar6;
  UObject *pUVar7;
  undefined1 *puVar8;
  double dVar9;
  
  this->PreviousStep = param_1;
  if ((param_1 != Ready) &&
     (*(int *)&(this->SwimStepInfoMap).field_0x8 != *(int *)&(this->SwimStepInfoMap).field_0x34)) {
    puVar8 = *(undefined1 **)&(this->SwimStepInfoMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->SwimStepInfoMap).field_0x38;
    }
    iVar4 = *(int *)(puVar8 + ((ulonglong)(*(int *)&(this->SwimStepInfoMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar4 != -1) {
      while (*(EDS_SwimStep *)((longlong)iVar4 * 0x20 + *(longlong *)&this->SwimStepInfoMap) !=
             param_1) {
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)&this->SwimStepInfoMap);
        if (iVar4 == -1) {
          return;
        }
      }
      pTVar5 = TMapBase<enum_EDS_SwimStep,TSharedPtr<FDS_SwimStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_SwimStep,TSharedPtr<FDS_SwimStepInfo,1>,0>_>
               ::FindChecked(&this->SwimStepInfoMap,param_1);
      if ((pTVar5->Object == (FDS_SwimStepInfo *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = pTVar5->Object;
      dVar9 = UDS_TimeUtilManager::GetCurrentServerTime();
      pFVar1->IsActive = false;
      pFVar1->ActivationEndTime = 0.0;
      pFVar1->DeActivateTime = dVar9;
      pFVar1->CoolTimeEndTime = (double)pFVar1->CoolTime + dVar9;
      pUVar6 = UDS_SwimEvent::GetEvent();
      if (pUVar6 != (UDS_SwimEvent *)0x0) {
        FDS_EventDelegate<FDS_SwimStepInfo_const_&>::Broadcast(&pUVar6->OnChangedSwimStep,pFVar1);
        FDS_FilteredEventDelegate<enum_EDS_SwimStep_const_,FDS_SwimStepInfo_const_&>::Broadcast
                  (&pUVar6->OnChangedSwimStep_Filtered,&pFVar1->SwimStep,pFVar1);
      }
      *(undefined1 *)&this->_padding_ = 1;
      bVar3 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                         (void *)0x0);
      if (!bVar3) {
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pUVar7[4].field_0x8 = 1;
        bVar3 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar7 + 4),
                           (void *)0x0);
        if (!bVar3) {
          pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar7 + 4));
          pUVar7[3].field_0x20 = 1;
        }
      }
    }
  }
  return;
}

// Deleted @ 14ba3ce20

void __thiscall UDS_SwimAbilityData::Deleted(UDS_SwimAbilityData *this)

{
  return;
}

// DoNextStep @ 14ba3d000

void __thiscall UDS_SwimAbilityData::DoNextStep(UDS_SwimAbilityData *this,EDS_SwimStep param_1)

{
  EDS_SwimStep EVar1;
  FDS_SwimStepInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<FDS_SwimStepInfo,1> *pTVar6;
  UDS_SwimEvent *pUVar7;
  UObject *pUVar8;
  undefined1 *puVar9;
  double dVar10;
  
  EVar1 = this->CurrentStep;
  this->PreviousStep = EVar1;
  if ((EVar1 != Ready) &&
     (*(int *)&(this->SwimStepInfoMap).field_0x8 != *(int *)&(this->SwimStepInfoMap).field_0x34)) {
    puVar9 = *(undefined1 **)&(this->SwimStepInfoMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->SwimStepInfoMap).field_0x38;
    }
    iVar5 = *(int *)(puVar9 + ((ulonglong)(*(int *)&(this->SwimStepInfoMap).field_0x48 - 1) &
                              (ulonglong)EVar1) * 4);
    if (iVar5 != -1) {
      do {
        if (*(EDS_SwimStep *)((longlong)iVar5 * 0x20 + *(longlong *)&this->SwimStepInfoMap) == EVar1
           ) {
          pTVar6 = TMapBase<enum_EDS_SwimStep,TSharedPtr<FDS_SwimStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_SwimStep,TSharedPtr<FDS_SwimStepInfo,1>,0>_>
                   ::FindChecked(&this->SwimStepInfoMap,EVar1);
          if ((pTVar6->Object == (FDS_SwimStepInfo *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = pTVar6->Object;
          dVar10 = UDS_TimeUtilManager::GetCurrentServerTime();
          pFVar2->IsActive = false;
          pFVar2->ActivationEndTime = 0.0;
          pFVar2->DeActivateTime = dVar10;
          pFVar2->CoolTimeEndTime = (double)pFVar2->CoolTime + dVar10;
          pUVar7 = UDS_SwimEvent::GetEvent();
          if (pUVar7 != (UDS_SwimEvent *)0x0) {
            FDS_EventDelegate<FDS_SwimStepInfo_const_&>::Broadcast
                      (&pUVar7->OnChangedSwimStep,pFVar2);
            FDS_FilteredEventDelegate<enum_EDS_SwimStep_const_,FDS_SwimStepInfo_const_&>::Broadcast
                      (&pUVar7->OnChangedSwimStep_Filtered,&pFVar2->SwimStep,pFVar2);
          }
          *(undefined1 *)&this->_padding_ = 1;
          bVar4 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                             (void *)0x0);
          if (!bVar4) {
            pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
            pUVar8[4].field_0x8 = 1;
            bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar8 + 4),
                               (void *)0x0);
            if (!bVar4) {
              pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar8 + 4));
              pUVar8[3].field_0x20 = 1;
            }
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *(longlong *)&this->SwimStepInfoMap);
      } while (iVar5 != -1);
    }
  }
  this->CurrentStep = param_1;
  if ((param_1 != Ready) &&
     (*(int *)&(this->SwimStepInfoMap).field_0x8 != *(int *)&(this->SwimStepInfoMap).field_0x34)) {
    puVar9 = *(undefined1 **)&(this->SwimStepInfoMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->SwimStepInfoMap).field_0x38;
    }
    iVar5 = *(int *)(puVar9 + ((ulonglong)(*(int *)&(this->SwimStepInfoMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar5 != -1) {
      while (*(EDS_SwimStep *)((longlong)iVar5 * 0x20 + *(longlong *)&this->SwimStepInfoMap) !=
             param_1) {
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *(longlong *)&this->SwimStepInfoMap);
        if (iVar5 == -1) {
          return;
        }
      }
      pTVar6 = TMapBase<enum_EDS_SwimStep,TSharedPtr<FDS_SwimStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_SwimStep,TSharedPtr<FDS_SwimStepInfo,1>,0>_>
               ::FindChecked(&this->SwimStepInfoMap,param_1);
      if ((pTVar6->Object == (FDS_SwimStepInfo *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = pTVar6->Object;
      dVar10 = UDS_TimeUtilManager::GetCurrentServerTime();
      pFVar2->IsActive = true;
      pFVar2->ActivationStartTime = dVar10;
      pFVar2->ActivationEndTime = (double)pFVar2->Duration + dVar10;
      pUVar7 = UDS_SwimEvent::GetEvent();
      if (pUVar7 != (UDS_SwimEvent *)0x0) {
        FDS_EventDelegate<FDS_SwimStepInfo_const_&>::Broadcast(&pUVar7->OnChangedSwimStep,pFVar2);
        FDS_FilteredEventDelegate<enum_EDS_SwimStep_const_,FDS_SwimStepInfo_const_&>::Broadcast
                  (&pUVar7->OnChangedSwimStep_Filtered,&pFVar2->SwimStep,pFVar2);
      }
      *(undefined1 *)&this->_padding_ = 1;
      bVar4 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                         (void *)0x0);
      if (!bVar4) {
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pUVar8[4].field_0x8 = 1;
        bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar8 + 4),
                           (void *)0x0);
        if (!bVar4) {
          pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar8 + 4));
          pUVar8[3].field_0x20 = 1;
        }
      }
    }
  }
  return;
}

// GetCurTime @ 14ba466c0

double __thiscall UDS_SwimAbilityData::GetCurTime(UDS_SwimAbilityData *this)

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

// GetReferenceStep @ 14ba4e9a0

EDS_SwimStep __thiscall UDS_SwimAbilityData::GetReferenceStep(UDS_SwimAbilityData *this)

{
  return this->CurrentStep;
}

// GetSwimAbilityTagTypeFromStep @ 14ba50580

EDS_AbilityTagType __cdecl UDS_SwimAbilityData::GetSwimAbilityTagTypeFromStep(EDS_SwimStep param_1)

{
  if (param_1 == Swim) {
    return Swim;
  }
  if (param_1 == SwimSurfaceSprint) {
    return SwimSurfaceSprint;
  }
  if (param_1 == SwimDown) {
    return SwimDown;
  }
  if (param_1 != SwimSubmergeSprint) {
    if (param_1 != SwimUp) {
      return None;
    }
    return SwimUp;
  }
  return SwimSubmergeSprint;
}

// GetSwimStepInfo @ 14ba505c0

FDS_SwimStepInfo * __thiscall
UDS_SwimAbilityData::GetSwimStepInfo(UDS_SwimAbilityData *this,EDS_SwimStep param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_SwimStepInfo *pFVar5;
  TSharedPtr<FDS_SwimStepInfo,1> *pTVar6;
  undefined1 *puVar7;
  
  if (*(int *)&(this->SwimStepInfoMap).field_0x8 != *(int *)&(this->SwimStepInfoMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->SwimStepInfoMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->SwimStepInfoMap).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + ((ulonglong)(*(int *)&(this->SwimStepInfoMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->SwimStepInfoMap;
      do {
        if (*(EDS_SwimStep *)((longlong)iVar4 * 0x20 + lVar1) == param_1) {
          pTVar6 = TMapBase<enum_EDS_SwimStep,TSharedPtr<FDS_SwimStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_SwimStep,TSharedPtr<FDS_SwimStepInfo,1>,0>_>
                   ::FindChecked(&this->SwimStepInfoMap,param_1);
          if (pTVar6->Object == (FDS_SwimStepInfo *)0x0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pFVar5 = (FDS_SwimStepInfo *)(*pcVar2)();
              return pFVar5;
            }
          }
          return pTVar6->Object;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar1);
      } while (iVar4 != -1);
    }
  }
  if (EmptySharedSwimStepInfo.Object == (FDS_SwimStepInfo *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDS_SwimStepInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  return EmptySharedSwimStepInfo.Object;
}

// InitSwimData @ 14ba591e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UDS_SwimAbilityData::InitSwimData(UDS_SwimAbilityData *this)

{
  FScriptContainerElement *pFVar1;
  FDS_ActionSwimTableRow *pFVar2;
  undefined1 *puVar3;
  code *pcVar4;
  FDS_SwimStepInfo *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  int iVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined1 *puVar12;
  TReferenceControllerBase<1> *pTVar13;
  ForAnyElementType FVar14;
  undefined1 local_res8 [16];
  FDS_SwimStepInfo *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  TArray<FDS_ActionSwimTableRow_const_*,TSizedDefaultAllocator<32>_> local_68;
  FDS_SwimStepInfo *local_58;
  FDS_SwimStepInfo **local_50;
  
  if (*(int *)&(this->SwimStepInfoMap).field_0x8 == *(int *)&(this->SwimStepInfoMap).field_0x34) {
    FDS_ActionSwimTableRow::GetAll(&local_68);
    iVar7 = local_68.ArrayNum;
    pTVar6 = _UNK_150651568;
    pFVar5 = ___xmm_00000000000000000000000000000010;
    pFVar1 = local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 8;
    FVar14.Data = local_68.AllocatorInstance.Data;
    while( true ) {
      pTVar13 = (TReferenceControllerBase<1> *)0x0;
      if (local_68.ArrayNum != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FDS_ActionSwimTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (FVar14.Data == pFVar1) break;
      pFVar2 = *(FDS_ActionSwimTableRow **)FVar14.Data;
      if (pFVar2 != (FDS_ActionSwimTableRow *)0x0) {
        pTVar11 = ::operator_new(0xa8);
        if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
          local_78 = pFVar5;
          pTStack_70 = pTVar6;
        }
        else {
          pTVar11->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFDS_SwimStepInfo___00_SharedPointerInternals__6B_
          ;
          pTVar11->SharedReferenceCount = (atomic<int>)0x1;
          pTVar11->WeakReferenceCount = (atomic<int>)0x1;
          pTVar11[3].SharedReferenceCount = (atomic<int>)0x0;
          pTVar11[3].WeakReferenceCount = (atomic<int>)0x0;
          pTVar11[4]._padding_ = 0;
          pTVar11[4].SharedReferenceCount = (atomic<int>)0x0;
          pTVar11[4].WeakReferenceCount = (atomic<int>)0x0;
          pTVar11[5]._padding_ = 0;
          *(undefined4 *)&pTVar11[1]._padding_ = 0;
          *(undefined4 *)((longlong)&pTVar11[3]._padding_ + 4) = 0;
          *(undefined8 *)((longlong)&pTVar11[1]._padding_ + 4) = 0;
          *(undefined8 *)&pTVar11[1].WeakReferenceCount = 0;
          *(undefined8 *)((longlong)&pTVar11[2]._padding_ + 4) = 0;
          *(undefined8 *)&pTVar11[2].WeakReferenceCount = 0;
          pTVar11[6].SharedReferenceCount = (atomic<int>)0x0;
          pTVar11[6].WeakReferenceCount = (atomic<int>)0x0;
          pTVar11[7]._padding_ = 0;
          pTVar11[9]._padding_ = 0;
          pTVar11[10]._padding_ = 0;
          pTVar11[5].SharedReferenceCount = (atomic<int>)0x0;
          pTVar11[5].WeakReferenceCount = (atomic<int>)0x0;
          pTVar11[7].SharedReferenceCount = (atomic<int>)0x0;
          pTVar11[7].WeakReferenceCount = (atomic<int>)0x0;
          pTVar11[6]._padding_ = 0;
          *(undefined4 *)&pTVar11[8]._padding_ = 0;
          *(undefined4 *)((longlong)&pTVar11[8]._padding_ + 4) = 0x80;
          pTVar11[8].WeakReferenceCount = (atomic<int>)0x0;
          pTVar11[8].SharedReferenceCount = (atomic<int>)0xffffffff;
          pTVar11[9].SharedReferenceCount = (atomic<int>)0x0;
          pTVar11[9].WeakReferenceCount = (atomic<int>)0x0;
          if (((FDS_SwimStepInfo *)(pTVar11 + 1) == (FDS_SwimStepInfo *)0x0) &&
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
          pTVar13 = pTVar11;
          local_78 = (FDS_SwimStepInfo *)(pTVar11 + 1);
          pTStack_70 = pTVar11;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        if ((local_78 == (FDS_SwimStepInfo *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        FDS_SwimStepInfo::InitSwimStepInfo(local_78,pFVar2);
        if ((local_78 == (FDS_SwimStepInfo *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        if (*(int *)&(this->SwimStepInfoMap).field_0x8 !=
            *(int *)&(this->SwimStepInfoMap).field_0x34) {
          puVar3 = *(undefined1 **)&(this->SwimStepInfoMap).field_0x40;
          puVar12 = &(this->SwimStepInfoMap).field_0x38;
          if (puVar3 != (undefined1 *)0x0) {
            puVar12 = puVar3;
          }
          iVar10 = *(int *)(puVar12 +
                           ((ulonglong)(*(int *)&(this->SwimStepInfoMap).field_0x48 - 1) &
                           (ulonglong)local_78->SwimStep) * 4);
          if (iVar10 != -1) {
            do {
              if (*(EDS_SwimStep *)((longlong)iVar10 * 0x20 + *(longlong *)&this->SwimStepInfoMap)
                  == local_78->SwimStep) goto LAB_14ba5945d;
              iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + *(longlong *)&this->SwimStepInfoMap
                               );
            } while (iVar10 != -1);
          }
        }
        local_58 = local_78;
        local_50 = &local_78;
        TSet<TTuple<enum_EDS_SwimStep,TSharedPtr<FDS_SwimStepInfo,1>_>,TDefaultMapHashableKeyFuncs<enum_EDS_SwimStep,TSharedPtr<FDS_SwimStepInfo,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<enum_EDS_SwimStep_&,TSharedPtr<FDS_SwimStepInfo,1>_&>_>
                  (&this->SwimStepInfoMap,
                   (TPairInitializer<EDS_SwimStep_&,TSharedPtr<FDS_SwimStepInfo,1>_&> *)
                   (local_res8 + 8),(bool *)&local_58);
LAB_14ba5945d:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_70);
      }
      FVar14.Data = FVar14.Data + 8;
    }
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  return true;
}

// IsNextStepPossible @ 14ba5bc80

bool __thiscall
UDS_SwimAbilityData::IsNextStepPossible
          (UDS_SwimAbilityData *this,EDS_SwimStep param_1,EDS_SwimStep param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FDS_SwimStepInfo *pFVar3;
  FDS_SwimStepInfo *pFVar4;
  float *pfVar5;
  undefined1 *puVar6;
  double dVar7;
  float fVar8;
  
  pFVar3 = GetSwimStepInfo(this,param_1);
  pFVar4 = GetSwimStepInfo(this,param_2);
  if ((pFVar3->SwimStep == Ready) && (param_2 != Swim)) {
    return false;
  }
  dVar7 = UDS_TimeUtilManager::GetCurrentServerTime();
  if (dVar7 < pFVar4->CoolTimeEndTime) {
    return false;
  }
  if (pFVar3->SwimStep == Ready) {
    return true;
  }
  if (param_2 == Ready) {
    return true;
  }
  if (*(int *)&(pFVar3->NextStepAvailableTimeMap).field_0x8 ==
      *(int *)&(pFVar3->NextStepAvailableTimeMap).field_0x34) {
    return false;
  }
  puVar1 = &(pFVar3->NextStepAvailableTimeMap).field_0x38;
  puVar6 = *(undefined1 **)&(pFVar3->NextStepAvailableTimeMap).field_0x40;
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = puVar1;
  }
  iVar2 = *(int *)(puVar6 + ((ulonglong)(*(int *)&(pFVar3->NextStepAvailableTimeMap).field_0x48 - 1)
                            & (ulonglong)param_2) * 4);
  if (iVar2 == -1) {
    return false;
  }
  while (*(EDS_SwimStep *)(*(longlong *)&pFVar3->NextStepAvailableTimeMap + (longlong)iVar2 * 0x10)
         != param_2) {
    iVar2 = *(int *)(*(longlong *)&pFVar3->NextStepAvailableTimeMap + 8 + (longlong)iVar2 * 0x10);
    if (iVar2 == -1) {
      return false;
    }
  }
  dVar7 = UDS_TimeUtilManager::GetCurrentServerTime();
  if ((float)(dVar7 - pFVar3->ActivationStartTime) < pFVar3->UnableTime) {
    return false;
  }
  if (*(int *)&(pFVar3->NextStepAvailableTimeMap).field_0x8 !=
      *(int *)&(pFVar3->NextStepAvailableTimeMap).field_0x34) {
    puVar6 = *(undefined1 **)&(pFVar3->NextStepAvailableTimeMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = puVar1;
    }
    iVar2 = *(int *)(puVar6 + ((ulonglong)
                               (*(int *)&(pFVar3->NextStepAvailableTimeMap).field_0x48 - 1) &
                              (ulonglong)param_2) * 4);
    if (iVar2 != -1) {
      do {
        if (*(EDS_SwimStep *)
             (*(longlong *)&pFVar3->NextStepAvailableTimeMap + (longlong)iVar2 * 0x10) == param_2) {
          pfVar5 = TMapBase<enum_EDS_SwimStep,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_SwimStep,float,0>_>
                   ::FindChecked(&pFVar3->NextStepAvailableTimeMap,param_2);
          fVar8 = *pfVar5;
          goto LAB_14ba5bdb7;
        }
        iVar2 = *(int *)(*(longlong *)&pFVar3->NextStepAvailableTimeMap + 8 + (longlong)iVar2 * 0x10
                        );
      } while (iVar2 != -1);
    }
  }
  fVar8 = 0.0;
LAB_14ba5bdb7:
  if ((pFVar3->IsActive == false) &&
     (dVar7 = UDS_TimeUtilManager::GetCurrentServerTime(),
     (double)fVar8 < dVar7 - pFVar3->DeActivateTime)) {
    return false;
  }
  return true;
}

// ResetData @ 14ba69580

void __thiscall UDS_SwimAbilityData::ResetData(UDS_SwimAbilityData *this)

{
  this->PreviousStep = Ready;
  this->CurrentStep = Ready;
  return;
}

