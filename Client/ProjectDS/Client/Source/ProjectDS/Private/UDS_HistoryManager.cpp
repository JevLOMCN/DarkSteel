// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b4ac770

UClass * __cdecl UDS_HistoryManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HistoryManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HistoryManager",
               &Z_Registration_Info_UClass_UDS_HistoryManager.InnerSingleton,
               StaticRegisterNativesUDS_HistoryManager,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_HistoryManager>,
               InternalVTableHelperCtorCaller<UDS_HistoryManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HistoryManager.InnerSingleton;
}

// UDS_HistoryManager @ 14b4b2440

UDS_HistoryManager * __thiscall
UDS_HistoryManager::UDS_HistoryManager(UDS_HistoryManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_HistoryManager__6B_;
  *(undefined8 *)&this->OnHistoryBackEvent = 0;
  *(undefined8 *)&(this->OnHistoryBackEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnHistoryBackEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnCollectContentsTabHistory = 0;
  *(undefined8 *)&(this->OnCollectContentsTabHistory).field_0x8 = 0;
  *(undefined8 *)&(this->OnCollectContentsTabHistory).field_0x10 = 0;
  (this->HistoryDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HistoryDatas).ArrayNum = 0;
  (this->HistoryDatas).ArrayMax = 0;
  this->MaxHistoryCount = 0;
  *(undefined8 *)&(this->OnHistoryBackEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnCollectContentsTabHistory).field_0x18 = 2;
  return this;
}

// UDS_HistoryManager @ 14b4b24a0

UDS_HistoryManager * __thiscall
UDS_HistoryManager::UDS_HistoryManager(UDS_HistoryManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_HistoryManager__6B_;
  *(undefined8 *)&this->OnHistoryBackEvent = 0;
  *(undefined8 *)&(this->OnHistoryBackEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnHistoryBackEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnCollectContentsTabHistory = 0;
  *(undefined8 *)&(this->OnCollectContentsTabHistory).field_0x8 = 0;
  *(undefined8 *)&(this->OnCollectContentsTabHistory).field_0x10 = 0;
  (this->HistoryDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HistoryDatas).ArrayNum = 0;
  (this->HistoryDatas).ArrayMax = 0;
  this->MaxHistoryCount = 0;
  *(undefined8 *)&(this->OnHistoryBackEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnCollectContentsTabHistory).field_0x18 = 2;
  return this;
}

// ~UDS_HistoryManager @ 14b4b3720

void __thiscall UDS_HistoryManager::~UDS_HistoryManager(UDS_HistoryManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_HistoryManager__6B_;
  DestructItems<FDS_HistoryData,int>
            ((FDS_HistoryData *)(this->HistoryDatas).AllocatorInstance.Data,
             (this->HistoryDatas).ArrayNum);
  pFVar1 = (this->HistoryDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCollectContentsTabHistory).field_0x8,
             *(int *)&(this->OnCollectContentsTabHistory).field_0x10);
  pvVar2 = *(void **)&(this->OnCollectContentsTabHistory).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCollectContentsTabHistory);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnHistoryBackEvent).field_0x8,*(int *)&(this->OnHistoryBackEvent).field_0x10);
  pvVar2 = *(void **)&(this->OnHistoryBackEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHistoryBackEvent);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b7490

UClass * __cdecl UDS_HistoryManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HistoryManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HistoryManager",
               &Z_Registration_Info_UClass_UDS_HistoryManager.InnerSingleton,
               StaticRegisterNativesUDS_HistoryManager,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_HistoryManager>,
               InternalVTableHelperCtorCaller<UDS_HistoryManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HistoryManager.InnerSingleton;
}

// StaticRegisterNativesUDS_HistoryManager @ 14b4b8510

void __cdecl UDS_HistoryManager::StaticRegisterNativesUDS_HistoryManager(void)

{
  return;
}

// AddHistoryData @ 14baf0470

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDS_HistoryManager::AddHistoryData(UDS_HistoryManager *this,FDS_HistoryData *param_1)

{
  int *piVar1;
  int iVar2;
  
  RemoveSameType(this,param_1);
  if (this->MaxHistoryCount <= (this->HistoryDatas).ArrayNum) {
    TArray<FDS_HistoryData,TSizedDefaultAllocator<32>_>::RemoveAt(&this->HistoryDatas,0,Default);
  }
  iVar2 = (this->HistoryDatas).ArrayNum;
  piVar1 = &(this->HistoryDatas).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x288,8,&(this->HistoryDatas).AllocatorInstance,piVar1);
  }
  (this->HistoryDatas).ArrayNum = iVar2 + 1;
  FDS_HistoryData::FDS_HistoryData
            ((FDS_HistoryData *)
             ((this->HistoryDatas).AllocatorInstance.Data + (longlong)iVar2 * 0x288),param_1);
  FDS_HistoryData::~FDS_HistoryData(param_1);
  return;
}

// Clear @ 14baf81e0

void __thiscall UDS_HistoryManager::Clear(UDS_HistoryManager *this,EDS_HistoryDataType *param_1)

