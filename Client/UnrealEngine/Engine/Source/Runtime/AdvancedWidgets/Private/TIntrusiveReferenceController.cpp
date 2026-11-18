// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 24

// DestroyObject @ 14d85c5a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FColorGradingSpinBoxStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FColorGradingSpinBoxStyle,1> *this)

{
  FColorGradingSpinBoxStyle::~FColorGradingSpinBoxStyle
            ((FColorGradingSpinBoxStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d85c5b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::PropertyViewer::Private::FContainer,1>::
DestroyObject(TIntrusiveReferenceController<UE::PropertyViewer::Private::FContainer,1> *this)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((this->ObjectStorage).Pad + 0x20);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d85c5bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// DestroyObject @ 14d85c5d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateMaterialBrush,1>::DestroyObject
          (TIntrusiveReferenceController<FSlateMaterialBrush,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FSlateBrush__6B_;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0xa0));
  return;
}

// DestroyObject @ 14d85c5f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::PropertyViewer::Private::FTreeNode,1>::
DestroyObject(TIntrusiveReferenceController<UE::PropertyViewer::Private::FTreeNode,1> *this)

{
  UE::PropertyViewer::Private::FTreeNode::~FTreeNode((FTreeNode *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d85c600

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow'::__l2::SMultiRowType,1>
::DestroyObject(void *this)

{
  `UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow'::__l2::SMultiRowType::
  ~SMultiRowType((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14d85c610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSpinBox<__int64>,1>::DestroyObject
          (TIntrusiveReferenceController<SSpinBox<__int64>,1> *this)

{
  SSpinBox<__int64>::~SSpinBox<__int64>((SSpinBox<__int64> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d85c620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSpinBox<unsigned___int64>,1>::DestroyObject
          (TIntrusiveReferenceController<SSpinBox<unsigned___int64>,1> *this)

{
  SSpinBox<unsigned___int64>::~SSpinBox<unsigned___int64>
            ((SSpinBox<unsigned___int64> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d85c630

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
              *this)

{
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
  ~STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
            ((STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14d85c640

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
              *this)

{
  STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
  ~STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
            ((STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14d85c650

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
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

// DestroyObject @ 14d85c6a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
                *this)

{
  TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
  ~TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
            ((TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14d85c6b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
                *this)

{
  TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
  ~TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
            ((TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14d85c6c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::PropertyViewer::Private::FPropertyViewerImpl,1>::DestroyObject
          (TIntrusiveReferenceController<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *this)

{
  UE::PropertyViewer::Private::FPropertyViewerImpl::~FPropertyViewerImpl
            ((FPropertyViewerImpl *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d85c6d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::PropertyViewer::SBoolPropertyValue,1>::
DestroyObject(TIntrusiveReferenceController<UE::PropertyViewer::SBoolPropertyValue,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x2c8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d85c700

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::ColorGrading::SColorGradingComponentSpinBox,1>::DestroyObject
          (TIntrusiveReferenceController<UE::ColorGrading::SColorGradingComponentSpinBox,1> *this)

{
  UE::ColorGrading::SColorGradingComponentSpinBox::~SColorGradingComponentSpinBox
            ((SColorGradingComponentSpinBox *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d85c710

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::ColorGrading::SColorGradingWheel,1>::
DestroyObject(TIntrusiveReferenceController<UE::ColorGrading::SColorGradingWheel,1> *this)

{
  UE::ColorGrading::SColorGradingWheel::~SColorGradingWheel
            ((SColorGradingWheel *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d85c720

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::PropertyViewer::SDefaultPropertyValue,1>::
DestroyObject(TIntrusiveReferenceController<UE::PropertyViewer::SDefaultPropertyValue,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x2c8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d85c750

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::PropertyViewer::SEnumPropertyValue,1>::
DestroyObject(TIntrusiveReferenceController<UE::PropertyViewer::SEnumPropertyValue,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x2d0);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d85c780

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::PropertyViewer::SFieldIcon,1>::
DestroyObject(TIntrusiveReferenceController<UE::PropertyViewer::SFieldIcon,1> *this)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d85c790

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::PropertyViewer::SFieldName,1>::
DestroyObject(TIntrusiveReferenceController<UE::PropertyViewer::SFieldName,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2b0));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d85c7c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,1>
::DestroyObject(TIntrusiveReferenceController<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,1>
                *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2c0));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2b0));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d85c800

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::PropertyViewer::SNumericPropertyValue,1>::
DestroyObject(TIntrusiveReferenceController<UE::PropertyViewer::SNumericPropertyValue,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x2c8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d85c830

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SRadialSlider,1>::DestroyObject
          (TIntrusiveReferenceController<SRadialSlider,1> *this)

{
  SRadialSlider::~SRadialSlider((SRadialSlider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d85c840

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::PropertyViewer::SStringPropertyValue,1>::
DestroyObject(TIntrusiveReferenceController<UE::PropertyViewer::SStringPropertyValue,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x2c8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

