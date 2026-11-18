// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 12

// AddToSelection @ 1469a2800

void __thiscall
STableRow<UObject_*>::FSlateAccessibleTableRow::AddToSelection(FSlateAccessibleTableRow *this)

{
  return;
}

// AddToSelection @ 1469a2810

void __thiscall
STableRow<FName>::FSlateAccessibleTableRow::AddToSelection(FSlateAccessibleTableRow *this)

{
  return;
}

// AsTableRow @ 1469a2900

IAccessibleTableRow * __thiscall
STableRow<UObject_*>::FSlateAccessibleTableRow::AsTableRow(FSlateAccessibleTableRow *this)

{
  IAccessibleTableRow *pIVar1;
  
  pIVar1 = (IAccessibleTableRow *)&this->field_0x68;
  if (this == (FSlateAccessibleTableRow *)0x0) {
    pIVar1 = (IAccessibleTableRow *)0x0;
  }
  return pIVar1;
}

// AsTableRow @ 1469a2920

IAccessibleTableRow * __thiscall
STableRow<FName>::FSlateAccessibleTableRow::AsTableRow(FSlateAccessibleTableRow *this)

{
  IAccessibleTableRow *pIVar1;
  
  pIVar1 = (IAccessibleTableRow *)&this->field_0x68;
  if (this == (FSlateAccessibleTableRow *)0x0) {
    pIVar1 = (IAccessibleTableRow *)0x0;
  }
  return pIVar1;
}

// GetOwningTable @ 1469d3060

TSharedPtr<IAccessibleWidget,1> * __thiscall
STableRow<UObject_*>::FSlateAccessibleTableRow::GetOwningTable
          (FSlateAccessibleTableRow *this,TSharedPtr<IAccessibleWidget,1> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TSharedPtr<IAccessibleWidget,1> *pTVar5;
  TSharedPtr<FSlateAccessibleWidget,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  TSharedPtr<SWidget,1> local_48;
  SWidget *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  TSharedPtr<FSlateAccessibleWidget,1> local_28;
  
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) goto LAB_1469d3272;
  pTVar8 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar7 = pTVar8;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_1469d30eb:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pTVar8 = pTVar7;
    pTVar7 = pTVar11;
LAB_1469d30f3:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<IAccessibleWidget,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  else {
    aVar3 = pTVar8->SharedReferenceCount;
    do {
      pTVar7 = pTVar11;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1469d30eb;
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar12 = aVar3 == aVar4;
      if (bVar12) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar12);
    pTVar7 = (TReferenceControllerBase<1> *)(*(longlong *)&this[-1].field_0x20 + -8);
    if (*(longlong *)&this[-1].field_0x20 == 0) {
      pTVar7 = pTVar11;
    }
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_1469d30f3;
  }
  lVar1._0_4_ = pTVar7[0x2e].SharedReferenceCount;
  lVar1._4_4_ = pTVar7[0x2e].WeakReferenceCount;
  if (((lVar1 == 0) || (pTVar7[0x2f]._padding_ == 0)) || (*(int *)(pTVar7[0x2f]._padding_ + 8) < 1))
  {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_1469d3272:
    __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if ((pTVar7 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedPtr<IAccessibleWidget,1> *)(*pcVar2)();
    return pTVar5;
  }
  pTVar10 = (TReferenceControllerBase<1> *)pTVar7[0x2f]._padding_;
  pTVar9 = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = pTVar11;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1469d31a5;
      LOCK();
      aVar4 = pTVar10->SharedReferenceCount;
      bVar12 = aVar3 == aVar4;
      if (bVar12) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar12);
    pTVar11 = *(TReferenceControllerBase<1> **)&pTVar7[0x2e].SharedReferenceCount;
    pTVar9 = pTVar10;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469d31cb;
  }
LAB_1469d31a5:
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pTVar10 = pTVar9;
  if (bVar12) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedPtr<IAccessibleWidget,1> *)(*pcVar2)();
    return pTVar5;
  }
