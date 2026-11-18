// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 117

// <lambda_invoker_cdecl> @ 1426e6400

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
`FTabManager::GetUIActionForTabSpawnerMenuEntry'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (TWeakPtr<FTabSpawnerEntry,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FTabSpawnerEntry *pFVar4;
  atomic<int> aVar5;
  Type *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  uint uStackX_c;
  FSpawnTabArgs local_48;
  
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar3->SharedReferenceCount;
    do {
      pTVar7 = pTVar8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1426e6435;
      LOCK();
      aVar5 = pTVar3->SharedReferenceCount;
      bVar10 = aVar2 == aVar5;
      if (bVar10) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar10);
    pFVar4 = param_1->Object;
    pTVar7 = pTVar3;
    if ((pFVar4 != (FTabSpawnerEntry *)0x0) &&
       (pTVar6 = TAttribute<enum_ETabSpawnerMenuType::Type>::Get(&pFVar4->MenuType),
       *pTVar6 == Enabled)) {
      bVar10 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                         ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar4->CanSpawnTab);
      if (bVar10) {
        local_48.TabIdBeingSpawned.TabType = pFVar4->TabType;
        local_48.TabIdBeingSpawned.InstanceId = -1;
        local_48.TabIdBeingSpawned.Flags = SaveLayout;
        local_48.OwnerWindow.Object = (SWindow *)0x0;
        local_48.OwnerWindow.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        bVar10 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::Execute
                           (&pFVar4->CanSpawnTab,&local_48);
        pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000003;
        pTVar7 = pTVar8;
      }
      else {
        pTVar7 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
        bVar10 = true;
        pTVar9 = pTVar8;
      }
      if (((ulonglong)pTVar9 & 2) != 0) {
        pTVar9 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar9 & 0xfffffffd);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.OwnerWindow.SharedReferenceCount.ReferenceController);
      }
      if (((ulonglong)pTVar9 & 1) != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      return bVar10;
    }
  }
LAB_1426e6435:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return false;
}

// FTabManager @ 1426fd020

/* WARNING: Enum "Type": Some values do not have unique names */

FTabManager * __thiscall
FTabManager::FTabManager
          (FTabManager *this,TSharedPtr<SDockTab,1> *param_1,
          TSharedRef<TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>,1>
          *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FNamePermissionList *pFVar7;
  FSlateIcon *pFVar8;
  FText *pFVar9;
  FTabManager *pFVar10;
  FWorkspaceItem *pFVar11;
  FNamePermissionList *pFVar12;
  FName local_res8;
  TRawPtrProxy<FTabManager::FPrivateApi> local_res10;
  TRawPtrProxy<FNamePermissionList> local_res18;
  FWorkspaceItem *local_68;
  FSharedReferencer<1> local_60;
  FText local_58;
  FSlateIcon local_48;
  
  pFVar12 = (FNamePermissionList *)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FTabManager__6B_;
  *(undefined8 *)&this->TabSpawner = 0;
  *(undefined8 *)&(this->TabSpawner).field_0x8 = 0;
  *(undefined8 *)&(this->TabSpawner).field_0x20 = 0;
  *(undefined4 *)&(this->TabSpawner).field_0x28 = 0;
  *(undefined4 *)&(this->TabSpawner).field_0x2c = 0x80;
  *(undefined4 *)&(this->TabSpawner).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TabSpawner).field_0x34 = 0;
  *(undefined8 *)&(this->TabSpawner).field_0x40 = 0;
  *(undefined4 *)&(this->TabSpawner).field_0x48 = 0;
  (this->NomadTabSpawner).Object = param_2->Object;
  pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
  (this->NomadTabSpawner).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->DockAreas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DockAreas).ArrayNum = 0;
  (this->DockAreas).ArrayMax = 0;
  (this->CollapsedDockAreas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollapsedDockAreas).ArrayNum = 0;
  (this->CollapsedDockAreas).ArrayMax = 0;
  (this->InvalidDockAreas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InvalidDockAreas).ArrayNum = 0;
  (this->InvalidDockAreas).ArrayMax = 0;
  (this->LocalWorkspaceMenuRoot).Object = (FWorkspaceItem *)0x0;
  (this->LocalWorkspaceMenuRoot).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OwnerTabPtr).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  (this->OwnerTabPtr).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->MenuMultiBox).Object = (FMultiBox *)0x0;
  (this->MenuMultiBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->MenuWidget).Object = (SWidget *)0x0;
  (this->MenuWidget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar7 = ::operator_new(8);
  local_res10.Object = (FPrivateApi *)pFVar12;
  if (pFVar7 != (FNamePermissionList *)0x0) {
    pFVar7->_padding_ = (longlong)this;
    local_res10.Object = (FPrivateApi *)pFVar7;
  }
  TSharedRef<FTabManager::FPrivateApi,1>::
  TSharedRef<FTabManager::FPrivateApi,1><FTabManager::FPrivateApi>(&this->PrivateApi,&local_res10);
  (this->ActiveLayoutName).ComparisonIndex = 0;
  (this->ActiveLayoutName).Number = 0;
  *(undefined8 *)&this->OnPersistLayout_Handler = 0;
  *(undefined8 *)&(this->OnPersistLayout_Handler).field_0x8 = 0;
  *(undefined4 *)&(this->OnPersistLayout_Handler).field_0x10 = 0;
  this->LastDocumentUID = 0;
  (this->MainNonCloseableTabID).TabType.ComparisonIndex = 0;
  (this->MainNonCloseableTabID).TabType.Number = 0;
  (this->MainNonCloseableTabID).InstanceId = -1;
  (this->MainNonCloseableTabID).Flags = SaveLayout;
  (this->PendingMainNonClosableTab).Object = (SDockTab *)0x0;
  (this->PendingMainNonClosableTab).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bEnforceMainTab = false;
  (this->LastMajorDockWindow).Object = (SWindow *)0x0;
  (this->LastMajorDockWindow).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bCanDoDragOperation = true;
  this->bCanDoDeferredLayoutSave = true;
  this->bAllowPerWindowMenu = false;
  (this->PendingLayoutSaveHandle).Object = (FElement *)0x0;
  (this->PendingLayoutSaveHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar7 = ::operator_new(0xf0);
  local_res18.Object = pFVar12;
  if (pFVar7 != (FNamePermissionList *)0x0) {
    *(undefined8 *)&pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    *(undefined8 *)&pFVar7->DenyList = 0;
    *(undefined8 *)&(pFVar7->DenyList).field_0x8 = 0;
    *(undefined8 *)&(pFVar7->DenyList).field_0x20 = 0;
    pFVar7->_padding_ = (longlong)&___7FNamePermissionList__6B_;
    *(undefined4 *)&(pFVar7->DenyList).field_0x28 = 0;
    *(undefined4 *)&(pFVar7->DenyList).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar7->DenyList).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar7->DenyList).field_0x34 = 0;
    *(undefined8 *)&(pFVar7->DenyList).field_0x40 = 0;
    *(undefined4 *)&(pFVar7->DenyList).field_0x48 = 0;
    *(undefined8 *)&pFVar7->AllowList = 0;
    *(undefined8 *)&(pFVar7->AllowList).field_0x8 = 0;
    *(undefined8 *)&(pFVar7->AllowList).field_0x20 = 0;
    *(undefined4 *)&(pFVar7->AllowList).field_0x28 = 0;
    *(undefined4 *)&(pFVar7->AllowList).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar7->AllowList).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar7->AllowList).field_0x34 = 0;
    *(undefined8 *)&(pFVar7->AllowList).field_0x40 = 0;
    *(undefined4 *)&(pFVar7->AllowList).field_0x48 = 0;
    (pFVar7->DenyListAll).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->DenyListAll).ArrayNum = 0;
    (pFVar7->DenyListAll).ArrayMax = 0;
    *(undefined8 *)&pFVar7->OnFilterChangedDelegate = 0;
    *(undefined8 *)&(pFVar7->OnFilterChangedDelegate).field_0x8 = 0;
    *(undefined8 *)&(pFVar7->OnFilterChangedDelegate).field_0x10 = 0;
    *(undefined8 *)&(pFVar7->OnFilterChangedDelegate).field_0x18 = 2;
    pFVar7->bSuppressOnFilterChanged = false;
    local_res18.Object = pFVar7;
  }
  TSharedRef<FNamePermissionList,1>::TSharedRef<FNamePermissionList,1><FNamePermissionList>
            (&this->TabPermissionList,&local_res18);
  (this->TemporarilySidebaredTabs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TemporarilySidebaredTabs).ArrayNum = 0;
  (this->TemporarilySidebaredTabs).ArrayMax = 0;
  this->bReadOnly = false;
  *(undefined8 *)&this->OnReadOnlyModeChanged = 0;
  *(undefined8 *)&(this->OnReadOnlyModeChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnReadOnlyModeChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnReadOnlyModeChanged).field_0x18 = 2;
  *(undefined8 *)&this->OnPanelDrawerStateChangedDelegate = 0;
  *(undefined8 *)&(this->OnPanelDrawerStateChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPanelDrawerStateChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnPanelDrawerStateChangedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->PanelDrawerActiveHiddenTabs = 0;
  *(undefined8 *)&(this->PanelDrawerActiveHiddenTabs).field_0x8 = 0;
  *(undefined8 *)&(this->PanelDrawerActiveHiddenTabs).field_0x20 = 0;
  *(undefined4 *)&(this->PanelDrawerActiveHiddenTabs).field_0x28 = 0;
  *(undefined4 *)&(this->PanelDrawerActiveHiddenTabs).field_0x2c = 0x80;
  *(undefined4 *)&(this->PanelDrawerActiveHiddenTabs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PanelDrawerActiveHiddenTabs).field_0x34 = 0;
  *(undefined8 *)&(this->PanelDrawerActiveHiddenTabs).field_0x40 = 0;
  *(undefined4 *)&(this->PanelDrawerActiveHiddenTabs).field_0x48 = 0;
  pFVar8 = FSlateIcon::FSlateIcon(&local_48);
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"TabManager",L"LocalWorkspaceRoot",L"Local Workspace Root");
  pFVar7 = ::operator_new(0x118);
  if (pFVar7 == (FNamePermissionList *)0x0) {
    pFVar11 = (FWorkspaceItem *)&DAT_00000010;
  }
  else {
    *(atomic<int> *)&pFVar7->_padding_ = (atomic<int>)0x1;
    ((atomic<int> *)&pFVar7->_padding_)[1] = (atomic<int>)0x1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pFVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFWorkspaceItem___00_SharedPointerInternals__6B_;
    FWorkspaceItem::FWorkspaceItem
              ((FWorkspaceItem *)&pFVar7->_padding_,&local_res8,pFVar9,pFVar8,false);
    pFVar11 = (FWorkspaceItem *)&pFVar7->_padding_;
    pFVar12 = pFVar7;
    if (pFVar11 == (FWorkspaceItem *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FTabManager *)(*pcVar5)();
        return pFVar10;
      }
      goto LAB_1426fd436;
    }
  }
  if (((pFVar11->_padding_ == 0) || (pFVar11->_padding_ == 0)) ||
     (*(int *)(pFVar11->_padding_ + 8) < 1)) {
    if (pFVar12 != (FNamePermissionList *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar12->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar12->_padding_ + 1);
      UNLOCK();
    }
    pFVar11->_padding_ = (longlong)pFVar11;
    if (pFVar12 != (FNamePermissionList *)pFVar11->_padding_) {
      if (pFVar12 != (FNamePermissionList *)0x0) {
        LOCK();
        ((atomic<int> *)&pFVar12->_padding_)[1] =
             (atomic<int>)((int)((atomic<int> *)&pFVar12->_padding_)[1] + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pFVar11->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pFVar11->_padding_ = (longlong)pFVar12;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar12);
  }
LAB_1426fd436:
  if (pFVar12 != (FNamePermissionList *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar12->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&pFVar12->_padding_ + 1);
    UNLOCK();
  }
  local_68 = pFVar11;
  local_60.ReferenceController = (TReferenceControllerBase<1> *)pFVar12;
  if (&this->LocalWorkspaceMenuRoot != (TSharedPtr<FWorkspaceItem,1> *)&local_68) {
    (this->LocalWorkspaceMenuRoot).Object = pFVar11;
    local_68 = (FWorkspaceItem *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LocalWorkspaceMenuRoot).SharedReferenceCount,&local_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return this;
}

// ~FTabManager @ 142701790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::~FTabManager(FTabManager *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong *plVar8;
  
  this->_padding_ = (longlong)&___7FTabManager__6B_;
  ClearPendingLayoutSave(this);
  *(undefined4 *)&(this->PanelDrawerActiveHiddenTabs).field_0x48 = 0;
  pvVar5 = *(void **)&(this->PanelDrawerActiveHiddenTabs).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FTabId,TSharedRef<SDockTab,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTabId,TSharedRef<SDockTab,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTabId,TSharedRef<SDockTab,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PanelDrawerActiveHiddenTabs);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPanelDrawerStateChangedDelegate).field_0x8,
             *(int *)&(this->OnPanelDrawerStateChangedDelegate).field_0x10);
  pvVar5 = *(void **)&(this->OnPanelDrawerStateChangedDelegate).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPanelDrawerStateChangedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnReadOnlyModeChanged).field_0x8,
             *(int *)&(this->OnReadOnlyModeChanged).field_0x10);
  pvVar5 = *(void **)&(this->OnReadOnlyModeChanged).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnReadOnlyModeChanged);
  DestructItems<TWeakPtr<SDockTab,1>,int>
            ((TWeakPtr<SDockTab,1> *)(this->TemporarilySidebaredTabs).AllocatorInstance.Data,
             (this->TemporarilySidebaredTabs).ArrayNum);
  pFVar6 = (this->TemporarilySidebaredTabs).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TabPermissionList).SharedReferenceCount.ReferenceController);
  pTVar7 = (this->PendingLayoutSaveHandle).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  pTVar7 = (this->LastMajorDockWindow).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PendingMainNonClosableTab).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPersistLayout_Handler);
  pvVar5 = *(void **)&(this->OnPersistLayout_Handler).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPersistLayout_Handler);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PrivateApi).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MenuWidget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MenuMultiBox).SharedReferenceCount.ReferenceController);
  pTVar7 = (this->OwnerTabPtr).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LocalWorkspaceMenuRoot).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<FTabManager::FArea,1>,int>
            ((TSharedRef<FTabManager::FArea,1> *)(this->InvalidDockAreas).AllocatorInstance.Data,
             (this->InvalidDockAreas).ArrayNum);
  pFVar6 = (this->InvalidDockAreas).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  DestructItems<TSharedRef<FTabManager::FArea,1>,int>
            ((TSharedRef<FTabManager::FArea,1> *)(this->CollapsedDockAreas).AllocatorInstance.Data,
             (this->CollapsedDockAreas).ArrayNum);
  pFVar6 = (this->CollapsedDockAreas).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  DestructItems<TWeakPtr<SDockingArea,1>,int>
            ((TWeakPtr<SDockingArea,1> *)(this->DockAreas).AllocatorInstance.Data,
             (this->DockAreas).ArrayNum);
  pFVar6 = (this->DockAreas).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NomadTabSpawner).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->TabSpawner).field_0x48 = 0;
  pvVar5 = *(void **)&(this->TabSpawner).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TabSpawner);
  plVar8 = (longlong *)this->_padding_;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  return;
}

// operator() @ 142703d90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`FTabManager::HasAnyTabWithTabId'::__l2::<lambda_1>::operator()(void *this,FTab *param_1)

{
  FTabManager *this_00;
  bool bVar1;
  TSharedRef<FTabSpawnerEntry,1> *pTVar2;
  
  this_00 = *(FTabManager **)this;
  bVar1 = FTabManager::IsAllowedTab(this_00,&param_1->TabId);
  if (bVar1) {
    pTVar2 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
             ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                     *)(this_00->NomadTabSpawner).Object,(param_1->TabId).TabType);
    if (((pTVar2 != (TSharedRef<FTabSpawnerEntry,1> *)0x0) &&
        (bVar1 = FTabSpawnerEntry::IsSoleTabInstanceSpawned(pTVar2->Object), bVar1)) &&
       (bVar1 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                           &pTVar2->Object->OnFindTabToReuse), !bVar1)) {
      return false;
    }
    if ((param_1->TabId).TabType == *(FName *)((longlong)this + 8)) {
      return true;
    }
  }
  return false;
}

// operator() @ 142703e20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`FTabManager::RequestSavePersistentLayout'::__l2::<lambda_1>::operator()(void *this,float param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FTabManager *this_00;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  undefined8 local_18 [2];
  
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142703e50;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar6);
    this_00 = *(FTabManager **)this;
    if (this_00 != (FTabManager *)0x0) {
      if (&this_00->PendingLayoutSaveHandle != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
        pTVar3 = (this_00->PendingLayoutSaveHandle).WeakReferenceCount.ReferenceController;
        (this_00->PendingLayoutSaveHandle).Object = (FElement *)0x0;
        (this_00->PendingLayoutSaveHandle).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar3->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
          }
        }
      }
      FTabManager::SavePersistentLayout(this_00);
    }
  }
LAB_142703e50:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return false;
}

// AddLocalWorkspaceMenuCategory @ 14270afb0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FWorkspaceItem,1> * __thiscall
FTabManager::AddLocalWorkspaceMenuCategory
          (FTabManager *this,TSharedRef<FWorkspaceItem,1> *__return_storage_ptr__,FText *param_1)

{
  FWorkspaceItem *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedRef<FWorkspaceItem,1> *pTVar3;
  FSlateIcon *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FName local_res8;
  FSlateIcon local_38;
  
  if ((this->LocalWorkspaceMenuRoot).Object == (FWorkspaceItem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<FWorkspaceItem,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this_00 = (this->LocalWorkspaceMenuRoot).Object;
  pFVar4 = FSlateIcon::FSlateIcon(&local_38);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pTVar5 = ::operator_new(0x118);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFWorkspaceItem___00_SharedPointerInternals__6B_;
    FWorkspaceItem::FWorkspaceItem((FWorkspaceItem *)(pTVar5 + 1),&local_res8,param_1,pFVar4,false);
  }
  TSharedRef<FWorkspaceItem,1>::TSharedRef<FWorkspaceItem,1>
            (__return_storage_ptr__,(FWorkspaceItem *)(pTVar5 + 1),pTVar5);
  FWorkspaceItem::AddItem(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AddLocalWorkspaceMenuItem @ 14270b0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::AddLocalWorkspaceMenuItem(FTabManager *this,TSharedRef<FWorkspaceItem,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->LocalWorkspaceMenuRoot).Object == (FWorkspaceItem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FWorkspaceItem::AddItem((this->LocalWorkspaceMenuRoot).Object,param_1);
  return;
}

// AttemptToOpenTab @ 14270e200

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockingTabStack,1> * __thiscall
FTabManager::AttemptToOpenTab
          (FTabManager *this,TSharedPtr<SDockingTabStack,1> *__return_storage_ptr__,FTabId *param_1,
          bool param_2)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FGlobalTabmanager *pFVar3;
  TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
  *pTVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TSharedPtr<SDockingTabStack,1> *pTVar10;
  TSharedRef<FTabManager,1> *pTVar11;
  TSharedRef<FGlobalTabmanager,1> *pTVar12;
  TSharedPtr<SWindow,1> *pTVar13;
  TSharedRef<SWidget,1> *pTVar14;
  FScriptContainerElement *pFVar15;
  undefined1 *puVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  longlong local_110;
  TReferenceControllerBase<1> *local_108;
  TSharedPtr<SDockingArea,1> local_100;
  FTabMatcher local_f0;
  longlong local_d8;
  TSharedPtr<FTabManager::FStack,1> local_d0;
  TSharedRef<FTabManager::FLayoutNode,1> local_c0;
  TSharedRef<SDockingArea,1> local_b0;
  TSharedRef<FTabManager,1> local_a0;
  TSharedPtr<SWindow,1> local_90;
  TSharedPtr<SDockingTabStack,1> local_80;
  TSharedRef<SWidget,1> local_70;
  TSharedPtr<SDockingTabStack,1> local_60 [2];
  
  uVar19 = 0;
  __return_storage_ptr__->Object = (SDockingTabStack *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_f0.RequiredTabState = SidebarTab|ClosedTab|OpenedTab;
  local_f0.TabIdToMatch.TabType = param_1->TabType;
  local_f0.TabIdToMatch.InstanceId = param_1->InstanceId;
  local_f0.TabIdToMatch.Flags = param_1->Flags;
  local_f0.TabIdToMatch._13_3_ = *(undefined3 *)&param_1->field_0xd;
  local_f0.TreatIndexNoneAsWildcard = true;
  uVar22 = uVar19;
  if (0 < (this->CollapsedDockAreas).ArrayNum) {
    do {
      uVar18 = (uint)uVar19;
      uVar8 = 0;
      if ((int)uVar18 < (this->CollapsedDockAreas).ArrayNum) {
        uVar8 = ~uVar18 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TSharedPtr<SDockingTabStack,1> *)(*pcVar6)();
        return pTVar10;
      }
      pFVar1 = (this->CollapsedDockAreas).AllocatorInstance.Data;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + uVar22 + 8);
      local_c0.Object = *(FLayoutNode **)(pFVar1 + uVar22);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_c0.SharedReferenceCount.ReferenceController = pTVar2;
      FindTabUnderNode(&local_d0,&local_f0,&local_c0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d0.SharedReferenceCount.ReferenceController);
      if (local_d0.Object != (FStack *)0x0) {
        if (uVar18 != 0xffffffff) {
          uVar8 = 0;
          if ((int)uVar18 < (this->CollapsedDockAreas).ArrayNum) {
            uVar8 = ~uVar18 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            pTVar10 = (TSharedPtr<SDockingTabStack,1> *)(*pcVar6)();
            return pTVar10;
          }
          pFVar1 = (this->CollapsedDockAreas).AllocatorInstance.Data;
          local_d8 = (longlong)(int)uVar18;
          lVar25 = local_d8 * 0x10;
          local_110 = *(longlong *)(pFVar1 + lVar25);
          local_108 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar25 + 8);
          if (local_108 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_108->SharedReferenceCount =
                 (atomic<int>)((int)local_108->SharedReferenceCount + 1);
            UNLOCK();
          }
          pTVar11 = TSharedFromThis<FTabManager,1>::AsShared
                              ((TSharedFromThis<FTabManager,1> *)&this->_padding_,&local_a0);
          pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
          pFVar3 = (FGlobalTabmanager *)pTVar11->Object;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a0.SharedReferenceCount.ReferenceController);
          pTVar12 = FGlobalTabmanager::Get();
          if (pTVar12->Object == pFVar3) goto LAB_14270e45e;
          pTVar4 = (this->NomadTabSpawner).Object;
          FVar5 = param_1->TabType;
          uVar8 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
          if (*(int *)&pTVar4->field_0x8 == *(int *)&pTVar4->field_0x34) goto LAB_14270e45e;
          puVar16 = *(undefined1 **)&pTVar4->field_0x40;
          if (*(undefined1 **)&pTVar4->field_0x40 == (undefined1 *)0x0) {
            puVar16 = &pTVar4->field_0x38;
          }
          iVar9 = *(int *)(puVar16 +
                          (ulonglong)(*(int *)&pTVar4->field_0x48 - 1U & FVar5.Number + uVar8) * 4);
          if (iVar9 == -1) goto LAB_14270e45e;
          goto LAB_14270e440;
        }
        break;
      }
      uVar19 = (ulonglong)(uVar18 + 1);
      uVar22 = uVar22 + 0x10;
    } while ((int)(uVar18 + 1) < (this->CollapsedDockAreas).ArrayNum);
  }
  goto LAB_14270e795;
  while (iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + *(longlong *)pTVar4), iVar9 != -1) {
LAB_14270e440:
    if (*(FName *)((longlong)iVar9 * 0x20 + *(longlong *)pTVar4) == FVar5) {
      if (*(int *)(local_110 + 0x38) != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        RemoveTabFromCollapsedAreas(this,&local_f0);
        goto LAB_14270e76c;
      }
      break;
    }
  }
LAB_14270e45e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar13 = FPrivateApi::GetParentWindow((this->PrivateApi).Object,&local_90);
  uVar8 = 0;
  if ((int)uVar18 < (this->CollapsedDockAreas).ArrayNum) {
    uVar8 = ~uVar18 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TSharedPtr<SDockingTabStack,1> *)(*pcVar6)();
    return pTVar10;
  }
  RestoreArea(this,&local_100,
              (TSharedRef<FTabManager::FArea,1> *)
              ((this->CollapsedDockAreas).AllocatorInstance.Data + lVar25),pTVar13,false,Never,
              param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.SharedReferenceCount.ReferenceController);
  if ((local_100.Object == (SDockingArea *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RestoredArea.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                         ,0x71b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TSharedPtr<SDockingTabStack,1> *)(*pcVar6)();
    return pTVar10;
  }
  pFVar1 = (this->CollapsedDockAreas).AllocatorInstance.Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_110) &&
      ((FScriptContainerElement *)&local_110 <
       pFVar1 + (longlong)(this->CollapsedDockAreas).ArrayMax * 0x10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TSharedPtr<SDockingTabStack,1> *)(*pcVar6)();
    return pTVar10;
  }
  iVar9 = (this->CollapsedDockAreas).ArrayNum;
  lVar25 = (longlong)iVar9;
  if (iVar9 != 0) {
    pFVar1 = (this->CollapsedDockAreas).AllocatorInstance.Data;
    iVar24 = 0;
    bVar7 = *(longlong *)pFVar1 != local_110;
    lVar20 = 0;
    lVar17 = local_110;
    iVar9 = 0;
    do {
      lVar20 = lVar20 + 1;
      iVar23 = iVar9 + 1;
      if (lVar20 < lVar25) {
        pFVar15 = pFVar1 + lVar20 * 0x10;
        do {
          if (bVar7 != (*(longlong *)pFVar15 != lVar17)) break;
          iVar23 = iVar23 + 1;
          lVar20 = lVar20 + 1;
          pFVar15 = pFVar15 + 0x10;
        } while (lVar20 < lVar25);
      }
      iVar21 = iVar23 - iVar9;
      if (bVar7 == false) {
        DestructItems<TSharedRef<FTabManager::FArea,1>,int>
                  ((TSharedRef<FTabManager::FArea,1> *)(pFVar1 + (longlong)iVar9 * 0x10),iVar21);
        lVar17 = local_110;
      }
      else {
        if (iVar24 != iVar9) {
          memmove(pFVar1 + (longlong)iVar24 * 0x10,pFVar1 + (longlong)iVar9 * 0x10,
                  (longlong)iVar21 << 4);
          lVar17 = local_110;
        }
        iVar24 = iVar24 + iVar21;
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar9 = iVar23;
    } while (lVar20 < lVar25);
    (this->CollapsedDockAreas).ArrayNum = iVar24;
  }
  if (local_100.Object != (SDockingArea *)0x0) {
    if ((local_100.Object == (SDockingArea *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedPtr<SDockingTabStack,1> *)(*pcVar6)();
      return pTVar10;
    }
    pTVar14 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&(local_100.Object)->_padding_,&local_70);
    pTVar2 = (pTVar14->SharedReferenceCount).ReferenceController;
    local_b0.Object = (SDockingArea *)pTVar14->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b0.SharedReferenceCount.ReferenceController = pTVar2;
    pTVar10 = FindTabInLiveArea(&local_80,&local_f0,&local_b0);
    if (__return_storage_ptr__ != pTVar10) {
      __return_storage_ptr__->Object = pTVar10->Object;
      pTVar10->Object = (SDockingTabStack *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&pTVar10->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.SharedReferenceCount.ReferenceController);
LAB_14270e76c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_108);
LAB_14270e795:
  if (__return_storage_ptr__->Object == (SDockingTabStack *)0x0) {
    pTVar10 = FindTabInLiveAreas(this,local_60,&local_f0);
    if (__return_storage_ptr__ != pTVar10) {
      __return_storage_ptr__->Object = pTVar10->Object;
      pTVar10->Object = (SDockingTabStack *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&pTVar10->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60[0].SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// CanCloseManager @ 14270fa80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTabManager::CanCloseManager
          (FTabManager *this,
          TSet<TSharedRef<SDockTab,1>,DefaultKeyFuncs<TSharedRef<SDockTab,1>,0>,FDefaultSetAllocator>
          *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  atomic<int> aVar6;
  TSharedRef<SDockTab,1> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  ETabRole EVar11;
  atomic<int> aVar12;
  int iVar13;
  TSharedRef<SDockTab,1> **ppTVar14;
  uint uVar15;
  int iVar16;
  TReferenceControllerBase<1> *pTVar17;
  bool bVar18;
  TReferenceControllerBase<1> *pTVar19;
  TReferenceControllerBase<1> *pTVar20;
  TReferenceControllerBase<1> *pTVar21;
  int local_res20;
  longlong local_80;
  TSharedRef<SDockTab,1> *local_78;
  int local_70;
  TSharedRef<SDockTab,1> *local_68;
  int local_60;
  TSharedRef<SDockTab_const_,1> local_58;
  
  bVar18 = false;
  bVar5 = false;
  CleanupPointerArray<SDockingArea>(&this->DockAreas);
  local_80 = 0;
  local_res20 = 0;
  bVar10 = true;
  do {
    pTVar17 = (TReferenceControllerBase<1> *)0x0;
    if ((this->DockAreas).ArrayNum <= local_res20) {
      return bVar10;
    }
    if ((local_res20 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    pFVar2 = (this->DockAreas).AllocatorInstance.Data;
    pTVar20 = *(TReferenceControllerBase<1> **)(pFVar2 + local_80 + 8);
    pTVar19 = pTVar20;
    if (pTVar20 == (TReferenceControllerBase<1> *)0x0) {
LAB_14270fb57:
      bVar5 = true;
      local_70 = 0;
      ppTVar14 = &local_78;
      pTVar20 = pTVar19;
      pTVar19 = pTVar17;
    }
    else {
      aVar6 = pTVar20->SharedReferenceCount;
      do {
        pTVar19 = pTVar17;
        if (aVar6 == (atomic<int>)0x0) goto LAB_14270fb57;
        LOCK();
        aVar12 = pTVar20->SharedReferenceCount;
        bVar8 = aVar6 == aVar12;
        if (bVar8) {
          pTVar20->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
          aVar12 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar12;
      } while (!bVar8);
      plVar3 = *(longlong **)(pFVar2 + local_80);
      pTVar19 = pTVar20;
      if (plVar3 == (longlong *)0x0) goto LAB_14270fb57;
      bVar18 = true;
      ppTVar14 = (TSharedRef<SDockTab,1> **)(**(code **)(*plVar3 + 0x268))(plVar3,&local_68);
      pTVar19 = (TReferenceControllerBase<1> *)*ppTVar14;
    }
    *ppTVar14 = (TSharedRef<SDockTab,1> *)0x0;
    pTVar7 = local_78;
    iVar1 = *(int *)(ppTVar14 + 1);
    ppTVar14[1] = (TSharedRef<SDockTab,1> *)0x0;
    if (bVar5) {
      bVar5 = false;
      DestructItems<TSharedRef<SDockTab,1>,int>(local_78,local_70);
      if (pTVar7 != (TSharedRef<SDockTab,1> *)0x0) {
        FMemory::Free(pTVar7);
      }
    }
    if (bVar18) {
      bVar18 = false;
      DestructItems<TSharedRef<SDockTab,1>,int>(local_68,local_60);
      if (local_68 != (TSharedRef<SDockTab,1> *)0x0) {
        FMemory::Free(local_68);
      }
    }
    pTVar21 = pTVar19;
    if (bVar10 != false) {
      while (iVar16 = (int)pTVar17, iVar16 < iVar1) {
        if ((iVar16 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        pTVar17 = *(TReferenceControllerBase<1> **)&pTVar21->SharedReferenceCount;
        local_58.Object = (SDockTab *)pTVar21->_padding_;
        if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar15 = ((uint)((ulonglong)local_58.Object >> 0x14) & 0xffff ^
                 (uint)((ulonglong)local_58.Object >> 4)) * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        local_58.SharedReferenceCount.ReferenceController = pTVar17;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17)
        ;
        iVar13 = TSet<TSharedRef<SDockTab,1>,DefaultKeyFuncs<TSharedRef<SDockTab,1>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<TSharedRef<SDockTab_const_,1>_>
                           (param_1,uVar15 >> 0x10 ^ uVar15,&local_58);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17)
        ;
        if (iVar13 == -1) {
          if ((iVar16 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          EVar11 = SDockTab::GetTabRole((SDockTab *)pTVar21->_padding_);
          if (EVar11 == MajorTab) {
            if ((iVar16 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            bVar10 = SDockTab::CanCloseTab((SDockTab *)pTVar21->_padding_,true);
            if (!bVar10) {
              bVar10 = false;
              break;
            }
          }
        }
        bVar10 = true;
        pTVar21 = pTVar21 + 1;
        pTVar17 = (TReferenceControllerBase<1> *)(ulonglong)(iVar16 + 1);
      }
    }
    DestructItems<TSharedRef<SDockTab,1>,int>((TSharedRef<SDockTab,1> *)pTVar19,iVar1);
    if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(pTVar19);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
    local_res20 = local_res20 + 1;
    local_80 = local_80 + 0x10;
    if (bVar10 == false) {
      return false;
    }
  } while( true );
}

// CanInvokeInPanelDrawer @ 142710b80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTabManager::CanInvokeInPanelDrawer
          (FTabManager *this,FTabId *param_1,TSharedPtr<SDockingArea,1> *param_2,
          TSharedPtr<SDockTab,1> *param_3,bool param_4)

{
  SDockTab *pSVar1;
  code *pcVar2;
  TConsoleVariableData<bool> *pTVar3;
  SDockTab *this_00;
  bool bVar4;
  undefined1 uVar5;
  ETabRole EVar6;
  bool bVar7;
  TSharedPtr<FTabManager,1> *this_01;
  FTabManager *this_02;
  TSharedPtr<SDockTab,1> *pTVar8;
  TSharedPtr<SWindow,1> *pTVar9;
  TSharedPtr<SDockTab,1> local_98;
  TSharedPtr<SDockTab,1> local_88;
  TSharedPtr<SDockingArea,1> local_78;
  SDockTab *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  TSharedPtr<SDockTab,1> local_58;
  TSharedPtr<FTabManager,1> local_48;
  TSharedPtr<SDockTab,1> local_38;
  TSharedPtr<SWindow,1> local_28;
  SDockTab *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  pTVar3 = CVarPanelDrawerToggle.Ref;
  bVar4 = IsInParallelGameThread();
  if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((pTVar3->ShadowedValue[0] == false) || (bVar4 = InvokeTab_CanInvokeTab(this,param_1), !bVar4))
  {
    return false;
  }
  InvokeTab_FindOrReuseExistingTab(this,&local_98,param_1);
  bVar4 = local_98.Object == (SDockTab *)0x0;
  if (local_98.Object != (SDockTab *)0x0) {
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68 = param_3->Object;
    pTStack_60 = (param_3->SharedReferenceCount).ReferenceController;
    param_3->Object = local_98.Object;
    (param_3->SharedReferenceCount).ReferenceController =
         local_98.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
    if ((bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    this_00 = local_98.Object;
    EVar6 = SDockTab::GetTabRole(local_98.Object);
    if (EVar6 != NomadTab) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      return false;
    }
    if ((this_00 == (SDockTab *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    this_01 = SDockTab::GetTabManagerPtr(this_00,&local_48);
    this_02 = TSharedPtr<FTabManager,1>::operator->(this_01);
    local_58.Object = local_98.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_98.SharedReferenceCount.ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = RemoveFromHiddenPanelDrawerTabs(this_02,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    if ((this_00 == (SDockTab *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    SDockTab::GetDockArea(this_00,&local_78);
    if (local_78.Object != (SDockingArea *)0x0) {
      if ((local_78.Object == (SDockingArea *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pTVar8 = SDockingArea::GetPanelDrawerHostedTab(local_78.Object,&local_38);
      pSVar1 = pTVar8->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      if (pSVar1 == this_00) {
        bVar4 = true;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    return (bool)(bVar4 | param_4);
  }
  pTVar9 = FPrivateApi::GetParentWindow((this->PrivateApi).Object,&local_28);
  SpawnTab(this,&local_88,param_1,pTVar9,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = param_3->Object;
  pTStack_10 = (param_3->SharedReferenceCount).ReferenceController;
  param_3->Object = local_88.Object;
  (param_3->SharedReferenceCount).ReferenceController =
       local_88.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  if (local_88.Object != (SDockTab *)0x0) {
    if ((local_88.Object == (SDockTab *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    EVar6 = SDockTab::GetTabRole(local_88.Object);
    if (EVar6 == NomadTab) {
      bVar4 = true;
      goto LAB_142710e8d;
    }
  }
  bVar4 = false;
LAB_142710e8d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  return bVar4;
}

// CanRestoreSplitterContent @ 1427110f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTabManager::CanRestoreSplitterContent
          (FTabManager *this,TArray<TSharedRef<SDockingNode,1>,TSizedDefaultAllocator<32>_> *param_1
          ,TSharedRef<FTabManager::FSplitter,1> *param_2,TSharedPtr<SWindow,1> *param_3,
          FSidebarTabLists *param_4,EOutputCanBeNullptr param_5)

{
  int *piVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  FScriptContainerElement *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar14;
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<SDockingNode,1> local_38;
  
  if (param_5 == Never) {
    return true;
  }
  DestructItems<TSharedRef<SDockingNode,1>,int>
            ((TSharedRef<SDockingNode,1> *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar7 = (param_2->Object->ChildNodes).ArrayNum;
  pTVar11 = (TSharedRef<FTabManager::FLayoutNode,1> *)
            (param_2->Object->ChildNodes).AllocatorInstance.Data;
  if ((iVar7 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pTVar14 = pTVar11 + iVar7;
  do {
    if (pTVar11 == pTVar14) {
      return 0 < param_1->ArrayNum;
    }
    RestoreArea_Helper(this,&local_38,pTVar11,param_3,false,param_4,param_5,false);
    if (local_38.Object != (SDockingNode *)0x0) {
      if ((local_38.Object == (SDockingNode *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pTVar8 = (TReferenceControllerBase<1> *)(local_38.Object)->_padding_;
      pTVar13 = (TReferenceControllerBase<1> *)0x0;
      pTVar10 = pTVar8;
      pTVar12 = pTVar13;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar8->SharedReferenceCount;
        do {
          pTVar10 = pTVar13;
          pTVar12 = (TReferenceControllerBase<1> *)0x0;
          if (aVar3 == (atomic<int>)0x0) goto LAB_142711265;
          LOCK();
          aVar6 = pTVar8->SharedReferenceCount;
          bVar4 = aVar3 == aVar6;
          if (bVar4) {
            pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar6 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar6;
        } while (!bVar4);
        pTVar10 = pTVar8;
        pTVar12 = (TReferenceControllerBase<1> *)(local_38.Object)->_padding_;
      }
LAB_142711265:
      pTVar8 = (TReferenceControllerBase<1> *)&pTVar12->SharedReferenceCount;
      if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
        pTVar8 = pTVar13;
      }
      if ((pTVar8 != (TReferenceControllerBase<1> *)&(local_38.Object)->_padding_) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("SharedThis.Get() == this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x67f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x416,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x26c,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = pTVar12;
      local_40 = pTVar10;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      pFVar9 = (param_1->AllocatorInstance).Data;
      if (((pFVar9 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < pFVar9 + (longlong)*piVar1 * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar7 + 1;
      pFVar9 = (param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(TReferenceControllerBase<1> **)pFVar9 = local_48;
      *(TReferenceControllerBase<1> **)(pFVar9 + 8) = local_40;
      if (local_40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    pTVar11 = pTVar11 + 1;
  } while( true );
}

// ClearLocalWorkspaceMenuCategories @ 142712c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::ClearLocalWorkspaceMenuCategories(FTabManager *this)

{
  int *piVar1;
  int iVar2;
  FWorkspaceItem *pFVar3;
  TSharedRef<FWorkspaceItem,1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  
  if ((this->LocalWorkspaceMenuRoot).Object == (FWorkspaceItem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (this->LocalWorkspaceMenuRoot).Object;
  pTVar4 = (TSharedRef<FWorkspaceItem,1> *)(pFVar3->ChildItems).AllocatorInstance.Data;
  piVar1 = &(pFVar3->ChildItems).ArrayMax;
  iVar2 = (pFVar3->ChildItems).ArrayNum;
  if (-1 < (pFVar3->ChildItems).ArrayMax) {
    DestructItems<TSharedRef<FWorkspaceItem,1>,int>(pTVar4,iVar2);
    (pFVar3->ChildItems).ArrayNum = 0;
    return;
  }
  DestructItems<TSharedRef<FWorkspaceItem,1>,int>(pTVar4,iVar2);
  (pFVar3->ChildItems).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(pFVar3->ChildItems).AllocatorInstance,0,piVar1);
  }
  return;
}

// ClearPendingLayoutSave @ 142712d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::ClearPendingLayoutSave(FTabManager *this)

{
  atomic<int> *paVar1;
  TWeakPtr<FTSTicker::FElement,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TWeakPtr<FTSTicker::FElement,1> local_28;
  longlong local_18 [2];
  
  pTVar2 = &this->PendingLayoutSaveHandle;
  if (((pTVar2->Object != (FElement *)0x0) &&
      (pTVar4 = (this->PendingLayoutSaveHandle).WeakReferenceCount.ReferenceController,
      pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)) {
    local_28.Object = pTVar2->Object;
    local_28.WeakReferenceCount.ReferenceController =
         (this->PendingLayoutSaveHandle).WeakReferenceCount.ReferenceController;
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_28);
    if (pTVar2 != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
      pTVar4 = (this->PendingLayoutSaveHandle).WeakReferenceCount.ReferenceController;
      pTVar2->Object = (FElement *)0x0;
      (this->PendingLayoutSaveHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000142712d9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          return;
        }
      }
    }
  }
  return;
}

// CloseAllAreas @ 142713010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::CloseAllAreas(FTabManager *this)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  SDockTab *this_00;
  SWindow *pSVar5;
  code *pcVar6;
  atomic<int> aVar7;
  FTabManager *pFVar8;
  SDockingArea *pSVar9;
  longlong *plVar10;
  bool bVar11;
  atomic<int> aVar12;
  FTabManager *pFVar13;
  SWindow **ppSVar14;
  byte bVar15;
  longlong lVar16;
  int iVar17;
  TArray<TWeakPtr<SDockingArea,1>,TSizedDefaultAllocator<32>_> *pTVar18;
  FTabManager *pFVar19;
  SWindow *this_01;
  uint uVar20;
  uint uVar21;
  FTabManager *pFVar22;
  uint uVar23;
  uint *puVar25;
  TReferenceControllerBase<1> *pTVar26;
  FTabManager *pFVar27;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [4];
  uint local_184;
  uint local_180;
  FTabManager *local_178;
  longlong local_170;
  SWindow *local_168;
  TReferenceControllerBase<1> *local_160;
  int local_158;
  int local_154;
  SDockingArea *local_150;
  TReferenceControllerBase<1> *local_148;
  TArray<TWeakPtr<SDockingArea,1>,TSizedDefaultAllocator<32>_> *local_140;
  TSharedPtr<FTabManager,1> local_138;
  longlong *local_128;
  uint uStack_120;
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  uint local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  SWindow *local_c8;
  TReferenceControllerBase<1> *local_c0;
  TSharedPtr<SDockingArea,1> local_b8 [2];
  undefined4 local_8c;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  TReferenceControllerBase<1> *pTVar24;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pTVar18 = &this->DockAreas;
  local_184 = 0;
  local_180 = 0;
  local_178 = this;
  local_140 = pTVar18;
  if (0 < (this->DockAreas).ArrayNum) {
    local_170 = 0;
    do {
      lVar16 = local_170;
      pTVar24 = (TReferenceControllerBase<1> *)0x0;
      uVar23 = 0;
      uVar21 = uVar23;
      if ((int)local_180 < pTVar18->ArrayNum) {
        uVar21 = ~local_180 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (pTVar18->AllocatorInstance).Data;
      local_148 = *(TReferenceControllerBase<1> **)(pFVar4 + lVar16 + 8);
      pTVar26 = local_148;
      if (local_148 != (TReferenceControllerBase<1> *)0x0) {
        aVar7 = local_148->SharedReferenceCount;
        do {
          pTVar26 = pTVar24;
          if (aVar7 == (atomic<int>)0x0) goto LAB_142713106;
          LOCK();
          aVar12 = local_148->SharedReferenceCount;
          bVar11 = aVar7 == aVar12;
          if (bVar11) {
            local_148->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
            aVar12 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar12;
        } while (!bVar11);
        local_150 = *(SDockingArea **)(pFVar4 + lVar16);
        pTVar26 = local_148;
        if (local_150 != (SDockingArea *)0x0) {
          SDockingArea::GetPanelDrawerKeepAliveTabs
                    (local_150,
                     (TMap<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
                      *)local_88);
          uVar21 = local_60;
          uStack_11c = 1;
          uStack_10c = uVar23;
          local_108 = uVar23;
          if (local_60 != 0) {
            puVar25 = (uint *)(local_88 + 0x10);
            if (local_68 != (uint *)0x0) {
              puVar25 = local_68;
            }
            uVar20 = *puVar25;
            pTVar26 = pTVar24;
            while( true ) {
              uVar23 = (uint)pTVar24;
              local_108 = (uint)pTVar26;
              if (uVar20 != 0) break;
              lVar16 = (longlong)(int)uVar23;
              local_108 = local_108 + 0x20;
              pTVar26 = (TReferenceControllerBase<1> *)(ulonglong)local_108;
              uVar23 = uVar23 + 1;
              pTVar24 = (TReferenceControllerBase<1> *)(ulonglong)uVar23;
              uStack_10c = local_60;
              if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar23)
              goto LAB_1427132d1;
              uVar20 = puVar25[lVar16 + 1];
            }
            uStack_11c = -uVar20 & uVar20;
            uVar2 = (ulonglong)uStack_11c * 2 + 1;
            lVar16 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            uStack_10c = (local_108 - 1) + (int)lVar16;
            local_158 = (int)lVar16;
            if ((int)local_60 < (int)uStack_10c) {
              uStack_10c = local_60;
            }
          }
LAB_1427132d1:
          local_128 = (longlong *)local_88;
          uStack_104 = local_8c;
          uVar20 = local_60 & 0xffffffe0;
          local_118 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
          uStack_120 = uVar23;
          iStack_100 = local_88._8_4_ - local_54;
          uStack_110 = 0xffffffff;
          local_f8 = (longlong *)local_88;
          TStack_f0._padding_ = CONCAT44(uStack_11c,uVar23);
          iVar17 = (int)local_60 >> 5;
          bVar15 = (byte)local_60;
          TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
          TStack_f0.UnvisitedBitMask = 0xffffffff;
          TStack_f0.CurrentBitIndex = uStack_10c;
          TStack_f0.BaseBitIndex = local_108;
          TStack_f0._28_4_ = local_8c;
          uStack_d0 = CONCAT44(uStack_fc,local_88._8_4_ - local_54);
          if (((int)local_60 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar8 = local_178;
          if (uVar21 != local_60) {
            puVar25 = (uint *)(local_88 + 0x10);
            if (local_68 != (uint *)0x0) {
              puVar25 = local_68;
            }
            uVar21 = -1 << (bVar15 & 0x1f) & puVar25[iVar17];
            while (uVar21 == 0) {
              lVar16 = (longlong)iVar17;
              uVar20 = uVar20 + 0x20;
              iVar17 = iVar17 + 1;
              uVar21 = local_60;
              if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
              goto LAB_1427133d1;
              uVar21 = puVar25[lVar16 + 1];
            }
            uVar2 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
            lVar16 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            local_154 = (int)lVar16;
            uVar21 = local_154 + -1 + uVar20;
            if ((int)local_60 < (int)uVar21) {
              uVar21 = local_60;
            }
          }
LAB_1427133d1:
          pFVar27 = (FTabManager *)0x0;
          while( true ) {
            plVar10 = local_f8;
            if ((int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34) != (int)uStack_d0) {
              local_188[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<FTabId,TSharedRef<SDockTab,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_188);
            }
            pSVar9 = local_150;
            if (((TStack_f0.CurrentBitIndex == uVar21) &&
                (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
               (plVar10 == (longlong *)local_88)) break;
            plVar3 = &pFVar8->_padding_;
            pFVar13 = (FTabManager *)pFVar8->_padding_;
            lVar16 = *plVar10 + (longlong)TStack_f0.CurrentBitIndex * 0x28;
            this_00 = *(SDockTab **)(lVar16 + 0x10);
            pFVar19 = pFVar13;
            pFVar22 = pFVar27;
            if (pFVar13 != (FTabManager *)0x0) {
              aVar7 = *(atomic<int> *)&pFVar13->_padding_;
              do {
                pFVar19 = pFVar27;
                if (aVar7 == (atomic<int>)0x0) goto LAB_142713465;
                LOCK();
                aVar12 = *(atomic<int> *)&pFVar13->_padding_;
                bVar11 = aVar7 == aVar12;
                if (bVar11) {
                  *(atomic<int> *)&pFVar13->_padding_ = (atomic<int>)((int)aVar7 + 1);
                  aVar12 = aVar7;
                }
                UNLOCK();
                aVar7 = aVar12;
              } while (!bVar11);
              pFVar19 = pFVar13;
              pFVar22 = (FTabManager *)*plVar3;
            }
LAB_142713465:
            pFVar13 = (FTabManager *)&pFVar22->_padding_;
            if (pFVar22 == (FTabManager *)0x0) {
              pFVar13 = pFVar27;
            }
            if ((pFVar13 != (FTabManager *)plVar3) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("SharedThis.Get() == this",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x67f,L""), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (pFVar22 == (FTabManager *)0x0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x416,L"");
              if (bVar11) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x26c,L"");
              if (bVar11) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            if (pFVar19 != (FTabManager *)0x0) {
              LOCK();
              *(atomic<int> *)&pFVar19->_padding_ =
                   (atomic<int>)((int)*(atomic<int> *)&pFVar19->_padding_ + 1);
              UNLOCK();
            }
            local_138.Object = pFVar22;
            local_138.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pFVar19;
            SDockTab::SetTabManager(this_00,&local_138);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_138.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)pFVar19);
            local_b8[0].Object = (SDockingArea *)0x0;
            local_b8[0].SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
            SDockTab::SetParentDockingArea(*(SDockTab **)(lVar16 + 0x10),local_b8);
            TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
          }
          SDockingArea::CleanPanelDrawer(local_150);
          TMap<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
          ::Append<FDefaultSetAllocator>
                    (&local_178->PanelDrawerActiveHiddenTabs,
                     (TMap<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
                      *)local_88);
          pTVar26 = local_148;
          this_01 = (SWindow *)0x0;
          local_40 = 0;
          if (local_48 != (void *)0x0) {
            FMemory::Free(local_48);
          }
          TSparseArray<TSparseSetElement<TTuple<FTabId,TSharedRef<SDockTab,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FTabId,TSharedRef<SDockTab,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FTabId,TSharedRef<SDockTab,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_88);
          if ((((pSVar9->ParentWindowPtr).Object == (SWindow *)0x0) ||
              (pTVar24 = (pSVar9->ParentWindowPtr).WeakReferenceCount.ReferenceController,
              pTVar24 == (TReferenceControllerBase<1> *)0x0)) ||
             ((int)pTVar24->SharedReferenceCount < 1)) {
            ppSVar14 = &local_c8;
            local_184 = local_184 | 2;
            local_c0 = (TReferenceControllerBase<1> *)0x0;
            this_01 = (SWindow *)0x0;
          }
          else {
            local_160 = (pSVar9->ParentWindowPtr).WeakReferenceCount.ReferenceController;
            local_184 = local_184 | 1;
            local_168 = (SWindow *)0x0;
            if (local_160 == (TReferenceControllerBase<1> *)0x0) {
LAB_142713606:
              ppSVar14 = &local_168;
            }
            else {
              aVar7 = local_160->SharedReferenceCount;
              do {
                if (aVar7 == (atomic<int>)0x0) {
                  local_160 = (TReferenceControllerBase<1> *)0x0;
                  goto LAB_142713606;
                }
                LOCK();
                aVar12 = local_160->SharedReferenceCount;
                bVar11 = aVar7 == aVar12;
                if (bVar11) {
                  local_160->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
                  aVar12 = aVar7;
                }
                UNLOCK();
                aVar7 = aVar12;
              } while (!bVar11);
              this_01 = (pSVar9->ParentWindowPtr).Object;
              ppSVar14 = &local_168;
              local_168 = this_01;
            }
          }
          pSVar5 = ppSVar14[1];
          ppSVar14[1] = (SWindow *)0x0;
          *ppSVar14 = (SWindow *)0x0;
          uVar21 = local_184;
          if ((local_184 & 2) != 0) {
            uVar21 = local_184 & 0xfffffffd;
            local_184 = uVar21;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_c0);
          }
          if ((uVar21 & 1) != 0) {
            local_184 = uVar21 & 0xfffffffe;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_160);
          }
          if (this_01 != (SWindow *)0x0) {
            SWindow::RequestDestroyWindow(this_01);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pSVar5);
          pTVar18 = local_140;
          lVar16 = local_170;
          this = local_178;
        }
      }
LAB_142713106:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
      local_170 = lVar16 + 0x10;
      local_180 = local_180 + 1;
    } while ((int)local_180 < (this->DockAreas).ArrayNum);
  }
  DestructItems<TWeakPtr<SDockingArea,1>,int>
            ((TWeakPtr<SDockingArea,1> *)(pTVar18->AllocatorInstance).Data,pTVar18->ArrayNum);
  pTVar18->ArrayNum = 0;
  if (pTVar18->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar18->AllocatorInstance,0,&pTVar18->ArrayMax);
  }
  DestructItems<TSharedRef<FTabManager::FArea,1>,int>
            ((TSharedRef<FTabManager::FArea,1> *)(this->CollapsedDockAreas).AllocatorInstance.Data,
             (this->CollapsedDockAreas).ArrayNum);
  piVar1 = &(this->CollapsedDockAreas).ArrayMax;
  (this->CollapsedDockAreas).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->CollapsedDockAreas).AllocatorInstance,0,piVar1);
  }
  DestructItems<TSharedRef<FTabManager::FArea,1>,int>
            ((TSharedRef<FTabManager::FArea,1> *)(this->InvalidDockAreas).AllocatorInstance.Data,
             (this->InvalidDockAreas).ArrayNum);
  (this->InvalidDockAreas).ArrayNum = 0;
  if ((this->InvalidDockAreas).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->InvalidDockAreas).AllocatorInstance,0,
               &(this->InvalidDockAreas).ArrayMax);
  }
  return;
}

// ClosePanelDrawer @ 142714170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::ClosePanelDrawer(FTabManager *this,TSharedPtr<SWindow,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<SDockingArea,1> local_18;
  
  GetDockingAreaForPanelDrawer(this,&local_18,param_1);
  if (local_18.Object != (SDockingArea *)0x0) {
    if (local_18.Object == (SDockingArea *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar2 = SDockingArea::IsPanelDrawerOpen(local_18.Object);
    if (bVar2) {
      if (local_18.Object == (SDockingArea *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      SDockingArea::ClosePanelDrawer(local_18.Object);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// CollectSpawners @ 1427149b0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TWeakPtr<FTabSpawnerEntry,1>,TSizedDefaultAllocator<32>_> * __thiscall
FTabManager::CollectSpawners
          (FTabManager *this,
          TArray<TWeakPtr<FTabSpawnerEntry,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
  *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  ETabReadOnlyBehavior EVar4;
  TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
  *pTVar5;
  FName FVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  TSharedRef<FTabSpawnerEntry,1> *pTVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  FTabSpawnerEntry *pFVar16;
  byte bVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  FName local_res18;
  TWeakPtr<FTabSpawnerEntry,1> local_e8;
  longlong *local_d8;
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  uint uStack_bc;
  longlong local_b8;
  TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
  *pTStack_b0;
  TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
  *local_a8;
  undefined2 local_a0;
  undefined1 local_98 [8];
  TReferenceControllerBase<1> *local_90;
  undefined8 local_88;
  TReferenceControllerBase<1> *local_80;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
  *pTStack_50;
  FString local_48;
  
  bVar9 = false;
  bVar8 = false;
  pTVar1 = &this->TabSpawner;
  local_res18 = (FName)((ulonglong)local_res18 & 0xffffffff00000000);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
              *)pTVar1);
  iVar20 = 1;
  local_a0 = 0;
  stack0xffffffffffffff38 = local_78._16_16_;
  local_d8 = (longlong *)local_78._0_8_;
  auStack_d0._0_8_ = local_78._8_8_;
  local_b8 = local_58;
  pTStack_b0 = pTStack_50;
  uVar15 = local_78._24_8_ >> 0x20;
  local_a8 = (TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar18 = (longlong)(int)uVar15 * 0x20 + *local_d8;
      if (*(char *)(*(longlong *)(lVar18 + 8) + 0x178) != '\0') {
        local_98 = *(undefined1 (*) [8])(*(longlong *)(lVar18 + 8) + 0x108);
        local_90 = (TReferenceControllerBase<1> *)CONCAT35(local_90._5_3_,0x1ffffffff);
        bVar10 = IsAllowedTab(this,(FTabId *)local_98);
        if (bVar10) {
          local_e8.Object = *(FTabSpawnerEntry **)(lVar18 + 8);
          local_e8.WeakReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)(lVar18 + 0x10);
          if (local_e8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
          {
            LOCK();
            (local_e8.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
                 (atomic<int>)
                 ((int)(local_e8.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
            UNLOCK();
          }
          TArray<TWeakPtr<FTabSpawnerEntry,1>,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<TWeakPtr<FTabSpawnerEntry,1>_>(__return_storage_ptr__,&local_e8);
          if (local_e8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
          {
            LOCK();
            paVar2 = &(local_e8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
            aVar3 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x1) {
              (**(code **)((local_e8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                        (local_e8.WeakReferenceCount.ReferenceController,1);
            }
          }
        }
      }
      uStack_c0 = uStack_c0 & ~auStack_d0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
      uVar15 = (ulonglong)uStack_bc;
    } while ((int)uStack_bc < *(int *)(auStack_d0._8_8_ + 0x18));
    if (((char)local_a0 != '\0') && (local_a0._1_1_ != '\0')) {
      uVar19 = *(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34;
      if (uVar19 < 4) {
        iVar12 = 1;
      }
      else {
        uVar15 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar12 = 1 << ((byte)lVar18 & 0x1f);
      }
      if (((0 < (int)uVar19) && (local_a8->HashSize < iVar12)) || (iVar12 < local_a8->HashSize)) {
        local_a8->HashSize = iVar12;
        TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_a8);
      }
    }
  }
  pTVar5 = (TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
            *)(this->NomadTabSpawner).Object;
  TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_78,pTVar5);
  local_a0 = 0;
  stack0xffffffffffffff38 = local_78._16_16_;
  local_d8 = (longlong *)local_78._0_8_;
  auStack_d0._0_8_ = local_78._8_8_;
  local_b8 = local_58;
  pTStack_b0 = pTStack_50;
  uVar15 = local_78._24_8_ >> 0x20;
  local_a8 = pTVar5;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar18 = (longlong)(int)uVar15 * 0x20 + *local_d8;
      if (*(char *)(*(longlong *)(lVar18 + 8) + 0x178) != '\0') {
        FVar6 = *(FName *)(*(longlong *)(lVar18 + 8) + 0x108);
        bVar10 = true;
        if (this->bReadOnly != false) {
          pTVar13 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                    ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                            *)&this->TabSpawner,FVar6);
          if ((pTVar13 == (TSharedRef<FTabSpawnerEntry,1> *)0x0) &&
             (pTVar13 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                        ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                                *)(this->NomadTabSpawner).Object,FVar6),
             pTVar13 == (TSharedRef<FTabSpawnerEntry,1> *)0x0)) {
            bVar8 = true;
            puVar14 = (undefined8 *)local_98;
            pFVar16 = (FTabSpawnerEntry *)0x0;
            local_90 = (TReferenceControllerBase<1> *)0x0;
          }
          else {
            local_80 = (pTVar13->SharedReferenceCount).ReferenceController;
            bVar9 = true;
            pFVar16 = pTVar13->Object;
            if (local_80 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_80->SharedReferenceCount =
                   (atomic<int>)((int)local_80->SharedReferenceCount + 1);
              UNLOCK();
            }
            puVar14 = &local_88;
          }
          pTVar7 = (TReferenceControllerBase<1> *)puVar14[1];
          puVar14[1] = 0;
          *puVar14 = 0;
          if (bVar8) {
            bVar8 = false;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_90);
          }
          if (bVar9) {
            bVar9 = false;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_80);
          }
          if (pFVar16 == (FTabSpawnerEntry *)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar7);
            bVar10 = true;
          }
          else {
            EVar4 = pFVar16->ReadOnlyBehavior;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar7);
            bVar10 = EVar4 != Hidden;
          }
        }
        local_res18 = FVar6;
        if ((FVar6 == (FName)0x0) ||
           (bVar11 = FNamePermissionList::PassesFilter((this->TabPermissionList).Object,FVar6),
           bVar11)) {
          bVar17 = 1;
        }
        else {
          bVar17 = 0;
          if (5 < (byte)LogSlate._0_1_) {
            ::FName::ToString(&local_res18,&local_48);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
        }
        if ((bool)(bVar10 & bVar17)) {
          local_e8.Object = *(FTabSpawnerEntry **)(lVar18 + 8);
          local_e8.WeakReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)(lVar18 + 0x10);
          if (local_e8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
          {
            LOCK();
            (local_e8.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
                 (atomic<int>)
                 ((int)(local_e8.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
            UNLOCK();
          }
          TArray<TWeakPtr<FTabSpawnerEntry,1>,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<TWeakPtr<FTabSpawnerEntry,1>_>(__return_storage_ptr__,&local_e8);
          if (local_e8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
          {
            LOCK();
            paVar2 = &(local_e8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
            aVar3 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x1) {
              (**(code **)((local_e8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                        (local_e8.WeakReferenceCount.ReferenceController,1);
            }
          }
        }
      }
      uStack_c0 = uStack_c0 & ~auStack_d0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
      uVar15 = (ulonglong)uStack_bc;
    } while ((int)uStack_bc < *(int *)(auStack_d0._8_8_ + 0x18));
    if (((char)local_a0 != '\0') && (local_a0._1_1_ != '\0')) {
      uVar19 = *(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34;
      if (3 < uVar19) {
        uVar15 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar20 = 1 << ((byte)lVar18 & 0x1f);
      }
      if (((0 < (int)uVar19) && (local_a8->HashSize < iVar20)) || (iVar20 < local_a8->HashSize)) {
        local_a8->HashSize = iVar20;
        TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_a8);
      }
    }
  }
  return __return_storage_ptr__;
}

// DrawAttention @ 14272cf20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::DrawAttention(FTabManager *this,TSharedRef<SDockTab,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWindow *pSVar2;
  SDockTab *pSVar3;
  STabSidebar *pSVar4;
  SDockingTabWell *this_00;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  TSharedRef<FGlobalTabmanager,1> *pTVar9;
  FSlateApplication *pFVar10;
  SWindow *this_01;
  SDockingTabStack *pSVar11;
  SWindow *pSVar12;
  TSharedPtr<SDockingArea,1> local_a8;
  TSharedPtr<SDockingTabStack,1> local_98;
  TSharedRef<FTabManager,1> local_88;
  TSharedRef<SDockTab,1> local_78;
  TSharedRef<SDockTab,1> local_68;
  TSharedPtr<SDockTab,1> local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  this_01 = (SWindow *)0x0;
  SDockTab::GetDockArea(param_1->Object,&local_a8);
  if (local_a8.Object == (SDockingArea *)0x0) goto LAB_14272d2ba;
  if ((local_a8.Object == (SDockingArea *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  SDockingArea::GetTabManager(local_a8.Object,&local_88);
  pTVar9 = FGlobalTabmanager::Get();
  if ((FGlobalTabmanager *)local_88.Object != pTVar9->Object) {
    pTVar9 = FGlobalTabmanager::Get();
    FGlobalTabmanager::DrawAttentionToTabManager(pTVar9->Object,&local_88);
  }
  if ((local_a8.Object == (SDockingArea *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((((local_a8.Object)->ParentWindowPtr).Object == (SWindow *)0x0) ||
      (pTVar1 = ((local_a8.Object)->ParentWindowPtr).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    local_30 = 0;
    local_38 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pSVar12 = (SWindow *)0x0;
  }
  else {
    pSVar2 = (SWindow *)((local_a8.Object)->ParentWindowPtr).WeakReferenceCount.ReferenceController;
    pSVar12 = pSVar2;
    if (pSVar2 != (SWindow *)0x0) {
      iVar6 = (int)pSVar2->_padding_;
      do {
        pSVar12 = this_01;
        if (iVar6 == 0) goto LAB_14272d051;
        LOCK();
        iVar8 = (int)pSVar2->_padding_;
        bVar7 = iVar6 == iVar8;
        if (bVar7) {
          *(int *)&pSVar2->_padding_ = iVar6 + 1;
          iVar8 = iVar6;
        }
        UNLOCK();
        iVar6 = iVar8;
      } while (!bVar7);
      this_01 = ((local_a8.Object)->ParentWindowPtr).Object;
      pSVar12 = pSVar2;
    }
LAB_14272d051:
    local_40 = 0;
    local_48 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if ((this_01 != (SWindow *)0x0) &&
       (((bVar7 = SWindow::IsActive(this_01), bVar7 ||
         (bVar7 = SWindow::HasActiveParent(this_01), bVar7)) ||
        (pFVar10 = FSlateApplication::Get(), 0 < pFVar10->ProcessingInput)))) {
      SWindow::BringToFront(this_01,false);
    }
  }
  if ((local_a8.Object == (SDockingArea *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar3 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((((local_a8.Object)->LeftSidebar).Object == (STabSidebar *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pSVar4 = ((local_a8.Object)->LeftSidebar).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78.Object = pSVar3;
  local_78.SharedReferenceCount.ReferenceController = pTVar1;
  bVar7 = STabSidebar::TryOpenSidebarDrawer(pSVar4,&local_78);
  if (bVar7) {
LAB_14272d266:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  else {
    if ((((local_a8.Object)->RightSidebar).Object == (STabSidebar *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pSVar4 = ((local_a8.Object)->RightSidebar).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68.Object = pSVar3;
    local_68.SharedReferenceCount.ReferenceController = pTVar1;
    bVar7 = STabSidebar::TryOpenSidebarDrawer(pSVar4,&local_68);
    if (bVar7) goto LAB_14272d266;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SDockTab::GetParentDockTabStack(param_1->Object,&local_98);
    if (local_98.Object != (SDockingTabStack *)0x0) {
      pSVar11 = local_98.Object;
      if ((local_98.Object == (SDockingTabStack *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), pSVar11 = local_98.Object, bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((pSVar11->TabWell).Object == (SDockingTabWell *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_58.Object = param_1->Object;
      this_00 = (pSVar11->TabWell).Object;
      local_58.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SDockingTabWell::BringTabToFront(this_00,&local_58);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
  SDockTab::FlashTab(param_1->Object);
  pTVar9 = FGlobalTabmanager::Get();
  FGlobalTabmanager::UpdateMainMenu(pTVar9->Object,param_1,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
LAB_14272d2ba:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  return;
}

// FindExistingLiveTab @ 142735590

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockTab,1> * __thiscall
FTabManager::FindExistingLiveTab
          (FTabManager *this,TSharedPtr<SDockTab,1> *__return_storage_ptr__,FTabId *param_1)

{
  FScriptContainerElement *pFVar1;
  SDockingArea *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  uint uVar5;
  atomic<int> aVar6;
  int iVar7;
  int iVar8;
  TSharedPtr<SDockTab,1> *pTVar9;
  TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  FTabId *pFVar11;
  TSharedRef<SDockTab,1> *pTVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar16;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  uint local_res20;
  longlong local_a8;
  ForAnyElementType local_a0;
  int local_98;
  int iStack_94;
  TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> local_90;
  TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> local_80;
  TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> local_70;
  TSharedPtr<SDockTab,1> local_60;
  FTabId local_50;
  TReferenceControllerBase<1> *pTVar15;
  
  pTVar19 = (TReferenceControllerBase<1> *)0x0;
  local_res20 = 0;
  if (0 < (this->DockAreas).ArrayNum) {
    local_a8 = 0;
    pTVar18 = pTVar19;
    do {
      uVar16 = (uint)pTVar18;
      uVar5 = 0;
      if ((int)uVar16 < (this->DockAreas).ArrayNum) {
        uVar5 = ~uVar16 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TSharedPtr<SDockTab,1> *)(*pcVar2)();
        return pTVar9;
      }
      pFVar1 = (this->DockAreas).AllocatorInstance.Data;
      pTVar18 = *(TReferenceControllerBase<1> **)(pFVar1 + local_a8 + 8);
      pTVar15 = pTVar18;
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar18->SharedReferenceCount;
        do {
          pTVar15 = pTVar19;
          if (aVar3 == (atomic<int>)0x0) goto LAB_14273599c;
          LOCK();
          aVar6 = pTVar18->SharedReferenceCount;
          bVar4 = aVar3 == aVar6;
          if (bVar4) {
            pTVar18->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar6 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar6;
        } while (!bVar4);
        this_00 = *(SDockingArea **)(pFVar1 + local_a8);
        pTVar15 = pTVar18;
        if (this_00 != (SDockingArea *)0x0) {
          (**(code **)(this_00->_padding_ + 0x268))(this_00,&local_a0);
          local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_90.ArrayNum = 0;
          local_90.ArrayMax = 0;
          if (((this_00->LeftSidebar).Object == (STabSidebar *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar9 = (TSharedPtr<SDockTab,1> *)(*pcVar2)();
            return pTVar9;
          }
          pTVar10 = STabSidebar::GetAllTabs((this_00->LeftSidebar).Object,&local_80);
          if ((&local_90 == pTVar10) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)this != (void*)&Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x986,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar9 = (TSharedPtr<SDockTab,1> *)(*pcVar2)();
            return pTVar9;
          }
          iVar8 = pTVar10->ArrayNum;
          if (iVar8 != 0) {
            iVar7 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,iVar8,&local_90.AllocatorInstance,&local_90.ArrayNum,
                               &local_90.ArrayMax);
            memmove(local_90.AllocatorInstance.Data + (longlong)iVar7 * 0x10,
                    (pTVar10->AllocatorInstance).Data,(longlong)iVar8 << 4);
            pTVar10->ArrayNum = 0;
          }
          DestructItems<TSharedRef<SDockTab,1>,int>
                    ((TSharedRef<SDockTab,1> *)local_80.AllocatorInstance.Data,local_80.ArrayNum);
          if ((TSharedRef<SDockTab,1> *)local_80.AllocatorInstance.Data !=
              (TSharedRef<SDockTab,1> *)0x0) {
            FMemory::Free(local_80.AllocatorInstance.Data);
          }
          if (((this_00->RightSidebar).Object == (STabSidebar *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar9 = (TSharedPtr<SDockTab,1> *)(*pcVar2)();
            return pTVar9;
          }
          pTVar10 = STabSidebar::GetAllTabs((this_00->RightSidebar).Object,&local_70);
          if ((&local_90 == pTVar10) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)this != (void*)&Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x986,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar9 = (TSharedPtr<SDockTab,1> *)(*pcVar2)();
            return pTVar9;
          }
          iVar8 = pTVar10->ArrayNum;
          if (iVar8 != 0) {
            iVar7 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,iVar8,&local_90.AllocatorInstance,&local_90.ArrayNum,
                               &local_90.ArrayMax);
            memmove(local_90.AllocatorInstance.Data + (longlong)iVar7 * 0x10,
                    (pTVar10->AllocatorInstance).Data,(longlong)iVar8 << 4);
            pTVar10->ArrayNum = 0;
          }
          DestructItems<TSharedRef<SDockTab,1>,int>
                    ((TSharedRef<SDockTab,1> *)local_70.AllocatorInstance.Data,local_70.ArrayNum);
          if ((TSharedRef<SDockTab,1> *)local_70.AllocatorInstance.Data !=
              (TSharedRef<SDockTab,1> *)0x0) {
            FMemory::Free(local_70.AllocatorInstance.Data);
          }
          lVar14 = (longlong)local_90.ArrayNum;
          if (local_90.ArrayNum != 0) {
            iVar8 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,local_90.ArrayNum,&local_a0,&local_98,&iStack_94);
            memmove(local_a0.Data + (longlong)iVar8 * 0x10,local_90.AllocatorInstance.Data,
                    lVar14 << 4);
            local_90._8_8_ = local_90._8_8_ & 0xffffffff00000000;
          }
          DestructItems<TSharedRef<SDockTab,1>,int>
                    ((TSharedRef<SDockTab,1> *)local_90.AllocatorInstance.Data,0);
          if ((TSharedRef<SDockTab,1> *)local_90.AllocatorInstance.Data !=
              (TSharedRef<SDockTab,1> *)0x0) {
            FMemory::Free(local_90.AllocatorInstance.Data);
          }
          pTVar15 = pTVar19;
          pTVar17 = pTVar19;
          if (0 < local_98) {
            do {
              uVar13 = (uint)pTVar15;
              uVar5 = 0;
              if ((int)uVar13 < local_98) {
                uVar5 = ~uVar13 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                pTVar9 = (TSharedPtr<SDockTab,1> *)(*pcVar2)();
                return pTVar9;
              }
              pFVar11 = SDockTab::GetLayoutIdentifier
                                  (*(SDockTab **)(local_a0.Data + (longlong)&pTVar17->_padding_),
                                   &local_50);
              if ((param_1->TabType == pFVar11->TabType) &&
                 (((param_1->InstanceId == -1 || (pFVar11->InstanceId == -1)) ||
                  (param_1->InstanceId == pFVar11->InstanceId)))) {
                uVar5 = 0;
                if ((int)uVar13 < local_98) {
                  uVar5 = ~uVar13 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  pTVar9 = (TSharedPtr<SDockTab,1> *)(*pcVar2)();
                  return pTVar9;
                }
                __return_storage_ptr__->Object =
                     *(SDockTab **)&local_a0.Data[(longlong)(int)uVar13 * 0x10].field_0x0;
                pTVar19 = *(TReferenceControllerBase<1> **)
                           (local_a0.Data + (longlong)(int)uVar13 * 0x10 + 8);
                (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar19;
                if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar19->SharedReferenceCount =
                       (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
                  UNLOCK();
                }
                goto LAB_142735a97;
              }
              pTVar15 = (TReferenceControllerBase<1> *)(ulonglong)(uVar13 + 1);
              pTVar17 = pTVar17 + 1;
              uVar16 = local_res20;
            } while ((int)(uVar13 + 1) < local_98);
          }
          SDockingArea::GetPanelDrawerSystemHostedTab(this_00,&local_60,param_1);
          if (local_60.Object != (SDockTab *)0x0) {
            __return_storage_ptr__->Object = local_60.Object;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                 local_60.SharedReferenceCount.ReferenceController;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
LAB_142735a97:
            DestructItems<TSharedRef<SDockTab,1>,int>
                      ((TSharedRef<SDockTab,1> *)local_a0.Data,local_98);
            if ((TSharedRef<SDockTab,1> *)local_a0.Data != (TSharedRef<SDockTab,1> *)0x0) {
              FMemory::Free(local_a0.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar18);
            return __return_storage_ptr__;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_60.SharedReferenceCount.ReferenceController);
          DestructItems<TSharedRef<SDockTab,1>,int>
                    ((TSharedRef<SDockTab,1> *)local_a0.Data,local_98);
          pTVar15 = pTVar18;
          if ((TSharedRef<SDockTab,1> *)local_a0.Data != (TSharedRef<SDockTab,1> *)0x0) {
            FMemory::Free(local_a0.Data);
          }
        }
      }
LAB_14273599c:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
      local_res20 = uVar16 + 1;
      pTVar18 = (TReferenceControllerBase<1> *)(ulonglong)local_res20;
      local_a8 = local_a8 + 0x10;
    } while ((int)local_res20 < (this->DockAreas).ArrayNum);
  }
  if ((param_1->InstanceId == -1) &&
     (pTVar12 = TMapBase<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
                ::Find((TMapBase<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
                        *)&this->PanelDrawerActiveHiddenTabs,param_1),
     pTVar12 != (TSharedRef<SDockTab,1> *)0x0)) {
    __return_storage_ptr__->Object = pTVar12->Object;
    pTVar19 = (pTVar12->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar19;
    if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    __return_storage_ptr__->Object = (SDockTab *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  return __return_storage_ptr__;
}

// FindLastTabInWindow @ 142735ba0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockTab,1> * __thiscall
FTabManager::FindLastTabInWindow
          (FTabManager *this,TSharedPtr<SDockTab,1> *__return_storage_ptr__,
          TSharedPtr<SWindow,1> *param_1)

{
  longlong *plVar1;
  SWindow *pSVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  uint uVar6;
  atomic<int> aVar7;
  TSharedPtr<SDockTab,1> *pTVar8;
  SWindow **ppSVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uVar11;
  SWindow *pSVar12;
  SWindow *pSVar13;
  FScriptContainerElement *pFVar14;
  SWindow *pSVar15;
  SWindow *pSVar16;
  SWindow *pSVar17;
  longlong local_res20;
  TSharedRef<SDockTab,1> *local_78;
  int local_70;
  SWindow *local_68;
  TReferenceControllerBase<1> *local_60;
  SWindow *local_58;
  TReferenceControllerBase<1> *local_50;
  
  pSVar12 = (SWindow *)0x0;
  if ((param_1->Object != (SWindow *)0x0) && (0 < (this->DockAreas).ArrayNum)) {
    local_res20 = 0;
    pSVar15 = pSVar12;
    pSVar16 = pSVar12;
    do {
      uVar11 = (uint)pSVar16;
      uVar6 = 0;
      if ((int)uVar11 < (this->DockAreas).ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
        return pTVar8;
      }
      pFVar14 = (this->DockAreas).AllocatorInstance.Data + local_res20;
      pSVar16 = *(SWindow **)(pFVar14 + 8);
      pSVar13 = pSVar16;
      if (pSVar16 != (SWindow *)0x0) {
        aVar4 = *(atomic<int> *)&pSVar16->_padding_;
        do {
          pSVar13 = pSVar12;
          if (aVar4 == (atomic<int>)0x0) goto LAB_142735c76;
          LOCK();
          aVar7 = *(atomic<int> *)&pSVar16->_padding_;
          bVar5 = aVar4 == aVar7;
          if (bVar5) {
            *(atomic<int> *)&pSVar16->_padding_ = (atomic<int>)((int)aVar4 + 1);
            aVar7 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar7;
        } while (!bVar5);
        plVar1 = *(longlong **)pFVar14;
        pSVar13 = pSVar16;
        if (plVar1 != (longlong *)0x0) {
          if (((plVar1[0x60] == 0) || (plVar1[0x61] == 0)) || (*(int *)(plVar1[0x61] + 8) < 1)) {
            pSVar15 = (SWindow *)(ulonglong)((uint)pSVar15 | 2);
            local_50 = (TReferenceControllerBase<1> *)0x0;
            ppSVar9 = &local_58;
            pSVar17 = (SWindow *)0x0;
          }
          else {
            local_60 = (TReferenceControllerBase<1> *)plVar1[0x61];
            pSVar15 = (SWindow *)(ulonglong)((uint)pSVar15 | 1);
            local_68 = (SWindow *)0x0;
            if (local_60 == (TReferenceControllerBase<1> *)0x0) {
LAB_142735d39:
              ppSVar9 = &local_68;
              pSVar17 = pSVar12;
            }
            else {
              aVar4 = local_60->SharedReferenceCount;
              do {
                if (aVar4 == (atomic<int>)0x0) {
                  local_60 = (TReferenceControllerBase<1> *)0x0;
                  goto LAB_142735d39;
                }
                LOCK();
                aVar7 = local_60->SharedReferenceCount;
                bVar5 = aVar4 == aVar7;
                if (bVar5) {
                  local_60->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
                  aVar7 = aVar4;
                }
                UNLOCK();
                aVar4 = aVar7;
              } while (!bVar5);
              pSVar17 = (SWindow *)plVar1[0x60];
              ppSVar9 = &local_68;
              local_68 = pSVar17;
            }
          }
          pSVar13 = ppSVar9[1];
          ppSVar9[1] = (SWindow *)0x0;
          *ppSVar9 = (SWindow *)0x0;
          if (((ulonglong)pSVar15 & 2) != 0) {
            pSVar15 = (SWindow *)(ulonglong)((uint)pSVar15 & 0xfffffffd);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_50);
          }
          if (((ulonglong)pSVar15 & 1) != 0) {
            pSVar15 = (SWindow *)(ulonglong)((uint)pSVar15 & 0xfffffffe);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_60);
          }
          pSVar2 = param_1->Object;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pSVar13);
          pSVar13 = pSVar16;
          if (pSVar17 == pSVar2) {
            (**(code **)(*plVar1 + 0x268))(plVar1,&local_78);
            if (0 < local_70) {
              uVar11 = local_70 - 1;
              uVar6 = 0;
              if ((int)uVar11 < local_70) {
                uVar6 = ~uVar11 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                pTVar8 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
                return pTVar8;
              }
              __return_storage_ptr__->Object = local_78[(int)uVar11].Object;
              pTVar10 = local_78[(int)uVar11].SharedReferenceCount.ReferenceController;
              (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar10;
              if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar10->SharedReferenceCount =
                     (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
                UNLOCK();
              }
              DestructItems<TSharedRef<SDockTab,1>,int>(local_78,local_70);
              if (local_78 != (TSharedRef<SDockTab,1> *)0x0) {
                FMemory::Free(local_78);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)pSVar16);
              pTVar10 = (param_1->SharedReferenceCount).ReferenceController;
              goto LAB_142735cc5;
            }
            DestructItems<TSharedRef<SDockTab,1>,int>(local_78,local_70);
            if (local_78 != (TSharedRef<SDockTab,1> *)0x0) {
              FMemory::Free(local_78);
            }
          }
        }
      }
LAB_142735c76:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar13);
      pSVar16 = (SWindow *)(ulonglong)(uVar11 + 1);
      local_res20 = local_res20 + 0x10;
    } while ((int)(uVar11 + 1) < (this->DockAreas).ArrayNum);
  }
  __return_storage_ptr__->Object = (SDockTab *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar10 = (param_1->SharedReferenceCount).ReferenceController;
LAB_142735cc5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// FindPotentiallyClosedTab @ 142735f70

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockingTabStack,1> * __thiscall
FTabManager::FindPotentiallyClosedTab
          (FTabManager *this,TSharedPtr<SDockingTabStack,1> *__return_storage_ptr__,FTabId *param_1)

{
  AttemptToOpenTab(this,__return_storage_ptr__,param_1,false);
  return __return_storage_ptr__;
}

// FindTabInCollapsedAreas @ 1427360c0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FTabManager::FindTabInCollapsedAreas(FTabManager *this,FTabMatcher *param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  TSharedPtr<FTabManager::FStack,1> local_28;
  TSharedRef<FTabManager::FLayoutNode,1> local_18;
  
  uVar7 = 0;
  if (0 < (this->CollapsedDockAreas).ArrayNum) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->CollapsedDockAreas).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      pFVar1 = (this->CollapsedDockAreas).AllocatorInstance.Data;
      local_18.Object = *(FLayoutNode **)(pFVar1 + lVar8);
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar8 + 8);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_18.SharedReferenceCount.ReferenceController = pTVar2;
      FindTabUnderNode(&local_28,param_1,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      if (local_28.Object != (FStack *)0x0) {
        return uVar7;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar7 < (this->CollapsedDockAreas).ArrayNum);
  }
  return -1;
}

// FindTabInLiveArea @ 1427361e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockingTabStack,1> * __cdecl
FTabManager::FindTabInLiveArea
          (TSharedPtr<SDockingTabStack,1> *__return_storage_ptr__,FTabMatcher *param_1,
          TSharedRef<SDockingArea,1> *param_2)

{
  FName *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedPtr<SDockingTabStack,1> *pTVar6;
  FName *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  TArray<TSharedRef<SDockingTabStack,1>,TSizedDefaultAllocator<32>_> local_48;
  FName local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar9 = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  GetAllStacks(param_2,&local_48);
  uVar11 = uVar9;
  iVar10 = local_48.ArrayNum;
  if (0 < local_48.ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < iVar10) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TSharedPtr<SDockingTabStack,1> *)(*pcVar3)();
          return pTVar6;
        }
        iVar10 = local_48.ArrayNum;
      }
      local_38 = (param_1->TabIdToMatch).TabType;
      uStack_30._0_4_ = (param_1->TabIdToMatch).InstanceId;
      uStack_30._4_1_ = (param_1->TabIdToMatch).Flags;
      uStack_30._5_3_ = *(undefined3 *)&(param_1->TabIdToMatch).field_0xd;
      local_28._0_4_ = param_1->RequiredTabState;
      local_28._4_1_ = param_1->TreatIndexNoneAsWildcard;
      local_28._5_3_ = *(undefined3 *)&param_1->field_0x15;
      pFVar1 = *(FName **)(*(longlong *)(local_48.AllocatorInstance.Data + uVar11) + 0x2c0);
      if (pFVar1 != pFVar1 + (longlong)
                             *(int *)(*(longlong *)(local_48.AllocatorInstance.Data + uVar11) +
                                     0x2c8) * 4) {
        pFVar7 = pFVar1;
        do {
          if ((((pFVar7[2].ComparisonIndex.Value & (undefined4)local_28) != 0) &&
              (*pFVar7 == local_38)) &&
             (((local_28._4_1_ != '\0' && ((undefined4)uStack_30 == 0xffffffff)) ||
              ((undefined4)uStack_30 == pFVar7[1].ComparisonIndex.Value)))) {
            if ((int)((longlong)pFVar7 - (longlong)pFVar1 >> 5) != -1) {
              uVar5 = 0;
              if ((int)uVar8 < iVar10) {
                uVar5 = ~uVar8 >> 0x1f;
              }
              if (uVar5 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pTVar6 = (TSharedPtr<SDockingTabStack,1> *)(*pcVar3)();
                  return pTVar6;
                }
                iVar10 = local_48.ArrayNum;
              }
              __return_storage_ptr__->Object =
                   *(SDockingTabStack **)
                    &local_48.AllocatorInstance.Data[(longlong)(int)uVar8 * 0x10].field_0x0;
              pTVar2 = *(TReferenceControllerBase<1> **)
                        (local_48.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10 + 8);
              (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
              if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
                UNLOCK();
                iVar10 = local_48.ArrayNum;
              }
              goto LAB_142736317;
            }
            break;
          }
          pFVar7 = pFVar7 + 4;
        } while (pFVar7 != pFVar1 + (longlong)
                                    *(int *)(*(longlong *)(local_48.AllocatorInstance.Data + uVar11)
                                            + 0x2c8) * 4);
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar11 = uVar11 + 0x10;
    } while ((int)(uVar8 + 1) < iVar10);
  }
  __return_storage_ptr__->Object = (SDockingTabStack *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_142736317:
  DestructItems<TSharedRef<SDockingTabStack,1>,int>
            ((TSharedRef<SDockingTabStack,1> *)local_48.AllocatorInstance.Data,iVar10);
  if ((TSharedRef<SDockingTabStack,1> *)local_48.AllocatorInstance.Data !=
      (TSharedRef<SDockingTabStack,1> *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindTabInLiveAreas @ 1427363e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockingTabStack,1> * __thiscall
FTabManager::FindTabInLiveAreas
          (FTabManager *this,TSharedPtr<SDockingTabStack,1> *__return_storage_ptr__,
          FTabMatcher *param_1)

{
  FScriptContainerElement *pFVar1;
  SDockingArea *pSVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  uint uVar6;
  atomic<int> aVar7;
  TSharedPtr<SDockingTabStack,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  uint uVar10;
  longlong lVar11;
  TSharedPtr<SDockingTabStack,1> local_38;
  TSharedRef<SDockingArea,1> local_28;
  
  uVar10 = 0;
  if (0 < (this->DockAreas).ArrayNum) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->DockAreas).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TSharedPtr<SDockingTabStack,1> *)(*pcVar3)();
        return pTVar8;
      }
      pFVar1 = (this->DockAreas).AllocatorInstance.Data;
      pTVar9 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar11 + 8);
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        aVar4 = pTVar9->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pTVar9 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_142736491;
          }
          LOCK();
          aVar7 = pTVar9->SharedReferenceCount;
          bVar5 = aVar4 == aVar7;
          if (bVar5) {
            pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar7 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar7;
        } while (!bVar5);
        pSVar2 = *(SDockingArea **)(pFVar1 + lVar11);
        if (pSVar2 != (SDockingArea *)0x0) {
          LOCK();
          pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
          UNLOCK();
          local_28.Object = pSVar2;
          local_28.SharedReferenceCount.ReferenceController = pTVar9;
          FindTabInLiveArea(&local_38,param_1,&local_28);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar9);
          if (local_38.Object != (SDockingTabStack *)0x0) {
            __return_storage_ptr__->Object = local_38.Object;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                 local_38.SharedReferenceCount.ReferenceController;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar9);
            return __return_storage_ptr__;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_38.SharedReferenceCount.ReferenceController);
        }
      }
LAB_142736491:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar10 < (this->DockAreas).ArrayNum);
  }
  __return_storage_ptr__->Object = (SDockingTabStack *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// FindTabSpawnerFor @ 142736550

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FTabSpawnerEntry,1> * __thiscall
FTabManager::FindTabSpawnerFor
          (FTabManager *this,TSharedPtr<FTabSpawnerEntry,1> *__return_storage_ptr__,FName param_1)

{
  FTabSpawnerEntry *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedRef<FTabSpawnerEntry,1> *pTVar3;
  
  pTVar3 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
           ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                   *)&this->TabSpawner,param_1);
  if (pTVar3 == (TSharedRef<FTabSpawnerEntry,1> *)0x0) {
    pTVar3 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
             ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                     *)(this->NomadTabSpawner).Object,param_1);
    if (pTVar3 == (TSharedRef<FTabSpawnerEntry,1> *)0x0) {
      __return_storage_ptr__->Object = (FTabSpawnerEntry *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_1427365aa;
    }
  }
  pFVar1 = pTVar3->Object;
  pTVar2 = (pTVar3->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  __return_storage_ptr__->Object = pFVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
LAB_1427365aa:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// FindTabSpawnerFor @ 1427365d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FTabSpawnerEntry_const_,1> * __thiscall
FTabManager::FindTabSpawnerFor
          (FTabManager *this,TSharedPtr<FTabSpawnerEntry_const_,1> *__return_storage_ptr__,
          FName param_1)

{
  FTabSpawnerEntry *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedRef<FTabSpawnerEntry,1> *pTVar3;
  
  pTVar3 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
           ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                   *)&this->TabSpawner,param_1);
  if (pTVar3 == (TSharedRef<FTabSpawnerEntry,1> *)0x0) {
    pTVar3 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
             ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                     *)(this->NomadTabSpawner).Object,param_1);
    if (pTVar3 == (TSharedRef<FTabSpawnerEntry,1> *)0x0) {
      __return_storage_ptr__->Object = (FTabSpawnerEntry *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_14273662a;
    }
  }
  pFVar1 = pTVar3->Object;
  pTVar2 = (pTVar3->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  __return_storage_ptr__->Object = pFVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
LAB_14273662a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// FindTabUnderNode @ 1427369d0

TSharedPtr<FTabManager::FStack,1> * __cdecl
FTabManager::FindTabUnderNode
          (TSharedPtr<FTabManager::FStack,1> *__return_storage_ptr__,FTabMatcher *param_1,
          TSharedRef<FTabManager::FLayoutNode,1> *param_2)

{
  int iVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<FTabManager::FStack,1> *pTVar5;
  FName *pFVar6;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar7;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar8;
  FStack *local_78;
  TReferenceControllerBase<1> *local_70;
  longlong local_68;
  TReferenceControllerBase<1> *local_60;
  TSharedPtr<FTabManager::FStack,1> local_58;
  TSharedPtr<FTabManager::FStack,1> local_48;
  FName local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  (**(code **)(param_2->Object->_padding_ + 8))(param_2->Object,&local_78);
  (**(code **)(param_2->Object->_padding_ + 0x10))();
  if (local_78 == (FStack *)0x0) {
    if ((local_68 == 0) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6813193255430124575>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                           ,0xbe1,"NodeAsSplitter.IsValid()"), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FTabManager::FStack,1> *)(*pcVar3)();
      return pTVar5;
    }
    local_58.Object = (FStack *)0x0;
    local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((local_68 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FTabManager::FStack,1> *)(*pcVar3)();
      return pTVar5;
    }
    iVar1 = *(int *)(local_68 + 0x30);
    pTVar7 = *(TSharedRef<FTabManager::FLayoutNode,1> **)(local_68 + 0x28);
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FTabManager::FStack,1> *)(*pcVar3)();
      return pTVar5;
    }
    pTVar8 = pTVar7 + iVar1;
    for (; pTVar7 != pTVar8; pTVar7 = pTVar7 + 1) {
      pTVar5 = FindTabUnderNode(&local_48,param_1,pTVar7);
      if (&local_58 != pTVar5) {
        local_58.Object = pTVar5->Object;
        pTVar5->Object = (FStack *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_58.SharedReferenceCount,&pTVar5->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
    __return_storage_ptr__->Object = local_58.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_58.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  }
  else {
    if ((local_78 == (FStack *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FTabManager::FStack,1> *)(*pcVar3)();
      return pTVar5;
    }
    pFVar2 = (FName *)(local_78->Tabs).AllocatorInstance.Data;
    local_38 = (param_1->TabIdToMatch).TabType;
    uStack_30._0_4_ = (param_1->TabIdToMatch).InstanceId;
    uStack_30._4_1_ = (param_1->TabIdToMatch).Flags;
    uStack_30._5_3_ = *(undefined3 *)&(param_1->TabIdToMatch).field_0xd;
    local_28._0_4_ = param_1->RequiredTabState;
    local_28._4_1_ = param_1->TreatIndexNoneAsWildcard;
    local_28._5_3_ = *(undefined3 *)&param_1->field_0x15;
    if (pFVar2 != pFVar2 + (longlong)(local_78->Tabs).ArrayNum * 4) {
      pFVar6 = pFVar2;
      do {
        if ((((pFVar6[2].ComparisonIndex.Value & (undefined4)local_28) != 0) &&
            (*pFVar6 == local_38)) &&
           (((local_28._4_1_ != '\0' && ((undefined4)uStack_30 == 0xffffffff)) ||
            ((undefined4)uStack_30 == pFVar6[1].ComparisonIndex.Value)))) {
          if ((int)((longlong)pFVar6 - (longlong)pFVar2 >> 5) != -1) {
            __return_storage_ptr__->Object = local_78;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_70;
            local_70 = (TReferenceControllerBase<1> *)0x0;
            local_78 = (FStack *)0x0;
            goto LAB_142736adf;
          }
          break;
        }
        pFVar6 = pFVar6 + 4;
      } while (pFVar6 != pFVar2 + (longlong)(local_78->Tabs).ArrayNum * 4);
    }
    __return_storage_ptr__->Object = (FStack *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
LAB_142736adf:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  }
  return __return_storage_ptr__;
}

// FinishRestore @ 142736e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::FinishRestore(FTabManager *this)

{
  return;
}

// FixLayoutLoadingPrimaryArea @ 142736e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FTabManager::FixLayoutLoadingPrimaryArea
          (FTabManager *this,TSharedRef<FTabManager::FArea,1> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  FName *pFVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  FName *pFVar13;
  int iVar14;
  longlong local_b8;
  TReferenceControllerBase<1> *local_b0;
  undefined1 local_a8 [16];
  Type local_98;
  ESidebarLocation local_94;
  float local_90;
  bool local_8c;
  bool local_8b;
  bool local_8a;
  FName local_88;
  FName local_80;
  FName *local_78;
  longlong local_70;
  FName local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  FTab local_58;
  
  ::FName::FName(&local_88,L"LevelEditor");
  ::FName::FName(&local_80,L"HomeScreen");
  bVar3 = UE::Editor::HomeScreen::IsHomeScreenEnabled();
  iVar5 = (int)param_1->Object->_padding_;
  puVar9 = (undefined8 *)param_1->Object->_padding_;
  if ((iVar5 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar11 = puVar9 + (longlong)iVar5 * 2;
  do {
    if (puVar9 == puVar11) {
      return;
    }
    (**(code **)(*(longlong *)*puVar9 + 8))((longlong *)*puVar9,&local_b8);
    local_70 = local_b8;
    if (local_b8 != 0) {
      pFVar13 = *(FName **)(local_b8 + 0x20);
      pFVar8 = pFVar13 + (longlong)*(int *)(local_b8 + 0x28) * 4;
      for (; pFVar13 != pFVar8; pFVar13 = pFVar13 + 4) {
        if (*pFVar13 == local_88) {
          local_a8._0_8_ = *pFVar13;
          local_a8._8_8_ = pFVar13[1];
          local_98 = pFVar13[2].ComparisonIndex.Value;
          local_94 = (ESidebarLocation)pFVar13[2].Number;
          local_90 = (float)pFVar13[3].ComparisonIndex.Value;
          local_8c = SUB41(pFVar13[3].Number,0);
          local_8a = *(bool *)((longlong)&pFVar13[3].Number + 2);
          if (local_8a != false) {
            local_8b = *(bool *)((longlong)&pFVar13[3].Number + 1);
          }
          local_58.TabState = OpenedTab;
          local_58.SidebarLocation = None;
          local_58.SidebarSizeCoefficient = 0.0;
          local_58.bPinnedInSidebar = false;
          local_58.bIsLockedInPlace.bIsSet = false;
          local_68 = local_80;
          uStack_60 = 0xffffffff;
          uStack_5c = CONCAT31(uStack_5c._1_3_,1);
          local_58.TabId._12_4_ = uStack_5c;
          local_58.TabId.InstanceId = -1;
          local_58.TabId.TabType = local_80;
          pFVar13 = *(FName **)(local_b8 + 0x20);
          pFVar8 = pFVar13;
          if (!bVar3) goto joined_r0x0001427370a3;
          goto joined_r0x00014273701b;
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
    puVar9 = puVar9 + 2;
  } while( true );
joined_r0x00014273701b:
  if (pFVar8 == pFVar13 + (longlong)*(int *)(local_b8 + 0x28) * 4) goto LAB_14273704b;
  if ((*pFVar8 == (FName)local_a8._0_8_) &&
     ((((uVar7 = pFVar8[1].ComparisonIndex.Value, uVar7 == 0xffffffff ||
        (local_a8._8_4_ == 0xffffffff)) || (uVar7 == local_a8._8_4_)) &&
      ((pFVar8[2].ComparisonIndex.Value == local_98 &&
       ((ESidebarLocation)pFVar8[2].Number == local_94)))))) {
    iVar5 = (int)((longlong)pFVar8 - (longlong)pFVar13 >> 5);
    goto LAB_142737050;
  }
  pFVar8 = pFVar8 + 4;
  goto joined_r0x00014273701b;
LAB_14273704b:
  iVar5 = -1;
LAB_142737050:
  if (iVar5 == 1) {
    for (pFVar8 = pFVar13; pFVar8 != pFVar13 + (longlong)*(int *)(local_b8 + 0x28) * 4;
        pFVar8 = pFVar8 + 4) {
      if (((*pFVar8 == local_80) && (pFVar8[2].ComparisonIndex.Value == 1)) &&
         ((char)pFVar8[2].Number == '\x02')) {
        iVar5 = (int)((longlong)pFVar8 - (longlong)pFVar13 >> 5);
        goto LAB_1427370dc;
      }
    }
  }
  goto LAB_1427370e2;
joined_r0x0001427370a3:
  if (pFVar8 == pFVar13 + (longlong)*(int *)(local_b8 + 0x28) * 4) goto LAB_1427370d4;
  if (((*pFVar8 == (FName)local_a8._0_8_) &&
      (((uVar7 = pFVar8[1].ComparisonIndex.Value, uVar7 == 0xffffffff ||
        (local_a8._8_4_ == 0xffffffff)) || (uVar7 == local_a8._8_4_)))) &&
     ((pFVar8[2].ComparisonIndex.Value == local_98 &&
      ((ESidebarLocation)pFVar8[2].Number == local_94)))) {
    iVar5 = (int)((longlong)pFVar8 - (longlong)pFVar13 >> 5);
    goto LAB_1427370dc;
  }
  pFVar8 = pFVar8 + 4;
  goto joined_r0x0001427370a3;
LAB_1427370d4:
  iVar5 = -1;
LAB_1427370dc:
  if (iVar5 == 0) goto LAB_142737338;
LAB_1427370e2:
  lVar6 = (longlong)*(int *)(local_b8 + 0x28);
  if (*(int *)(local_b8 + 0x28) != 0) {
    pFVar13 = *(FName **)(local_b8 + 0x20);
    iVar14 = 0;
    bVar4 = *pFVar13 != local_80;
    lVar12 = 0;
    iVar5 = 0;
    local_78 = pFVar13;
    do {
      lVar12 = lVar12 + 1;
      iVar10 = iVar5 + 1;
      if (lVar12 < lVar6) {
        pFVar8 = pFVar13 + lVar12 * 4;
        do {
          if (bVar4 != (*pFVar8 != local_80)) break;
          iVar10 = iVar10 + 1;
          lVar12 = lVar12 + 1;
          pFVar8 = pFVar8 + 4;
        } while (lVar12 < lVar6);
      }
      if (bVar4 != false) {
        if (iVar14 != iVar5) {
          memmove(pFVar13 + (longlong)iVar14 * 4,pFVar13 + (longlong)iVar5 * 4,
                  (longlong)(iVar10 - iVar5) << 5);
          pFVar13 = local_78;
        }
        iVar14 = iVar14 + (iVar10 - iVar5);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar5 = iVar10;
    } while (lVar12 < lVar6);
    *(int *)(local_70 + 0x28) = iVar14;
  }
  uVar7 = local_a8._8_4_;
  if (bVar3) {
    if ((local_b8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_>::Insert
              ((TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_> *)(local_b8 + 0x20),&local_58,
               0);
    uVar7 = local_a8._8_4_;
  }
  if (local_b8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar7 = local_a8._8_4_;
  }
  pFVar13 = *(FName **)(local_b8 + 0x20);
  for (pFVar8 = pFVar13; pFVar8 != pFVar13 + (longlong)*(int *)(local_b8 + 0x28) * 4;
      pFVar8 = pFVar8 + 4) {
    if (((*pFVar8 == (FName)local_a8._0_8_) &&
        (((uVar1 = pFVar8[1].ComparisonIndex.Value, uVar1 == 0xffffffff || (uVar7 == 0xffffffff)) ||
         (uVar1 == uVar7)))) &&
       ((pFVar8[2].ComparisonIndex.Value == local_98 &&
        ((ESidebarLocation)pFVar8[2].Number == local_94)))) {
      uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar13 >> 5);
      goto LAB_1427372b6;
    }
  }
  uVar7 = 0xffffffff;
LAB_1427372b6:
  if (uVar7 != bVar3) {
    if ((local_b8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_>::RemoveAt
              ((TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_> *)(local_b8 + 0x20),uVar7,
               Default);
    if ((local_b8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_>::Insert
              ((TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_> *)(local_b8 + 0x20),
               (FTab *)local_a8,(uint)bVar3);
  }
LAB_142737338:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
  return;
}

// GetAllStacks @ 14273a160

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FTabManager::GetAllStacks
          (TSharedRef<SDockingArea,1> *param_1,
          TArray<TSharedRef<SDockingTabStack,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 local_28;
  TReferenceControllerBase<1> *local_20;
  TArray<TSharedRef<SDockingNode,1>,TSizedDefaultAllocator<32>_> local_18;
  
  SDockingSplitter::GetChildNodesRecursively((SDockingSplitter *)param_1->Object,&local_18);
  uVar6 = 0;
  if (0 < local_18.ArrayNum) {
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < local_18.ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = (**(code **)(**(longlong **)(local_18.AllocatorInstance.Data + lVar7) + 0x248))();
      if (iVar4 == 0) {
        uVar3 = 0;
        if ((int)uVar6 < local_18.ArrayNum) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_28 = *(undefined8 *)(local_18.AllocatorInstance.Data + lVar7);
        local_20 = *(TReferenceControllerBase<1> **)(local_18.AllocatorInstance.Data + lVar7 + 8);
        if (local_20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar5 = (param_2->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_28) &&
            ((FScriptContainerElement *)&local_28 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = param_2->ArrayNum;
        if (iVar4 == param_2->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar4 + 1;
        pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
        *(undefined8 *)pFVar5 = local_28;
        *(TReferenceControllerBase<1> **)(pFVar5 + 8) = local_20;
        if (local_20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_20);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar6 < local_18.ArrayNum);
  }
  DestructItems<TSharedRef<SDockingNode,1>,int>
            ((TSharedRef<SDockingNode,1> *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((TSharedRef<SDockingNode,1> *)local_18.AllocatorInstance.Data !=
      (TSharedRef<SDockingNode,1> *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GetAreaForTabId @ 14273a760

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FTabManager::FArea,1> * __thiscall
FTabManager::GetAreaForTabId
          (FTabManager *this,TSharedRef<FTabManager::FArea,1> *__return_storage_ptr__,
          FTabId *param_1)

{
  longlong lVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TSharedRef<FGlobalTabmanager,1> *pTVar7;
  TSharedRef<FTabManager::FArea,1> *pTVar8;
  TVector2<double>_u_0 *pTVar9;
  TSharedPtr<FTabManager::FArea,1> local_28;
  TVector2<double>_u_0 local_18;
  
  pTVar7 = FGlobalTabmanager::Get();
  GetAreaFromInitialLayoutWithTabType((FTabManager *)pTVar7->Object,&local_28,param_1);
  if (local_28.Object != (FArea *)0x0) {
    if (local_28.Object == (FArea *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TSharedRef<FTabManager::FArea,1> *)(*pcVar3)();
        return pTVar8;
      }
    }
    if ((local_28.Object)->WindowPlacement == Placement_Specified) {
      __return_storage_ptr__->Object = local_28.Object;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (__return_storage_ptr__->Object == (FArea *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TSharedRef<FTabManager::FArea,1> *)(*pcVar3)();
          return pTVar8;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  FVar2 = param_1->TabType;
  local_18 = FallbackWindowSize.field0_0x0;
  uVar5 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  iVar6 = TSet<TTuple<FTabId,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FTabId,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FTabId>
                    ((TSet<TTuple<FTabId,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FTabId,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
                      *)&DefaultTabWindowSizeMap,uVar5 + FVar2.Number ^ param_1->InstanceId,param_1)
  ;
  if (iVar6 != -1) {
    lVar1 = DefaultTabWindowSizeMap._0_8_ + (longlong)iVar6 * 0x28;
    pTVar9 = (TVector2<double>_u_0 *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      pTVar9 = (TVector2<double>_u_0 *)0x0;
    }
    if (pTVar9 != (TVector2<double>_u_0 *)0x0) {
      local_18 = *pTVar9;
    }
  }
  NewArea(__return_storage_ptr__,(TVector2<double> *)&local_18._s_0);
  return __return_storage_ptr__;
}

// GetAreaFromInitialLayoutWithTabType @ 14273a8d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FTabManager::FArea,1> * __thiscall
FTabManager::GetAreaFromInitialLayoutWithTabType
          (FTabManager *this,TSharedPtr<FTabManager::FArea,1> *__return_storage_ptr__,
          FTabId *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FLayout *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  TSharedRef<FGlobalTabmanager,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res20 [8];
  FTabManager *local_68;
  FName local_60;
  code *local_58;
  FTabManager **local_50;
  TSharedRef<FTabManager::FLayoutNode,1> local_48;
  
  pTVar6 = FGlobalTabmanager::Get();
  pTVar2 = (pTVar6->Object->InitialLayoutSP).SharedReferenceCount.ReferenceController;
  pFVar3 = (pTVar6->Object->InitialLayoutSP).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar3 == (FLayout *)0x0) {
LAB_14273a9ed:
    __return_storage_ptr__->Object = (FArea *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar1 = (pFVar3->Areas).ArrayNum;
    pFVar7 = (pFVar3->Areas).AllocatorInstance.Data;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pFVar3->Areas).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedRef<FTabManager::FArea,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar7 == pFVar8) goto LAB_14273a9ed;
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
      local_48.Object = *(FLayoutNode **)pFVar7;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_60 = param_1->TabType;
      local_50 = &local_68;
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FTabManager::HasAnyTabWithTabId'::__l2::<lambda_1>,bool,FTabManager::FTab_const_&>
                 ::Call;
      local_68 = this;
      local_48.SharedReferenceCount.ReferenceController = pTVar4;
      bVar5 = HasAnyMatchingTabs(&local_48,
                                 (TFunctionRef<bool___cdecl(FTabManager::FTab_const_&)> *)&local_58)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      if (bVar5) break;
      pFVar7 = pFVar7 + 0x10;
    }
    __return_storage_ptr__->Object = *(FArea **)pFVar7;
    pTVar4 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetDefaultTabWindowSize @ 14273d710

TVector2<double> * __cdecl
FTabManager::GetDefaultTabWindowSize(TVector2<double> *__return_storage_ptr__,FTabId *param_1)

{
  longlong lVar1;
  FName FVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  double *pdVar6;
  
  FVar2 = param_1->TabType;
  (__return_storage_ptr__->field0_0x0)._s_0 = (TVector2<double>_u_0_s_0)FallbackWindowSize;
  uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  iVar5 = TSet<TTuple<FTabId,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FTabId,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FTabId>
                    ((TSet<TTuple<FTabId,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FTabId,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
                      *)&DefaultTabWindowSizeMap,uVar4 + FVar2.Number ^ param_1->InstanceId,param_1)
  ;
  if (iVar5 != -1) {
    lVar1 = DefaultTabWindowSizeMap._0_8_ + (longlong)iVar5 * 0x28;
    pdVar6 = (double *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      pdVar6 = (double *)0x0;
    }
    if (pdVar6 != (double *)0x0) {
      dVar3 = pdVar6[1];
      (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar6;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetDockingAreaForPanelDrawer @ 14273dd20

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockingArea,1> * __thiscall
FTabManager::GetDockingAreaForPanelDrawer
          (FTabManager *this,TSharedPtr<SDockingArea,1> *__return_storage_ptr__,
          TSharedPtr<SWindow,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  SWindow *pSVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  atomic<int> aVar10;
  ulonglong uVar11;
  SWindow **ppSVar12;
  TSharedPtr<SDockingArea,1> *pTVar13;
  FScriptContainerElement *pFVar14;
  SWindow *pSVar15;
  TReferenceControllerBase<1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  FScriptContainerElement *pFVar18;
  SWindow *pSVar19;
  bool bVar20;
  uint local_res20 [2];
  TReferenceControllerBase<1> *local_80;
  SWindow *local_78;
  SWindow *local_68;
  TReferenceControllerBase<1> *local_60;
  SWindow *local_58;
  TReferenceControllerBase<1> *local_50;
  
  bVar9 = false;
  bVar8 = false;
  local_res20[0] = 0;
  uVar3 = (this->DockAreas).ArrayNum;
  uVar11 = (ulonglong)(int)uVar3;
  pFVar18 = (this->DockAreas).AllocatorInstance.Data;
  pFVar14 = pFVar18 + uVar11 * 0x10;
  local_78 = (SWindow *)0x0;
  local_80 = (TReferenceControllerBase<1> *)0x0;
  do {
    if ((this->DockAreas).ArrayNum != (int)uVar11) {
      local_res20[0] = local_res20[0] & 0xffffff00;
      `TCheckedPointerIterator<TWeakPtr<SDockingArea,1>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res20);
    }
    pSVar15 = (SWindow *)0x0;
    if (pFVar18 == pFVar14) {
      __return_storage_ptr__->Object = (SDockingArea *)local_78;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_80;
      local_80 = (TReferenceControllerBase<1> *)0x0;
      goto LAB_14273dffc;
    }
    pTVar4 = *(TReferenceControllerBase<1> **)(pFVar18 + 8);
    pSVar19 = *(SWindow **)pFVar18;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_14273df6c;
        }
        LOCK();
        aVar10 = pTVar4->SharedReferenceCount;
        bVar20 = aVar2 == aVar10;
        if (bVar20) {
          pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar10 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar10;
      } while (!bVar20);
    }
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pSVar19 = pSVar15;
    }
    pTVar17 = pTVar4;
    if (pSVar19 != (SWindow *)0x0) {
      if (((((TWeakPtr<SWindow,1> *)&pSVar19->_padding_)->Object == (SWindow *)0x0) ||
          (pTVar5 = ((FWeakReferencer<1> *)&pSVar19->_padding_)->ReferenceController,
          pTVar5 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar5->SharedReferenceCount < 1))
      {
        bVar8 = true;
        local_50 = (TReferenceControllerBase<1> *)0x0;
        ppSVar12 = &local_58;
      }
      else {
        local_60 = ((FWeakReferencer<1> *)&pSVar19->_padding_)->ReferenceController;
        bVar9 = true;
        local_68 = (SWindow *)0x0;
        if (local_60 == (TReferenceControllerBase<1> *)0x0) {
LAB_14273de53:
          ppSVar12 = &local_68;
        }
        else {
          aVar2 = local_60->SharedReferenceCount;
          do {
            if (aVar2 == (atomic<int>)0x0) {
              local_60 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_14273de53;
            }
            LOCK();
            aVar10 = local_60->SharedReferenceCount;
            bVar20 = aVar2 == aVar10;
            if (bVar20) {
              local_60->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
              aVar10 = aVar2;
            }
            UNLOCK();
            aVar2 = aVar10;
          } while (!bVar20);
          pSVar15 = ((TWeakPtr<SWindow,1> *)&pSVar19->_padding_)->Object;
          ppSVar12 = &local_68;
          local_68 = pSVar15;
        }
      }
      pSVar6 = ppSVar12[1];
      ppSVar12[1] = (SWindow *)0x0;
      *ppSVar12 = (SWindow *)0x0;
      if (bVar8) {
        bVar8 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
      }
      if (bVar9) {
        bVar9 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60);
      }
      if (pSVar15 == param_1->Object) {
        __return_storage_ptr__->Object = (SDockingArea *)pSVar19;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
LAB_14273dffc:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80);
        return __return_storage_ptr__;
      }
      pTVar5 = local_80;
      if (pSVar15 == (SWindow *)0x0) {
        if ((local_78 != (SWindow *)0x0) &&
           (bVar20 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_6813193255430124459>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                                ,0xc55,"!PrimaryArea"), bVar20)) {
          pcVar7 = (code *)swi(3);
          pTVar13 = (TSharedPtr<SDockingArea,1> *)(*pcVar7)();
          return pTVar13;
        }
        local_78 = pSVar19;
        if (pTVar4 != local_80) {
          pTVar16 = (TReferenceControllerBase<1> *)0x0;
          pTVar17 = (TReferenceControllerBase<1> *)0x0;
          pTVar5 = pTVar4;
          if (local_80 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &local_80->SharedReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            pTVar17 = pTVar16;
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)local_80->_padding_)(local_80);
              LOCK();
              paVar1 = &local_80->WeakReferenceCount;
              aVar2 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar2 == (atomic<int>)0x1) {
                (**(code **)(local_80->_padding_ + 8))(local_80);
              }
            }
          }
        }
      }
      local_80 = pTVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar6);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
LAB_14273df6c:
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4);
      }
    }
    pFVar18 = pFVar18 + 0x10;
    uVar11 = (ulonglong)uVar3;
  } while( true );
}

// GetDockingAreaForWindow @ 14273e030

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockingArea,1> * __thiscall
FTabManager::GetDockingAreaForWindow
          (FTabManager *this,TSharedPtr<SDockingArea,1> *__return_storage_ptr__,
          TSharedRef<SWindow,1> *param_1)

{
  uint uVar1;
  SWindow *pSVar2;
  SDockingArea *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  atomic<int> aVar8;
  int iVar9;
  atomic<int> aVar10;
  SWindow **ppSVar11;
  ulonglong uVar12;
  SWindow *pSVar13;
  SWindow *pSVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  bool bVar17;
  undefined4 local_res20 [2];
  SWindow *local_60;
  TReferenceControllerBase<1> *local_58;
  SWindow *local_50;
  TReferenceControllerBase<1> *local_48;
  
  bVar6 = false;
  bVar5 = false;
  local_res20[0] = 0;
  pFVar16 = (this->DockAreas).AllocatorInstance.Data;
  uVar1 = (this->DockAreas).ArrayNum;
  uVar12 = (ulonglong)(int)uVar1;
  pFVar15 = pFVar16 + uVar12 * 0x10;
  do {
    if ((this->DockAreas).ArrayNum != (int)uVar12) {
      `TCheckedPointerIterator<TWeakPtr<SDockingArea,1>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res20);
    }
    pSVar14 = (SWindow *)0x0;
    if (pFVar16 == pFVar15) {
      __return_storage_ptr__->Object = (SDockingArea *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    pSVar2 = *(SWindow **)(pFVar16 + 8);
    pSVar13 = pSVar2;
    if (pSVar2 != (SWindow *)0x0) {
      iVar7 = (int)pSVar2->_padding_;
      do {
        pSVar13 = pSVar14;
        if (iVar7 == 0) goto LAB_14273e0c2;
        LOCK();
        iVar9 = (int)pSVar2->_padding_;
        bVar17 = iVar7 == iVar9;
        if (bVar17) {
          *(int *)&pSVar2->_padding_ = iVar7 + 1;
          iVar9 = iVar7;
        }
        UNLOCK();
        iVar7 = iVar9;
      } while (!bVar17);
      pSVar3 = *(SDockingArea **)pFVar16;
      pSVar13 = pSVar2;
      if (pSVar3 != (SDockingArea *)0x0) {
        if ((((pSVar3->ParentWindowPtr).Object == (SWindow *)0x0) ||
            (pTVar4 = (pSVar3->ParentWindowPtr).WeakReferenceCount.ReferenceController,
            pTVar4 == (TReferenceControllerBase<1> *)0x0)) ||
           ((int)pTVar4->SharedReferenceCount < 1)) {
          bVar5 = true;
          local_48 = (TReferenceControllerBase<1> *)0x0;
          ppSVar11 = &local_50;
        }
        else {
          local_58 = (pSVar3->ParentWindowPtr).WeakReferenceCount.ReferenceController;
          bVar6 = true;
          local_60 = (SWindow *)0x0;
          if (local_58 == (TReferenceControllerBase<1> *)0x0) {
LAB_14273e143:
            ppSVar11 = &local_60;
          }
          else {
            aVar8 = local_58->SharedReferenceCount;
            do {
              if (aVar8 == (atomic<int>)0x0) {
                local_58 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_14273e143;
              }
              LOCK();
              aVar10 = local_58->SharedReferenceCount;
              bVar17 = aVar8 == aVar10;
              if (bVar17) {
                local_58->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
                aVar10 = aVar8;
              }
              UNLOCK();
              aVar8 = aVar10;
            } while (!bVar17);
            pSVar14 = (pSVar3->ParentWindowPtr).Object;
            ppSVar11 = &local_60;
            local_60 = pSVar14;
          }
        }
        pSVar13 = ppSVar11[1];
        ppSVar11[1] = (SWindow *)0x0;
        *ppSVar11 = (SWindow *)0x0;
        if (bVar5) {
          bVar5 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_48);
        }
        if (bVar6) {
          bVar6 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58);
        }
        if ((pSVar14 != (SWindow *)0x0) && (pSVar14 == param_1->Object)) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pSVar13);
          __return_storage_ptr__->Object = pSVar3;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)pSVar2;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          return __return_storage_ptr__;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar13);
        pSVar13 = pSVar2;
      }
    }
LAB_14273e0c2:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar13);
    pFVar16 = pFVar16 + 0x10;
    uVar12 = (ulonglong)uVar1;
  } while( true );
}

// GetLocalWorkspaceMenuRoot @ 14273f890

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FWorkspaceItem,1> * __thiscall
FTabManager::GetLocalWorkspaceMenuRoot
          (FTabManager *this,TSharedRef<FWorkspaceItem,1> *__return_storage_ptr__)

{
  TSharedPtr<FWorkspaceItem,1>::ToSharedRef(&this->LocalWorkspaceMenuRoot,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateApi @ 142743450

/* WARNING: Enum "Type": Some values do not have unique names */

FPrivateApi * __thiscall FTabManager::GetPrivateApi(FTabManager *this)

{
  return (this->PrivateApi).Object;
}

// GetRecordableStats @ 142743600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::GetRecordableStats
          (FTabManager *this,int *param_1,
          TArray<TSharedPtr<SWindow,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  SWindow *pSVar1;
  SDockingArea *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  uint uVar8;
  int iVar9;
  SWindow **ppSVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  SWindow *pSVar14;
  SWindow *pSVar15;
  uint uVar16;
  TArray<TSharedRef<SDockingTabStack,1>,TSizedDefaultAllocator<32>_> local_78;
  SWindow *local_68;
  TReferenceControllerBase<1> *local_60;
  TSharedPtr<SWindow,1> local_58;
  SWindow *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedRef<SDockingArea,1> local_38;
  
  uVar16 = 0;
  *param_1 = 0;
  uVar13 = uVar16;
  do {
    while( true ) {
      if (((int)uVar16 < 0) || ((this->DockAreas).ArrayNum <= (int)uVar16)) {
        return;
      }
      if (((int)uVar16 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pSVar15 = (SWindow *)0x0;
      pFVar12 = (this->DockAreas).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x10;
      pSVar1 = *(SWindow **)(pFVar12 + 8);
      pSVar14 = pSVar1;
      if (pSVar1 != (SWindow *)0x0) break;
LAB_1427436c7:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar14);
      uVar16 = uVar16 + 1;
    }
    aVar5 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar14 = pSVar15;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1427436c7;
      LOCK();
      aVar7 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar5 == aVar7;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar6);
    pSVar2 = *(SDockingArea **)pFVar12;
    pSVar14 = pSVar1;
    if (pSVar2 == (SDockingArea *)0x0) goto LAB_1427436c7;
    if ((((pSVar2->ParentWindowPtr).Object == (SWindow *)0x0) ||
        (pTVar3 = (pSVar2->ParentWindowPtr).WeakReferenceCount.ReferenceController,
        pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
      uVar13 = uVar13 | 2;
      local_40 = (TReferenceControllerBase<1> *)0x0;
      ppSVar10 = &local_48;
    }
    else {
      local_60 = (pSVar2->ParentWindowPtr).WeakReferenceCount.ReferenceController;
      uVar13 = uVar13 | 1;
      local_68 = (SWindow *)0x0;
      if (local_60 == (TReferenceControllerBase<1> *)0x0) {
LAB_142743732:
        ppSVar10 = &local_68;
      }
      else {
        aVar5 = local_60->SharedReferenceCount;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            local_60 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_142743732;
          }
          LOCK();
          aVar7 = local_60->SharedReferenceCount;
          bVar6 = aVar5 == aVar7;
          if (bVar6) {
            local_60->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar7 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar7;
        } while (!bVar6);
        pSVar15 = (pSVar2->ParentWindowPtr).Object;
        ppSVar10 = &local_68;
        local_68 = pSVar15;
      }
    }
    local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)ppSVar10[1];
    local_58.Object = pSVar15;
    ppSVar10[1] = (SWindow *)0x0;
    *ppSVar10 = (SWindow *)0x0;
    if ((uVar13 & 2) != 0) {
      uVar13 = uVar13 & 0xfffffffd;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    }
    if ((uVar13 & 1) != 0) {
      uVar13 = uVar13 & 0xfffffffe;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    }
    if (local_58.Object != (SWindow *)0x0) {
      TArray<TSharedPtr<SWindow,1>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TSharedPtr<SWindow,1>_const_&>(param_2,&local_58);
    }
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    LOCK();
    *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pSVar1->_padding_ + 1);
    UNLOCK();
    local_38.Object = pSVar2;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar1;
    GetAllStacks(&local_38,&local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar1);
    for (uVar11 = 0; (-1 < (int)uVar11 && ((int)uVar11 < local_78.ArrayNum)); uVar11 = uVar11 + 1) {
      uVar8 = 0;
      if ((int)uVar11 < local_78.ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = (**(code **)(**(longlong **)
                             &local_78.AllocatorInstance.Data[(longlong)(int)uVar11 * 0x10].
                              field_0x0 + 0x270))();
      *param_1 = *param_1 + iVar9;
    }
    DestructItems<TSharedRef<SDockingTabStack,1>,int>
              ((TSharedRef<SDockingTabStack,1> *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
    if ((TSharedRef<SDockingTabStack,1> *)local_78.AllocatorInstance.Data !=
        (TSharedRef<SDockingTabStack,1> *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar1);
    uVar16 = uVar16 + 1;
  } while( true );
}

// GetTabLabelBasedOnSpawner @ 142744330

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
FTabManager::GetTabLabelBasedOnSpawner
          (FTabManager *this,FText *__return_storage_ptr__,TSharedPtr<FTabSpawnerEntry,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<ITextData> TVar3;
  bool bVar4;
  FText *pFVar5;
  FTabSpawnerEntry *pFVar6;
  FText *pFVar7;
  ITextData *pIVar8;
  TRefCountPtr<ITextData> TVar9;
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  FText local_60;
  FText local_50;
  FText local_40;
  
  local_res18[0] = 0;
  if (param_1->Object == (FTabSpawnerEntry *)0x0) {
    pFVar5 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar8 = (pFVar5->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar8;
    if (pIVar8 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar8 + 8))(pIVar8,local_res18);
    }
    __return_storage_ptr__->Flags = pFVar5->Flags;
    return __return_storage_ptr__;
  }
  pFVar5 = FText::GetEmpty();
  local_60.TextData.Reference = (pFVar5->TextData).Reference;
  if (local_60.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_60.TextData.Reference + 8))
              (local_60.TextData.Reference,local_res20);
  }
  local_60.Flags = pFVar5->Flags;
  if (param_1->Object == (FTabSpawnerEntry *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar1)();
      return pFVar5;
    }
  }
  if (param_1->Object->bHiddenTabName == false) {
    if (param_1->Object == (FTabSpawnerEntry *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar1)();
        return pFVar5;
      }
    }
    pFVar5 = TAttribute<FText>::Get((TAttribute<FText> *)&param_1->Object->_padding_);
    bVar4 = FText::IsEmpty(pFVar5);
    if (bVar4) {
      pFVar6 = TSharedPtr<FTabSpawnerEntry,1>::operator->(param_1);
      pFVar7 = FText::FromName(&local_40,&pFVar6->TabType);
      bVar2 = true;
      bVar4 = false;
      pIVar8 = (pFVar7->TextData).Reference;
      TVar9.Reference = local_50.TextData.Reference;
    }
    else {
      pFVar6 = TSharedPtr<FTabSpawnerEntry,1>::operator->(param_1);
      pFVar5 = TAttribute<FText>::Get((TAttribute<FText> *)&pFVar6->_padding_);
      pIVar8 = (pFVar5->TextData).Reference;
      local_50.TextData.Reference = pIVar8;
      if (pIVar8 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar8 + 8))(pIVar8,local_68);
      }
      pFVar7 = &local_50;
      local_50.Flags = pFVar5->Flags;
      bVar2 = false;
      bVar4 = true;
      TVar9.Reference = pIVar8;
    }
    TVar3.Reference = local_60.TextData.Reference;
    if (local_60.TextData.Reference != pIVar8) {
      local_60.TextData.Reference = pIVar8;
      if (pIVar8 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar8 + 8))(pIVar8,local_64);
      }
      if (TVar3.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar3.Reference + 0x10))(TVar3.Reference);
      }
    }
    local_60.Flags = pFVar7->Flags;
    if ((bVar4) && (TVar9.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*TVar9.Reference + 0x10))(TVar9.Reference);
    }
    if ((bVar2) && (local_40.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
    }
  }
  FText::FText(__return_storage_ptr__,&local_60);
  if (local_60.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetTabPermissionList @ 142744900

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FNamePermissionList,1> * __thiscall FTabManager::GetTabPermissionList(FTabManager *this)

{
  return &this->TabPermissionList;
}

// GetTabReadOnlyBehavior @ 142744910

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<ETabReadOnlyBehavior> __thiscall
FTabManager::GetTabReadOnlyBehavior(FTabManager *this,FTabId *param_1)

{
  FName FVar1;
  FTabSpawnerEntry *pFVar2;
  TSharedRef<FTabSpawnerEntry,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FName *in_R8;
  
  FVar1 = *in_R8;
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pTVar3 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
           ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                   *)&this->TabSpawner,FVar1);
  if ((pTVar3 == (TSharedRef<FTabSpawnerEntry,1> *)0x0) &&
     (pTVar3 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
               ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                       *)(this->NomadTabSpawner).Object,FVar1),
     pTVar3 == (TSharedRef<FTabSpawnerEntry,1> *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar4 = (pTVar3->SharedReferenceCount).ReferenceController;
    pFVar2 = pTVar3->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pFVar2 != (FTabSpawnerEntry *)0x0) {
      (param_1->TabType).ComparisonIndex.Value = pFVar2->ReadOnlyBehavior;
      *(undefined1 *)&(param_1->TabType).Number = 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return (TOptional<ETabReadOnlyBehavior>)param_1;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined1 *)&(param_1->TabType).Number = 0;
  return (TOptional<ETabReadOnlyBehavior>)param_1;
}

// GetUIActionForTabSpawnerMenuEntry @ 142745120

/* WARNING: Enum "Type": Some values do not have unique names */

FUIAction * __thiscall
FTabManager::GetUIActionForTabSpawnerMenuEntry
          (FTabManager *this,FUIAction *__return_storage_ptr__,
          TSharedPtr<FTabSpawnerEntry,1> *param_1)

{
  atomic<int> aVar1;
  FTabSpawnerEntry *pFVar2;
  FTabManager *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FUIAction *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  TSharedRef<FTabManager,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  FUIAction *pFVar12;
  atomic<int> *paVar13;
  FUIAction *pFVar14;
  undefined1 local_148 [8];
  FDelegateAllocation local_140;
  undefined1 local_130 [8];
  FDelegateAllocation local_128;
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  code *local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  bool local_f0;
  FDelegateAllocation *local_e8;
  TSharedRef<FTabManager,1> local_e0;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  
  bVar5 = false;
  if ((param_1->Object == (FTabSpawnerEntry *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FUIAction *)(*pcVar4)();
    return pFVar7;
  }
  pFVar7 = (FUIAction *)(param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pFVar7 != (FUIAction *)0x0) {
    LOCK();
    paVar13 = (atomic<int> *)&(pFVar7->ExecuteAction).field_0x8;
    *paVar13 = (atomic<int>)((int)*paVar13 + 1);
    UNLOCK();
  }
  if ((pFVar2 == (FTabSpawnerEntry *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FUIAction *)(*pcVar4)();
    return pFVar7;
  }
  local_118 = (undefined1  [8])0x0;
  local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_110.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_88);
  local_70 = &local_110;
  puVar8 = UE::Core::Private::DelegateAllocate(0x38,&local_110);
  pFVar12 = __return_storage_ptr__;
  if (puVar8 != (undefined8 *)0x0) {
    uStack_f8 = 0;
    local_100 = FTabSpawnerEntry::IsSoleTabInstanceSpawned;
    uStack_f4 = local_e0.SharedReferenceCount.ReferenceController._4_4_;
    if (pFVar7 != (FUIAction *)0x0) {
      LOCK();
      paVar13 = (atomic<int> *)&(pFVar7->ExecuteAction).field_0x8;
      *paVar13 = (atomic<int>)((int)*paVar13 + 1);
      UNLOCK();
    }
    *puVar8 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBUFTabSpawnerEntry___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar8[3] = pFVar2;
    puVar8[4] = pFVar7;
    if (pFVar7 != (FUIAction *)0x0) {
      LOCK();
      paVar13 = (atomic<int> *)&(pFVar7->ExecuteAction).field_0xc;
      *paVar13 = (atomic<int>)((int)*paVar13 + 1);
      UNLOCK();
    }
    bVar5 = true;
    puVar8[5] = local_100;
    puVar8[6] = CONCAT44(uStack_f4,uStack_f8);
    pFVar12 = pFVar7;
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar12);
  }
  bVar5 = false;
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  pTVar11 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_130 = (undefined1  [8])0x0;
  local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_128.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_130,
             (FWriteAccessScope *)&local_100);
  local_e8 = &local_128;
  puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_128);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy__V__TWeakPtr_UFTabSpawnerEntry___00____6B_
    ;
    puVar8[1] = pFVar2;
    puVar8[2] = pTVar11;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[3] = uVar9;
    *puVar8 = &
              ___7__TBaseStaticDelegateInstance___A6A_NXZUFDefaultDelegateUserPolicy__V__TWeakPtr_UFTabSpawnerEntry___00____6B_
    ;
    puVar8[4] = `FTabManager::GetUIActionForTabSpawnerMenuEntry'::__l2::<lambda_1>::
                <lambda_invoker_cdecl>;
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
  }
  if (local_f0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_f4,uStack_f8),
               (FDestructionSentinel *)&local_100);
  }
  if ((param_1->Object == (FTabSpawnerEntry *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FUIAction *)(*pcVar4)();
    return pFVar7;
  }
  pFVar2 = param_1->Object;
  pTVar10 = TSharedFromThis<FTabManager,1>::AsShared
                      ((TSharedFromThis<FTabManager,1> *)&this->_padding_,&local_e0);
  pFVar12 = (FUIAction *)(pTVar10->SharedReferenceCount).ReferenceController;
  pFVar3 = pTVar10->Object;
  if (pFVar12 == (FUIAction *)0x0) {
    paVar13 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar13 = (atomic<int> *)&(pFVar12->ExecuteAction).field_0x8;
    LOCK();
    *paVar13 = (atomic<int>)((int)*paVar13 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_e0.SharedReferenceCount.ReferenceController._4_4_,
                      local_e0.SharedReferenceCount.ReferenceController._0_4_));
  local_148 = (undefined1  [8])0x0;
  local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_140.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
             (FWriteAccessScope *)&local_68);
  local_50 = &local_140;
  puVar8 = UE::Core::Private::DelegateAllocate(0x38,&local_140);
  pFVar14 = __return_storage_ptr__;
  if (puVar8 != (undefined8 *)0x0) {
    local_100 = InvokeTabForMenu;
    uStack_f4 = local_e0.SharedReferenceCount.ReferenceController._4_4_;
    uStack_f8 = 0;
    if (pFVar12 != (FUIAction *)0x0) {
      LOCK();
      *paVar13 = (atomic<int>)((int)*paVar13 + 1);
      UNLOCK();
    }
    bVar5 = true;
    *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__VFName____6B_
    ;
    *(FName *)(puVar8 + 1) = pFVar2->TabType;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFTabManager___00__A6AXXZUFDefaultDelegateUserPolicy__VFName____6B_
    ;
    puVar8[3] = pFVar3;
    puVar8[4] = pFVar12;
    if (pFVar12 != (FUIAction *)0x0) {
      LOCK();
      paVar13 = (atomic<int> *)&(pFVar12->ExecuteAction).field_0xc;
      *paVar13 = (atomic<int>)((int)*paVar13 + 1);
      UNLOCK();
    }
    puVar8[5] = local_100;
    puVar8[6] = CONCAT44(uStack_f4,uStack_f8);
    pFVar14 = pFVar12;
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar14);
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  *(undefined8 *)&__return_storage_ptr__->ExecuteAction = 0;
  *(undefined8 *)&(__return_storage_ptr__->ExecuteAction).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->ExecuteAction).field_0x10 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&__return_storage_ptr__->ExecuteAction,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_148);
  *(undefined8 *)&__return_storage_ptr__->CanExecuteAction = 0;
  *(undefined8 *)&(__return_storage_ptr__->CanExecuteAction).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->CanExecuteAction).field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&__return_storage_ptr__->CanExecuteAction,
             (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_130);
  TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
  CreateStatic<TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_&>
            (&__return_storage_ptr__->GetActionCheckState,FUIAction::IsActionCheckedPassthrough,
             (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_118);
  *(undefined8 *)&(__return_storage_ptr__->IsActionVisibleDelegate).field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->IsActionVisibleDelegate = 0;
  *(undefined8 *)&(__return_storage_ptr__->IsActionVisibleDelegate).field_0x8 = 0;
  __return_storage_ptr__->RepeatMode = RepeatDisabled;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
             (FWriteAccessScope *)&local_d0);
  if ((local_140.DelegateSize != 0) &&
     (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_140.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_140,0,0,0x10);
    local_140.DelegateSize = 0;
  }
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  if (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_140.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_148);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_130,
             (FWriteAccessScope *)&local_b8);
  if ((local_128.DelegateSize != 0) &&
     (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_128,0,0,0x10);
    local_128.DelegateSize = 0;
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_128.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_130);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_a0);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_110,0,0,0x10);
    local_110.DelegateSize = 0;
  }
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_110.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_118);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar13 = &pTVar11->WeakReferenceCount;
    aVar1 = *paVar13;
    *paVar13 = (atomic<int>)((int)*paVar13 + -1);
    UNLOCK();
    if (aVar1 == (atomic<int>)0x1) {
      (**(code **)(pTVar11->_padding_ + 8))(pTVar11,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// HandleClosingAreaPanelDrawerData @ 142746760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::HandleClosingAreaPanelDrawerData(FTabManager *this,TSharedPtr<SDockingArea,1> *param_1)

{
  ulonglong uVar1;
  SDockTab *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  TSharedPtr<SDockingArea,1> *pTVar4;
  longlong *plVar5;
  bool bVar6;
  atomic<int> aVar7;
  FTabManager *pFVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  FTabManager *pFVar12;
  uint uVar13;
  uint uVar14;
  FTabManager *pFVar15;
  uint *puVar16;
  FTabManager *pFVar17;
  undefined1 auStack_158 [32];
  undefined1 local_138 [8];
  longlong *local_130;
  int iStack_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  undefined4 uStack_118;
  uint uStack_114;
  int local_110;
  uint uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  int local_100;
  int local_fc;
  TSharedPtr<SDockingArea,1> *local_f8;
  TSharedPtr<FTabManager,1> local_f0;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  TSharedPtr<SDockingArea,1> local_b0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (param_1->Object != (SDockingArea *)0x0) {
    local_f8 = param_1;
    SDockingArea::GetPanelDrawerKeepAliveTabs
              (param_1->Object,
               (TMap<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
                *)local_98);
    uVar14 = local_70;
    iStack_128 = 0;
    uStack_124 = 1;
    local_110 = 0;
    uStack_114 = 0;
    if (local_70 != 0) {
      puVar16 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar16 = local_78;
      }
      uVar13 = *puVar16;
      local_110 = 0;
      while (uVar13 == 0) {
        lVar10 = (longlong)iStack_128;
        local_110 = local_110 + 0x20;
        iStack_128 = iStack_128 + 1;
        uStack_114 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_128)
        goto LAB_142746831;
        uVar13 = puVar16[lVar10 + 1];
      }
      uStack_124 = -uVar13 & uVar13;
      uVar1 = (ulonglong)uStack_124 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_100 = (int)lVar10;
      uStack_114 = local_110 + -1 + local_100;
      if ((int)local_70 < (int)uStack_114) {
        uStack_114 = local_70;
      }
    }
LAB_142746831:
    local_130 = (longlong *)local_98;
    local_120 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uVar13 = local_70 & 0xffffffe0;
    iStack_108 = local_98._8_4_ - local_64;
    uStack_118 = 0xffffffff;
    TStack_d8.CurrentBitIndex = uStack_114;
    TStack_d8.UnvisitedBitMask = 0xffffffff;
    TStack_d8._padding_ = CONCAT44(uStack_124,iStack_128);
    iVar11 = (int)local_70 >> 5;
    TStack_d8._28_4_ = uStack_114;
    TStack_d8.BaseBitIndex = local_110;
    uStack_b8 = CONCAT44(uStack_104,iStack_108);
    bVar9 = (byte)local_70;
    uStack_10c = uStack_114;
    local_e0 = local_130;
    TStack_d8.Array = local_120;
    if (((int)local_70 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar14 != local_70) {
      puVar16 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar16 = local_78;
      }
      uVar14 = -1 << (bVar9 & 0x1f) & puVar16[iVar11];
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar11;
        uVar13 = uVar13 + 0x20;
        iVar11 = iVar11 + 1;
        uVar14 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_142746941;
        uVar14 = puVar16[lVar10 + 1];
      }
      uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_fc = (int)lVar10;
      uVar14 = local_fc + -1 + uVar13;
      if ((int)local_70 < (int)uVar14) {
        uVar14 = local_70;
      }
    }
LAB_142746941:
    pFVar17 = (FTabManager *)0x0;
    while( true ) {
      plVar5 = local_e0;
      if ((int)local_e0[1] - *(int *)((longlong)local_e0 + 0x34) != (int)uStack_b8) {
        local_138[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FTabId,TSharedRef<SDockTab,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_138);
      }
      pTVar4 = local_f8;
      if (((TStack_d8.CurrentBitIndex == uVar14) &&
          (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar5 == (longlong *)local_98)) break;
      pFVar8 = (FTabManager *)this->_padding_;
      lVar10 = *plVar5 + (longlong)TStack_d8.CurrentBitIndex * 0x28;
      this_00 = *(SDockTab **)(lVar10 + 0x10);
      pFVar12 = pFVar8;
      pFVar15 = pFVar17;
      if (pFVar8 != (FTabManager *)0x0) {
        aVar3 = *(atomic<int> *)&pFVar8->_padding_;
        do {
          pFVar12 = pFVar17;
          if (aVar3 == (atomic<int>)0x0) goto LAB_1427469d5;
          LOCK();
          aVar7 = *(atomic<int> *)&pFVar8->_padding_;
          bVar6 = aVar3 == aVar7;
          if (bVar6) {
            *(atomic<int> *)&pFVar8->_padding_ = (atomic<int>)((int)aVar3 + 1);
            aVar7 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar7;
        } while (!bVar6);
        pFVar12 = pFVar8;
        pFVar15 = (FTabManager *)this->_padding_;
      }
LAB_1427469d5:
      pFVar8 = (FTabManager *)&pFVar15->_padding_;
      if (pFVar15 == (FTabManager *)0x0) {
        pFVar8 = pFVar17;
      }
      if ((pFVar8 != (FTabManager *)&this->_padding_) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("SharedThis.Get() == this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x67f,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (pFVar15 == (FTabManager *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x416,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x26c,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pFVar12 != (FTabManager *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar12->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pFVar12->_padding_ + 1);
        UNLOCK();
      }
      local_f0.Object = pFVar15;
      local_f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar12;
      SDockTab::SetTabManager(this_00,&local_f0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar12);
      local_b0.Object = (SDockingArea *)0x0;
      local_b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      SDockTab::SetParentDockingArea(*(SDockTab **)(lVar10 + 0x10),&local_b0);
      TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
    }
    if ((local_f8->Object == (SDockingArea *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    SDockingArea::CleanPanelDrawer(pTVar4->Object);
    TMap<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
    ::Append<FDefaultSetAllocator>
              (&this->PanelDrawerActiveHiddenTabs,
               (TMap<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
                *)local_98);
    local_50 = 0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<FTabId,TSharedRef<SDockTab,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FTabId,TSharedRef<SDockTab,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FTabId,TSharedRef<SDockTab,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  return;
}

// HasAnyMatchingTabs @ 142746c60

bool __cdecl
FTabManager::HasAnyMatchingTabs
          (TSharedRef<FTabManager::FLayoutNode,1> *param_1,
          TFunctionRef<bool___cdecl(FTabManager::FTab_const_&)> *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar9;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar10;
  longlong local_28;
  TReferenceControllerBase<1> *local_20;
  longlong local_18;
  TReferenceControllerBase<1> *local_10;
  
  (**(code **)(param_1->Object->_padding_ + 0x10))(param_1->Object,&local_18);
  (**(code **)(param_1->Object->_padding_ + 8))();
  if (local_28 == 0) {
    if (local_18 == 0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6813193255430124747>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                         ,0xb35,"AsSplitter.IsValid()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if ((local_18 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    iVar7 = *(int *)(local_18 + 0x30);
    pTVar9 = *(TSharedRef<FTabManager::FLayoutNode,1> **)(local_18 + 0x28);
    if ((iVar7 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pTVar10 = pTVar9 + iVar7;
    for (; pTVar9 != pTVar10; pTVar9 = pTVar9 + 1) {
      bVar4 = HasAnyMatchingTabs(pTVar9,param_2);
      if (bVar4) {
        bVar4 = true;
        goto LAB_142746dfa;
      }
    }
    bVar4 = false;
  }
  else {
    if ((local_28 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    lVar1 = *(longlong *)(local_28 + 0x20);
    iVar7 = *(int *)(local_28 + 0x28);
    pcVar3 = *(code **)param_2;
    uVar2 = *(undefined8 *)&param_2->field_0x8;
    for (lVar8 = lVar1; lVar8 != (longlong)iVar7 * 0x20 + lVar1; lVar8 = lVar8 + 0x20) {
      cVar6 = (*pcVar3)(uVar2,lVar8);
      if (cVar6 != '\0') {
        iVar7 = (int)(lVar8 - lVar1 >> 5);
        goto LAB_142746d1a;
      }
    }
    iVar7 = -1;
LAB_142746d1a:
    bVar4 = iVar7 != -1;
  }
LAB_142746dfa:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return bVar4;
}

// HasAnyTabWithTabId @ 142746e30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTabManager::HasAnyTabWithTabId
          (FTabManager *this,TSharedRef<FTabManager::FLayoutNode,1> *param_1,FName *param_2)

{
  bool bVar1;
  FTabManager *local_28;
  FName local_20;
  code *local_18;
  FTabManager **local_10;
  
  local_20 = *param_2;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FTabManager::HasAnyTabWithTabId'::__l2::<lambda_1>,bool,FTabManager::FTab_const_&>
             ::Call;
  local_28 = this;
  bVar1 = HasAnyMatchingTabs(param_1,(TFunctionRef<bool___cdecl(FTabManager::FTab_const_&)> *)
                                     &local_18);
  return bVar1;
}

// HasPanelDrawer @ 142747340

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTabManager::HasPanelDrawer(FTabManager *this,TSharedPtr<SWindow,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedPtr<SDockingArea,1> local_18;
  
  GetDockingAreaForPanelDrawer(this,&local_18,param_1);
  if (local_18.Object == (SDockingArea *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return false;
  }
  if (local_18.Object == (SDockingArea *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (((((local_18.Object)->PanelDrawerPtr).Object != (SPanelDrawerArea *)0x0) &&
      (pTVar1 = ((local_18.Object)->PanelDrawerPtr).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return false;
}

// HasTabSpawner @ 142748af0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTabManager::HasTabSpawner(FTabManager *this,FName param_1)

{
  TSharedRef<FTabSpawnerEntry,1> *pTVar1;
  bool bVar2;
  
  pTVar1 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
           ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                   *)&this->TabSpawner,param_1);
  bVar2 = false;
  if (pTVar1 == (TSharedRef<FTabSpawnerEntry,1> *)0x0) {
    pTVar1 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
             ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                     *)(this->NomadTabSpawner).Object,param_1);
    bVar2 = pTVar1 == (TSharedRef<FTabSpawnerEntry,1> *)0x0;
  }
  return !bVar2;
}

// HasValidOpenTabs @ 142748b40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTabManager::HasValidOpenTabs(FTabManager *this,TSharedRef<FTabManager::FLayoutNode,1> *param_1)

{
  bool bVar1;
  FTabManager *local_res8 [4];
  code *local_18;
  FTabManager **local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FTabManager::HasValidOpenTabs'::__l2::<lambda_1>,bool,FTabManager::FTab_const_&>
             ::Call;
  local_res8[0] = this;
  bVar1 = HasAnyMatchingTabs(param_1,(TFunctionRef<bool___cdecl(FTabManager::FTab_const_&)> *)
                                     &local_18);
  return bVar1;
}

// HasValidTabs @ 142748b80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTabManager::HasValidTabs(FTabManager *this,TSharedRef<FTabManager::FLayoutNode,1> *param_1)

{
  bool bVar1;
  FTabManager *local_res8 [4];
  code *local_18;
  FTabManager **local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FTabManager::HasValidTabs'::__l2::<lambda_1>,bool,FTabManager::FTab_const_&>
             ::Call;
  local_res8[0] = this;
  bVar1 = HasAnyMatchingTabs(param_1,(TFunctionRef<bool___cdecl(FTabManager::FTab_const_&)> *)
                                     &local_18);
  return bVar1;
}

// InsertDocumentTab @ 1427496c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::InsertDocumentTab
          (FTabManager *this,FName param_1,FName param_2,FSearchPreference *param_3,
          TSharedRef<SDockTab,1> *param_4,bool param_5)

{
  SDockTab *this_00;
  code *pcVar1;
  bool bVar2;
  FTabId *pFVar3;
  TSharedPtr<SDockingTabStack,1> *pTVar4;
  FTabId local_68;
  TSharedPtr<SDockingTabStack,1> local_58;
  FTabId local_48;
  FTabMatcher local_38;
  
  pFVar3 = SDockTab::GetLayoutIdentifier(param_4->Object,&local_48);
  local_38.RequiredTabState = SidebarTab|ClosedTab|OpenedTab;
  local_38.TreatIndexNoneAsWildcard = true;
  local_38.TabIdToMatch.TabType = pFVar3->TabType;
  local_38.TabIdToMatch.InstanceId = pFVar3->InstanceId;
  local_38.TabIdToMatch.Flags = pFVar3->Flags;
  local_38.TabIdToMatch._13_3_ = *(undefined3 *)&pFVar3->field_0xd;
  pTVar4 = FindTabInLiveAreas(this,&local_58,&local_38);
  if (pTVar4->Object == (SDockingTabStack *)0x0) {
    bVar2 = true;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6813193255430125744>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                       ,0x750,
                       "! FindTabInLiveAreas( FTabMatcher(UnmanagedTab->GetLayoutIdentifier()) ).IsValid()"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  local_68.InstanceId = this->LastDocumentUID;
  this_00 = param_4->Object;
  local_68.Flags = SaveLayout;
  this->LastDocumentUID = local_68.InstanceId + 1;
  local_68.TabType = param_2;
  SDockTab::SetLayoutIdentifier(this_00,&local_68);
  if (bVar2) {
    (**(code **)(this->_padding_ + 0x18))(this,param_1,param_3,param_4);
  }
  (**(code **)this->_padding_)(this,param_4);
  if (param_5) {
    SDockTab::PlaySpawnAnim(param_4->Object);
  }
  return;
}

// InsertDocumentTab @ 1427497f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::InsertDocumentTab
          (FTabManager *this,FName param_1,FSearchPreference *param_2,
          TSharedRef<SDockTab,1> *param_3,bool param_4)

{
  InsertDocumentTab(this,param_1,param_1,param_2,param_3,param_4);
  return;
}

// InsertNewDocumentTab @ 142749820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::InsertNewDocumentTab
          (FTabManager *this,FName param_1,FName param_2,FSearchPreference *param_3,
          TSharedRef<SDockTab,1> *param_4)

{
  InsertDocumentTab(this,param_1,param_2,param_3,param_4,true);
  return;
}

// InsertNewDocumentTab @ 142749850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::InsertNewDocumentTab
          (FTabManager *this,FName param_1,FSearchPreference *param_2,
          TSharedRef<SDockTab,1> *param_3)

{
  InsertDocumentTab(this,param_1,param_1,param_2,param_3,true);
  return;
}

// InsertNewDocumentTab @ 142749880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::InsertNewDocumentTab
          (FTabManager *this,FName param_1,Type param_2,TSharedRef<SDockTab,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FSearchPreference local_20;
  FSearchPreference local_18;
  undefined8 local_10;
  
  if (param_2 == PreferLiveTab) {
    local_18 = (FSearchPreference)&___7FLiveTabSearch_FTabManager__6B_;
    local_10 = 0;
    InsertDocumentTab(this,param_1,param_1,&local_18,param_3,true);
  }
  else {
    if (param_2 == RequireClosedTab) {
      local_20 = (FSearchPreference)&___7FRequireClosedTab_FTabManager__6B_;
      InsertDocumentTab(this,param_1,param_1,&local_20,param_3,true);
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                       ,0x5df,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// InvokeTabForMenu @ 142749b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::InvokeTabForMenu(FTabManager *this,FName param_1)

{
  FName local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  local_20 = 0xffffffff;
  local_1c = 1;
  local_28 = param_1;
  (**(code **)(this->_padding_ + 8))(this,local_18,&local_28,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// InvokeTabInPanelDrawer @ 142749b70

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockTab,1> * __thiscall
FTabManager::InvokeTabInPanelDrawer
          (FTabManager *this,TSharedPtr<SDockTab,1> *__return_storage_ptr__,FTabId *param_1,
          bool param_2,TSharedPtr<SWindow,1> *param_3,bool param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FGlobalTabmanager *pFVar2;
  code *pcVar3;
  bool bVar4;
  atomic<int> aVar5;
  SDockingArea *pSVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  bool bVar9;
  ETabRole EVar10;
  atomic<int> aVar11;
  TSharedPtr<SDockTab,1> *pTVar12;
  TSharedRef<FGlobalTabmanager,1> *pTVar13;
  FTabId *pFVar14;
  TSharedRef<FTabManager,1> *pTVar15;
  SDockTab *pSVar16;
  TSharedPtr<SWindow,1> *pTVar17;
  TSharedPtr<SDockingArea,1> *pTVar18;
  FSharedReferencer<1> FVar19;
  SPanelDrawerArea *pSVar20;
  SPanelDrawerArea *pSVar21;
  SPanelDrawerArea *pSVar22;
  TSharedPtr<SDockTab,1> local_1e8;
  TSharedPtr<SDockingArea,1> local_1d8;
  TSharedPtr<SDockingArea,1> local_1c8;
  TSharedPtr<SDockingArea,1> local_1b8;
  TSharedPtr<SDockTab,1> local_1a8;
  TSharedPtr<SDockingArea,1> local_198;
  TSharedPtr<SDockingArea,1> local_188;
  TSharedPtr<FTabManager,1> local_178;
  TSharedPtr<SWindow,1> local_168;
  undefined4 local_158;
  TSharedRef<FTabManager,1> local_148;
  SDockTab *local_138;
  TReferenceControllerBase<1> *pTStack_130;
  TSharedPtr<UE::Slate::Private::SPanelDrawerArea,1> local_128;
  TSharedRef<SDockTab,1> local_118;
  TSharedRef<SDockTab,1> local_108;
  TSharedPtr<SDockTab,1> local_f8;
  TSharedPtr<SDockTab,1> local_e8;
  TSharedPtr<SDockTab,1> local_d8;
  TSharedPtr<SDockTab,1> local_c8;
  TSharedPtr<SDockTab,1> local_b8;
  TSharedPtr<SDockTab,1> local_a8;
  TSharedPtr<SDockTab,1> local_98;
  TSharedPtr<SDockingArea,1> local_88;
  TSharedPtr<SWindow,1> local_78;
  TSharedPtr<SDockTab,1> local_68;
  TSharedRef<FTabManager,1> local_58;
  TSharedPtr<SDockingArea,1> local_48;
  FTabId local_38;
  
  pSVar22 = (SPanelDrawerArea *)0x0;
  local_158 = 0;
  GetDockingAreaForPanelDrawer(this,&local_1d8,param_3);
  if (local_1d8.Object == (SDockingArea *)0x0) {
LAB_14274a8cd:
    (**(code **)(this->_padding_ + 8))(this,__return_storage_ptr__,param_1,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d8.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  if ((local_1d8.Object == (SDockingArea *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
    return pTVar12;
  }
  if (((((local_1d8.Object)->PanelDrawerPtr).Object == (SPanelDrawerArea *)0x0) ||
      (pTVar1 = ((local_1d8.Object)->PanelDrawerPtr).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1))
  goto LAB_14274a8cd;
  local_1e8.Object = (SDockTab *)0x0;
  local_1e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar9 = CanInvokeInPanelDrawer(this,param_1,&local_1d8,&local_1e8,param_4);
  if (!bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e8.SharedReferenceCount.ReferenceController);
    goto LAB_14274a8cd;
  }
  if ((local_1d8.Object == (SDockingArea *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
    return pTVar12;
  }
  bVar9 = SDockingArea::IsPanelDrawerOpen(local_1d8.Object);
  pSVar20 = pSVar22;
  if (bVar9) {
    if ((local_1d8.Object == (SDockingArea *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
      return pTVar12;
    }
    pTVar12 = SDockingArea::GetPanelDrawerHostedTab(local_1d8.Object,&local_f8);
    pSVar20 = (SPanelDrawerArea *)&DAT_00000001;
    if (pTVar12->Object != local_1e8.Object) goto LAB_142749cec;
    bVar9 = true;
  }
  else {
LAB_142749cec:
    bVar9 = false;
  }
  if (pSVar20 != (SPanelDrawerArea *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
  }
  if (bVar9) {
    if (param_2) {
      if ((local_1e8.Object == (SDockTab *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
        return pTVar12;
      }
      SDockTab::GetDockArea(local_1e8.Object,&local_188);
      if (local_188.Object == (SDockingArea *)0x0) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6813193255430125063>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                           ,0x9f9,"false");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
          return pTVar12;
        }
        local_188.Object = local_1d8.Object;
        if ((local_1d8.Object == (SDockingArea *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
          return pTVar12;
        }
      }
      else if (local_188.Object == (SDockingArea *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
          return pTVar12;
        }
        SDockingArea::ClosePanelDrawer(local_188.Object);
        FVar19.ReferenceController = local_188.SharedReferenceCount.ReferenceController;
        goto LAB_14274a1f5;
      }
      SDockingArea::ClosePanelDrawer(local_188.Object);
      FVar19.ReferenceController = local_188.SharedReferenceCount.ReferenceController;
    }
    else {
      if (local_1e8.Object == (SDockTab *)0x0) goto LAB_14274a1fa;
      local_1a8.Object = (SDockTab *)0x0;
      local_1a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if ((local_1e8.Object == (SDockTab *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
        return pTVar12;
      }
      SDockTab::GetTabManagerPtr(local_1e8.Object,&local_178);
      if (local_178.Object != (FTabManager *)0x0) {
        pTVar13 = FGlobalTabmanager::Get();
        pFVar2 = pTVar13->Object;
        if ((local_178.Object == (FTabManager *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
          return pTVar12;
        }
        local_148.Object = local_178.Object;
        local_148.SharedReferenceCount.ReferenceController =
             local_178.SharedReferenceCount.ReferenceController;
        if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((local_178.Object == (FTabManager *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
          return pTVar12;
        }
        pTVar12 = FGlobalTabmanager::GetMajorTabForTabManager(pFVar2,&local_e8,&local_148);
        if (&local_1a8 != pTVar12) {
          local_1a8.Object = pTVar12->Object;
          pTVar12->Object = (SDockTab *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_1a8.SharedReferenceCount,&pTVar12->SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_148.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_178.SharedReferenceCount.ReferenceController);
      if ((local_1e8.Object == (SDockTab *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
        return pTVar12;
      }
      bVar9 = SDockTab::IsActive(local_1e8.Object);
      pSVar16 = local_1a8.Object;
      if (bVar9) {
        if (local_1a8.Object != (SDockTab *)0x0) {
          if ((local_1a8.Object == (SDockTab *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
            return pTVar12;
          }
          bVar9 = SDockTab::IsForeground(pSVar16);
          if (!bVar9) goto LAB_14274a006;
        }
        if ((local_1e8.Object == (SDockTab *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
          return pTVar12;
        }
        bVar9 = SDockTab::IsForeground(local_1e8.Object);
        FVar19.ReferenceController = local_1a8.SharedReferenceCount.ReferenceController;
        if (bVar9) goto LAB_14274a1f5;
      }
LAB_14274a006:
      if ((local_1e8.Object == (SDockTab *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
        return pTVar12;
      }
      SDockTab::GetDockArea(local_1e8.Object,&local_1b8);
      if (local_1b8.Object == (SDockingArea *)0x0) {
LAB_14274a152:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1b8.SharedReferenceCount.ReferenceController);
        pcVar3 = *(code **)this->_padding_;
        if ((local_1e8.Object == (SDockTab *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
          return pTVar12;
        }
        local_138 = local_1e8.Object;
        pTStack_130 = local_1e8.SharedReferenceCount.ReferenceController;
        if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((local_1e8.Object == (SDockTab *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
          return pTVar12;
        }
        (*pcVar3)(this,&local_138);
        local_1b8.SharedReferenceCount.ReferenceController = pTStack_130;
      }
      else {
        if ((local_1b8.Object == (SDockingArea *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
          return pTVar12;
        }
        pSVar6 = local_1b8.Object;
        if ((local_1e8.Object == (SDockTab *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
          return pTVar12;
        }
        pFVar14 = SDockTab::GetLayoutIdentifier(local_1e8.Object,&local_38);
        bVar9 = false;
        pTVar12 = SDockingArea::GetPanelDrawerSystemHostedTab(pSVar6,&local_c8,pFVar14);
        if (pTVar12->Object == (SDockTab *)0x0) {
LAB_14274a129:
          bVar4 = false;
          bVar8 = false;
          if (bVar9) goto LAB_14274a131;
        }
        else {
          if ((local_1b8.Object == (SDockingArea *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
            return pTVar12;
          }
          bVar9 = true;
          pTVar12 = SDockingArea::GetPanelDrawerHostedTab(local_1b8.Object,&local_d8);
          if (pTVar12->Object == local_1e8.Object) goto LAB_14274a129;
          bVar8 = true;
LAB_14274a131:
          bVar4 = bVar8;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d8.SharedReferenceCount.ReferenceController);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c8.SharedReferenceCount.ReferenceController);
        if (!bVar4) goto LAB_14274a152;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b8.SharedReferenceCount.ReferenceController);
      FVar19.ReferenceController = local_1a8.SharedReferenceCount.ReferenceController;
    }
  }
  else {
    if ((local_1e8.Object == (SDockTab *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
      return pTVar12;
    }
    SDockTab::GetDockArea(local_1e8.Object,&local_198);
    if (local_198.Object != (SDockingArea *)0x0) {
      if ((local_198.Object == (SDockingArea *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
        return pTVar12;
      }
      pTVar12 = SDockingArea::GetPanelDrawerHostedTab(local_198.Object,&local_b8);
      pSVar16 = pTVar12->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
      if (pSVar16 == local_1e8.Object) {
        if ((local_198.Object == (SDockingArea *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
          return pTVar12;
        }
        SDockingArea::ClosePanelDrawerForTransfer(local_198.Object,&local_a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.SharedReferenceCount.ReferenceController);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.SharedReferenceCount.ReferenceController);
    if (param_4) {
      if ((local_1e8.Object == (SDockTab *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
        return pTVar12;
      }
      SDockTab::RemoveTabFromParent_Internal(local_1e8.Object);
    }
    bVar9 = local_1e8.Object == (SDockTab *)0x0;
    if ((local_1e8.Object == (SDockTab *)0x0) || (local_1d8.Object == (SDockingArea *)0x0))
    goto LAB_14274a1fa;
    local_98.Object = local_1e8.Object;
    local_98.SharedReferenceCount.ReferenceController =
         local_1e8.SharedReferenceCount.ReferenceController;
    if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    RemoveFromHiddenPanelDrawerTabs(this,&local_98);
    if ((bVar9) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
      return pTVar12;
    }
    EVar10 = SDockTab::GetTabRole(local_1e8.Object);
    if (EVar10 != NomadTab) {
      if ((local_1d8.Object == (SDockingArea *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
        return pTVar12;
      }
      if ((local_1e8.Object == (SDockTab *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
        return pTVar12;
      }
      local_108.Object = local_1e8.Object;
      local_108.SharedReferenceCount.ReferenceController =
           local_1e8.SharedReferenceCount.ReferenceController;
      if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_1e8.Object == (SDockTab *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
        return pTVar12;
      }
      SDockingArea::HostTabIntoPanelDrawer(local_1d8.Object,&local_108);
      FVar19.ReferenceController = local_108.SharedReferenceCount.ReferenceController;
      goto LAB_14274a1f5;
    }
    pTVar13 = FGlobalTabmanager::Get();
    FVar19.ReferenceController = (pTVar13->SharedReferenceCount).ReferenceController;
    pFVar2 = pTVar13->Object;
    if (FVar19.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar19.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    GetDockingAreaForPanelDrawer((FTabManager *)pFVar2,&local_1c8,param_3);
    if (local_1c8.Object == (SDockingArea *)0x0) {
      if ((local_1d8.Object == (SDockingArea *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
        return pTVar12;
      }
      pTVar15 = SDockingArea::GetTabManager(local_1d8.Object,&local_58);
      pTVar12 = FGlobalTabmanager::GetMajorTabForTabManager(pFVar2,&local_68,pTVar15);
      pSVar16 = TSharedPtr<SDockTab,1>::operator->(pTVar12);
      pTVar17 = SDockTab::GetParentWindow(pSVar16,&local_78);
      pTVar18 = GetDockingAreaForPanelDrawer((FTabManager *)pFVar2,&local_88,pTVar17);
      if (&local_1c8 != pTVar18) {
        local_1c8.Object = pTVar18->Object;
        pTVar18->Object = (SDockingArea *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_1c8.SharedReferenceCount,&pTVar18->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      if (local_1c8.Object == (SDockingArea *)0x0) {
        local_168.SharedReferenceCount.ReferenceController =
             (pFVar2->RootWindowPtr).WeakReferenceCount.ReferenceController;
        local_168.Object = (SWindow *)0x0;
        if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          aVar5 = (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar5 == (atomic<int>)0x0) {
              local_168.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              goto LAB_14274a539;
            }
            LOCK();
            aVar11 = (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            bVar9 = aVar5 == aVar11;
            if (bVar9) {
              (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)aVar5 + 1);
              aVar11 = aVar5;
            }
            UNLOCK();
            aVar5 = aVar11;
          } while (!bVar9);
          local_168.Object = (pFVar2->RootWindowPtr).Object;
        }
LAB_14274a539:
        FVar7.ReferenceController = local_168.SharedReferenceCount.ReferenceController;
        pTVar18 = GetDockingAreaForPanelDrawer((FTabManager *)pFVar2,&local_48,&local_168);
        if (&local_1c8 != pTVar18) {
          local_1c8.Object = pTVar18->Object;
          pTVar18->Object = (SDockingArea *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_1c8.SharedReferenceCount,&pTVar18->SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar7.ReferenceController);
        if (local_1c8.Object == (SDockingArea *)0x0) {
          bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6813193255430124954>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                             ,0xa66,"MajorDockingArea");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
            return pTVar12;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1c8.SharedReferenceCount.ReferenceController);
          goto LAB_14274a1f5;
        }
      }
    }
    if ((local_1d8.Object == (SDockingArea *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
      return pTVar12;
    }
    pSVar20 = (SPanelDrawerArea *)
              ((local_1d8.Object)->PanelDrawerPtr).WeakReferenceCount.ReferenceController;
    pSVar21 = pSVar20;
    if (pSVar20 == (SPanelDrawerArea *)0x0) {
LAB_14274a635:
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetPanelDrawer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                         ,0xa6c,L"");
      pSVar20 = pSVar21;
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
        return pTVar12;
      }
    }
    else {
      aVar5 = *(atomic<int> *)&pSVar20->_padding_;
      do {
        pSVar21 = pSVar22;
        if (aVar5 == (atomic<int>)0x0) goto LAB_14274a635;
        LOCK();
        aVar11 = *(atomic<int> *)&pSVar20->_padding_;
        bVar9 = aVar5 == aVar11;
        if (bVar9) {
          *(atomic<int> *)&pSVar20->_padding_ = (atomic<int>)((int)aVar5 + 1);
          aVar11 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar11;
      } while (!bVar9);
      pSVar22 = ((local_1d8.Object)->PanelDrawerPtr).Object;
      pSVar21 = pSVar20;
      if (pSVar22 == (SPanelDrawerArea *)0x0) goto LAB_14274a635;
    }
    if ((local_1c8.Object == (SDockingArea *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
      return pTVar12;
    }
    pSVar6 = local_1c8.Object;
    if ((pSVar22 == (SPanelDrawerArea *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
      return pTVar12;
    }
    if (pSVar20 != (SPanelDrawerArea *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar20->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar20->_padding_ + 1);
      UNLOCK();
    }
    if ((pSVar22 == (SPanelDrawerArea *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
      return pTVar12;
    }
    if (pSVar20 != (SPanelDrawerArea *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar20->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar20->_padding_ + 1);
      UNLOCK();
    }
    local_128.Object = pSVar22;
    local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar20;
    SDockingArea::SetPanelDrawerArea(pSVar6,&local_128);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar20);
    if ((local_1c8.Object == (SDockingArea *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
      return pTVar12;
    }
    pSVar6 = local_1c8.Object;
    if ((local_1e8.Object == (SDockTab *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
      return pTVar12;
    }
    local_118.Object = local_1e8.Object;
    local_118.SharedReferenceCount.ReferenceController =
         local_1e8.SharedReferenceCount.ReferenceController;
    if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_1e8.Object == (SDockTab *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
      return pTVar12;
    }
    SDockingArea::HostTabIntoPanelDrawer(pSVar6,&local_118);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c8.SharedReferenceCount.ReferenceController);
  }
LAB_14274a1f5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar19.ReferenceController);
LAB_14274a1fa:
  __return_storage_ptr__->Object = local_1e8.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_1e8.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// InvokeTab_CanInvokeTab @ 14274aa40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTabManager::InvokeTab_CanInvokeTab(FTabManager *this,FTabId *param_1)

{
  bool bVar1;
  FString local_18;
  
  bVar1 = IsAllowedTab(this,param_1);
  if (!bVar1) {
    if (2 < (byte)LogTabManager._0_1_) {
      ::FName::ToString(&param_1->TabType,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTabManager);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  return true;
}

// InvokeTab_DrawAttentionToTab @ 14274aac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::InvokeTab_DrawAttentionToTab(FTabManager *this,TSharedPtr<SDockTab,1> *param_1)

{
  FGlobalTabmanager *this_00;
  code *pcVar1;
  bool bVar2;
  SDockingArea *this_01;
  bool bVar3;
  bool bVar4;
  TSharedRef<FGlobalTabmanager,1> *pTVar5;
  TSharedPtr<SDockTab,1> *pTVar6;
  SDockTab *pSVar7;
  FTabId *pFVar8;
  TSharedPtr<SDockingArea,1> local_98;
  TSharedPtr<SDockTab,1> local_88;
  TSharedPtr<FTabManager,1> local_78;
  SDockTab *local_68;
  TReferenceControllerBase<1> *local_60;
  TSharedRef<FTabManager,1> local_58;
  TSharedPtr<SDockTab,1> local_48;
  TSharedPtr<SDockTab,1> local_38;
  TSharedPtr<SDockTab,1> local_28;
  FTabId local_18;
  
  if (param_1->Object == (SDockTab *)0x0) {
    return;
  }
  local_88.Object = (SDockTab *)0x0;
  local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SDockTab::GetTabManagerPtr(param_1->Object,&local_78);
  if (local_78.Object != (FTabManager *)0x0) {
    pTVar5 = FGlobalTabmanager::Get();
    this_00 = pTVar5->Object;
    if ((local_78.Object == (FTabManager *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_58.Object = local_78.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_78.SharedReferenceCount.ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_78.Object == (FTabManager *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pTVar6 = FGlobalTabmanager::GetMajorTabForTabManager(this_00,&local_48,&local_58);
    if (&local_88 != pTVar6) {
      local_88.Object = pTVar6->Object;
      pTVar6->Object = (SDockTab *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_88.SharedReferenceCount,&pTVar6->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  if ((param_1->Object == (SDockTab *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar4 = SDockTab::IsActive(param_1->Object);
  pSVar7 = local_88.Object;
  if (bVar4) {
    if (local_88.Object != (SDockTab *)0x0) {
      if ((local_88.Object == (SDockTab *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar4 = SDockTab::IsForeground(pSVar7);
      if (!bVar4) goto LAB_14274ac76;
    }
    pSVar7 = TSharedPtr<SDockTab,1>::operator->(param_1);
    bVar4 = SDockTab::IsForeground(pSVar7);
    if (bVar4) goto LAB_14274ae25;
  }
LAB_14274ac76:
  if ((param_1->Object == (SDockTab *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SDockTab::GetDockArea(param_1->Object,&local_98);
  if (local_98.Object == (SDockingArea *)0x0) {
LAB_14274ad91:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    pcVar1 = *(code **)this->_padding_;
    if ((param_1->Object == (SDockTab *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_60 = (param_1->SharedReferenceCount).ReferenceController;
    local_68 = param_1->Object;
    if (local_60 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_68 == (SDockTab *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*pcVar1)(this,&local_68);
    local_98.SharedReferenceCount.ReferenceController = local_60;
  }
  else {
    if ((local_98.Object == (SDockingArea *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_01 = local_98.Object;
    pSVar7 = TSharedPtr<SDockTab,1>::operator->(param_1);
    pFVar8 = SDockTab::GetLayoutIdentifier(pSVar7,&local_18);
    pTVar6 = SDockingArea::GetPanelDrawerSystemHostedTab(this_01,&local_28,pFVar8);
    if (pTVar6->Object == (SDockTab *)0x0) {
      bVar4 = false;
LAB_14274ad69:
      bVar2 = false;
      bVar3 = false;
      if (bVar4) goto LAB_14274ad71;
    }
    else {
      if ((local_98.Object == (SDockingArea *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pTVar6 = SDockingArea::GetPanelDrawerHostedTab(local_98.Object,&local_38);
      bVar4 = true;
      if (pTVar6->Object == param_1->Object) goto LAB_14274ad69;
      bVar3 = true;
LAB_14274ad71:
      bVar2 = bVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if (!bVar2) goto LAB_14274ad91;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
LAB_14274ae25:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  return;
}

// InvokeTab_FindOrReuseExistingTab @ 14274ae60

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockTab,1> * __thiscall
FTabManager::InvokeTab_FindOrReuseExistingTab
          (FTabManager *this,TSharedPtr<SDockTab,1> *__return_storage_ptr__,FTabId *param_1)

{
  FName FVar1;
  FTabSpawnerEntry *pFVar2;
  longlong *plVar3;
  SDockTab *pSVar4;
  atomic<int> aVar5;
  char cVar6;
  atomic<int> aVar7;
  TSharedRef<FTabSpawnerEntry,1> *pTVar8;
  SDockTab *pSVar9;
  SDockTab *pSVar10;
  SDockTab *pSVar11;
  bool bVar12;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  FReadAccessScope local_38;
  
  FVar1 = param_1->TabType;
  pSVar9 = (SDockTab *)0x0;
  pTVar8 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
           ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                   *)&this->TabSpawner,FVar1);
  if ((pTVar8 == (TSharedRef<FTabSpawnerEntry,1> *)0x0) &&
     (pTVar8 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
               ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                       *)(this->NomadTabSpawner).Object,FVar1),
     pTVar8 == (TSharedRef<FTabSpawnerEntry,1> *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pSVar10 = pSVar9;
  }
  else {
    pSVar10 = (SDockTab *)(pTVar8->SharedReferenceCount).ReferenceController;
    pFVar2 = pTVar8->Object;
    if (pSVar10 != (SDockTab *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar10->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar10->_padding_ + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pFVar2 != (FTabSpawnerEntry *)0x0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar2->OnFindTabToReuse
                 ,&local_38);
      if (((*(int *)&(pFVar2->OnFindTabToReuse).field_0x10 == 0) ||
          (plVar3 = *(longlong **)&(pFVar2->OnFindTabToReuse).field_0x8, plVar3 == (longlong *)0x0))
         || (cVar6 = (**(code **)(*plVar3 + 0x38))(), cVar6 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        pSVar4 = (SDockTab *)(pFVar2->SpawnedTabPtr).WeakReferenceCount.ReferenceController;
        pSVar11 = pSVar4;
        if (pSVar4 != (SDockTab *)0x0) {
          aVar5 = *(atomic<int> *)&pSVar4->_padding_;
          do {
            pSVar11 = pSVar9;
            if (aVar5 == (atomic<int>)0x0) goto LAB_14274aff3;
            LOCK();
            aVar7 = *(atomic<int> *)&pSVar4->_padding_;
            bVar12 = aVar5 == aVar7;
            if (bVar12) {
              *(atomic<int> *)&pSVar4->_padding_ = (atomic<int>)((int)aVar5 + 1);
              aVar7 = aVar5;
            }
            UNLOCK();
            aVar5 = aVar7;
          } while (!bVar12);
          pSVar9 = (pFVar2->SpawnedTabPtr).Object;
          pSVar11 = pSVar4;
        }
LAB_14274aff3:
        __return_storage_ptr__->Object = pSVar9;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)pSVar11;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &pFVar2->OnFindTabToReuse,&local_38);
        if (*(int *)&(pFVar2->OnFindTabToReuse).field_0x10 != 0) {
          pSVar9 = *(SDockTab **)&(pFVar2->OnFindTabToReuse).field_0x8;
        }
        (**(code **)(pSVar9->_padding_ + 0x60))(pSVar9,local_48,param_1);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        __return_storage_ptr__->Object = (SDockTab *)local_48;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_40;
        local_40 = (TReferenceControllerBase<1> *)0x0;
        local_48 = (undefined1  [8])0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      goto LAB_14274b005;
    }
  }
  if (2 < (byte)LogTabManager._0_1_) {
    ::FName::ToString(&param_1->TabType,(FString *)local_48);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTabManager);
    if (local_48 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_48);
    }
  }
  __return_storage_ptr__->Object = (SDockTab *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14274b005:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar10);
  return __return_storage_ptr__;
}

// InvokeTab_Internal @ 14274b040

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockTab,1> * __thiscall
FTabManager::InvokeTab_Internal
          (FTabManager *this,TSharedPtr<SDockTab,1> *__return_storage_ptr__,FTabId *param_1,
          bool param_2,bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FGlobalTabmanager *pFVar2;
  TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
  *pTVar3;
  FName FVar4;
  SWindow *pSVar5;
  code *pcVar6;
  atomic<int> aVar7;
  SDockTab *this_00;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ETabRole EVar12;
  atomic<int> aVar13;
  uint uVar14;
  int iVar15;
  TSharedPtr<SDockTab,1> *pTVar16;
  FTabManager *this_01;
  TSharedRef<FGlobalTabmanager,1> *pTVar17;
  FTabId *pFVar18;
  TSharedPtr<SDockingTabStack,1> *pTVar19;
  TSharedPtr<SWindow,1> *pTVar20;
  TSharedRef<FTabManager,1> *pTVar21;
  FArguments *pFVar22;
  TAttribute<FText> *pTVar23;
  TSharedRef<SWidget,1> *pTVar24;
  FGeometry *pFVar25;
  FDeprecateSlateVector2D FVar26;
  FArguments *pFVar27;
  FArguments *pFVar28;
  TSharedRef<SDockingTabStack,1> *pTVar29;
  TSharedRef<FTabManager::FArea,1> *pTVar30;
  TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
  *this_02;
  FSlateApplication *pFVar31;
  TSharedRef<SWindow,1> *pTVar32;
  undefined8 *puVar33;
  undefined4 *puVar34;
  FArea *pFVar35;
  FArea *pFVar36;
  TSharedRef<FTabManager::FStack,1> *pTVar37;
  SDockingArea *pSVar38;
  longlong lVar39;
  longlong *plVar40;
  TSharedRef<SDockTab,1> *pTVar41;
  FSharedReferencer<1> FVar42;
  undefined1 *puVar43;
  TReferenceControllerBase<1> *pTVar44;
  SDockingTabStack *pSVar45;
  FSharedReferencer<1> FVar46;
  SDockTab *pSVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  TSharedPtr<SDockTab,1> local_c98;
  TReferenceControllerBase<1> *local_c88;
  T0RequiredArgs local_c7f [7];
  undefined8 local_c78;
  TSharedRef<SWindow,1> local_c68;
  undefined4 local_c58;
  FLLMScope local_c54 [4];
  TSharedRef<SDockingArea,1> local_c48;
  FGlobalTabmanager *local_c38;
  FSharedReferencer<1> FStack_c30;
  TSharedPtr<SDockingArea,1> local_c28;
  TSharedPtr<SDockTab,1> local_c18;
  undefined8 local_c08;
  TSharedRef<FTabManager::FArea,1> local_bf8;
  TSharedPtr<SDockingArea,1> local_be8;
  TSharedPtr<FTabManager,1> local_bd8;
  TSharedPtr<SDockingTabStack,1> local_bc8;
  TSharedPtr<FTabManager::FArea,1> local_bb8;
  FName local_ba8;
  FMemScope local_ba0;
  FName local_b98;
  T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&> local_b90;
  TRawPtrProxy<FTabManager::FArea> local_b88;
  FMemScope local_b80;
  TSharedPtr<FTabManager,1> local_b78;
  TSharedRef<FTabManager,1> local_b68;
  SDockTab *local_b58;
  TReferenceControllerBase<1> *pTStack_b50;
  TSharedRef<SDockTab,1> local_b48;
  TSharedRef<SDockTab,1> local_b38;
  undefined8 local_b28;
  FSharedReferencer<1> local_b20;
  TSharedPtr<FTabManager,1> local_b18;
  undefined8 local_b08;
  FSharedReferencer<1> local_b00;
  TSharedRef<FTabManager,1> local_af8;
  TSharedPtr<SWindow,1> local_ae8;
  TSharedRef<SDockTab,1> local_ad8;
  SDockTab *local_ac8;
  TReferenceControllerBase<1> *pTStack_ac0;
  TSharedPtr<SWindow,1> local_ab8;
  TSharedRef<SDockTab,1> *local_aa8;
  int local_aa0;
  TSharedRef<SDockTab,1> *local_a98;
  int local_a90;
  TSharedPtr<SDockTab,1> local_a88;
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
  local_a78;
  TSharedPtr<SDockingNode,1> local_a60;
  T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&> local_a50;
  SWindow *local_a38;
  TReferenceControllerBase<1> *pTStack_a30;
  TSharedRef<FTabManager::FLayoutNode,1> local_a28;
  TSharedPtr<SDockTab,1> local_a18;
  TSharedPtr<SDockTab,1> local_a08;
  TSharedPtr<SDockTab,1> local_9f8;
  TSharedPtr<SDockTab,1> local_9e8;
  TSharedPtr<SDockTab,1> local_9d8;
  TSharedPtr<SDockingTabStack,1> local_9c8;
  TSharedPtr<SDockTab,1> local_9b8;
  TSharedPtr<SWindow,1> local_9a8;
  TSharedRef<FTabManager,1> local_998;
  TSharedRef<SWidget,1> local_988;
  TSharedRef<SWidget,1> local_978;
  TSharedRef<FTabManager,1> local_968;
  TSharedPtr<SWindow,1> local_958;
  TSharedRef<FTabManager::FArea,1> local_948;
  TSharedRef<SDockingTabStack,1> local_938;
  TSharedRef<FTabManager::FStack,1> local_928;
  TSharedRef<SWindow,1> local_918;
  TSharedRef<SWidget,1> local_908;
  TSharedRef<SWindow,1> local_8f8;
  SWindow *local_8e8;
  TReferenceControllerBase<1> *pTStack_8e0;
  TSharedRef<SWidget,1> local_8d8;
  undefined1 local_8c8 [8];
  TReferenceControllerBase<1> *local_8c0;
  TSharedRef<SWindow,1> local_8b8;
  TSharedRef<SWidget,1> local_8a8;
  TSharedRef<SWindow,1> local_898;
  SWindow *local_888;
  TReferenceControllerBase<1> *pTStack_880;
  TSharedRef<SWidget,1> local_878;
  undefined1 local_868 [8];
  TReferenceControllerBase<1> *local_860;
  FTabId local_858;
  TSharedRef<FTabManager::FArea,1> local_848;
  TSharedRef<FTabManager::FStack,1> local_838;
  TSharedRef<FTabManager::FStack,1> local_828;
  TSharedPtr<SWindow,1> local_818;
  TSharedRef<SDockTab,1> local_808;
  undefined1 local_7f8 [8];
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> local_7f0;
  TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
  local_7d8;
  TSharedRef<SWindow,1> local_7c0;
  FTabId local_7b0;
  TSharedRef<SWindow,1> local_7a0;
  TAttribute<FText> local_790;
  FArguments local_760;
  FArguments local_540;
  FArguments local_340;
  
  local_c58 = 0;
  bVar10 = InvokeTab_CanInvokeTab(this,param_1);
  if (!bVar10) {
    __return_storage_ptr__->Object = (SDockTab *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  InvokeTab_FindOrReuseExistingTab(this,&local_c98,param_1);
  pSVar47 = local_c98.Object;
  if (local_c98.Object == (SDockTab *)0x0) {
LAB_14274b678:
    FVar42.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (param_3) {
      pTVar19 = AttemptToOpenTab(this,&local_9c8,param_1,true);
      local_c88 = (pTVar19->SharedReferenceCount).ReferenceController;
      pSVar45 = pTVar19->Object;
      (pTVar19->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar19->Object = (SDockingTabStack *)0x0;
      FVar42.ReferenceController = local_9c8.SharedReferenceCount.ReferenceController;
    }
    else {
      AttemptToOpenTab(this,&local_bc8,param_1,false);
      pSVar45 = local_bc8.Object;
      local_c88 = local_bc8.SharedReferenceCount.ReferenceController;
      local_bc8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_bc8.Object = (SDockingTabStack *)0x0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar42.ReferenceController);
    if (pSVar45 != (SDockingTabStack *)0x0) {
      if (pSVar47 == (SDockTab *)0x0) {
        pTVar20 = FPrivateApi::GetParentWindow((this->PrivateApi).Object,&local_9a8);
        pTVar16 = SpawnTab(this,&local_9b8,param_1,pTVar20,false);
        if (&local_c98 != pTVar16) {
          local_c98.Object = pTVar16->Object;
          pTVar16->Object = (SDockTab *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_c98.SharedReferenceCount,&pTVar16->SharedReferenceCount);
          pSVar47 = local_c98.Object;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_9b8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_9a8.SharedReferenceCount.ReferenceController);
      }
      else {
        if ((pSVar47 == (SDockTab *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
          return pTVar16;
        }
        SDockTab::RemoveTabFromParent_Internal(pSVar47);
      }
      if (pSVar47 != (SDockTab *)0x0) {
        local_b48.Object = local_c98.Object;
        local_b48.SharedReferenceCount.ReferenceController =
             local_c98.SharedReferenceCount.ReferenceController;
        if (local_c98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_c98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_c98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((local_c98.Object == (SDockTab *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
          return pTVar16;
        }
        SDockingTabStack::OpenTab(pSVar45,&local_b48,-1,param_2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b48.SharedReferenceCount.ReferenceController);
        if ((pSVar47 == (SDockTab *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
          return pTVar16;
        }
        SDockTab::PlaySpawnAnim(pSVar47);
        pTVar17 = FGlobalTabmanager::Get();
        pFVar2 = pTVar17->Object;
        if ((pSVar47 == (SDockTab *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
          return pTVar16;
        }
        local_b38.Object = local_c98.Object;
        local_b38.SharedReferenceCount.ReferenceController =
             local_c98.SharedReferenceCount.ReferenceController;
        if (local_c98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_c98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_c98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((local_c98.Object == (SDockTab *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
          return pTVar16;
        }
        FGlobalTabmanager::UpdateMainMenu(pFVar2,&local_b38,false);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b38.SharedReferenceCount.ReferenceController);
      }
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           local_c98.SharedReferenceCount.ReferenceController;
      __return_storage_ptr__->Object = pSVar47;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c88)
      ;
      local_c98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      goto LAB_14274c972;
    }
    pTVar21 = TSharedFromThis<FTabManager,1>::AsShared
                        ((TSharedFromThis<FTabManager,1> *)&this->_padding_,&local_998);
    pTVar1 = (pTVar21->SharedReferenceCount).ReferenceController;
    pFVar2 = (FGlobalTabmanager *)pTVar21->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_998.SharedReferenceCount.ReferenceController);
    pTVar17 = FGlobalTabmanager::Get();
    if (pTVar17->Object != pFVar2) {
      pTVar3 = (this->NomadTabSpawner).Object;
      FVar4 = param_1->TabType;
      uVar14 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      if (*(int *)&pTVar3->field_0x8 != *(int *)&pTVar3->field_0x34) {
        puVar43 = *(undefined1 **)&pTVar3->field_0x40;
        if (*(undefined1 **)&pTVar3->field_0x40 == (undefined1 *)0x0) {
          puVar43 = &pTVar3->field_0x38;
        }
        iVar15 = *(int *)(puVar43 +
                         (ulonglong)(*(int *)&pTVar3->field_0x48 - 1U & FVar4.Number + uVar14) * 4);
        if (iVar15 != -1) {
          do {
            if (*(FName *)((longlong)iVar15 * 0x20 + *(longlong *)pTVar3) == FVar4) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar1);
              pTVar17 = FGlobalTabmanager::Get();
              InvokeTab_Internal((FTabManager *)pTVar17->Object,__return_storage_ptr__,param_1,
                                 param_2,param_3);
              goto LAB_14274c963;
            }
            iVar15 = *(int *)((longlong)iVar15 * 0x20 + 0x18 + *(longlong *)pTVar3);
          } while (iVar15 != -1);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    bVar10 = false;
    if (pSVar47 == (SDockTab *)0x0) {
      pTVar17 = FGlobalTabmanager::Get();
      GetAreaFromInitialLayoutWithTabType((FTabManager *)pTVar17->Object,&local_bb8,param_1);
      pFVar36 = local_bb8.Object;
      if (local_bb8.Object == (FArea *)0x0) {
LAB_14274c5a5:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_bb8.SharedReferenceCount.ReferenceController);
        FVar4 = param_1->TabType;
        uVar49 = FallbackWindowSize.field0_0x0._0_4_;
        uVar50 = FallbackWindowSize.field0_0x0._4_4_;
        uVar51 = FallbackWindowSize.field0_0x0._8_4_;
        uVar52 = FallbackWindowSize.field0_0x0._12_4_;
        uVar14 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
        iVar15 = TSet<TTuple<FTabId,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FTabId,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FTabId>
                           ((TSet<TTuple<FTabId,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FTabId,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
                             *)&DefaultTabWindowSizeMap,uVar14 + FVar4.Number ^ param_1->InstanceId,
                            param_1);
        if (iVar15 != -1) {
          lVar39 = DefaultTabWindowSizeMap._0_8_ + (longlong)iVar15 * 0x28;
          puVar34 = (undefined4 *)(lVar39 + 0x10);
          if (lVar39 == 0) {
            puVar34 = (undefined4 *)0x0;
          }
          if (puVar34 != (undefined4 *)0x0) {
            uVar49 = *puVar34;
            uVar50 = puVar34[1];
            uVar51 = puVar34[2];
            uVar52 = puVar34[3];
          }
        }
        pFVar36 = (FArea *)0x0;
        pFVar35 = ::operator_new(0x98);
        if (pFVar35 != (FArea *)0x0) {
          pFVar35->_padding_ = 0;
          pFVar35->_padding_ = 0;
          *(undefined4 *)&pFVar35->_padding_ = 0x3f800000;
          *(undefined4 *)&pFVar35->_padding_ = 0;
          pFVar35->_padding_ = 0;
          pFVar35->_padding_ = 0;
          pFVar35->_padding_ = (longlong)&___7FArea_FTabManager__6B_;
          pFVar35->WindowPlacement = Placement_Automatic;
          (pFVar35->UnscaledWindowPosition).field0_0x0._s_0.X = 0.0;
          (pFVar35->UnscaledWindowPosition).field0_0x0._s_0.Y = 0.0;
          pFVar35->bIsMaximized = false;
          (pFVar35->ExtensionId).ComparisonIndex = 0;
          (pFVar35->ExtensionId).Number = 0;
          (pFVar35->ActivePanelDrawerTab).TabId.TabType.ComparisonIndex = 0;
          (pFVar35->ActivePanelDrawerTab).TabId.TabType.Number = 0;
          (pFVar35->ActivePanelDrawerTab).TabId.InstanceId = -1;
          (pFVar35->ActivePanelDrawerTab).TabId.Flags = SaveLayout;
          (pFVar35->UnscaledWindowSize).field0_0x0._s_0.X =
               (double)(float)(double)CONCAT44(uVar50,uVar49);
          (pFVar35->ActivePanelDrawerTab).Size.MainContentCoefficient = 0.75;
          (pFVar35->ActivePanelDrawerTab).Size.PanelDrawerCoefficient = 0.25;
          (pFVar35->InactivePanelDrawerTabs).AllocatorInstance.Data = (FScriptContainerElement *)0x0
          ;
          (pFVar35->InactivePanelDrawerTabs).ArrayNum = 0;
          (pFVar35->InactivePanelDrawerTabs).ArrayMax = 0;
          (pFVar35->UnscaledWindowSize).field0_0x0._s_0.Y =
               (double)(float)(double)CONCAT44(uVar52,uVar51);
          pFVar36 = pFVar35;
        }
        local_b88.Object = pFVar36;
        TSharedRef<FTabManager::FArea,1>::TSharedRef<FTabManager::FArea,1><FTabManager::FArea>
                  (&local_bf8,&local_b88);
      }
      else {
        if ((local_bb8.Object == (FArea *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
          return pTVar16;
        }
        if (pFVar36->WindowPlacement != Placement_Specified) goto LAB_14274c5a5;
        local_bf8.Object = local_bb8.Object;
        local_bf8.SharedReferenceCount.ReferenceController =
             local_bb8.SharedReferenceCount.ReferenceController;
        if (local_bb8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_bb8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_bb8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_bb8.SharedReferenceCount.ReferenceController);
      }
      pTVar37 = NewStack(&local_828);
      local_858.TabType = param_1->TabType;
      local_858.InstanceId = param_1->InstanceId;
      local_858.Flags = param_1->Flags;
      local_858._13_3_ = *(undefined3 *)&param_1->field_0xd;
      pTVar37 = FStack::AddTab(pTVar37->Object,&local_838,&local_858,OpenedTab);
      local_a28.Object = (FLayoutNode *)pTVar37->Object;
      local_a28.SharedReferenceCount.ReferenceController =
           (pTVar37->SharedReferenceCount).ReferenceController;
      if (local_a28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_a28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FArea::Split(local_bf8.Object,&local_848,&local_a28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_848.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_838.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_828.SharedReferenceCount.ReferenceController);
      pTVar20 = FPrivateApi::GetParentWindow((this->PrivateApi).Object,&local_818);
      RestoreArea(this,&local_be8,&local_bf8,pTVar20,false,Never,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_818.SharedReferenceCount.ReferenceController);
      if (local_be8.Object == (SDockingArea *)0x0) {
LAB_14274c7f4:
        bVar11 = false;
      }
      else {
        pSVar38 = TSharedPtr<SDockingArea,1>::operator->(&local_be8);
        bVar10 = true;
        lVar39 = (**(code **)(pSVar38->_padding_ + 0x268))(pSVar38,&local_aa8);
        if (*(int *)(lVar39 + 8) < 1) goto LAB_14274c7f4;
        bVar11 = true;
      }
      if ((bVar10) &&
         (DestructItems<TSharedRef<SDockTab,1>,int>(local_aa8,local_aa0),
         local_aa8 != (TSharedRef<SDockTab,1> *)0x0)) {
        FMemory::Free(local_aa8);
      }
      if (bVar11) {
        pSVar38 = TSharedPtr<SDockingArea,1>::operator->(&local_be8);
        plVar40 = (longlong *)(**(code **)(pSVar38->_padding_ + 0x268))(pSVar38,&local_a98);
        if (((int)plVar40[1] < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
          return pTVar16;
        }
        pTVar1 = (TReferenceControllerBase<1> *)((longlong *)*plVar40)[1];
        pSVar47 = *(SDockTab **)*plVar40;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a88.Object = pSVar47;
        local_a88.SharedReferenceCount.ReferenceController = pTVar1;
        DestructItems<TSharedRef<SDockTab,1>,int>(local_a98,local_a90);
        if (local_a98 != (TSharedRef<SDockTab,1> *)0x0) {
          FMemory::Free(local_a98);
        }
        if ((pSVar47 == (SDockTab *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("NewlyOpenedTab.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                                ,0x6f7,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
          return pTVar16;
        }
        pTVar41 = TSharedPtr<SDockTab,1>::ToSharedRef(&local_a88,&local_808);
        __return_storage_ptr__->Object = pTVar41->Object;
        pTVar44 = (pTVar41->SharedReferenceCount).ReferenceController;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar44;
        if (pTVar44 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar44->SharedReferenceCount = (atomic<int>)((int)pTVar44->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_808.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_be8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_bf8.SharedReferenceCount.ReferenceController);
      }
      else {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_be8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_bf8.SharedReferenceCount.ReferenceController);
        __return_storage_ptr__->Object = (SDockTab *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
      }
LAB_14274c963:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c88)
      ;
      goto LAB_14274c972;
    }
    if ((pSVar47 == (SDockTab *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
      return pTVar16;
    }
    SDockTab::RemoveTabFromParent_Internal(pSVar47);
    FPrivateApi::GetParentWindow((this->PrivateApi).Object,&local_ab8);
    pFVar22 = SWindow::FArguments::FArguments(&local_340);
    pTVar17 = FGlobalTabmanager::Get();
    pTVar23 = TAttribute<FText>::TAttribute<FText><FText>(&local_790,&pTVar17->Object->AppTitle);
    pFVar22 = SWindow::FArguments::Title(pFVar22,pTVar23);
    pFVar22->_AutoCenter = None;
    if ((pSVar47 == (SDockTab *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
      return pTVar16;
    }
    pTVar24 = SDockTab::GetContent(pSVar47,&local_978);
    local_c08 = 0;
    pFVar25 = SWidget::GetTickSpaceGeometry(pTVar24->Object);
    local_c78._4_4_ = (float)((ulonglong)local_c08 >> 0x20);
    local_c78._0_4_ = (float)local_c08;
    fVar48 = local_c78._4_4_ * (pFVar25->AccumulatedRenderTransform).M.M[1][0];
    local_c78._4_4_ =
         (float)local_c78 * (pFVar25->AccumulatedRenderTransform).M.M[0][1] +
         local_c78._4_4_ * (pFVar25->AccumulatedRenderTransform).M.M[1][1] +
         (pFVar25->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
    local_c78._0_4_ =
         fVar48 + (float)local_c78 * (pFVar25->AccumulatedRenderTransform).M.M[0][0] +
         (pFVar25->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
    pFVar22->_ScreenPosition = local_c78;
    if ((pSVar47 == (SDockTab *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
      return pTVar16;
    }
    pTVar24 = SDockTab::GetContent(pSVar47,&local_988);
    SWidget::GetTickSpaceGeometry(pTVar24->Object);
    FVar26 = SWindow::ComputeWindowSizeForContent((FDeprecateVector2DParameter)local_7f8);
    pFVar22->_ClientSize = *(FDeprecateVector2DParameter *)FVar26;
    pFVar22->_CreateTitleBar = false;
    FLLMScope::FLLMScope(local_c54,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_ba8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_ba0,&local_ba8,true);
    TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>
              (&local_7f0,"SWindow",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
               ,0x6a7,local_c7f);
    FMemScope::~FMemScope(&local_ba0);
    FLLMScope::~FLLMScope(local_c54);
    TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::operator<<=(&local_7f0,&local_c68,pFVar22);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7f0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_988.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_978.SharedReferenceCount.ReferenceController);
    SWindow::FArguments::~FArguments(&local_340);
    FStack_c30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((pSVar47 == (SDockTab *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
      return pTVar16;
    }
    EVar12 = SDockTab::GetTabRole(pSVar47);
    if (EVar12 == NomadTab) {
      pTVar17 = FGlobalTabmanager::Get();
      local_b20.ReferenceController = (pTVar17->SharedReferenceCount).ReferenceController;
      local_c38 = pTVar17->Object;
      if (local_b20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b20.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_b20.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_b28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_c30,&local_b20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b20.ReferenceController);
      if ((pSVar47 == (SDockTab *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
        return pTVar16;
      }
      pTVar17 = FGlobalTabmanager::Get();
      local_b18.Object = (FTabManager *)pTVar17->Object;
      local_b18.SharedReferenceCount.ReferenceController =
           (pTVar17->SharedReferenceCount).ReferenceController;
      if (local_b18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_b18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_b18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SDockTab::SetTabManager(pSVar47,&local_b18);
      local_968.SharedReferenceCount.ReferenceController =
           local_b18.SharedReferenceCount.ReferenceController;
    }
    else {
      pTVar21 = TSharedFromThis<FTabManager,1>::AsShared
                          ((TSharedFromThis<FTabManager,1> *)&this->_padding_,&local_968);
      local_b00.ReferenceController = (pTVar21->SharedReferenceCount).ReferenceController;
      local_c38 = (FGlobalTabmanager *)pTVar21->Object;
      if (local_b00.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b00.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_b00.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_b08 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_c30,&local_b00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b00.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_968.SharedReferenceCount.ReferenceController);
    pFVar27 = SDockingArea::FArguments::FArguments(&local_760);
    FVar42.ReferenceController = local_c68.SharedReferenceCount.ReferenceController;
    local_958.Object = local_c68.Object;
    local_958.SharedReferenceCount.ReferenceController =
         local_c68.SharedReferenceCount.ReferenceController;
    if (local_c68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar27 = SDockingArea::FArguments::ParentWindow(pFVar27,&local_958);
    pFVar28 = SDockingTabStack::FArguments::FArguments(&local_540);
    local_b90.Arg0 = NewStack(&local_928);
    FLLMScope::FLLMScope
              ((FLLMScope *)&local_c58,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
              );
    local_b98 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_b80,&local_b98,true);
    TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
    ::
    TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
              (&local_a78,"SDockingTabStack",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
               ,0x6c2,&local_b90);
    FMemScope::~FMemScope(&local_b80);
    FLLMScope::~FLLMScope((FLLMScope *)&local_c58);
    FVar8.ReferenceController = local_a78._Widget.SharedReferenceCount.ReferenceController;
    if (local_a78._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a78._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a78._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    local_c78 = (FDeprecateVector2DParameter)local_a78._Widget.Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar29 = TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
              ::operator<<=(&local_a78,&local_938,pFVar28);
    local_a60.Object = (SDockingNode *)pTVar29->Object;
    local_a60.SharedReferenceCount.ReferenceController =
         (pTVar29->SharedReferenceCount).ReferenceController;
    if (local_a60.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a60.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a60.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar27 = SDockingArea::FArguments::InitialContent(pFVar27,&local_a60);
    pTVar30 = NewPrimaryArea(&local_948);
    if ((local_c38 == (FGlobalTabmanager *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
      return pTVar16;
    }
    local_af8.Object = (FTabManager *)local_c38;
    local_af8.SharedReferenceCount.ReferenceController = FStack_c30.ReferenceController;
    if (FStack_c30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_c30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_c30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_c38 == (FGlobalTabmanager *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
      return pTVar16;
    }
    local_a50.Arg0 = &local_af8;
    local_a50.Arg1 = pTVar30;
    this_02 = MakeTDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
                        (&local_7d8,"SDockingArea",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                         ,0x6be,&local_a50);
    TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
    ::operator<<=(this_02,&local_c48,pFVar27);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7d8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_af8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_948.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_938.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a78._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_928.SharedReferenceCount.ReferenceController);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_540);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_760._InitialContent.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_760._ParentWindow.SharedReferenceCount.ReferenceController);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_760);
    if ((pSVar47 == (SDockTab *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
      return pTVar16;
    }
    EVar12 = SDockTab::GetTabRole(pSVar47);
    if (EVar12 == MajorTab) {
LAB_14274c1ea:
      pTVar17 = FGlobalTabmanager::Get();
      FGlobalTabmanager::GetRootWindow(pTVar17->Object,&local_ae8);
      pFVar31 = FSlateApplication::Get();
      if (local_ae8.Object == (SWindow *)0x0) {
        local_888 = local_c68.Object;
        pTStack_880 = local_c68.SharedReferenceCount.ReferenceController;
        pcVar6 = *(code **)(*(longlong *)pFVar31 + 0x10);
        if (FVar42.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar42.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar42.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        puVar33 = (undefined8 *)(*pcVar6)(pFVar31,local_868,&local_888);
        pSVar5 = (SWindow *)*puVar33;
        local_878.Object = (SWidget *)local_c48.Object;
        local_878.SharedReferenceCount.ReferenceController =
             local_c48.SharedReferenceCount.ReferenceController;
        if (local_c48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_c48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_c48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        SWindow::SetContent(pSVar5,&local_878);
        local_898.SharedReferenceCount.ReferenceController = local_860;
        FVar46.ReferenceController = local_c48.SharedReferenceCount.ReferenceController;
      }
      else {
        pTVar32 = TSharedPtr<SWindow,1>::ToSharedRef(&local_ae8,&local_7c0);
        local_8b8.Object = local_c68.Object;
        local_8b8.SharedReferenceCount.ReferenceController =
             local_c68.SharedReferenceCount.ReferenceController;
        if (FVar42.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar42.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar42.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar32 = FSlateApplication::AddWindowAsNativeChild
                            (pFVar31,&local_898,&local_8b8,pTVar32,true);
        pSVar5 = pTVar32->Object;
        local_8a8.Object = (SWidget *)local_c48.Object;
        local_8a8.SharedReferenceCount.ReferenceController =
             local_c48.SharedReferenceCount.ReferenceController;
        if (local_c48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_c48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_c48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        SWindow::SetContent(pSVar5,&local_8a8);
        FVar46.ReferenceController = local_c48.SharedReferenceCount.ReferenceController;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_898.SharedReferenceCount.ReferenceController);
      local_8f8.SharedReferenceCount.ReferenceController =
           local_ae8.SharedReferenceCount.ReferenceController;
    }
    else {
      if ((pSVar47 == (SDockTab *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
        return pTVar16;
      }
      EVar12 = SDockTab::GetTabRole(pSVar47);
      if (EVar12 == NomadTab) goto LAB_14274c1ea;
      pFVar31 = FSlateApplication::Get();
      if (local_ab8.Object == (SWindow *)0x0) {
        local_8e8 = local_c68.Object;
        pTStack_8e0 = local_c68.SharedReferenceCount.ReferenceController;
        pcVar6 = *(code **)(*(longlong *)pFVar31 + 0x10);
        if (FVar42.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar42.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar42.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        puVar33 = (undefined8 *)(*pcVar6)(pFVar31,local_8c8,&local_8e8);
        pSVar5 = (SWindow *)*puVar33;
        local_8d8.Object = (SWidget *)local_c48.Object;
        local_8d8.SharedReferenceCount.ReferenceController =
             local_c48.SharedReferenceCount.ReferenceController;
        if (local_c48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_c48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_c48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        SWindow::SetContent(pSVar5,&local_8d8);
        local_8f8.SharedReferenceCount.ReferenceController = local_8c0;
        FVar46.ReferenceController = local_c48.SharedReferenceCount.ReferenceController;
      }
      else {
        pTVar32 = TSharedPtr<SWindow,1>::ToSharedRef(&local_ab8,&local_7a0);
        local_918.Object = local_c68.Object;
        local_918.SharedReferenceCount.ReferenceController =
             local_c68.SharedReferenceCount.ReferenceController;
        if (FVar42.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar42.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar42.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar32 = FSlateApplication::AddWindowAsNativeChild
                            (pFVar31,&local_8f8,&local_918,pTVar32,true);
        pSVar5 = pTVar32->Object;
        local_908.Object = (SWidget *)local_c48.Object;
        local_908.SharedReferenceCount.ReferenceController =
             local_c48.SharedReferenceCount.ReferenceController;
        if (local_c48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_c48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_c48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        SWindow::SetContent(pSVar5,&local_908);
        FVar46.ReferenceController = local_c48.SharedReferenceCount.ReferenceController;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8f8.SharedReferenceCount.ReferenceController);
    pSVar45 = (SDockingTabStack *)local_c78;
    if ((local_c78 == (FDeprecateVector2DParameter)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
      return pTVar16;
    }
    if ((pSVar47 == (SDockTab *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
      return pTVar16;
    }
    local_ad8.Object = local_c98.Object;
    local_ad8.SharedReferenceCount.ReferenceController =
         local_c98.SharedReferenceCount.ReferenceController;
    if (local_c98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_c98.Object == (SDockTab *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
      return pTVar16;
    }
    SDockingTabStack::OpenTab(pSVar45,&local_ad8,-1,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ad8.SharedReferenceCount.ReferenceController);
    local_a38 = local_c68.Object;
    pTStack_a30 = local_c68.SharedReferenceCount.ReferenceController;
    pcVar6 = *(code **)(this->_padding_ + 0x28);
    if (FVar42.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar42.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar42.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pSVar47 == (SDockTab *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
      return pTVar16;
    }
    local_ac8 = local_c98.Object;
    pTStack_ac0 = local_c98.SharedReferenceCount.ReferenceController;
    if (local_c98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_c98.Object == (SDockTab *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
      return pTVar16;
    }
    (*pcVar6)(this,&local_ac8,&local_a38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_ac0)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a30)
    ;
    __return_storage_ptr__->Object = pSVar47;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_c98.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar46.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_c30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar42.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ab8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c88);
    local_c98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_14274c972:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c98.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  bVar10 = false;
  if ((local_c98.Object == (SDockTab *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
    return pTVar16;
  }
  if ((((pSVar47->ParentPtr).Object == (SDockingTabWell *)0x0) ||
      (pTVar1 = (pSVar47->ParentPtr).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    if ((pSVar47 == (SDockTab *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
      return pTVar16;
    }
    pTVar1 = (pSVar47->ParentDockingAreaPtr).WeakReferenceCount.ReferenceController;
    pTVar44 = pTVar1;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
LAB_14274b165:
      if ((pSVar47 == (SDockTab *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
        return pTVar16;
      }
      SDockTab::GetTabManagerPtr(pSVar47,&local_b78);
      local_a18.SharedReferenceCount.ReferenceController =
           local_b78.SharedReferenceCount.ReferenceController;
      if (local_b78.Object != (FTabManager *)0x0) {
        this_01 = TSharedPtr<FTabManager,1>::operator->(&local_b78);
        local_a08.Object = local_c98.Object;
        local_a08.SharedReferenceCount.ReferenceController =
             local_c98.SharedReferenceCount.ReferenceController;
        if (local_c98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_c98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_c98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        bVar10 = RemoveFromHiddenPanelDrawerTabs(this_01,&local_a08);
        local_a18.SharedReferenceCount.ReferenceController =
             local_b78.SharedReferenceCount.ReferenceController;
      }
    }
    else {
      aVar7 = pTVar1->SharedReferenceCount;
      do {
        pTVar44 = (TReferenceControllerBase<1> *)0x0;
        if (aVar7 == (atomic<int>)0x0) goto LAB_14274b165;
        LOCK();
        aVar13 = pTVar1->SharedReferenceCount;
        bVar11 = aVar7 == aVar13;
        if (bVar11) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
          aVar13 = aVar7;
        }
        UNLOCK();
        aVar7 = aVar13;
      } while (!bVar11);
      pSVar38 = (pSVar47->ParentDockingAreaPtr).Object;
      pTVar44 = pTVar1;
      if (pSVar38 == (SDockingArea *)0x0) goto LAB_14274b165;
      pTVar16 = SDockingArea::GetPanelDrawerHostedTab(pSVar38,&local_a18);
      if ((pTVar16->Object == pSVar47) ||
         (bVar11 = SDockingArea::RemoveHiddenInactivePanelDrawerTab(pSVar38,&local_c98), bVar11)) {
        bVar10 = true;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a18.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar44);
    if (bVar10 != false) goto LAB_14274b678;
  }
  if (pSVar47 == (SDockTab *)0x0) goto LAB_14274b659;
  local_c18.Object = (SDockTab *)0x0;
  local_c18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((pSVar47 == (SDockTab *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
    return pTVar16;
  }
  SDockTab::GetTabManagerPtr(pSVar47,&local_bd8);
  if (local_bd8.Object != (FTabManager *)0x0) {
    pTVar17 = FGlobalTabmanager::Get();
    pFVar2 = pTVar17->Object;
    if ((local_bd8.Object == (FTabManager *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
      return pTVar16;
    }
    local_b68.Object = local_bd8.Object;
    local_b68.SharedReferenceCount.ReferenceController =
         local_bd8.SharedReferenceCount.ReferenceController;
    if (local_bd8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_bd8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_bd8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_bd8.Object == (FTabManager *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
      return pTVar16;
    }
    pTVar16 = FGlobalTabmanager::GetMajorTabForTabManager(pFVar2,&local_9f8,&local_b68);
    if (&local_c18 != pTVar16) {
      local_c18.Object = pTVar16->Object;
      pTVar16->Object = (SDockTab *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_c18.SharedReferenceCount,&pTVar16->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_9f8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b68.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_bd8.SharedReferenceCount.ReferenceController);
  if ((pSVar47 == (SDockTab *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
    return pTVar16;
  }
  bVar10 = SDockTab::IsActive(pSVar47);
  this_00 = local_c18.Object;
  if (bVar10) {
    if (local_c18.Object != (SDockTab *)0x0) {
      if ((local_c18.Object == (SDockTab *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
        return pTVar16;
      }
      bVar10 = SDockTab::IsForeground(this_00);
      if (!bVar10) goto LAB_14274b3ff;
    }
    if ((pSVar47 == (SDockTab *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
      return pTVar16;
    }
    bVar10 = SDockTab::IsForeground(pSVar47);
    if (!bVar10) goto LAB_14274b3ff;
  }
  else {
LAB_14274b3ff:
    if ((pSVar47 == (SDockTab *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
      return pTVar16;
    }
    SDockTab::GetDockArea(pSVar47,&local_c28);
    if (local_c28.Object == (SDockingArea *)0x0) {
LAB_14274b5a2:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c28.SharedReferenceCount.ReferenceController);
      pcVar6 = *(code **)this->_padding_;
      if ((pSVar47 == (SDockTab *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
        return pTVar16;
      }
      local_b58 = local_c98.Object;
      pTStack_b50 = local_c98.SharedReferenceCount.ReferenceController;
      if (local_c98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_c98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_c98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_c98.Object == (SDockTab *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
        return pTVar16;
      }
      (*pcVar6)(this,&local_b58);
      local_c28.SharedReferenceCount.ReferenceController = pTStack_b50;
    }
    else {
      if ((local_c28.Object == (SDockingArea *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
        return pTVar16;
      }
      pSVar38 = local_c28.Object;
      if ((pSVar47 == (SDockTab *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
        return pTVar16;
      }
      pFVar18 = SDockTab::GetLayoutIdentifier(pSVar47,&local_7b0);
      bVar10 = false;
      pTVar16 = SDockingArea::GetPanelDrawerSystemHostedTab(pSVar38,&local_9d8,pFVar18);
      if (pTVar16->Object == (SDockTab *)0x0) {
LAB_14274b575:
        bVar11 = false;
        bVar9 = false;
        if (bVar10) goto LAB_14274b57d;
      }
      else {
        if ((local_c28.Object == (SDockingArea *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          pTVar16 = (TSharedPtr<SDockTab,1> *)(*pcVar6)();
          return pTVar16;
        }
        bVar10 = true;
        pTVar16 = SDockingArea::GetPanelDrawerHostedTab(local_c28.Object,&local_9e8);
        if (pTVar16->Object == pSVar47) goto LAB_14274b575;
        bVar9 = true;
LAB_14274b57d:
        bVar11 = bVar9;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_9e8.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_9d8.SharedReferenceCount.ReferenceController);
      if (!bVar11) goto LAB_14274b5a2;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c28.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c18.SharedReferenceCount.ReferenceController);
LAB_14274b659:
  __return_storage_ptr__->Object = pSVar47;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_c98.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// IsAllowedTab @ 14274cb70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTabManager::IsAllowedTab(FTabManager *this,FTabId *param_1)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  FName local_res8;
  FString local_18;
  
  bVar3 = true;
  if (this->bReadOnly != false) {
    GetTabReadOnlyBehavior(this,(FTabId *)&local_res8);
    if ((char)local_res8.Number != '\0') {
      bVar3 = local_res8.ComparisonIndex.Value != 1;
    }
  }
  local_res8 = param_1->TabType;
  if ((local_res8 == (FName)0x0) ||
     (bVar1 = FNamePermissionList::PassesFilter((this->TabPermissionList).Object,local_res8), bVar1)
     ) {
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
    if (5 < (byte)LogSlate._0_1_) {
      ::FName::ToString(&local_res8,&local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return (bool)(bVar2 & bVar3);
}

// IsAllowedTabType @ 14274cc40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTabManager::IsAllowedTabType(FTabManager *this,FName param_1)

{
  bool bVar1;
  FName local_res10 [3];
  FString local_18;
  
  if ((param_1 != (FName)0x0) &&
     (local_res10[0] = param_1,
     bVar1 = FNamePermissionList::PassesFilter((this->TabPermissionList).Object,param_1), !bVar1)) {
    if (5 < (byte)LogSlate._0_1_) {
      ::FName::ToString(local_res10,&local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  return true;
}

// IsPanelDrawerOpen @ 14274d380

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTabManager::IsPanelDrawerOpen(FTabManager *this,TSharedPtr<SWindow,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<SDockingArea,1> local_18;
  
  GetDockingAreaForPanelDrawer(this,&local_18,param_1);
  if (local_18.Object == (SDockingArea *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return false;
  }
  if (local_18.Object == (SDockingArea *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = SDockingArea::IsPanelDrawerOpen(local_18.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// IsReadOnly @ 14274d5a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTabManager::IsReadOnly(FTabManager *this)

{
  return this->bReadOnly;
}

// IsTabAllowedInSidebar @ 14274e190

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTabManager::IsTabAllowedInSidebar(FTabManager *this,FTabId *param_1)

{
  bool bVar1;
  FName FVar2;
  FTabSpawnerEntry *pFVar3;
  TSharedRef<FTabSpawnerEntry,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  FVar2 = param_1->TabType;
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
           ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                   *)&this->TabSpawner,FVar2);
  if (pTVar4 == (TSharedRef<FTabSpawnerEntry,1> *)0x0) {
    pTVar4 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
             ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                     *)(this->NomadTabSpawner).Object,FVar2);
    if (pTVar4 == (TSharedRef<FTabSpawnerEntry,1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      goto LAB_14274e1d0;
    }
  }
  pTVar5 = (pTVar4->SharedReferenceCount).ReferenceController;
  pFVar3 = pTVar4->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pFVar3 != (FTabSpawnerEntry *)0x0) {
    bVar1 = pFVar3->bCanSidebarTab;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    return bVar1;
  }
LAB_14274e1d0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return false;
}

// IsTabCloseable @ 14274e390

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTabManager::IsTabCloseable(FTabManager *this,TSharedRef<SDockTab_const_,1> *param_1)

{
  int iVar1;
  FTabId *pFVar2;
  FTabId local_18;
  
  pFVar2 = SDockTab::GetLayoutIdentifier(param_1->Object,&local_18);
  if (((this->MainNonCloseableTabID).TabType == pFVar2->TabType) &&
     (((iVar1 = (this->MainNonCloseableTabID).InstanceId, iVar1 == -1 || (pFVar2->InstanceId == -1))
      || (iVar1 == pFVar2->InstanceId)))) {
    return false;
  }
  return true;
}

// IsValidTabForSpawning @ 14274ea10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTabManager::IsValidTabForSpawning(FTabManager *this,FTab *param_1)

{
  bool bVar1;
  TSharedRef<FTabSpawnerEntry,1> *pTVar2;
  
  bVar1 = IsAllowedTab(this,&param_1->TabId);
  if (!bVar1) {
    return false;
  }
  pTVar2 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
           ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                   *)(this->NomadTabSpawner).Object,(param_1->TabId).TabType);
  if (((pTVar2 != (TSharedRef<FTabSpawnerEntry,1> *)0x0) &&
      (bVar1 = FTabSpawnerEntry::IsSoleTabInstanceSpawned(pTVar2->Object), bVar1)) &&
     (bVar1 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                         &pTVar2->Object->OnFindTabToReuse), !bVar1)) {
    return false;
  }
  return true;
}

// MakeSpawnerMenuEntry @ 1427565d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FTabManager::MakeSpawnerMenuEntry
          (FTabManager *this,FMenuBuilder *param_1,TSharedPtr<FTabSpawnerEntry,1> *param_2)

{
  FTabSpawnerEntry *pFVar1;
  code *pcVar2;
  bool bVar3;
  Type *pTVar4;
  FUIAction *pFVar5;
  FText *pFVar6;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_1d8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1d0;
  ForAnyElementType FStack_1c8;
  ulonglong local_1c0;
  FName local_1b8;
  FName local_1b0;
  undefined1 local_1a8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_190;
  ForAnyElementType FStack_188;
  ulonglong local_180;
  undefined1 local_178 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_160;
  ForAnyElementType FStack_158;
  ulonglong local_150;
  undefined1 local_148 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  ForAnyElementType FStack_128;
  ulonglong local_120;
  FText local_118;
  TSharedPtr<FTabSpawnerEntry,1> local_108;
  FDestructionSentinel local_f8;
  FDestructionSentinel local_e0;
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  FUIAction local_98;
  
  if ((param_2->Object == (FTabSpawnerEntry *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar4 = TAttribute<enum_ETabSpawnerMenuType::Type>::Get(&param_2->Object->MenuType);
  if (*pTVar4 != Hidden) {
    if (this->bReadOnly != false) {
      if ((param_2->Object == (FTabSpawnerEntry *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (param_2->Object->ReadOnlyBehavior == Hidden) {
        return;
      }
    }
    GetTabLabelBasedOnSpawner(this,&local_118,param_2);
    local_1d8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
    local_1d8[1] = false;
    local_1c0 = 0;
    local_1d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_1c8.Data = (FScriptContainerElement *)0x0;
    FText::FText((FText *)local_148);
    local_148[0x10] = false;
    local_108.Object = param_2->Object;
    local_108.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    local_120 = 0;
    local_1b8.ComparisonIndex.Value = 0;
    local_1b8.Number = 0;
    local_1b0.ComparisonIndex.Value = 0;
    local_1b0.Number = 0;
    local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_128.Data = (FScriptContainerElement *)0x0;
    if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar5 = GetUIActionForTabSpawnerMenuEntry(this,&local_98,&local_108);
    if ((param_2->Object == (FTabSpawnerEntry *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = param_2->Object;
    if ((pFVar1 == (FTabSpawnerEntry *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = TAttribute<FText>::Get((TAttribute<FText> *)&param_2->Object->_padding_);
    local_178._0_8_ = (pFVar6->TextData).Reference;
    if ((ITextData *)local_178._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_178._0_8_ + 8))(local_178._0_8_,local_res18);
    }
    local_178._8_4_ = pFVar6->Flags;
    local_150 = 0;
    local_178[0x10] = true;
    local_1a8._0_8_ = local_118.TextData.Reference;
    local_160.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_158.Data = (FScriptContainerElement *)0x0;
    if (local_118.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.TextData.Reference + 8))
                (local_118.TextData.Reference,local_res20);
    }
    local_1a8._8_4_ = local_118.Flags;
    local_1a8[0x10] = true;
    local_180 = 0;
    local_190.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_188.Data = (FScriptContainerElement *)0x0;
    FBaseMenuBuilder::AddMenuEntry
              ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_1a8,
               (TAttribute<FText> *)local_178,(FSlateIcon *)&pFVar1->_padding_,pFVar5,local_1b0,
               Check,local_1b8,(TAttribute<FText> *)local_148,(TAttribute<EVisibility> *)local_1d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_190,(FWriteAccessScope *)&local_f8);
    if (((int)local_180 != 0) && (FStack_188.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_188.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_188,0,0,0x10);
      local_180 = local_180 & 0xffffffff00000000;
    }
    if (local_f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
    }
    if (FStack_188.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_188.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_190.AccessDetector);
    if ((ITextData *)local_1a8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1a8._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_160,(FWriteAccessScope *)&local_e0);
    if (((int)local_150 != 0) && (FStack_158.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_158.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_158,0,0,0x10);
      local_150 = local_150 & 0xffffffff00000000;
    }
    if (local_e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
    }
    if (FStack_158.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_158.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_160.AccessDetector);
    if ((ITextData *)local_178._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_178._0_8_ + 0x10))();
    }
    FUIAction::~FUIAction(&local_98);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_c8);
    if (((int)local_120 != 0) && (FStack_128.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_128.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_128,0,0,0x10);
      local_120 = local_120 & 0xffffffff00000000;
    }
    if (local_c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
    }
    if (FStack_128.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_128.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
    if ((ITextData *)local_148._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1d0,(FWriteAccessScope *)&local_b0);
    if (((int)local_1c0 != 0) && (FStack_1c8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1c8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1c8,0,0,0x10);
      local_1c0 = local_1c0 & 0xffffffff00000000;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (FStack_1c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1c8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1d0.AccessDetector);
    if (local_118.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
    }
  }
  return;
}

// NewArea @ 14275cf70

TSharedRef<FTabManager::FArea,1> * __cdecl
FTabManager::NewArea
          (TSharedRef<FTabManager::FArea,1> *__return_storage_ptr__,TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  FArea *pFVar3;
  TRawPtrProxy<FTabManager::FArea> local_res8;
  
  pFVar3 = ::operator_new(0x98);
  local_res8.Object = (FArea *)0x0;
  if (pFVar3 != (FArea *)0x0) {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    dVar2 = (param_1->field0_0x0)._s_0.X;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->_padding_ = 0x3f800000;
    *(undefined4 *)&pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FArea_FTabManager__6B_;
    pFVar3->WindowPlacement = Placement_Automatic;
    (pFVar3->UnscaledWindowPosition).field0_0x0._s_0.X = 0.0;
    (pFVar3->UnscaledWindowPosition).field0_0x0._s_0.Y = 0.0;
    pFVar3->bIsMaximized = false;
    (pFVar3->ExtensionId).ComparisonIndex = 0;
    (pFVar3->ExtensionId).Number = 0;
    (pFVar3->ActivePanelDrawerTab).TabId.TabType.ComparisonIndex = 0;
    (pFVar3->ActivePanelDrawerTab).TabId.TabType.Number = 0;
    (pFVar3->ActivePanelDrawerTab).TabId.InstanceId = -1;
    (pFVar3->ActivePanelDrawerTab).TabId.Flags = SaveLayout;
    (pFVar3->ActivePanelDrawerTab).Size.MainContentCoefficient = 0.75;
    (pFVar3->ActivePanelDrawerTab).Size.PanelDrawerCoefficient = 0.25;
    (pFVar3->InactivePanelDrawerTabs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->InactivePanelDrawerTabs).ArrayNum = 0;
    (pFVar3->InactivePanelDrawerTabs).ArrayMax = 0;
    (pFVar3->UnscaledWindowSize).field0_0x0._s_0.Y = (double)(float)dVar1;
    (pFVar3->UnscaledWindowSize).field0_0x0._s_0.X = (double)(float)dVar2;
    local_res8.Object = pFVar3;
  }
  TSharedRef<FTabManager::FArea,1>::TSharedRef<FTabManager::FArea,1><FTabManager::FArea>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// NewPrimaryArea @ 14275f750

TSharedRef<FTabManager::FArea,1> * __cdecl
FTabManager::NewPrimaryArea(TSharedRef<FTabManager::FArea,1> *__return_storage_ptr__)

{
  FArea *pFVar1;
  TRawPtrProxy<FTabManager::FArea> local_res8;
  
  pFVar1 = ::operator_new(0x98);
  local_res8.Object = (FArea *)0x0;
  if (pFVar1 != (FArea *)0x0) {
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FArea_FTabManager__6B_;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0x3f800000;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->WindowPlacement = Placement_Automatic;
    (pFVar1->UnscaledWindowPosition).field0_0x0._s_0.X = 0.0;
    (pFVar1->UnscaledWindowPosition).field0_0x0._s_0.Y = 0.0;
    (pFVar1->UnscaledWindowSize).field0_0x0._s_0.X = 0.0;
    (pFVar1->UnscaledWindowSize).field0_0x0._s_0.Y = 0.0;
    pFVar1->bIsMaximized = false;
    (pFVar1->ExtensionId).ComparisonIndex = 0;
    (pFVar1->ExtensionId).Number = 0;
    (pFVar1->ActivePanelDrawerTab).TabId.TabType.ComparisonIndex = 0;
    (pFVar1->ActivePanelDrawerTab).TabId.TabType.Number = 0;
    (pFVar1->ActivePanelDrawerTab).TabId.InstanceId = -1;
    (pFVar1->ActivePanelDrawerTab).TabId.Flags = SaveLayout;
    (pFVar1->ActivePanelDrawerTab).Size.MainContentCoefficient = 0.75;
    (pFVar1->ActivePanelDrawerTab).Size.PanelDrawerCoefficient = 0.25;
    (pFVar1->InactivePanelDrawerTabs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->InactivePanelDrawerTabs).ArrayNum = 0;
    (pFVar1->InactivePanelDrawerTabs).ArrayMax = 0;
    local_res8.Object = pFVar1;
  }
  TSharedRef<FTabManager::FArea,1>::TSharedRef<FTabManager::FArea,1><FTabManager::FArea>
            (__return_storage_ptr__,&local_res8);
  __return_storage_ptr__->Object->WindowPlacement = Placement_NoWindow;
  return __return_storage_ptr__;
}

// NewSplitter @ 14275f810

TSharedRef<FTabManager::FSplitter,1> * __cdecl
FTabManager::NewSplitter(TSharedRef<FTabManager::FSplitter,1> *__return_storage_ptr__)

{
  FSplitter *pFVar1;
  TRawPtrProxy<FTabManager::FSplitter> local_res8 [4];
  
  pFVar1 = ::operator_new(0x38);
  local_res8[0].Object = (FSplitter *)0x0;
  if (pFVar1 != (FSplitter *)0x0) {
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FSplitter_FTabManager__6B_;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0x3f800000;
    pFVar1->Orientation = Orient_Horizontal;
    (pFVar1->ChildNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->ChildNodes).ArrayNum = 0;
    (pFVar1->ChildNodes).ArrayMax = 0;
    local_res8[0].Object = pFVar1;
  }
  TSharedRef<FTabManager::FSplitter,1>::TSharedRef<FTabManager::FSplitter,1><FTabManager::FSplitter>
            (__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// NewStack @ 14275f880

TSharedRef<FTabManager::FStack,1> * __cdecl
FTabManager::NewStack(TSharedRef<FTabManager::FStack,1> *__return_storage_ptr__)

{
  FStack *pFVar1;
  TRawPtrProxy<FTabManager::FStack> local_res10;
  
  pFVar1 = ::operator_new(0x50);
  local_res10.Object = (FStack *)0x0;
  if (pFVar1 != (FStack *)0x0) {
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0x3f800000;
    pFVar1->_padding_ = (longlong)&___7FStack_FTabManager__6B_;
    (pFVar1->Tabs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Tabs).ArrayNum = 0;
    (pFVar1->Tabs).ArrayMax = 0;
    pFVar1->bHideTabWell = false;
    (pFVar1->ForegroundTabId).TabType.ComparisonIndex = 0;
    (pFVar1->ForegroundTabId).TabType.Number = 0;
    (pFVar1->ForegroundTabId).InstanceId = -1;
    (pFVar1->ForegroundTabId).Flags = SaveLayout;
    (pFVar1->ExtensionId).ComparisonIndex = 0;
    (pFVar1->ExtensionId).Number = 0;
    local_res10.Object = pFVar1;
  }
  TSharedRef<FTabManager::FStack,1>::TSharedRef<FTabManager::FStack,1><FTabManager::FStack>
            (__return_storage_ptr__,&local_res10);
  return __return_storage_ptr__;
}

// OnPanelDrawerStateChanged @ 14276a140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::OnPanelDrawerStateChanged(FTabManager *this)

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
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnPanelDrawerStateChangedDelegate,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnPanelDrawerStateChangedDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnPanelDrawerStateChangedDelegate).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnPanelDrawerStateChangedDelegate).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnPanelDrawerStateChangedDelegate).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnPanelDrawerStateChangedDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnPanelDrawerStateChangedDelegate,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// OnTabClosing @ 14276a710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::OnTabClosing(FTabManager *this,TSharedRef<SDockTab,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined1 *puVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  atomic<int> aVar7;
  undefined1 *puVar8;
  FTSTicker *this_00;
  undefined8 *puVar9;
  ulong64 uVar10;
  TWeakPtr<FTSTicker::FElement,1> *pTVar11;
  undefined1 *puVar12;
  bool bVar13;
  TWeakPtr<FTSTicker::FElement,1> TStack_78;
  undefined1 auStack_68 [8];
  FDelegateAllocation FStack_60;
  FDestructionSentinel FStack_50;
  FDestructionSentinel FStack_38;
  FDelegateAllocation *pFStack_20;
  
  ClearPendingLayoutSave(this);
  if (this->bCanDoDeferredLayoutSave != false) {
    pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
    puVar4 = (undefined1 *)this->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_14277dc0c;
        }
        LOCK();
        aVar7 = pTVar3->SharedReferenceCount;
        bVar13 = aVar2 == aVar7;
        if (bVar13) {
          pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar7 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar7;
      } while (!bVar13);
    }
    puVar12 = puVar4;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      puVar12 = (undefined1 *)0x0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    puVar8 = puVar12 + 8;
    if (puVar12 == (undefined1 *)0x0) {
      puVar8 = (undefined1 *)0x0;
    }
    if ((longlong *)puVar8 != &this->_padding_) {
LAB_14277dc0c:
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result.Pin().Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x6c3,L"");
      if (bVar13) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    this_00 = FTSTicker::GetCoreTicker();
    auStack_68 = (undefined1  [8])0x0;
    FStack_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_68,
               (FWriteAccessScope *)&FStack_38);
    pFStack_20 = &FStack_60;
    puVar9 = UE::Core::Private::DelegateAllocate(0x28,&FStack_60);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FTabManager::RequestSavePersistentLayout'::`2'::<lambda_1>_>
                 ::_vftable_;
      puVar9[3] = puVar4;
      puVar9[4] = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
    }
    if (FStack_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_38.Accessor,&FStack_38);
    }
    pTVar11 = FTSTicker::AddTicker
                        (this_00,&TStack_78,
                         (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)auStack_68,
                         __real_40a00000);
    if (&this->PendingLayoutSaveHandle != pTVar11) {
      (this->PendingLayoutSaveHandle).Object = pTVar11->Object;
      pTVar11->Object = (FElement *)0x0;
      pTVar5 = (this->PendingLayoutSaveHandle).WeakReferenceCount.ReferenceController;
      (this->PendingLayoutSaveHandle).WeakReferenceCount.ReferenceController =
           (pTVar11->WeakReferenceCount).ReferenceController;
      (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    if (TStack_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(TStack_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TStack_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (TStack_78.WeakReferenceCount.ReferenceController,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_68,
               (FWriteAccessScope *)&FStack_50);
    if ((FStack_60.DelegateSize != 0) &&
       (FStack_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)FStack_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&FStack_60,0,0,0x10);
      FStack_60.DelegateSize = 0;
    }
    if (FStack_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_50.Accessor,&FStack_50);
    }
    if (FStack_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)FStack_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_68);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  return;
}

// OnTabForegrounded @ 14276af10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::OnTabForegrounded
          (FTabManager *this,TSharedPtr<SDockTab,1> *param_1,TSharedPtr<SDockTab,1> *param_2)

{
  return;
}

// OnTabManagerClosing @ 14276b1f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::OnTabManagerClosing(FTabManager *this)

{
  FScriptContainerElement *pFVar1;
  SWindow *pSVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  atomic<int> aVar6;
  bool bVar7;
  uint uVar8;
  atomic<int> aVar9;
  SWindow **ppSVar10;
  SWindow *this_00;
  TReferenceControllerBase<1> *pTVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  SWindow *local_48;
  TReferenceControllerBase<1> *local_40;
  SWindow *local_38;
  TReferenceControllerBase<1> *local_30;
  
  bVar5 = false;
  bVar4 = false;
  CleanupPointerArray<SDockingArea>(&this->DockAreas);
  SavePersistentLayout(this);
  uVar13 = 0;
  if (0 < (this->DockAreas).ArrayNum) {
    lVar14 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar13 < (this->DockAreas).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->DockAreas).AllocatorInstance.Data;
      lVar12 = 0;
      pTVar11 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar14 + 8);
      if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
LAB_14276b2d4:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x416,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((lVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x26c,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        aVar6 = pTVar11->SharedReferenceCount;
        do {
          if (aVar6 == (atomic<int>)0x0) {
            pTVar11 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14276b2d4;
          }
          LOCK();
          aVar9 = pTVar11->SharedReferenceCount;
          bVar7 = aVar6 == aVar9;
          if (bVar7) {
            pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
            aVar9 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar9;
        } while (!bVar7);
        lVar12 = *(longlong *)(pFVar1 + lVar14);
        if (lVar12 == 0) goto LAB_14276b2d4;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (((*(longlong *)(lVar12 + 0x300) == 0) || (*(longlong *)(lVar12 + 0x308) == 0)) ||
         (*(int *)(*(longlong *)(lVar12 + 0x308) + 8) < 1)) {
        bVar4 = true;
        local_30 = (TReferenceControllerBase<1> *)0x0;
        this_00 = (SWindow *)0x0;
        ppSVar10 = &local_38;
      }
      else {
        local_40 = *(TReferenceControllerBase<1> **)(lVar12 + 0x308);
        this_00 = (SWindow *)0x0;
        bVar5 = true;
        local_48 = (SWindow *)0x0;
        if (local_40 == (TReferenceControllerBase<1> *)0x0) {
LAB_14276b383:
          ppSVar10 = &local_48;
        }
        else {
          aVar6 = local_40->SharedReferenceCount;
          do {
            if (aVar6 == (atomic<int>)0x0) {
              local_40 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_14276b383;
            }
            LOCK();
            aVar9 = local_40->SharedReferenceCount;
            bVar7 = aVar6 == aVar9;
            if (bVar7) {
              local_40->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
              aVar9 = aVar6;
            }
            UNLOCK();
            aVar6 = aVar9;
          } while (!bVar7);
          this_00 = *(SWindow **)(lVar12 + 0x300);
          ppSVar10 = &local_48;
          local_48 = this_00;
        }
      }
      pSVar2 = ppSVar10[1];
      ppSVar10[1] = (SWindow *)0x0;
      *ppSVar10 = (SWindow *)0x0;
      if (bVar4) {
        bVar4 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_30);
      }
      if (bVar5) {
        bVar5 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40);
      }
      if (this_00 != (SWindow *)0x0) {
        SWindow::RequestDestroyWindow(this_00);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 0x10;
    } while ((int)uVar13 < (this->DockAreas).ArrayNum);
  }
  return;
}

// OnTabOpening @ 14276b470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::OnTabOpening(FTabManager *this,TSharedRef<SDockTab,1> *param_1)

{
  (**(code **)(this->_padding_ + 0x50))();
  RequestSavePersistentLayout(this);
  return;
}

// OnTabRelocated @ 14276baf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::OnTabRelocated
          (FTabManager *this,TSharedRef<SDockTab,1> *param_1,TSharedPtr<SWindow,1> *param_2)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  uint uVar6;
  atomic<int> aVar7;
  FTabId *pFVar8;
  TSharedRef<FGlobalTabmanager,1> *pTVar9;
  uint uVar10;
  SDockingArea *this_00;
  TReferenceControllerBase<1> *pTVar11;
  longlong lVar12;
  TSharedPtr<FTabManager,1> local_78;
  TSharedRef<SWindow,1> local_68;
  FTabId local_58;
  FTabMatcher local_48;
  
  SDockTab::NotifyTabRelocated(param_1->Object);
  CleanupPointerArray<SDockingArea>(&this->DockAreas);
  pFVar8 = SDockTab::GetLayoutIdentifier(param_1->Object,&local_58);
  local_48.TabIdToMatch.TabType = pFVar8->TabType;
  local_48.TabIdToMatch.InstanceId = pFVar8->InstanceId;
  local_48.TabIdToMatch.Flags = pFVar8->Flags;
  local_48.TabIdToMatch._13_3_ = *(undefined3 *)&pFVar8->field_0xd;
  local_48.RequiredTabState = SidebarTab|ClosedTab|OpenedTab;
  local_48.TreatIndexNoneAsWildcard = true;
  RemoveTabFromCollapsedAreas(this,&local_48);
  uVar10 = 0;
  if (0 < (this->DockAreas).ArrayNum) {
    lVar12 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->DockAreas).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->DockAreas).AllocatorInstance.Data;
      this_00 = (SDockingArea *)0x0;
      pTVar11 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar12 + 8);
      if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
LAB_14276bc14:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        aVar4 = pTVar11->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pTVar11 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14276bc14;
          }
          LOCK();
          aVar7 = pTVar11->SharedReferenceCount;
          bVar5 = aVar4 == aVar7;
          if (bVar5) {
            pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar7 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar7;
        } while (!bVar5);
        this_00 = *(SDockingArea **)(pFVar1 + lVar12);
        if (this_00 == (SDockingArea *)0x0) goto LAB_14276bc14;
      }
      if ((param_2->Object == (SWindow *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
      local_68.Object = param_2->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68.SharedReferenceCount.ReferenceController = pTVar2;
      if ((local_68.Object == (SWindow *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      SDockingArea::OnTabFoundNewHome(this_00,param_1,&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 0x10;
    } while ((int)uVar10 < (this->DockAreas).ArrayNum);
  }
  pTVar9 = FGlobalTabmanager::Get();
  FGlobalTabmanager::UpdateMainMenu(pTVar9->Object,param_1,true);
  (**(code **)(this->_padding_ + 0x50))(this);
  RequestSavePersistentLayout(this);
  SDockTab::GetTabManagerPtr(param_1->Object,&local_78);
  if (local_78.Object != (FTabManager *)0x0) {
    if ((local_78.Object == (FTabManager *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RequestSavePersistentLayout(local_78.Object);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return;
}

// OpenUnmanagedTab @ 14276fe70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::OpenUnmanagedTab
          (FTabManager *this,FName param_1,FSearchPreference *param_2,
          TSharedRef<SDockTab,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  SDockingTabStack *pSVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  TSharedPtr<SDockingTabWell,1> *pTVar7;
  TSharedPtr<SDockTab,1> *pTVar8;
  SDockingTabWell *pSVar9;
  TSharedPtr<SDockingTabStack,1> *this_00;
  SDockingTabStack *pSVar10;
  SDockingTabStack *pSVar11;
  FName local_res10 [2];
  TSharedPtr<SDockTab,1> local_c8;
  FTabId local_b8;
  FTabId local_a8;
  TSharedPtr<SDockingTabStack,1> local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  TSharedPtr<SDockingTabWell,1> local_68;
  FString local_58;
  TSharedPtr<SDockTab,1> local_48;
  TSharedPtr<SDockingTabStack,1> local_38;
  TSharedPtr<SDockingTabWell,1> local_28;
  
  pSVar10 = (SDockingTabStack *)0x0;
  local_res10[0] = param_1;
  (**(code **)*param_2)(param_2,&local_c8,this,param_1,param_3);
  if (local_c8.Object == (SDockTab *)0x0) {
    local_b8.TabType = local_res10[0];
    local_b8.InstanceId = -1;
    local_b8.Flags = SaveLayout;
    AttemptToOpenTab(this,&local_98,&local_b8,true);
    if (local_98.Object == (SDockingTabStack *)0x0) {
      if (2 < (byte)LogTabManager._0_1_) {
        ::FName::ToString(local_res10,&local_58);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTabManager);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      local_a8.TabType = local_res10[0];
      local_a8.InstanceId = -1;
      local_a8.Flags = SaveLayout;
      pTVar8 = InvokeTab_Internal(this,&local_48,&local_a8,false,false);
      if (&local_c8 != pTVar8) {
        local_c8.Object = pTVar8->Object;
        pTVar8->Object = (SDockTab *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_c8.SharedReferenceCount,&pTVar8->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      local_68.SharedReferenceCount.ReferenceController =
           local_98.SharedReferenceCount.ReferenceController;
      if (local_c8.Object != (SDockTab *)0x0) {
        if ((local_c8.Object == (SDockTab *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar7 = SDockTab::GetParent(local_c8.Object,&local_28);
        pSVar9 = TSharedPtr<SDockingTabWell,1>::operator->(pTVar7);
        this_00 = SDockingTabWell::GetParentDockTabStack(pSVar9,&local_38);
        pSVar10 = TSharedPtr<SDockingTabStack,1>::operator->(this_00);
        SDockingTabStack::OpenTab(pSVar10,param_3,-1,false);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
        local_68.SharedReferenceCount.ReferenceController =
             local_98.SharedReferenceCount.ReferenceController;
      }
    }
    else {
      if ((local_98.Object == (SDockingTabStack *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      SDockingTabStack::OpenTab(local_98.Object,param_3,-1,false);
      local_68.SharedReferenceCount.ReferenceController =
           local_98.SharedReferenceCount.ReferenceController;
    }
    goto LAB_142770197;
  }
  if ((local_c8.Object == (SDockTab *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar7 = SDockTab::GetParent(local_c8.Object,&local_68);
  if ((pTVar7->Object == (SDockingTabWell *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar9 = pTVar7->Object;
  if ((((pSVar9->ParentTabStackPtr).Object == (SDockingTabStack *)0x0) ||
      (pTVar1 = (pSVar9->ParentTabStackPtr).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    local_78 = 0;
    local_70 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pSVar11 = pSVar10;
LAB_14276ffa7:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pSVar2 = (SDockingTabStack *)(pSVar9->ParentTabStackPtr).WeakReferenceCount.ReferenceController;
    pSVar11 = pSVar2;
    if (pSVar2 != (SDockingTabStack *)0x0) {
      aVar4 = *(atomic<int> *)&pSVar2->_padding_;
      do {
        pSVar11 = pSVar10;
        if (aVar4 == (atomic<int>)0x0) goto LAB_14276ff71;
        LOCK();
        aVar6 = *(atomic<int> *)&pSVar2->_padding_;
        bVar5 = aVar4 == aVar6;
        if (bVar5) {
          *(atomic<int> *)&pSVar2->_padding_ = (atomic<int>)((int)aVar4 + 1);
          aVar6 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar6;
      } while (!bVar5);
      pSVar10 = (pSVar9->ParentTabStackPtr).Object;
      pSVar11 = pSVar2;
    }
LAB_14276ff71:
    local_80 = 0;
    local_88 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pSVar10 == (SDockingTabStack *)0x0) goto LAB_14276ffa7;
  }
  SDockingTabStack::OpenTab(pSVar10,param_3,-1,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar11);
LAB_142770197:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  return;
}

// PersistLayout @ 142770ac0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FTabManager::FLayout,1> * __thiscall
FTabManager::PersistLayout
          (FTabManager *this,TSharedRef<FTabManager::FLayout,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  int *piVar8;
  FArea *pFVar9;
  bool bVar10;
  uint uVar11;
  atomic<int> aVar12;
  int iVar13;
  FLayout *pFVar14;
  TSharedRef<FTabManager::FLayout,1> *pTVar15;
  FArea **ppFVar16;
  FSharedReferencer<1> FVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  FLayout *pFVar20;
  FScriptContainerElement *pFVar21;
  FLayout *pFVar22;
  uint local_res8;
  longlong local_res18;
  TRawPtrProxy<FTabManager::FLayout> local_res20;
  FArea *local_b8;
  FSharedReferencer<1> FStack_b0;
  FArea *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  longlong *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  TSharedRef<FTabManager::FLayout,1> local_78;
  TSharedRef<FTabManager::FLayout,1> local_68;
  TSharedRef<FTabManager::FLayout,1> local_58;
  
  FVar3 = this->ActiveLayoutName;
  pFVar14 = ::operator_new(0x38);
  pFVar20 = (FLayout *)0x0;
  local_res20.Object = pFVar20;
  if (pFVar14 != (FLayout *)0x0) {
    pFVar14->_padding_ = 0;
    *(undefined8 *)&pFVar14->_padding_ = 0;
    (pFVar14->PrimaryArea).Object = (FArea *)0x0;
    (pFVar14->PrimaryArea).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pFVar14->Areas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar14->Areas).ArrayNum = 0;
    (pFVar14->Areas).ArrayMax = 0;
    *(FName *)&(pFVar14->LayoutName).ComparisonIndex = FVar3;
    local_res20.Object = pFVar14;
  }
  TSharedRef<FTabManager::FLayout,1>::TSharedRef<FTabManager::FLayout,1><FTabManager::FLayout>
            (__return_storage_ptr__,&local_res20);
  local_res8 = 0;
  if (0 < (this->DockAreas).ArrayNum) {
    local_res18 = 0;
    pFVar14 = pFVar20;
    do {
      local_b8 = (FArea *)0x0;
      FStack_b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      uVar11 = 0;
      if ((int)(uint)pFVar14 < (this->DockAreas).ArrayNum) {
        uVar11 = ~(uint)pFVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar15 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar7)();
        return pTVar15;
      }
      pFVar21 = (this->DockAreas).AllocatorInstance.Data;
      pFVar14 = *(FLayout **)(pFVar21 + local_res18 + 8);
      pFVar22 = pFVar14;
      if (pFVar14 != (FLayout *)0x0) {
        aVar2 = *(atomic<int> *)&pFVar14->_padding_;
        do {
          pFVar22 = pFVar20;
          if (aVar2 == (atomic<int>)0x0) goto LAB_142770be6;
          LOCK();
          aVar12 = *(atomic<int> *)&pFVar14->_padding_;
          bVar10 = aVar2 == aVar12;
          if (bVar10) {
            *(atomic<int> *)&pFVar14->_padding_ = (atomic<int>)((int)aVar2 + 1);
            aVar12 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar12;
        } while (!bVar10);
        plVar6 = *(longlong **)(pFVar21 + local_res18);
        pFVar22 = pFVar14;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x288))(plVar6,&local_98);
          if (local_98 != (longlong *)0x0) {
            if ((local_98 == (longlong *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              pTVar15 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar7)();
              return pTVar15;
            }
            ppFVar16 = (FArea **)(**(code **)(*local_98 + 0x18))(local_98,local_88);
            if (&local_b8 != ppFVar16) {
              local_b8 = *ppFVar16;
              *ppFVar16 = (FArea *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&FStack_b0,(FSharedReferencer<1> *)(ppFVar16 + 1));
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_80);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_90);
        }
      }
LAB_142770be6:
      pFVar9 = local_b8;
      FVar17.ReferenceController = FStack_b0.ReferenceController;
      if (local_b8 != (FArea *)0x0) {
        pFVar14 = __return_storage_ptr__->Object;
        if ((local_b8 == (FArea *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          pTVar15 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar7)();
          return pTVar15;
        }
        FVar17.ReferenceController = FStack_b0.ReferenceController;
        local_a8 = local_b8;
        pTStack_a0 = FStack_b0.ReferenceController;
        if (FStack_b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FStack_b0.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FStack_b0.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_b8 == (FArea *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          pTVar15 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar7)();
          return pTVar15;
        }
        pFVar21 = (pFVar14->Areas).AllocatorInstance.Data;
        if (((pFVar21 <= (FScriptContainerElement *)&local_a8) &&
            ((FScriptContainerElement *)&local_a8 <
             pFVar21 + (longlong)(pFVar14->Areas).ArrayMax * 0x10)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          pTVar15 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar7)();
          return pTVar15;
        }
        iVar13 = (pFVar14->Areas).ArrayNum;
        piVar8 = &(pFVar14->Areas).ArrayMax;
        if (iVar13 == *piVar8) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(pFVar14->Areas).AllocatorInstance,piVar8);
        }
        (pFVar14->Areas).ArrayNum = iVar13 + 1;
        pFVar21 = (pFVar14->Areas).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
        *(FArea **)pFVar21 = local_a8;
        *(TReferenceControllerBase<1> **)(pFVar21 + 8) = pTStack_a0;
        if (pTStack_a0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_a0->SharedReferenceCount =
               (atomic<int>)((int)pTStack_a0->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar15 = TSharedFromThis<FTabManager::FLayout,1>::AsShared
                            ((TSharedFromThis<FTabManager::FLayout,1> *)pFVar14,&local_78);
        pTVar4 = (pTVar15->SharedReferenceCount).ReferenceController;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_a0);
        if ((pFVar9 == (FArea *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          pTVar15 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar7)();
          return pTVar15;
        }
        if (pFVar9->WindowPlacement == Placement_NoWindow) {
          if ((((__return_storage_ptr__->Object->PrimaryArea).Object != (FArea *)0x0) &&
              (pTVar4 = (__return_storage_ptr__->Object->PrimaryArea).WeakReferenceCount.
                        ReferenceController, pTVar4 != (TReferenceControllerBase<1> *)0x0)) &&
             ((0 < (int)pTVar4->SharedReferenceCount &&
              (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_6813193255430126582>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                                   ,0x40a,"!PersistentLayout->PrimaryArea.IsValid()"), bVar10)))) {
            pcVar7 = (code *)swi(3);
            pTVar15 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar7)();
            return pTVar15;
          }
          pFVar14 = __return_storage_ptr__->Object;
          (pFVar14->PrimaryArea).Object = pFVar9;
          if (FVar17.ReferenceController !=
              (pFVar14->PrimaryArea).WeakReferenceCount.ReferenceController) {
            if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FVar17.ReferenceController)->WeakReferenceCount =
                   (atomic<int>)((int)(FVar17.ReferenceController)->WeakReferenceCount + 1);
              UNLOCK();
            }
            pTVar4 = (pFVar14->PrimaryArea).WeakReferenceCount.ReferenceController;
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar1 = &pTVar4->WeakReferenceCount;
              aVar2 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar2 == (atomic<int>)0x1) {
                (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
              }
            }
            (pFVar14->PrimaryArea).WeakReferenceCount.ReferenceController =
                 FVar17.ReferenceController;
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar22);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar17.ReferenceController);
      local_res8 = local_res8 + 1;
      pFVar14 = (FLayout *)(ulonglong)local_res8;
      local_res18 = local_res18 + 0x10;
    } while ((int)local_res8 < (this->DockAreas).ArrayNum);
  }
  pFVar14 = pFVar20;
  pFVar22 = pFVar20;
  if (0 < (this->CollapsedDockAreas).ArrayNum) {
    do {
      uVar19 = (uint)pFVar14;
      pFVar14 = __return_storage_ptr__->Object;
      uVar11 = 0;
      if ((int)uVar19 < (this->CollapsedDockAreas).ArrayNum) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar15 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar7)();
        return pTVar15;
      }
      pFVar21 = (pFVar14->Areas).AllocatorInstance.Data;
      pFVar18 = (FScriptContainerElement *)
                ((longlong)&pFVar22->_padding_ +
                (longlong)(this->CollapsedDockAreas).AllocatorInstance.Data);
      if (((pFVar21 <= pFVar18) && (pFVar18 < pFVar21 + (longlong)(pFVar14->Areas).ArrayMax * 0x10))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar15 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar7)();
        return pTVar15;
      }
      iVar13 = (pFVar14->Areas).ArrayNum;
      piVar8 = &(pFVar14->Areas).ArrayMax;
      if (iVar13 == *piVar8) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(pFVar14->Areas).AllocatorInstance,piVar8);
      }
      (pFVar14->Areas).ArrayNum = iVar13 + 1;
      pFVar21 = (pFVar14->Areas).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
      *(undefined8 *)pFVar21 = *(undefined8 *)pFVar18;
      lVar5 = *(longlong *)(pFVar18 + 8);
      *(longlong *)(pFVar21 + 8) = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      pTVar15 = TSharedFromThis<FTabManager::FLayout,1>::AsShared
                          ((TSharedFromThis<FTabManager::FLayout,1> *)pFVar14,&local_68);
      pTVar4 = (pTVar15->SharedReferenceCount).ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pFVar14 = (FLayout *)(ulonglong)(uVar19 + 1);
      pFVar22 = (FLayout *)&pFVar22->PrimaryArea;
    } while ((int)(uVar19 + 1) < (this->CollapsedDockAreas).ArrayNum);
  }
  pFVar14 = pFVar20;
  if (0 < (this->InvalidDockAreas).ArrayNum) {
    do {
      uVar19 = (uint)pFVar20;
      pFVar20 = __return_storage_ptr__->Object;
      uVar11 = 0;
      if ((int)uVar19 < (this->InvalidDockAreas).ArrayNum) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar15 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar7)();
        return pTVar15;
      }
      pFVar21 = (pFVar20->Areas).AllocatorInstance.Data;
      pFVar18 = (FScriptContainerElement *)
                ((longlong)&pFVar14->_padding_ +
                (longlong)(this->InvalidDockAreas).AllocatorInstance.Data);
      if (((pFVar21 <= pFVar18) && (pFVar18 < pFVar21 + (longlong)(pFVar20->Areas).ArrayMax * 0x10))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar15 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar7)();
        return pTVar15;
      }
      iVar13 = (pFVar20->Areas).ArrayNum;
      piVar8 = &(pFVar20->Areas).ArrayMax;
      if (iVar13 == *piVar8) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(pFVar20->Areas).AllocatorInstance,piVar8);
      }
      (pFVar20->Areas).ArrayNum = iVar13 + 1;
      pFVar21 = (pFVar20->Areas).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
      *(undefined8 *)pFVar21 = *(undefined8 *)pFVar18;
      lVar5 = *(longlong *)(pFVar18 + 8);
      *(longlong *)(pFVar21 + 8) = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      pTVar15 = TSharedFromThis<FTabManager::FLayout,1>::AsShared
                          ((TSharedFromThis<FTabManager::FLayout,1> *)pFVar20,&local_58);
      pTVar4 = (pTVar15->SharedReferenceCount).ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pFVar20 = (FLayout *)(ulonglong)(uVar19 + 1);
      pFVar14 = (FLayout *)&pFVar14->PrimaryArea;
    } while ((int)(uVar19 + 1) < (this->InvalidDockAreas).ArrayNum);
  }
  return __return_storage_ptr__;
}

// PopulateLocalTabSpawnerMenu @ 142773150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FTabManager::PopulateLocalTabSpawnerMenu(FTabManager *this,FMenuBuilder *param_1)

{
  TSharedRef<FWorkspaceItem,1> *pTVar1;
  TSharedRef<FWorkspaceItem,1> local_28;
  TSharedRef<FWorkspaceItem,1> local_18;
  
  pTVar1 = TSharedPtr<FWorkspaceItem,1>::ToSharedRef(&this->LocalWorkspaceMenuRoot,&local_18);
  local_28.Object = pTVar1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  PopulateTabSpawnerMenu(this,param_1,&local_28,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar1->SharedReferenceCount).ReferenceController);
  return;
}

// PopulateTabSpawnerMenu @ 1427731d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FTabManager::PopulateTabSpawnerMenu(FTabManager *this,FMenuBuilder *param_1,FName *param_2)

{
  FName FVar1;
  FTabSpawnerEntry *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FTabSpawnerEntry,1> local_28;
  
  FVar1 = *param_2;
  local_28.Object =
       (FTabSpawnerEntry *)
       TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
       ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
               *)&this->TabSpawner,FVar1);
  if ((local_28.Object == (FTabSpawnerEntry *)0x0) &&
     (local_28.Object =
           (FTabSpawnerEntry *)
           TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
           ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                   *)(this->NomadTabSpawner).Object,FVar1),
     local_28.Object == (FTabSpawnerEntry *)0x0)) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar3 = ((FSharedReferencer<1> *)&(local_28.Object)->_padding_)->ReferenceController;
    pFVar2 = (FTabSpawnerEntry *)(local_28.Object)->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.Object = pFVar2;
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pFVar2 != (FTabSpawnerEntry *)0x0) {
      MakeSpawnerMenuEntry(this,param_1,&local_28);
      goto LAB_1427732a9;
    }
  }
  if (2 < (byte)LogSlate._0_1_) {
    ::FName::ToString(param_2,(FString *)&local_28);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if (local_28.Object != (FTabSpawnerEntry *)0x0) {
      FMemory::Free(local_28.Object);
    }
  }
LAB_1427732a9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// PopulateTabSpawnerMenu @ 1427732d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FTabManager::PopulateTabSpawnerMenu
          (FTabManager *this,FMenuBuilder *param_1,TSharedRef<FWorkspaceItem,1> *param_2)

{
  TSharedRef<FWorkspaceItem,1> local_18;
  
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  PopulateTabSpawnerMenu(this,param_1,&local_18,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// PopulateTabSpawnerMenu @ 142773320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FTabManager::PopulateTabSpawnerMenu
          (FTabManager *this,FMenuBuilder *param_1,TSharedRef<FWorkspaceItem,1> *param_2,
          bool param_3)

{
  atomic<int> aVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  TArray<TWeakPtr<FTabSpawnerEntry,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  TArray<TWeakPtr<FTabSpawnerEntry,1>,TSizedDefaultAllocator<32>_> *pTVar14;
  undefined1 local_res20 [8];
  TArray<TWeakPtr<FTabSpawnerEntry,1>,TSizedDefaultAllocator<32>_> local_90;
  TSharedPtr<FTabSpawnerEntry,1> local_80;
  FPopulateTabSpawnerMenu_Args local_70;
  
  pTVar8 = CollectSpawners(this,&local_90);
  pTVar9 = ::operator_new(0x20);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    pTVar14 = (TArray<TWeakPtr<FTabSpawnerEntry,1>,TSizedDefaultAllocator<32>_> *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar14 = (TArray<TWeakPtr<FTabSpawnerEntry,1>,TSizedDefaultAllocator<32>_> *)(pTVar9 + 1);
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9[1]._padding_ = 0;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_V__TWeakPtr_UFTabSpawnerEntry___00__V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
    ;
    pTVar9[1]._padding_ = (longlong)(pTVar8->AllocatorInstance).Data;
    (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)pTVar8->ArrayNum;
    pTVar9[1].WeakReferenceCount = (atomic<int>)pTVar8->ArrayMax;
    pTVar8->ArrayNum = 0;
    pTVar8->ArrayMax = 0;
    if ((pTVar14 == (TArray<TWeakPtr<FTabSpawnerEntry,1>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  DestructItems<TWeakPtr<FTabSpawnerEntry,1>,int>
            ((TWeakPtr<FTabSpawnerEntry,1> *)local_90.AllocatorInstance.Data,local_90.ArrayNum);
  if ((TWeakPtr<FTabSpawnerEntry,1> *)local_90.AllocatorInstance.Data !=
      (TWeakPtr<FTabSpawnerEntry,1> *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  if (param_3) {
    aVar1 = *(atomic<int> *)&pTVar14->ArrayNum;
    uVar10 = (ulonglong)(int)aVar1;
    pFVar11 = (pTVar14->AllocatorInstance).Data;
    pFVar13 = pFVar11 + uVar10 * 0x10;
LAB_142773418:
    if (*(atomic<int> *)&pTVar14->ArrayNum != SUB84(uVar10,0)) {
      `TCheckedPointerIterator<TWeakPtr<FTabSpawnerEntry,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar11 != pFVar13) {
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar11 + 8);
      local_80.Object = (FTabSpawnerEntry *)0x0;
      local_80.SharedReferenceCount.ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        aVar5 = pTVar2->SharedReferenceCount;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            uVar10 = (ulonglong)(uint)aVar1;
            pFVar11 = pFVar11 + 0x10;
            goto LAB_142773418;
          }
          LOCK();
          aVar7 = pTVar2->SharedReferenceCount;
          bVar6 = aVar5 == aVar7;
          if (bVar6) {
            pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar7 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar7;
        } while (!bVar6);
        if ((pTVar2 != (TReferenceControllerBase<1> *)0x0) &&
           (local_80.Object = *(FTabSpawnerEntry **)pFVar11,
           local_80.Object != (FTabSpawnerEntry *)0x0)) {
          pTVar3 = (TReferenceControllerBase<1> *)(local_80.Object)->_padding_;
          lVar12 = 0;
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            aVar5 = pTVar3->SharedReferenceCount;
            do {
              if (aVar5 == (atomic<int>)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)0x0);
                goto LAB_1427734cb;
              }
              LOCK();
              aVar7 = pTVar3->SharedReferenceCount;
              bVar6 = aVar5 == aVar7;
              if (bVar6) {
                pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
                aVar7 = aVar5;
              }
              UNLOCK();
              aVar5 = aVar7;
            } while (!bVar6);
            lVar12 = (local_80.Object)->_padding_;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          if (lVar12 == 0) {
LAB_1427734cb:
            MakeSpawnerMenuEntry(this,param_1,&local_80);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      uVar10 = (ulonglong)(uint)aVar1;
      pFVar11 = pFVar11 + 0x10;
      goto LAB_142773418;
    }
  }
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_70.MenuNode.Object = param_2->Object;
  local_70.MenuNode.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_70.MenuNode.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_70.MenuNode.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_70.MenuNode.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_70.Level = 0;
  local_70.AllSpawners.Object = pTVar14;
  local_70.AllSpawners.SharedReferenceCount.ReferenceController = pTVar9;
  PopulateTabSpawnerMenu_Helper(this,param_1,&local_70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// PopulateTabSpawnerMenu_Helper @ 142773580

/* WARNING: Removing unreachable block (ram,0x0001427738dd) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FTabManager::PopulateTabSpawnerMenu_Helper
          (FTabManager *this,FMenuBuilder *param_1,FPopulateTabSpawnerMenu_Args *param_2)

{
  FWorkspaceItem *pFVar1;
  TArray<TWeakPtr<FTabSpawnerEntry,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  FTabSpawnerEntry *pFVar6;
  FSharedReferencer<1> FVar7;
  undefined4 uVar8;
  TArray<TSharedRef<FWorkspaceItem,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  atomic<int> aVar14;
  FText *pFVar15;
  FName *pFVar16;
  undefined8 *puVar17;
  ulong64 uVar18;
  TReferenceControllerBase<1> *pTVar19;
  ForAnyElementType FVar20;
  FTabSpawnerEntry *pFVar21;
  longlong lVar22;
  int iVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  atomic<int> *paVar26;
  longlong lVar27;
  uint local_394;
  undefined1 local_390 [8];
  FDelegateAllocation local_388;
  undefined1 local_378 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_370;
  ForAnyElementType FStack_368;
  ulonglong local_360;
  undefined1 local_358 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_350;
  ForAnyElementType FStack_348;
  ulonglong local_340;
  TSharedPtr<FTabSpawnerEntry,1> local_338;
  undefined1 local_328 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_310;
  ForAnyElementType FStack_308;
  ulonglong local_300;
  undefined1 local_2f8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2e0;
  ForAnyElementType FStack_2d8;
  ulonglong local_2d0;
  undefined1 local_2c8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2b0;
  ForAnyElementType FStack_2a8;
  ulonglong local_2a0;
  FWorkspaceItem *local_298;
  FScriptContainerElement *local_290;
  FName local_288;
  FName local_280;
  longlong local_278;
  longlong local_270;
  TReferenceControllerBase<1> *local_268;
  FString local_260;
  code *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 local_238 [4];
  undefined1 local_234 [4];
  undefined1 local_230 [8];
  TReferenceControllerBase<1> *local_228;
  TArray<TSharedRef<FWorkspaceItem,1>,TSizedDefaultAllocator<32>_> *local_220;
  undefined1 local_218 [208];
  undefined1 local_148 [8];
  void *pvStack_140;
  undefined8 local_138;
  FDestructionSentinel local_130;
  FDestructionSentinel local_118;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDelegateAllocation *local_88;
  FPopulateTabSpawnerMenu_Args local_80;
  FName local_58 [3];
  
  uVar8 = uStack_23c;
  pFVar1 = (param_2->MenuNode).Object;
  local_220 = &pFVar1->ChildItems;
  bVar11 = false;
  local_394 = 0;
  iVar23 = (pFVar1->ChildItems).ArrayNum;
  if (0 < iVar23) {
    local_278 = 0;
    do {
      pTVar9 = local_220;
      lVar27 = local_278;
      uVar13 = 0;
      if ((int)local_394 < iVar23) {
        uVar13 = ~local_394 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar24 = (pTVar9->AllocatorInstance).Data + lVar27;
      local_290 = pFVar24;
      (**(code **)**(undefined8 **)pFVar24)(*(undefined8 **)pFVar24,&local_338);
      if (local_338.Object == (FTabSpawnerEntry *)0x0) {
        puVar17 = *(undefined8 **)pFVar24;
        pTVar2 = (param_2->AllSpawners).Object;
        (**(code **)*puVar17)(puVar17,&local_270);
        if (local_270 != 0) {
          bVar11 = true;
          if ((local_270 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x408,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar27 = local_270;
          local_228 = local_268;
          if (local_268 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_268->SharedReferenceCount =
                 (atomic<int>)((int)local_268->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_270 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar24 = (pTVar2->AllocatorInstance).Data;
          pFVar25 = pFVar24 + (longlong)pTVar2->ArrayNum * 0x10;
          for (; pFVar24 != pFVar25; pFVar24 = pFVar24 + 0x10) {
            pTVar19 = *(TReferenceControllerBase<1> **)(pFVar24 + 8);
            lVar22 = 0;
            if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
              aVar5 = pTVar19->SharedReferenceCount;
              do {
                if (aVar5 == (atomic<int>)0x0) {
                  pTVar19 = (TReferenceControllerBase<1> *)0x0;
                  goto LAB_142773826;
                }
                LOCK();
                aVar14 = pTVar19->SharedReferenceCount;
                bVar10 = aVar5 == aVar14;
                if (bVar10) {
                  pTVar19->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
                  aVar14 = aVar5;
                }
                UNLOCK();
                aVar5 = aVar14;
              } while (!bVar10);
              lVar22 = *(longlong *)pFVar24;
            }
LAB_142773826:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar19);
            if (lVar27 == lVar22) {
              bVar10 = true;
              goto LAB_142773843;
            }
          }
        }
        bVar10 = false;
LAB_142773843:
        if (bVar11) {
          bVar11 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_228);
        }
        iVar23 = 0;
        if (!bVar10) {
          lVar27 = 0;
          for (; iVar23 < *(int *)(puVar17 + 0x1e); iVar23 = iVar23 + 1) {
            if ((iVar23 < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            bVar12 = FWorkspaceItem::HasChildrenIn
                               (*(FWorkspaceItem **)(lVar27 + puVar17[0x1d]),pTVar2);
            if (bVar12) {
              bVar10 = true;
              break;
            }
            lVar27 = lVar27 + 0x10;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_268);
        pFVar24 = local_290;
        if (bVar10) {
          pTVar19 = (param_2->AllSpawners).SharedReferenceCount.ReferenceController;
          iVar23 = param_2->Level + 1;
          pTVar2 = (param_2->AllSpawners).Object;
          if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
            paVar26 = (atomic<int> *)&DAT_00000008;
          }
          else {
            paVar26 = &pTVar19->SharedReferenceCount;
            LOCK();
            *paVar26 = (atomic<int>)((int)*paVar26 + 1);
            UNLOCK();
          }
          pTVar3 = *(TReferenceControllerBase<1> **)(local_290 + 8);
          local_298 = *(FWorkspaceItem **)local_290;
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          lVar27 = *(longlong *)local_290;
          if ((param_2->Level & 1) == 0) {
            pFVar15 = TAttribute<FText>::Get((TAttribute<FText> *)(lVar27 + 0x60));
            FText::BuildSourceString(pFVar15,&local_260);
            ::FString::ReplaceInline(&local_260,L" ",L"",IgnoreCase);
            memset(local_218,0,200);
            local_218._24_8_ = 0;
            local_218._56_8_ = 0;
            local_218._88_8_ = 0;
            local_218._120_8_ = 0;
            local_218._152_8_ = 0;
            local_218._184_8_ = 0;
            local_138 = 0;
            local_360 = 0;
            local_218._8_8_ = 0;
            local_218._16_8_ = 0;
            local_218[0x20] = false;
            local_218[0x21] = false;
            local_218._40_8_ = 0;
            local_218._48_8_ = 0;
            local_218[0x40] = false;
            local_218[0x41] = false;
            local_218._72_8_ = 0;
            local_218._80_8_ = 0;
            local_218[0x60] = false;
            local_218[0x61] = false;
            local_218._104_8_ = 0;
            local_218._112_8_ = 0;
            local_218._128_4_ = 0;
            local_218[0x84] = false;
            local_218._136_8_ = 0;
            local_218._144_8_ = 0;
            local_218[0xa0] = Preferred;
            local_218[0xa1] = false;
            local_218._168_8_ = 0;
            local_218._176_8_ = 0;
            local_218[0xc1] = false;
            local_218[0xc3] = false;
            local_218[200] = false;
            local_148 = (undefined1  [8])0x0;
            pvStack_140 = (void *)0x0;
            local_378[0] = (TEnumAsByte<EVisibility::Private>)0x19;
            local_378[1] = false;
            local_370.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            FStack_368.Data = (FScriptContainerElement *)0x0;
            pFVar15 = TAttribute<FText>::Get((TAttribute<FText> *)(*(longlong *)pFVar24 + 0x60));
            local_328._0_8_ = (pFVar15->TextData).Reference;
            if ((ITextData *)local_328._0_8_ != (ITextData *)0x0) {
              (**(code **)((longlong)*(ITextData *)local_328._0_8_ + 8))(local_328._0_8_,local_238);
            }
            local_328._8_4_ = pFVar15->Flags;
            local_328[0x10] = true;
            FVar20.Data = (FScriptContainerElement *)L"";
            if (local_260.Data.ArrayNum != 0) {
              FVar20.Data = local_260.Data.AllocatorInstance.Data;
            }
            local_310.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            FStack_308.Data = (FScriptContainerElement *)0x0;
            local_300 = 0;
            pFVar16 = ::FName::FName(local_58,(wchar_t *)FVar20.Data);
            FMenuBuilder::BeginSection
                      (param_1,*pFVar16,(TAttribute<FText> *)local_328,
                       (TAttribute<EVisibility> *)local_378,
                       (TAttribute<FMenuEntryResizeParams> *)local_218);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_310,(FWriteAccessScope *)&local_130);
            if (((int)local_300 != 0) && (FStack_308.Data != (FScriptContainerElement *)0x0)) {
              (*(code *)**(undefined8 **)FStack_308.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&FStack_308,0,0,0x10);
              local_300 = local_300 & 0xffffffff00000000;
            }
            if (local_130.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
            }
            if (FStack_308.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_308.Data);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_310.AccessDetector);
            if ((ITextData *)local_328._0_8_ != (ITextData *)0x0) {
              (**(code **)((longlong)*(ITextData *)local_328._0_8_ + 0x10))();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_370,(FWriteAccessScope *)&local_118);
            if (((int)local_360 != 0) && (FStack_368.Data != (FScriptContainerElement *)0x0)) {
              (*(code *)**(undefined8 **)FStack_368.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&FStack_368,0,0,0x10);
              local_360 = local_360 & 0xffffffff00000000;
            }
            if (local_118.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
            }
            if (FStack_368.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_368.Data);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_370.AccessDetector);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_148);
            if (pvStack_140 != (void *)0x0) {
              FMemory::Free(pvStack_140);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_148);
            FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_218);
            if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_80.MenuNode.Object = local_298;
            if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_80.AllSpawners.Object = pTVar2;
            local_80.AllSpawners.SharedReferenceCount.ReferenceController = pTVar19;
            local_80.MenuNode.SharedReferenceCount.ReferenceController = pTVar3;
            local_80.Level = iVar23;
            PopulateTabSpawnerMenu_Helper(this,param_1,&local_80);
            FMenuBuilder::EndSection(param_1);
            if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_260.Data.AllocatorInstance.Data);
            }
          }
          else {
            local_358[0] = (TEnumAsByte<EVisibility::Private>)0x19;
            local_358[1] = false;
            local_248 = PopulateTabSpawnerMenu_Helper;
            local_340 = 0;
            local_288.ComparisonIndex.Value = 0;
            local_288.Number = 0;
            local_350.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            FStack_348.Data = (FScriptContainerElement *)0x0;
            local_280.ComparisonIndex.Value = 0;
            local_280.Number = 0;
            uStack_240 = 0;
            local_390 = (undefined1  [8])0x0;
            local_388.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_388.DelegateSize = 0;
            uStack_23c = uVar8;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_390,
                       (FWriteAccessScope *)&local_a0);
            local_88 = &local_388;
            puVar17 = UE::Core::Private::DelegateAllocate(0x50,&local_388);
            if (puVar17 != (undefined8 *)0x0) {
              *puVar17 = &
                         ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy__UFPopulateTabSpawnerMenu_Args____6B_
              ;
              puVar17[1] = pTVar2;
              puVar17[2] = pTVar19;
              if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                *paVar26 = (atomic<int>)((int)*paVar26 + 1);
                UNLOCK();
              }
              puVar17[3] = local_298;
              puVar17[4] = pTVar3;
              if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                UNLOCK();
              }
              *(int *)(puVar17 + 5) = iVar23;
              uVar18 = FDelegateHandle::GenerateNewID();
              puVar17[6] = uVar18;
              *puVar17 = &
                         ___7__TBaseRawMethodDelegateInstance__0A_VFTabManager____A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy__UFPopulateTabSpawnerMenu_Args____6B_
              ;
              puVar17[7] = this;
              puVar17[8] = local_248;
              puVar17[9] = CONCAT44(uStack_23c,uStack_240);
              if (((this == (FTabManager *)0x0) || (puVar17[8] == 0)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InUserObject != nullptr && MethodPtr != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                      ,0x1d8,L""), bVar10)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            if (local_a0.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
            }
            pFVar24 = local_290;
            pFVar15 = TAttribute<FText>::Get((TAttribute<FText> *)(*(longlong *)local_290 + 0x90));
            local_2c8._0_8_ = (pFVar15->TextData).Reference;
            if ((ITextData *)local_2c8._0_8_ != (ITextData *)0x0) {
              (**(code **)((longlong)*(ITextData *)local_2c8._0_8_ + 8))(local_2c8._0_8_,local_234);
            }
            local_2c8._8_4_ = pFVar15->Flags;
            local_2c8[0x10] = true;
            local_2a0 = 0;
            local_2b0.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            FStack_2a8.Data = (FScriptContainerElement *)0x0;
            pFVar15 = TAttribute<FText>::Get((TAttribute<FText> *)(*(longlong *)pFVar24 + 0x60));
            local_2f8._0_8_ = (pFVar15->TextData).Reference;
            if ((ITextData *)local_2f8._0_8_ != (ITextData *)0x0) {
              (**(code **)((longlong)*(ITextData *)local_2f8._0_8_ + 8))(local_2f8._0_8_,local_230);
            }
            local_2f8._8_4_ = pFVar15->Flags;
            local_2f8[0x10] = true;
            local_2d0 = 0;
            local_2e0.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            FStack_2d8.Data = (FScriptContainerElement *)0x0;
            FMenuBuilder::AddSubMenu
                      (param_1,(TAttribute<FText> *)local_2f8,(TAttribute<FText> *)local_2c8,
                       (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                       local_390,false,(FSlateIcon *)(lVar27 + 0x18),true,local_280,local_288,
                       (TAttribute<EVisibility> *)local_358);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_2e0,(FWriteAccessScope *)&local_100);
            if (((int)local_2d0 != 0) && (FStack_2d8.Data != (FScriptContainerElement *)0x0)) {
              (*(code *)**(undefined8 **)FStack_2d8.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&FStack_2d8,0,0,0x10);
              local_2d0 = local_2d0 & 0xffffffff00000000;
            }
            if (local_100.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
            }
            if (FStack_2d8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_2d8.Data);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2e0.AccessDetector);
            if ((ITextData *)local_2f8._0_8_ != (ITextData *)0x0) {
              (**(code **)((longlong)*(ITextData *)local_2f8._0_8_ + 0x10))();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_2b0,(FWriteAccessScope *)&local_e8);
            if (((int)local_2a0 != 0) && (FStack_2a8.Data != (FScriptContainerElement *)0x0)) {
              (*(code *)**(undefined8 **)FStack_2a8.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&FStack_2a8,0,0,0x10);
              local_2a0 = local_2a0 & 0xffffffff00000000;
            }
            if (local_e8.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
            }
            if (FStack_2a8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_2a8.Data);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2b0.AccessDetector);
            if ((ITextData *)local_2c8._0_8_ != (ITextData *)0x0) {
              (**(code **)((longlong)*(ITextData *)local_2c8._0_8_ + 0x10))();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_390,
                       (FWriteAccessScope *)&local_d0);
            if ((local_388.DelegateSize != 0) &&
               (local_388.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)local_388.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_388,0,0,0x10);
              local_388.DelegateSize = 0;
            }
            if (local_d0.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
            }
            if (local_388.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_388.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_390);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_350,(FWriteAccessScope *)&local_b8);
            if (((int)local_340 != 0) && (FStack_348.Data != (FScriptContainerElement *)0x0)) {
              (*(code *)**(undefined8 **)FStack_348.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&FStack_348,0,0,0x10);
              local_340 = local_340 & 0xffffffff00000000;
            }
            if (local_b8.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
            }
            if (FStack_348.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_348.Data);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_350.AccessDetector);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar19);
        }
      }
      else {
        pTVar2 = (param_2->AllSpawners).Object;
        if ((local_338.Object == (FTabSpawnerEntry *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar7.ReferenceController = local_338.SharedReferenceCount.ReferenceController;
        pFVar6 = local_338.Object;
        if (local_338.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((local_338.Object == (FTabSpawnerEntry *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar24 = (pTVar2->AllocatorInstance).Data;
        pFVar25 = pFVar24 + (longlong)pTVar2->ArrayNum * 0x10;
        for (; pFVar24 != pFVar25; pFVar24 = pFVar24 + 0x10) {
          pTVar19 = *(TReferenceControllerBase<1> **)(pFVar24 + 8);
          pFVar21 = (FTabSpawnerEntry *)0x0;
          if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
            aVar5 = pTVar19->SharedReferenceCount;
            do {
              if (aVar5 == (atomic<int>)0x0) {
                pTVar19 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_142773702;
              }
              LOCK();
              aVar14 = pTVar19->SharedReferenceCount;
              bVar10 = aVar5 == aVar14;
              if (bVar10) {
                pTVar19->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
                aVar14 = aVar5;
              }
              UNLOCK();
              aVar5 = aVar14;
            } while (!bVar10);
            pFVar21 = *(FTabSpawnerEntry **)pFVar24;
          }
LAB_142773702:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar19);
          if (pFVar6 == pFVar21) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar7.ReferenceController);
            MakeSpawnerMenuEntry(this,param_1,&local_338);
            goto LAB_14277410b;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar7.ReferenceController);
      }
LAB_14277410b:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_338.SharedReferenceCount.ReferenceController);
      local_394 = local_394 + 1;
      local_278 = local_278 + 0x10;
      iVar23 = local_220->ArrayNum;
    } while ((int)local_394 < iVar23);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->MenuNode).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->AllSpawners).SharedReferenceCount.ReferenceController);
  return;
}

// RegisterOnPanelDrawerStateChanges @ 142777d80

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
FTabManager::RegisterOnPanelDrawerStateChanges
          (FTabManager *this,
          TDelegate<void___cdecl(FTabManager_const_&),FDefaultDelegateUserPolicy> *param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnPanelDrawerStateChangedDelegate,(FWriteAccessScope *)&local_38);
  uVar6 = 0;
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
  if ((*(int *)&in_R8->field_0x10 != 0) && (*(longlong **)&in_R8->field_0x8 != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)&in_R8->field_0x8 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnPanelDrawerStateChangedDelegate,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
      if ((*(int *)&in_R8->field_0x10 != 0) &&
         (plVar2 = *(longlong **)&in_R8->field_0x8, plVar2 != (longlong *)0x0)) {
        puVar5 = (undefined8 *)(**(code **)(*plVar2 + 0x40))(plVar2,local_res8);
        uVar6 = *puVar5;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      iVar4 = *(int *)&(this->OnPanelDrawerStateChangedDelegate).field_0x10;
      puVar1 = &(this->OnPanelDrawerStateChangedDelegate).field_0x14;
      *(undefined8 *)param_1 = uVar6;
      if (iVar4 == *(int *)puVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)
                                 &(this->OnPanelDrawerStateChangedDelegate).field_0x8,(int *)puVar1)
        ;
      }
      *(int *)&(this->OnPanelDrawerStateChangedDelegate).field_0x10 = iVar4 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 ((longlong)iVar4 * 0x10 +
                 *(longlong *)&(this->OnPanelDrawerStateChangedDelegate).field_0x8),in_R8);
      goto LAB_142777e69;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
LAB_142777e69:
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// RegisterTabSpawner @ 142777ea0

/* WARNING: Enum "Type": Some values do not have unique names */

FTabSpawnerEntry * __thiscall
FTabManager::RegisterTabSpawner
          (FTabManager *this,FName param_1,
          TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
          *param_2,TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                   *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TSharedRef<FGlobalTabmanager,1> *pTVar6;
  FTabSpawnerEntry *pFVar7;
  undefined1 *puVar8;
  FLLMScope local_res8 [2];
  FName local_res10;
  TPairInitializer<FName_const_&,TSharedRef<FTabSpawnerEntry,1>_const_&> local_58;
  TRawPtrProxy<FTabSpawnerEntry> local_48;
  FMemScope local_40;
  TSharedRef<FTabSpawnerEntry,1> local_38;
  FName *local_28;
  TSharedRef<FTabSpawnerEntry,1> *local_20;
  
  local_res10 = param_1;
  uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->TabSpawner).field_0x8 != *(int *)&(this->TabSpawner).field_0x34) {
    puVar8 = *(undefined1 **)&(this->TabSpawner).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->TabSpawner).field_0x38;
    }
    iVar5 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->TabSpawner).field_0x48 - 1U & param_1.Number + uVar4)
                              * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&(this->TabSpawner).field_0x0;
      do {
        if (*(FName *)((longlong)iVar5 * 0x20 + lVar1) == param_1) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6813193255430126518>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                             ,0x44a,"!TabSpawner.Contains(TabId)");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar7 = (FTabSpawnerEntry *)(*pcVar2)();
            return pFVar7;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + lVar1);
      } while (iVar5 != -1);
    }
  }
  pTVar6 = FGlobalTabmanager::Get();
  bVar3 = FGlobalTabmanager::IsLegacyTabType(pTVar6->Object,local_res10);
  if ((bVar3) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6813193255430126517>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                         ,1099,"!FGlobalTabmanager::Get()->IsLegacyTabType(TabId)"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FTabSpawnerEntry *)(*pcVar2)();
    return pFVar7;
  }
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58._4_8_ = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,(FName *)((longlong)&local_58.Key + 4),true);
  pFVar7 = ::operator_new(0x198);
  if (pFVar7 == (FTabSpawnerEntry *)0x0) {
    local_48.Object = (FTabSpawnerEntry *)0x0;
  }
  else {
    local_48.Object = FTabSpawnerEntry::FTabSpawnerEntry(pFVar7,&local_res10,param_2,param_3);
    if ((((local_48.Object != (FTabSpawnerEntry *)0x0) && ((local_48.Object)->_padding_ != 0)) &&
        ((local_48.Object)->_padding_ != 0)) &&
       ((0 < *(int *)((local_48.Object)->_padding_ + 8) &&
        (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InObject || !InObject->DoesSharedInstanceExist()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x7a5,L"Trying to share an already-shared object"), bVar3)))) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FTabSpawnerEntry *)(*pcVar2)();
      return pFVar7;
    }
  }
  TSharedRef<FTabSpawnerEntry,1>::TSharedRef<FTabSpawnerEntry,1><FTabSpawnerEntry>
            (&local_38,&local_48);
  local_28 = &local_res10;
  local_20 = &local_38;
  TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TSharedRef<FTabSpawnerEntry,1>_const_&>_>
            ((TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
              *)&this->TabSpawner,&local_58,(bool *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return local_38.Object;
}

// RemoveFromHiddenPanelDrawerTabs @ 14277c430

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTabManager::RemoveFromHiddenPanelDrawerTabs(FTabManager *this,TSharedPtr<SDockTab,1> *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FTabManager *pFVar8;
  FTabId *pFVar9;
  TSharedPtr<SDockingArea,1> local_38;
  TSharedPtr<FTabManager,1> local_28;
  FTabId local_18;
  
  bVar5 = false;
  if ((param_1->Object == (SDockTab *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  SDockTab::GetDockArea(param_1->Object,&local_38);
  if (local_38.Object != (SDockingArea *)0x0) {
    if ((local_38.Object == (SDockingArea *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    bVar5 = SDockingArea::RemoveHiddenInactivePanelDrawerTab(local_38.Object,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if ((param_1->Object == (SDockTab *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  SDockTab::GetTabManagerPtr(param_1->Object,&local_28);
  if (local_28.Object != (FTabManager *)0x0) {
    pFVar8 = local_28.Object;
    if ((local_28.Object == (FTabManager *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), pFVar8 = local_28.Object, bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if ((param_1->Object == (SDockTab *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar9 = SDockTab::GetLayoutIdentifier(param_1->Object,&local_18);
    if (*(int *)&(pFVar8->PanelDrawerActiveHiddenTabs).field_0x8 ==
        *(int *)&(pFVar8->PanelDrawerActiveHiddenTabs).field_0x34) {
      iVar7 = 0;
    }
    else {
      FVar1 = pFVar9->TabType;
      uVar6 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
      iVar7 = TSet<TTuple<FTabId,TSharedRef<SDockTab,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>,FDefaultSetAllocator>
              ::RemoveImpl<FTabId>
                        ((TSet<TTuple<FTabId,TSharedRef<SDockTab,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>,FDefaultSetAllocator>
                          *)&pFVar8->PanelDrawerActiveHiddenTabs,
                         uVar6 + FVar1.Number ^ pFVar9->InstanceId,pFVar9);
    }
    if (0 < iVar7) {
      bVar5 = true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar5;
}

// RemoveTabFromCollapsedAreas @ 14277d1b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::RemoveTabFromCollapsedAreas(FTabManager *this,FTabMatcher *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TSharedPtr<FTabManager::FStack,1> *pTVar7;
  FScriptContainerElement *_Dst;
  int iVar8;
  uint uVar9;
  FName *pFVar10;
  FStack *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong local_res8;
  TSharedPtr<FTabManager::FStack,1> local_78;
  TSharedRef<FTabManager::FLayoutNode,1> local_68;
  TSharedPtr<FTabManager::FStack,1> local_58;
  FName local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar12 = 0;
  if (0 < (this->CollapsedDockAreas).ArrayNum) {
    local_res8 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar12 < (this->CollapsedDockAreas).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_78.Object = (FStack *)0x0;
      local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar11 = (FStack *)0x0;
      pFVar13 = (this->CollapsedDockAreas).AllocatorInstance.Data + local_res8;
      do {
        pTVar2 = *(TReferenceControllerBase<1> **)(pFVar13 + 8);
        local_68.Object = *(FLayoutNode **)pFVar13;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68.SharedReferenceCount.ReferenceController = pTVar2;
        pTVar7 = FindTabUnderNode(&local_58,param_1,&local_68);
        if (&local_78 != pTVar7) {
          local_78.Object = pTVar7->Object;
          pTVar7->Object = (FStack *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_78.SharedReferenceCount,&pTVar7->SharedReferenceCount);
          pFVar11 = local_78.Object;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        if (pFVar11 == (FStack *)0x0) break;
        if ((pFVar11 == (FStack *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (FName *)(pFVar11->Tabs).AllocatorInstance.Data;
        local_48 = (param_1->TabIdToMatch).TabType;
        uStack_40._0_4_ = (param_1->TabIdToMatch).InstanceId;
        uStack_40._4_1_ = (param_1->TabIdToMatch).Flags;
        uStack_40._5_3_ = *(undefined3 *)&(param_1->TabIdToMatch).field_0xd;
        local_38._0_4_ = param_1->RequiredTabState;
        local_38._4_1_ = param_1->TreatIndexNoneAsWildcard;
        local_38._5_3_ = *(undefined3 *)&param_1->field_0x15;
        if (pFVar3 != pFVar3 + (longlong)(pFVar11->Tabs).ArrayNum * 4) {
          pFVar10 = pFVar3;
          do {
            if ((((pFVar10[2].ComparisonIndex.Value & (undefined4)local_38) != 0) &&
                (*pFVar10 == local_48)) &&
               (((local_38._4_1_ != '\0' && ((undefined4)uStack_40 == 0xffffffff)) ||
                ((undefined4)uStack_40 == pFVar10[1].ComparisonIndex.Value)))) {
              uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar3 >> 5);
              if (uVar9 != 0xffffffff) {
                if ((pFVar11 == (FStack *)0x0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                uVar6 = 0;
                if ((int)uVar9 < (pFVar11->Tabs).ArrayNum) {
                  uVar6 = ~uVar9 >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                _Dst = (pFVar11->Tabs).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20;
                iVar8 = (pFVar11->Tabs).ArrayNum + ~uVar9;
                if (iVar8 != 0) {
                  memmove(_Dst,_Dst + 0x20,(longlong)iVar8 << 5);
                }
                piVar1 = &(pFVar11->Tabs).ArrayNum;
                *piVar1 = *piVar1 + -1;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x20,4,&(pFVar11->Tabs).AllocatorInstance,(pFVar11->Tabs).ArrayNum,
                           &(pFVar11->Tabs).ArrayMax);
                goto LAB_14277d3ac;
              }
              break;
            }
            pFVar10 = pFVar10 + 4;
          } while (pFVar10 != pFVar3 + (longlong)(pFVar11->Tabs).ArrayNum * 4);
        }
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6813193255430124507>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                           ,0xc25,"TabIndex != INDEX_NONE");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_14277d3ac:
      } while (pFVar11 != (FStack *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      uVar12 = uVar12 + 1;
      local_res8 = local_res8 + 0x10;
    } while ((int)uVar12 < (this->CollapsedDockAreas).ArrayNum);
  }
  return;
}

// RequestSavePersistentLayout @ 14277db60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::RequestSavePersistentLayout(FTabManager *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined1 *puVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  atomic<int> aVar7;
  undefined1 *puVar8;
  FTSTicker *this_00;
  undefined8 *puVar9;
  ulong64 uVar10;
  TWeakPtr<FTSTicker::FElement,1> *pTVar11;
  undefined1 *puVar12;
  bool bVar13;
  TWeakPtr<FTSTicker::FElement,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  ClearPendingLayoutSave(this);
  if (this->bCanDoDeferredLayoutSave != false) {
    pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
    puVar4 = (undefined1 *)this->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_14277dc0c;
        }
        LOCK();
        aVar7 = pTVar3->SharedReferenceCount;
        bVar13 = aVar2 == aVar7;
        if (bVar13) {
          pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar7 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar7;
      } while (!bVar13);
    }
    puVar12 = puVar4;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      puVar12 = (undefined1 *)0x0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    puVar8 = puVar12 + 8;
    if (puVar12 == (undefined1 *)0x0) {
      puVar8 = (undefined1 *)0x0;
    }
    if ((longlong *)puVar8 != &this->_padding_) {
LAB_14277dc0c:
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result.Pin().Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x6c3,L"");
      if (bVar13) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    this_00 = FTSTicker::GetCoreTicker();
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_38);
    local_20 = &local_60;
    puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FTabManager::RequestSavePersistentLayout'::`2'::<lambda_1>_>
                 ::_vftable_;
      puVar9[3] = puVar4;
      puVar9[4] = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    pTVar11 = FTSTicker::AddTicker
                        (this_00,&local_78,
                         (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68,
                         __real_40a00000);
    if (&this->PendingLayoutSaveHandle != pTVar11) {
      (this->PendingLayoutSaveHandle).Object = pTVar11->Object;
      pTVar11->Object = (FElement *)0x0;
      pTVar5 = (this->PendingLayoutSaveHandle).WeakReferenceCount.ReferenceController;
      (this->PendingLayoutSaveHandle).WeakReferenceCount.ReferenceController =
           (pTVar11->WeakReferenceCount).ReferenceController;
      (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_78.WeakReferenceCount.ReferenceController,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  return;
}

// RestoreArea @ 14277e810

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockingArea,1> * __thiscall
FTabManager::RestoreArea
          (FTabManager *this,TSharedPtr<SDockingArea,1> *__return_storage_ptr__,
          TSharedRef<FTabManager::FArea,1> *param_1,TSharedPtr<SWindow,1> *param_2,bool param_3,
          EOutputCanBeNullptr param_4,bool param_5)

{
  int *piVar1;
  TArray<TWeakPtr<SDockTab,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  SDockingArea *this_00;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  int iVar7;
  atomic<int> aVar8;
  int iVar9;
  TSharedPtr<SDockingArea,1> *pTVar10;
  TSharedRef<SWidget,1> *pTVar11;
  ulonglong uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FScriptContainerElement *pFVar14;
  TSharedRef<SDockTab,1> *pTVar15;
  ForAnyElementType FVar16;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  SDockTab *local_b0;
  TReferenceControllerBase<1> *local_a8;
  SDockTab *local_a0;
  TReferenceControllerBase<1> *local_98;
  TSharedPtr<SDockingNode,1> local_90;
  TSharedRef<FTabManager::FLayoutNode,1> local_80;
  TSharedRef<SWidget,1> local_70;
  FSidebarTabLists local_60;
  
  pTVar2 = &this->TemporarilySidebaredTabs;
  local_60.LeftSidebarTabs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.LeftSidebarTabs.ArrayNum = 0;
  local_60.LeftSidebarTabs.ArrayMax = 0;
  local_60.RightSidebarTabs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.RightSidebarTabs.ArrayNum = 0;
  local_60.RightSidebarTabs.ArrayMax = 0;
  DestructItems<TWeakPtr<SDockTab,1>,int>
            ((TWeakPtr<SDockTab,1> *)(pTVar2->AllocatorInstance).Data,
             (this->TemporarilySidebaredTabs).ArrayNum);
  piVar1 = &(this->TemporarilySidebaredTabs).ArrayMax;
  (this->TemporarilySidebaredTabs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  local_80.Object = (FLayoutNode *)param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_80.SharedReferenceCount.ReferenceController = pTVar3;
  RestoreArea_Helper(this,&local_90,&local_80,param_2,param_3,&local_60,param_4,param_5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_90.Object == (SDockingNode *)0x0) {
    if ((param_4 == Never) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutputCanBeNullptr != EOutputCanBeNullptr::Never",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                           ,0x7a1,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedPtr<SDockingArea,1> *)(*pcVar4)();
      return pTVar10;
    }
    __return_storage_ptr__->Object = (SDockingArea *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if ((local_90.Object == (SDockingNode *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedPtr<SDockingArea,1> *)(*pcVar4)();
      return pTVar10;
    }
    pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&(local_90.Object)->_padding_,&local_70);
    pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
    this_00 = (SDockingArea *)pTVar11->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.SharedReferenceCount.ReferenceController);
    iVar7 = (**(code **)(this_00->_padding_ + 0x290))(this_00);
    if (iVar7 == 0) {
      this_00->bIsCenterTargetVisible = false;
    }
    else {
      this_00->bIsCenterTargetVisible = true;
      pTVar13 = (this_00->ParentWindowPtr).WeakReferenceCount.ReferenceController;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        aVar5 = pTVar13->SharedReferenceCount;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            pTVar13 = (TReferenceControllerBase<1> *)0x0;
            break;
          }
          LOCK();
          aVar8 = pTVar13->SharedReferenceCount;
          bVar6 = aVar5 == aVar8;
          if (bVar6) {
            pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar8 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar8;
        } while (!bVar6);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    }
    SDockingArea::UpdateWindowChromeAndSidebar(this_00);
    SDockingArea::AddSidebarTabsFromRestoredLayout(this_00,&local_60);
    iVar7 = local_60.LeftSidebarTabs.ArrayNum;
    uVar12 = (ulonglong)local_60.LeftSidebarTabs.ArrayNum;
    pTVar15 = (TSharedRef<SDockTab,1> *)
              (local_60.LeftSidebarTabs.AllocatorInstance.Data + uVar12 * 0x10);
    FVar16.Data = local_60.LeftSidebarTabs.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar12 != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedRef<SDockTab,1>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if ((TSharedRef<SDockTab,1> *)FVar16.Data == pTVar15) break;
      local_b0 = ((TSharedRef<SDockTab,1> *)FVar16.Data)->Object;
      local_a8 = (((TSharedRef<SDockTab,1> *)FVar16.Data)->SharedReferenceCount).ReferenceController
      ;
      if (local_a8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_a8->WeakReferenceCount = (atomic<int>)((int)local_a8->WeakReferenceCount + 1);
        UNLOCK();
      }
      pFVar14 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar14 <= (FScriptContainerElement *)&local_b0) &&
          ((FScriptContainerElement *)&local_b0 < pFVar14 + (longlong)*piVar1 * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TSharedPtr<SDockingArea,1> *)(*pcVar4)();
        return pTVar10;
      }
      iVar9 = (this->TemporarilySidebaredTabs).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      (this->TemporarilySidebaredTabs).ArrayNum = iVar9 + 1;
      *(SDockTab **)pFVar14 = local_b0;
      *(TReferenceControllerBase<1> **)(pFVar14 + 8) = local_a8;
      local_a8 = (TReferenceControllerBase<1> *)0x0;
      FVar16.Data = FVar16.Data + 0x10;
      local_b0 = (SDockTab *)0x0;
      uVar12 = local_60.LeftSidebarTabs._8_8_ & 0xffffffff;
    }
    iVar7 = local_60.RightSidebarTabs.ArrayNum;
    uVar12 = (ulonglong)local_60.RightSidebarTabs.ArrayNum;
    pTVar15 = (TSharedRef<SDockTab,1> *)
              (local_60.RightSidebarTabs.AllocatorInstance.Data + uVar12 * 0x10);
    FVar16.Data = local_60.RightSidebarTabs.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar12 != iVar7) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TSharedRef<SDockTab,1>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if ((TSharedRef<SDockTab,1> *)FVar16.Data == pTVar15) break;
      local_a0 = ((TSharedRef<SDockTab,1> *)FVar16.Data)->Object;
      local_98 = (((TSharedRef<SDockTab,1> *)FVar16.Data)->SharedReferenceCount).ReferenceController
      ;
      if (local_98 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_98->WeakReferenceCount = (atomic<int>)((int)local_98->WeakReferenceCount + 1);
        UNLOCK();
      }
      pFVar14 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar14 <= (FScriptContainerElement *)&local_a0) &&
          ((FScriptContainerElement *)&local_a0 < pFVar14 + (longlong)*piVar1 * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TSharedPtr<SDockingArea,1> *)(*pcVar4)();
        return pTVar10;
      }
      iVar9 = (this->TemporarilySidebaredTabs).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      (this->TemporarilySidebaredTabs).ArrayNum = iVar9 + 1;
      *(SDockTab **)pFVar14 = local_a0;
      *(TReferenceControllerBase<1> **)(pFVar14 + 8) = local_98;
      local_98 = (TReferenceControllerBase<1> *)0x0;
      FVar16.Data = FVar16.Data + 0x10;
      local_a0 = (SDockTab *)0x0;
      uVar12 = local_60.RightSidebarTabs._8_8_ & 0xffffffff;
    }
    __return_storage_ptr__->Object = this_00;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<SDockTab,1>,int>
            ((TSharedRef<SDockTab,1> *)local_60.RightSidebarTabs.AllocatorInstance.Data,
             local_60.RightSidebarTabs.ArrayNum);
  if ((TSharedRef<SDockTab,1> *)local_60.RightSidebarTabs.AllocatorInstance.Data !=
      (TSharedRef<SDockTab,1> *)0x0) {
    FMemory::Free(local_60.RightSidebarTabs.AllocatorInstance.Data);
  }
  DestructItems<TSharedRef<SDockTab,1>,int>
            ((TSharedRef<SDockTab,1> *)local_60.LeftSidebarTabs.AllocatorInstance.Data,
             local_60.LeftSidebarTabs.ArrayNum);
  if ((TSharedRef<SDockTab,1> *)local_60.LeftSidebarTabs.AllocatorInstance.Data !=
      (TSharedRef<SDockTab,1> *)0x0) {
    FMemory::Free(local_60.LeftSidebarTabs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// RestoreArea_Helper @ 14277ec70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockingNode,1> * __thiscall
FTabManager::RestoreArea_Helper
          (FTabManager *this,TSharedPtr<SDockingNode,1> *__return_storage_ptr__,
          TSharedRef<FTabManager::FLayoutNode,1> *param_1,TSharedPtr<SWindow,1> *param_2,
          bool param_3,FSidebarTabLists *param_4,EOutputCanBeNullptr param_5,bool param_6)

{
  int *piVar1;
  float fVar2;
  FScriptContainerElement FVar3;
  uint uVar4;
  uint uVar5;
  EWindowPlacement EVar6;
  FName FVar7;
  FGlobalTabmanager *pFVar8;
  SWindow *pSVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  code *pcVar13;
  FDeprecateVector2DParameter FVar14;
  FDeprecateVector2DParameter FVar15;
  FDeprecateVector2DParameter FVar16;
  EOutputCanBeNullptr EVar17;
  SDockTab *pSVar18;
  SDockingTabStack *pSVar19;
  FStack *pFVar20;
  ETabRole EVar21;
  bool bVar22;
  int iVar23;
  int iVar24;
  TSharedPtr<SDockingNode,1> *pTVar25;
  TSharedRef<FTabSpawnerEntry,1> *pTVar26;
  FArguments *pFVar27;
  TSharedRef<SDockingTabStack,1> *pTVar28;
  undefined8 *puVar29;
  FTabId *pFVar30;
  FName *pFVar31;
  FScriptContainerElement *pFVar32;
  TSharedRef<FGlobalTabmanager,1> *pTVar33;
  FText *pFVar34;
  FArguments *pFVar35;
  FArea *pFVar36;
  T0RequiredArgs *pTVar37;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> *pTVar38;
  TSharedRef<SWindow,1> *pTVar39;
  FSlateApplication *this_00;
  TSharedRef<FTabManager::FArea,1> *pTVar40;
  FArguments *pFVar41;
  TSharedRef<FTabManager,1> *pTVar42;
  TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
  *pTVar43;
  TSharedRef<SDockingArea,1> *pTVar44;
  SDockingArea *pSVar45;
  TSharedPtr<SDockTab,1> *pTVar46;
  TSharedRef<FTabManager::FSplitter,1> *pTVar47;
  FArguments *pFVar48;
  TSlateDecl<SDockingSplitter,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&>_>
  *this_01;
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
  *this_02;
  TSharedRef<SDockTab,1> *pTVar49;
  ulonglong uVar50;
  FSharedReferencer<1> FVar51;
  FName *pFVar52;
  FTabId *pFVar53;
  SWindow *pSVar54;
  char cVar55;
  bool bVar56;
  bool bVar57;
  undefined1 local_18b4 [4];
  TSharedPtr<FTabManager::FArea,1> local_18b0;
  TSharedPtr<SDockTab,1> local_1898;
  TSharedPtr<SDockingArea,1> local_1888;
  SDockingTabStack *local_1878;
  FSharedReferencer<1> FStack_1870;
  T0RequiredArgs local_1868;
  T0RequiredArgs local_1867;
  undefined1 local_1866 [2];
  FScriptContainerElement local_1864;
  undefined1 local_1863;
  FStack *local_1858;
  TReferenceControllerBase<1> *pTStack_1850;
  TArray<TSharedRef<SDockingNode,1>,TSizedDefaultAllocator<32>_> local_1848;
  FLLMScope local_1838;
  FLLMScope local_1834;
  TSharedPtr<FTabManager::FSplitter,1> local_1830;
  SDockTab *local_1818;
  TReferenceControllerBase<1> *pTStack_1810;
  SDockTab *local_1808;
  TReferenceControllerBase<1> *local_1800;
  TArray<TSharedRef<SDockingNode,1>,TSizedDefaultAllocator<32>_> local_17f8;
  TSharedPtr<SDockTab,1> local_17e8;
  SDockTab *local_17d8;
  TReferenceControllerBase<1> *pTStack_17d0;
  TArray<TSharedRef<SDockingNode,1>,TSizedDefaultAllocator<32>_> local_17c8;
  FTabId *local_17b8;
  float local_17b0;
  float fStack_17ac;
  float local_17a8;
  float fStack_17a4;
  float local_17a0;
  float fStack_179c;
  TSharedRef<SDockingSplitter,1> local_1798;
  FTabId local_1788;
  T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&> local_1778;
  FMemScope local_1770;
  FName local_1768;
  T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&> local_1760;
  T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&> local_1758;
  T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&> local_1750;
  FName local_1748;
  FStack *local_1740;
  TReferenceControllerBase<1> *local_1738;
  FMemScope local_1730;
  undefined8 local_1728;
  FSharedReferencer<1> local_1720;
  TSharedRef<FTabManager::FStack,1> local_1718;
  undefined8 local_1708;
  FSharedReferencer<1> local_1700;
  TSharedRef<FTabManager::FStack,1> local_16f8;
  TSharedRef<SDockTab,1> local_16e8;
  TSharedPtr<SWindow,1> local_16d8;
  TSharedRef<FTabManager,1> local_16c8;
  TSharedPtr<SWindow,1> local_16b8;
  TSharedPtr<SWindow,1> local_16a8;
  TSharedRef<FTabManager,1> local_1698;
  TSharedRef<UE::Slate::Private::FPanelDrawerData,1> local_1688;
  TSharedPtr<SDockingArea,1> local_1678;
  undefined8 local_1668;
  TReferenceControllerBase<1> *local_1660;
  undefined8 local_1658;
  TReferenceControllerBase<1> *local_1650;
  TSharedPtr<SDockingTabWell,1> local_1648;
  TSharedRef<SWindow,1> local_1638;
  SWindow *local_1628;
  TReferenceControllerBase<1> *local_1620;
  TSharedRef<FTabManager::FSplitter,1> local_1618;
  TSharedPtr<SWindow,1> local_1608;
  T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&> local_15f8;
  TSharedRef<SWidget,1> local_15e8;
  TSharedRef<SDockingSplitter,1> local_15d8;
  TSharedRef<FTabManager::FSplitter,1> local_15c8;
  TSharedRef<SDockingSplitter,1> local_15b8;
  TSharedRef<FTabManager::FSplitter,1> local_15a8;
  SWindow *local_1598;
  TReferenceControllerBase<1> *local_1590;
  T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&> local_1588;
  TSharedRef<SDockingSplitter,1> local_1578;
  TSharedRef<FTabManager::FSplitter,1> local_1568;
  TSharedRef<SDockingSplitter,1> local_1558;
  TSharedRef<SDockingTabStack,1> local_1548;
  TSharedRef<SDockingTabStack,1> local_1538;
  TSharedRef<SDockingTabStack,1> local_1528;
  FText local_1518;
  TSharedRef<SWindow,1> local_1508;
  TSharedRef<SWindow,1> local_14f8;
  TSharedRef<SWindow,1> local_14e8;
  undefined1 local_14d8 [8];
  TReferenceControllerBase<1> *local_14d0;
  TSharedRef<FTabManager::FArea,1> local_14c8;
  TSharedRef<FTabManager,1> local_14b8;
  TSharedRef<SDockingArea,1> local_14a8;
  TSharedRef<FTabManager::FArea,1> local_1498;
  TSharedRef<FTabManager::FArea,1> local_1488;
  TSharedRef<SDockingArea,1> local_1478;
  TSharedRef<SDockingArea,1> local_1468;
  TSharedRef<FTabManager::FArea,1> local_1458;
  TSharedRef<FTabManager,1> local_1448;
  TSharedRef<SDockingArea,1> local_1438;
  TSharedRef<FTabManager::FArea,1> local_1428;
  undefined8 local_1418;
  TReferenceControllerBase<1> *pTStack_1410;
  TSharedRef<FTabManager::FArea,1> local_1408;
  TSharedRef<SDockingArea,1> local_13f8;
  TSharedPtr<SDockTab,1> local_13e8;
  TSharedRef<FTabManager::FSplitter,1> local_13d8;
  TSharedRef<FTabManager::FSplitter,1> local_13c8;
  TSharedRef<FTabManager::FSplitter,1> local_13b8;
  TSharedRef<FTabManager::FStack,1> local_13a8;
  TSharedRef<SDockTab,1> local_1398;
  TSharedPtr<SDockTab,1> local_1388;
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
  local_1378;
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
  local_1360;
  FName local_1348;
  undefined8 uStack_1340;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> local_1330;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> local_1318;
  TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
  local_1300;
  TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
  local_12e8;
  TSlateDecl<SDockingSplitter,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&>_>
  local_12d0;
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
  local_12b8;
  TSharedRef<SWindow,1> local_12a0;
  FTabId local_1290;
  FArguments local_1280;
  FArguments local_1060;
  FSlateBaseNamedArgs local_e40;
  FArguments local_c48;
  FArguments local_a48;
  FArguments local_848;
  FArguments local_648;
  FArguments local_350;
  undefined8 uStack_48;
  
  uStack_48 = 0x14277eca2;
  bVar22 = false;
  bVar57 = false;
  (**(code **)(param_1->Object->_padding_ + 8))(param_1->Object,&local_1858);
  (**(code **)(param_1->Object->_padding_ + 0x10))(param_1->Object,&local_1830);
  (**(code **)(param_1->Object->_padding_ + 0x18))(param_1->Object,&local_18b0);
  EVar17 = param_5;
  bVar56 = param_5 != Never;
  if (local_1858 == (FStack *)0x0) {
    if (local_18b0.Object == (FArea *)0x0) {
      if (local_1830.Object == (FSplitter *)0x0) {
        `FTabManager::RestoreArea_Helper'[::D]::<lambda_1>::operator()(local_1866);
        pFVar27 = SDockingTabStack::FArguments::FArguments(&local_848);
        local_1758.Arg0 = NewStack(&local_13a8);
        this_02 = MakeTDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
                            (&local_12b8,"SDockingTabStack",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                             ,0x8ad,&local_1758);
        TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
        ::operator<<=(this_02,&local_1548,pFVar27);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_12b8._Widget.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_13a8.SharedReferenceCount.ReferenceController);
        FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_848);
        local_1788.TabType.ComparisonIndex.Value = 0;
        local_1788.TabType.Number = 0;
        local_1788.InstanceId = -1;
        local_1788.Flags = SaveLayout;
        pTVar46 = SpawnTab(this,&local_1388,&local_1788,param_2,bVar56);
        pTVar49 = TSharedPtr<SDockTab,1>::ToSharedRef(pTVar46,&local_1398);
        SDockingTabStack::OpenTab(local_1548.Object,pTVar49,-1,false);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1398.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1388.SharedReferenceCount.ReferenceController);
        __return_storage_ptr__->Object = (SDockingNode *)local_1548.Object;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             local_1548.SharedReferenceCount.ReferenceController;
        if (local_1548.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_1548.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1548.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
               );
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1548.SharedReferenceCount.ReferenceController);
      }
      else {
        local_1848.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1848.ArrayNum = 0;
        local_1848.ArrayMax = 0;
        pTVar47 = TSharedPtr<FTabManager::FSplitter,1>::ToSharedRef(&local_1830,&local_13d8);
        bVar57 = CanRestoreSplitterContent(this,&local_1848,pTVar47,param_2,param_4,EVar17);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_13d8.SharedReferenceCount.ReferenceController);
        if (!bVar57) {
          __return_storage_ptr__->Object = (SDockingNode *)0x0;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          DestructItems<TSharedRef<SDockingNode,1>,int>
                    ((TSharedRef<SDockingNode,1> *)local_1848.AllocatorInstance.Data,
                     local_1848.ArrayNum);
          if ((TSharedRef<SDockingNode,1> *)local_1848.AllocatorInstance.Data !=
              (TSharedRef<SDockingNode,1> *)0x0) {
            FMemory::Free(local_1848.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_18b0.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1830.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_1850);
          return __return_storage_ptr__;
        }
        pFVar48 = SDockingSplitter::FArguments::FArguments((FArguments *)&local_e40);
        local_1750.Arg0 = TSharedPtr<FTabManager::FSplitter,1>::ToSharedRef(&local_1830,&local_13c8)
        ;
        this_01 = MakeTDecl<SDockingSplitter,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&>_>
                            (&local_12d0,"SDockingSplitter",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                             ,0x898,&local_1750);
        TSlateDecl<SDockingSplitter,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&>_>
        ::operator<<=(this_01,&local_1798,pFVar48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_12d0._Widget.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_13c8.SharedReferenceCount.ReferenceController);
        FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_e40);
        *(float *)&(local_1798.Object)->_padding_ = param_1->Object->SizeCoefficient;
        (**(code **)((local_1798.Object)->_padding_ + 0x2a0))(local_1798.Object);
        if (EVar17 == Never) {
          pTVar47 = TSharedPtr<FTabManager::FSplitter,1>::ToSharedRef(&local_1830,&local_13b8);
          RestoreSplitterContent(this,pTVar47,&local_1798,param_2,param_4);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_13b8.SharedReferenceCount.ReferenceController);
        }
        else {
          RestoreSplitterContent(this,&local_1848,&local_1798);
        }
        __return_storage_ptr__->Object = (SDockingNode *)local_1798.Object;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             local_1798.SharedReferenceCount.ReferenceController;
        if (local_1798.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_1798.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1798.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
               );
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1798.SharedReferenceCount.ReferenceController);
        DestructItems<TSharedRef<SDockingNode,1>,int>
                  ((TSharedRef<SDockingNode,1> *)local_1848.AllocatorInstance.Data,
                   local_1848.ArrayNum);
        if ((TSharedRef<SDockingNode,1> *)local_1848.AllocatorInstance.Data !=
            (TSharedRef<SDockingNode,1> *)0x0) {
          FMemory::Free(local_1848.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18b0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1830.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_1850);
      return __return_storage_ptr__;
    }
    if ((local_18b0.Object == (FArea *)0x0) ||
       (EVar6 = (local_18b0.Object)->WindowPlacement, EVar6 == Placement_NoWindow)) {
      local_17f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1888.Object = (SDockingArea *)0x0;
      local_1888.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_17f8.ArrayNum = 0;
      local_17f8.ArrayMax = 0;
      pTVar40 = TSharedPtr<FTabManager::FArea,1>::ToSharedRef(&local_18b0,&local_1458);
      pTVar10 = (pTVar40->SharedReferenceCount).ReferenceController;
      local_15a8.Object = (FSplitter *)pTVar40->Object;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_15a8.SharedReferenceCount.ReferenceController = pTVar10;
      bVar57 = CanRestoreSplitterContent(this,&local_17f8,&local_15a8,param_2,param_4,EVar17);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1458.SharedReferenceCount.ReferenceController);
      if (bVar57) {
        pFVar41 = SDockingArea::FArguments::FArguments(&local_1060);
        if (param_3) {
          local_16a8.SharedReferenceCount.ReferenceController =
               (param_2->SharedReferenceCount).ReferenceController;
          local_16a8.Object = param_2->Object;
          if (local_16a8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_16a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_16a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          cVar55 = -0x80;
          bVar57 = false;
          local_1598 = local_16a8.Object;
          local_1590 = local_16a8.SharedReferenceCount.ReferenceController;
          if (local_16a8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_16a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_16a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
        }
        else {
          cVar55 = '\0';
          bVar57 = true;
          local_1418 = 0;
          pTStack_1410 = (TReferenceControllerBase<1> *)0x0;
          local_16a8.Object = (SWindow *)0x0;
          local_16a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        }
        pTVar10 = local_1590;
        pFVar41 = SDockingArea::FArguments::ParentWindow(pFVar41,&local_16a8);
        pFVar41->_ShouldManageParentWindow = false;
        pTVar40 = TSharedPtr<FTabManager::FArea,1>::ToSharedRef(&local_18b0,&local_1428);
        pTVar42 = TSharedFromThis<FTabManager,1>::AsShared
                            ((TSharedFromThis<FTabManager,1> *)&this->_padding_,&local_1448);
        local_1698.Object = pTVar42->Object;
        local_1698.SharedReferenceCount.ReferenceController =
             (pTVar42->SharedReferenceCount).ReferenceController;
        if (local_1698.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_1698.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1698.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
               );
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1448.SharedReferenceCount.ReferenceController);
        local_1588.Arg0 = &local_1698;
        local_1588.Arg1 = pTVar40;
        pTVar43 = MakeTDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
                            (&local_12e8,"SDockingArea",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                             ,0x86a,&local_1588);
        local_1888.SharedReferenceCount.ReferenceController =
             (pTVar43->_Widget).SharedReferenceCount.ReferenceController;
        pSVar45 = (pTVar43->_Widget).Object;
        if (local_1888.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_1888.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1888.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
               );
          UNLOCK();
        }
        local_1888.Object = pSVar45;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
        ::operator<<=(pTVar43,&local_1438,pFVar41);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1438.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_12e8._Widget.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1698.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1428.SharedReferenceCount.ReferenceController);
        if (bVar57) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_1410);
        }
        if (cVar55 < '\0') {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar10);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1060._InitialContent.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1060._ParentWindow.SharedReferenceCount.ReferenceController);
        FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1060);
        if (EVar17 == Never) {
          if ((pSVar45 == (SDockingArea *)0x0) &&
             (bVar57 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x408,L""), bVar57)) {
            pcVar13 = (code *)swi(3);
            pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
            return pTVar25;
          }
          FVar51.ReferenceController = local_1888.SharedReferenceCount.ReferenceController;
          pSVar45 = local_1888.Object;
          if (local_1888.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1888.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1888.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          if ((local_1888.Object == (SDockingArea *)0x0) &&
             (bVar57 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar57)) {
            pcVar13 = (code *)swi(3);
            pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
            return pTVar25;
          }
          local_1578.Object = (SDockingSplitter *)pSVar45;
          local_1578.SharedReferenceCount.ReferenceController = FVar51.ReferenceController;
          if (FVar51.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar51.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar51.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          pTVar40 = TSharedPtr<FTabManager::FArea,1>::ToSharedRef(&local_18b0,&local_1408);
          pTVar10 = (pTVar40->SharedReferenceCount).ReferenceController;
          local_1568.Object = (FSplitter *)pTVar40->Object;
          if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_1568.SharedReferenceCount.ReferenceController = pTVar10;
          RestoreSplitterContent(this,&local_1568,&local_1578,param_2,param_4);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar10);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1408.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar51.ReferenceController);
          local_13f8.SharedReferenceCount.ReferenceController = FVar51.ReferenceController;
        }
        else {
          pTVar44 = TSharedPtr<SDockingArea,1>::ToSharedRef(&local_1888,&local_13f8);
          pTVar10 = (pTVar44->SharedReferenceCount).ReferenceController;
          local_1558.Object = (SDockingSplitter *)pTVar44->Object;
          if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_1558.SharedReferenceCount.ReferenceController = pTVar10;
          RestoreSplitterContent(this,&local_17f8,&local_1558);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar10);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_13f8.SharedReferenceCount.ReferenceController);
      }
      DestructItems<TSharedRef<SDockingNode,1>,int>
                ((TSharedRef<SDockingNode,1> *)local_17f8.AllocatorInstance.Data,local_17f8.ArrayNum
                );
      if ((TSharedRef<SDockingNode,1> *)local_17f8.AllocatorInstance.Data !=
          (TSharedRef<SDockingNode,1> *)0x0) {
        FMemory::Free(local_17f8.AllocatorInstance.Data);
      }
    }
    else {
      pSVar54 = param_2->Object;
      local_1888.Object = (SDockingArea *)0x0;
      local_1888.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (EVar6 != Placement_Automatic) {
        pFVar35 = SWindow::FArguments::FArguments(&local_648);
        pFVar35->_AutoCenter = None;
        pFVar36 = TSharedPtr<FTabManager::FArea,1>::operator->(&local_18b0);
        local_17a8 = (float)(pFVar36->UnscaledWindowPosition).field0_0x0._s_0.X;
        fStack_17a4 = (float)(pFVar36->UnscaledWindowPosition).field0_0x0._s_0.Y;
        FVar15._4_4_ = fStack_17a4;
        FVar15._0_4_ = local_17a8;
        pFVar35->_ScreenPosition = FVar15;
        pFVar36 = TSharedPtr<FTabManager::FArea,1>::operator->(&local_18b0);
        local_17a0 = (float)(pFVar36->UnscaledWindowSize).field0_0x0._s_0.X;
        fStack_179c = (float)(pFVar36->UnscaledWindowSize).field0_0x0._s_0.Y;
        FVar16._4_4_ = fStack_179c;
        FVar16._0_4_ = local_17a0;
        pFVar35->_ClientSize = FVar16;
        pFVar35->_CreateTitleBar = false;
        pFVar36 = TSharedPtr<FTabManager::FArea,1>::operator->(&local_18b0);
        pTVar39 = &local_1508;
        iVar23 = 0x82f;
        pTVar37 = &local_1867;
        pFVar35->_IsInitiallyMaximized = pFVar36->bIsMaximized;
        pTVar38 = &local_1330;
      }
      else {
        pFVar35 = SWindow::FArguments::FArguments(&local_350);
        pFVar35->_AutoCenter = PreferredWorkArea;
        pFVar36 = TSharedPtr<FTabManager::FArea,1>::operator->(&local_18b0);
        local_17b0 = (float)(pFVar36->UnscaledWindowSize).field0_0x0._s_0.X;
        fStack_17ac = (float)(pFVar36->UnscaledWindowSize).field0_0x0._s_0.Y;
        FVar14._4_4_ = fStack_17ac;
        FVar14._0_4_ = local_17b0;
        pFVar35->_ClientSize = FVar14;
        pFVar35->_CreateTitleBar = false;
        pFVar36 = TSharedPtr<FTabManager::FArea,1>::operator->(&local_18b0);
        pTVar39 = &local_14f8;
        iVar23 = 0x82a;
        pTVar37 = &local_1868;
        pFVar35->_IsInitiallyMaximized = pFVar36->bIsMaximized;
        pTVar38 = &local_1318;
      }
      pTVar38 = MakeTDecl<SWindow,RequiredArgs::T0RequiredArgs>
                          (pTVar38,"SWindow",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                           ,iVar23,pTVar37);
      pTVar39 = TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar38,pTVar39,pFVar35);
      pTVar10 = (pTVar39->SharedReferenceCount).ReferenceController;
      pSVar9 = pTVar39->Object;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (EVar6 != Placement_Automatic) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1508.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1330._Widget.SharedReferenceCount.ReferenceController);
        SWindow::FArguments::~FArguments(&local_648);
      }
      else {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_14f8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1318._Widget.SharedReferenceCount.ReferenceController);
        SWindow::FArguments::~FArguments(&local_350);
      }
      pTVar33 = FGlobalTabmanager::Get();
      SWindow::SetTitle(pSVar9,&pTVar33->Object->AppTitle);
      this_00 = FSlateApplication::Get();
      if (pSVar54 == (SWindow *)0x0) {
        pcVar13 = *(code **)(*(longlong *)this_00 + 0x10);
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1628 = pSVar9;
        local_1620 = pTVar10;
        (*pcVar13)(this_00,local_14d8,&local_1628,1);
        local_14e8.SharedReferenceCount.ReferenceController = local_14d0;
      }
      else {
        pTVar39 = TSharedPtr<SWindow,1>::ToSharedRef(param_2,&local_12a0);
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1638.Object = pSVar9;
        local_1638.SharedReferenceCount.ReferenceController = pTVar10;
        FSlateApplication::AddWindowAsNativeChild(this_00,&local_14e8,&local_1638,pTVar39,true);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_14e8.SharedReferenceCount.ReferenceController);
      local_17c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_17c8.ArrayNum = 0;
      local_17c8.ArrayMax = 0;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_16d8.Object = pSVar9;
      local_16d8.SharedReferenceCount.ReferenceController = pTVar10;
      pTVar40 = TSharedPtr<FTabManager::FArea,1>::ToSharedRef(&local_18b0,&local_14c8);
      pTVar11 = (pTVar40->SharedReferenceCount).ReferenceController;
      local_1618.Object = (FSplitter *)pTVar40->Object;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1618.SharedReferenceCount.ReferenceController = pTVar11;
      bVar57 = CanRestoreSplitterContent(this,&local_17c8,&local_1618,&local_16d8,param_4,EVar17);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_14c8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_16d8.SharedReferenceCount.ReferenceController);
      if (bVar57) {
        pFVar41 = SDockingArea::FArguments::FArguments(&local_1280);
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1608.Object = pSVar9;
        local_1608.SharedReferenceCount.ReferenceController = pTVar10;
        pFVar41 = SDockingArea::FArguments::ParentWindow(pFVar41,&local_1608);
        pTVar40 = TSharedPtr<FTabManager::FArea,1>::ToSharedRef(&local_18b0,&local_1498);
        pTVar42 = TSharedFromThis<FTabManager,1>::AsShared
                            ((TSharedFromThis<FTabManager,1> *)&this->_padding_,&local_14b8);
        local_16c8.Object = pTVar42->Object;
        local_16c8.SharedReferenceCount.ReferenceController =
             (pTVar42->SharedReferenceCount).ReferenceController;
        if (local_16c8.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_16c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_16c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
               );
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_14b8.SharedReferenceCount.ReferenceController);
        local_15f8.Arg0 = &local_16c8;
        local_15f8.Arg1 = pTVar40;
        pTVar43 = MakeTDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
                            (&local_1300,"SDockingArea",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                             ,0x848,&local_15f8);
        pTVar43 = TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
                  ::Expose<SDockingArea>(pTVar43,&local_1888);
        pTVar44 = TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
                  ::operator<<=(pTVar43,&local_14a8,pFVar41);
        local_15e8.Object = (SWidget *)pTVar44->Object;
        local_15e8.SharedReferenceCount.ReferenceController =
             (pTVar44->SharedReferenceCount).ReferenceController;
        if (local_15e8.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_15e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_15e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
               );
          UNLOCK();
        }
        SWindow::SetContent(pSVar9,&local_15e8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_14a8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1300._Widget.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_16c8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1498.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1280._InitialContent.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1280._ParentWindow.SharedReferenceCount.ReferenceController);
        FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1280);
        if (EVar17 == Never) {
          if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_16b8.Object = pSVar9;
          local_16b8.SharedReferenceCount.ReferenceController = pTVar10;
          pTVar44 = TSharedPtr<SDockingArea,1>::ToSharedRef(&local_1888,&local_1478);
          pTVar11 = (pTVar44->SharedReferenceCount).ReferenceController;
          local_15d8.Object = (SDockingSplitter *)pTVar44->Object;
          if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_15d8.SharedReferenceCount.ReferenceController = pTVar11;
          pTVar40 = TSharedPtr<FTabManager::FArea,1>::ToSharedRef(&local_18b0,&local_1488);
          pTVar12 = (pTVar40->SharedReferenceCount).ReferenceController;
          local_15c8.Object = (FSplitter *)pTVar40->Object;
          if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_15c8.SharedReferenceCount.ReferenceController = pTVar12;
          RestoreSplitterContent(this,&local_15c8,&local_15d8,&local_16b8,param_4);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar12);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1488.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar11);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1478.SharedReferenceCount.ReferenceController);
          local_1468.SharedReferenceCount.ReferenceController =
               local_16b8.SharedReferenceCount.ReferenceController;
        }
        else {
          pTVar44 = TSharedPtr<SDockingArea,1>::ToSharedRef(&local_1888,&local_1468);
          pTVar11 = (pTVar44->SharedReferenceCount).ReferenceController;
          local_15b8.Object = (SDockingSplitter *)pTVar44->Object;
          if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_15b8.SharedReferenceCount.ReferenceController = pTVar11;
          RestoreSplitterContent(this,&local_17c8,&local_15b8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar11);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1468.SharedReferenceCount.ReferenceController);
        if (pSVar54 != (SWindow *)0x0) {
          if ((local_1888.Object == (SDockingArea *)0x0) &&
             (bVar57 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar57)) {
            pcVar13 = (code *)swi(3);
            pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
            return pTVar25;
          }
          iVar23 = (**(code **)((local_1888.Object)->_padding_ + 0x270))();
          if ((iVar23 == 0) && (param_6 == false)) goto LAB_142780256;
        }
      }
      else {
LAB_142780256:
        SWindow::RequestDestroyWindow(pSVar9);
      }
      DestructItems<TSharedRef<SDockingNode,1>,int>
                ((TSharedRef<SDockingNode,1> *)local_17c8.AllocatorInstance.Data,local_17c8.ArrayNum
                );
      if ((TSharedRef<SDockingNode,1> *)local_17c8.AllocatorInstance.Data !=
          (TSharedRef<SDockingNode,1> *)0x0) {
        FMemory::Free(local_17c8.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    }
    bVar57 = false;
    if (local_1888.Object == (SDockingArea *)0x0) goto LAB_142780819;
    if ((local_18b0.Object == (FArea *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar22)) {
      pcVar13 = (code *)swi(3);
      pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
      return pTVar25;
    }
    if (((local_18b0.Object)->ActivePanelDrawerTab).TabId.TabType == (FName)0x0) goto LAB_142780819;
    local_17e8.Object = (SDockTab *)0x0;
    local_17e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar36 = TSharedPtr<FTabManager::FArea,1>::operator->(&local_18b0);
    bVar22 = CanInvokeInPanelDrawer
                       (this,&(pFVar36->ActivePanelDrawerTab).TabId,&local_1888,&local_17e8,false);
    pSVar18 = local_17e8.Object;
    if (bVar22) {
      if ((local_17e8.Object == (SDockTab *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar22)) {
        pcVar13 = (code *)swi(3);
        pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
        return pTVar25;
      }
      SDockTab::GetDockArea(pSVar18,&local_1678);
      if (local_1678.Object == (SDockingArea *)0x0) {
LAB_142780772:
        bVar22 = true;
      }
      else {
        pSVar45 = TSharedPtr<SDockingArea,1>::operator->(&local_1678);
        bVar57 = true;
        pTVar46 = SDockingArea::GetPanelDrawerHostedTab(pSVar45,&local_13e8);
        if (pTVar46->Object != pSVar18) goto LAB_142780772;
        bVar22 = false;
      }
      if (bVar57) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_13e8.SharedReferenceCount.ReferenceController);
      }
      if (bVar22) {
        MakeShared<UE::Slate::Private::FPanelDrawerData,1>(&local_1688);
        pFVar36 = TSharedPtr<FTabManager::FArea,1>::operator->(&local_18b0);
        fVar2 = (pFVar36->ActivePanelDrawerTab).Size.PanelDrawerCoefficient;
        ((local_1688.Object)->Size).MainContentCoefficient =
             (pFVar36->ActivePanelDrawerTab).Size.MainContentCoefficient;
        ((local_1688.Object)->Size).PanelDrawerCoefficient = fVar2;
        if (&(local_1688.Object)->HostedTab != &local_17e8) {
          ((local_1688.Object)->HostedTab).Object = pSVar18;
          local_17e8.Object = (SDockTab *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&((local_1688.Object)->HostedTab).SharedReferenceCount,
                     &local_17e8.SharedReferenceCount);
        }
        pSVar45 = TSharedPtr<SDockingArea,1>::operator->(&local_1888);
        SDockingArea::SetPanelDrawerHiddenActiveTab(pSVar45,&local_1688);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1688.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1678.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_17e8.SharedReferenceCount.ReferenceController);
LAB_142780819:
    __return_storage_ptr__->Object = (SDockingNode *)local_1888.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_1888.SharedReferenceCount.ReferenceController;
    if (local_1888.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1888.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1888.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1888.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18b0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1830.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_1850);
    return __return_storage_ptr__;
  }
  local_1808 = (SDockTab *)0x0;
  local_1800 = (TReferenceControllerBase<1> *)0x0;
  local_1878 = (SDockingTabStack *)0x0;
  FStack_1870.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_5 == Never) {
LAB_14277ee10:
    pFVar27 = SDockingTabStack::FArguments::FArguments(&local_c48);
    if ((local_1858 == (FStack *)0x0) &&
       (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar56)) {
      pcVar13 = (code *)swi(3);
      pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
      return pTVar25;
    }
    local_1718.Object = local_1858;
    local_1718.SharedReferenceCount.ReferenceController = pTStack_1850;
    if (pTStack_1850 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_1850->SharedReferenceCount =
           (atomic<int>)((int)pTStack_1850->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_1858 == (FStack *)0x0) &&
       (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar56)) {
      pcVar13 = (code *)swi(3);
      pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
      return pTVar25;
    }
    local_1778.Arg0 = &local_1718;
    FLLMScope::FLLMScope(&local_1838,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1748 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1770,&local_1748,true);
    TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
    ::
    TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
              (&local_1378,"SDockingTabStack",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
               ,0x7d4,&local_1778);
    FMemScope::~FMemScope(&local_1770);
    FLLMScope::~FLLMScope(&local_1838);
    pTVar28 = TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
              ::operator<<=(&local_1378,&local_1538,pFVar27);
    local_1720.ReferenceController = (pTVar28->SharedReferenceCount).ReferenceController;
    local_1878 = pTVar28->Object;
    if (local_1720.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1720.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_1720.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1728 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1870,&local_1720);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1720.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1538.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1378._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1718.SharedReferenceCount.ReferenceController);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_c48);
    if ((local_1878 == (SDockingTabStack *)0x0) &&
       (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar56)) {
      pcVar13 = (code *)swi(3);
      pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
      return pTVar25;
    }
    *(float *)&local_1878->_padding_ = param_1->Object->SizeCoefficient;
    (**(code **)(local_1878->_padding_ + 0x2a0))(local_1878);
  }
  else {
    if (param_5 == IfNoTabValid) {
      if ((local_1858 == (FStack *)0x0) &&
         (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar56)) {
        pcVar13 = (code *)swi(3);
        pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
        return pTVar25;
      }
      pFVar20 = local_1858;
      iVar23 = (local_1858->Tabs).ArrayNum;
      pFVar53 = (FTabId *)(local_1858->Tabs).AllocatorInstance.Data;
      pFVar30 = pFVar53 + (longlong)iVar23 * 2;
      while( true ) {
        if ((pFVar20->Tabs).ArrayNum != iVar23) {
          param_5 = param_5 & 0xffffff00;
          `TCheckedPointerIterator<FTabManager::FTab,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&param_5);
        }
        if (pFVar53 == pFVar30) goto LAB_14277f000;
        bVar56 = IsAllowedTab(this,pFVar53);
        if ((bVar56) &&
           (((pTVar26 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                        ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                                *)(this->NomadTabSpawner).Object,pFVar53->TabType),
             pTVar26 == (TSharedRef<FTabSpawnerEntry,1> *)0x0 ||
             (bVar56 = FTabSpawnerEntry::IsSoleTabInstanceSpawned(pTVar26->Object), !bVar56)) ||
            (bVar56 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                                 &pTVar26->Object->OnFindTabToReuse), bVar56)))) break;
        pFVar53 = pFVar53 + 2;
      }
      goto LAB_14277ee10;
    }
    if ((param_5 != IfNoOpenTabValid) &&
       (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                            ,1999,L""), bVar56)) {
      pcVar13 = (code *)swi(3);
      pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
      return pTVar25;
    }
  }
LAB_14277f000:
  if ((local_1858 == (FStack *)0x0) &&
     (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar56)) {
    pcVar13 = (code *)swi(3);
    pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
    return pTVar25;
  }
  local_1740 = local_1858;
  uVar4 = (local_1858->Tabs).ArrayNum;
  uVar50 = (ulonglong)(int)uVar4;
  pFVar53 = (FTabId *)(local_1858->Tabs).AllocatorInstance.Data;
  pFVar30 = pFVar53 + uVar50 * 2;
  local_17b8 = pFVar30;
  while( true ) {
    bVar56 = false;
    pSVar54 = (SWindow *)0x0;
    if ((local_1740->Tabs).ArrayNum != (int)uVar50) {
      local_18b4[0] = 0;
      `TCheckedPointerIterator<FTabManager::FTab,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_18b4);
    }
    pSVar18 = local_1808;
    if (pFVar53 == pFVar30) break;
    uVar5 = pFVar53[1].TabType.ComparisonIndex.Value;
    if (((uVar5 == 1) || (uVar5 == 4)) &&
       ((bVar56 = IsAllowedTab(this,pFVar53), bVar56 &&
        (((pTVar26 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                     ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                             *)(this->NomadTabSpawner).Object,pFVar53->TabType),
          pTVar26 == (TSharedRef<FTabSpawnerEntry,1> *)0x0 ||
          (bVar56 = FTabSpawnerEntry::IsSoleTabInstanceSpawned(pTVar26->Object), !bVar56)) ||
         (bVar56 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                             ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                              &pTVar26->Object->OnFindTabToReuse), pFVar30 = local_17b8, bVar56)))))
       ) {
      SpawnTab(this,&local_1898,pFVar53,param_2,true);
      FVar7 = pFVar53->TabType;
      pTVar26 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                        *)&this->TabSpawner,FVar7);
      if ((pTVar26 == (TSharedRef<FTabSpawnerEntry,1> *)0x0) &&
         (pTVar26 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                    ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                            *)(this->NomadTabSpawner).Object,FVar7),
         pTVar26 == (TSharedRef<FTabSpawnerEntry,1> *)0x0)) {
        bVar57 = true;
        local_1660 = (TReferenceControllerBase<1> *)0x0;
        puVar29 = &local_1668;
      }
      else {
        local_1650 = (pTVar26->SharedReferenceCount).ReferenceController;
        bVar22 = true;
        pSVar54 = (SWindow *)pTVar26->Object;
        if (local_1650 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_1650->SharedReferenceCount =
               (atomic<int>)((int)local_1650->SharedReferenceCount + 1);
          UNLOCK();
        }
        puVar29 = &local_1658;
      }
      local_1738 = (TReferenceControllerBase<1> *)puVar29[1];
      puVar29[1] = 0;
      *puVar29 = 0;
      if (bVar57) {
        bVar57 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1660);
      }
      if (bVar22) {
        bVar22 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1650);
      }
      if (local_1898.Object != (SDockTab *)0x0) {
        if ((local_1858 == (FStack *)0x0) &&
           (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar56)) {
          pcVar13 = (code *)swi(3);
          pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
          return pTVar25;
        }
        if ((pFVar53->TabType == (local_1858->ForegroundTabId).TabType) &&
           (((pFVar53->InstanceId == -1 ||
             (iVar23 = (local_1858->ForegroundTabId).InstanceId, iVar23 == -1)) ||
            (pFVar53->InstanceId == iVar23)))) {
          if ((pFVar53[1].TabType.ComparisonIndex.Value != 1) &&
             (bVar56 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_6813193255430125596>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                                  ,0x7e4,"SomeTab.TabState == ETabState::OpenedTab"), bVar56)) {
            pcVar13 = (code *)swi(3);
            pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
            return pTVar25;
          }
          pTVar10 = local_1800;
          if (local_1898.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1898.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1898.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_1808 = local_1898.Object;
          local_1800 = local_1898.SharedReferenceCount.ReferenceController;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar10);
        }
        if (local_1878 == (SDockingTabStack *)0x0) {
          pFVar27 = SDockingTabStack::FArguments::FArguments(&local_a48);
          if ((local_1858 == (FStack *)0x0) &&
             (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x408,L""), bVar56)) {
            pcVar13 = (code *)swi(3);
            pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
            return pTVar25;
          }
          local_16f8.Object = local_1858;
          local_16f8.SharedReferenceCount.ReferenceController = pTStack_1850;
          if (pTStack_1850 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_1850->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_1850->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_1858 == (FStack *)0x0) &&
             (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar56)) {
            pcVar13 = (code *)swi(3);
            pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
            return pTVar25;
          }
          local_1760.Arg0 = &local_16f8;
          FLLMScope::FLLMScope
                    (&local_1834,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
          local_1768 = LLMTagDeclaration_UI_Slate.UniqueName;
          FMemScope::FMemScope(&local_1730,&local_1768,true);
          TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
          ::
          TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
                    (&local_1360,"SDockingTabStack",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                     ,0x7eb,&local_1760);
          FMemScope::~FMemScope(&local_1730);
          FLLMScope::~FLLMScope(&local_1834);
          pTVar28 = TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
                    ::operator<<=(&local_1360,&local_1528,pFVar27);
          local_1700.ReferenceController = (pTVar28->SharedReferenceCount).ReferenceController;
          local_1878 = pTVar28->Object;
          if (local_1700.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1700.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_1700.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_1708 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1870,&local_1700);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1700.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1528.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1360._Widget.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_16f8.SharedReferenceCount.ReferenceController);
          FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_a48);
          if ((local_1878 == (SDockingTabStack *)0x0) &&
             (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar56)) {
            pcVar13 = (code *)swi(3);
            pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
            return pTVar25;
          }
          *(float *)&local_1878->_padding_ = param_1->Object->SizeCoefficient;
          (**(code **)(local_1878->_padding_ + 0x2a0))(local_1878);
        }
        if (pFVar53[1].field_0xe == '\0') {
          if ((pSVar54 == (SWindow *)0x0) &&
             (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar56)) {
            pcVar13 = (code *)swi(3);
            pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
            return pTVar25;
          }
          if (*(bool *)((longlong)&pSVar54->_padding_ + 4) != false) {
            if ((local_1878 == (SDockingTabStack *)0x0) &&
               (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar56)) {
              pcVar13 = (code *)swi(3);
              pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
              return pTVar25;
            }
            pSVar19 = local_1878;
            if ((*(bool *)((longlong)&pSVar54->_padding_ + 4) == false) &&
               (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0x1bd,
                                    L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                   ), bVar56)) {
              pcVar13 = (code *)swi(3);
              pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
              return pTVar25;
            }
            FVar3 = (FScriptContainerElement)
                    ((TOptional<bool> *)((longlong)&pSVar54->_padding_ + 3))->TypedValue;
            local_1863 = 1;
            if ((local_1898.Object == (SDockTab *)0x0) &&
               (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x408,L""), bVar56)) {
              pcVar13 = (code *)swi(3);
              pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
              return pTVar25;
            }
            FVar51.ReferenceController = local_1898.SharedReferenceCount.ReferenceController;
            pSVar18 = local_1898.Object;
            if (local_1898.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1898.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1898.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_1898.Object == (SDockTab *)0x0) &&
               (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x25d,L""), bVar56)) {
              pcVar13 = (code *)swi(3);
              pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
              return pTVar25;
            }
            if (FVar51.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FVar51.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FVar51.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            pFVar30 = SDockTab::GetLayoutIdentifier(pSVar18,&local_1290);
            local_1348 = pFVar30->TabType;
            uStack_1340._0_4_ = pFVar30->InstanceId;
            uStack_1340._4_1_ = pFVar30->Flags;
            uStack_1340._5_3_ = *(undefined3 *)&pFVar30->field_0xd;
            pFVar31 = (FName *)(pSVar19->Tabs).AllocatorInstance.Data;
            pFVar52 = pFVar31 + (longlong)(pSVar19->Tabs).ArrayNum * 4;
            for (; pFVar31 != pFVar52; pFVar31 = pFVar31 + 4) {
              if ((((pFVar31[2].ComparisonIndex.Value & 7) != 0) && (*pFVar31 == local_1348)) &&
                 (((undefined4)uStack_1340 == 0xffffffff ||
                  ((undefined4)uStack_1340 == pFVar31[1].ComparisonIndex.Value)))) {
                pFVar32 = (FScriptContainerElement *)((longlong)&pFVar31[3].Number + 1);
                if (&local_1864 != pFVar32) {
                  *pFVar32 = FVar3;
                  *(undefined1 *)((longlong)&pFVar31[3].Number + 2) = 1;
                }
                break;
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar51.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar51.ReferenceController);
          }
        }
        if (pFVar53[1].TabType.ComparisonIndex.Value == 1) {
          if ((local_1878 == (SDockingTabStack *)0x0) &&
             (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar56)) {
            pcVar13 = (code *)swi(3);
            pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
            return pTVar25;
          }
          pSVar19 = local_1878;
          if ((local_1898.Object == (SDockTab *)0x0) &&
             (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x408,L""), bVar56)) {
            pcVar13 = (code *)swi(3);
            pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
            return pTVar25;
          }
          local_16e8.Object = local_1898.Object;
          local_16e8.SharedReferenceCount.ReferenceController =
               local_1898.SharedReferenceCount.ReferenceController;
          if (local_1898.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1898.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1898.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          if ((local_1898.Object == (SDockTab *)0x0) &&
             (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar56)) {
            pcVar13 = (code *)swi(3);
            pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
            return pTVar25;
          }
          SDockingTabStack::AddTabWidget(pSVar19,&local_16e8,-1,false);
          FVar51.ReferenceController = local_16e8.SharedReferenceCount.ReferenceController;
        }
        else {
          if ((local_1878 == (SDockingTabStack *)0x0) &&
             (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar56)) {
            pcVar13 = (code *)swi(3);
            pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
            return pTVar25;
          }
          pSVar19 = local_1878;
          if ((local_1898.Object == (SDockTab *)0x0) &&
             (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x408,L""), bVar56)) {
            pcVar13 = (code *)swi(3);
            pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
            return pTVar25;
          }
          FVar51.ReferenceController = local_1898.SharedReferenceCount.ReferenceController;
          pSVar18 = local_1898.Object;
          if (local_1898.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1898.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1898.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          if ((local_1898.Object == (SDockTab *)0x0) &&
             (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar56)) {
            pcVar13 = (code *)swi(3);
            pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
            return pTVar25;
          }
          local_1648.Object = (pSVar19->TabWell).Object;
          local_1648.SharedReferenceCount.ReferenceController =
               (pSVar19->TabWell).SharedReferenceCount.ReferenceController;
          if (local_1648.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1648.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1648.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          SDockTab::SetParent(pSVar18,&local_1648);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar51.ReferenceController);
          cVar55 = (char)pFVar53[1].TabType.Number;
          if (cVar55 == '\0') {
            if ((local_1898.Object == (SDockTab *)0x0) &&
               (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x408,L""), bVar56)) {
              pcVar13 = (code *)swi(3);
              pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
              return pTVar25;
            }
            local_17d8 = local_1898.Object;
            pTStack_17d0 = local_1898.SharedReferenceCount.ReferenceController;
            if (local_1898.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1898.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1898.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_1898.Object == (SDockTab *)0x0) &&
               (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x25d,L""), bVar56)) {
              pcVar13 = (code *)swi(3);
              pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
              return pTVar25;
            }
            pFVar32 = (param_4->LeftSidebarTabs).AllocatorInstance.Data;
            if (((pFVar32 <= (FScriptContainerElement *)&local_17d8) &&
                ((FScriptContainerElement *)&local_17d8 <
                 pFVar32 + (longlong)(param_4->LeftSidebarTabs).ArrayMax * 0x10)) &&
               (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar56)) {
              pcVar13 = (code *)swi(3);
              pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
              return pTVar25;
            }
            iVar23 = (param_4->LeftSidebarTabs).ArrayNum;
            piVar1 = &(param_4->LeftSidebarTabs).ArrayMax;
            if (iVar23 == *piVar1) {
              iVar23 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,(ForAnyElementType *)param_4,piVar1);
            }
            (param_4->LeftSidebarTabs).ArrayNum = iVar23 + 1;
            pFVar32 = (param_4->LeftSidebarTabs).AllocatorInstance.Data;
            *(SDockTab **)(pFVar32 + (longlong)iVar23 * 0x10) = local_17d8;
            *(TReferenceControllerBase<1> **)(pFVar32 + (longlong)iVar23 * 0x10 + 8) = pTStack_17d0;
            FVar51.ReferenceController = pTStack_17d0;
            if (pTStack_17d0 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTStack_17d0->SharedReferenceCount =
                   (atomic<int>)((int)pTStack_17d0->SharedReferenceCount + 1);
              UNLOCK();
            }
          }
          else {
            if ((cVar55 != '\x01') &&
               (bVar56 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_6813193255430125564>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                                    ,0x804,"SomeTab.SidebarLocation == ESidebarLocation::Right"),
               bVar56)) {
              pcVar13 = (code *)swi(3);
              pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
              return pTVar25;
            }
            if ((local_1898.Object == (SDockTab *)0x0) &&
               (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x408,L""), bVar56)) {
              pcVar13 = (code *)swi(3);
              pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
              return pTVar25;
            }
            local_1818 = local_1898.Object;
            pTStack_1810 = local_1898.SharedReferenceCount.ReferenceController;
            if (local_1898.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1898.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1898.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_1898.Object == (SDockTab *)0x0) &&
               (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x25d,L""), bVar56)) {
              pcVar13 = (code *)swi(3);
              pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
              return pTVar25;
            }
            pFVar32 = (param_4->RightSidebarTabs).AllocatorInstance.Data;
            if (((pFVar32 <= (FScriptContainerElement *)&local_1818) &&
                ((FScriptContainerElement *)&local_1818 <
                 pFVar32 + (longlong)(param_4->RightSidebarTabs).ArrayMax * 0x10)) &&
               (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar56)) {
              pcVar13 = (code *)swi(3);
              pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
              return pTVar25;
            }
            iVar23 = (param_4->RightSidebarTabs).ArrayNum;
            piVar1 = &(param_4->RightSidebarTabs).ArrayMax;
            if (iVar23 == *piVar1) {
              iVar23 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&(param_4->RightSidebarTabs).AllocatorInstance,piVar1);
            }
            pFVar32 = (param_4->RightSidebarTabs).AllocatorInstance.Data;
            (param_4->RightSidebarTabs).ArrayNum = iVar23 + 1;
            *(SDockTab **)(pFVar32 + (longlong)iVar23 * 0x10) = local_1818;
            *(TReferenceControllerBase<1> **)(pFVar32 + (longlong)iVar23 * 0x10 + 8) = pTStack_1810;
            FVar51.ReferenceController = pTStack_1810;
            if (pTStack_1810 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTStack_1810->SharedReferenceCount =
                   (atomic<int>)((int)pTStack_1810->SharedReferenceCount + 1);
              UNLOCK();
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar51.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1738);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1898.SharedReferenceCount.ReferenceController);
      pFVar30 = local_17b8;
    }
    pFVar53 = pFVar53 + 2;
    uVar50 = (ulonglong)uVar4;
  }
  if (local_1808 == (SDockTab *)0x0) goto LAB_14277fb75;
  SDockTab::ActivateInParent(local_1808,SetDirectly);
  EVar21 = SDockTab::GetTabRole(pSVar18);
  if (((EVar21 == MajorTab) || (EVar21 = SDockTab::GetTabRole(pSVar18), EVar21 == NomadTab)) &&
     (param_2->Object != (SWindow *)0x0)) {
    bVar56 = true;
    pTVar33 = FGlobalTabmanager::Get();
    pFVar8 = pTVar33->Object;
    pSVar9 = (SWindow *)(pFVar8->RootWindowPtr).WeakReferenceCount.ReferenceController;
    param_1 = (TSharedRef<FTabManager::FLayoutNode,1> *)pSVar9;
    if (pSVar9 != (SWindow *)0x0) {
      iVar23 = (int)pSVar9->_padding_;
      do {
        param_1 = (TSharedRef<FTabManager::FLayoutNode,1> *)pSVar54;
        if (iVar23 == 0) goto LAB_14277fae5;
        LOCK();
        iVar24 = (int)pSVar9->_padding_;
        bVar57 = iVar23 == iVar24;
        if (bVar57) {
          *(int *)&pSVar9->_padding_ = iVar23 + 1;
          iVar24 = iVar23;
        }
        UNLOCK();
        iVar23 = iVar24;
      } while (!bVar57);
      pSVar54 = (pFVar8->RootWindowPtr).Object;
      param_1 = (TSharedRef<FTabManager::FLayoutNode,1> *)pSVar9;
    }
LAB_14277fae5:
    if (param_2->Object == pSVar54) goto LAB_14277fb05;
    bVar57 = true;
  }
  else {
LAB_14277fb05:
    bVar57 = false;
  }
  if (bVar56) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)param_1);
  }
  if (bVar57) {
    if ((param_2->Object == (SWindow *)0x0) &&
       (bVar57 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar57)) {
      pcVar13 = (code *)swi(3);
      pTVar25 = (TSharedPtr<SDockingNode,1> *)(*pcVar13)();
      return pTVar25;
    }
    pSVar54 = param_2->Object;
    pFVar34 = SDockTab::GetTabLabel(local_1808,&local_1518);
    SWindow::SetTitle(pSVar54,pFVar34);
    if (local_1518.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1518.TextData.Reference + 0x10))();
    }
  }
LAB_14277fb75:
  __return_storage_ptr__->Object = (SDockingNode *)local_1878;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       FStack_1870.ReferenceController;
  if (FStack_1870.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_1870.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_1870.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1870.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1800);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1830.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1850);
  return __return_storage_ptr__;
}

// RestoreDocumentTab @ 142780bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::RestoreDocumentTab
          (FTabManager *this,FName param_1,Type param_2,TSharedRef<SDockTab,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FSearchPreference local_20;
  FSearchPreference local_18;
  undefined8 local_10;
  
  if (param_2 == PreferLiveTab) {
    local_18 = (FSearchPreference)&___7FLiveTabSearch_FTabManager__6B_;
    local_10 = 0;
    InsertDocumentTab(this,param_1,param_1,&local_18,param_3,false);
  }
  else {
    if (param_2 == RequireClosedTab) {
      local_20 = (FSearchPreference)&___7FRequireClosedTab_FTabManager__6B_;
      InsertDocumentTab(this,param_1,param_1,&local_20,param_3,false);
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                       ,0x5f7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RestoreFrom @ 142780c60

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
FTabManager::RestoreFrom
          (FTabManager *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          TSharedRef<FTabManager::FLayout,1> *param_1,TSharedPtr<SWindow,1> *param_2,bool param_3,
          EOutputCanBeNullptr param_4)

{
  EWindowPlacement EVar1;
  TReferenceControllerBase<1> *pTVar2;
  FArea *pFVar3;
  TSharedRef<FTabManager::FArea,1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  FSharedReferencer<1> FVar8;
  longlong lVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  TSharedPtr<SWidget,1> *pTVar13;
  TSharedPtr<SDockingArea,1> *pTVar14;
  FScriptContainerElement *pFVar15;
  FLayout *pFVar16;
  TArray<TSharedRef<FTabManager::FArea,1>,TSizedDefaultAllocator<32>_> *pTVar17;
  TSharedRef<FTabManager::FArea,1> *pTVar18;
  SDockingArea *pSVar19;
  uint uVar20;
  FSharedReferencer<1> FVar21;
  SDockingArea *local_res8;
  TSharedPtr<SDockingArea,1> local_e8;
  longlong local_d8;
  FTabManager *local_d0;
  FTabManager *local_c8;
  TSharedRef<FTabManager::FLayoutNode,1> local_c0;
  TSharedRef<FTabManager::FLayoutNode,1> local_b0;
  TSharedRef<FTabManager::FLayoutNode,1> local_a0;
  code *local_90;
  FTabManager **local_88;
  code *local_80;
  FTabManager **local_78;
  TSharedRef<FTabManager::FLayoutNode,1> local_70;
  TSharedPtr<SDockingArea,1> local_60 [2];
  
  bVar7 = false;
  bVar6 = false;
  FVar21.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_res8 = (SDockingArea *)0x0;
  uVar20 = 0;
  this->ActiveLayoutName = param_1->Object->LayoutName;
  pFVar16 = param_1->Object;
  pSVar19 = (SDockingArea *)0x0;
  if (0 < (pFVar16->Areas).ArrayNum) {
    local_d8 = 0;
    do {
      lVar9 = local_d8;
      uVar11 = 0;
      if ((int)uVar20 < (pFVar16->Areas).ArrayNum) {
        uVar11 = ~uVar20 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<SWidget,1> *)(*pcVar5)();
        return pTVar13;
      }
      pTVar18 = (TSharedRef<FTabManager::FArea,1> *)
                ((pFVar16->Areas).AllocatorInstance.Data + lVar9);
      pTVar2 = (pTVar18->SharedReferenceCount).ReferenceController;
      local_a0.Object = (FLayoutNode *)pTVar18->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_a0.SharedReferenceCount.ReferenceController = pTVar2;
      SetTabsTo(this,&local_a0,OpenedTab,InvalidTab);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      pFVar3 = pTVar18->Object;
      EVar1 = pFVar3->WindowPlacement;
      if (EVar1 == Placement_NoWindow) {
        FixLayoutLoadingPrimaryArea(this,pTVar18);
LAB_142780d65:
        bVar10 = true;
      }
      else {
        local_c0.SharedReferenceCount.ReferenceController =
             (pTVar18->SharedReferenceCount).ReferenceController;
        if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_88 = &local_d0;
        bVar6 = true;
        local_90 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FTabManager::HasValidTabs'::__l2::<lambda_1>,bool,FTabManager::FTab_const_&>
                   ::Call;
        local_d0 = this;
        local_c0.Object = (FLayoutNode *)pFVar3;
        bVar10 = HasAnyMatchingTabs(&local_c0,
                                    (TFunctionRef<bool___cdecl(FTabManager::FTab_const_&)> *)
                                    &local_90);
        if (bVar10) goto LAB_142780d65;
        bVar10 = false;
      }
      if (bVar6) {
        bVar6 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c0.SharedReferenceCount.ReferenceController);
      }
      if (bVar10) {
        local_e8.Object = (SDockingArea *)0x0;
        local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (EVar1 == Placement_NoWindow) {
LAB_142780e27:
          bVar10 = true;
        }
        else {
          local_b0.Object = (FLayoutNode *)pTVar18->Object;
          local_b0.SharedReferenceCount.ReferenceController =
               (pTVar18->SharedReferenceCount).ReferenceController;
          if (local_b0.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_78 = &local_c8;
          bVar7 = true;
          local_80 = UE::Core::Private::Function::
                     TFunctionRefCaller<`FTabManager::HasValidOpenTabs'::__l2::<lambda_1>,bool,FTabManager::FTab_const_&>
                     ::Call;
          local_c8 = this;
          bVar10 = HasAnyMatchingTabs(&local_b0,
                                      (TFunctionRef<bool___cdecl(FTabManager::FTab_const_&)> *)
                                      &local_80);
          if (bVar10) goto LAB_142780e27;
          bVar10 = false;
        }
        if (bVar7) {
          bVar7 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_b0.SharedReferenceCount.ReferenceController);
        }
        if (bVar10) {
          pTVar14 = RestoreArea(this,local_60,pTVar18,param_2,param_3,param_4,false);
          if (&local_e8 != pTVar14) {
            local_e8.Object = pTVar14->Object;
            pTVar14->Object = (SDockingArea *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&local_e8.SharedReferenceCount,&pTVar14->SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_60[0].SharedReferenceCount.ReferenceController);
          if (local_e8.Object == (SDockingArea *)0x0) {
            if ((EVar1 == Placement_NoWindow) && (2 < (byte)LogSlate._0_1_)) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
            }
            pTVar2 = (pTVar18->SharedReferenceCount).ReferenceController;
            local_70.Object = (FLayoutNode *)pTVar18->Object;
            if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_70.SharedReferenceCount.ReferenceController = pTVar2;
            SetTabsTo(this,&local_70,InvalidTab,OpenedTab);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar2);
            pTVar17 = &this->InvalidDockAreas;
            goto LAB_142780f12;
          }
        }
        else {
          pTVar17 = &this->CollapsedDockAreas;
LAB_142780f12:
          pTVar4 = (TSharedRef<FTabManager::FArea,1> *)(pTVar17->AllocatorInstance).Data;
          if (((pTVar4 <= pTVar18) && (pTVar18 < pTVar4 + pTVar17->ArrayMax)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar5 = (code *)swi(3);
            pTVar13 = (TSharedPtr<SWidget,1> *)(*pcVar5)();
            return pTVar13;
          }
          iVar12 = pTVar17->ArrayNum;
          if (iVar12 == pTVar17->ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar17->AllocatorInstance,&pTVar17->ArrayMax);
          }
          pTVar17->ArrayNum = iVar12 + 1;
          pFVar15 = (pTVar17->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
          *(FArea **)pFVar15 = pTVar18->Object;
          pTVar2 = (pTVar18->SharedReferenceCount).ReferenceController;
          *(TReferenceControllerBase<1> **)(pFVar15 + 8) = pTVar2;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        FVar8.ReferenceController = local_e8.SharedReferenceCount.ReferenceController;
        if ((EVar1 == Placement_NoWindow) && (local_e8.Object != (SDockingArea *)0x0)) {
          if (local_res8 == (SDockingArea *)0x0) {
            if (local_e8.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            local_res8 = local_e8.Object;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar21.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar8.ReferenceController);
            FVar21.ReferenceController = FVar8.ReferenceController;
            goto LAB_142781036;
          }
          bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_6813193255430126451>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                              ,0x48d,"!PrimaryDockArea.IsValid()");
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            pTVar13 = (TSharedPtr<SWidget,1> *)(*pcVar5)();
            return pTVar13;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e8.SharedReferenceCount.ReferenceController);
      }
LAB_142781036:
      uVar20 = uVar20 + 1;
      local_d8 = local_d8 + 0x10;
      pFVar16 = param_1->Object;
      pSVar19 = local_res8;
    } while ((int)uVar20 < (pFVar16->Areas).ArrayNum);
  }
  if (((param_4 == Never) && (pSVar19 == (SDockingArea *)0x0)) && (2 < (byte)LogSlate._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  (**(code **)(this->_padding_ + 0x50))(this);
  (**(code **)(this->_padding_ + 0x58))(this);
  __return_storage_ptr__->Object = (SWidget *)pSVar19;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar21.ReferenceController;
  if (FVar21.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar21.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar21.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar21.ReferenceController);
  return __return_storage_ptr__;
}

// RestorePanelDrawer @ 1427810d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
FTabManager::RestorePanelDrawer
          (FTabManager *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          TSharedRef<SWidget,1> *param_1,TSharedRef<SWindow,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  SPanelDrawerArea *pSVar3;
  bool bVar4;
  FArguments *pFVar5;
  TSharedPtr<SWidget,1> *pTVar6;
  atomic<int> *paVar7;
  undefined1 local_res20 [8];
  FLLMScope local_2b8 [2];
  TSharedPtr<SDockingArea,1> local_2b0;
  code *local_298;
  undefined8 uStack_290;
  FName local_288;
  T1RequiredArgs<TSharedRef<SWidget,1>_const_&> local_280;
  FMemScope local_278 [2];
  TSharedRef<UE::Slate::Private::SPanelDrawerArea,1> local_268;
  TSharedPtr<SWindow,1> local_258;
  TSharedPtr<UE::Slate::Private::SPanelDrawerArea,1> local_248;
  TSlateDecl<UE::Slate::Private::SPanelDrawerArea,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_const_&>_>
  local_238;
  FSlateBaseNamedArgs local_220;
  
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  local_258.Object = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_258.SharedReferenceCount.ReferenceController = pTVar1;
  GetDockingAreaForPanelDrawer(this,&local_2b0,&local_258);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_2b0.Object == (SDockingArea *)0x0) {
    local_res20[0] = 0;
    bVar4 = `FTabManager::RestorePanelDrawer'::__l3::<lambda_1>::operator()(local_res20);
    if (!bVar4) {
      __return_storage_ptr__->Object = (SWidget *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_1427812c5;
    }
  }
  pFVar5 = UE::Slate::Private::SPanelDrawerArea::FArguments::FArguments((FArguments *)&local_220);
  local_280.Arg0 = param_1;
  FLLMScope::FLLMScope(local_2b8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_288 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(local_278,&local_288,true);
  TSlateDecl<UE::Slate::Private::SPanelDrawerArea,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_const_&>_>
  ::
  TSlateDecl<UE::Slate::Private::SPanelDrawerArea,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_const_&>_>
            (&local_238,"UE::Slate::Private::SPanelDrawerArea",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
             ,0x4ad,&local_280);
  FMemScope::~FMemScope(local_278);
  FLLMScope::~FLLMScope(local_2b8);
  TSlateDecl<UE::Slate::Private::SPanelDrawerArea,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_const_&>_>
  ::operator<<=(&local_238,&local_268,pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_220);
  pSVar3 = local_268.Object;
  uStack_290 = (ulonglong)uStack_290._4_4_ << 0x20;
  local_298 = OnPanelDrawerStateChanged;
  TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<FTabManager>
            ((TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &(local_268.Object)->OnExternalStateChange,this,(pmf_3f82431b *)&local_298);
  if (local_2b0.Object == (SDockingArea *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedPtr<SWidget,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  local_248.Object = local_268.Object;
  local_248.SharedReferenceCount.ReferenceController =
       local_268.SharedReferenceCount.ReferenceController;
  if (local_268.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    paVar7 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar7 = &(local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
  }
  SDockingArea::SetPanelDrawerArea(local_2b0.Object,&local_248);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.SharedReferenceCount.ReferenceController);
  __return_storage_ptr__->Object = (SWidget *)pSVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_268.SharedReferenceCount.ReferenceController;
  if (local_268.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.SharedReferenceCount.ReferenceController);
LAB_1427812c5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b0.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// RestoreSplitterContent @ 142781770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::RestoreSplitterContent
          (FTabManager *this,TArray<TSharedRef<SDockingNode,1>,TSizedDefaultAllocator<32>_> *param_1
          ,TSharedRef<SDockingSplitter,1> *param_2)

{
  int iVar1;
  TSharedRef<SDockingNode,1> *pTVar2;
  TSharedRef<SDockingNode,1> *pTVar3;
  undefined1 local_res10 [8];
  
  iVar1 = param_1->ArrayNum;
  pTVar2 = (TSharedRef<SDockingNode,1> *)(param_1->AllocatorInstance).Data;
  pTVar3 = pTVar2 + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<SDockingNode,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pTVar2 == pTVar3) break;
    SDockingSplitter::AddChildNode(param_2->Object,pTVar2,-1);
    pTVar2 = pTVar2 + 1;
  }
  return;
}

// RestoreSplitterContent @ 1427817f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::RestoreSplitterContent
          (FTabManager *this,TSharedRef<FTabManager::FSplitter,1> *param_1,
          TSharedRef<SDockingSplitter,1> *param_2,TSharedPtr<SWindow,1> *param_3,
          FSidebarTabLists *param_4)

{
  int iVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  atomic<int> aVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  SDockingNode *pSVar8;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar9;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar10;
  TSharedPtr<SDockingNode,1> local_48;
  TSharedRef<SDockingNode,1> local_38;
  
  iVar1 = (param_1->Object->ChildNodes).ArrayNum;
  pTVar10 = (TSharedRef<FTabManager::FLayoutNode,1> *)
            (param_1->Object->ChildNodes).AllocatorInstance.Data;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar9 = pTVar10 + iVar1;
  do {
    if (pTVar10 == pTVar9) {
      return;
    }
    pSVar8 = (SDockingNode *)0x0;
    RestoreArea_Helper(this,&local_48,pTVar10,param_3,false,param_4,Never,false);
    if ((local_48.Object == (SDockingNode *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ThisChildNodeWidget.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                           ,0x8d7,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_48.Object != (SDockingNode *)0x0) {
      if ((local_48.Object == (SDockingNode *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar7 = (TReferenceControllerBase<1> *)(local_48.Object)->_padding_;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar7->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) {
            pTVar7 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_142781939;
          }
          LOCK();
          aVar5 = pTVar7->SharedReferenceCount;
          bVar4 = aVar3 == aVar5;
          if (bVar4) {
            pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar5 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar5;
        } while (!bVar4);
        pSVar8 = (SDockingNode *)(local_48.Object)->_padding_;
      }
LAB_142781939:
      plVar6 = &pSVar8->_padding_;
      if (pSVar8 == (SDockingNode *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      if ((plVar6 != &(local_48.Object)->_padding_) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("SharedThis.Get() == this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x67f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (pSVar8 == (SDockingNode *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x416,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x26c,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38.Object = pSVar8;
      local_38.SharedReferenceCount.ReferenceController = pTVar7;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      SDockingSplitter::AddChildNode(param_2->Object,&local_38,-1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    pTVar10 = pTVar10 + 1;
  } while( true );
}

// SavePersistentLayout @ 1427832c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::SavePersistentLayout(FTabManager *this)

{
  longlong *plVar1;
  TSharedRef<FTabManager::FLayout,1> local_38;
  FReadAccessScope local_28;
  
  ClearPendingLayoutSave(this);
  PersistLayout(this,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnPersistLayout_Handler,&local_28);
  if ((*(int *)&(this->OnPersistLayout_Handler).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnPersistLayout_Handler).field_0x8, plVar1 != (longlong *)0x0))
  {
    (**(code **)(*plVar1 + 0x68))(plVar1,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return;
}

// SetAllowWindowMenuBar @ 142784030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::SetAllowWindowMenuBar(FTabManager *this,bool param_1)

{
  this->bAllowPerWindowMenu = param_1;
  return;
}

// SetMainTab @ 142785130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::SetMainTab(FTabManager *this,FTabId *param_1)

{
  int iVar1;
  ETabIdFlags EVar2;
  undefined3 uVar3;
  
  iVar1 = param_1->InstanceId;
  EVar2 = param_1->Flags;
  uVar3 = *(undefined3 *)&param_1->field_0xd;
  (this->MainNonCloseableTabID).TabType = param_1->TabType;
  (this->MainNonCloseableTabID).InstanceId = iVar1;
  (this->MainNonCloseableTabID).Flags = EVar2;
  *(undefined3 *)&(this->MainNonCloseableTabID).field_0xd = uVar3;
  return;
}

// SetMainTab @ 142785150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::SetMainTab(FTabManager *this,TSharedRef<SDockTab_const_,1> *param_1)

{
  int iVar1;
  ETabIdFlags EVar2;
  undefined3 uVar3;
  FTabId *pFVar4;
  SDockTab *local_28;
  FSharedReferencer<1> local_20;
  FTabId local_18;
  
  pFVar4 = SDockTab::GetLayoutIdentifier(param_1->Object,&local_18);
  local_28 = param_1->Object;
  if (pFVar4->TabType != (FName)0x0) {
    pFVar4 = SDockTab::GetLayoutIdentifier(local_28,&local_18);
    iVar1 = pFVar4->InstanceId;
    EVar2 = pFVar4->Flags;
    uVar3 = *(undefined3 *)&pFVar4->field_0xd;
    (this->MainNonCloseableTabID).TabType = pFVar4->TabType;
    (this->MainNonCloseableTabID).InstanceId = iVar1;
    (this->MainNonCloseableTabID).Flags = EVar2;
    *(undefined3 *)&(this->MainNonCloseableTabID).field_0xd = uVar3;
    return;
  }
  local_20.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->PendingMainNonClosableTab != (TSharedPtr<SDockTab_const_,1> *)&local_28) {
    (this->PendingMainNonClosableTab).Object = local_28;
    local_28 = (SDockTab *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PendingMainNonClosableTab).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  return;
}

// SetMenuMultiBox @ 142785200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::SetMenuMultiBox
          (FTabManager *this,TSharedPtr<FMultiBox,1> *param_1,TSharedPtr<SWidget,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FMultiBox *pFVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  bool bVar7;
  TSharedPtr<SDockTab,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->MenuMultiBox).SharedReferenceCount.ReferenceController;
  (this->MenuMultiBox).Object = pFVar2;
  (this->MenuMultiBox).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pSVar3 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->MenuWidget).SharedReferenceCount.ReferenceController;
  (this->MenuWidget).Object = pSVar3;
  (this->MenuWidget).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  local_18.SharedReferenceCount.ReferenceController =
       (this->OwnerTabPtr).WeakReferenceCount.ReferenceController;
  local_18.Object = (SDockTab *)0x0;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1427852b3;
      }
      LOCK();
      aVar6 = (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar5 == aVar6;
      if (bVar7) {
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar7);
    local_18.Object = (this->OwnerTabPtr).Object;
  }
LAB_1427852b3:
  UpdateMainMenu(this,&local_18,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SetOnPersistLayout @ 142785710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::SetOnPersistLayout
          (FTabManager *this,
          TDelegate<void___cdecl(TSharedRef<FTabManager::FLayout,1>_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != &this->OnPersistLayout_Handler) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPersistLayout_Handler,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return;
}

// SetReadOnly @ 142786a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::SetReadOnly(FTabManager *this,bool param_1)

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
  FDestructionSentinel local_38;
  
  if (this->bReadOnly != param_1) {
    this->bReadOnly = param_1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnReadOnlyModeChanged,(FWriteAccessScope *)&local_38);
    puVar1 = &(this->OnReadOnlyModeChanged).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar9 = *(int *)&(this->OnReadOnlyModeChanged).field_0x10 - 1;
    if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar9 < *(int *)&(this->OnReadOnlyModeChanged).field_0x10) {
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
        lVar2 = *(longlong *)&(this->OnReadOnlyModeChanged).field_0x8;
        if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
            (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar10 = lVar10 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    puVar1 = &(this->OnReadOnlyModeChanged).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnReadOnlyModeChanged,
                 false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// SetTabInPanelDrawer @ 142786cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::SetTabInPanelDrawer
          (FTabManager *this,TSharedPtr<SDockTab,1> *param_1,TSharedPtr<SDockingArea,1> *param_2,
          TSharedPtr<SWindow,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FGlobalTabmanager *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  ETabRole EVar6;
  atomic<int> aVar7;
  TSharedRef<FGlobalTabmanager,1> *pTVar8;
  SDockingArea *pSVar9;
  TSharedRef<FTabManager,1> *pTVar10;
  TSharedPtr<SDockTab,1> *this_01;
  SDockTab *this_02;
  TSharedPtr<SWindow,1> *pTVar11;
  TSharedPtr<SDockingArea,1> *pTVar12;
  TSharedRef<SDockTab,1> *pTVar13;
  SPanelDrawerArea *pSVar14;
  SPanelDrawerArea *pSVar15;
  SPanelDrawerArea *pSVar16;
  TSharedPtr<SDockingArea,1> local_c8;
  TSharedPtr<SWindow,1> local_b8;
  TSharedPtr<SDockTab,1> local_a8;
  TSharedPtr<UE::Slate::Private::SPanelDrawerArea,1> local_98;
  TSharedPtr<SDockingArea,1> local_88;
  TSharedPtr<SWindow,1> local_78;
  TSharedPtr<SDockTab,1> local_68;
  TSharedRef<FTabManager,1> local_58;
  TSharedPtr<SDockingArea,1> local_48;
  TSharedRef<SDockTab,1> local_38;
  TSharedRef<SDockTab,1> local_28;
  
  local_a8.Object = param_1->Object;
  if (local_a8.Object == (SDockTab *)0x0) {
    return;
  }
  if (param_2->Object == (SDockingArea *)0x0) {
    return;
  }
  local_a8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RemoveFromHiddenPanelDrawerTabs(this,&local_a8);
  if ((param_1->Object == (SDockTab *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EVar6 = SDockTab::GetTabRole(param_1->Object);
  if (EVar6 != NomadTab) {
    pSVar9 = TSharedPtr<SDockingArea,1>::operator->(param_2);
    pTVar13 = TSharedPtr<SDockTab,1>::ToSharedRef(param_1,&local_28);
    SDockingArea::HostTabIntoPanelDrawer(pSVar9,pTVar13);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  pTVar8 = FGlobalTabmanager::Get();
  pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
  this_00 = pTVar8->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  GetDockingAreaForPanelDrawer((FTabManager *)this_00,&local_c8,param_3);
  pSVar16 = (SPanelDrawerArea *)0x0;
  if (local_c8.Object == (SDockingArea *)0x0) {
    pSVar9 = TSharedPtr<SDockingArea,1>::operator->(param_2);
    pTVar10 = SDockingArea::GetTabManager(pSVar9,&local_58);
    this_01 = FGlobalTabmanager::GetMajorTabForTabManager(this_00,&local_68,pTVar10);
    this_02 = TSharedPtr<SDockTab,1>::operator->(this_01);
    pTVar11 = SDockTab::GetParentWindow(this_02,&local_78);
    pTVar12 = GetDockingAreaForPanelDrawer((FTabManager *)this_00,&local_88,pTVar11);
    if (&local_c8 != pTVar12) {
      local_c8.Object = pTVar12->Object;
      pTVar12->Object = (SDockingArea *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_c8.SharedReferenceCount,&pTVar12->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (local_c8.Object == (SDockingArea *)0x0) {
      local_b8.SharedReferenceCount.ReferenceController =
           (this_00->RootWindowPtr).WeakReferenceCount.ReferenceController;
      local_b8.Object = (SWindow *)0x0;
      if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) {
            local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            goto LAB_142786e69;
          }
          LOCK();
          aVar7 = (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          bVar5 = aVar3 == aVar7;
          if (bVar5) {
            (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)aVar3 + 1);
            aVar7 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar7;
        } while (!bVar5);
        local_b8.Object = (this_00->RootWindowPtr).Object;
      }
LAB_142786e69:
      FVar4.ReferenceController = local_b8.SharedReferenceCount.ReferenceController;
      pTVar12 = GetDockingAreaForPanelDrawer((FTabManager *)this_00,&local_48,&local_b8);
      if (&local_c8 != pTVar12) {
        local_c8.Object = pTVar12->Object;
        pTVar12->Object = (SDockingArea *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_c8.SharedReferenceCount,&pTVar12->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar4.ReferenceController);
      if (local_c8.Object == (SDockingArea *)0x0) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6813193255430124954>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                           ,0xa66,"MajorDockingArea");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto LAB_14278706e;
      }
    }
  }
  pSVar9 = TSharedPtr<SDockingArea,1>::operator->(param_2);
  pSVar15 = (SPanelDrawerArea *)(pSVar9->PanelDrawerPtr).WeakReferenceCount.ReferenceController;
  pSVar14 = pSVar15;
  if (pSVar15 == (SPanelDrawerArea *)0x0) {
LAB_142786f35:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TargetPanelDrawer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                       ,0xa6c,L"");
    pSVar15 = pSVar14;
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    aVar3 = *(atomic<int> *)&pSVar15->_padding_;
    do {
      pSVar14 = pSVar16;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142786f35;
      LOCK();
      aVar7 = *(atomic<int> *)&pSVar15->_padding_;
      bVar5 = aVar3 == aVar7;
      if (bVar5) {
        *(atomic<int> *)&pSVar15->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar7 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar7;
    } while (!bVar5);
    pSVar16 = (pSVar9->PanelDrawerPtr).Object;
    pSVar14 = pSVar15;
    if (pSVar16 == (SPanelDrawerArea *)0x0) goto LAB_142786f35;
  }
  if ((local_c8.Object == (SDockingArea *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pSVar9 = local_c8.Object;
  if ((pSVar16 == (SPanelDrawerArea *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (pSVar15 != (SPanelDrawerArea *)0x0) {
    LOCK();
    *(int *)&pSVar15->_padding_ = (int)pSVar15->_padding_ + 1;
    UNLOCK();
  }
  if ((pSVar16 == (SPanelDrawerArea *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (pSVar15 != (SPanelDrawerArea *)0x0) {
    LOCK();
    *(int *)&pSVar15->_padding_ = (int)pSVar15->_padding_ + 1;
    UNLOCK();
  }
  local_98.Object = pSVar16;
  local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar15;
  SDockingArea::SetPanelDrawerArea(pSVar9,&local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar15);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar15);
  if ((local_c8.Object == (SDockingArea *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar13 = TSharedPtr<SDockTab,1>::ToSharedRef(param_1,&local_38);
  SDockingArea::HostTabIntoPanelDrawer(local_c8.Object,pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar15);
LAB_14278706e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// SetTabsTo @ 142787460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::SetTabsTo
          (FTabManager *this,TSharedRef<FTabManager::FLayoutNode,1> *param_1,Type param_2,
          Type param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_38;
  TReferenceControllerBase<1> *local_30;
  longlong local_28;
  TReferenceControllerBase<1> *local_20;
  
  (**(code **)(param_1->Object->_padding_ + 8))(param_1->Object,&local_28);
  if (local_28 == 0) {
    (**(code **)(param_1->Object->_padding_ + 0x10))();
    if ((local_38 == 0) &&
       (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6813193255430124695>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                           ,0xb69,"AsSplitter.IsValid()"), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar5 = 0;
    while( true ) {
      if ((local_38 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(int *)(local_38 + 0x30) <= (int)uVar5) break;
      uVar3 = 0;
      if ((int)uVar5 < *(int *)(local_38 + 0x30)) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      SetTabsTo(this,(TSharedRef<FTabManager::FLayoutNode,1> *)
                     ((longlong)(int)uVar5 * 0x10 + *(longlong *)(local_38 + 0x28)),param_2,param_3)
      ;
      uVar5 = uVar5 + 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  else {
    lVar7 = local_28;
    if ((local_28 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), lVar7 = local_28, bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar4 = *(int *)(lVar7 + 0x28);
    uVar5 = 0;
    if (0 < iVar4) {
      lVar6 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar5 < iVar4) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(Type *)(*(longlong *)(lVar7 + 0x20) + 0x10 + lVar6) == param_3) {
          uVar3 = 0;
          if ((int)uVar5 < *(int *)(lVar7 + 0x28)) {
            uVar3 = ~uVar5 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          *(Type *)(*(longlong *)(lVar7 + 0x20) + 0x10 + lVar6) = param_2;
        }
        iVar4 = *(int *)(lVar7 + 0x28);
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x20;
      } while ((int)uVar5 < iVar4);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return;
}

// SpawnTab @ 14278aa60

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockTab,1> * __thiscall
FTabManager::SpawnTab
          (FTabManager *this,TSharedPtr<SDockTab,1> *__return_storage_ptr__,FTabId *param_1,
          TSharedPtr<SWindow,1> *param_2,bool param_3)

{
  byte *pbVar1;
  TSharedPtr<SDockTab_const_,1> *pTVar2;
  FName FVar3;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar4;
  STextBlock *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  SBox *pSVar7;
  FTabManager *pFVar8;
  code *pcVar9;
  int iVar10;
  ETabIdFlags EVar11;
  undefined3 uVar12;
  FSharedReferencer<1> FVar13;
  bool bVar14;
  char cVar15;
  byte bVar16;
  TSharedRef<FTabSpawnerEntry,1> *pTVar17;
  TSharedRef<FGlobalTabmanager,1> *pTVar18;
  FSlateBrush *pFVar19;
  FText *pFVar20;
  FString *pFVar21;
  TSharedPtr<SDockTab,1> *pTVar22;
  FArguments *pFVar23;
  FArguments *pFVar24;
  FArguments *pFVar25;
  TSharedRef<STextBlock,1> *pTVar26;
  TSharedRef<SBox,1> *pTVar27;
  FName *pFVar28;
  TSharedRef<FTabManager,1> *pTVar29;
  longlong *plVar30;
  FTabSpawnerEntry *pFVar31;
  longlong lVar32;
  SDockTab *pSVar33;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  undefined2 local_fd8 [4];
  FString local_fd0;
  TSharedPtr<FTabSpawnerEntry,1> local_fc0;
  FLLMScope local_fb0;
  FLLMScope local_fac;
  FLLMScope local_fa8 [2];
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_fa0;
  TSharedPtr<SDockTab,1> local_f88;
  SWidget *local_f78;
  TReferenceControllerBase<1> *pTStack_f70;
  SWidget *local_f68;
  TReferenceControllerBase<1> *pTStack_f60;
  TSharedPtr<SDockTab,1> local_f58;
  TSharedPtr<FTabManager,1> local_f48;
  FText local_f38;
  bool local_f28;
  undefined1 local_f20 [8];
  void *pvStack_f18;
  undefined8 local_f10;
  FName local_f08;
  FMemScope local_f00;
  FName local_ef8;
  FMemScope local_ef0;
  FName local_ee8;
  FMemScope local_ee0;
  SDockTab *local_ed8;
  TReferenceControllerBase<1> *local_ed0;
  longlong local_ec8;
  FSharedReferencer<1> FStack_ec0;
  FTabId local_eb8;
  TSharedRef<FTabManager,1> local_ea8;
  FText local_e98;
  FName local_e88;
  undefined8 uStack_e80;
  SWindow *local_e78;
  TReferenceControllerBase<1> *local_e70;
  FName local_e68;
  undefined8 uStack_e60;
  SWindow *local_e58;
  TReferenceControllerBase<1> *local_e50;
  TAttribute<FText> local_e48;
  FString local_e18;
  TSharedRef<SBox,1> local_e08;
  TSharedRef<STextBlock,1> local_df8;
  FText local_de8;
  FText local_dd8;
  FString local_dc8;
  FName local_db8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_db0;
  undefined8 local_d98;
  undefined8 local_d90;
  undefined8 local_d88;
  undefined8 local_d80;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_d78;
  FText local_d60;
  FString local_d50;
  FReadAccessScope local_d40;
  FReadAccessScope local_d28;
  FReadAccessScope local_d10;
  FArguments local_cf8;
  FArguments local_9b8;
  FArguments local_590;
  
  __return_storage_ptr__->Object = (SDockTab *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FVar3 = param_1->TabType;
  pTVar17 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
            ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                    *)&this->TabSpawner,FVar3);
  if ((pTVar17 == (TSharedRef<FTabSpawnerEntry,1> *)0x0) &&
     (pTVar17 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                        *)(this->NomadTabSpawner).Object,FVar3),
     pTVar17 == (TSharedRef<FTabSpawnerEntry,1> *)0x0)) {
    pFVar31 = (FTabSpawnerEntry *)0x0;
    local_d90 = 0;
    local_fc0.Object = (FTabSpawnerEntry *)0x0;
    local_fc0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_d98 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
LAB_14278af09:
    pSVar33 = __return_storage_ptr__->Object;
    if (pSVar33 == (SDockTab *)0x0) {
      pFVar20 = GetTabLabelBasedOnSpawner(this,&local_d60,&local_fc0);
      pFVar21 = FText::ToString(pFVar20);
      local_fd0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_fd0.Data.ArrayNum = (pFVar21->Data).ArrayNum;
      lVar32 = (longlong)local_fd0.Data.ArrayNum;
      _Src = (pFVar21->Data).AllocatorInstance.Data;
      if (local_fd0.Data.ArrayNum == 0) {
        local_fd0.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_fd0.Data.ArrayNum,0,(ForAnyElementType *)&local_fd0,
                   local_fd0.Data.ArrayNum,&local_fd0.Data.ArrayMax);
        memcpy(local_fd0.Data.AllocatorInstance.Data,_Src,lVar32 * 2);
      }
      if (local_d60.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d60.TextData.Reference + 0x10))();
      }
      if (local_fd0.Data.ArrayNum < 2) {
        if (pFVar31 != (FTabSpawnerEntry *)0x0) {
          if ((pFVar31 == (FTabSpawnerEntry *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar9 = (code *)swi(3);
            pTVar22 = (TSharedPtr<SDockTab,1> *)(*pcVar9)();
            return pTVar22;
          }
          if (pFVar31->bHiddenTabName != false) goto LAB_14278b04c;
        }
        pFVar21 = ::FString::FString(&local_d50,"Unknown");
        if (&local_fd0 != pFVar21) {
          if (local_fd0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_fd0.Data.AllocatorInstance.Data);
          }
          local_fd0.Data.AllocatorInstance.Data = (pFVar21->Data).AllocatorInstance.Data;
          (pFVar21->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_fd0.Data.ArrayNum = (pFVar21->Data).ArrayNum;
          local_fd0.Data.ArrayMax = (pFVar21->Data).ArrayMax;
          (pFVar21->Data).ArrayNum = 0;
          (pFVar21->Data).ArrayMax = 0;
        }
        if (local_d50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d50.Data.AllocatorInstance.Data);
        }
      }
LAB_14278b04c:
      if (param_3) {
        if (4 < (byte)LogSlate._0_1_) {
          ::FName::ToString(&this->ActiveLayoutName,&local_dc8);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
          if (local_dc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_dc8.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        if (4 < (byte)LogSlate._0_1_) {
          ::FName::ToString(&this->ActiveLayoutName,&local_e18);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
          if (local_e18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e18.Data.AllocatorInstance.Data);
          }
        }
        pFVar23 = SDockTab::FArguments::FArguments(&local_9b8);
        pFVar20 = FTabId::ToText(param_1,&local_dd8);
        FText::FText(&local_f38,pFVar20);
        local_f28 = true;
        local_f10 = 0;
        local_f20 = (undefined1  [8])0x0;
        pvStack_f18 = (void *)0x0;
        FText::operator=(&(pFVar23->_Label).Value,&local_f38);
        (pFVar23->_Label).bIsSet = local_f28;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_Label).Getter,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f20);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f20);
        if (pvStack_f18 != (void *)0x0) {
          FMemory::Free(pvStack_f18);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_f20);
        if (local_f38.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_f38.TextData.Reference + 0x10))();
        }
        pFVar23->_ShouldAutosize = false;
        pFVar24 = SBox::FArguments::FArguments(&local_cf8);
        pFVar24->_HAlign = HAlign_Center;
        pFVar24->_VAlign = VAlign_Center;
        pFVar25 = STextBlock::FArguments::FArguments(&local_590);
        pFVar20 = FText::AsLocalizable_Advanced_LocText
                            (&local_de8,L"TabManagement",L"Unrecognized",L"unrecognized tab");
        FText::FText(&local_e48.Value,pFVar20);
        local_e48.bIsSet = true;
        local_e48.Getter._16_8_ = 0;
        local_e48.Getter._0_8_ = 0;
        local_e48.Getter._8_8_ = 0;
        pFVar25 = STextBlock::FArguments::Text(pFVar25,&local_e48);
        FLLMScope::FLLMScope
                  (&local_fb0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
        local_f08 = LLMTagDeclaration_UI_Slate.UniqueName;
        FMemScope::FMemScope(&local_f00,&local_f08,true);
        TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
        TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                  (&local_d78,"STextBlock",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                   ,0x9a0,local_res8);
        FMemScope::~FMemScope(&local_f00);
        FLLMScope::~FLLMScope(&local_fb0);
        pTVar26 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                            (&local_d78,&local_df8,pFVar25);
        pTVar4 = (pTVar26->SharedReferenceCount).ReferenceController;
        pSVar5 = pTVar26->Object;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_f78 = (pFVar24->_Content).Widget.Object;
        pTStack_f70 = (pFVar24->_Content).Widget.SharedReferenceCount.ReferenceController;
        (pFVar24->_Content).Widget.Object = (SWidget *)pSVar5;
        (pFVar24->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_f70);
        FLLMScope::FLLMScope
                  (&local_fac,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
        local_ef8 = LLMTagDeclaration_UI_Slate.UniqueName;
        FMemScope::FMemScope(&local_ef0,&local_ef8,true);
        TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
                  (&local_db0,"SBox",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                   ,0x99c,local_res10);
        FMemScope::~FMemScope(&local_ef0);
        FLLMScope::~FLLMScope(&local_fac);
        pTVar27 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                            (&local_db0,&local_e08,pFVar24);
        pTVar6 = (pTVar27->SharedReferenceCount).ReferenceController;
        pSVar7 = pTVar27->Object;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_f68 = (pFVar23->_Content).Widget.Object;
        pTStack_f60 = (pFVar23->_Content).Widget.SharedReferenceCount.ReferenceController;
        (pFVar23->_Content).Widget.Object = (SWidget *)pSVar7;
        (pFVar23->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar6;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_f60);
        FLLMScope::FLLMScope
                  (local_fa8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
        local_ee8 = LLMTagDeclaration_UI_Slate.UniqueName;
        FMemScope::FMemScope(&local_ee0,&local_ee8,true);
        TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
        TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                  (&local_fa0,"SDockTab",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                   ,0x998,local_res18);
        FMemScope::~FMemScope(&local_ee0);
        FLLMScope::~FLLMScope(local_fa8);
        pSVar33 = local_fa0._Widget.Object;
        if ((local_fa0._Widget.Object == (SDockTab *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          pTVar22 = (TSharedPtr<SDockTab,1> *)(*pcVar9)();
          return pTVar22;
        }
        SWidget::SWidgetConstruct
                  ((SWidget *)local_fa0._Widget.Object,(FSlateBaseNamedArgs *)pFVar23);
        SDockTab::Construct(local_fa0._Widget.Object,pFVar23);
        if ((local_fa0._Widget.Object == (SDockTab *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          pTVar22 = (TSharedPtr<SDockTab,1> *)(*pcVar9)();
          return pTVar22;
        }
        if (((local_fa0._Widget.Object)->_padding_ & 0x10) == 0) {
          cVar15 = (**(code **)((local_fa0._Widget.Object)->_padding_ + 0x228))
                             (local_fa0._Widget.Object);
          bVar16 = 0;
          if (cVar15 != '\0') goto LAB_14278b49b;
        }
        else {
LAB_14278b49b:
          bVar16 = 0x20;
        }
        *(byte *)&(local_fa0._Widget.Object)->_padding_ =
             (byte)(local_fa0._Widget.Object)->_padding_ & 0xdf;
        *(byte *)&(local_fa0._Widget.Object)->_padding_ =
             (byte)(local_fa0._Widget.Object)->_padding_ | bVar16;
        if ((local_fa0._Widget.Object == (SDockTab *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          pTVar22 = (TSharedPtr<SDockTab,1> *)(*pcVar9)();
          return pTVar22;
        }
        pbVar1 = (byte *)((longlong)&(local_fa0._Widget.Object)->_padding_ + 1);
        *pbVar1 = *pbVar1 | 4;
        if ((local_fa0._Widget.Object == (SDockTab *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x416,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          pTVar22 = (TSharedPtr<SDockTab,1> *)(*pcVar9)();
          return pTVar22;
        }
        FVar13.ReferenceController = local_fa0._Widget.SharedReferenceCount.ReferenceController;
        local_fa0._Widget.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_fa0._Widget.Object = (SDockTab *)0x0;
        if ((pSVar33 == (SDockTab *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x26c,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          pTVar22 = (TSharedPtr<SDockTab,1> *)(*pcVar9)();
          return pTVar22;
        }
        local_f58.Object = pSVar33;
        local_f58.SharedReferenceCount.ReferenceController = FVar13.ReferenceController;
        if (FVar13.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar13.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (__return_storage_ptr__ != &local_f58) {
          __return_storage_ptr__->Object = pSVar33;
          local_f58.Object = (SDockTab *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&__return_storage_ptr__->SharedReferenceCount,&local_f58.SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f58.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar13.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_fa0._Widget.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e08.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_db0._Widget.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_df8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d78._Widget.SharedReferenceCount.ReferenceController);
        if (local_de8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_de8.TextData.Reference + 0x10))();
        }
        STextBlock::FArguments::~FArguments(&local_590);
        SBox::FArguments::~FArguments(&local_cf8);
        if (local_dd8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_dd8.TextData.Reference + 0x10))();
        }
        SDockTab::FArguments::~FArguments(&local_9b8);
        pFVar28 = ::FName::FName(&local_db8,L"Unrecognized");
        local_eb8.TabType = *pFVar28;
        local_eb8.InstanceId = -1;
        local_eb8.Flags = None;
        if ((__return_storage_ptr__->Object == (SDockTab *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          pTVar22 = (TSharedPtr<SDockTab,1> *)(*pcVar9)();
          return pTVar22;
        }
        SDockTab::SetLayoutIdentifier(__return_storage_ptr__->Object,&local_eb8);
      }
      if (local_fd0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_fd0.Data.AllocatorInstance.Data);
      }
      goto LAB_14278b6da;
    }
  }
  else {
    local_fc0.SharedReferenceCount.ReferenceController =
         (pTVar17->SharedReferenceCount).ReferenceController;
    pFVar31 = pTVar17->Object;
    if (local_fc0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_fc0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_fc0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_d80 = 0;
    local_d88 = 0;
    local_fc0.Object = pFVar31;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pFVar31 == (FTabSpawnerEntry *)0x0) goto LAB_14278af09;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar31->CanSpawnTab,
               &local_d10);
    if ((*(int *)&(pFVar31->CanSpawnTab).field_0x10 == 0) ||
       (plVar30 = *(longlong **)&(pFVar31->CanSpawnTab).field_0x8, plVar30 == (longlong *)0x0)) {
LAB_14278ab58:
      local_res8[0] = (T0RequiredArgs)0x0;
    }
    else {
      cVar15 = (**(code **)(*plVar30 + 0x38))();
      local_res8[0] = (T0RequiredArgs)0x1;
      if (cVar15 == '\0') goto LAB_14278ab58;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_d10);
    if (local_res8[0] == (T0RequiredArgs)0x0) {
LAB_14278abeb:
      if (((((pFVar31->SpawnedTabPtr).Object == (SDockTab *)0x0) ||
           (pTVar4 = (pFVar31->SpawnedTabPtr).WeakReferenceCount.ReferenceController,
           pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)
          ) || (bVar14 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                                   ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                                    &pFVar31->OnFindTabToReuse), bVar14)) {
        local_e78 = param_2->Object;
        local_e88 = param_1->TabType;
        uStack_e80._0_4_ = param_1->InstanceId;
        uStack_e80._4_1_ = param_1->Flags;
        uStack_e80._5_3_ = *(undefined3 *)&param_1->field_0xd;
        local_e70 = (param_2->SharedReferenceCount).ReferenceController;
        if (local_e70 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_e70->SharedReferenceCount = (atomic<int>)((int)local_e70->SharedReferenceCount + 1);
          UNLOCK();
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar31->OnSpawnTab,
                   &local_d28);
        if (*(int *)&(pFVar31->OnSpawnTab).field_0x10 == 0) {
          plVar30 = (longlong *)0x0;
        }
        else {
          plVar30 = *(longlong **)&(pFVar31->OnSpawnTab).field_0x8;
        }
        (**(code **)(*plVar30 + 0x60))(plVar30,&local_ed8,&local_e88);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_d28);
        local_f88.Object = local_ed8;
        local_f88.SharedReferenceCount.ReferenceController = local_ed0;
        if (local_ed0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_ed0->SharedReferenceCount = (atomic<int>)((int)local_ed0->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (__return_storage_ptr__ != &local_f88) {
          __return_storage_ptr__->Object = local_ed8;
          local_f88.Object = (SDockTab *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&__return_storage_ptr__->SharedReferenceCount,&local_f88.SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f88.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_ed0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e70);
        pTVar2 = &this->PendingMainNonClosableTab;
        if ((pTVar2->Object != (SDockTab *)0x0) &&
           (__return_storage_ptr__->Object == pTVar2->Object)) {
          local_ec8 = 0;
          FStack_ec0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (pTVar2 != (TSharedPtr<SDockTab_const_,1> *)&local_ec8) {
            pTVar2->Object = (SDockTab *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->PendingMainNonClosableTab).SharedReferenceCount,&FStack_ec0);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_ec0.ReferenceController);
          iVar10 = param_1->InstanceId;
          EVar11 = param_1->Flags;
          uVar12 = *(undefined3 *)&param_1->field_0xd;
          (this->MainNonCloseableTabID).TabType = param_1->TabType;
          (this->MainNonCloseableTabID).InstanceId = iVar10;
          (this->MainNonCloseableTabID).Flags = EVar11;
          *(undefined3 *)&(this->MainNonCloseableTabID).field_0xd = uVar12;
        }
        pTVar18 = FGlobalTabmanager::Get();
        if (pTVar18->Object->bShouldUseMiddleEllipsisForDockTabLabel != false) {
          if ((__return_storage_ptr__->Object == (SDockTab *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar9 = (code *)swi(3);
            pTVar22 = (TSharedPtr<SDockTab,1> *)(*pcVar9)();
            return pTVar22;
          }
          local_fd8[0] = 0x103;
          SDockTab::SetTabLabelOverflowPolicy(__return_storage_ptr__->Object,SUB82(local_fd8,0));
        }
        if ((__return_storage_ptr__->Object == (SDockTab *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          pTVar22 = (TSharedPtr<SDockTab,1> *)(*pcVar9)();
          return pTVar22;
        }
        SDockTab::SetLayoutIdentifier(__return_storage_ptr__->Object,param_1);
        GetTabLabelBasedOnSpawner(this,&local_e98,&local_fc0);
        if ((__return_storage_ptr__->Object == (SDockTab *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          pTVar22 = (TSharedPtr<SDockTab,1> *)(*pcVar9)();
          return pTVar22;
        }
        SDockTab::ProvideDefaultLabel(__return_storage_ptr__->Object,&local_e98);
        if ((__return_storage_ptr__->Object == (SDockTab *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          pTVar22 = (TSharedPtr<SDockTab,1> *)(*pcVar9)();
          return pTVar22;
        }
        pSVar33 = __return_storage_ptr__->Object;
        if ((pFVar31 == (FTabSpawnerEntry *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          pTVar22 = (TSharedPtr<SDockTab,1> *)(*pcVar9)();
          return pTVar22;
        }
        pFVar19 = FSlateIcon::GetIcon((FSlateIcon *)&pFVar31->_padding_);
        SDockTab::ProvideDefaultIcon(pSVar33,pFVar19);
        if ((__return_storage_ptr__->Object == (SDockTab *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          pTVar22 = (TSharedPtr<SDockTab,1> *)(*pcVar9)();
          return pTVar22;
        }
        pSVar33 = __return_storage_ptr__->Object;
        if ((pFVar31 == (FTabSpawnerEntry *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          pTVar22 = (TSharedPtr<SDockTab,1> *)(*pcVar9)();
          return pTVar22;
        }
        SDockTab::SetIsTabNameHidden(pSVar33,pFVar31->bHiddenTabName);
        TWeakPtr<SDockTab,1>::operator=<SDockTab>(&pFVar31->SpawnedTabPtr,__return_storage_ptr__);
        if (local_e98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e98.TextData.Reference + 0x10))();
        }
        goto LAB_14278af09;
      }
    }
    else {
      local_e58 = param_2->Object;
      local_e68 = param_1->TabType;
      uStack_e60._0_4_ = param_1->InstanceId;
      uStack_e60._4_1_ = param_1->Flags;
      uStack_e60._5_3_ = *(undefined3 *)&param_1->field_0xd;
      local_e50 = (param_2->SharedReferenceCount).ReferenceController;
      if (local_e50 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_e50->SharedReferenceCount = (atomic<int>)((int)local_e50->SharedReferenceCount + 1);
        UNLOCK();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar31->CanSpawnTab,
                 &local_d40);
      if (*(int *)&(pFVar31->CanSpawnTab).field_0x10 == 0) {
        plVar30 = (longlong *)0x0;
      }
      else {
        plVar30 = *(longlong **)&(pFVar31->CanSpawnTab).field_0x8;
      }
      cVar15 = (**(code **)(*plVar30 + 0x60))(plVar30,&local_e68);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d40);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e50)
      ;
      if (cVar15 != '\0') goto LAB_14278abeb;
    }
LAB_14278b6da:
    pSVar33 = __return_storage_ptr__->Object;
    if (pSVar33 == (SDockTab *)0x0) goto LAB_14278b744;
  }
  pTVar29 = TSharedFromThis<FTabManager,1>::AsShared
                      ((TSharedFromThis<FTabManager,1> *)&this->_padding_,&local_ea8);
  pTVar4 = (pTVar29->SharedReferenceCount).ReferenceController;
  pFVar8 = pTVar29->Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ea8.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ea8.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f48.Object = pFVar8;
  local_f48.SharedReferenceCount.ReferenceController = pTVar4;
  SDockTab::SetTabManager(pSVar33,&local_f48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
LAB_14278b744:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fc0.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ToggleSidebarOpenTabs @ 14278dc70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::ToggleSidebarOpenTabs(FTabManager *this)

{
  int *piVar1;
  TArray<TWeakPtr<SDockTab,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  FName FVar3;
  SDockTab *pSVar4;
  STabSidebar *pSVar5;
  SDockingTabStack *pSVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  atomic<int> aVar10;
  bool bVar11;
  uint uVar12;
  atomic<int> aVar13;
  int iVar14;
  ulonglong uVar15;
  FTabId *pFVar16;
  TSharedRef<FTabSpawnerEntry,1> *pTVar17;
  undefined8 *puVar18;
  TSharedPtr<SDockingTabStack,1> *pTVar19;
  longlong *plVar20;
  FTabSpawnerEntry *pFVar21;
  TReferenceControllerBase<1> *pTVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  longlong lVar25;
  TSharedRef<SDockTab,1> *pTVar26;
  TSharedRef<SDockTab,1> *pTVar27;
  FScriptContainerElement *pFVar28;
  bool bVar29;
  uint local_res10 [2];
  undefined1 local_res18 [8];
  uint local_res20;
  SDockTab *local_158;
  TReferenceControllerBase<1> *local_150;
  uint local_148;
  longlong local_140;
  TSharedRef<SDockTab,1> *local_138;
  uint local_130;
  TReferenceControllerBase<1> *local_128;
  undefined8 local_120;
  TReferenceControllerBase<1> *local_118;
  undefined8 local_110;
  TReferenceControllerBase<1> *local_108;
  TSharedPtr<SDockTab,1> local_100;
  TSharedPtr<SDockTab,1> local_f0;
  TSharedRef<SDockTab,1> local_e0;
  TSharedRef<SDockTab,1> local_d0;
  TSharedRef<SDockTab,1> local_c0;
  TSharedRef<SDockTab,1> local_b0;
  TSharedPtr<SDockingTabStack,1> local_a0;
  TSharedPtr<SDockingTabStack,1> local_90;
  undefined1 local_80 [8];
  TReferenceControllerBase<1> *local_78;
  TSharedPtr<SDockingTabStack,1> local_70;
  FTabId local_60 [2];
  
  bVar9 = false;
  bVar8 = false;
  bVar29 = false;
  local_res10[0] = 0;
  iVar14 = (this->TemporarilySidebaredTabs).ArrayNum;
  if (iVar14 == 0) {
    local_res20 = 0;
    if (0 < (this->DockAreas).ArrayNum) {
      local_140 = 0;
      do {
        lVar25 = local_140;
        uVar24 = local_res20;
        uVar12 = 0;
        if ((int)local_res20 < (this->DockAreas).ArrayNum) {
          uVar12 = ~local_res20 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar23 = (this->DockAreas).AllocatorInstance.Data;
        local_128 = *(TReferenceControllerBase<1> **)(pFVar23 + lVar25 + 8);
        pTVar22 = local_128;
        if (local_128 != (TReferenceControllerBase<1> *)0x0) {
          aVar10 = local_128->SharedReferenceCount;
          do {
            if (aVar10 == (atomic<int>)0x0) {
              pTVar22 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_14278e162;
            }
            LOCK();
            aVar13 = local_128->SharedReferenceCount;
            bVar11 = aVar10 == aVar13;
            if (bVar11) {
              local_128->SharedReferenceCount = (atomic<int>)((int)aVar10 + 1);
              aVar13 = aVar10;
            }
            UNLOCK();
            aVar10 = aVar13;
          } while (!bVar11);
          plVar20 = *(longlong **)(pFVar23 + lVar25);
          if ((plVar20 != (longlong *)0x0) && (*(char *)((longlong)plVar20 + 0x333) != '\0')) {
            (**(code **)(*plVar20 + 0x268))(plVar20,&local_138);
            uVar15 = (ulonglong)(int)local_130;
            pTVar26 = local_138 + uVar15;
            local_148 = local_130;
            pTVar27 = local_138;
            while( true ) {
              if (local_130 != (uint)uVar15) {
                local_res10[0] = local_res10[0] & 0xffffff00;
                `TCheckedPointerIterator<TSharedRef<SDockTab,1>,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_res10);
              }
              if (pTVar27 == pTVar26) break;
              pFVar16 = SDockTab::GetLayoutIdentifier(pTVar27->Object,local_60);
              FVar3 = pFVar16->TabType;
              pTVar17 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                        ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                                *)&this->TabSpawner,FVar3);
              if ((pTVar17 == (TSharedRef<FTabSpawnerEntry,1> *)0x0) &&
                 (pTVar17 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                            ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                                    *)(this->NomadTabSpawner).Object,FVar3),
                 pTVar17 == (TSharedRef<FTabSpawnerEntry,1> *)0x0)) {
                bVar29 = true;
                puVar18 = &local_120;
                pFVar21 = (FTabSpawnerEntry *)0x0;
                local_118 = (TReferenceControllerBase<1> *)0x0;
              }
              else {
                pFVar21 = pTVar17->Object;
                bVar8 = true;
                local_108 = (pTVar17->SharedReferenceCount).ReferenceController;
                if (local_108 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_108->SharedReferenceCount =
                       (atomic<int>)((int)local_108->SharedReferenceCount + 1);
                  UNLOCK();
                }
                puVar18 = &local_110;
              }
              pTVar22 = (TReferenceControllerBase<1> *)puVar18[1];
              puVar18[1] = 0;
              *puVar18 = 0;
              if (bVar29) {
                bVar29 = false;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_118);
              }
              if (bVar8) {
                bVar8 = false;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_108);
              }
              if (pFVar21 == (FTabSpawnerEntry *)0x0) goto LAB_14278dfac;
              bVar11 = pFVar21->bCanSidebarTab;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar22);
              if (bVar11 == false) {
LAB_14278dfb1:
                bVar11 = false;
              }
              else {
                pTVar22 = (pTVar27->SharedReferenceCount).ReferenceController;
                pSVar4 = pTVar27->Object;
                if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar22->SharedReferenceCount =
                       (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
                  UNLOCK();
                }
                if ((plVar20[0x5c] == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pSVar5 = (STabSidebar *)plVar20[0x5c];
                if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar22->SharedReferenceCount =
                       (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_100.Object = pSVar4;
                local_100.SharedReferenceCount.ReferenceController = pTVar22;
                bVar11 = STabSidebar::ContainsTab(pSVar5,&local_100);
                if (bVar11) {
LAB_14278dfac:
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar22);
                  goto LAB_14278dfb1;
                }
                if ((plVar20[0x5e] == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pSVar5 = (STabSidebar *)plVar20[0x5e];
                if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar22->SharedReferenceCount =
                       (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_f0.Object = pSVar4;
                local_f0.SharedReferenceCount.ReferenceController = pTVar22;
                bVar11 = STabSidebar::ContainsTab(pSVar5,&local_f0);
                if (bVar11) goto LAB_14278dfac;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar22);
                bVar9 = true;
                pTVar19 = SDockTab::GetParentDockTabStack(pTVar27->Object,&local_a0);
                if ((pTVar19->Object == (SDockingTabStack *)0x0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                local_e0.Object = pTVar27->Object;
                pSVar6 = pTVar19->Object;
                local_e0.SharedReferenceCount.ReferenceController =
                     (pTVar27->SharedReferenceCount).ReferenceController;
                if (local_e0.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_e0.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                bVar11 = SDockingTabStack::CanMoveTabToSideBar(pSVar6,&local_e0);
                if (!bVar11) goto LAB_14278dfb1;
                bVar11 = true;
              }
              if (bVar9) {
                bVar9 = false;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_a0.SharedReferenceCount.ReferenceController);
              }
              if (bVar11) {
                pTVar19 = SDockTab::GetParentDockTabStack(pTVar27->Object,&local_90);
                if ((pTVar19->Object == (SDockingTabStack *)0x0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                local_d0.Object = pTVar27->Object;
                pSVar6 = pTVar19->Object;
                local_d0.SharedReferenceCount.ReferenceController =
                     (pTVar27->SharedReferenceCount).ReferenceController;
                if (local_d0.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_d0.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                SDockingTabStack::MoveTabToSidebar(pSVar6,&local_d0);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_90.SharedReferenceCount.ReferenceController);
                local_158 = pTVar27->Object;
                local_150 = (pTVar27->SharedReferenceCount).ReferenceController;
                pTVar2 = &this->TemporarilySidebaredTabs;
                if (local_150 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_150->WeakReferenceCount =
                       (atomic<int>)((int)local_150->WeakReferenceCount + 1);
                  UNLOCK();
                }
                pFVar23 = (pTVar2->AllocatorInstance).Data;
                if (((pFVar23 <= (FScriptContainerElement *)&local_158) &&
                    ((FScriptContainerElement *)&local_158 <
                     pFVar23 + (longlong)(this->TemporarilySidebaredTabs).ArrayMax * 0x10)) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                iVar14 = (this->TemporarilySidebaredTabs).ArrayNum;
                piVar1 = &(this->TemporarilySidebaredTabs).ArrayMax;
                if (iVar14 == *piVar1) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&pTVar2->AllocatorInstance,piVar1);
                }
                pFVar23 = (pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
                (this->TemporarilySidebaredTabs).ArrayNum = iVar14 + 1;
                *(SDockTab **)pFVar23 = local_158;
                *(TReferenceControllerBase<1> **)(pFVar23 + 8) = local_150;
                local_150 = (TReferenceControllerBase<1> *)0x0;
                pTVar27 = pTVar27 + 1;
                local_158 = (SDockTab *)0x0;
                uVar15 = (ulonglong)local_148;
              }
              else {
                pTVar27 = pTVar27 + 1;
                uVar15 = (ulonglong)local_148;
              }
            }
            DestructItems<TSharedRef<SDockTab,1>,int>(local_138,local_130);
            pTVar22 = local_128;
            lVar25 = local_140;
            uVar24 = local_res20;
            if (local_138 != (TSharedRef<SDockTab,1> *)0x0) {
              FMemory::Free(local_138);
              lVar25 = local_140;
              uVar24 = local_res20;
            }
          }
        }
LAB_14278e162:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22)
        ;
        local_res20 = uVar24 + 1;
        local_140 = lVar25 + 0x10;
      } while ((int)local_res20 < (this->DockAreas).ArrayNum);
    }
  }
  else {
    pFVar23 = (this->TemporarilySidebaredTabs).AllocatorInstance.Data;
    pFVar28 = pFVar23 + (longlong)iVar14 * 0x10;
    while( true ) {
      if ((this->TemporarilySidebaredTabs).ArrayNum != iVar14) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TWeakPtr<SDockTab,1>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar23 == pFVar28) break;
      pTVar22 = *(TReferenceControllerBase<1> **)(pFVar23 + 8);
      if (pTVar22 == (TReferenceControllerBase<1> *)0x0) {
LAB_14278e1f0:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22)
        ;
        pFVar23 = pFVar23 + 0x10;
      }
      else {
        aVar10 = pTVar22->SharedReferenceCount;
        do {
          if (aVar10 == (atomic<int>)0x0) {
            pTVar22 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14278e1f0;
          }
          LOCK();
          aVar13 = pTVar22->SharedReferenceCount;
          bVar29 = aVar10 == aVar13;
          if (bVar29) {
            pTVar22->SharedReferenceCount = (atomic<int>)((int)aVar10 + 1);
            aVar13 = aVar10;
          }
          UNLOCK();
          aVar10 = aVar13;
        } while (!bVar29);
        pSVar4 = *(SDockTab **)pFVar23;
        if (pSVar4 == (SDockTab *)0x0) goto LAB_14278e1f0;
        pTVar19 = SDockTab::GetParentDockTabStack(pSVar4,&local_70);
        if ((pTVar19->Object == (SDockingTabStack *)0x0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        plVar20 = (longlong *)
                  (**(code **)(pTVar19->Object->_padding_ + 0x260))(pTVar19->Object,local_80);
        if ((*plVar20 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar25 = *plVar20;
        LOCK();
        pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
        UNLOCK();
        if ((*(longlong *)(lVar25 + 0x2e0) == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pSVar5 = *(STabSidebar **)(lVar25 + 0x2e0);
        LOCK();
        pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
        UNLOCK();
        local_c0.Object = pSVar4;
        local_c0.SharedReferenceCount.ReferenceController = pTVar22;
        bVar29 = STabSidebar::RestoreTab(pSVar5,&local_c0);
        if (!bVar29) {
          if ((*(longlong *)(lVar25 + 0x2f0) == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar29)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pSVar5 = *(STabSidebar **)(lVar25 + 0x2f0);
          LOCK();
          pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
          UNLOCK();
          local_b0.Object = pSVar4;
          local_b0.SharedReferenceCount.ReferenceController = pTVar22;
          STabSidebar::RestoreTab(pSVar5,&local_b0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22)
        ;
        pFVar23 = pFVar23 + 0x10;
      }
    }
    DestructItems<TWeakPtr<SDockTab,1>,int>
              ((TWeakPtr<SDockTab,1> *)(this->TemporarilySidebaredTabs).AllocatorInstance.Data,
               (this->TemporarilySidebaredTabs).ArrayNum);
    piVar1 = &(this->TemporarilySidebaredTabs).ArrayMax;
    (this->TemporarilySidebaredTabs).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->TemporarilySidebaredTabs).AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// TryInvokeTab @ 14278e9e0

/* WARNING: Removing unreachable block (ram,0x00014278eb99) */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockTab,1> * __thiscall
FTabManager::TryInvokeTab
          (FTabManager *this,TSharedPtr<SDockTab,1> *__return_storage_ptr__,FTabId *param_1,
          bool param_2)

{
  FGlobalTabmanager *pFVar1;
  SWindow *pSVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  ETabRole EVar6;
  atomic<int> aVar7;
  TSharedPtr<SDockTab,1> *pTVar8;
  TSharedRef<FGlobalTabmanager,1> *pTVar9;
  FText *pFVar10;
  SWindow *pSVar11;
  SWindow *pSVar12;
  SWindow *pSVar13;
  uint uStackX_14;
  TSharedPtr<SWindow,1> local_28;
  FText local_18;
  
  pSVar12 = (SWindow *)0x0;
  InvokeTab_Internal(this,__return_storage_ptr__,param_1,param_2,true);
  if (__return_storage_ptr__->Object == (SDockTab *)0x0) {
    return __return_storage_ptr__;
  }
  SDockTab::GetParentWindow(__return_storage_ptr__->Object,&local_28);
  if ((__return_storage_ptr__->Object == (SDockTab *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
    return pTVar8;
  }
  EVar6 = SDockTab::GetTabRole(__return_storage_ptr__->Object);
  if (EVar6 == MajorTab) {
LAB_14278ea86:
    if (local_28.Object == (SWindow *)0x0) goto LAB_14278eadb;
    pTVar9 = FGlobalTabmanager::Get();
    pFVar1 = pTVar9->Object;
    pSVar2 = (SWindow *)(pFVar1->RootWindowPtr).WeakReferenceCount.ReferenceController;
    pSVar11 = pSVar2;
    pSVar13 = pSVar12;
    if (pSVar2 != (SWindow *)0x0) {
      aVar4 = *(atomic<int> *)&pSVar2->_padding_;
      do {
        pSVar11 = pSVar12;
        if (aVar4 == (atomic<int>)0x0) goto LAB_14278eac1;
        LOCK();
        aVar7 = *(atomic<int> *)&pSVar2->_padding_;
        bVar5 = aVar4 == aVar7;
        if (bVar5) {
          *(atomic<int> *)&pSVar2->_padding_ = (atomic<int>)((int)aVar4 + 1);
          aVar7 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar7;
      } while (!bVar5);
      pSVar11 = pSVar2;
      pSVar13 = (pFVar1->RootWindowPtr).Object;
    }
LAB_14278eac1:
    pSVar12 = (SWindow *)&DAT_00000002;
    if (local_28.Object != pSVar13) {
      bVar5 = true;
      goto LAB_14278eae3;
    }
  }
  else {
    if ((__return_storage_ptr__->Object == (SDockTab *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
      return pTVar8;
    }
    EVar6 = SDockTab::GetTabRole(__return_storage_ptr__->Object);
    if (EVar6 == NomadTab) goto LAB_14278ea86;
LAB_14278eadb:
    pSVar11 = (SWindow *)((ulonglong)uStackX_14 << 0x20);
  }
  bVar5 = false;
LAB_14278eae3:
  if (pSVar12 != (SWindow *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar11);
  }
  if (bVar5) {
    if ((local_28.Object == (SWindow *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
      return pTVar8;
    }
    if ((__return_storage_ptr__->Object == (SDockTab *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
      return pTVar8;
    }
    pFVar10 = SDockTab::GetTabLabel(__return_storage_ptr__->Object,&local_18);
    SWindow::SetTitle(local_28.Object,pFVar10);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// TryOpenTabInPanelDrawer @ 14278ede0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockTab,1> * __thiscall
FTabManager::TryOpenTabInPanelDrawer
          (FTabManager *this,TSharedPtr<SDockTab,1> *__return_storage_ptr__,FTabId *param_1,
          TSharedPtr<SWindow,1> *param_2,bool param_3)

{
  InvokeTabInPanelDrawer(this,__return_storage_ptr__,param_1,false,param_2,param_3);
  return __return_storage_ptr__;
}

// TryToggleTabInPanelDrawer @ 14278f1a0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockTab,1> * __thiscall
FTabManager::TryToggleTabInPanelDrawer
          (FTabManager *this,TSharedPtr<SDockTab,1> *__return_storage_ptr__,FTabId *param_1,
          TSharedPtr<SWindow,1> *param_2,bool param_3)

{
  InvokeTabInPanelDrawer(this,__return_storage_ptr__,param_1,true,param_2,param_3);
  return __return_storage_ptr__;
}

// UnregisterAllTabSpawners @ 1427900e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::UnregisterAllTabSpawners(FTabManager *this)

{
  TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->TabSpawner;
  bVar3 = 1 < *(int *)&(this->TabSpawner).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->TabSpawner).field_0x8);
  puVar1 = &(this->TabSpawner).field_0xc;
  *(undefined4 *)&(this->TabSpawner).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->TabSpawner).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TabSpawner).field_0x34 = 0;
  iVar2 = *(int *)&(this->TabSpawner).field_0x2c;
  *(undefined4 *)&(this->TabSpawner).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->TabSpawner).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TabSpawner).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->TabSpawner).field_0x48 = 1;
    TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// UnregisterOnPanelDrawerStateChanges @ 142790930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::UnregisterOnPanelDrawerStateChanges(FTabManager *this,FDelegateHandle param_1)

{
  if (param_1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnPanelDrawerStateChangedDelegate,param_1);
    return;
  }
  return;
}

// UnregisterTabSpawner @ 142790950

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTabManager::UnregisterTabSpawner(FTabManager *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->TabSpawner).field_0x8 != *(int *)&(this->TabSpawner).field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    iVar2 = TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
                                 *)&this->TabSpawner,local_res10.Number + uVar1,&local_res8);
    return 0 < iVar2;
  }
  return false;
}

// UpdateMainMenu @ 142791a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::UpdateMainMenu(FTabManager *this,TSharedPtr<SDockTab,1> *param_1,bool param_2)

{
  IWindowTitleBar *pIVar1;
  SDockTab *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  SWindow *pSVar4;
  ETabRole EVar5;
  bool bVar6;
  atomic<int> aVar7;
  TSharedPtr<SWindow,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedPtr<SWindow,1> local_a8;
  TSharedPtr<SDockTab,1> local_98;
  undefined8 local_88;
  FSharedReferencer<1> FStack_80;
  undefined8 local_78;
  FSharedReferencer<1> FStack_70;
  SWidget *local_68;
  TReferenceControllerBase<1> *local_60;
  TSharedPtr<SWindow,1> local_58;
  TSharedPtr<SWindow,1> local_48;
  TSharedPtr<SWindow,1> local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_a8.Object = (SWindow *)0x0;
  local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1->Object == (SDockTab *)0x0) {
LAB_142791af9:
    pTVar10 = (this->OwnerTabPtr).WeakReferenceCount.ReferenceController;
    pTVar9 = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar10->SharedReferenceCount;
      do {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        if (aVar3 == (atomic<int>)0x0) goto LAB_142791b25;
        LOCK();
        aVar7 = pTVar10->SharedReferenceCount;
        bVar6 = aVar3 == aVar7;
        if (bVar6) {
          pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar7 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar7;
      } while (!bVar6);
      this_00 = (this->OwnerTabPtr).Object;
      pTVar9 = pTVar10;
      if (this_00 != (SDockTab *)0x0) {
        pTVar8 = SDockTab::GetParentWindow(this_00,&local_48);
        if (&local_a8 != pTVar8) {
          local_a8.Object = pTVar8->Object;
          pTVar8->Object = (SWindow *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_a8.SharedReferenceCount,&pTVar8->SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
        local_58.SharedReferenceCount.ReferenceController = pTVar10;
        goto LAB_142791bc6;
      }
    }
LAB_142791b25:
    FindExistingLiveTab(this,&local_98,&this->MainNonCloseableTabID);
    if (local_98.Object != (SDockTab *)0x0) {
      if ((local_98.Object == (SDockTab *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar8 = SDockTab::GetParentWindow(local_98.Object,&local_38);
      if (&local_a8 != pTVar8) {
        local_a8.Object = pTVar8->Object;
        pTVar8->Object = (SWindow *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_a8.SharedReferenceCount,&pTVar8->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    local_58.SharedReferenceCount.ReferenceController = pTVar9;
  }
  else {
    EVar5 = SDockTab::GetTabRole(param_1->Object);
    if (EVar5 != MajorTab) {
      if ((param_1->Object == (SDockTab *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EVar5 = SDockTab::GetVisualTabRole(param_1->Object);
      if (EVar5 != MajorTab) goto LAB_142791af9;
    }
    if ((param_1->Object == (SDockTab *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar8 = SDockTab::GetParentWindow(param_1->Object,&local_58);
    if (&local_a8 != pTVar8) {
      local_a8.Object = pTVar8->Object;
      pTVar8->Object = (SWindow *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_a8.SharedReferenceCount,&pTVar8->SharedReferenceCount);
    }
  }
LAB_142791bc6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  pSVar4 = local_a8.Object;
  if (this->bAllowPerWindowMenu == false) {
    local_88 = 0;
    FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->MenuMultiBox != (TSharedPtr<FMultiBox,1> *)&local_88) {
      (this->MenuMultiBox).Object = (FMultiBox *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MenuMultiBox).SharedReferenceCount,&FStack_80);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_80.ReferenceController);
    local_78 = 0;
    FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->MenuWidget != (TSharedPtr<SWidget,1> *)&local_78) {
      (this->MenuWidget).Object = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MenuWidget).SharedReferenceCount,&FStack_70);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_70.ReferenceController);
    pSVar4 = local_a8.Object;
    if (local_a8.Object == (SWindow *)0x0) goto LAB_142791dda;
    if ((local_a8.Object == (SWindow *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = (pSVar4->TitleBar).Object;
    pTVar10 = (pSVar4->TitleBar).SharedReferenceCount.ReferenceController;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar1 == (IWindowTitleBar *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_28 = 0;
    uStack_20 = 0;
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_28);
  }
  else {
    if (local_a8.Object == (SWindow *)0x0) goto LAB_142791dda;
    if ((local_a8.Object == (SWindow *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = (pSVar4->TitleBar).Object;
    pTVar10 = (pSVar4->TitleBar).SharedReferenceCount.ReferenceController;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar1 == (IWindowTitleBar *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = *(code **)((longlong)*pIVar1 + 8);
    local_68 = (this->MenuWidget).Object;
    local_60 = (this->MenuWidget).SharedReferenceCount.ReferenceController;
    if (local_60 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar2)(pIVar1,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_142791dda:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateStats @ 142792110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::UpdateStats(FTabManager *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FGlobalTabmanager *pFVar2;
  TSharedRef<FGlobalTabmanager,1> *pTVar3;
  
  pTVar3 = FGlobalTabmanager::Get();
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar3->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(pFVar2->_padding_ + 0x50))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// operator() @ 150492fc0

bool __thiscall `FTabManager::RestorePanelDrawer'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6813193255430126424>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6813193255430126424>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150493280

bool __thiscall `FTabManager::RestoreArea_Helper'[::D]::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6813193255430125396>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6813193255430125396>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

