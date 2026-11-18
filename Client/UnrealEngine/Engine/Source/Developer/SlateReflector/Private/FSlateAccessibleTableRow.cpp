// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 42

// AddToSelection @ 142e2be20

void __thiscall
STableRow<TSharedPtr<int,1>_>::FSlateAccessibleTableRow::AddToSelection
          (FSlateAccessibleTableRow *this)

{
  return;
}

// AddToSelection @ 142e2be30

void __thiscall
STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FSlateAccessibleTableRow::AddToSelection
          (FSlateAccessibleTableRow *this)

{
  return;
}

// AddToSelection @ 142e2be40

void __thiscall
STableRow<TSharedPtr<FWidgetListEntry,1>_>::FSlateAccessibleTableRow::AddToSelection
          (FSlateAccessibleTableRow *this)

{
  return;
}

// AddToSelection @ 142e2be50

void __thiscall
STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FSlateAccessibleTableRow::
AddToSelection(FSlateAccessibleTableRow *this)

{
  return;
}

// AddToSelection @ 142e2be60

void __thiscall
STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FSlateAccessibleTableRow::AddToSelection
          (FSlateAccessibleTableRow *this)

{
  return;
}

// AddToSelection @ 142e2be70

void __thiscall
STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
FSlateAccessibleTableRow::AddToSelection(FSlateAccessibleTableRow *this)

{
  return;
}

// AddToSelection @ 142e2be80

void __thiscall
STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::FSlateAccessibleTableRow::AddToSelection
          (FSlateAccessibleTableRow *this)

{
  return;
}

// AsTableRow @ 142e2c0c0

IAccessibleTableRow * __thiscall
STableRow<TSharedPtr<int,1>_>::FSlateAccessibleTableRow::AsTableRow(FSlateAccessibleTableRow *this)

{
  IAccessibleTableRow *pIVar1;
  
  pIVar1 = (IAccessibleTableRow *)&this->field_0x68;
  if (this == (FSlateAccessibleTableRow *)0x0) {
    pIVar1 = (IAccessibleTableRow *)0x0;
  }
  return pIVar1;
}

// AsTableRow @ 142e2c0e0

IAccessibleTableRow * __thiscall
STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FSlateAccessibleTableRow::AsTableRow
          (FSlateAccessibleTableRow *this)

{
  IAccessibleTableRow *pIVar1;
  
  pIVar1 = (IAccessibleTableRow *)&this->field_0x68;
  if (this == (FSlateAccessibleTableRow *)0x0) {
    pIVar1 = (IAccessibleTableRow *)0x0;
  }
  return pIVar1;
}

// AsTableRow @ 142e2c100

IAccessibleTableRow * __thiscall
STableRow<TSharedPtr<FWidgetListEntry,1>_>::FSlateAccessibleTableRow::AsTableRow
          (FSlateAccessibleTableRow *this)

{
  IAccessibleTableRow *pIVar1;
  
  pIVar1 = (IAccessibleTableRow *)&this->field_0x68;
  if (this == (FSlateAccessibleTableRow *)0x0) {
    pIVar1 = (IAccessibleTableRow *)0x0;
  }
  return pIVar1;
}

// AsTableRow @ 142e2c120

IAccessibleTableRow * __thiscall
STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FSlateAccessibleTableRow::
AsTableRow(FSlateAccessibleTableRow *this)

{
  IAccessibleTableRow *pIVar1;
  
  pIVar1 = (IAccessibleTableRow *)&this->field_0x68;
  if (this == (FSlateAccessibleTableRow *)0x0) {
    pIVar1 = (IAccessibleTableRow *)0x0;
  }
  return pIVar1;
}

// AsTableRow @ 142e2c140

IAccessibleTableRow * __thiscall
STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FSlateAccessibleTableRow::AsTableRow
          (FSlateAccessibleTableRow *this)

{
  IAccessibleTableRow *pIVar1;
  
  pIVar1 = (IAccessibleTableRow *)&this->field_0x68;
  if (this == (FSlateAccessibleTableRow *)0x0) {
    pIVar1 = (IAccessibleTableRow *)0x0;
  }
  return pIVar1;
}

// AsTableRow @ 142e2c160

IAccessibleTableRow * __thiscall
STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
FSlateAccessibleTableRow::AsTableRow(FSlateAccessibleTableRow *this)

