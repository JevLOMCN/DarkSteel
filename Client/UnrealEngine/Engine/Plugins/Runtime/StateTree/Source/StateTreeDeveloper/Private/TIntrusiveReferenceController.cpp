// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 10

// DestroyObject @ 14d7259c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::StateTree::SCompactTreeView::FStateItem,1>
::DestroyObject(TIntrusiveReferenceController<UE::StateTree::SCompactTreeView::FStateItem,1> *this)

{
  UE::StateTree::SCompactTreeView::FStateItem::~FStateItem((FStateItem *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d7259d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
                *this)

{
  STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::
  ~STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
            ((STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14d7259e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
                *this)

{
  STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::
  ~STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>
            ((STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14d7259f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
                *this)

{
  STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::
  ~STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
            ((STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14d725a00

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
                *this)

{
  STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::
  ~STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>
            ((STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14d725a10

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
                *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 14d725a60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
                *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 14d725ab0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::StateTreeDebugger::SFrameEventViewRow,1>::
DestroyObject(TIntrusiveReferenceController<UE::StateTreeDebugger::SFrameEventViewRow,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x400));
  STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::
  ~STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
            ((STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14d725ae0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget,1>
::DestroyObject(TIntrusiveReferenceController<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget,1>
                *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2c0));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2b0));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d725b20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget,1>
::DestroyObject(TIntrusiveReferenceController<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget,1>
                *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2c0));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2b0));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

