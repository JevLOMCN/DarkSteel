// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 18

// AddToSelection @ 14d022520

void __thiscall
STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::FSlateAccessibleTableRow::AddToSelection
          (FSlateAccessibleTableRow *this)

{
  return;
}

// AddToSelection @ 14d022530

void __thiscall
STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::
FSlateAccessibleTableRow::AddToSelection(FSlateAccessibleTableRow *this)

{
  return;
}

// AddToSelection @ 14d022540

void __thiscall
STableRow<TSharedPtr<FProviderPollResult,1>_>::FSlateAccessibleTableRow::AddToSelection
          (FSlateAccessibleTableRow *this)

{
  return;
}

// AsTableRow @ 14d023a90

IAccessibleTableRow * __thiscall
STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::FSlateAccessibleTableRow::AsTableRow
          (FSlateAccessibleTableRow *this)

{
  IAccessibleTableRow *pIVar1;
  
  pIVar1 = (IAccessibleTableRow *)&this->field_0x68;
  if (this == (FSlateAccessibleTableRow *)0x0) {
    pIVar1 = (IAccessibleTableRow *)0x0;
  }
  return pIVar1;
}

// AsTableRow @ 14d023ab0

IAccessibleTableRow * __thiscall
STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::
FSlateAccessibleTableRow::AsTableRow(FSlateAccessibleTableRow *this)

{
  IAccessibleTableRow *pIVar1;
  
  pIVar1 = (IAccessibleTableRow *)&this->field_0x68;
  if (this == (FSlateAccessibleTableRow *)0x0) {
    pIVar1 = (IAccessibleTableRow *)0x0;
  }
  return pIVar1;
}

// AsTableRow @ 14d023ad0

IAccessibleTableRow * __thiscall
STableRow<TSharedPtr<FProviderPollResult,1>_>::FSlateAccessibleTableRow::AsTableRow
          (FSlateAccessibleTableRow *this)

{
  IAccessibleTableRow *pIVar1;
  
  pIVar1 = (IAccessibleTableRow *)&this->field_0x68;
  if (this == (FSlateAccessibleTableRow *)0x0) {
    pIVar1 = (IAccessibleTableRow *)0x0;
  }
  return pIVar1;
}

// GetOwningTable @ 14d0512e0

TSharedPtr<IAccessibleWidget,1> * __thiscall
STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::FSlateAccessibleTableRow::GetOwningTable
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
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) goto LAB_14d0514f2;
  pTVar8 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar7 = pTVar8;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_14d05136b:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pTVar8 = pTVar7;
    pTVar7 = pTVar11;
LAB_14d051373:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_14d05136b;
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
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_14d051373;
  }
  lVar1._0_4_ = pTVar7[0x2e].SharedReferenceCount;
  lVar1._4_4_ = pTVar7[0x2e].WeakReferenceCount;
  if (((lVar1 == 0) || (pTVar7[0x2f]._padding_ == 0)) || (*(int *)(pTVar7[0x2f]._padding_ + 8) < 1))
  {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_14d0514f2:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_14d051425;
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
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) goto LAB_14d05144b;
  }
LAB_14d051425:
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
LAB_14d05144b:
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

// GetOwningTable @ 14d051520

TSharedPtr<IAccessibleWidget,1> * __thiscall
STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::
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
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) goto LAB_14d051732;
  pTVar8 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar7 = pTVar8;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_14d0515ab:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pTVar8 = pTVar7;
    pTVar7 = pTVar11;
LAB_14d0515b3:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_14d0515ab;
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
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_14d0515b3;
  }
  lVar1._0_4_ = pTVar7[0x2e].SharedReferenceCount;
  lVar1._4_4_ = pTVar7[0x2e].WeakReferenceCount;
  if (((lVar1 == 0) || (pTVar7[0x2f]._padding_ == 0)) || (*(int *)(pTVar7[0x2f]._padding_ + 8) < 1))
  {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_14d051732:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_14d051665;
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
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) goto LAB_14d05168b;
  }
LAB_14d051665:
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
LAB_14d05168b:
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

// GetOwningTable @ 14d051760

TSharedPtr<IAccessibleWidget,1> * __thiscall
STableRow<TSharedPtr<FProviderPollResult,1>_>::FSlateAccessibleTableRow::GetOwningTable
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
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) goto LAB_14d051972;
  pTVar8 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar7 = pTVar8;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_14d0517eb:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pTVar8 = pTVar7;
    pTVar7 = pTVar11;
