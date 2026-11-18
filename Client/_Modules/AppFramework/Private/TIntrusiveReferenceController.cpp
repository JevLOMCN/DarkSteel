// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 88

// DestroyObject @ 142fb6890

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>
              *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 0x18),*(int *)((this->ObjectStorage).Pad + 0x20));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x10));
  DestructItems<TSharedPtr<int,1>,int>
            (*(TSharedPtr<int,1> **)(this->ObjectStorage).Pad,
             *(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// DestroyObject @ 142fb68f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FInlineTextImageStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FInlineTextImageStyle,1> *this)

{
  FInlineTextImageStyle::~FInlineTextImageStyle((FInlineTextImageStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6900

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SBreadcrumbTrail<int>,1>::DestroyObject
          (TIntrusiveReferenceController<SBreadcrumbTrail<int>,1> *this)

{
  SBreadcrumbTrail<int>::~SBreadcrumbTrail<int>((SBreadcrumbTrail<int> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6910

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::DestroyObject
          (void *this)

{
  SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::
  ~SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 142fb6920

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SComboRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::DestroyObject
          (void *this)

{
  STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::
  ~STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 142fb6930

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SListView<TSharedPtr<FTestData,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<SListView<TSharedPtr<FTestData,1>_>,1> *this)

{
  SListView<TSharedPtr<FTestData,1>_>::~SListView<TSharedPtr<FTestData,1>_>
            ((SListView<TSharedPtr<FTestData,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6940

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::DestroyObject
          (void *this)

{
  SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>::
  ~SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 142fb6950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNumericEntryBox<int>,1>::DestroyObject
          (TIntrusiveReferenceController<SNumericEntryBox<int>,1> *this)

{
  SNumericEntryBox<int>::~SNumericEntryBox<int>((SNumericEntryBox<int> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNumericEntryBox<float>,1>::DestroyObject
          (TIntrusiveReferenceController<SNumericEntryBox<float>,1> *this)

{
  SNumericEntryBox<float>::~SNumericEntryBox<float>((SNumericEntryBox<float> *)&this->ObjectStorage)
  ;
  return;
}

// DestroyObject @ 142fb6970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNumericEntryBox<double>,1>::DestroyObject
          (TIntrusiveReferenceController<SNumericEntryBox<double>,1> *this)

{
  SNumericEntryBox<double>::~SNumericEntryBox<double>
            ((SNumericEntryBox<double> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6980

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSegmentedControl<int>,1>::DestroyObject
          (TIntrusiveReferenceController<SSegmentedControl<int>,1> *this)

{
  SSegmentedControl<int>::~SSegmentedControl<int>((SSegmentedControl<int> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSpinBox<int>,1>::DestroyObject
          (TIntrusiveReferenceController<SSpinBox<int>,1> *this)

{
  SSpinBox<int>::~SSpinBox<int>((SSpinBox<int> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb69a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSpinBox<double>,1>::DestroyObject
          (TIntrusiveReferenceController<SSpinBox<double>,1> *this)

{
  SSpinBox<double>::~SSpinBox<double>((SSpinBox<double> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb69b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STableRow<TSharedPtr<FTestData,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<STableRow<TSharedPtr<FTestData,1>_>,1> *this)

{
  STableRow<TSharedPtr<FTestData,1>_>::~STableRow<TSharedPtr<FTestData,1>_>
            ((STableRow<TSharedPtr<FTestData,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb69c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::DestroyObject
          (void *this)

{
  STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::
  ~STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 142fb69d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STileView<TSharedPtr<int,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<STileView<TSharedPtr<int,1>_>,1> *this)

{
  SListView<TSharedPtr<int,1>_>::~SListView<TSharedPtr<int,1>_>
            ((SListView<TSharedPtr<int,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb69e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STileView<TSharedPtr<FTestData,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<STileView<TSharedPtr<FTestData,1>_>,1> *this)

{
  SListView<TSharedPtr<FTestData,1>_>::~SListView<TSharedPtr<FTestData,1>_>
            ((SListView<TSharedPtr<FTestData,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb69f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STreeView<TSharedPtr<int,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<STreeView<TSharedPtr<int,1>_>,1> *this)

{
  STreeView<TSharedPtr<int,1>_>::~STreeView<TSharedPtr<int,1>_>
            ((STreeView<TSharedPtr<int,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6a00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STreeView<TSharedPtr<FTestData,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<STreeView<TSharedPtr<FTestData,1>_>,1> *this)

{
  STreeView<TSharedPtr<FTestData,1>_>::~STreeView<TSharedPtr<FTestData,1>_>
            ((STreeView<TSharedPtr<FTestData,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6a10

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FTestData,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FTestData,1>_>,1> *this)

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

// DestroyObject @ 142fb6a60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::
DestroyObject(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  *(undefined ***)((longlong)this + 0x10) = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 142fb6ab0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SColorGradingWheel,1>::DestroyObject
          (TIntrusiveReferenceController<SColorGradingWheel,1> *this)

{
  SColorGradingWheel::~SColorGradingWheel((SColorGradingWheel *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SColorPicker,1>::DestroyObject
          (TIntrusiveReferenceController<SColorPicker,1> *this)

{
  SColorPicker::~SColorPicker((SColorPicker *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6ad0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SColorSlider,1>::DestroyObject
          (TIntrusiveReferenceController<SColorSlider,1> *this)

{
  void *pvVar1;
  
  TSharedPtr<SSlider,1>::~TSharedPtr<SSlider,1>
            ((TSharedPtr<SSlider,1> *)((this->ObjectStorage).Pad + 0x2c8));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x2b0);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6b10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SColorSpectrum,1>::DestroyObject
          (TIntrusiveReferenceController<SColorSpectrum,1> *this)

{
  SColorSpectrum::~SColorSpectrum((SColorSpectrum *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6b20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SColorWheel,1>::DestroyObject
          (TIntrusiveReferenceController<SColorWheel,1> *this)

{
  SColorWheel::~SColorWheel((SColorWheel *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6b30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SExampleLayout,1>::DestroyObject
          (TIntrusiveReferenceController<SExampleLayout,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2b0));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6b60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SEyeDropperButton,1>::DestroyObject
          (TIntrusiveReferenceController<SEyeDropperButton,1> *this)

{
  SEyeDropperButton::~SEyeDropperButton((SEyeDropperButton *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6b70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SFxWidget,1>::DestroyObject
          (TIntrusiveReferenceController<SFxWidget,1> *this)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6b80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SHeader,1>::DestroyObject
          (TIntrusiveReferenceController<SHeader,1> *this)

{
  SBoxPanel::~SBoxPanel((SBoxPanel *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6b90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SHorizontalListItemEditor,1>::DestroyObject
          (TIntrusiveReferenceController<SHorizontalListItemEditor,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x400));
  STableRow<TSharedPtr<FTestData,1>_>::~STableRow<TSharedPtr<FTestData,1>_>
            ((STableRow<TSharedPtr<FTestData,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SInlineEditableTextBlock,1>::DestroyObject
          (TIntrusiveReferenceController<SInlineEditableTextBlock,1> *this)

{
  SInlineEditableTextBlock::~SInlineEditableTextBlock
            ((SInlineEditableTextBlock *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SItemEditor,1>::DestroyObject
          (TIntrusiveReferenceController<SItemEditor,1> *this)

{
  SItemEditor::~SItemEditor((SItemEditor *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6be0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SStarshipGallery::SListGalleryWidget,1>::
DestroyObject(TIntrusiveReferenceController<SStarshipGallery::SListGalleryWidget,1> *this)

{
  SStarshipGallery::SListGalleryWidget::~SListGalleryWidget
            ((SListGalleryWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6bf0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,1>::
DestroyObject(TIntrusiveReferenceController<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,1>
              *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2c0));
  TSharedPtr<SListView<TSharedPtr<int,1>_>,1>::~TSharedPtr<SListView<TSharedPtr<int,1>_>,1>
            ((TSharedPtr<SListView<TSharedPtr<int,1>_>,1> *)((this->ObjectStorage).Pad + 0x2a8));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6c30

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,1>::
DestroyObject(TIntrusiveReferenceController<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,1>
              *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2c0));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2b0));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6c70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SProgressBar,1>::DestroyObject
          (TIntrusiveReferenceController<SProgressBar,1> *this)

{
  SProgressBar::~SProgressBar((SProgressBar *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6c80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSpinningImage,1>::DestroyObject
          (TIntrusiveReferenceController<SSpinningImage,1> *this)

{
  FCurveSequence::~FCurveSequence((FCurveSequence *)((this->ObjectStorage).Pad + 600));
  SImage::~SImage((SImage *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6cb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SStarshipGallery,1>::DestroyObject
          (TIntrusiveReferenceController<SStarshipGallery,1> *this)

{
  SStarshipGallery::~SStarshipGallery((SStarshipGallery *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6cc0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STableViewTesting,1>::DestroyObject
          (TIntrusiveReferenceController<STableViewTesting,1> *this)

{
  STableViewTesting::~STableViewTesting((STableViewTesting *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6cd0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STestMenu,1>::DestroyObject
          (TIntrusiveReferenceController<STestMenu,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2b0));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6d00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STextComboBox,1>::DestroyObject
          (TIntrusiveReferenceController<STextComboBox,1> *this)

{
  STextComboBox::~STextComboBox((STextComboBox *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6d10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STextComboPopup,1>::DestroyObject
          (TIntrusiveReferenceController<STextComboPopup,1> *this)

{
  STextComboPopup::~STextComboPopup((STextComboPopup *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6d20

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SThemeColorBlocksBar,1>::DestroyObject
          (TIntrusiveReferenceController<SThemeColorBlocksBar,1> *this)

{
  SThemeColorBlocksBar::~SThemeColorBlocksBar((SThemeColorBlocksBar *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6d30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SThrobber,1>::DestroyObject
          (TIntrusiveReferenceController<SThrobber,1> *this)

{
  void *pvVar1;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x360));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x348);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FCurveSequence::~FCurveSequence((FCurveSequence *)((this->ObjectStorage).Pad + 0x2a8));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6d80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STileItemEditor,1>::DestroyObject
          (TIntrusiveReferenceController<STileItemEditor,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x400));
  STableRow<TSharedPtr<FTestData,1>_>::~STableRow<TSharedPtr<FTestData,1>_>
            ((STableRow<TSharedPtr<FTestData,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6db0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SVolumeControl,1>::DestroyObject
          (TIntrusiveReferenceController<SVolumeControl,1> *this)

{
  SVolumeControl::~SVolumeControl((SVolumeControl *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142fb6dc0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWidgetGallery,1>::DestroyObject
          (TIntrusiveReferenceController<SWidgetGallery,1> *this)

{
  SWidgetGallery::~SWidgetGallery((SWidgetGallery *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14302fa80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FColorTheme,1>::DestroyObject
          (TIntrusiveReferenceController<FColorTheme,1> *this)

{
  FColorTheme::~FColorTheme((FColorTheme *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14302fa90

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SColorThemesViewer,1>::DestroyObject
          (TIntrusiveReferenceController<SColorThemesViewer,1> *this)

{
  SColorThemesViewer::~SColorThemesViewer((SColorThemesViewer *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14302faa0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STextEntryPopup,1>::DestroyObject
          (TIntrusiveReferenceController<STextEntryPopup,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2d0));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2c0));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2b0));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14302faf0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SThemeColorBlock,1>::DestroyObject
          (TIntrusiveReferenceController<SThemeColorBlock,1> *this)

{
  SThemeColorBlock::~SThemeColorBlock((SThemeColorBlock *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b4f00

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *this
          )

{
  SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::
  ~SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>
            ((SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b4f10

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *this
          )

{
  STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::
  ~STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>
            ((STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b4f20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *this
          )

{
  SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>::
  ~SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>
            ((SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b4f30

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
              *this)

{
  SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::
  ~SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>
            ((SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b4f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNumericEntryBox<unsigned_short>,1>::
DestroyObject(TIntrusiveReferenceController<SNumericEntryBox<unsigned_short>,1> *this)

{
  SNumericEntryBox<unsigned_short>::~SNumericEntryBox<unsigned_short>
            ((SNumericEntryBox<unsigned_short> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b4f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSpinBox<unsigned_short>,1>::DestroyObject
          (TIntrusiveReferenceController<SSpinBox<unsigned_short>,1> *this)

{
  SSpinBox<unsigned_short>::~SSpinBox<unsigned_short>
            ((SSpinBox<unsigned_short> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b4f60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *this
          )

{
  STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::
  ~STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>
            ((STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b4f70

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
              *this)

{
  STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::
  ~STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>
            ((STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b4f80

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
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

// DestroyObject @ 1430b4fd0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
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

// DestroyObject @ 1430b5020

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAnimTest,1>::DestroyObject
          (TIntrusiveReferenceController<SAnimTest,1> *this)

{
  FCurveSequence::~FCurveSequence((FCurveSequence *)((this->ObjectStorage).Pad + 0x2b0));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b5050

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SColorPickerTest,1>::DestroyObject
          (TIntrusiveReferenceController<SColorPickerTest,1> *this)

{
  void *pvVar1;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2e0));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x2c0));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x2c8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x2c0));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b50b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SCustomPaintWidget,1>::DestroyObject
          (TIntrusiveReferenceController<SCustomPaintWidget,1> *this)

{
  TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy>
            ((TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy> *)
             ((this->ObjectStorage).Pad + 0x2a8));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b50e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDPIScaler,1>::DestroyObject
          (TIntrusiveReferenceController<SDPIScaler,1> *this)

{
  SDPIScaler::~SDPIScaler((SDPIScaler *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b50f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDPIScalingTest,1>::DestroyObject
          (TIntrusiveReferenceController<SDPIScalingTest,1> *this)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b5100

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDocumentsTest,1>::DestroyObject
          (TIntrusiveReferenceController<SDocumentsTest,1> *this)

{
  void *pvVar1;
  
  DestructItems<TSharedRef<SDocumentsTest::FDocumentInfo,1>,int>
            (*(TSharedRef<SDocumentsTest::FDocumentInfo,1> **)((this->ObjectStorage).Pad + 0x2b0),
             *(int *)((this->ObjectStorage).Pad + 0x2b8));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x2b0);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b5140

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDynamicBrushTest,1>::DestroyObject
          (TIntrusiveReferenceController<SDynamicBrushTest,1> *this)

{
  SDynamicBrushTest::~SDynamicBrushTest((SDynamicBrushTest *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b5150

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SElementTesting,1>::DestroyObject
          (TIntrusiveReferenceController<SElementTesting,1> *this)

{
  SElementTesting::~SElementTesting((SElementTesting *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b5160

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SFxTest,1>::DestroyObject
          (TIntrusiveReferenceController<SFxTest,1> *this)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b5170

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SGammaTest,1>::DestroyObject
          (TIntrusiveReferenceController<SGammaTest,1> *this)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b5180

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SGlobalInvalidationTest,1>::DestroyObject
          (TIntrusiveReferenceController<SGlobalInvalidationTest,1> *this)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b5190

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SGridPanelTest,1>::DestroyObject
          (TIntrusiveReferenceController<SGridPanelTest,1> *this)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b51a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SInvalidationPanel,1>::DestroyObject
          (TIntrusiveReferenceController<SInvalidationPanel,1> *this)

{
  SInvalidationPanel::~SInvalidationPanel((SInvalidationPanel *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b51b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SInvalidationTest,1>::DestroyObject
          (TIntrusiveReferenceController<SInvalidationTest,1> *this)

{
  TSharedPtr<SInvalidationPanel,1>::~TSharedPtr<SInvalidationPanel,1>
            ((TSharedPtr<SInvalidationPanel,1> *)((this->ObjectStorage).Pad + 0x2a8));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b51e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SLayoutRoundingTest,1>::DestroyObject
          (TIntrusiveReferenceController<SLayoutRoundingTest,1> *this)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b51f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMultiBoxTest,1>::DestroyObject
          (TIntrusiveReferenceController<SMultiBoxTest,1> *this)

{
  SMultiBoxTest::~SMultiBoxTest((SMultiBoxTest *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b5200

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMultiLineEditingTest,1>::DestroyObject
          (TIntrusiveReferenceController<SMultiLineEditingTest,1> *this)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((this->ObjectStorage).Pad + 0x2b0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b5230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNotificationListTest,1>::DestroyObject
          (TIntrusiveReferenceController<SNotificationListTest,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x2c8);
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
  TSharedPtr<SNotificationList,1>::~TSharedPtr<SNotificationList,1>
            ((TSharedPtr<SNotificationList,1> *)((this->ObjectStorage).Pad + 0x2b0));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b5280

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SResponsiveGridPanel,1>::DestroyObject
          (TIntrusiveReferenceController<SResponsiveGridPanel,1> *this)

{
  SResponsiveGridPanel::~SResponsiveGridPanel((SResponsiveGridPanel *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b5290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SRichTextEditTest,1>::DestroyObject
          (TIntrusiveReferenceController<SRichTextEditTest,1> *this)

{
  SRichTextEditTest::~SRichTextEditTest((SRichTextEditTest *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b52a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SRichTextTest,1>::DestroyObject
          (TIntrusiveReferenceController<SRichTextTest,1> *this)

{
  void *pvVar1;
  
  TSharedPtr<SRichTextBlock,1>::~TSharedPtr<SRichTextBlock,1>
            ((TSharedPtr<SRichTextBlock,1> *)((this->ObjectStorage).Pad + 0x2e0));
  DestructItems<TSharedPtr<FString,1>,int>
            (*(TSharedPtr<FString,1> **)((this->ObjectStorage).Pad + 0x2c8),
             *(int *)((this->ObjectStorage).Pad + 0x2d0));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x2c8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b52f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSplineTest,1>::DestroyObject
          (TIntrusiveReferenceController<SSplineTest,1> *this)

{
  TSharedPtr<SSplineWithHandles,1>::~TSharedPtr<SSplineWithHandles,1>
            ((TSharedPtr<SSplineWithHandles,1> *)((this->ObjectStorage).Pad + 0x2b0));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b5320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSplineWithHandles,1>::DestroyObject
          (TIntrusiveReferenceController<SSplineWithHandles,1> *this)

{
  SSplineWithHandles::~SSplineWithHandles((SSplineWithHandles *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b5330

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSplitterTest,1>::DestroyObject
          (TIntrusiveReferenceController<SSplitterTest,1> *this)

{
  SSplitterTest::~SSplitterTest((SSplitterTest *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b5340

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STestNotificationWidget,1>::DestroyObject
          (TIntrusiveReferenceController<STestNotificationWidget,1> *this)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1430b5350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STextEditTest,1>::DestroyObject
          (TIntrusiveReferenceController<STextEditTest,1> *this)

{
  STextEditTest::~STextEditTest((STextEditTest *)&this->ObjectStorage);
  return;
}