LAB_1469d31cb:
  (**(code **)(pTVar11->_padding_ + 0xe8))(pTVar11,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  local_48.Object = local_38;
  local_48.SharedReferenceCount.ReferenceController = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = FSlateAccessibleWidgetCache::GetAccessibleWidgetChecked(&local_28,&local_48);
  __return_storage_ptr__->Object = (IAccessibleWidget *)pTVar6->Object;
  pTVar11 = (pTVar6->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

// GetOwningTable @ 1469d32a0

TSharedPtr<IAccessibleWidget,1> * __thiscall
STableRow<FName>::FSlateAccessibleTableRow::GetOwningTable
          (FSlateAccessibleTableRow *this,TSharedPtr<IAccessibleWidget,1> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TSharedPtr<IAccessibleWidget,1> *pTVar5;
  TSharedPtr<FSlateAccessibleWidget,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  TSharedPtr<SWidget,1> local_48;
  SWidget *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  TSharedPtr<FSlateAccessibleWidget,1> local_28;
  
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) goto LAB_1469d34b2;
  pTVar8 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar7 = pTVar8;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_1469d332b:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pTVar8 = pTVar7;
    pTVar7 = pTVar11;
LAB_1469d3333:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<IAccessibleWidget,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  else {
    aVar3 = pTVar8->SharedReferenceCount;
    do {
      pTVar7 = pTVar11;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1469d332b;
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar12 = aVar3 == aVar4;
      if (bVar12) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar12);
    pTVar7 = (TReferenceControllerBase<1> *)(*(longlong *)&this[-1].field_0x20 + -8);
    if (*(longlong *)&this[-1].field_0x20 == 0) {
      pTVar7 = pTVar11;
    }
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_1469d3333;
  }
  lVar1._0_4_ = pTVar7[0x2e].SharedReferenceCount;
  lVar1._4_4_ = pTVar7[0x2e].WeakReferenceCount;
  if (((lVar1 == 0) || (pTVar7[0x2f]._padding_ == 0)) || (*(int *)(pTVar7[0x2f]._padding_ + 8) < 1))
  {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_1469d34b2:
    __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if ((pTVar7 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedPtr<IAccessibleWidget,1> *)(*pcVar2)();
    return pTVar5;
  }
  pTVar10 = (TReferenceControllerBase<1> *)pTVar7[0x2f]._padding_;
  pTVar9 = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = pTVar11;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1469d33e5;
      LOCK();
      aVar4 = pTVar10->SharedReferenceCount;
      bVar12 = aVar3 == aVar4;
      if (bVar12) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar12);
    pTVar11 = *(TReferenceControllerBase<1> **)&pTVar7[0x2e].SharedReferenceCount;
    pTVar9 = pTVar10;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469d340b;
  }
LAB_1469d33e5:
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pTVar10 = pTVar9;
  if (bVar12) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedPtr<IAccessibleWidget,1> *)(*pcVar2)();
    return pTVar5;
  }
