// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 14

// CanTabLeaveTabWell @ 142711470

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTabManager::FPrivateApi::CanTabLeaveTabWell
          (FPrivateApi *this,TSharedRef<SDockTab_const_,1> *param_1)

{
  int iVar1;
  FTabId *pFVar2;
  FTabId local_18;
  
  if (this->TabManager->bCanDoDragOperation != false) {
    pFVar2 = SDockTab::GetLayoutIdentifier(param_1->Object,&local_18);
    if ((pFVar2->TabType != (this->TabManager->MainNonCloseableTabID).TabType) ||
       (((pFVar2->InstanceId != -1 &&
         (iVar1 = (this->TabManager->MainNonCloseableTabID).InstanceId, iVar1 != -1)) &&
        (pFVar2->InstanceId != iVar1)))) {
      return true;
    }
  }
  return false;
}

// GetDockingAreaForPanelDrawer @ 14273dd00

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockingArea,1> * __thiscall
FTabManager::FPrivateApi::GetDockingAreaForPanelDrawer
          (FPrivateApi *this,TSharedPtr<SDockingArea,1> *__return_storage_ptr__,
          TSharedPtr<SWindow,1> *param_1)

{
  FTabManager::GetDockingAreaForPanelDrawer(this->TabManager,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetLiveDockAreas @ 14273f880

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TWeakPtr<SDockingArea,1>,TSizedDefaultAllocator<32>_> * __thiscall
FTabManager::FPrivateApi::GetLiveDockAreas(FPrivateApi *this)

{
  return &this->TabManager->DockAreas;
}

// GetParentWindow @ 142742c30

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWindow,1> * __thiscall
FTabManager::FPrivateApi::GetParentWindow
          (FPrivateApi *this,TSharedPtr<SWindow,1> *__return_storage_ptr__)

{
  FTabManager *pFVar1;
  FGlobalTabmanager *pFVar2;
  SDockTab *pSVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TSharedRef<FGlobalTabmanager,1> *pTVar7;
  FSlateApplication *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  SWindow *local_28;
  TReferenceControllerBase<1> *local_20;
  SDockTab *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pFVar1 = this->TabManager;
  pTVar10 = (pFVar1->OwnerTabPtr).WeakReferenceCount.ReferenceController;
  pTVar9 = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = (TReferenceControllerBase<1> *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_142742c75;
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar11 = aVar5 == aVar6;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar11);
    pSVar3 = (pFVar1->OwnerTabPtr).Object;
    pTVar9 = pTVar10;
    if (pSVar3 != (SDockTab *)0x0) {
      pFVar8 = FSlateApplication::Get();
      pcVar4 = *(code **)(*(longlong *)pFVar8 + 0x28);
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      local_18 = pSVar3;
      local_10 = pTVar10;
      (*pcVar4)(pFVar8,&local_28,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      __return_storage_ptr__->Object = local_28;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_20;
      local_20 = (TReferenceControllerBase<1> *)0x0;
      local_28 = (SWindow *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      goto LAB_142742ccb;
    }
  }
LAB_142742c75:
  pTVar7 = FGlobalTabmanager::Get();
  pFVar2 = pTVar7->Object;
  __return_storage_ptr__->Object = (SWindow *)0x0;
  pTVar10 = (pFVar2->RootWindowPtr).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar10->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar11 = aVar5 == aVar6;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar11);
  }
  pTVar10 = pTVar9;
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (pFVar2->RootWindowPtr).Object;
  }
LAB_142742ccb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// HideWindows @ 142748c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::FPrivateApi::HideWindows(FPrivateApi *this)

{
  CleanupPointerArray<SDockingArea>(&this->TabManager->DockAreas);
  SetWindowVisibility(&this->TabManager->DockAreas,false);
  return;
}

// OnDockAreaClosing @ 142761470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::FPrivateApi::OnDockAreaClosing(FPrivateApi *this,TSharedRef<SDockingArea,1> *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  FTabManager *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  TArray<TSharedRef<FTabManager::FArea,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<SDockingArea,1> local_38;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  plVar8 = (longlong *)(**(code **)(param_1->Object->_padding_ + 0x288))(param_1->Object,local_28);
  pTVar2 = (TReferenceControllerBase<1> *)plVar8[1];
  lVar3 = *plVar8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if (lVar3 != 0) {
    pFVar4 = this->TabManager;
    pTVar10 = &pFVar4->CollapsedDockAreas;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48 = lVar3;
    local_40 = pTVar2;
    if (lVar3 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar9 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar9 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 <
        pFVar9 + (longlong)(pFVar4->CollapsedDockAreas).ArrayMax * 0x10)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (pFVar4->CollapsedDockAreas).ArrayNum;
    piVar1 = &(pFVar4->CollapsedDockAreas).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar10->AllocatorInstance,piVar1);
    }
    (pFVar4->CollapsedDockAreas).ArrayNum = iVar7 + 1;
    pFVar9 = (pTVar10->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(longlong *)pFVar9 = local_48;
    *(TReferenceControllerBase<1> **)(pFVar9 + 8) = local_40;
    if (local_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  }
  local_38.Object = param_1->Object;
  pFVar4 = this->TabManager;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  HandleClosingAreaPanelDrawerData(pFVar4,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// OnDockAreaCreated @ 142761650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::FPrivateApi::OnDockAreaCreated(FPrivateApi *this,TSharedRef<SDockingArea,1> *param_1)

{
  int *piVar1;
  FTabManager *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  SDockingArea *local_18;
  TReferenceControllerBase<1> *local_10;
  
  CleanupPointerArray<SDockingArea>(&this->TabManager->DockAreas);
  local_18 = param_1->Object;
  pFVar2 = this->TabManager;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->WeakReferenceCount = (atomic<int>)((int)local_10->WeakReferenceCount + 1);
    UNLOCK();
  }
  pFVar6 = (pFVar2->DockAreas).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar6 + (longlong)(pFVar2->DockAreas).ArrayMax * 0x10)
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (pFVar2->DockAreas).ArrayNum;
  piVar1 = &(pFVar2->DockAreas).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(pFVar2->DockAreas).AllocatorInstance,piVar1);
  }
  (pFVar2->DockAreas).ArrayNum = iVar5 + 1;
  pFVar6 = (pFVar2->DockAreas).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(SDockingArea **)pFVar6 = local_18;
  *(TReferenceControllerBase<1> **)(pFVar6 + 8) = local_10;
  return;
}