{
  EDS_HistoryDataType EVar1;
  EDS_HistoryDataType EVar2;
  int iVar3;
  FDS_HistoryData *pFVar4;
  FDS_HistoryData *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int local_2c8;
  FDS_HistoryData local_2b8;
  
  if (*param_1 == None) {
                    /* WARNING: Could not recover jumptable at 0x00014baf81ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2d0))();
    return;
  }
  this->TempHistoryDataType = *param_1;
  iVar3 = (this->HistoryDatas).ArrayNum;
  if (iVar3 != 0) {
    pFVar4 = (FDS_HistoryData *)(this->HistoryDatas).AllocatorInstance.Data;
    iVar6 = 0;
    local_2c8 = 0;
    pFVar5 = FDS_HistoryData::FDS_HistoryData(&local_2b8,pFVar4);
    EVar1 = this->TempHistoryDataType;
    EVar2 = pFVar5->DataType;
    FDS_HistoryData::~FDS_HistoryData(pFVar5);
    bVar10 = EVar2 != EVar1;
    iVar9 = 0;
    iVar7 = iVar6;
joined_r0x00014baf829b:
    do {
      iVar6 = iVar6 + 1;
      if (iVar6 < iVar3) {
        pFVar5 = FDS_HistoryData::FDS_HistoryData(&local_2b8,pFVar4 + iVar6);
        EVar1 = this->TempHistoryDataType;
        EVar2 = pFVar5->DataType;
        FDS_HistoryData::~FDS_HistoryData(pFVar5);
        iVar9 = local_2c8;
        if (bVar10 == (EVar2 != EVar1)) goto joined_r0x00014baf829b;
      }
      iVar8 = iVar6 - iVar7;
      if (bVar10 == false) {
        DestructItems<FDS_HistoryData,int>(pFVar4 + iVar7,iVar8);
      }
      else {
        if (iVar9 != iVar7) {
          memmove(pFVar4 + iVar9,pFVar4 + iVar7,(longlong)iVar8 * 0x288);
        }
        iVar9 = iVar9 + iVar8;
        local_2c8 = iVar9;
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar6;
    } while (iVar6 < iVar3);
    (this->HistoryDatas).ArrayNum = iVar9;
  }
  this->TempHistoryDataType = None;
  return;
}

// CollectHistory @ 14bafa4e0

void __thiscall
UDS_HistoryManager::CollectHistory
          (UDS_HistoryManager *this,TWeakObjectPtr<UDS_HistoryBuilder,FWeakObjectPtr> param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FWeakObjectPtr local_res10;
  FDestructionSentinel local_38;
  
  local_res10 = param_1.WeakPtr;
  bVar5 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar5) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnCollectContentsTabHistory,(FWriteAccessScope *)&local_38);
    puVar1 = &(this->OnCollectContentsTabHistory).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar9 = *(int *)&(this->OnCollectContentsTabHistory).field_0x10 - 1;
    if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar9 < *(int *)&(this->OnCollectContentsTabHistory).field_0x10) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)&(this->OnCollectContentsTabHistory).field_0x8;
        if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
            (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar10 = lVar10 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    puVar1 = &(this->OnCollectContentsTabHistory).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnCollectContentsTabHistory,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// Created @ 14bb01510

void __thiscall UDS_HistoryManager::Created(UDS_HistoryManager *this)

{
  return;
}

// Destroyed @ 14bb02e30

void __thiscall UDS_HistoryManager::Destroyed(UDS_HistoryManager *this)

{
  int *piVar1;
  
  DestructItems<FDS_HistoryData,int>
            ((FDS_HistoryData *)(this->HistoryDatas).AllocatorInstance.Data,
             (this->HistoryDatas).ArrayNum);
  piVar1 = &(this->HistoryDatas).ArrayMax;
  (this->HistoryDatas).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x288,8,0,&(this->HistoryDatas).AllocatorInstance,0,piVar1);
  }
  return;
}

// GetInst @ 14bb0b9b0

UDS_HistoryManager * __cdecl UDS_HistoryManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_HistoryManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_HistoryManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_HistoryManager_NoRegister();
  pUVar3 = (UDS_HistoryManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_HistoryManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_HistoryManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_HistoryManager *)0x0;
}

// Init @ 14bb13580

void __thiscall UDS_HistoryManager::Init(UDS_HistoryManager *this)

{
  int iVar1;
  
  iVar1 = DS_CommonDataHelper::HistoryBackStackCount();
  this->MaxHistoryCount = iVar1;
  return;
}

// OnBack @ 14bb1b3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDS_HistoryManager::OnBack(UDS_HistoryManager *this)

{
  TArray<FDS_HistoryData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  FDS_HistoryData *this_00;
  longlong lVar13;
  undefined1 auStackY_308 [32];
  FDestructionSentinel local_2d8;
  FDS_HistoryData local_2b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_308;
  iVar11 = (this->HistoryDatas).ArrayNum;
  if (iVar11 != 0) {
    pTVar1 = &this->HistoryDatas;
    if (iVar11 < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    FDS_HistoryData::FDS_HistoryData
              (&local_2b8,
               (FDS_HistoryData *)
               ((pTVar1->AllocatorInstance).Data +
               (longlong)((this->HistoryDatas).ArrayNum + -1) * 0x288));
    uVar12 = (this->HistoryDatas).ArrayNum - 1;
    this_00 = (FDS_HistoryData *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x288);
    FDS_HistoryData::~FDS_HistoryData(this_00);
    iVar11 = (this->HistoryDatas).ArrayNum + ~uVar12;
    if (iVar11 != 0) {
      memmove(this_00,this_00 + 1,(longlong)iVar11 * 0x288);
    }
    piVar2 = &(this->HistoryDatas).ArrayNum;
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x288,8,&pTVar1->AllocatorInstance,(this->HistoryDatas).ArrayNum,
               &(this->HistoryDatas).ArrayMax);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnHistoryBackEvent,
               (FWriteAccessScope *)&local_2d8);
    puVar3 = &(this->OnHistoryBackEvent).field_0x1c;
    *(int *)puVar3 = *(int *)puVar3 + 1;
    bVar7 = false;
    uVar12 = *(int *)&(this->OnHistoryBackEvent).field_0x10 - 1;
    if (-1 < (int)uVar12) {
      lVar13 = (longlong)(int)uVar12 << 4;
      bVar7 = false;
      do {
        uVar10 = 0;
        if ((int)uVar12 < *(int *)&(this->OnHistoryBackEvent).field_0x10) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        lVar4 = *(longlong *)&(this->OnHistoryBackEvent).field_0x8;
        if ((*(int *)(lVar13 + 8 + lVar4) == 0) ||
           (plVar5 = *(longlong **)(lVar13 + lVar4), plVar5 == (longlong *)0x0)) {
LAB_14bb1b539:
          bVar7 = true;
        }
        else {
          cVar9 = (**(code **)(*plVar5 + 0x68))();
          if (cVar9 == '\0') goto LAB_14bb1b539;
        }
        lVar13 = lVar13 + -0x10;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    puVar3 = &(this->OnHistoryBackEvent).field_0x1c;
    *(int *)puVar3 = *(int *)puVar3 + -1;
    if (bVar7) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnHistoryBackEvent,
                 false);
    }
    if (local_2d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d8.Accessor,&local_2d8);
    }
    FDS_HistoryData::~FDS_HistoryData(&local_2b8);
  }
  return;
}

// RemoveSameType @ 14bb32250

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDS_HistoryManager::RemoveSameType(UDS_HistoryManager *this,FDS_HistoryData *param_1)

{
  TArray<FDS_HistoryData,TSizedDefaultAllocator<32>_> *this_00;
  EDS_HistoryDataType EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TTuple<FName,int> *pTVar7;
  FName FVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  
  EVar1 = param_1->DataType;
  FVar8 = CONTENTS_BUILDER_KEY;
  if (((EVar1 != Contents) && (FVar8 = CONTENTSTAB_BUILDER_KEY, EVar1 != ContentsTab)) &&
     (FVar8 = NPCFUNCTION_BUILDER_KEY, EVar1 != NPCFunction)) {
    FVar8.ComparisonIndex.Value = 0;
    FVar8.Number = 0;
  }
  iVar2 = (this->HistoryDatas).ArrayNum;
  this_00 = &this->HistoryDatas;
  uVar11 = 0;
  if (0 < iVar2) {
    lVar9 = 0;
    lVar12 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar11 < (this->HistoryDatas).ArrayNum) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((this_00->AllocatorInstance).Data[lVar12] == (FScriptContainerElement)param_1->DataType) {
        uVar5 = 0;
        if ((int)uVar11 < (this->HistoryDatas).ArrayNum) {
          uVar5 = ~uVar11 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar7 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                         *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x288 + 0xa8
                           ),FVar8);
        if (pTVar7 == (TTuple<FName,int> *)0x0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *(int *)&pTVar7->field_0x8;
        }
        pTVar7 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                         *)&param_1->HistoryInt32Map,FVar8);
        iVar6 = 0;
        if (pTVar7 != (TTuple<FName,int> *)0x0) {
          iVar6 = *(int *)&pTVar7->field_0x8;
        }
        if (((iVar10 != 0) && (iVar6 != 0)) && (iVar10 == iVar6)) {
          if ((int)uVar11 < 0) {
            return;
          }
          TArray<FDS_HistoryData,TSizedDefaultAllocator<32>_>::RemoveAt(this_00,uVar11,Default);
          return;
        }
      }
      uVar11 = uVar11 + 1;
      lVar9 = lVar9 + 1;
      lVar12 = lVar12 + 0x288;
    } while (lVar9 < iVar2);
  }
  return;
}

// Reset @ 14bb32b60

void __thiscall UDS_HistoryManager::Reset(UDS_HistoryManager *this)

{
  int *piVar1;
  
  DestructItems<FDS_HistoryData,int>
            ((FDS_HistoryData *)(this->HistoryDatas).AllocatorInstance.Data,
             (this->HistoryDatas).ArrayNum);
  piVar1 = &(this->HistoryDatas).ArrayMax;
  (this->HistoryDatas).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x288,8,0,&(this->HistoryDatas).AllocatorInstance,0,piVar1);
  }
  return;
}

