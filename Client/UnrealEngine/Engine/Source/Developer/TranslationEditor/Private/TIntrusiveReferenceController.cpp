// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 10

// DestroyObject @ 146ba8d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTranslationPickerTextItem,1>::DestroyObject
          (TIntrusiveReferenceController<FTranslationPickerTextItem,1> *this)

{
  FTranslationPickerTextItem::~FTranslationPickerTextItem
            ((FTranslationPickerTextItem *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146ba8d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>
           *this)

{
  SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::
  ~SListView<TSharedPtr<FTranslationPickerTextItem,1>_>
            ((SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146ba8d30

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>
           *this)

{
  STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::
  ~STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>
            ((STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146ba8d40

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FTranslationPickerTextItem,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FTranslationPickerTextItem,1>_>,1>
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

// DestroyObject @ 146ba8d90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTranslationPickerEditInputProcessor,1>::
DestroyObject(TIntrusiveReferenceController<FTranslationPickerEditInputProcessor,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7IInputProcessor__6B_;
  return;
}

// DestroyObject @ 146ba8db0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTranslationPickerInputProcessor,1>::
DestroyObject(TIntrusiveReferenceController<FTranslationPickerInputProcessor,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7IInputProcessor__6B_;
  return;
}

// DestroyObject @ 146ba8dd0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STranslationPickerEditWidget,1>::DestroyObject
          (TIntrusiveReferenceController<STranslationPickerEditWidget,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x400));
  STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::
  ~STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>
            ((STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146ba8e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STranslationPickerEditWindow,1>::DestroyObject
          (TIntrusiveReferenceController<STranslationPickerEditWindow,1> *this)

{
  STranslationPickerEditWindow::~STranslationPickerEditWindow
            ((STranslationPickerEditWindow *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146ba8e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STranslationPickerFloatingWindow,1>::
DestroyObject(TIntrusiveReferenceController<STranslationPickerFloatingWindow,1> *this)

{
  STranslationPickerFloatingWindow::~STranslationPickerFloatingWindow
            ((STranslationPickerFloatingWindow *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146ba8e20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STranslationPickerOverlay,1>::DestroyObject
          (TIntrusiveReferenceController<STranslationPickerOverlay,1> *this)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

