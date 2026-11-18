// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 6

// AddToSelection @ 148d5d4d0

void __thiscall
STableRow<TSharedPtr<FVisualizerEvent,1>_>::FSlateAccessibleTableRow::AddToSelection
          (FSlateAccessibleTableRow *this)

{
  return;
}

// AsTableRow @ 148d5d690

IAccessibleTableRow * __thiscall
STableRow<TSharedPtr<FVisualizerEvent,1>_>::FSlateAccessibleTableRow::AsTableRow
          (FSlateAccessibleTableRow *this)

{
  IAccessibleTableRow *pIVar1;
  
  pIVar1 = (IAccessibleTableRow *)&this->field_0x68;
  if (this == (FSlateAccessibleTableRow *)0x0) {
    pIVar1 = (IAccessibleTableRow *)0x0;
  }
  return pIVar1;
}

// GetOwningTable @ 148d7c4e0

TSharedPtr<IAccessibleWidget,1> * __thiscall
STableRow<TSharedPtr<FVisualizerEvent,1>_>::FSlateAccessibleTableRow::GetOwningTable
          (FSlateAccessibleTableRow *this,TSharedPtr<IAccessibleWidget,1> *__return_storage_ptr__)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TSharedPtr<IAccessibleWidget,1> *pTVar4;
  TSharedPtr<FSlateAccessibleWidget,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> local_48;
  TSharedPtr<SWidget,1> local_38;
  SWidget *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  TSharedPtr<FSlateAccessibleWidget,1> local_18;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) goto LAB_148d7c722;
  local_48.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar6 = local_48.SharedReferenceCount.ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