// OnTabClosing @ 14276a700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::FPrivateApi::OnTabClosing(FPrivateApi *this,TSharedRef<SDockTab,1> *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014276a706. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->TabManager->_padding_ + 0x38))();
  return;
}

// OnTabForegrounded @ 14276af00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::FPrivateApi::OnTabForegrounded
          (FPrivateApi *this,TSharedPtr<SDockTab,1> *param_1,TSharedPtr<SDockTab,1> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014276af06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->TabManager->_padding_ + 0x20))();
  return;
}

// OnTabManagerClosing @ 14276b1e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::FPrivateApi::OnTabManagerClosing(FPrivateApi *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014276b1e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->TabManager->_padding_ + 0x40))();
  return;
}

// OnTabOpening @ 14276b460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::FPrivateApi::OnTabOpening(FPrivateApi *this,TSharedRef<SDockTab,1> *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014276b466. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->TabManager->_padding_ + 0x30))();
  return;
}

// OnTabRelocated @ 14276bae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTabManager::FPrivateApi::OnTabRelocated
          (FPrivateApi *this,TSharedRef<SDockTab,1> *param_1,TSharedPtr<SWindow,1> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014276bae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->TabManager->_padding_ + 0x28))();
  return;
}

// SetCanDoDeferredLayoutSave @ 1427844d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::FPrivateApi::SetCanDoDeferredLayoutSave(FPrivateApi *this,bool param_1)

{
  if (!param_1) {
    ClearPendingLayoutSave(this->TabManager);
    this->TabManager->bCanDoDeferredLayoutSave = false;
    return;
  }
  this->TabManager->bCanDoDeferredLayoutSave = true;
  return;
}

// ShowWindows @ 14278a900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTabManager::FPrivateApi::ShowWindows(FPrivateApi *this)

{
  CleanupPointerArray<SDockingArea>(&this->TabManager->DockAreas);
  SetWindowVisibility(&this->TabManager->DockAreas,true);
  return;
}

