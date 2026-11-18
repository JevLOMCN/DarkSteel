// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 24

// AddToSelection @ 142f58610

void __thiscall
STableRow<TSharedPtr<FTestData,1>_>::FSlateAccessibleTableRow::AddToSelection
          (FSlateAccessibleTableRow *this)

{
  return;
}

// AddToSelection @ 142f58620

void __thiscall
STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::FSlateAccessibleTableRow::AddToSelection
          (void *this)

{
  return;
}

// AsTableRow @ 142f58940

IAccessibleTableRow * __thiscall
STableRow<TSharedPtr<FTestData,1>_>::FSlateAccessibleTableRow::AsTableRow
          (FSlateAccessibleTableRow *this)

{
  IAccessibleTableRow *pIVar1;
  
  pIVar1 = (IAccessibleTableRow *)&this->field_0x68;
  if (this == (FSlateAccessibleTableRow *)0x0) {
    pIVar1 = (IAccessibleTableRow *)0x0;
  }
  return pIVar1;
}

// AsTableRow @ 142f58960

IAccessibleTableRow * __thiscall
STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::FSlateAccessibleTableRow::AsTableRow
          (void *this)

{
  IAccessibleTableRow *pIVar1;
  
  pIVar1 = (IAccessibleTableRow *)((longlong)this + 0x68);
  if (this == (void *)0x0) {
    pIVar1 = (IAccessibleTableRow *)0x0;
  }
  return pIVar1;
}

// GetOwningTable @ 142fd7790

TSharedPtr<IAccessibleWidget,1> * __thiscall
STableRow<TSharedPtr<FTestData,1>_>::FSlateAccessibleTableRow::GetOwningTable
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
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) goto LAB_142fd79a2;
  pTVar8 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar7 = pTVar8;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_142fd781b:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pTVar8 = pTVar7;
    pTVar7 = pTVar11;
LAB_142fd7823:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_142fd781b;
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
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_142fd7823;
  }
  lVar1._0_4_ = pTVar7[0x2e].SharedReferenceCount;
  lVar1._4_4_ = pTVar7[0x2e].WeakReferenceCount;
  if (((lVar1 == 0) || (pTVar7[0x2f]._padding_ == 0)) || (*(int *)(pTVar7[0x2f]._padding_ + 8) < 1))
  {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_142fd79a2:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_142fd78d5;
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
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) goto LAB_142fd78fb;
  }
LAB_142fd78d5:
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
LAB_142fd78fb:
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

// GetOwningTable @ 142fd79d0

TSharedPtr<IAccessibleWidget,1> * __thiscall
STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::FSlateAccessibleTableRow::GetOwningTable
          (void *this,TSharedPtr<IAccessibleWidget,1> *__return_storage_ptr__)

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
  if (((*(longlong *)((longlong)this + -0x50) == 0) || (*(longlong *)((longlong)this + -0x48) == 0))
     || (*(int *)(*(longlong *)((longlong)this + -0x48) + 8) < 1)) goto LAB_142fd7be2;
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)this + -0x48);
  pTVar7 = pTVar8;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_142fd7a5b:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pTVar8 = pTVar7;
    pTVar7 = pTVar11;
LAB_142fd7a63:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_142fd7a5b;
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
    pTVar7 = (TReferenceControllerBase<1> *)(*(longlong *)((longlong)this + -0x50) + -8);
    if (*(longlong *)((longlong)this + -0x50) == 0) {
      pTVar7 = pTVar11;
    }
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_142fd7a63;
  }
  lVar1._0_4_ = pTVar7[0x2e].SharedReferenceCount;
  lVar1._4_4_ = pTVar7[0x2e].WeakReferenceCount;
  if (((lVar1 == 0) || (pTVar7[0x2f]._padding_ == 0)) || (*(int *)(pTVar7[0x2f]._padding_ + 8) < 1))
  {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_142fd7be2:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_142fd7b15;
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
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) goto LAB_142fd7b3b;
  }
LAB_142fd7b15:
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
LAB_142fd7b3b:
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

// IsSelected @ 142fe50f0