LAB_14d0517f3:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_14d0517eb;
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
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_14d0517f3;
  }
  lVar1._0_4_ = pTVar7[0x2e].SharedReferenceCount;
  lVar1._4_4_ = pTVar7[0x2e].WeakReferenceCount;
  if (((lVar1 == 0) || (pTVar7[0x2f]._padding_ == 0)) || (*(int *)(pTVar7[0x2f]._padding_ + 8) < 1))
  {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_14d051972:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_14d0518a5;
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
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) goto LAB_14d0518cb;
  }
LAB_14d0518a5:
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
LAB_14d0518cb:
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

// IsSelected @ 14d0600b0

bool __thiscall
STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::FSlateAccessibleTableRow::IsSelected
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
LAB_14d06013b:
    plVar5 = (longlong *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  else {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d06013b;
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
    if (plVar5 != (longlong *)0x0) goto LAB_14d060166;
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
LAB_14d060166:
  uVar3 = (**(code **)(*plVar5 + 0x30))(plVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return (bool)uVar3;
}

// IsSelected @ 14d0601a0

bool __thiscall
STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::
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
LAB_14d06022b:
    plVar5 = (longlong *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  else {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d06022b;
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
    if (plVar5 != (longlong *)0x0) goto LAB_14d060256;
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
LAB_14d060256:
  uVar3 = (**(code **)(*plVar5 + 0x30))(plVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return (bool)uVar3;
}

// IsSelected @ 14d060290

bool __thiscall
STableRow<TSharedPtr<FProviderPollResult,1>_>::FSlateAccessibleTableRow::IsSelected
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
LAB_14d06031b:
    plVar5 = (longlong *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  else {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d06031b;
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
    if (plVar5 != (longlong *)0x0) goto LAB_14d060346;
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
LAB_14d060346:
  uVar3 = (**(code **)(*plVar5 + 0x30))(plVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return (bool)uVar3;
}

// RemoveFromSelection @ 14d079140

void __thiscall
STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::FSlateAccessibleTableRow::RemoveFromSelection
          (FSlateAccessibleTableRow *this)

{
  return;
}

// RemoveFromSelection @ 14d079150

void __thiscall
STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::
FSlateAccessibleTableRow::RemoveFromSelection(FSlateAccessibleTableRow *this)

{
  return;
}

// RemoveFromSelection @ 14d079160

void __thiscall
STableRow<TSharedPtr<FProviderPollResult,1>_>::FSlateAccessibleTableRow::RemoveFromSelection
          (FSlateAccessibleTableRow *this)

{
  return;
}

// Select @ 14d07cd50

void __thiscall
STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::FSlateAccessibleTableRow::Select
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
LAB_14d07cddf:
    lVar7 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_14d07cde7:
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
        goto LAB_14d07cddf;
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
    if (lVar7 == 0) goto LAB_14d07cde7;
  }
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (((*(longlong *)(lVar7 + 0x2e8) == 0) || (*(longlong *)(lVar7 + 0x2f0) == 0)) ||
     (*(int *)(*(longlong *)(lVar7 + 0x2f0) + 8) < 1)) goto LAB_14d07d00a;
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
LAB_14d07ce95:
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d07ce95;
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
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_14d07ce95;
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
LAB_14d07d00a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Select @ 14d07d030

void __thiscall
STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::
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
LAB_14d07d0bf:
    lVar7 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_14d07d0c7:
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
        goto LAB_14d07d0bf;
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
    if (lVar7 == 0) goto LAB_14d07d0c7;
  }
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (((*(longlong *)(lVar7 + 0x2e8) == 0) || (*(longlong *)(lVar7 + 0x2f0) == 0)) ||
     (*(int *)(*(longlong *)(lVar7 + 0x2f0) + 8) < 1)) goto LAB_14d07d2ea;
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
LAB_14d07d175:
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d07d175;
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
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_14d07d175;
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
LAB_14d07d2ea:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Select @ 14d07d310

void __thiscall
STableRow<TSharedPtr<FProviderPollResult,1>_>::FSlateAccessibleTableRow::Select
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
LAB_14d07d39f:
    lVar7 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_14d07d3a7:
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
        goto LAB_14d07d39f;
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
    if (lVar7 == 0) goto LAB_14d07d3a7;
  }
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (((*(longlong *)(lVar7 + 0x2e8) == 0) || (*(longlong *)(lVar7 + 0x2f0) == 0)) ||
     (*(int *)(*(longlong *)(lVar7 + 0x2f0) + 8) < 1)) goto LAB_14d07d5ca;
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
LAB_14d07d455:
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d07d455;
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
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_14d07d455;
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
LAB_14d07d5ca:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

