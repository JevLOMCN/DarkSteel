// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 17

// DestroyObject @ 14a7d35a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SCommonButtonTableRow<UObject_*>,1>::
DestroyObject(TIntrusiveReferenceController<SCommonButtonTableRow<UObject_*>,1> *this)

{
  SObjectTableRow<UObject_*>::~SObjectTableRow<UObject_*>
            ((SObjectTableRow<UObject_*> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14a7d35b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SCommonListView<UObject_*>,1>::DestroyObject
          (TIntrusiveReferenceController<SCommonListView<UObject_*>,1> *this)

{
  SListView<UObject_*>::~SListView<UObject_*>((SListView<UObject_*> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14a7d35c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SCommonTileView<UObject_*>,1>::DestroyObject
          (TIntrusiveReferenceController<SCommonTileView<UObject_*>,1> *this)

{
  SListView<UObject_*>::~SListView<UObject_*>((SListView<UObject_*> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14a7d35d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SCommonTreeView<UObject_*>,1>::DestroyObject
          (TIntrusiveReferenceController<SCommonTreeView<UObject_*>,1> *this)

{
  STreeView<UObject_*>::~STreeView<UObject_*>((STreeView<UObject_*> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14a7d35e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWidgetCarousel<UPanelSlot_*>,1>::
DestroyObject(TIntrusiveReferenceController<SWidgetCarousel<UPanelSlot_*>,1> *this)

{
  SWidgetCarousel<UPanelSlot_*>::~SWidgetCarousel<UPanelSlot_*>
            ((SWidgetCarousel<UPanelSlot_*> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14a7d35f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCommonActivatableSlateMetaData,1>::
DestroyObject(TIntrusiveReferenceController<FCommonActivatableSlateMetaData,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 14a7d3610

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCommonButtonMetaData,1>::DestroyObject
          (TIntrusiveReferenceController<FCommonButtonMetaData,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 14a7d3630

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPersistentActionCollection,1>::DestroyObject
          (TIntrusiveReferenceController<FPersistentActionCollection,1> *this)

{
  FActionRouterBindingCollection::~FActionRouterBindingCollection
            ((FActionRouterBindingCollection *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14a7d3640

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAnalogSlider,1>::DestroyObject
          (TIntrusiveReferenceController<SAnalogSlider,1> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x308));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x310);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x308));
  SSlider::~SSlider((SSlider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14a7d3690

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SCommonAnimatedSwitcher,1>::DestroyObject
          (TIntrusiveReferenceController<SCommonAnimatedSwitcher,1> *this)

{
  SCommonAnimatedSwitcher::~SCommonAnimatedSwitcher((SCommonAnimatedSwitcher *)&this->ObjectStorage)
  ;
  return;
}

// DestroyObject @ 14a7d36a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SCommonButton,1>::DestroyObject
          (TIntrusiveReferenceController<SCommonButton,1> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x4b0));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x4b8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x4b0));
  SButton::~SButton((SButton *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14a7d36f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SCommonHierarchicalScrollBox,1>::DestroyObject
          (TIntrusiveReferenceController<SCommonHierarchicalScrollBox,1> *this)

{
  SScrollBox::~SScrollBox((SScrollBox *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14a7d3700

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SCommonInlineIcon,1>::DestroyObject
          (TIntrusiveReferenceController<SCommonInlineIcon,1> *this)

{
  FGCObject *this_00;
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x360);
  *(undefined ***)((this->ObjectStorage).Pad + 0x2c0) = &___7FSlateBrush__6B_;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  this_00 = (FGCObject *)((this->ObjectStorage).Pad + 0x2a8);
  this_00->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject(this_00);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14a7d3750

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SCustomNavBorder,1>::DestroyObject
          (TIntrusiveReferenceController<SCustomNavBorder,1> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x2e0));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x2e8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x2e0));
  SBorder::~SBorder((SBorder *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14a7d37a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SLoadGuard,1>::DestroyObject
          (TIntrusiveReferenceController<SLoadGuard,1> *this)

{
  SLoadGuard::~SLoadGuard((SLoadGuard *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14a7d37b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STextScroller,1>::DestroyObject
          (TIntrusiveReferenceController<STextScroller,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2c0));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14a7d37e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SVisualAttachmentBox,1>::DestroyObject
          (TIntrusiveReferenceController<SVisualAttachmentBox,1> *this)

{
  SBox::~SBox((SBox *)&this->ObjectStorage);
  return;
}