{
  IAccessibleTableRow *pIVar1;
  
  pIVar1 = (IAccessibleTableRow *)&this->field_0x68;
  if (this == (FSlateAccessibleTableRow *)0x0) {
    pIVar1 = (IAccessibleTableRow *)0x0;
  }
  return pIVar1;
}

// AsTableRow @ 142e2c180

IAccessibleTableRow * __thiscall
STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::FSlateAccessibleTableRow::AsTableRow
          (FSlateAccessibleTableRow *this)

{
  IAccessibleTableRow *pIVar1;
  
  pIVar1 = (IAccessibleTableRow *)&this->field_0x68;
  if (this == (FSlateAccessibleTableRow *)0x0) {
    pIVar1 = (IAccessibleTableRow *)0x0;
  }
  return pIVar1;
}

// GetOwningTable @ 142ea37e0

TSharedPtr<IAccessibleWidget,1> * __thiscall
STableRow<TSharedPtr<int,1>_>::FSlateAccessibleTableRow::GetOwningTable
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
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) goto LAB_142ea39f2;
  pTVar8 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar7 = pTVar8;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_142ea386b:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pTVar8 = pTVar7;
    pTVar7 = pTVar11;
LAB_142ea3873:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_142ea386b;
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
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_142ea3873;
  }
  lVar1._0_4_ = pTVar7[0x2e].SharedReferenceCount;
  lVar1._4_4_ = pTVar7[0x2e].WeakReferenceCount;
  if (((lVar1 == 0) || (pTVar7[0x2f]._padding_ == 0)) || (*(int *)(pTVar7[0x2f]._padding_ + 8) < 1))
  {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_142ea39f2:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_142ea3925;
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
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) goto LAB_142ea394b;
  }
LAB_142ea3925:
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
LAB_142ea394b:
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

// GetOwningTable @ 142ea3a20

TSharedPtr<IAccessibleWidget,1> * __thiscall
STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FSlateAccessibleTableRow::GetOwningTable
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
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) goto LAB_142ea3c32;
  pTVar8 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar7 = pTVar8;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_142ea3aab:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pTVar8 = pTVar7;
    pTVar7 = pTVar11;
LAB_142ea3ab3:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_142ea3aab;
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
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_142ea3ab3;
  }
  lVar1._0_4_ = pTVar7[0x2e].SharedReferenceCount;
  lVar1._4_4_ = pTVar7[0x2e].WeakReferenceCount;
  if (((lVar1 == 0) || (pTVar7[0x2f]._padding_ == 0)) || (*(int *)(pTVar7[0x2f]._padding_ + 8) < 1))
  {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_142ea3c32:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_142ea3b65;
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
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) goto LAB_142ea3b8b;
  }
LAB_142ea3b65:
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
LAB_142ea3b8b:
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

// GetOwningTable @ 142ea3c60

TSharedPtr<IAccessibleWidget,1> * __thiscall
STableRow<TSharedPtr<FWidgetListEntry,1>_>::FSlateAccessibleTableRow::GetOwningTable
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
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) goto LAB_142ea3e72;
  pTVar8 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar7 = pTVar8;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_142ea3ceb:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pTVar8 = pTVar7;
    pTVar7 = pTVar11;
LAB_142ea3cf3:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_142ea3ceb;
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
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_142ea3cf3;
  }
  lVar1._0_4_ = pTVar7[0x2e].SharedReferenceCount;
  lVar1._4_4_ = pTVar7[0x2e].WeakReferenceCount;
  if (((lVar1 == 0) || (pTVar7[0x2f]._padding_ == 0)) || (*(int *)(pTVar7[0x2f]._padding_ + 8) < 1))
  {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_142ea3e72:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_142ea3da5;
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
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) goto LAB_142ea3dcb;
  }
LAB_142ea3da5:
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
LAB_142ea3dcb:
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

// GetOwningTable @ 142ea3ea0

TSharedPtr<IAccessibleWidget,1> * __thiscall
STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FSlateAccessibleTableRow::
GetOwningTable(FSlateAccessibleTableRow *this,
              TSharedPtr<IAccessibleWidget,1> *__return_storage_ptr__)

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
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) goto LAB_142ea40b2;
  pTVar8 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar7 = pTVar8;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_142ea3f2b:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pTVar8 = pTVar7;
    pTVar7 = pTVar11;
