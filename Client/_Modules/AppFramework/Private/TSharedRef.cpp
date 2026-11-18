// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 244

// TSharedRef<SColorPicker_const_,1><SWidget_const_> @ 142f19730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SColorPicker_const_,1> * __thiscall
TSharedRef<SColorPicker_const_,1>::TSharedRef<SColorPicker_const_,1><SWidget_const_>
          (TSharedRef<SColorPicker_const_,1> *this,TSharedRef<SWidget_const_,1> *param_1,
          FStaticCastTag param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SColorPicker *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SBreadcrumbTrail<int>_> @ 142f19d60

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBreadcrumbTrail<int>_>
          (TSharedRef<SWidget,1> *this,TSharedRef<SBreadcrumbTrail<int>,1> *param_1)

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

// TSharedRef<SWidget,1><SComboBox<TSharedPtr<FString,1>_>_> @ 142f19d90

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SComboBox<TSharedPtr<FString,1>_>_>
          (TSharedRef<SWidget,1> *this,TSharedRef<SComboBox<TSharedPtr<FString,1>_>,1> *param_1)

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

// TSharedRef<SWidget,1><SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>_> @ 142f19dc0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>_>
          (TSharedRef<SWidget,1> *this,
          TSharedRef<SComboBox<TSharedPtr<ESelectionMode::Type,1>_>,1> *param_1)

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

// TSharedRef<SWidget,1><SListView<TSharedPtr<int,1>_>_> @ 142f19df0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SListView<TSharedPtr<int,1>_>_>
          (TSharedRef<SWidget,1> *this,TSharedRef<SListView<TSharedPtr<int,1>_>,1> *param_1)

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

// TSharedRef<SWidget,1><SListView<TSharedPtr<FTestData,1>_>_> @ 142f19e20

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SListView<TSharedPtr<FTestData,1>_>_>
          (TSharedRef<SWidget,1> *this,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1> *param_1)

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

// TSharedRef<SWidget,1><SNumericEntryBox<float>_> @ 142f19e50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SNumericEntryBox<float>_>
          (TSharedRef<SWidget,1> *this,TSharedRef<SNumericEntryBox<float>,1> *param_1)

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

// TSharedRef<SWidget,1><SNumericEntryBox<double>_> @ 142f19e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SNumericEntryBox<double>_>
          (TSharedRef<SWidget,1> *this,TSharedRef<SNumericEntryBox<double>,1> *param_1)

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

// TSharedRef<SWidget,1><SSegmentedControl<int>_> @ 142f19eb0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSegmentedControl<int>_>
          (TSharedRef<SWidget,1> *this,TSharedRef<SSegmentedControl<int>,1> *param_1)

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

// TSharedRef<SWidget,1><SSpinBox<int>_> @ 142f19ee0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<int>_>
          (TSharedRef<SWidget,1> *this,TSharedRef<SSpinBox<int>,1> *param_1)

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

// TSharedRef<SWidget,1><SSpinBox<double>_> @ 142f19f10

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<double>_>
          (TSharedRef<SWidget,1> *this,TSharedRef<SSpinBox<double>,1> *param_1)

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

// TSharedRef<SWidget,1><STileView<TSharedPtr<int,1>_>_> @ 142f19f40

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STileView<TSharedPtr<int,1>_>_>
          (TSharedRef<SWidget,1> *this,TSharedRef<STileView<TSharedPtr<int,1>_>,1> *param_1)

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

// TSharedRef<SWidget,1><STileView<TSharedPtr<FTestData,1>_>_> @ 142f19f70

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STileView<TSharedPtr<FTestData,1>_>_>
          (TSharedRef<SWidget,1> *this,TSharedRef<STileView<TSharedPtr<FTestData,1>_>,1> *param_1)

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

// TSharedRef<SWidget,1><STreeView<TSharedPtr<int,1>_>_> @ 142f19fa0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STreeView<TSharedPtr<int,1>_>_>
          (TSharedRef<SWidget,1> *this,TSharedRef<STreeView<TSharedPtr<int,1>_>,1> *param_1)

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

// TSharedRef<SWidget,1><STreeView<TSharedPtr<FTestData,1>_>_> @ 142f19fd0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STreeView<TSharedPtr<FTestData,1>_>_>
          (TSharedRef<SWidget,1> *this,TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1> *param_1)

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

// TSharedRef<FTabManager::FLayoutNode,1><FTabManager::FStack> @ 142f1a080

TSharedRef<FTabManager::FLayoutNode,1> * __thiscall
TSharedRef<FTabManager::FLayoutNode,1>::TSharedRef<FTabManager::FLayoutNode,1><FTabManager::FStack>
          (TSharedRef<FTabManager::FLayoutNode,1> *this,TSharedRef<FTabManager::FStack,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (FLayoutNode *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<FTableViewDragDrop,1><FTableViewDragDrop> @ 142f1a0b0

TSharedRef<FTableViewDragDrop,1> * __thiscall
TSharedRef<FTableViewDragDrop,1>::TSharedRef<FTableViewDragDrop,1><FTableViewDragDrop>
          (TSharedRef<FTableViewDragDrop,1> *this,TRawPtrProxy<FTableViewDragDrop> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FTableViewDragDrop *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FTableViewDragDrop,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFTableViewDragDrop__U__DefaultDeleter_VFTableViewDragDrop___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FTableViewDragDrop *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FTableViewDragDrop,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FTableViewDragDrop *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FTestData,1><FTestData> @ 142f1a1b0

TSharedRef<FTestData,1> * __thiscall
TSharedRef<FTestData,1>::TSharedRef<FTestData,1><FTestData>
          (TSharedRef<FTestData,1> *this,TRawPtrProxy<FTestData> *param_1)

{
  FTestData *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FTestData,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFTestData__U__DefaultDeleter_VFTestData___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FTestData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FTestData,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<SWidget,1><SCircularThrobber> @ 142f1a250

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCircularThrobber>
          (TSharedRef<SWidget,1> *this,TSharedRef<SCircularThrobber,1> *param_1)

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

// TSharedRef<SWidget,1><SColorSlider> @ 142f1a280

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SColorSlider>
          (TSharedRef<SWidget,1> *this,TSharedRef<SColorSlider,1> *param_1)

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

// TSharedRef<SWidget,1><SColorSpectrum> @ 142f1a2b0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SColorSpectrum>
          (TSharedRef<SWidget,1> *this,TSharedRef<SColorSpectrum,1> *param_1)

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

// TSharedRef<SWidget,1><SColorWheel> @ 142f1a2e0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SColorWheel>
          (TSharedRef<SWidget,1> *this,TSharedRef<SColorWheel,1> *param_1)

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

// TSharedRef<SWidget,1><SEditableText> @ 142f1a310

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SEditableText>
          (TSharedRef<SWidget,1> *this,TSharedRef<SEditableText,1> *param_1)

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

// TSharedRef<SWidget,1><SEditableTextBox> @ 142f1a340

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SEditableTextBox>
          (TSharedRef<SWidget,1> *this,TSharedRef<SEditableTextBox,1> *param_1)

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

// TSharedRef<SWidget,1><SEyeDropperButton> @ 142f1a370

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SEyeDropperButton>
          (TSharedRef<SWidget,1> *this,TSharedRef<SEyeDropperButton,1> *param_1)

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

// TSharedRef<SWidget,1><SFxWidget> @ 142f1a3a0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SFxWidget>
          (TSharedRef<SWidget,1> *this,TSharedRef<SFxWidget,1> *param_1)

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

// TSharedRef<SWidget,1><SHeader> @ 142f1a400

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHeader>
          (TSharedRef<SWidget,1> *this,TSharedRef<SHeader,1> *param_1)

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

// TSharedRef<SWidget,1><SInlineEditableTextBlock> @ 142f1a460

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SInlineEditableTextBlock>
          (TSharedRef<SWidget,1> *this,TSharedRef<SInlineEditableTextBlock,1> *param_1)

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

// TSharedRef<SWidget,1><SStarshipGallery::SListGalleryWidget> @ 142f1a490

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SStarshipGallery::SListGalleryWidget>
          (TSharedRef<SWidget,1> *this,TSharedRef<SStarshipGallery::SListGalleryWidget,1> *param_1)

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

// TSharedRef<SWidget,1><SMenuAnchor> @ 142f1a4c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SMenuAnchor>
          (TSharedRef<SWidget,1> *this,TSharedRef<SMenuAnchor,1> *param_1)

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

// TSharedRef<SWidget,1><SMultiLineEditableText> @ 142f1a4f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SMultiLineEditableText>
          (TSharedRef<SWidget,1> *this,TSharedRef<SMultiLineEditableText,1> *param_1)

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

// TSharedRef<SWidget,1><SMultiLineEditableTextBox> @ 142f1a520

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SMultiLineEditableTextBox>
          (TSharedRef<SWidget,1> *this,TSharedRef<SMultiLineEditableTextBox,1> *param_1)

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

// TSharedRef<SWidget,1><SProgressBar> @ 142f1a580

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SProgressBar>
          (TSharedRef<SWidget,1> *this,TSharedRef<SProgressBar,1> *param_1)

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

// TSharedRef<SWidget,1><SScrollBar> @ 142f1a5b0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SScrollBar>
          (TSharedRef<SWidget,1> *this,TSharedRef<SScrollBar,1> *param_1)

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

// TSharedRef<SWidget,1><SSearchBox> @ 142f1a5e0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSearchBox>
          (TSharedRef<SWidget,1> *this,TSharedRef<SSearchBox,1> *param_1)

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

// TSharedRef<SWidget,1><SSlider> @ 142f1a610

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSlider>
          (TSharedRef<SWidget,1> *this,TSharedRef<SSlider,1> *param_1)

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

// TSharedRef<SWidget,1><SSpinningImage> @ 142f1a640

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinningImage>
          (TSharedRef<SWidget,1> *this,TSharedRef<SSpinningImage,1> *param_1)

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

// TSharedRef<SWidget,1><SStarshipGallery> @ 142f1a670

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SStarshipGallery>
          (TSharedRef<SWidget,1> *this,TSharedRef<SStarshipGallery,1> *param_1)

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

// TSharedRef<SWidget,1><STextComboBox> @ 142f1a6a0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextComboBox>
          (TSharedRef<SWidget,1> *this,TSharedRef<STextComboBox,1> *param_1)

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

// TSharedRef<SWidget,1><STextComboPopup> @ 142f1a6d0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextComboPopup>
          (TSharedRef<SWidget,1> *this,TSharedRef<STextComboPopup,1> *param_1)

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

// TSharedRef<SWidget,1><SThemeColorBlocksBar> @ 142f1a700

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SThemeColorBlocksBar>
          (TSharedRef<SWidget,1> *this,TSharedRef<SThemeColorBlocksBar,1> *param_1)

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

// TSharedRef<SWidget,1><SThrobber> @ 142f1a730

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SThrobber>
          (TSharedRef<SWidget,1> *this,TSharedRef<SThrobber,1> *param_1)

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

// TSharedRef<SWidget,1><SUniformGridPanel> @ 142f1a760

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SUniformGridPanel>
          (TSharedRef<SWidget,1> *this,TSharedRef<SUniformGridPanel,1> *param_1)

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

// TSharedRef<SWidget,1><SUserWidgetExample> @ 142f1a7c0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SUserWidgetExample>
          (TSharedRef<SWidget,1> *this,TSharedRef<SUserWidgetExample,1> *param_1)

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

// TSharedRef<SWidget,1><SVolumeControl> @ 142f1a7f0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVolumeControl>
          (TSharedRef<SWidget,1> *this,TSharedRef<SVolumeControl,1> *param_1)

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

// TSharedRef<SColorPicker,1><SWidget> @ 142f1a820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SColorPicker,1> * __thiscall
TSharedRef<SColorPicker,1>::TSharedRef<SColorPicker,1><SWidget>
          (TSharedRef<SColorPicker,1> *this,TSharedRef<SWidget,1> *param_1,FStaticCastTag param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SColorPicker *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidgetGallery,1><SWidget> @ 142f1a850

TSharedRef<SWidgetGallery,1> * __thiscall
TSharedRef<SWidgetGallery,1>::TSharedRef<SWidgetGallery,1><SWidget>
          (TSharedRef<SWidgetGallery,1> *this,TSharedRef<SWidget,1> *param_1,FStaticCastTag param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidgetGallery *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SWidgetGallery> @ 142f1a880

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SWidgetGallery>
          (TSharedRef<SWidget,1> *this,TSharedRef<SWidgetGallery,1> *param_1)

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

// UEOpEquals<SWidgetGallery> @ 142f29fb0

bool __thiscall
TSharedRef<SWidget,1>::UEOpEquals<SWidgetGallery>
          (TSharedRef<SWidget,1> *this,TSharedRef<SWidgetGallery,1> *param_1)

{
  return (SWidgetGallery *)this->Object == param_1->Object;
}

// TSharedRef<SComboRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1> @ 142f2c770

TSharedRef<SComboRow<TSharedPtr<ESelectionMode::Type,1>_>,1> * __thiscall
TSharedRef<SComboRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::
TSharedRef<SComboRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>
          (void *this,SComboRow<TSharedPtr<ESelectionMode::Type,1>_> *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SComboRow<TSharedPtr<ESelectionMode::Type,1>_>,1> *pTVar7;
  
  *(SComboRow<TSharedPtr<ESelectionMode::Type,1>_> **)this = param_1;
  *(TReferenceControllerBase<1> **)((longlong)this + 8) = param_2;
  if (param_1 == (SComboRow<TSharedPtr<ESelectionMode::Type,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SComboRow<TSharedPtr<ESelectionMode::Type,1>_>,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((*(longlong *)&param_1->field_0x10 == 0) || (*(longlong *)&param_1->field_0x18 == 0)) ||
          (*(int *)(*(longlong *)&param_1->field_0x18 + 8) < 1)) {
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->field_0x8 == (undefined1 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SComboRow<TSharedPtr<ESelectionMode::Type,1>_>,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    *(undefined1 **)&param_1->field_0x10 = &param_1->field_0x8;
    if (pTVar3 != *(TReferenceControllerBase<1> **)&param_1->field_0x18) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&param_1->field_0x18;
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
      *(TReferenceControllerBase<1> **)&param_1->field_0x18 = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> @ 142f2c890

TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> * __thiscall
TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>::TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>
          (TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> *this,
          STableRow<TSharedPtr<FTestData,1>_> *param_1,TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (STableRow<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> *)(*pcVar5)();
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
        pTVar7 = (TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> *)(*pcVar5)();
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

// TSharedRef<STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1> @ 142f2c9b0

TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1> * __thiscall
TSharedRef<STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::
TSharedRef<STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>
          (void *this,STableRow<TSharedPtr<ESelectionMode::Type,1>_> *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1> *pTVar7;
  
  *(STableRow<TSharedPtr<ESelectionMode::Type,1>_> **)this = param_1;
  *(TReferenceControllerBase<1> **)((longlong)this + 8) = param_2;
  if (param_1 == (STableRow<TSharedPtr<ESelectionMode::Type,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
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
        pTVar7 = (TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1> *)(*pcVar5)();
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

// TSharedRef<SHorizontalBox,1> @ 142f2cad0

TSharedRef<SHorizontalBox,1> * __thiscall
TSharedRef<SHorizontalBox,1>::TSharedRef<SHorizontalBox,1>
          (TSharedRef<SHorizontalBox,1> *this,TSharedRef<SHorizontalBox,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SHorizontalListItemEditor,1> @ 142f2cb00

TSharedRef<SHorizontalListItemEditor,1> * __thiscall
TSharedRef<SHorizontalListItemEditor,1>::TSharedRef<SHorizontalListItemEditor,1>
          (TSharedRef<SHorizontalListItemEditor,1> *this,SHorizontalListItemEditor *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SHorizontalListItemEditor,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SHorizontalListItemEditor *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SHorizontalListItemEditor,1> *)(*pcVar5)();
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
        pTVar7 = (TSharedRef<SHorizontalListItemEditor,1> *)(*pcVar5)();
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

// TSharedRef<SItemEditor,1> @ 142f2cc20

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SItemEditor,1> * __thiscall
TSharedRef<SItemEditor,1>::TSharedRef<SItemEditor,1>
          (TSharedRef<SItemEditor,1> *this,SItemEditor *param_1,TReferenceControllerBase<1> *param_2
          )

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SItemEditor,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SItemEditor *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SItemEditor,1> *)(*pcVar5)();
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
        pTVar7 = (TSharedRef<SItemEditor,1> *)(*pcVar5)();
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

// TSharedRef<STileItemEditor,1> @ 142f2cd40

TSharedRef<STileItemEditor,1> * __thiscall
TSharedRef<STileItemEditor,1>::TSharedRef<STileItemEditor,1>
          (TSharedRef<STileItemEditor,1> *this,STileItemEditor *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<STileItemEditor,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (STileItemEditor *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<STileItemEditor,1> *)(*pcVar5)();
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
        pTVar7 = (TSharedRef<STileItemEditor,1> *)(*pcVar5)();
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

// ~TSharedRef<SColorPicker_const_,1> @ 142f3a160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TSharedRef<SColorPicker_const_,1>::~TSharedRef<SColorPicker_const_,1>
          (TSharedRef<SColorPicker_const_,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SWidget_const_,1> @ 142f3a190

void __thiscall
TSharedRef<SWidget_const_,1>::~TSharedRef<SWidget_const_,1>(TSharedRef<SWidget_const_,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<int,1> @ 142f3a1a0

void __thiscall TSharedRef<int,1>::~TSharedRef<int,1>(TSharedRef<int,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> @ 142f3a1b0

void __thiscall
TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
~TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>
          (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SBreadcrumbTrail<int>,1> @ 142f3a1e0

void __thiscall
TSharedRef<SBreadcrumbTrail<int>,1>::~TSharedRef<SBreadcrumbTrail<int>,1>
          (TSharedRef<SBreadcrumbTrail<int>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SComboBox<TSharedPtr<FString,1>_>,1> @ 142f3a210

void __thiscall
TSharedRef<SComboBox<TSharedPtr<FString,1>_>,1>::~TSharedRef<SComboBox<TSharedPtr<FString,1>_>,1>
          (TSharedRef<SComboBox<TSharedPtr<FString,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SListView<TSharedPtr<int,1>_>,1> @ 142f3a240

void __thiscall
TSharedRef<SListView<TSharedPtr<int,1>_>,1>::~TSharedRef<SListView<TSharedPtr<int,1>_>,1>
          (TSharedRef<SListView<TSharedPtr<int,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SNumericEntryBox<float>,1> @ 142f3a270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TSharedRef<SNumericEntryBox<float>,1>::~TSharedRef<SNumericEntryBox<float>,1>
          (TSharedRef<SNumericEntryBox<float>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SSegmentedControl<int>,1> @ 142f3a2a0

void __thiscall
TSharedRef<SSegmentedControl<int>,1>::~TSharedRef<SSegmentedControl<int>,1>
          (TSharedRef<SSegmentedControl<int>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SSpinBox<float>,1> @ 142f3a2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedRef<SSpinBox<float>,1>::~TSharedRef<SSpinBox<float>,1>(TSharedRef<SSpinBox<float>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<STableRow<TSharedPtr<int,1>_>,1> @ 142f3a300

void __thiscall
TSharedRef<STableRow<TSharedPtr<int,1>_>,1>::~TSharedRef<STableRow<TSharedPtr<int,1>_>,1>
          (TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<STileView<TSharedPtr<int,1>_>,1> @ 142f3a330

void __thiscall
TSharedRef<STileView<TSharedPtr<int,1>_>,1>::~TSharedRef<STileView<TSharedPtr<int,1>_>,1>
          (TSharedRef<STileView<TSharedPtr<int,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<STreeView<TSharedPtr<int,1>_>,1> @ 142f3a360

void __thiscall
TSharedRef<STreeView<TSharedPtr<int,1>_>,1>::~TSharedRef<STreeView<TSharedPtr<int,1>_>,1>
          (TSharedRef<STreeView<TSharedPtr<int,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<FTabManager::FArea,1> @ 142f3a390

void __thiscall
TSharedRef<FTabManager::FArea,1>::~TSharedRef<FTabManager::FArea,1>
          (TSharedRef<FTabManager::FArea,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<FTabManager::FLayout,1> @ 142f3a3a0

void __thiscall
TSharedRef<FTabManager::FLayout,1>::~TSharedRef<FTabManager::FLayout,1>
          (TSharedRef<FTabManager::FLayout,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<FTabManager::FStack,1> @ 142f3a3b0

void __thiscall
TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>
          (TSharedRef<FTabManager::FStack,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<SButton,1> @ 142f3a3c0

void __thiscall TSharedRef<SButton,1>::~TSharedRef<SButton,1>(TSharedRef<SButton,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<SCircularThrobber,1> @ 142f3a3d0

void __thiscall
TSharedRef<SCircularThrobber,1>::~TSharedRef<SCircularThrobber,1>
          (TSharedRef<SCircularThrobber,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SColorPicker,1> @ 142f3a400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TSharedRef<SColorPicker,1>::~TSharedRef<SColorPicker,1>(TSharedRef<SColorPicker,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SColorSlider,1> @ 142f3a430

void __thiscall
TSharedRef<SColorSlider,1>::~TSharedRef<SColorSlider,1>(TSharedRef<SColorSlider,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SColorSpectrum,1> @ 142f3a460

void __thiscall
TSharedRef<SColorSpectrum,1>::~TSharedRef<SColorSpectrum,1>(TSharedRef<SColorSpectrum,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SColorWheel,1> @ 142f3a490

void __thiscall
TSharedRef<SColorWheel,1>::~TSharedRef<SColorWheel,1>(TSharedRef<SColorWheel,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SComboButton,1> @ 142f3a4c0

void __thiscall
TSharedRef<SComboButton,1>::~TSharedRef<SComboButton,1>(TSharedRef<SComboButton,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SEditableText,1> @ 142f3a4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedRef<SEditableText,1>::~TSharedRef<SEditableText,1>(TSharedRef<SEditableText,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SEditableTextBox,1> @ 142f3a520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedRef<SEditableTextBox,1>::~TSharedRef<SEditableTextBox,1>
          (TSharedRef<SEditableTextBox,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SEyeDropperButton,1> @ 142f3a550

void __thiscall
TSharedRef<SEyeDropperButton,1>::~TSharedRef<SEyeDropperButton,1>
          (TSharedRef<SEyeDropperButton,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SFxWidget,1> @ 142f3a580

void __thiscall TSharedRef<SFxWidget,1>::~TSharedRef<SFxWidget,1>(TSharedRef<SFxWidget,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SGridPanel,1> @ 142f3a5b0

void __thiscall TSharedRef<SGridPanel,1>::~TSharedRef<SGridPanel,1>(TSharedRef<SGridPanel,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SHeader,1> @ 142f3a5e0

void __thiscall TSharedRef<SHeader,1>::~TSharedRef<SHeader,1>(TSharedRef<SHeader,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SImage,1> @ 142f3a610

void __thiscall TSharedRef<SImage,1>::~TSharedRef<SImage,1>(TSharedRef<SImage,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<SInlineEditableTextBlock,1> @ 142f3a620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedRef<SInlineEditableTextBlock,1>::~TSharedRef<SInlineEditableTextBlock,1>
          (TSharedRef<SInlineEditableTextBlock,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SStarshipGallery::SListGalleryWidget,1> @ 142f3a650

void __thiscall
TSharedRef<SStarshipGallery::SListGalleryWidget,1>::
~TSharedRef<SStarshipGallery::SListGalleryWidget,1>
          (TSharedRef<SStarshipGallery::SListGalleryWidget,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SMenuAnchor,1> @ 142f3a680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedRef<SMenuAnchor,1>::~TSharedRef<SMenuAnchor,1>(TSharedRef<SMenuAnchor,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<SMultiLineEditableText,1> @ 142f3a690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedRef<SMultiLineEditableText,1>::~TSharedRef<SMultiLineEditableText,1>
          (TSharedRef<SMultiLineEditableText,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SMultiLineEditableTextBox,1> @ 142f3a6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedRef<SMultiLineEditableTextBox,1>::~TSharedRef<SMultiLineEditableTextBox,1>
          (TSharedRef<SMultiLineEditableTextBox,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SOverlay,1> @ 142f3a6f0

void __thiscall TSharedRef<SOverlay,1>::~TSharedRef<SOverlay,1>(TSharedRef<SOverlay,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SProgressBar,1> @ 142f3a720

void __thiscall
TSharedRef<SProgressBar,1>::~TSharedRef<SProgressBar,1>(TSharedRef<SProgressBar,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SScrollBox,1> @ 142f3a750

void __thiscall TSharedRef<SScrollBox,1>::~TSharedRef<SScrollBox,1>(TSharedRef<SScrollBox,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<SSearchBox,1> @ 142f3a760

void __thiscall TSharedRef<SSearchBox,1>::~TSharedRef<SSearchBox,1>(TSharedRef<SSearchBox,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SSeparator,1> @ 142f3a790

void __thiscall TSharedRef<SSeparator,1>::~TSharedRef<SSeparator,1>(TSharedRef<SSeparator,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SSlider,1> @ 142f3a7c0

void __thiscall TSharedRef<SSlider,1>::~TSharedRef<SSlider,1>(TSharedRef<SSlider,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SSpacer,1> @ 142f3a7f0

void __thiscall TSharedRef<SSpacer,1>::~TSharedRef<SSpacer,1>(TSharedRef<SSpacer,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<SSpinningImage,1> @ 142f3a800

void __thiscall
TSharedRef<SSpinningImage,1>::~TSharedRef<SSpinningImage,1>(TSharedRef<SSpinningImage,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SStarshipGallery,1> @ 142f3a830

void __thiscall
TSharedRef<SStarshipGallery,1>::~TSharedRef<SStarshipGallery,1>
          (TSharedRef<SStarshipGallery,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<STextComboBox,1> @ 142f3a860

void __thiscall
TSharedRef<STextComboBox,1>::~TSharedRef<STextComboBox,1>(TSharedRef<STextComboBox,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<STextComboPopup,1> @ 142f3a890

void __thiscall
TSharedRef<STextComboPopup,1>::~TSharedRef<STextComboPopup,1>(TSharedRef<STextComboPopup,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SThemeColorBlocksBar,1> @ 142f3a8c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedRef<SThemeColorBlocksBar,1>::~TSharedRef<SThemeColorBlocksBar,1>
          (TSharedRef<SThemeColorBlocksBar,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SThrobber,1> @ 142f3a8f0

void __thiscall TSharedRef<SThrobber,1>::~TSharedRef<SThrobber,1>(TSharedRef<SThrobber,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SUniformGridPanel,1> @ 142f3a920

void __thiscall
TSharedRef<SUniformGridPanel,1>::~TSharedRef<SUniformGridPanel,1>
          (TSharedRef<SUniformGridPanel,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SUniformWrapPanel,1> @ 142f3a950

void __thiscall
TSharedRef<SUniformWrapPanel,1>::~TSharedRef<SUniformWrapPanel,1>
          (TSharedRef<SUniformWrapPanel,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SUserWidgetExample,1> @ 142f3a980

void __thiscall
TSharedRef<SUserWidgetExample,1>::~TSharedRef<SUserWidgetExample,1>
          (TSharedRef<SUserWidgetExample,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<SVerticalBox,1> @ 142f3a990

void __thiscall
TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(TSharedRef<SVerticalBox,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<SVolumeControl,1> @ 142f3a9a0

void __thiscall
TSharedRef<SVolumeControl,1>::~TSharedRef<SVolumeControl,1>(TSharedRef<SVolumeControl,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SWidgetGallery,1> @ 142f3a9d0

void __thiscall
TSharedRef<SWidgetGallery,1>::~TSharedRef<SWidgetGallery,1>(TSharedRef<SWidgetGallery,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// operator-> @ 142f42510

STableRow<TSharedPtr<int,1>_> * __thiscall
TSharedRef<STableRow<TSharedPtr<int,1>_>,1>::operator->
          (TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *this)

{
  return this->Object;
}

// operator-> @ 142f42520

FArea * __thiscall
TSharedRef<FTabManager::FArea,1>::operator->(TSharedRef<FTabManager::FArea,1> *this)

{
  return this->Object;
}

// operator-> @ 142f42530

/* WARNING: Enum "Type": Some values do not have unique names */

FGlobalTabmanager * __thiscall
TSharedRef<FGlobalTabmanager,1>::operator->(TSharedRef<FGlobalTabmanager,1> *this)

{
  return this->Object;
}

// operator-> @ 142f42540

FLayout * __thiscall
TSharedRef<FTabManager::FLayout,1>::operator->(TSharedRef<FTabManager::FLayout,1> *this)

{
  return this->Object;
}

// operator-> @ 142f42550

FStack * __thiscall
TSharedRef<FTabManager::FStack,1>::operator->(TSharedRef<FTabManager::FStack,1> *this)

{
  return this->Object;
}

// TSharedRef<FColorDragDrop,1><FColorDragDrop> @ 143017970

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FColorDragDrop,1> * __thiscall
TSharedRef<FColorDragDrop,1>::TSharedRef<FColorDragDrop,1><FColorDragDrop>
          (TSharedRef<FColorDragDrop,1> *this,TRawPtrProxy<FColorDragDrop> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FColorDragDrop *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FColorDragDrop,1> *pTVar9;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFColorDragDrop__U__DefaultDeleter_VFColorDragDrop___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FColorDragDrop *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FColorDragDrop,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FColorDragDrop *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<SWidget,1><SMultiBoxWidget> @ 143017b40

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SMultiBoxWidget>
          (TSharedRef<SWidget,1> *this,TSharedRef<SMultiBoxWidget,1> *param_1)

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

// ~TSharedRef<SMultiBoxWidget,1> @ 14301ae40

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TSharedRef<SMultiBoxWidget,1>::~TSharedRef<SMultiBoxWidget,1>(TSharedRef<SMultiBoxWidget,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// TSharedRef<SDocumentsTest::FDocumentInfo,1><SDocumentsTest::FDocumentInfo> @ 143040090

TSharedRef<SDocumentsTest::FDocumentInfo,1> * __thiscall
TSharedRef<SDocumentsTest::FDocumentInfo,1>::
TSharedRef<SDocumentsTest::FDocumentInfo,1><SDocumentsTest::FDocumentInfo>
          (TSharedRef<SDocumentsTest::FDocumentInfo,1> *this,
          TRawPtrProxy<SDocumentsTest::FDocumentInfo> *param_1)

{
  FDocumentInfo *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDocumentInfo_SDocumentsTest__U__DefaultDeleter_UFDocumentInfo_SDocumentsTest___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FDocumentInfo *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SDocumentsTest::FDocumentInfo,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<SSplitterTest::FVisibilityCycler,1><SSplitterTest::FVisibilityCycler> @ 1430401a0

TSharedRef<SSplitterTest::FVisibilityCycler,1> * __thiscall
TSharedRef<SSplitterTest::FVisibilityCycler,1>::
TSharedRef<SSplitterTest::FVisibilityCycler,1><SSplitterTest::FVisibilityCycler>
          (TSharedRef<SSplitterTest::FVisibilityCycler,1> *this,FVisibilityCycler *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<SSplitterTest::FVisibilityCycler,1> *pTVar4;
  
  this->Object = param_1;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFVisibilityCycler_SSplitterTest__U__DefaultDeleter_UFVisibilityCycler_SSplitterTest___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3[1]._padding_ = (longlong)param_1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar3;
  if (param_1 == (FVisibilityCycler *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedRef<SSplitterTest::FVisibilityCycler,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this;
}

// TSharedRef<SWidget,1><SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>_> @ 143040270

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>_>
          (TSharedRef<SWidget,1> *this,
          TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *param_1)

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

// TSharedRef<SWidget,1><SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>_> @ 1430402a0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::
TSharedRef<SWidget,1><SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>_>
          (TSharedRef<SWidget,1> *this,
          TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *param_1)

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

// TSharedRef<SWidget,1><SNumericEntryBox<unsigned_short>_> @ 1430402d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SNumericEntryBox<unsigned_short>_>
          (TSharedRef<SWidget,1> *this,TSharedRef<SNumericEntryBox<unsigned_short>,1> *param_1)

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

// TSharedRef<SWidget,1><SSpinBox<unsigned_short>_> @ 143040300

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<unsigned_short>_>
          (TSharedRef<SWidget,1> *this,TSharedRef<SSpinBox<unsigned_short>,1> *param_1)

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

// TSharedRef<ITableRow,1><STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>_> @ 143040330

TSharedRef<ITableRow,1> * __thiscall
TSharedRef<ITableRow,1>::
TSharedRef<ITableRow,1><STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>_>
          (TSharedRef<ITableRow,1> *this,
          TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *param_1)

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

// TSharedRef<ITextDecorator,1><FHyperlinkDecorator> @ 143040410

TSharedRef<ITextDecorator,1> * __thiscall
TSharedRef<ITextDecorator,1>::TSharedRef<ITextDecorator,1><FHyperlinkDecorator>
          (TSharedRef<ITextDecorator,1> *this,TSharedRef<FHyperlinkDecorator,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (ITextDecorator *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<FMultiBoxTestCommandList,1><FMultiBoxTestCommandList> @ 143040440

TSharedRef<FMultiBoxTestCommandList,1> * __thiscall
TSharedRef<FMultiBoxTestCommandList,1>::
TSharedRef<FMultiBoxTestCommandList,1><FMultiBoxTestCommandList>
          (TSharedRef<FMultiBoxTestCommandList,1> *this,
          TRawPtrProxy<FMultiBoxTestCommandList> *param_1)

{
  int *piVar1;
  int iVar2;
  FMultiBoxTestCommandList *pFVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<FMultiBoxTestCommandList,1> *pTVar7;
  longlong *plVar8;
  
  this->Object = param_1->Object;
  pFVar3 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMultiBoxTestCommandList__U__DefaultDeleter_VFMultiBoxTestCommandList___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pFVar3;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  if (param_1->Object == (FMultiBoxTestCommandList *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<FMultiBoxTestCommandList,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pFVar3 = param_1->Object;
  if ((pFVar3 != (FMultiBoxTestCommandList *)0x0) &&
     (((plVar8 = &pFVar3->_padding_, *plVar8 == 0 || (pFVar3->_padding_ == 0)) ||
      (*(int *)(pFVar3->_padding_ + 8) < 1)))) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (plVar8 == (longlong *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedRef<FMultiBoxTestCommandList,1> *)(*pcVar4)();
        return pTVar7;
      }
    }
    *plVar8 = (longlong)plVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pFVar3->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar8 = (longlong *)pFVar3->_padding_;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      pFVar3->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedRef<IRun,1><FSlateHyperlinkRun> @ 1430405e0

TSharedRef<IRun,1> * __thiscall
TSharedRef<IRun,1>::TSharedRef<IRun,1><FSlateHyperlinkRun>
          (TSharedRef<IRun,1> *this,TSharedRef<FSlateHyperlinkRun,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (IRun *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<ISlateRun,1><FSlateTextRun> @ 143040610

TSharedRef<ISlateRun,1> * __thiscall
TSharedRef<ISlateRun,1>::TSharedRef<ISlateRun,1><FSlateTextRun>
          (TSharedRef<ISlateRun,1> *this,TSharedRef<FSlateTextRun,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (ISlateRun *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<FTabManager::FLayoutNode,1><FTabManager::FSplitter> @ 143040640

TSharedRef<FTabManager::FLayoutNode,1> * __thiscall
TSharedRef<FTabManager::FLayoutNode,1>::
TSharedRef<FTabManager::FLayoutNode,1><FTabManager::FSplitter>
          (TSharedRef<FTabManager::FLayoutNode,1> *this,
          TSharedRef<FTabManager::FSplitter,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (FLayoutNode *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<FString_const_,1><FString> @ 143040670

TSharedRef<FString_const_,1> * __thiscall
TSharedRef<FString_const_,1>::TSharedRef<FString_const_,1><FString>
          (TSharedRef<FString_const_,1> *this,TRawPtrProxy<FString> *param_1)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FString_const_,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFString__U__DefaultDeleter_VFString___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FString *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FString_const_,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FString_const_,1><FString> @ 143040710

TSharedRef<FString_const_,1> * __thiscall
TSharedRef<FString_const_,1>::TSharedRef<FString_const_,1><FString>
          (TSharedRef<FString_const_,1> *this,TSharedRef<FString,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<FTextStyleDecoratorTest,1><FTextStyleDecoratorTest> @ 1430407a0

TSharedRef<FTextStyleDecoratorTest,1> * __thiscall
TSharedRef<FTextStyleDecoratorTest,1>::
TSharedRef<FTextStyleDecoratorTest,1><FTextStyleDecoratorTest>
          (TSharedRef<FTextStyleDecoratorTest,1> *this,
          TRawPtrProxy<FTextStyleDecoratorTest> *param_1)

{
  FTextStyleDecoratorTest *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FTextStyleDecoratorTest,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFTextStyleDecoratorTest__U__DefaultDeleter_VFTextStyleDecoratorTest___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FTextStyleDecoratorTest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FTextStyleDecoratorTest,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<ITextDecorator,1><FTextStyleDecoratorTest> @ 143040840

TSharedRef<ITextDecorator,1> * __thiscall
TSharedRef<ITextDecorator,1>::TSharedRef<ITextDecorator,1><FTextStyleDecoratorTest>
          (TSharedRef<ITextDecorator,1> *this,TSharedRef<FTextStyleDecoratorTest,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (ITextDecorator *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<FUICommandList,1><FUICommandList> @ 1430408d0

TSharedRef<FUICommandList,1> * __thiscall
TSharedRef<FUICommandList,1>::TSharedRef<FUICommandList,1><FUICommandList>
          (TSharedRef<FUICommandList,1> *this,FUICommandList *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<FUICommandList,1> *pTVar7;
  TSharedRef<FUICommandList,1> local_18;
  
  this->Object = param_1;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFUICommandList__U__DefaultDeleter_VFUICommandList___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)param_1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  if (param_1 == (FUICommandList *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<FUICommandList,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    local_18.Object = param_1;
    local_18.SharedReferenceCount.ReferenceController = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)param_1->_padding_;
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
      param_1->_padding_ = (longlong)pTVar6;
    }
    ~TSharedRef<FUICommandList,1>(&local_18);
  }
  return this;
}

// TSharedRef<SWidget,1><SAnimTest> @ 143040a50

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SAnimTest>
          (TSharedRef<SWidget,1> *this,TSharedRef<SAnimTest,1> *param_1)

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

// TSharedRef<SWidget,1><SColorPicker> @ 143040ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SColorPicker>
          (TSharedRef<SWidget,1> *this,TSharedRef<SColorPicker,1> *param_1)

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

// TSharedRef<SWidget,1><SColorPickerTest> @ 143040b10

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SColorPickerTest>
          (TSharedRef<SWidget,1> *this,TSharedRef<SColorPickerTest,1> *param_1)

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

// TSharedRef<SWidget,1><SCustomPaintWidget> @ 143040b40

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCustomPaintWidget>
          (TSharedRef<SWidget,1> *this,TSharedRef<SCustomPaintWidget,1> *param_1)

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

// TSharedRef<SWidget,1><SDPIScaler> @ 143040b70

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SDPIScaler>
          (TSharedRef<SWidget,1> *this,TSharedRef<SDPIScaler,1> *param_1)

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

// TSharedRef<SWidget,1><SDPIScalingTest> @ 143040ba0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SDPIScalingTest>
          (TSharedRef<SWidget,1> *this,TSharedRef<SDPIScalingTest,1> *param_1)

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

// TSharedRef<SWidget,1><SDocumentsTest> @ 143040bd0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SDocumentsTest>
          (TSharedRef<SWidget,1> *this,TSharedRef<SDocumentsTest,1> *param_1)

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

// TSharedRef<SWidget,1><SDynamicBrushTest> @ 143040c00

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SDynamicBrushTest>
          (TSharedRef<SWidget,1> *this,TSharedRef<SDynamicBrushTest,1> *param_1)

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

// TSharedRef<SWidget,1><SElementTesting> @ 143040c30

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SElementTesting>
          (TSharedRef<SWidget,1> *this,TSharedRef<SElementTesting,1> *param_1)

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

// TSharedRef<SWidget,1><SErrorText> @ 143040c60

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SErrorText>
          (TSharedRef<SWidget,1> *this,TSharedRef<SErrorText,1> *param_1)

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

// TSharedRef<SWidget,1><SFxTest> @ 143040c90

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SFxTest>
          (TSharedRef<SWidget,1> *this,TSharedRef<SFxTest,1> *param_1)

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

// TSharedRef<SWidget,1><SGammaTest> @ 143040cc0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SGammaTest>
          (TSharedRef<SWidget,1> *this,TSharedRef<SGammaTest,1> *param_1)

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

// TSharedRef<SWidget,1><SGlobalInvalidationTest> @ 143040cf0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SGlobalInvalidationTest>
          (TSharedRef<SWidget,1> *this,TSharedRef<SGlobalInvalidationTest,1> *param_1)

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

// TSharedRef<SWidget,1><SGridPanelTest> @ 143040d20

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SGridPanelTest>
          (TSharedRef<SWidget,1> *this,TSharedRef<SGridPanelTest,1> *param_1)

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

// TSharedRef<SWidget,1><SInvalidationPanel> @ 143040d50

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SInvalidationPanel>
          (TSharedRef<SWidget,1> *this,TSharedRef<SInvalidationPanel,1> *param_1)

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

// TSharedRef<SWidget,1><SInvalidationTest> @ 143040d80

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SInvalidationTest>
          (TSharedRef<SWidget,1> *this,TSharedRef<SInvalidationTest,1> *param_1)

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

// TSharedRef<SWidget,1><SLayoutRoundingTest> @ 143040db0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SLayoutRoundingTest>
          (TSharedRef<SWidget,1> *this,TSharedRef<SLayoutRoundingTest,1> *param_1)

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

// TSharedRef<SWidget,1><SMultiBoxTest> @ 143040de0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SMultiBoxTest>
          (TSharedRef<SWidget,1> *this,TSharedRef<SMultiBoxTest,1> *param_1)

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

// TSharedRef<SWidget,1><SMultiLineEditingTest> @ 143040e40

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SMultiLineEditingTest>
          (TSharedRef<SWidget,1> *this,TSharedRef<SMultiLineEditingTest,1> *param_1)

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

// TSharedRef<SWidget,1><SNotificationList> @ 143040ec0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SNotificationList>
          (TSharedRef<SWidget,1> *this,TSharedRef<SNotificationList,1> *param_1)

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

// TSharedRef<SWidget,1><SNotificationListTest> @ 143041030

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SNotificationListTest>
          (TSharedRef<SWidget,1> *this,TSharedRef<SNotificationListTest,1> *param_1)

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

// TSharedRef<SWidget,1><SRenderTransformManipulatorWidget> @ 143041060

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SRenderTransformManipulatorWidget>
          (TSharedRef<SWidget,1> *this,TSharedRef<SRenderTransformManipulatorWidget,1> *param_1)

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

// TSharedRef<SRenderTransformManipulatorWidget,1><SRenderTransformManipulatorWidgetImpl> @ 143041090

TSharedRef<SRenderTransformManipulatorWidget,1> * __thiscall
TSharedRef<SRenderTransformManipulatorWidget,1>::
TSharedRef<SRenderTransformManipulatorWidget,1><SRenderTransformManipulatorWidgetImpl>
          (TSharedRef<SRenderTransformManipulatorWidget,1> *this,
          TRawPtrProxy<SRenderTransformManipulatorWidgetImpl> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  SRenderTransformManipulatorWidgetImpl *pSVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<SRenderTransformManipulatorWidget,1> *pTVar9;
  
  this->Object = (SRenderTransformManipulatorWidget *)param_1->Object;
  pSVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VSRenderTransformManipulatorWidgetImpl__U__DefaultDeleter_VSRenderTransformManipulatorWidgetImpl___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pSVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (SRenderTransformManipulatorWidgetImpl *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<SRenderTransformManipulatorWidget,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pSVar4 = param_1->Object;
  if ((pSVar4 != (SRenderTransformManipulatorWidgetImpl *)0x0) &&
     (((plVar1 = &pSVar4->_padding_, pSVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar4->_padding_ = (longlong)pSVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<SWidget,1><SResponsiveGridPanel> @ 143041190

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SResponsiveGridPanel>
          (TSharedRef<SWidget,1> *this,TSharedRef<SResponsiveGridPanel,1> *param_1)

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

// TSharedRef<SWidget,1><SResponsiveGridPanelTestWidget> @ 1430411c0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SResponsiveGridPanelTestWidget>
          (TSharedRef<SWidget,1> *this,TSharedRef<SResponsiveGridPanelTestWidget,1> *param_1)

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

// TSharedRef<SResponsiveGridPanelTestWidget,1><SResponsiveGridPanelTestWidgetImpl> @ 1430411f0

TSharedRef<SResponsiveGridPanelTestWidget,1> * __thiscall
TSharedRef<SResponsiveGridPanelTestWidget,1>::
TSharedRef<SResponsiveGridPanelTestWidget,1><SResponsiveGridPanelTestWidgetImpl>
          (TSharedRef<SResponsiveGridPanelTestWidget,1> *this,
          TRawPtrProxy<SResponsiveGridPanelTestWidgetImpl> *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  SResponsiveGridPanelTestWidgetImpl *pSVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<SResponsiveGridPanelTestWidget,1> *pTVar9;
  
  this->Object = (SResponsiveGridPanelTestWidget *)param_1->Object;
  pSVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VSResponsiveGridPanelTestWidgetImpl__U__DefaultDeleter_VSResponsiveGridPanelTestWidgetImpl___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pSVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (SResponsiveGridPanelTestWidgetImpl *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<SResponsiveGridPanelTestWidget,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pSVar4 = param_1->Object;
  if ((pSVar4 != (SResponsiveGridPanelTestWidgetImpl *)0x0) &&
     (((puVar1 = &pSVar4->field_0x10, *(longlong *)&pSVar4->field_0x8 == 0 ||
       (*(longlong *)puVar1 == 0)) || (*(int *)(*(longlong *)puVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SResponsiveGridPanelTestWidgetImpl **)&pSVar4->field_0x8 = pSVar4;
    if (pTVar8 != *(TReferenceControllerBase<1> **)puVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)puVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)puVar1 = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<SWidget,1><SRichTextBlock> @ 1430412f0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SRichTextBlock>
          (TSharedRef<SWidget,1> *this,TSharedRef<SRichTextBlock,1> *param_1)

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

// TSharedRef<SWidget,1><SRichTextEditTest> @ 143041320

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SRichTextEditTest>
          (TSharedRef<SWidget,1> *this,TSharedRef<SRichTextEditTest,1> *param_1)

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

// TSharedRef<SWidget,1><SRichTextTest> @ 143041350

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SRichTextTest>
          (TSharedRef<SWidget,1> *this,TSharedRef<SRichTextTest,1> *param_1)

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

// TSharedRef<SWidget,1><SSplineTest> @ 143041380

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSplineTest>
          (TSharedRef<SWidget,1> *this,TSharedRef<SSplineTest,1> *param_1)

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

// TSharedRef<SWidget,1><SSplineWithHandles> @ 1430413b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSplineWithHandles>
          (TSharedRef<SWidget,1> *this,TSharedRef<SSplineWithHandles,1> *param_1)

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

// TSharedRef<SWidget,1><SSplitterTest> @ 1430413e0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSplitterTest>
          (TSharedRef<SWidget,1> *this,TSharedRef<SSplitterTest,1> *param_1)

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

// TSharedRef<SWidget,1><STestNotificationWidget> @ 143041450

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STestNotificationWidget>
          (TSharedRef<SWidget,1> *this,TSharedRef<STestNotificationWidget,1> *param_1)

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

// TSharedRef<SWidget,1><STextEditTest> @ 143041480

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextEditTest>
          (TSharedRef<SWidget,1> *this,TSharedRef<STextEditTest,1> *param_1)

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

// TSharedRef<SWidget,1><STextEntryPopup> @ 1430414b0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextEntryPopup>
          (TSharedRef<SWidget,1> *this,TSharedRef<STextEntryPopup,1> *param_1)

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

// TSharedRef<SSplineWithHandles,1><SWidget> @ 1430414e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SSplineWithHandles,1> * __thiscall
TSharedRef<SSplineWithHandles,1>::TSharedRef<SSplineWithHandles,1><SWidget>
          (TSharedRef<SSplineWithHandles,1> *this,TSharedRef<SWidget,1> *param_1,
          FStaticCastTag param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SSplineWithHandles *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<STestNotificationWidget,1><SWidget> @ 143041510

TSharedRef<STestNotificationWidget,1> * __thiscall
TSharedRef<STestNotificationWidget,1>::TSharedRef<STestNotificationWidget,1><SWidget>
          (TSharedRef<STestNotificationWidget,1> *this,TSharedRef<SWidget,1> *param_1,
          FStaticCastTag param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (STestNotificationWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<FCompositeFont_const_,1> @ 1430557d0

TSharedRef<FCompositeFont_const_,1> * __thiscall
TSharedRef<FCompositeFont_const_,1>::TSharedRef<FCompositeFont_const_,1>
          (TSharedRef<FCompositeFont_const_,1> *this,TSharedRef<FCompositeFont_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SDocumentsTest::FDocumentInfo,1> @ 143055800

TSharedRef<SDocumentsTest::FDocumentInfo,1> * __thiscall
TSharedRef<SDocumentsTest::FDocumentInfo,1>::TSharedRef<SDocumentsTest::FDocumentInfo,1>
          (TSharedRef<SDocumentsTest::FDocumentInfo,1> *this,
          TSharedRef<SDocumentsTest::FDocumentInfo,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SSplitterTest::FVisibilityCycler,1> @ 143055830

TSharedRef<SSplitterTest::FVisibilityCycler,1> * __thiscall
TSharedRef<SSplitterTest::FVisibilityCycler,1>::TSharedRef<SSplitterTest::FVisibilityCycler,1>
          (TSharedRef<SSplitterTest::FVisibilityCycler,1> *this,
          TSharedRef<SSplitterTest::FVisibilityCycler,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> @ 143055860

TSharedRef<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> * __thiscall
TSharedRef<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
TSharedRef<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
          (TSharedRef<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *this,
          SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((*(longlong *)&param_1->field_0x10 == 0) || (*(longlong *)&param_1->field_0x18 == 0)) ||
          (*(int *)(*(longlong *)&param_1->field_0x18 + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->field_0x8 == (undefined1 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    *(undefined1 **)&param_1->field_0x10 = &param_1->field_0x8;
    if (pTVar3 != *(TReferenceControllerBase<1> **)&param_1->field_0x18) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&param_1->field_0x18;
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
      *(TReferenceControllerBase<1> **)&param_1->field_0x18 = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> @ 143055980

TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> * __thiscall
TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
          (TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *this,
          STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *)(*pcVar5)();
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
        pTVar7 = (TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *)(*pcVar5)();
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

// TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> @ 143055aa0

TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> * __thiscall
TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
          (TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *this,
          STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)(*pcVar5)();
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
        pTVar7 = (TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)
                 (*pcVar5)();
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

// TSharedRef<SWindow,1> @ 143055bc0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWindow,1> * __thiscall
TSharedRef<SWindow,1>::TSharedRef<SWindow,1>
          (TSharedRef<SWindow,1> *this,TSharedRef<SWindow,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~TSharedRef<FCompositeFont_const_,1> @ 14305f480

void __thiscall
TSharedRef<FCompositeFont_const_,1>::~TSharedRef<FCompositeFont_const_,1>
          (TSharedRef<FCompositeFont_const_,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<FString_const_,1> @ 14305f4b0

void __thiscall
TSharedRef<FString_const_,1>::~TSharedRef<FString_const_,1>(TSharedRef<FString_const_,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<SDocumentsTest::FDocumentInfo,1> @ 14305f4c0

void __thiscall
TSharedRef<SDocumentsTest::FDocumentInfo,1>::~TSharedRef<SDocumentsTest::FDocumentInfo,1>
          (TSharedRef<SDocumentsTest::FDocumentInfo,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SSplitterTest::FVisibilityCycler,1> @ 14305f4f0

void __thiscall
TSharedRef<SSplitterTest::FVisibilityCycler,1>::~TSharedRef<SSplitterTest::FVisibilityCycler,1>
          (TSharedRef<SSplitterTest::FVisibilityCycler,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> @ 14305f520

void __thiscall
TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
~TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
          (TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> @ 14305f550

void __thiscall
TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
~TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
          (TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SNumericEntryBox<unsigned_short>,1> @ 14305f580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TSharedRef<SNumericEntryBox<unsigned_short>,1>::~TSharedRef<SNumericEntryBox<unsigned_short>,1>
          (TSharedRef<SNumericEntryBox<unsigned_short>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SSpinBox<int>,1> @ 14305f5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedRef<SSpinBox<int>,1>::~TSharedRef<SSpinBox<int>,1>(TSharedRef<SSpinBox<int>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> @ 14305f5e0

void __thiscall
TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
~TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
          (TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<FHyperlinkDecorator,1> @ 14305f610

void __thiscall
TSharedRef<FHyperlinkDecorator,1>::~TSharedRef<FHyperlinkDecorator,1>
          (TSharedRef<FHyperlinkDecorator,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<FRichTextLayoutMarshaller,1> @ 14305f620

void __thiscall
TSharedRef<FRichTextLayoutMarshaller,1>::~TSharedRef<FRichTextLayoutMarshaller,1>
          (TSharedRef<FRichTextLayoutMarshaller,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<FSlateFontMeasure,1> @ 14305f650

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TSharedRef<FSlateFontMeasure,1>::~TSharedRef<FSlateFontMeasure,1>
          (TSharedRef<FSlateFontMeasure,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<FTabManager::FSplitter,1> @ 14305f660

void __thiscall
TSharedRef<FTabManager::FSplitter,1>::~TSharedRef<FTabManager::FSplitter,1>
          (TSharedRef<FTabManager::FSplitter,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<FTabManager,1> @ 14305f670

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedRef<FTabManager,1>::~TSharedRef<FTabManager,1>(TSharedRef<FTabManager,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<FUICommandList,1> @ 14305f680

void __thiscall
TSharedRef<FUICommandList,1>::~TSharedRef<FUICommandList,1>(TSharedRef<FUICommandList,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<FWorkspaceItem,1> @ 14305f6b0

void __thiscall
TSharedRef<FWorkspaceItem,1>::~TSharedRef<FWorkspaceItem,1>(TSharedRef<FWorkspaceItem,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<ITableRow,1> @ 14305f6c0

void __thiscall TSharedRef<ITableRow,1>::~TSharedRef<ITableRow,1>(TSharedRef<ITableRow,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<ITextDecorator,1> @ 14305f6f0

void __thiscall
TSharedRef<ITextDecorator,1>::~TSharedRef<ITextDecorator,1>(TSharedRef<ITextDecorator,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<SAnimTest,1> @ 14305f700

void __thiscall TSharedRef<SAnimTest,1>::~TSharedRef<SAnimTest,1>(TSharedRef<SAnimTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SColorPickerTest,1> @ 14305f730

void __thiscall
TSharedRef<SColorPickerTest,1>::~TSharedRef<SColorPickerTest,1>
          (TSharedRef<SColorPickerTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SCustomPaintWidget,1> @ 14305f760

void __thiscall
TSharedRef<SCustomPaintWidget,1>::~TSharedRef<SCustomPaintWidget,1>
          (TSharedRef<SCustomPaintWidget,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SDPIScaler,1> @ 14305f790

void __thiscall TSharedRef<SDPIScaler,1>::~TSharedRef<SDPIScaler,1>(TSharedRef<SDPIScaler,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SDPIScalingTest,1> @ 14305f7c0

void __thiscall
TSharedRef<SDPIScalingTest,1>::~TSharedRef<SDPIScalingTest,1>(TSharedRef<SDPIScalingTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SDockTab,1> @ 14305f7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TSharedRef<SDockTab,1>::~TSharedRef<SDockTab,1>(TSharedRef<SDockTab,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<SDocumentsTest,1> @ 14305f800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedRef<SDocumentsTest,1>::~TSharedRef<SDocumentsTest,1>(TSharedRef<SDocumentsTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SDynamicBrushTest,1> @ 14305f830

void __thiscall
TSharedRef<SDynamicBrushTest,1>::~TSharedRef<SDynamicBrushTest,1>
          (TSharedRef<SDynamicBrushTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SElementTesting,1> @ 14305f860

void __thiscall
TSharedRef<SElementTesting,1>::~TSharedRef<SElementTesting,1>(TSharedRef<SElementTesting,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SErrorText,1> @ 14305f890

void __thiscall TSharedRef<SErrorText,1>::~TSharedRef<SErrorText,1>(TSharedRef<SErrorText,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SFxTest,1> @ 14305f8c0

void __thiscall TSharedRef<SFxTest,1>::~TSharedRef<SFxTest,1>(TSharedRef<SFxTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SGammaTest,1> @ 14305f8f0

void __thiscall TSharedRef<SGammaTest,1>::~TSharedRef<SGammaTest,1>(TSharedRef<SGammaTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SGlobalInvalidationTest,1> @ 14305f920

void __thiscall
TSharedRef<SGlobalInvalidationTest,1>::~TSharedRef<SGlobalInvalidationTest,1>
          (TSharedRef<SGlobalInvalidationTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SGridPanelTest,1> @ 14305f950

void __thiscall
TSharedRef<SGridPanelTest,1>::~TSharedRef<SGridPanelTest,1>(TSharedRef<SGridPanelTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SInvalidationPanel,1> @ 14305f980

void __thiscall
TSharedRef<SInvalidationPanel,1>::~TSharedRef<SInvalidationPanel,1>
          (TSharedRef<SInvalidationPanel,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SInvalidationTest,1> @ 14305f9b0

void __thiscall
TSharedRef<SInvalidationTest,1>::~TSharedRef<SInvalidationTest,1>
          (TSharedRef<SInvalidationTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SLayoutRoundingTest,1> @ 14305f9e0

void __thiscall
TSharedRef<SLayoutRoundingTest,1>::~TSharedRef<SLayoutRoundingTest,1>
          (TSharedRef<SLayoutRoundingTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SMultiBoxTest,1> @ 14305fa10

void __thiscall
TSharedRef<SMultiBoxTest,1>::~TSharedRef<SMultiBoxTest,1>(TSharedRef<SMultiBoxTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SMultiLineEditingTest,1> @ 14305fa40

void __thiscall
TSharedRef<SMultiLineEditingTest,1>::~TSharedRef<SMultiLineEditingTest,1>
          (TSharedRef<SMultiLineEditingTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SNotificationList,1> @ 14305fa70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedRef<SNotificationList,1>::~TSharedRef<SNotificationList,1>
          (TSharedRef<SNotificationList,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SNotificationListTest,1> @ 14305faa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedRef<SNotificationListTest,1>::~TSharedRef<SNotificationListTest,1>
          (TSharedRef<SNotificationListTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SRenderTransformManipulatorWidget,1> @ 14305fad0

void __thiscall
TSharedRef<SRenderTransformManipulatorWidget,1>::~TSharedRef<SRenderTransformManipulatorWidget,1>
          (TSharedRef<SRenderTransformManipulatorWidget,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SResponsiveGridPanel,1> @ 14305fb00

void __thiscall
TSharedRef<SResponsiveGridPanel,1>::~TSharedRef<SResponsiveGridPanel,1>
          (TSharedRef<SResponsiveGridPanel,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SResponsiveGridPanelTestWidget,1> @ 14305fb30

void __thiscall
TSharedRef<SResponsiveGridPanelTestWidget,1>::~TSharedRef<SResponsiveGridPanelTestWidget,1>
          (TSharedRef<SResponsiveGridPanelTestWidget,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SRichTextBlock,1> @ 14305fb60

void __thiscall
TSharedRef<SRichTextBlock,1>::~TSharedRef<SRichTextBlock,1>(TSharedRef<SRichTextBlock,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SRichTextEditTest,1> @ 14305fb90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedRef<SRichTextEditTest,1>::~TSharedRef<SRichTextEditTest,1>
          (TSharedRef<SRichTextEditTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SRichTextTest,1> @ 14305fbc0

void __thiscall
TSharedRef<SRichTextTest,1>::~TSharedRef<SRichTextTest,1>(TSharedRef<SRichTextTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SSplineTest,1> @ 14305fbf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedRef<SSplineTest,1>::~TSharedRef<SSplineTest,1>(TSharedRef<SSplineTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SSplineWithHandles,1> @ 14305fc20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedRef<SSplineWithHandles,1>::~TSharedRef<SSplineWithHandles,1>
          (TSharedRef<SSplineWithHandles,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SSplitterTest,1> @ 14305fc50

void __thiscall
TSharedRef<SSplitterTest,1>::~TSharedRef<SSplitterTest,1>(TSharedRef<SSplitterTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<STestNotificationWidget,1> @ 14305fc80

void __thiscall
TSharedRef<STestNotificationWidget,1>::~TSharedRef<STestNotificationWidget,1>
          (TSharedRef<STestNotificationWidget,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<STextEditTest,1> @ 14305fcb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedRef<STextEditTest,1>::~TSharedRef<STextEditTest,1>(TSharedRef<STextEditTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<STextEntryPopup,1> @ 14305fce0

void __thiscall
TSharedRef<STextEntryPopup,1>::~TSharedRef<STextEntryPopup,1>(TSharedRef<STextEntryPopup,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SToolTip,1> @ 14305fd10

void __thiscall TSharedRef<SToolTip,1>::~TSharedRef<SToolTip,1>(TSharedRef<SToolTip,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SWindow,1> @ 14305fd40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TSharedRef<SWindow,1>::~TSharedRef<SWindow,1>(TSharedRef<SWindow,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// operator-> @ 143063c20

FDocumentInfo * __thiscall
TSharedRef<SDocumentsTest::FDocumentInfo,1>::operator->
          (TSharedRef<SDocumentsTest::FDocumentInfo,1> *this)

{
  return this->Object;
}

// operator-> @ 143063c30

FRichTextLayoutMarshaller * __thiscall
TSharedRef<FRichTextLayoutMarshaller,1>::operator->(TSharedRef<FRichTextLayoutMarshaller,1> *this)

{
  return this->Object;
}

// operator-> @ 143063c40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateFontMeasure * __thiscall
TSharedRef<FSlateFontMeasure,1>::operator->(TSharedRef<FSlateFontMeasure,1> *this)

{
  return this->Object;
}

// operator-> @ 143063c50

FSplitter * __thiscall
TSharedRef<FTabManager::FSplitter,1>::operator->(TSharedRef<FTabManager::FSplitter,1> *this)

{
  return this->Object;
}

// operator-> @ 143063c60

FString * __thiscall TSharedRef<FString,1>::operator->(TSharedRef<FString,1> *this)

{
  return this->Object;
}

// operator-> @ 143063c70

FUICommandList * __thiscall
TSharedRef<FUICommandList,1>::operator->(TSharedRef<FUICommandList,1> *this)

{
  return this->Object;
}

// operator-> @ 143063c80

FWorkspaceItem * __thiscall
TSharedRef<FWorkspaceItem,1>::operator->(TSharedRef<FWorkspaceItem,1> *this)

{
  return this->Object;
}

// operator-> @ 143063c90

/* WARNING: Enum "Type": Some values do not have unique names */

SDockTab * __thiscall TSharedRef<SDockTab,1>::operator->(TSharedRef<SDockTab,1> *this)

{
  return this->Object;
}

// operator-> @ 143063ca0

SVerticalBox * __thiscall TSharedRef<SVerticalBox,1>::operator->(TSharedRef<SVerticalBox,1> *this)

{
  return this->Object;
}

// operator-> @ 143063cb0

/* WARNING: Enum "Type": Some values do not have unique names */

SWindow * __thiscall TSharedRef<SWindow,1>::operator->(TSharedRef<SWindow,1> *this)

{
  return this->Object;
}

// operator* @ 143063cc0

FString * __thiscall TSharedRef<FString,1>::operator*(TSharedRef<FString,1> *this)

{
  return this->Object;
}

// Get @ 1430c73d0

/* WARNING: Enum "Type": Some values do not have unique names */

FTabManager * __thiscall TSharedRef<FTabManager,1>::Get(TSharedRef<FTabManager,1> *this)

{
  return this->Object;
}