LAB_1469d340b:
  (**(code **)(pTVar11->_padding_ + 0xe8))(pTVar11,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  local_48.Object = local_38;
  local_48.SharedReferenceCount.ReferenceController = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = FSlateAccessibleWidgetCache::GetAccessibleWidgetChecked(&local_28,&local_48);
  __return_storage_ptr__->Object = (IAccessibleWidget *)pTVar6->Object;
  pTVar11 = (pTVar6->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

// IsSelected @ 1469e3610

bool __thiscall
STableRow<UObject_*>::FSlateAccessibleTableRow::IsSelected(FSlateAccessibleTableRow *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) {
    return false;
  }
  pTVar6 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
LAB_1469e369b:
    plVar5 = (longlong *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  else {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469e369b;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar2 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar7);
    plVar5 = (longlong *)(*(longlong *)&this[-1].field_0x20 + -8);
    if (*(longlong *)&this[-1].field_0x20 == 0) {
      plVar5 = (longlong *)0x0;
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    if (plVar5 != (longlong *)0x0) goto LAB_1469e36c6;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar7) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_1469e36c6:
  uVar3 = (**(code **)(*plVar5 + 0x30))(plVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return (bool)uVar3;
}

// IsSelected @ 1469e3700

bool __thiscall
STableRow<FName>::FSlateAccessibleTableRow::IsSelected(FSlateAccessibleTableRow *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) {
    return false;
  }
  pTVar6 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
LAB_1469e378b:
    plVar5 = (longlong *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  else {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469e378b;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar2 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar7);
    plVar5 = (longlong *)(*(longlong *)&this[-1].field_0x20 + -8);
    if (*(longlong *)&this[-1].field_0x20 == 0) {
      plVar5 = (longlong *)0x0;
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    if (plVar5 != (longlong *)0x0) goto LAB_1469e37b6;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar7) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_1469e37b6:
  uVar3 = (**(code **)(*plVar5 + 0x30))(plVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return (bool)uVar3;
}

// RemoveFromSelection @ 146a0c860

void __thiscall
STableRow<UObject_*>::FSlateAccessibleTableRow::RemoveFromSelection(FSlateAccessibleTableRow *this)

{
  return;
}

// RemoveFromSelection @ 146a0c870

void __thiscall
STableRow<FName>::FSlateAccessibleTableRow::RemoveFromSelection(FSlateAccessibleTableRow *this)

{
  return;
}

// Select @ 146a10290

void __thiscall
STableRow<UObject_*>::FSlateAccessibleTableRow::Select(FSlateAccessibleTableRow *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  undefined8 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  longlong lVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  undefined8 local_res8 [2];
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  if (*(longlong *)&this[-1].field_0x20 == 0) {
    return;
  }
  if (*(longlong *)&this[-1].field_0x28 == 0) {
    return;
  }
  if (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1) {
    return;
  }
  pTVar6 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
LAB_146a1031f:
    lVar9 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_146a10327:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a1031f;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar11 = aVar2 == aVar4;
      if (bVar11) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar11);
    lVar9 = *(longlong *)&this[-1].field_0x20 + -8;
    if (*(longlong *)&this[-1].field_0x20 == 0) {
      lVar9 = 0;
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    if (lVar9 == 0) goto LAB_146a10327;
  }
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (((*(longlong *)(lVar9 + 0x2e8) == 0) || (*(longlong *)(lVar9 + 0x2f0) == 0)) ||
     (*(int *)(*(longlong *)(lVar9 + 0x2f0) + 8) < 1)) goto LAB_146a10529;
  if ((lVar9 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar8 = *(TReferenceControllerBase<1> **)(lVar9 + 0x2f0);
  pTVar7 = pTVar8;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_146a103d5:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pTVar8 = pTVar7;
    if ((pTVar10 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar11)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      pTVar7 = pTVar10;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146a103d5;
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar11 = aVar2 == aVar4;
      if (bVar11) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar11);
    pTVar10 = *(TReferenceControllerBase<1> **)(lVar9 + 0x2e8);
    pTVar7 = pTVar8;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) goto LAB_146a103d5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar5 = (undefined8 *)(**(code **)(pTVar10->_padding_ + 0xe8))(pTVar10,local_28);
  (**(code **)(*(longlong *)*puVar5 + 0x1a0))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if ((lVar9 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar5 = (undefined8 *)(**(code **)(pTVar10->_padding_ + 0x48))(pTVar10,lVar9);
  if (puVar5 == (undefined8 *)0x0) {
    cVar3 = (**(code **)(pTVar10->_padding_ + 200))(pTVar10);
    if ((cVar3 == '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar11)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_res8[0] = *puVar5;
    (**(code **)(pTVar10->_padding_ + 0x10))(pTVar10,local_res8);
    (**(code **)(pTVar10->_padding_ + 0x30))(pTVar10);
    (**(code **)(pTVar10->_padding_ + 0x28))(pTVar10,local_res8[0],1);
    (**(code **)(pTVar10->_padding_ + 0x40))(pTVar10,3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_146a10529:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Select @ 146a10550

void __thiscall STableRow<FName>::FSlateAccessibleTableRow::Select(FSlateAccessibleTableRow *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  undefined8 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  longlong lVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
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
  pTVar6 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
LAB_146a105df:
    lVar9 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_146a105e7:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a105df;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar11 = aVar2 == aVar4;
      if (bVar11) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar11);
    lVar9 = *(longlong *)&this[-1].field_0x20 + -8;
    if (*(longlong *)&this[-1].field_0x20 == 0) {
      lVar9 = 0;
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    if (lVar9 == 0) goto LAB_146a105e7;
  }
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (((*(longlong *)(lVar9 + 0x2e8) == 0) || (*(longlong *)(lVar9 + 0x2f0) == 0)) ||
     (*(int *)(*(longlong *)(lVar9 + 0x2f0) + 8) < 1)) goto LAB_146a107e7;
  if ((lVar9 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar8 = *(TReferenceControllerBase<1> **)(lVar9 + 0x2f0);
  pTVar7 = pTVar8;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_146a10695:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pTVar8 = pTVar7;
    if ((pTVar10 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar11)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      pTVar7 = pTVar10;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146a10695;
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar11 = aVar2 == aVar4;
      if (bVar11) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar11);
    pTVar10 = *(TReferenceControllerBase<1> **)(lVar9 + 0x2e8);
    pTVar7 = pTVar8;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) goto LAB_146a10695;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar5 = (undefined8 *)(**(code **)(pTVar10->_padding_ + 0xe8))(pTVar10,local_18);
  (**(code **)(*(longlong *)*puVar5 + 0x1a0))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if ((lVar9 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar5 = (undefined8 *)(**(code **)(pTVar10->_padding_ + 0x48))(pTVar10,lVar9);
  if (puVar5 == (undefined8 *)0x0) {
    cVar3 = (**(code **)(pTVar10->_padding_ + 200))(pTVar10);
    if ((cVar3 == '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar11)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    (**(code **)(pTVar10->_padding_ + 0x10))(pTVar10,puVar5);
    (**(code **)(pTVar10->_padding_ + 0x30))(pTVar10);
    (**(code **)(pTVar10->_padding_ + 0x28))(pTVar10,*puVar5,1);
    (**(code **)(pTVar10->_padding_ + 0x40))(pTVar10,3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_146a107e7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

