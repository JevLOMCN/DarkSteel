// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 15

// TSharedRef<SWidget,1><SListView<TSharedPtr<FVisualizerEvent,1>_>_> @ 148d4c0b0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SListView<TSharedPtr<FVisualizerEvent,1>_>_>
          (TSharedRef<SWidget,1> *this,
          TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<ITableRow,1><STableRow<TSharedPtr<FVisualizerEvent,1>_>_> @ 148d4c0e0

TSharedRef<ITableRow,1> * __thiscall
TSharedRef<ITableRow,1>::TSharedRef<ITableRow,1><STableRow<TSharedPtr<FVisualizerEvent,1>_>_>
          (TSharedRef<ITableRow,1> *this,
          TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (ITableRow *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><STreeView<TSharedPtr<FVisualizerEvent,1>_>_> @ 148d4c110

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STreeView<TSharedPtr<FVisualizerEvent,1>_>_>
          (TSharedRef<SWidget,1> *this,
          TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SEventsTree> @ 148d4c140

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SEventsTree>
          (TSharedRef<SWidget,1> *this,TSharedRef<SEventsTree,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SGraphBar> @ 148d4c1a0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SGraphBar>
          (TSharedRef<SWidget,1> *this,TSharedRef<SGraphBar,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><STimeline> @ 148d4c1d0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STimeline>
          (TSharedRef<SWidget,1> *this,TSharedRef<STimeline,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SEventItem,1><SWidget> @ 148d4c200

TSharedRef<SEventItem,1> * __thiscall
TSharedRef<SEventItem,1>::TSharedRef<SEventItem,1><SWidget>
          (TSharedRef<SEventItem,1> *this,TSharedRef<SWidget,1> *param_1,FStaticCastTag param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SEventItem *pSVar2;
  
  pSVar2 = (SEventItem *)&param_1->Object[-1].StatID;
  if (param_1->Object == (SWidget *)0x0) {
    pSVar2 = (SEventItem *)0x0;
  }
  this->Object = pSVar2;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> @ 148d54990

TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> * __thiscall
TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>::
TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>
          (TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> *this,
          STableRow<TSharedPtr<FVisualizerEvent,1>_> *param_1,TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
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
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SEventItem,1> @ 148d54ab0

TSharedRef<SEventItem,1> * __thiscall
TSharedRef<SEventItem,1>::TSharedRef<SEventItem,1>
          (TSharedRef<SEventItem,1> *this,SEventItem *param_1,TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SEventItem,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SEventItem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SEventItem,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SEventItem,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
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
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// ~TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1> @ 148d57a30

void __thiscall
TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>::
~TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>
          (TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> @ 148d57a60

void __thiscall
TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>::
~TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>
          (TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1> @ 148d57a90

void __thiscall
TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>::
~TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>
          (TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SEventItem,1> @ 148d57ac0

void __thiscall TSharedRef<SEventItem,1>::~TSharedRef<SEventItem,1>(TSharedRef<SEventItem,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SGraphBar,1> @ 148d57af0

void __thiscall TSharedRef<SGraphBar,1>::~TSharedRef<SGraphBar,1>(TSharedRef<SGraphBar,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<STimeline,1> @ 148d57b20

void __thiscall TSharedRef<STimeline,1>::~TSharedRef<STimeline,1>(TSharedRef<STimeline,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

