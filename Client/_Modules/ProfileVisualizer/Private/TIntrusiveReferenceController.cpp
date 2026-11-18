// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 11

// DestroyObject @ 148d72c00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<SListView<TSharedPtr<FVisualizerEvent,1>_>,1> *this)

{
  SListView<TSharedPtr<FVisualizerEvent,1>_>::~SListView<TSharedPtr<FVisualizerEvent,1>_>
            ((SListView<TSharedPtr<FVisualizerEvent,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148d72c10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> *this)

{
  STableRow<TSharedPtr<FVisualizerEvent,1>_>::~STableRow<TSharedPtr<FVisualizerEvent,1>_>
            ((STableRow<TSharedPtr<FVisualizerEvent,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148d72c20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1> *this)

{
  STreeView<TSharedPtr<FVisualizerEvent,1>_>::~STreeView<TSharedPtr<FVisualizerEvent,1>_>
            ((STreeView<TSharedPtr<FVisualizerEvent,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148d72c30

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FVisualizerEvent,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FVisualizerEvent,1>_>,1>
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

// DestroyObject @ 148d72c80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SBarVisualizer,1>::DestroyObject
          (TIntrusiveReferenceController<SBarVisualizer,1> *this)

{
  SBarVisualizer::~SBarVisualizer((SBarVisualizer *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148d72c90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SEventItem,1>::DestroyObject
          (TIntrusiveReferenceController<SEventItem,1> *this)

{
  SEventItem::~SEventItem((SEventItem *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148d72ca0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SEventsTree,1>::DestroyObject
          (TIntrusiveReferenceController<SEventsTree,1> *this)

{
  SEventsTree::~SEventsTree((SEventsTree *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148d72cb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SGraphBar,1>::DestroyObject
          (TIntrusiveReferenceController<SGraphBar,1> *this)

{
  SGraphBar::~SGraphBar((SGraphBar *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148d72cc0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget,1>
::DestroyObject(TIntrusiveReferenceController<SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget,1>
                *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2c0));
  TSharedPtr<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>::
  ~TSharedPtr<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>
            ((TSharedPtr<SListView<TSharedPtr<FVisualizerEvent,1>_>,1> *)
             ((this->ObjectStorage).Pad + 0x2a8));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148d72d00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SProfileVisualizer,1>::DestroyObject
          (TIntrusiveReferenceController<SProfileVisualizer,1> *this)

{
  SProfileVisualizer::~SProfileVisualizer((SProfileVisualizer *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148d72d10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STimeline,1>::DestroyObject
          (TIntrusiveReferenceController<STimeline,1> *this)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