LAB_142ea3f33:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_142ea3f2b;
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
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_142ea3f33;
  }
  lVar1._0_4_ = pTVar7[0x2e].SharedReferenceCount;
  lVar1._4_4_ = pTVar7[0x2e].WeakReferenceCount;
  if (((lVar1 == 0) || (pTVar7[0x2f]._padding_ == 0)) || (*(int *)(pTVar7[0x2f]._padding_ + 8) < 1))
  {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_142ea40b2:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_142ea3fe5;
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
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) goto LAB_142ea400b;
  }
LAB_142ea3fe5:
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
LAB_142ea400b:
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

// GetOwningTable @ 142ea40e0

TSharedPtr<IAccessibleWidget,1> * __thiscall
STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FSlateAccessibleTableRow::GetOwningTable
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
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) goto LAB_142ea42f2;
  pTVar8 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar7 = pTVar8;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_142ea416b:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pTVar8 = pTVar7;
    pTVar7 = pTVar11;
LAB_142ea4173:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_142ea416b;
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
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_142ea4173;
  }
  lVar1._0_4_ = pTVar7[0x2e].SharedReferenceCount;
  lVar1._4_4_ = pTVar7[0x2e].WeakReferenceCount;
  if (((lVar1 == 0) || (pTVar7[0x2f]._padding_ == 0)) || (*(int *)(pTVar7[0x2f]._padding_ + 8) < 1))
  {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_142ea42f2:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_142ea4225;
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
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) goto LAB_142ea424b;
  }
LAB_142ea4225:
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
LAB_142ea424b:
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

// GetOwningTable @ 142ea4320

TSharedPtr<IAccessibleWidget,1> * __thiscall
STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
FSlateAccessibleTableRow::GetOwningTable
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
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) goto LAB_142ea4532;
  pTVar8 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar7 = pTVar8;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_142ea43ab:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pTVar8 = pTVar7;
    pTVar7 = pTVar11;
LAB_142ea43b3:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_142ea43ab;
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
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_142ea43b3;
  }
  lVar1._0_4_ = pTVar7[0x2e].SharedReferenceCount;
  lVar1._4_4_ = pTVar7[0x2e].WeakReferenceCount;
  if (((lVar1 == 0) || (pTVar7[0x2f]._padding_ == 0)) || (*(int *)(pTVar7[0x2f]._padding_ + 8) < 1))
  {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_142ea4532:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_142ea4465;
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
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) goto LAB_142ea448b;
  }
LAB_142ea4465:
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
LAB_142ea448b:
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

// GetOwningTable @ 142ea4560

TSharedPtr<IAccessibleWidget,1> * __thiscall
STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::FSlateAccessibleTableRow::GetOwningTable
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
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) goto LAB_142ea4772;
  pTVar8 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar7 = pTVar8;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_142ea45eb:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pTVar8 = pTVar7;
    pTVar7 = pTVar11;
LAB_142ea45f3:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_142ea45eb;
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
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_142ea45f3;
  }
  lVar1._0_4_ = pTVar7[0x2e].SharedReferenceCount;
  lVar1._4_4_ = pTVar7[0x2e].WeakReferenceCount;
  if (((lVar1 == 0) || (pTVar7[0x2f]._padding_ == 0)) || (*(int *)(pTVar7[0x2f]._padding_ + 8) < 1))
  {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_142ea4772:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_142ea46a5;
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
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) goto LAB_142ea46cb;
  }
LAB_142ea46a5:
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
LAB_142ea46cb:
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

// IsSelected @ 142ebf050