bool __thiscall
STableRow<TSharedPtr<FTestData,1>_>::FSlateAccessibleTableRow::IsSelected
          (FSlateAccessibleTableRow *this)

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
LAB_142fe517b:
    plVar5 = (longlong *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  else {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142fe517b;
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
    if (plVar5 != (longlong *)0x0) goto LAB_142fe51a6;
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
LAB_142fe51a6:
  uVar3 = (**(code **)(*plVar5 + 0x30))(plVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return (bool)uVar3;
}

// IsSelected @ 142fe51e0

bool __thiscall
STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::FSlateAccessibleTableRow::IsSelected
          (void *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  if (((*(longlong *)((longlong)this + -0x50) == 0) || (*(longlong *)((longlong)this + -0x48) == 0))
     || (*(int *)(*(longlong *)((longlong)this + -0x48) + 8) < 1)) {
    return false;
  }
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)this + -0x48);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
LAB_142fe526b:
    plVar5 = (longlong *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  else {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142fe526b;
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
    plVar5 = (longlong *)(*(longlong *)((longlong)this + -0x50) + -8);
    if (*(longlong *)((longlong)this + -0x50) == 0) {
      plVar5 = (longlong *)0x0;
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    if (plVar5 != (longlong *)0x0) goto LAB_142fe5296;
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
LAB_142fe5296:
  uVar3 = (**(code **)(*plVar5 + 0x30))(plVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return (bool)uVar3;
}

// RemoveFromSelection @ 143008440

void __thiscall
STableRow<TSharedPtr<FTestData,1>_>::FSlateAccessibleTableRow::RemoveFromSelection
          (FSlateAccessibleTableRow *this)

{
  return;
}

// RemoveFromSelection @ 143008450

void __thiscall
STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::FSlateAccessibleTableRow::RemoveFromSelection
          (void *this)

{
  return;
}

// Select @ 14300c100

void __thiscall
STableRow<TSharedPtr<FTestData,1>_>::FSlateAccessibleTableRow::Select
          (FSlateAccessibleTableRow *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  undefined8 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong lVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
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
  pTVar6 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
LAB_14300c18f:
    lVar7 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_14300c197:
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
        goto LAB_14300c18f;
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
    lVar7 = *(longlong *)&this[-1].field_0x20 + -8;
    if (*(longlong *)&this[-1].field_0x20 == 0) {
      lVar7 = 0;
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    if (lVar7 == 0) goto LAB_14300c197;
  }
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (((*(longlong *)(lVar7 + 0x2e8) == 0) || (*(longlong *)(lVar7 + 0x2f0) == 0)) ||
     (*(int *)(*(longlong *)(lVar7 + 0x2f0) + 8) < 1)) goto LAB_14300c3ba;
  if ((lVar7 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar10 = *(TReferenceControllerBase<1> **)(lVar7 + 0x2f0);
  pTVar9 = pTVar10;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_14300c245:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pTVar10 = pTVar9;
    if ((pTVar8 == (TReferenceControllerBase<1> *)0x0) &&
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
    aVar2 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = pTVar8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14300c245;
      LOCK();
      aVar4 = pTVar10->SharedReferenceCount;
      bVar11 = aVar2 == aVar4;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar11);
    pTVar8 = *(TReferenceControllerBase<1> **)(lVar7 + 0x2e8);
    pTVar9 = pTVar10;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_14300c245;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar5 = (undefined8 *)(**(code **)(pTVar8->_padding_ + 0xe8))(pTVar8,local_18);
  (**(code **)(*(longlong *)*puVar5 + 0x1a0))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if ((lVar7 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar5 = (undefined8 *)(**(code **)(pTVar8->_padding_ + 0x48))(pTVar8,lVar7);
  if (puVar5 == (undefined8 *)0x0) {
    cVar3 = (**(code **)(pTVar8->_padding_ + 200))(pTVar8);
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
    (**(code **)(pTVar8->_padding_ + 0x10))(pTVar8,puVar5);
    (**(code **)(pTVar8->_padding_ + 0x30))(pTVar8);
    local_28 = *puVar5;
    local_20 = puVar5[1];
    pcVar1 = *(code **)(pTVar8->_padding_ + 0x28);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    (*pcVar1)(pTVar8,&local_28,1);
    (**(code **)(pTVar8->_padding_ + 0x40))(pTVar8,3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_14300c3ba:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Select @ 14300c3e0

void __thiscall
STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::FSlateAccessibleTableRow::Select(void *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  undefined8 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong lVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  undefined8 local_28;
  longlong local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if (*(longlong *)((longlong)this + -0x50) == 0) {
    return;
  }
  if (*(longlong *)((longlong)this + -0x48) == 0) {
    return;
  }
  if (*(int *)(*(longlong *)((longlong)this + -0x48) + 8) < 1) {
    return;
  }
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)this + -0x48);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
LAB_14300c46f:
    lVar7 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_14300c477:
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
        goto LAB_14300c46f;
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
    lVar7 = *(longlong *)((longlong)this + -0x50) + -8;
    if (*(longlong *)((longlong)this + -0x50) == 0) {
      lVar7 = 0;
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    if (lVar7 == 0) goto LAB_14300c477;
  }
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (((*(longlong *)(lVar7 + 0x2e8) == 0) || (*(longlong *)(lVar7 + 0x2f0) == 0)) ||
     (*(int *)(*(longlong *)(lVar7 + 0x2f0) + 8) < 1)) goto LAB_14300c69a;
  if ((lVar7 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar10 = *(TReferenceControllerBase<1> **)(lVar7 + 0x2f0);
  pTVar9 = pTVar10;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_14300c525:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pTVar10 = pTVar9;
    if ((pTVar8 == (TReferenceControllerBase<1> *)0x0) &&
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
    aVar2 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = pTVar8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14300c525;
      LOCK();
      aVar4 = pTVar10->SharedReferenceCount;
      bVar11 = aVar2 == aVar4;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar11);
    pTVar8 = *(TReferenceControllerBase<1> **)(lVar7 + 0x2e8);
    pTVar9 = pTVar10;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_14300c525;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar5 = (undefined8 *)(**(code **)(pTVar8->_padding_ + 0xe8))(pTVar8,local_18);
  (**(code **)(*(longlong *)*puVar5 + 0x1a0))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if ((lVar7 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar5 = (undefined8 *)(**(code **)(pTVar8->_padding_ + 0x48))(pTVar8,lVar7);
  if (puVar5 == (undefined8 *)0x0) {
    cVar3 = (**(code **)(pTVar8->_padding_ + 200))(pTVar8);
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
    (**(code **)(pTVar8->_padding_ + 0x10))(pTVar8,puVar5);
    (**(code **)(pTVar8->_padding_ + 0x30))(pTVar8);
    local_28 = *puVar5;
    local_20 = puVar5[1];
    pcVar1 = *(code **)(pTVar8->_padding_ + 0x28);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    (*pcVar1)(pTVar8,&local_28,1);
    (**(code **)(pTVar8->_padding_ + 0x40))(pTVar8,3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_14300c69a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// AddToSelection @ 14306e640

void __thiscall
STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::FSlateAccessibleTableRow::AddToSelection
          (FSlateAccessibleTableRow *this)

{
  return;
}

// AddToSelection @ 14306e650

void __thiscall
STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FSlateAccessibleTableRow::AddToSelection
          (FSlateAccessibleTableRow *this)

{
  return;
}

// AsTableRow @ 14306e980

IAccessibleTableRow * __thiscall
STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::FSlateAccessibleTableRow::AsTableRow
          (FSlateAccessibleTableRow *this)

{
  IAccessibleTableRow *pIVar1;
  
  pIVar1 = (IAccessibleTableRow *)&this->field_0x68;
  if (this == (FSlateAccessibleTableRow *)0x0) {
    pIVar1 = (IAccessibleTableRow *)0x0;
  }
  return pIVar1;
}

// AsTableRow @ 14306e9a0

IAccessibleTableRow * __thiscall
STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FSlateAccessibleTableRow::AsTableRow
          (FSlateAccessibleTableRow *this)

{
  IAccessibleTableRow *pIVar1;
  
  pIVar1 = (IAccessibleTableRow *)&this->field_0x68;
  if (this == (FSlateAccessibleTableRow *)0x0) {
    pIVar1 = (IAccessibleTableRow *)0x0;
  }
  return pIVar1;
}

// GetOwningTable @ 1430cc3f0

TSharedPtr<IAccessibleWidget,1> * __thiscall
STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::FSlateAccessibleTableRow::GetOwningTable
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
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) goto LAB_1430cc602;
  pTVar8 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar7 = pTVar8;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_1430cc47b:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pTVar8 = pTVar7;
    pTVar7 = pTVar11;
LAB_1430cc483:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_1430cc47b;
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
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_1430cc483;
  }
  lVar1._0_4_ = pTVar7[0x2e].SharedReferenceCount;
  lVar1._4_4_ = pTVar7[0x2e].WeakReferenceCount;
  if (((lVar1 == 0) || (pTVar7[0x2f]._padding_ == 0)) || (*(int *)(pTVar7[0x2f]._padding_ + 8) < 1))
  {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_1430cc602:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_1430cc535;
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
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) goto LAB_1430cc55b;
  }
LAB_1430cc535:
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
LAB_1430cc55b:
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

// GetOwningTable @ 1430cc630

TSharedPtr<IAccessibleWidget,1> * __thiscall
STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FSlateAccessibleTableRow::GetOwningTable
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
  TSharedPtr<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> local_48;
  TSharedPtr<SWidget,1> local_38;
  SWidget *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  TSharedPtr<FSlateAccessibleWidget,1> local_18;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) goto LAB_1430cc872;
  local_48.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar6 = local_48.SharedReferenceCount.ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
LAB_1430cc695:
    local_48.Object = (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0;
    local_48.SharedReferenceCount.ReferenceController = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_1430cc6a4;
  }
  else {
    aVar2 = (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      pTVar6 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1430cc695;
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
    if (*(longlong *)&this[-1].field_0x20 == 0) goto LAB_1430cc695;
    local_48.Object =
         (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)
         (*(longlong *)&this[-1].field_0x20 + -8);
LAB_1430cc6a4:
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if ((local_48.Object == (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedPtr<IAccessibleWidget,1> *)(*pcVar1)();
    return pTVar4;
  }
  if (((((local_48.Object)->OwnerTablePtr).Object ==
        (ITypedTableView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) ||
      (pTVar6 = ((local_48.Object)->OwnerTablePtr).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1)) {
    TSharedPtr<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
    ~TSharedPtr<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>(&local_48);
LAB_1430cc872:
    __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if ((local_48.Object == (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) &&
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_1430cc775;
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
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_1430cc79b;
  }
LAB_1430cc775:
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
LAB_1430cc79b:
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
  TSharedPtr<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
  ~TSharedPtr<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>(&local_48);
  return __return_storage_ptr__;
}

// IsSelected @ 1430d5080

bool __thiscall
STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::FSlateAccessibleTableRow::IsSelected
          (FSlateAccessibleTableRow *this)

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
LAB_1430d510b:
    plVar5 = (longlong *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  else {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1430d510b;
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
    if (plVar5 != (longlong *)0x0) goto LAB_1430d5136;
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
LAB_1430d5136:
  uVar3 = (**(code **)(*plVar5 + 0x30))(plVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return (bool)uVar3;
}

// IsSelected @ 1430d5170

bool __thiscall
STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FSlateAccessibleTableRow::IsSelected
          (FSlateAccessibleTableRow *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  bool bVar5;
  TSharedPtr<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> local_18;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) {
    return false;
  }
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  if (local_18.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
LAB_1430d51c0:
    local_18.Object = (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0;
    if (local_18.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
    goto LAB_1430d51d7;
  }
  else {
    aVar2 = (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1430d51c0;
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
    if (*(longlong *)&this[-1].field_0x20 == 0) goto LAB_1430d51c0;
    local_18.Object =
         (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)
         (*(longlong *)&this[-1].field_0x20 + -8);
  }
  LOCK();
  (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
       (atomic<int>)
       ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
  UNLOCK();
LAB_1430d51d7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if ((local_18.Object == (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  uVar3 = (**(code **)((local_18.Object)->_padding_ + 0x30))();
  TSharedPtr<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
  ~TSharedPtr<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>(&local_18);
  return (bool)uVar3;
}

// RemoveFromSelection @ 1430ea5c0

void __thiscall
STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::FSlateAccessibleTableRow::RemoveFromSelection
          (FSlateAccessibleTableRow *this)

{
  return;
}

// RemoveFromSelection @ 1430ea5d0

void __thiscall
STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FSlateAccessibleTableRow::
RemoveFromSelection(FSlateAccessibleTableRow *this)

{
  return;
}

// Select @ 1430ed390

void __thiscall
STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::FSlateAccessibleTableRow::Select
          (FSlateAccessibleTableRow *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  undefined8 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong lVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
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
  pTVar6 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
LAB_1430ed41f:
    lVar7 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_1430ed427:
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
        goto LAB_1430ed41f;
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
    lVar7 = *(longlong *)&this[-1].field_0x20 + -8;
    if (*(longlong *)&this[-1].field_0x20 == 0) {
      lVar7 = 0;
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    if (lVar7 == 0) goto LAB_1430ed427;
  }
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (((*(longlong *)(lVar7 + 0x2e8) == 0) || (*(longlong *)(lVar7 + 0x2f0) == 0)) ||
     (*(int *)(*(longlong *)(lVar7 + 0x2f0) + 8) < 1)) goto LAB_1430ed64a;
  if ((lVar7 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar10 = *(TReferenceControllerBase<1> **)(lVar7 + 0x2f0);
  pTVar9 = pTVar10;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_1430ed4d5:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pTVar10 = pTVar9;
    if ((pTVar8 == (TReferenceControllerBase<1> *)0x0) &&
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
    aVar2 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = pTVar8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1430ed4d5;
      LOCK();
      aVar4 = pTVar10->SharedReferenceCount;
      bVar11 = aVar2 == aVar4;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar11);
    pTVar8 = *(TReferenceControllerBase<1> **)(lVar7 + 0x2e8);
    pTVar9 = pTVar10;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_1430ed4d5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar5 = (undefined8 *)(**(code **)(pTVar8->_padding_ + 0xe8))(pTVar8,local_18);
  (**(code **)(*(longlong *)*puVar5 + 0x1a0))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if ((lVar7 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar5 = (undefined8 *)(**(code **)(pTVar8->_padding_ + 0x48))(pTVar8,lVar7);
  if (puVar5 == (undefined8 *)0x0) {
    cVar3 = (**(code **)(pTVar8->_padding_ + 200))(pTVar8);
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
    (**(code **)(pTVar8->_padding_ + 0x10))(pTVar8,puVar5);
    (**(code **)(pTVar8->_padding_ + 0x30))(pTVar8);
    local_28 = *puVar5;
    local_20 = puVar5[1];
    pcVar1 = *(code **)(pTVar8->_padding_ + 0x28);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    (*pcVar1)(pTVar8,&local_28,1);
    (**(code **)(pTVar8->_padding_ + 0x40))(pTVar8,3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_1430ed64a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Select @ 1430ed670

void __thiscall
STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FSlateAccessibleTableRow::Select
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
  TSharedPtr<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> local_38;
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
LAB_1430ed6c6:
    local_38.Object = (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0;
    local_38.SharedReferenceCount.ReferenceController = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_1430ed6d5;
  }
  else {
    aVar2 = (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      pTVar6 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1430ed6c6;
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
    if (*(longlong *)&this[-1].field_0x20 == 0) goto LAB_1430ed6c6;
    local_38.Object =
         (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)
         (*(longlong *)&this[-1].field_0x20 + -8);
LAB_1430ed6d5:
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if ((local_38.Object == (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((((local_38.Object)->OwnerTablePtr).Object ==
        (ITypedTableView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) ||
      (pTVar6 = ((local_38.Object)->OwnerTablePtr).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1))
  goto LAB_1430ed948;
  if ((local_38.Object == (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) &&
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
LAB_1430ed7a5:
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_1430ed7a5;
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
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_1430ed7a5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar5 = (undefined8 *)(**(code **)(pTVar7->_padding_ + 0xe8))(pTVar7,local_18);
  (**(code **)(*(longlong *)*puVar5 + 0x1a0))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if ((local_38.Object == (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) &&
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
LAB_1430ed948:
  TSharedPtr<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
  ~TSharedPtr<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>(&local_38);
  return;
}

