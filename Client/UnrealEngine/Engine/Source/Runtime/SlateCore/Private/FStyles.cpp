// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// ~FStyles @ 14254c080

void __thiscall UE::Slate::Private::FDefaultStyleCache::FStyles::~FStyles(FStyles *this)

{
  void *pvVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  *(undefined4 *)&(this->TypeInstanceMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TypeInstanceMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UScriptStruct_*,FSlateWidgetStyle_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UScriptStruct_*,FSlateWidgetStyle_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UScriptStruct_*,FSlateWidgetStyle_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TypeInstanceMap);
  pTVar2 = (this->TreeViewStyle).BackgroundBrush.ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->TreeViewStyle)._padding_ = (longlong)&___7FTableViewStyle__6B_;
  (this->TreeViewStyle).BackgroundBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->TreeViewStyle);
  FTextBlockStyle::~FTextBlockStyle(&this->TextBlockStyle);
  pTVar2 = (this->ThrobberBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->ThrobberBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FTableRowStyle::~FTableRowStyle(&this->TableRowStyle);
  FSpinBoxStyle::~FSpinBoxStyle(&this->SpinBoxStyle);
  FSliderStyle::~FSliderStyle(&this->SliderStyle);
  FScrollBoxStyle::~FScrollBoxStyle(&this->ScrollBoxStyle);
  FScrollBarStyle::~FScrollBarStyle(&this->ScrollBarStyle);
  FProgressBarStyle::~FProgressBarStyle(&this->ProgressBarStyle);
  pTVar2 = (this->ListViewStyle).BackgroundBrush.ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->ListViewStyle)._padding_ = (longlong)&___7FTableViewStyle__6B_;
  (this->ListViewStyle).BackgroundBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->ListViewStyle);
  pTVar2 = (this->ExpandableAreaBorderBrush).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->ExpandableAreaBorderBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar2 = (this->ExpandableAreaStyle).ExpandedImage.ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->ExpandableAreaStyle).ExpandedImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  *(undefined ***)&this->ExpandableAreaStyle = &___7FExpandableAreaStyle__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar2 = (this->ExpandableAreaStyle).CollapsedImage.ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->ExpandableAreaStyle).CollapsedImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->ExpandableAreaStyle);
  FEditableTextBoxStyle::~FEditableTextBoxStyle(&this->EditableTextBoxStyle);
  FEditableTextStyle::~FEditableTextStyle(&this->EditableTextStyle);
  FComboBoxStyle::~FComboBoxStyle(&this->ComboBoxStyle);
  pTVar2 = (this->CircularThrobberBrushStyle).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->CircularThrobberBrushStyle)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FCheckBoxStyle::~FCheckBoxStyle(&this->CheckboxStyle);
  FButtonStyle::~FButtonStyle(&this->ButtonStyle);
  return;
}