LAB_148d7c545:
    local_48.Object = (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
    local_48.SharedReferenceCount.ReferenceController = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_148d7c554;
  }
  else {
    aVar2 = (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      pTVar6 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7c545;
      LOCK();
      aVar3 = (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar9 = aVar2 == aVar3;
      if (bVar9) {
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar9);
    pTVar6 = local_48.SharedReferenceCount.ReferenceController;
    if (*(longlong *)&this[-1].field_0x20 == 0) goto LAB_148d7c545;
    local_48.Object =
         (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)(*(longlong *)&this[-1].field_0x20 + -8);
LAB_148d7c554:
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if ((local_48.Object == (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedPtr<IAccessibleWidget,1> *)(*pcVar1)();
    return pTVar4;
  }
  if (((((local_48.Object)->OwnerTablePtr).Object ==
        (ITypedTableView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) ||
      (pTVar6 = ((local_48.Object)->OwnerTablePtr).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1)) {
    TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>::
    ~TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>(&local_48);
LAB_148d7c722:
    __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if ((local_48.Object == (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedPtr<IAccessibleWidget,1> *)(*pcVar1)();
    return pTVar4;
  }
  pTVar6 = ((local_48.Object)->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar8 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar8 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d7c625;
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar9 = aVar2 == aVar3;
      if (bVar9) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar9);
    pTVar7 = (TReferenceControllerBase<1> *)((local_48.Object)->OwnerTablePtr).Object;
    pTVar8 = pTVar6;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_148d7c64b;
  }
LAB_148d7c625:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar6 = pTVar8;
  if (bVar9) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedPtr<IAccessibleWidget,1> *)(*pcVar1)();
    return pTVar4;
  }
LAB_148d7c64b:
  (**(code **)(pTVar7->_padding_ + 0xe8))(pTVar7,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  local_38.Object = local_28;
  local_38.SharedReferenceCount.ReferenceController = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = FSlateAccessibleWidgetCache::GetAccessibleWidgetChecked(&local_18,&local_38);
  __return_storage_ptr__->Object = (IAccessibleWidget *)pTVar5->Object;
  pTVar7 = (pTVar5->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>::
  ~TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>(&local_48);
  return __return_storage_ptr__;
}

// IsSelected @ 148d800b0

bool __thiscall
STableRow<TSharedPtr<FVisualizerEvent,1>_>::FSlateAccessibleTableRow::IsSelected
          (FSlateAccessibleTableRow *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  bool bVar5;
  TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> local_18;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) {
    return false;
  }
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  if (local_18.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
LAB_148d80100:
    local_18.Object = (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
    if (local_18.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
    goto LAB_148d80117;
  }
  else {
    aVar2 = (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d80100;
      }
      LOCK();
      aVar4 = (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar5 = aVar2 == aVar4;
      if (bVar5) {
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar5);
    if (*(longlong *)&this[-1].field_0x20 == 0) goto LAB_148d80100;
    local_18.Object =
         (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)(*(longlong *)&this[-1].field_0x20 + -8);
  }
  LOCK();
  (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
       (atomic<int>)
       ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
  UNLOCK();
LAB_148d80117:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if ((local_18.Object == (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  uVar3 = (**(code **)((local_18.Object)->_padding_ + 0x30))();
  TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>::
  ~TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>(&local_18);
  return (bool)uVar3;
}

// RemoveFromSelection @ 148d8f140

void __thiscall
STableRow<TSharedPtr<FVisualizerEvent,1>_>::FSlateAccessibleTableRow::RemoveFromSelection
          (FSlateAccessibleTableRow *this)

{
  return;
}

// Select @ 148d90d80

void __thiscall
STableRow<TSharedPtr<FVisualizerEvent,1>_>::FSlateAccessibleTableRow::Select
          (FSlateAccessibleTableRow *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  undefined8 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> local_38;
  undefined8 local_28;
  longlong local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if (*(longlong *)&this[-1].field_0x20 == 0) {
    return;
  }
  if (*(longlong *)&this[-1].field_0x28 == 0) {
    return;
  }
  if (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1) {
    return;
  }
  local_38.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
LAB_148d90dd6:
    local_38.Object = (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
    local_38.SharedReferenceCount.ReferenceController = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_148d90de5;
  }
  else {
    aVar2 = (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      pTVar6 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d90dd6;
      LOCK();
      aVar4 = (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar9 = aVar2 == aVar4;
      if (bVar9) {
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar9);
    pTVar6 = local_38.SharedReferenceCount.ReferenceController;
    if (*(longlong *)&this[-1].field_0x20 == 0) goto LAB_148d90dd6;
    local_38.Object =
         (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)(*(longlong *)&this[-1].field_0x20 + -8);
LAB_148d90de5:
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if ((local_38.Object == (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((((local_38.Object)->OwnerTablePtr).Object ==
        (ITypedTableView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) ||
      (pTVar6 = ((local_38.Object)->OwnerTablePtr).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1))
  goto LAB_148d91058;
  if ((local_38.Object == (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar6 = ((local_38.Object)->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar8 = pTVar6;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
LAB_148d90eb5:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pTVar6 = pTVar8;
    if ((pTVar7 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x26c,L""), bVar9)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar8 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148d90eb5;
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar9 = aVar2 == aVar4;
      if (bVar9) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar9);
    pTVar7 = (TReferenceControllerBase<1> *)((local_38.Object)->OwnerTablePtr).Object;
    pTVar8 = pTVar6;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_148d90eb5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar5 = (undefined8 *)(**(code **)(pTVar7->_padding_ + 0xe8))(pTVar7,local_18);
  (**(code **)(*(longlong *)*puVar5 + 0x1a0))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if ((local_38.Object == (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar5 = (undefined8 *)(**(code **)(pTVar7->_padding_ + 0x48))(pTVar7,local_38.Object);
  if (puVar5 == (undefined8 *)0x0) {
    cVar3 = (**(code **)(pTVar7->_padding_ + 200))(pTVar7);
    if ((cVar3 == '\0') &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("OwnerTable->Private_IsPendingRefresh()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                           ,0x4cf,
                           L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                          ), bVar9)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    (**(code **)(pTVar7->_padding_ + 0x10))(pTVar7,puVar5);
    (**(code **)(pTVar7->_padding_ + 0x30))(pTVar7);
    local_28 = *puVar5;
    local_20 = puVar5[1];
    pcVar1 = *(code **)(pTVar7->_padding_ + 0x28);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    (*pcVar1)(pTVar7,&local_28,1);
    (**(code **)(pTVar7->_padding_ + 0x40))(pTVar7,3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_148d91058:
  TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>::
  ~TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>(&local_38);
  return;
}