bool __thiscall
STableRow<TSharedPtr<int,1>_>::FSlateAccessibleTableRow::IsSelected(FSlateAccessibleTableRow *this)

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
LAB_142ebf0db:
    plVar5 = (longlong *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  else {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142ebf0db;
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
    if (plVar5 != (longlong *)0x0) goto LAB_142ebf106;
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
LAB_142ebf106:
  uVar3 = (**(code **)(*plVar5 + 0x30))(plVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return (bool)uVar3;
}

// IsSelected @ 142ebf140

bool __thiscall
STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FSlateAccessibleTableRow::IsSelected
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
LAB_142ebf1cb:
    plVar5 = (longlong *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  else {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142ebf1cb;
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
    if (plVar5 != (longlong *)0x0) goto LAB_142ebf1f6;
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
LAB_142ebf1f6:
  uVar3 = (**(code **)(*plVar5 + 0x30))(plVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return (bool)uVar3;
}

// IsSelected @ 142ebf230

bool __thiscall
STableRow<TSharedPtr<FWidgetListEntry,1>_>::FSlateAccessibleTableRow::IsSelected
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
LAB_142ebf2bb:
    plVar5 = (longlong *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  else {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142ebf2bb;
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
    if (plVar5 != (longlong *)0x0) goto LAB_142ebf2e6;
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
LAB_142ebf2e6:
  uVar3 = (**(code **)(*plVar5 + 0x30))(plVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return (bool)uVar3;
}

// IsSelected @ 142ebf320

bool __thiscall
STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FSlateAccessibleTableRow::
IsSelected(FSlateAccessibleTableRow *this)

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
LAB_142ebf3ab:
    plVar5 = (longlong *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  else {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142ebf3ab;
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
    if (plVar5 != (longlong *)0x0) goto LAB_142ebf3d6;
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
LAB_142ebf3d6:
  uVar3 = (**(code **)(*plVar5 + 0x30))(plVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return (bool)uVar3;
}

// IsSelected @ 142ebf410

bool __thiscall
STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FSlateAccessibleTableRow::IsSelected
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
LAB_142ebf49b:
    plVar5 = (longlong *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  else {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142ebf49b;
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
    if (plVar5 != (longlong *)0x0) goto LAB_142ebf4c6;
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
LAB_142ebf4c6:
  uVar3 = (**(code **)(*plVar5 + 0x30))(plVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return (bool)uVar3;
}

// IsSelected @ 142ebf500

bool __thiscall
STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
FSlateAccessibleTableRow::IsSelected(FSlateAccessibleTableRow *this)

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
LAB_142ebf58b:
    plVar5 = (longlong *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  else {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142ebf58b;
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
    if (plVar5 != (longlong *)0x0) goto LAB_142ebf5b6;
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
LAB_142ebf5b6:
  uVar3 = (**(code **)(*plVar5 + 0x30))(plVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return (bool)uVar3;
}

// IsSelected @ 142ebf5f0

bool __thiscall
STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::FSlateAccessibleTableRow::IsSelected
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
LAB_142ebf67b:
    plVar5 = (longlong *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  else {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142ebf67b;
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
    if (plVar5 != (longlong *)0x0) goto LAB_142ebf6a6;
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
LAB_142ebf6a6:
  uVar3 = (**(code **)(*plVar5 + 0x30))(plVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return (bool)uVar3;
}

// RemoveFromSelection @ 142ef9820

void __thiscall
STableRow<TSharedPtr<int,1>_>::FSlateAccessibleTableRow::RemoveFromSelection
          (FSlateAccessibleTableRow *this)

{
  return;
}

// RemoveFromSelection @ 142ef9830

void __thiscall
STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FSlateAccessibleTableRow::
RemoveFromSelection(FSlateAccessibleTableRow *this)

{
  return;
}

// RemoveFromSelection @ 142ef9840

void __thiscall
STableRow<TSharedPtr<FWidgetListEntry,1>_>::FSlateAccessibleTableRow::RemoveFromSelection
          (FSlateAccessibleTableRow *this)

{
  return;
}

// RemoveFromSelection @ 142ef9850

void __thiscall
STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FSlateAccessibleTableRow::
RemoveFromSelection(FSlateAccessibleTableRow *this)

{
  return;
}

// RemoveFromSelection @ 142ef9860

void __thiscall
STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FSlateAccessibleTableRow::RemoveFromSelection
          (FSlateAccessibleTableRow *this)

{
  return;
}

// RemoveFromSelection @ 142ef9870

void __thiscall
STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
FSlateAccessibleTableRow::RemoveFromSelection(FSlateAccessibleTableRow *this)

{
  return;
}

// RemoveFromSelection @ 142ef9880

void __thiscall
STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::FSlateAccessibleTableRow::RemoveFromSelection
          (FSlateAccessibleTableRow *this)

{
  return;
}

// Select @ 142f018d0

void __thiscall
STableRow<TSharedPtr<int,1>_>::FSlateAccessibleTableRow::Select(FSlateAccessibleTableRow *this)

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
LAB_142f0195f:
    lVar7 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_142f01967:
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
        goto LAB_142f0195f;
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
    if (lVar7 == 0) goto LAB_142f01967;
  }
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (((*(longlong *)(lVar7 + 0x2e8) == 0) || (*(longlong *)(lVar7 + 0x2f0) == 0)) ||
     (*(int *)(*(longlong *)(lVar7 + 0x2f0) + 8) < 1)) goto LAB_142f01b8a;
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
LAB_142f01a15:
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_142f01a15;
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
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_142f01a15;
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
LAB_142f01b8a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Select @ 142f01bb0

void __thiscall
STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FSlateAccessibleTableRow::Select
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
LAB_142f01c3f:
    lVar7 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_142f01c47:
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
        goto LAB_142f01c3f;
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
    if (lVar7 == 0) goto LAB_142f01c47;
  }
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (((*(longlong *)(lVar7 + 0x2e8) == 0) || (*(longlong *)(lVar7 + 0x2f0) == 0)) ||
     (*(int *)(*(longlong *)(lVar7 + 0x2f0) + 8) < 1)) goto LAB_142f01e6a;
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
LAB_142f01cf5:
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_142f01cf5;
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
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_142f01cf5;
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
LAB_142f01e6a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Select @ 142f01e90

void __thiscall
STableRow<TSharedPtr<FWidgetListEntry,1>_>::FSlateAccessibleTableRow::Select
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
LAB_142f01f1f:
    lVar7 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_142f01f27:
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
        goto LAB_142f01f1f;
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
    if (lVar7 == 0) goto LAB_142f01f27;
  }
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (((*(longlong *)(lVar7 + 0x2e8) == 0) || (*(longlong *)(lVar7 + 0x2f0) == 0)) ||
     (*(int *)(*(longlong *)(lVar7 + 0x2f0) + 8) < 1)) goto LAB_142f0214a;
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
LAB_142f01fd5:
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_142f01fd5;
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
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_142f01fd5;
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
LAB_142f0214a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Select @ 142f02170

void __thiscall
STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FSlateAccessibleTableRow::
Select(FSlateAccessibleTableRow *this)

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
LAB_142f021ff:
    lVar7 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_142f02207:
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
        goto LAB_142f021ff;
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
    if (lVar7 == 0) goto LAB_142f02207;
  }
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (((*(longlong *)(lVar7 + 0x2e8) == 0) || (*(longlong *)(lVar7 + 0x2f0) == 0)) ||
     (*(int *)(*(longlong *)(lVar7 + 0x2f0) + 8) < 1)) goto LAB_142f0242a;
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
LAB_142f022b5:
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_142f022b5;
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
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_142f022b5;
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
LAB_142f0242a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Select @ 142f02450

void __thiscall
STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FSlateAccessibleTableRow::Select
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
LAB_142f024df:
    lVar7 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_142f024e7:
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
        goto LAB_142f024df;
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
    if (lVar7 == 0) goto LAB_142f024e7;
  }
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (((*(longlong *)(lVar7 + 0x2e8) == 0) || (*(longlong *)(lVar7 + 0x2f0) == 0)) ||
     (*(int *)(*(longlong *)(lVar7 + 0x2f0) + 8) < 1)) goto LAB_142f0270a;
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
LAB_142f02595:
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_142f02595;
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
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_142f02595;
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
LAB_142f0270a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Select @ 142f02730

void __thiscall
STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
FSlateAccessibleTableRow::Select(FSlateAccessibleTableRow *this)

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
LAB_142f027bf:
    lVar7 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_142f027c7:
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
        goto LAB_142f027bf;
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
    if (lVar7 == 0) goto LAB_142f027c7;
  }
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (((*(longlong *)(lVar7 + 0x2e8) == 0) || (*(longlong *)(lVar7 + 0x2f0) == 0)) ||
     (*(int *)(*(longlong *)(lVar7 + 0x2f0) + 8) < 1)) goto LAB_142f029ea;
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
LAB_142f02875:
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_142f02875;
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
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_142f02875;
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
LAB_142f029ea:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Select @ 142f02a10

void __thiscall
STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::FSlateAccessibleTableRow::Select
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
LAB_142f02a9f:
    lVar7 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_142f02aa7:
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
        goto LAB_142f02a9f;
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
    if (lVar7 == 0) goto LAB_142f02aa7;
  }
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (((*(longlong *)(lVar7 + 0x2e8) == 0) || (*(longlong *)(lVar7 + 0x2f0) == 0)) ||
     (*(int *)(*(longlong *)(lVar7 + 0x2f0) + 8) < 1)) goto LAB_142f02cca;
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
LAB_142f02b55:
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_142f02b55;
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
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_142f02b55;
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
LAB_142f02cca:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

