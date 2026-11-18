// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 259

// Expose<SBreadcrumbTrail<int>_> @ 142f207e0

TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs>::Expose<SBreadcrumbTrail<int>_>
          (TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SBreadcrumbTrail<int>,1> *param_1)

{
  SBreadcrumbTrail<int> *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<SBreadcrumbTrail<int>,1> local_18;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  TSharedPtr<SBreadcrumbTrail<int>,1>::~TSharedPtr<SBreadcrumbTrail<int>,1>(&local_18);
  return this;
}

// Expose<SComboBox<TSharedPtr<FString,1>_>_> @ 142f20830

TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
Expose<SComboBox<TSharedPtr<FString,1>_>_>
          (TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1> *param_1)

{
  SComboBox<TSharedPtr<FString,1>_> *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1> local_18;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1>::~TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1>
            (&local_18);
  return this;
}

// Expose<SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>_> @ 142f20880

TSlateDecl<SComboBox<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs>::
Expose<SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>_>
          (void *this,TSharedPtr<SComboBox<TSharedPtr<ESelectionMode::Type,1>_>,1> *param_1)

{
  SComboBox<TSharedPtr<ESelectionMode::Type,1>_> *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pSVar1 = *(SComboBox<TSharedPtr<ESelectionMode::Type,1>_> **)this;
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// Expose<SListView<TSharedPtr<int,1>_>_> @ 142f208d0

TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>::
Expose<SListView<TSharedPtr<int,1>_>_>
          (TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SListView<TSharedPtr<int,1>_>,1> *param_1)

{
  SListView<TSharedPtr<int,1>_> *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<SListView<TSharedPtr<int,1>_>,1> local_18;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  TSharedPtr<SListView<TSharedPtr<int,1>_>,1>::~TSharedPtr<SListView<TSharedPtr<int,1>_>,1>
            (&local_18);
  return this;
}

// Expose<SListView<TSharedPtr<FTestData,1>_>_> @ 142f20920

TSlateDecl<SListView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SListView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>::
Expose<SListView<TSharedPtr<FTestData,1>_>_>
          (TSlateDecl<SListView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SListView<TSharedPtr<FTestData,1>_>,1> *param_1)

{
  SListView<TSharedPtr<FTestData,1>_> *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// Expose<SNumericEntryBox<float>_> @ 142f20970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs>::Expose<SNumericEntryBox<float>_>
          (TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SNumericEntryBox<float>,1> *param_1)

{
  SNumericEntryBox<float> *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<SNumericEntryBox<float>,1> local_18;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  TSharedPtr<SNumericEntryBox<float>,1>::~TSharedPtr<SNumericEntryBox<float>,1>(&local_18);
  return this;
}

// Expose<SSpinBox<int>_> @ 142f209c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs>::Expose<SSpinBox<int>_>
          (TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SSpinBox<int>,1> *param_1)

{
  SSpinBox<int> *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// Expose<SSpinBox<float>_> @ 142f20a10

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::Expose<SSpinBox<float>_>
          (TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SSpinBox<float>,1> *param_1)

{
  SSpinBox<float> *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<SSpinBox<float>,1> local_18;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  TSharedPtr<SSpinBox<float>,1>::~TSharedPtr<SSpinBox<float>,1>(&local_18);
  return this;
}

// Expose<SSpinBox<double>_> @ 142f20a60

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs>::Expose<SSpinBox<double>_>
          (TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SSpinBox<double>,1> *param_1)

{
  SSpinBox<double> *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// Expose<STileView<TSharedPtr<int,1>_>_> @ 142f20ab0

TSlateDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>::
Expose<STileView<TSharedPtr<int,1>_>_>
          (TSlateDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<STileView<TSharedPtr<int,1>_>,1> *param_1)

{
  STileView<TSharedPtr<int,1>_> *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<STileView<TSharedPtr<int,1>_>,1> local_18;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  TSharedPtr<STileView<TSharedPtr<int,1>_>,1>::~TSharedPtr<STileView<TSharedPtr<int,1>_>,1>
            (&local_18);
  return this;
}

// Expose<STileView<TSharedPtr<FTestData,1>_>_> @ 142f20b00

TSlateDecl<STileView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<STileView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>::
Expose<STileView<TSharedPtr<FTestData,1>_>_>
          (TSlateDecl<STileView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<STileView<TSharedPtr<FTestData,1>_>,1> *param_1)

{
  STileView<TSharedPtr<FTestData,1>_> *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// Expose<STreeView<TSharedPtr<int,1>_>_> @ 142f20b50

TSlateDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>::
Expose<STreeView<TSharedPtr<int,1>_>_>
          (TSlateDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<STreeView<TSharedPtr<int,1>_>,1> *param_1)

{
  STreeView<TSharedPtr<int,1>_> *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<STreeView<TSharedPtr<int,1>_>,1> local_18;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  TSharedPtr<STreeView<TSharedPtr<int,1>_>,1>::~TSharedPtr<STreeView<TSharedPtr<int,1>_>,1>
            (&local_18);
  return this;
}

// Expose<STreeView<TSharedPtr<FTestData,1>_>_> @ 142f20ba0

TSlateDecl<STreeView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<STreeView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>::
Expose<STreeView<TSharedPtr<FTestData,1>_>_>
          (TSlateDecl<STreeView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<STreeView<TSharedPtr<FTestData,1>_>,1> *param_1)

{
  STreeView<TSharedPtr<FTestData,1>_> *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// Expose<SColorWheel> @ 142f20bf0

TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs>::Expose<SColorWheel>
          (TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SColorWheel,1> *param_1)

{
  SColorWheel *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// Expose<SMenuAnchor> @ 142f20c40

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>::Expose<SMenuAnchor>
          (TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SMenuAnchor,1> *param_1)

{
  SMenuAnchor *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// Expose<SSearchBox> @ 142f20c90

TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>::Expose<SSearchBox>
          (TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SSearchBox,1> *param_1)

{
  SSearchBox *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<SSearchBox,1> local_18;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  TSharedPtr<SSearchBox,1>::~TSharedPtr<SSearchBox,1>(&local_18);
  return this;
}

// Expose<STextComboBox> @ 142f20ce0

TSlateDecl<STextComboBox,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<STextComboBox,RequiredArgs::T0RequiredArgs>::Expose<STextComboBox>
          (TSlateDecl<STextComboBox,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<STextComboBox,1> *param_1)

{
  STextComboBox *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<STextComboBox,1> local_18;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  TSharedPtr<STextComboBox,1>::~TSharedPtr<STextComboBox,1>(&local_18);
  return this;
}

// Expose<SThemeColorBlocksBar> @ 142f20d30

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs>::Expose<SThemeColorBlocksBar>
          (TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SThemeColorBlocksBar,1> *param_1)

{
  SThemeColorBlocksBar *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs> @ 142f2ce60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs> *pTVar6;
  SBreadcrumbTrail<int> *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SBreadcrumbTrail<int> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTStack_20 = ::operator_new(0x400);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar7 = (SBreadcrumbTrail<int> *)&DAT_00000010;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__SBreadcrumbTrail_H___00_SharedPointerInternals__6B_
    ;
    memset(pTStack_20 + 1,0,0x3f0);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTStack_20 + 1));
    pTStack_20[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pSVar7 = (SBreadcrumbTrail<int> *)(pTStack_20 + 1);
    pTStack_20[0x2c]._padding_ = 0;
    pTStack_20[1]._padding_ = (longlong)&___7__SBreadcrumbTrail_H__6B_;
    pTStack_20[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2d]._padding_ = 0;
    *(undefined1 *)&pTStack_20[0x30]._padding_ = 0;
    pTStack_20[0x31]._padding_ = 0;
    pTStack_20[0x2f]._padding_ = 0;
    pTStack_20[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x31].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x30].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x32]._padding_ = 0;
    *(undefined1 *)&pTStack_20[0x32].SharedReferenceCount = 0;
    pTStack_20[0x34]._padding_ = 0;
    pTStack_20[0x33]._padding_ = 0;
    pTStack_20[0x33].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x33].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x34].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x34].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x35]._padding_ = 0;
    pTStack_20[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x36]._padding_ = 0;
    pTStack_20[0x36].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x36].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTStack_20[0x37]._padding_ = 0;
    pTStack_20[0x37].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x37].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x38]._padding_ = 0;
    pTStack_20[0x38].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x39]._padding_ = 0;
    pTStack_20[0x39].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x39].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTStack_20[0x3a]._padding_ = 0;
    pTStack_20[0x3a].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x3a].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x3b]._padding_ = 0;
    pTStack_20[0x3b].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x3c]._padding_ = 0;
    pTStack_20[0x3c].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x3c].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTStack_20[0x3d]._padding_ = 0;
    *(undefined2 *)&pTStack_20[0x3d].SharedReferenceCount = 0;
    pTStack_20[0x3f]._padding_ = 0;
    pTStack_20[0x3e]._padding_ = 0;
    pTStack_20[0x3e].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x3e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTStack_20;
    local_38._16_8_ = pSVar7;
    if (pSVar7 == (SBreadcrumbTrail<int> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar6;
      }
      goto LAB_142f2d0a7;
    }
  }
  if (((pSVar7->_padding_ == 0) || (pSVar7->_padding_ == 0)) ||
     (*(int *)(pSVar7->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar7->_padding_ = (longlong)pSVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar7->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar7->_padding_;
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
      pSVar7->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_142f2d0a7:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SBreadcrumbTrail<int> *)local_38._16_8_;
    local_38._0_8_ = (SBreadcrumbTrail<int> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SBreadcrumbTrail<int>,1>::~TSharedPtr<SBreadcrumbTrail<int>,1>
            ((TSharedPtr<SBreadcrumbTrail<int>,1> *)local_38);
  TSharedRef<SBreadcrumbTrail<int>,1>::~TSharedRef<SBreadcrumbTrail<int>,1>
            ((TSharedRef<SBreadcrumbTrail<int>,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SBreadcrumbTrail<int> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar6;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x3f0);
  return this;
}

// TSlateDecl<SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs> @ 142f2d180

TSlateDecl<SComboBox<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs>
          (void *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSlateDecl<SComboBox<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(T0RequiredArgs **)((longlong)this + 0x10) = param_4;
  pTVar8 = ::operator_new(0x4e0);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SComboBox_V__TSharedPtr_W4Type_ESelectionMode___00_____00_SharedPointerInternals__6B_
    ;
    SComboButton::SComboButton((SComboButton *)(pTVar8 + 1));
    pTVar8[1]._padding_ =
         (longlong)&SComboBox<TSharedPtr<ESelectionMode::Type,1>_>::_vftable__for__SPanel__;
    *(undefined ***)&pTVar8[0x22].SharedReferenceCount =
         &SComboBox<TSharedPtr<ESelectionMode::Type,1>_>::_vftable__for__IMenuHost__;
    FSlateSound::FSlateSound((FSlateSound *)(pTVar8 + 0x40));
    FSlateSound::FSlateSound((FSlateSound *)&pTVar8[0x41].SharedReferenceCount);
    pbVar1 = (byte *)((longlong)&pTVar8[4]._padding_ + 2);
    *pbVar1 = *pbVar1 | 4;
    pTVar11 = pTVar8 + 1;
    pTVar8[0x44]._padding_ = 0;
    pTVar8[0x44].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[0x45]._padding_ = 0;
    pTVar8[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar8[0x46]._padding_ = 0;
    pTVar8[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[0x47]._padding_ = 0;
    pTVar8[0x47].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0x47].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[0x48]._padding_ = 0;
    pTVar8[0x48].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0x48].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[0x49]._padding_ = 0;
    pTVar8[0x49].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0x49].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[0x4a]._padding_ = 0;
    pTVar8[0x4a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0x4b]._padding_ = 0;
    pTVar8[0x4b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0x4b].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar8[0x4c]._padding_ = 0;
    pTVar8[0x4d]._padding_ = 0;
    pTVar8[0x4d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0x4d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)((longlong)&pTVar8[4]._padding_ + 3) = 1;
    pTVar10 = pTVar8;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TSlateDecl<SComboBox<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar6)();
        return pTVar9;
      }
      goto LAB_142f2d35c;
    }
  }
  lVar4._0_4_ = pTVar11->SharedReferenceCount;
  lVar4._4_4_ = pTVar11->WeakReferenceCount;
  if (((lVar4 == 0) || (pTVar11[1]._padding_ == 0)) || (*(int *)(pTVar11[1]._padding_ + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar11->SharedReferenceCount = pTVar11;
    if (pTVar10 != (TReferenceControllerBase<1> *)pTVar11[1]._padding_) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pTVar11[1]._padding_;
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
      pTVar11[1]._padding_ = (longlong)pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_142f2d35c:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pTVar11;
  local_30.ReferenceController = pTVar10;
  if (this != &local_38) {
    *(TReferenceControllerBase<1> **)this = pTVar11;
    local_38 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)this + 8),&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (*(longlong *)this == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSlateDecl<SComboBox<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs>
                *)(*pcVar6)();
      return pTVar9;
    }
  }
  SWidget::SetDebugInfo(*(SWidget **)this,param_1,param_2,param_3,0x4d0);
  return this;
}

// TSlateDecl<SListView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> @ 142f2d420

TSlateDecl<SListView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SListView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SListView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SListView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SListView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> *pTVar7;
  SListView<TSharedPtr<FTestData,1>_> *pSVar8;
  SListView<TSharedPtr<FTestData,1>_> *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SListView<TSharedPtr<FTestData,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0xa10);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SListView<TSharedPtr<FTestData,1>_> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SListView_V__TSharedPtr_VFTestData___00_____00_SharedPointerInternals__6B_
    ;
    SListView<TSharedPtr<FTestData,1>_>::SListView<TSharedPtr<FTestData,1>_>
              ((SListView<TSharedPtr<FTestData,1>_> *)(pTVar6 + 1),List);
    pSVar8 = (SListView<TSharedPtr<FTestData,1>_> *)(pTVar6 + 1);
    if (pSVar8 == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SListView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> *)
                 (*pcVar4)();
        return pTVar7;
      }
      goto LAB_142f2d541;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_142f2d541:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SListView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> *)
              &local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SListView<TSharedPtr<FTestData,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SListView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> *)
               (*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0xa00);
  return this;
}

// TSlateDecl<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs> @ 142f2d600

TSlateDecl<SListView<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs>
          (void *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSlateDecl<SListView<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *local_28;
  FSharedReferencer<1> local_20;
  
  *(T0RequiredArgs **)((longlong)this + 0x10) = param_4;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  pTVar7 = ::operator_new(0xa10);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SListView_V__TSharedPtr_W4Type_ESelectionMode___00_____00_SharedPointerInternals__6B_
    ;
    SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>::
    SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>(pTVar7 + 1,List);
    pTVar9 = pTVar7 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSlateDecl<SListView<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar5)();
        return pTVar8;
      }
      goto LAB_142f2d721;
    }
  }
  lVar3._0_4_ = pTVar9->SharedReferenceCount;
  lVar3._4_4_ = pTVar9->WeakReferenceCount;
  if (((lVar3 == 0) || (pTVar9[1]._padding_ == 0)) || (*(int *)(pTVar9[1]._padding_ + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar9->SharedReferenceCount = pTVar9;
    if (pTVar7 != (TReferenceControllerBase<1> *)pTVar9[1]._padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pTVar9[1]._padding_;
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
      pTVar9[1]._padding_ = (longlong)pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_142f2d721:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pTVar9;
  local_20.ReferenceController = pTVar7;
  if (this != &local_28) {
    *(TReferenceControllerBase<1> **)this = pTVar9;
    local_28 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)this + 8),&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (*(longlong *)this == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSlateDecl<SListView<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs>
                *)(*pcVar5)();
      return pTVar8;
    }
  }
  SWidget::SetDebugInfo(*(SWidget **)this,param_1,param_2,param_3,0xa00);
  return this;
}

// TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs> @ 142f2d7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  TTypeCompatibleBytes<SNumericEntryBox<int>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TIntrusiveReferenceController<SNumericEntryBox<int>,1> *pTVar8;
  TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs> *pTVar9;
  SNumericEntryBox<int> *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SNumericEntryBox<int> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = SharedPointerInternals::NewIntrusiveReferenceController<1,SNumericEntryBox<int>_>();
  pTVar1 = &pTVar8->ObjectStorage;
  if (pTVar1 == (TTypeCompatibleBytes<SNumericEntryBox<int>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs> *)(*pcVar6)();
      return pTVar9;
    }
  }
  else if (((*(longlong *)((pTVar8->ObjectStorage).Pad + 8) == 0) ||
           (lVar4 = *(longlong *)((pTVar8->ObjectStorage).Pad + 0x10), lVar4 == 0)) ||
          (*(int *)(lVar4 + 8) < 1)) {
    if (pTVar8 != (TIntrusiveReferenceController<SNumericEntryBox<int>,1> *)0x0) {
      LOCK();
      *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
      UNLOCK();
    }
    *(TTypeCompatibleBytes<SNumericEntryBox<int>_> **)((pTVar8->ObjectStorage).Pad + 8) = pTVar1;
    if (pTVar8 != *(TIntrusiveReferenceController<SNumericEntryBox<int>,1> **)
                   ((pTVar8->ObjectStorage).Pad + 0x10)) {
      if (pTVar8 != (TIntrusiveReferenceController<SNumericEntryBox<int>,1> *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)&pTVar8->_padding_ + 4);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      plVar5 = *(longlong **)((pTVar8->ObjectStorage).Pad + 0x10);
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
      *(TIntrusiveReferenceController<SNumericEntryBox<int>,1> **)
       ((pTVar8->ObjectStorage).Pad + 0x10) = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar8);
  }
  if (pTVar8 != (TIntrusiveReferenceController<SNumericEntryBox<int>,1> *)0x0) {
    LOCK();
    *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
    UNLOCK();
  }
  local_28 = (SNumericEntryBox<int> *)pTVar1;
  local_20.ReferenceController = (TReferenceControllerBase<1> *)pTVar8;
  if (this != (TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = (SNumericEntryBox<int> *)pTVar1;
    local_28 = (SNumericEntryBox<int> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar8);
  if (((this->_Widget).Object == (SNumericEntryBox<int> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs> *)(*pcVar6)();
    return pTVar9;
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x490);
  return this;
}

// TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs> @ 142f2d980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  uchar *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TIntrusiveReferenceController<SNumericEntryBox<float>,1> *pTVar7;
  TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs> *pTVar8;
  undefined1 local_38 [24];
  TIntrusiveReferenceController<SNumericEntryBox<float>,1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SNumericEntryBox<float> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = SharedPointerInternals::NewIntrusiveReferenceController<1,SNumericEntryBox<float>_>();
  local_38._16_8_ = &pTVar7->ObjectStorage;
  pTStack_20 = pTVar7;
  if ((TTypeCompatibleBytes<SNumericEntryBox<float>_> *)local_38._16_8_ ==
      (TTypeCompatibleBytes<SNumericEntryBox<float>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs> *)(*pcVar5)();
      return pTVar8;
    }
  }
  else {
    puVar1 = (pTVar7->ObjectStorage).Pad + 0x10;
    if (((*(longlong *)((pTVar7->ObjectStorage).Pad + 8) == 0) || (*(longlong *)puVar1 == 0)) ||
       (*(int *)(*(longlong *)puVar1 + 8) < 1)) {
      if (pTVar7 != (TIntrusiveReferenceController<SNumericEntryBox<float>,1> *)0x0) {
        LOCK();
        *(int *)&pTVar7->_padding_ = (int)pTVar7->_padding_ + 1;
        UNLOCK();
      }
      *(undefined8 *)((pTVar7->ObjectStorage).Pad + 8) = local_38._16_8_;
      if (pTVar7 != *(TIntrusiveReferenceController<SNumericEntryBox<float>,1> **)puVar1) {
        if (pTVar7 != (TIntrusiveReferenceController<SNumericEntryBox<float>,1> *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)&pTVar7->_padding_ + 4);
          *piVar2 = *piVar2 + 1;
          UNLOCK();
        }
        plVar4 = *(longlong **)puVar1;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        *(TIntrusiveReferenceController<SNumericEntryBox<float>,1> **)puVar1 = pTVar7;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pTVar7);
    }
  }
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TIntrusiveReferenceController<SNumericEntryBox<float>,1> *)0x0) {
    LOCK();
    *(int *)&pTStack_20->_padding_ = (int)pTStack_20->_padding_ + 1;
    UNLOCK();
  }
  if (this != (TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SNumericEntryBox<float> *)local_38._16_8_;
    local_38._0_8_ = (SNumericEntryBox<float> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SNumericEntryBox<float>,1>::~TSharedPtr<SNumericEntryBox<float>,1>
            ((TSharedPtr<SNumericEntryBox<float>,1> *)local_38);
  TSharedRef<SNumericEntryBox<float>,1>::~TSharedRef<SNumericEntryBox<float>,1>
            ((TSharedRef<SNumericEntryBox<float>,1> *)(local_38 + 0x10));
  if (((this->_Widget).Object == (SNumericEntryBox<float> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs> *)(*pcVar5)();
    return pTVar8;
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x490);
  return this;
}

// TSlateDecl<SNumericEntryBox<double>,RequiredArgs::T0RequiredArgs> @ 142f2db30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSlateDecl<SNumericEntryBox<double>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SNumericEntryBox<double>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SNumericEntryBox<double>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNumericEntryBox<double>,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  TTypeCompatibleBytes<SNumericEntryBox<double>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TIntrusiveReferenceController<SNumericEntryBox<double>,1> *pTVar8;
  TSlateDecl<SNumericEntryBox<double>,RequiredArgs::T0RequiredArgs> *pTVar9;
  SNumericEntryBox<double> *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SNumericEntryBox<double> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = SharedPointerInternals::NewIntrusiveReferenceController<1,SNumericEntryBox<double>_>();
  pTVar1 = &pTVar8->ObjectStorage;
  if (pTVar1 == (TTypeCompatibleBytes<SNumericEntryBox<double>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSlateDecl<SNumericEntryBox<double>,RequiredArgs::T0RequiredArgs> *)(*pcVar6)();
      return pTVar9;
    }
  }
  else if (((*(longlong *)((pTVar8->ObjectStorage).Pad + 8) == 0) ||
           (lVar4 = *(longlong *)((pTVar8->ObjectStorage).Pad + 0x10), lVar4 == 0)) ||
          (*(int *)(lVar4 + 8) < 1)) {
    if (pTVar8 != (TIntrusiveReferenceController<SNumericEntryBox<double>,1> *)0x0) {
      LOCK();
      *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
      UNLOCK();
    }
    *(TTypeCompatibleBytes<SNumericEntryBox<double>_> **)((pTVar8->ObjectStorage).Pad + 8) = pTVar1;
    if (pTVar8 != *(TIntrusiveReferenceController<SNumericEntryBox<double>,1> **)
                   ((pTVar8->ObjectStorage).Pad + 0x10)) {
      if (pTVar8 != (TIntrusiveReferenceController<SNumericEntryBox<double>,1> *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)&pTVar8->_padding_ + 4);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      plVar5 = *(longlong **)((pTVar8->ObjectStorage).Pad + 0x10);
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
      *(TIntrusiveReferenceController<SNumericEntryBox<double>,1> **)
       ((pTVar8->ObjectStorage).Pad + 0x10) = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar8);
  }
  if (pTVar8 != (TIntrusiveReferenceController<SNumericEntryBox<double>,1> *)0x0) {
    LOCK();
    *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
    UNLOCK();
  }
  local_28 = (SNumericEntryBox<double> *)pTVar1;
  local_20.ReferenceController = (TReferenceControllerBase<1> *)pTVar8;
  if (this != (TSlateDecl<SNumericEntryBox<double>,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = (SNumericEntryBox<double> *)pTVar1;
    local_28 = (SNumericEntryBox<double> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar8);
  if (((this->_Widget).Object == (SNumericEntryBox<double> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TSlateDecl<SNumericEntryBox<double>,RequiredArgs::T0RequiredArgs> *)(*pcVar6)();
    return pTVar9;
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x4a0);
  return this;
}

// TSlateDecl<SSegmentedControl<int>,RequiredArgs::T0RequiredArgs> @ 142f2dcd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SSegmentedControl<int>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SSegmentedControl<int>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SSegmentedControl<int>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSegmentedControl<int>,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  SCompoundWidget *this_00;
  int *piVar1;
  SCompoundWidget *pSVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSlateDecl<SSegmentedControl<int>,RequiredArgs::T0RequiredArgs> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  SSegmentedControl<int> *pSVar10;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SSegmentedControl<int> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar7 = ::operator_new(0x388);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar10 = (SSegmentedControl<int> *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    this_00 = (SCompoundWidget *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SSegmentedControl_H___00_SharedPointerInternals__6B_
    ;
    SCompoundWidget::SCompoundWidget(this_00);
    this_00->_padding_ = (longlong)&___7__SSegmentedControl_H__6B_;
    pTVar7[0x2c]._padding_ = (longlong)this_00;
    *(undefined ***)&pTVar7[0x2b].SharedReferenceCount = &___7FChildren__6B_;
    ::FName::FName((FName *)&pTVar7[0x2c].SharedReferenceCount,"Children");
    *(undefined2 *)&pTVar7[0x2d]._padding_ = 0xdc00;
    pSVar2 = (SCompoundWidget *)(pTVar7 + 0x33);
    *(undefined ***)&pTVar7[0x2b].SharedReferenceCount =
         &___7__TPanelChildren_UFSlot___SSegmentedControl_H____6B_;
    pTVar7[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x2e]._padding_ = 0;
    pTVar7[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x2f]._padding_ = 0;
    pTVar7[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x30]._padding_ = 0;
    pTVar7[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x30].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0x31]._padding_ = 0;
    pTVar7[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x31].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x32]._padding_ = 0;
    pTVar7[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pSVar2->_padding_ = 0;
    pTVar7[0x33].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x33].WeakReferenceCount = (atomic<int>)0x0;
    if ((pSVar2 < this_00) || (&pTVar7[0x38].SharedReferenceCount <= pSVar2)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                         ,0x15,
                         L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSlateDecl<SSegmentedControl<int>,RequiredArgs::T0RequiredArgs> *)(*pcVar5)();
        return pTVar8;
      }
    }
    *(undefined1 *)&pTVar7[0x35]._padding_ = 0;
    pTVar7[0x34]._padding_ = 0;
    pTVar7[0x34].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x34].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x36].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x35].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x36]._padding_ = 0;
    pTVar7[0x36].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0x38]._padding_ = 0;
    *(undefined2 *)((longlong)&pTVar7[0x38]._padding_ + 4) = 0;
    *(undefined1 *)((longlong)&pTVar7[0x38]._padding_ + 6) = 0;
    pSVar10 = (SSegmentedControl<int> *)(pTVar7 + 1);
    pTVar9 = pTVar7;
    local_38._16_8_ = pSVar10;
    pTStack_20 = pTVar7;
    if (pSVar10 == (SSegmentedControl<int> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSlateDecl<SSegmentedControl<int>,RequiredArgs::T0RequiredArgs> *)(*pcVar5)();
        return pTVar8;
      }
      goto LAB_142f2df1c;
    }
  }
  if (((pSVar10->_padding_ == 0) || (pSVar10->_padding_ == 0)) ||
     (*(int *)(pSVar10->_padding_ + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar10->_padding_ = (longlong)pSVar10;
    if (pTVar9 != (TReferenceControllerBase<1> *)pSVar10->_padding_) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pSVar10->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pSVar10->_padding_ = (longlong)pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_142f2df1c:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SSegmentedControl<int>,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SSegmentedControl<int> *)local_38._16_8_;
    local_38._0_8_ = (SSegmentedControl<int> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SSegmentedControl<int>,1>::~TSharedPtr<SSegmentedControl<int>,1>
            ((TSharedPtr<SSegmentedControl<int>,1> *)local_38);
  TSharedRef<SSegmentedControl<int>,1>::~TSharedRef<SSegmentedControl<int>,1>
            ((TSharedRef<SSegmentedControl<int>,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SSegmentedControl<int> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSlateDecl<SSegmentedControl<int>,RequiredArgs::T0RequiredArgs> *)(*pcVar5)();
      return pTVar8;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x378);
  return this;
}

// TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs> @ 142f2dff0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs> *pTVar7;
  SSpinBox<int> *pSVar8;
  SSpinBox<int> *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SSpinBox<int> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x710);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SSpinBox<int> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__SSpinBox_H___00_SharedPointerInternals__6B_;
    SSpinBox<int>::SSpinBox<int>((SSpinBox<int> *)(pTVar6 + 1));
    pSVar8 = (SSpinBox<int> *)(pTVar6 + 1);
    if (pSVar8 == (SSpinBox<int> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142f2e10f;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_142f2e10f:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SSpinBox<int> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SSpinBox<int> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x700);
  return this;
}

// TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs> @ 142f2e1d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs> *pTVar7;
  SSpinBox<double> *pSVar8;
  SSpinBox<double> *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SSpinBox<double> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x758);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SSpinBox<double> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__SSpinBox_N___00_SharedPointerInternals__6B_;
    SSpinBox<double>::SSpinBox<double>((SSpinBox<double> *)(pTVar6 + 1));
    pSVar8 = (SSpinBox<double> *)(pTVar6 + 1);
    if (pSVar8 == (SSpinBox<double> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142f2e2ef;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_142f2e2ef:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SSpinBox<double> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SSpinBox<double> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x748);
  return this;
}

// TSlateDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> @ 142f2e3b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *pTVar7;
  STileView<TSharedPtr<int,1>_> *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (STileView<TSharedPtr<int,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0xa20);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (STileView<TSharedPtr<int,1>_> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STileView_V__TSharedPtr_H_00_____00_SharedPointerInternals__6B_
    ;
    SListView<TSharedPtr<int,1>_>::SListView<TSharedPtr<int,1>_>
              ((SListView<TSharedPtr<int,1>_> *)(pTVar6 + 1),Tile);
    *(undefined1 *)&pTVar6[0xa1]._padding_ = 1;
    pTVar6[1]._padding_ = (longlong)&STileView<TSharedPtr<int,1>_>::_vftable__for__SCompoundWidget__
    ;
    pSVar8 = (STileView<TSharedPtr<int,1>_> *)(pTVar6 + 1);
    *(undefined ***)&pTVar6[0x2b].SharedReferenceCount =
         &STileView<TSharedPtr<int,1>_>::_vftable__for__IScrollableWidget__;
    *(undefined ***)&pTVar6[0x59].SharedReferenceCount = &___7__STileView_V__TSharedPtr_H_00____6B_;
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (STileView<TSharedPtr<int,1>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *)
                 (*pcVar4)();
        return pTVar7;
      }
      goto LAB_142f2e50b;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(STileView<TSharedPtr<int,1>_> **)&pSVar8->field_0x8 = pSVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pSVar8->field_0x10) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pSVar8->field_0x10;
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
      *(TReferenceControllerBase<1> **)&pSVar8->field_0x10 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_142f2e50b:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (STileView<TSharedPtr<int,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STileView<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<STileView<TSharedPtr<int,1>_>,1>::~TSharedPtr<STileView<TSharedPtr<int,1>_>,1>
            ((TSharedPtr<STileView<TSharedPtr<int,1>_>,1> *)local_38);
  TSharedRef<STileView<TSharedPtr<int,1>_>,1>::~TSharedRef<STileView<TSharedPtr<int,1>_>,1>
            ((TSharedRef<STileView<TSharedPtr<int,1>_>,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (STileView<TSharedPtr<int,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *)(*pcVar4)()
      ;
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0xa10);
  return this;
}

// TSlateDecl<STileView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> @ 142f2e5e0

TSlateDecl<STileView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<STileView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<STileView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STileView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<STileView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> *pTVar7;
  STileView<TSharedPtr<FTestData,1>_> *pSVar8;
  STileView<TSharedPtr<FTestData,1>_> *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (STileView<TSharedPtr<FTestData,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0xa20);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (STileView<TSharedPtr<FTestData,1>_> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STileView_V__TSharedPtr_VFTestData___00_____00_SharedPointerInternals__6B_
    ;
    SListView<TSharedPtr<FTestData,1>_>::SListView<TSharedPtr<FTestData,1>_>
              ((SListView<TSharedPtr<FTestData,1>_> *)(pTVar6 + 1),Tile);
    *(undefined1 *)&pTVar6[0xa1]._padding_ = 1;
    pTVar6[1]._padding_ =
         (longlong)&STileView<TSharedPtr<FTestData,1>_>::_vftable__for__SCompoundWidget__;
    pSVar8 = (STileView<TSharedPtr<FTestData,1>_> *)(pTVar6 + 1);
    *(undefined ***)&pTVar6[0x2b].SharedReferenceCount =
         &STileView<TSharedPtr<FTestData,1>_>::_vftable__for__IScrollableWidget__;
    *(undefined ***)&pTVar6[0x59].SharedReferenceCount =
         &___7__STileView_V__TSharedPtr_VFTestData___00____6B_;
    if (pSVar8 == (STileView<TSharedPtr<FTestData,1>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<STileView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> *)
                 (*pcVar4)();
        return pTVar7;
      }
      goto LAB_142f2e736;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(STileView<TSharedPtr<FTestData,1>_> **)&pSVar8->field_0x8 = pSVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pSVar8->field_0x10) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pSVar8->field_0x10;
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
      *(TReferenceControllerBase<1> **)&pSVar8->field_0x10 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_142f2e736:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<STileView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> *)
              &local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (STileView<TSharedPtr<FTestData,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (STileView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<STileView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> *)
               (*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0xa10);
  return this;
}

// TSlateDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> @ 142f2e800

TSlateDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  uchar *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TIntrusiveReferenceController<STreeView<TSharedPtr<int,1>_>,1> *pTVar7;
  TSlateDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *pTVar8;
  undefined1 local_38 [24];
  TIntrusiveReferenceController<STreeView<TSharedPtr<int,1>_>,1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (STreeView<TSharedPtr<int,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = SharedPointerInternals::NewIntrusiveReferenceController<1,STreeView<TSharedPtr<int,1>_>_>
                     ();
  local_38._16_8_ = &pTVar7->ObjectStorage;
  pTStack_20 = pTVar7;
  if ((TTypeCompatibleBytes<STreeView<TSharedPtr<int,1>_>_> *)local_38._16_8_ ==
      (TTypeCompatibleBytes<STreeView<TSharedPtr<int,1>_>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSlateDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *)(*pcVar5)()
      ;
      return pTVar8;
    }
  }
  else {
    puVar1 = (pTVar7->ObjectStorage).Pad + 0x10;
    if (((*(longlong *)((pTVar7->ObjectStorage).Pad + 8) == 0) || (*(longlong *)puVar1 == 0)) ||
       (*(int *)(*(longlong *)puVar1 + 8) < 1)) {
      if (pTVar7 != (TIntrusiveReferenceController<STreeView<TSharedPtr<int,1>_>,1> *)0x0) {
        LOCK();
        *(int *)&pTVar7->_padding_ = (int)pTVar7->_padding_ + 1;
        UNLOCK();
      }
      *(undefined8 *)((pTVar7->ObjectStorage).Pad + 8) = local_38._16_8_;
      if (pTVar7 != *(TIntrusiveReferenceController<STreeView<TSharedPtr<int,1>_>,1> **)puVar1) {
        if (pTVar7 != (TIntrusiveReferenceController<STreeView<TSharedPtr<int,1>_>,1> *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)&pTVar7->_padding_ + 4);
          *piVar2 = *piVar2 + 1;
          UNLOCK();
        }
        plVar4 = *(longlong **)puVar1;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        *(TIntrusiveReferenceController<STreeView<TSharedPtr<int,1>_>,1> **)puVar1 = pTVar7;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pTVar7);
    }
  }
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TIntrusiveReferenceController<STreeView<TSharedPtr<int,1>_>,1> *)0x0) {
    LOCK();
    *(int *)&pTStack_20->_padding_ = (int)pTStack_20->_padding_ + 1;
    UNLOCK();
  }
  if (this != (TSlateDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (STreeView<TSharedPtr<int,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STreeView<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<STreeView<TSharedPtr<int,1>_>,1>::~TSharedPtr<STreeView<TSharedPtr<int,1>_>,1>
            ((TSharedPtr<STreeView<TSharedPtr<int,1>_>,1> *)local_38);
  TSharedRef<STreeView<TSharedPtr<int,1>_>,1>::~TSharedRef<STreeView<TSharedPtr<int,1>_>,1>
            ((TSharedRef<STreeView<TSharedPtr<int,1>_>,1> *)(local_38 + 0x10));
  if (((this->_Widget).Object == (STreeView<TSharedPtr<int,1>_> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSlateDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *)(*pcVar5)();
    return pTVar8;
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0xb00);
  return this;
}

// TSlateDecl<STreeView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> @ 142f2e9b0

TSlateDecl<STreeView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<STreeView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<STreeView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STreeView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  TTypeCompatibleBytes<STreeView<TSharedPtr<FTestData,1>_>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TIntrusiveReferenceController<STreeView<TSharedPtr<FTestData,1>_>,1> *pTVar8;
  TSlateDecl<STreeView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> *pTVar9;
  STreeView<TSharedPtr<FTestData,1>_> *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (STreeView<TSharedPtr<FTestData,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = SharedPointerInternals::
           NewIntrusiveReferenceController<1,STreeView<TSharedPtr<FTestData,1>_>_>();
  pTVar1 = &pTVar8->ObjectStorage;
  if (pTVar1 == (TTypeCompatibleBytes<STreeView<TSharedPtr<FTestData,1>_>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSlateDecl<STreeView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> *)
               (*pcVar6)();
      return pTVar9;
    }
  }
  else if (((*(longlong *)((pTVar8->ObjectStorage).Pad + 8) == 0) ||
           (lVar4 = *(longlong *)((pTVar8->ObjectStorage).Pad + 0x10), lVar4 == 0)) ||
          (*(int *)(lVar4 + 8) < 1)) {
    if (pTVar8 != (TIntrusiveReferenceController<STreeView<TSharedPtr<FTestData,1>_>,1> *)0x0) {
      LOCK();
      *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
      UNLOCK();
    }
    *(TTypeCompatibleBytes<STreeView<TSharedPtr<FTestData,1>_>_> **)
     ((pTVar8->ObjectStorage).Pad + 8) = pTVar1;
    if (pTVar8 != *(TIntrusiveReferenceController<STreeView<TSharedPtr<FTestData,1>_>,1> **)
                   ((pTVar8->ObjectStorage).Pad + 0x10)) {
      if (pTVar8 != (TIntrusiveReferenceController<STreeView<TSharedPtr<FTestData,1>_>,1> *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)&pTVar8->_padding_ + 4);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      plVar5 = *(longlong **)((pTVar8->ObjectStorage).Pad + 0x10);
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
      *(TIntrusiveReferenceController<STreeView<TSharedPtr<FTestData,1>_>,1> **)
       ((pTVar8->ObjectStorage).Pad + 0x10) = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar8);
  }
  if (pTVar8 != (TIntrusiveReferenceController<STreeView<TSharedPtr<FTestData,1>_>,1> *)0x0) {
    LOCK();
    *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
    UNLOCK();
  }
  local_28 = (STreeView<TSharedPtr<FTestData,1>_> *)pTVar1;
  local_20.ReferenceController = (TReferenceControllerBase<1> *)pTVar8;
  if (this != (TSlateDecl<STreeView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> *)
              &local_28) {
    (this->_Widget).Object = (STreeView<TSharedPtr<FTestData,1>_> *)pTVar1;
    local_28 = (STreeView<TSharedPtr<FTestData,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar8);
  if (((this->_Widget).Object == (STreeView<TSharedPtr<FTestData,1>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TSlateDecl<STreeView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> *)
             (*pcVar6)();
    return pTVar9;
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0xb00);
  return this;
}

// TSlateDecl<SColorGradingWheel,RequiredArgs::T0RequiredArgs> @ 142f2eb50

TSlateDecl<SColorGradingWheel,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SColorGradingWheel,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SColorGradingWheel,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SColorGradingWheel,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SColorGradingWheel,RequiredArgs::T0RequiredArgs> *pTVar7;
  SColorGradingWheel *pSVar8;
  SColorGradingWheel *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SColorGradingWheel *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2a0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SColorGradingWheel *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSColorGradingWheel___00_SharedPointerInternals__6B_;
    SColorGradingWheel::SColorGradingWheel((SColorGradingWheel *)(pTVar6 + 1));
    pSVar8 = (SColorGradingWheel *)(pTVar6 + 1);
    if (pSVar8 == (SColorGradingWheel *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SColorGradingWheel,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142f2ec6f;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_142f2ec6f:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SColorGradingWheel,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SColorGradingWheel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SColorGradingWheel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SColorGradingWheel,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x290);
  return this;
}

// TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs> @ 142f2ed30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  uchar *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TIntrusiveReferenceController<SColorPicker,1> *pTVar7;
  TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs> *pTVar8;
  undefined1 local_38 [24];
  TIntrusiveReferenceController<SColorPicker,1> *local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SColorPicker *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = SharedPointerInternals::NewIntrusiveReferenceController<1,SColorPicker>();
  local_38._16_8_ = &pTVar7->ObjectStorage;
  local_20 = pTVar7;
  if ((TTypeCompatibleBytes<SColorPicker> *)local_38._16_8_ ==
      (TTypeCompatibleBytes<SColorPicker> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs> *)(*pcVar5)();
      return pTVar8;
    }
  }
  else {
    puVar1 = (pTVar7->ObjectStorage).Pad + 0x10;
    if (((*(longlong *)((pTVar7->ObjectStorage).Pad + 8) == 0) || (*(longlong *)puVar1 == 0)) ||
       (*(int *)(*(longlong *)puVar1 + 8) < 1)) {
      if (pTVar7 != (TIntrusiveReferenceController<SColorPicker,1> *)0x0) {
        LOCK();
        *(int *)&pTVar7->_padding_ = (int)pTVar7->_padding_ + 1;
        UNLOCK();
      }
      *(undefined8 *)((pTVar7->ObjectStorage).Pad + 8) = local_38._16_8_;
      if (pTVar7 != *(TIntrusiveReferenceController<SColorPicker,1> **)puVar1) {
        if (pTVar7 != (TIntrusiveReferenceController<SColorPicker,1> *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)&pTVar7->_padding_ + 4);
          *piVar2 = *piVar2 + 1;
          UNLOCK();
        }
        plVar4 = *(longlong **)puVar1;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        *(TIntrusiveReferenceController<SColorPicker,1> **)puVar1 = pTVar7;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pTVar7);
    }
  }
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = local_20;
  if (local_20 != (TIntrusiveReferenceController<SColorPicker,1> *)0x0) {
    LOCK();
    *(int *)&local_20->_padding_ = (int)local_20->_padding_ + 1;
    UNLOCK();
  }
  if (this != (TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SColorPicker *)local_38._16_8_;
    local_38._0_8_ = (SColorPicker *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  TSharedRef<SColorPicker,1>::~TSharedRef<SColorPicker,1>
            ((TSharedRef<SColorPicker,1> *)(local_38 + 0x10));
  if (((this->_Widget).Object == (SColorPicker *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs> *)(*pcVar5)();
    return pTVar8;
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x470);
  return this;
}

// TSlateDecl<SColorSlider,RequiredArgs::T0RequiredArgs> @ 142f2eee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SColorSlider,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SColorSlider,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SColorSlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SColorSlider,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SColorSlider,RequiredArgs::T0RequiredArgs> *pTVar7;
  SColorSlider *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SColorSlider *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x310);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SColorSlider *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSColorSlider___00_SharedPointerInternals__6B_;
    SColorSlider::SColorSlider((SColorSlider *)(pTVar6 + 1));
    pSVar8 = (SColorSlider *)(pTVar6 + 1);
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SColorSlider *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SColorSlider,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142f2f004;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_142f2f004:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SColorSlider,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SColorSlider *)local_38._16_8_;
    local_38._0_8_ = (SColorSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SColorSlider,1>::~TSharedPtr<SColorSlider,1>((TSharedPtr<SColorSlider,1> *)local_38);
  TSharedRef<SColorSlider,1>::~TSharedRef<SColorSlider,1>
            ((TSharedRef<SColorSlider,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SColorSlider *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SColorSlider,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x300);
  return this;
}

// TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs> @ 142f2f0d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2
          ,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs> *pTVar7;
  SColorSpectrum *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SColorSpectrum *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2c0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SColorSpectrum *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSColorSpectrum___00_SharedPointerInternals__6B_;
    SColorSpectrum::SColorSpectrum((SColorSpectrum *)(pTVar6 + 1));
    pSVar8 = (SColorSpectrum *)(pTVar6 + 1);
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SColorSpectrum *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142f2f1f4;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_142f2f1f4:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SColorSpectrum *)local_38._16_8_;
    local_38._0_8_ = (SColorSpectrum *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SColorSpectrum,1>::~TSharedPtr<SColorSpectrum,1>
            ((TSharedPtr<SColorSpectrum,1> *)local_38);
  TSharedRef<SColorSpectrum,1>::~TSharedRef<SColorSpectrum,1>
            ((TSharedRef<SColorSpectrum,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SColorSpectrum *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2b0);
  return this;
}

// TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs> @ 142f2f2c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs> *pTVar7;
  SColorWheel *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SColorWheel *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2c0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SColorWheel *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSColorWheel___00_SharedPointerInternals__6B_;
    SColorWheel::SColorWheel((SColorWheel *)(pTVar6 + 1));
    pSVar8 = (SColorWheel *)(pTVar6 + 1);
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SColorWheel *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142f2f3e4;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_142f2f3e4:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SColorWheel *)local_38._16_8_;
    local_38._0_8_ = (SColorWheel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  TSharedRef<SColorWheel,1>::~TSharedRef<SColorWheel,1>
            ((TSharedRef<SColorWheel,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SColorWheel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2b0);
  return this;
}

// TSlateDecl<SExampleLayout,RequiredArgs::T0RequiredArgs> @ 142f2f4b0

TSlateDecl<SExampleLayout,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SExampleLayout,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SExampleLayout,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SExampleLayout,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2
          ,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SExampleLayout,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SExampleLayout *pSVar9;
  SExampleLayout *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SExampleLayout *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x2c8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SExampleLayout *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSExampleLayout___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x2b8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SExampleLayout__6B_;
    pSVar9 = (SExampleLayout *)(pTVar6 + 1);
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SExampleLayout *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SExampleLayout,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142f2f5f8;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
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
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_142f2f5f8:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SExampleLayout,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SExampleLayout *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SExampleLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SExampleLayout,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2b8);
  return this;
}

// TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>_&&>_> @ 142f2f6c0

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>_&&>_>
* __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>_&&>_>
::
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>_&&>_>
          (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>_&&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>_&&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>_&&>_>
  *pTVar7;
  SExpanderArrow *pSVar8;
  SExpanderArrow *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SExpanderArrow *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SExpanderArrow *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSExpanderArrow___00_SharedPointerInternals__6B_;
    SExpanderArrow::SExpanderArrow((SExpanderArrow *)(pTVar6 + 1));
    pSVar8 = (SExpanderArrow *)(pTVar6 + 1);
    if (pSVar8 == (SExpanderArrow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>_&&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142f2f7df;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_142f2f7df:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>_&&>_>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SExpanderArrow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>_&&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e0);
  return this;
}

// TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>_&&>_> @ 142f2f8a0

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1>_&&>_>
* __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>_&&>_>
::
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>_&&>_>
          (void *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1>_&&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1>_&&>_>
  *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *local_28;
  FSharedReferencer<1> local_20;
  
  *(T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1>_&&> **)
   ((longlong)this + 0x10) = param_4;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  pTVar7 = ::operator_new(0x2f0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSExpanderArrow___00_SharedPointerInternals__6B_;
    SExpanderArrow::SExpanderArrow((SExpanderArrow *)(pTVar7 + 1));
    pTVar9 = pTVar7 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1>_&&>_>
                  *)(*pcVar5)();
        return pTVar8;
      }
      goto LAB_142f2f9bf;
    }
  }
  lVar3._0_4_ = pTVar9->SharedReferenceCount;
  lVar3._4_4_ = pTVar9->WeakReferenceCount;
  if (((lVar3 == 0) || (pTVar9[1]._padding_ == 0)) || (*(int *)(pTVar9[1]._padding_ + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar9->SharedReferenceCount = pTVar9;
    if (pTVar7 != (TReferenceControllerBase<1> *)pTVar9[1]._padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pTVar9[1]._padding_;
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
      pTVar9[1]._padding_ = (longlong)pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_142f2f9bf:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pTVar9;
  local_20.ReferenceController = pTVar7;
  if (this != &local_28) {
    *(TReferenceControllerBase<1> **)this = pTVar9;
    local_28 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)this + 8),&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (*(longlong *)this == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1>_&&>_>
                *)(*pcVar5)();
      return pTVar8;
    }
  }
  SWidget::SetDebugInfo(*(SWidget **)this,param_1,param_2,param_3,0x2e0);
  return this;
}

// TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SItemEditor,1>_&&>_> @ 142f2fa80

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SItemEditor,1>_&&>_> * __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SItemEditor,1>_&&>_>::
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SItemEditor,1>_&&>_>
          (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SItemEditor,1>_&&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<SItemEditor,1>_&&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SItemEditor,1>_&&>_> *pTVar7;
  SExpanderArrow *pSVar8;
  SExpanderArrow *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SExpanderArrow *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SExpanderArrow *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSExpanderArrow___00_SharedPointerInternals__6B_;
    SExpanderArrow::SExpanderArrow((SExpanderArrow *)(pTVar6 + 1));
    pSVar8 = (SExpanderArrow *)(pTVar6 + 1);
    if (pSVar8 == (SExpanderArrow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SItemEditor,1>_&&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142f2fb9f;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_142f2fb9f:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SItemEditor,1>_&&>_>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SExpanderArrow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SItemEditor,1>_&&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e0);
  return this;
}

// TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs> @ 142f2fc60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs> *pTVar6;
  SEyeDropperButton *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SEyeDropperButton *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTStack_20 = ::operator_new(0x548);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar7 = (SEyeDropperButton *)&DAT_00000010;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSEyeDropperButton___00_SharedPointerInternals__6B_;
    memset(pTStack_20 + 1,0,0x538);
    SButton::SButton((SButton *)(pTStack_20 + 1));
    pSVar7 = (SEyeDropperButton *)(pTStack_20 + 1);
    pTStack_20[1]._padding_ = (longlong)&___7SEyeDropperButton__6B_;
    pTStack_20[0x4c]._padding_ = 0;
    pTStack_20[0x4c].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x4c].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTStack_20[0x4d]._padding_ = 0;
    pTStack_20[0x4d].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x4d].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x4e]._padding_ = 0;
    pTStack_20[0x4e].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x4f]._padding_ = 0;
    pTStack_20[0x4f].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x4f].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTStack_20[0x50]._padding_ = 0;
    pTStack_20[0x50].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTStack_20[0x50].WeakReferenceCount = 0;
    pTStack_20[0x52]._padding_ = 0;
    pTStack_20[0x51]._padding_ = 0;
    pTStack_20[0x51].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x51].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTStack_20[0x53].SharedReferenceCount = 0;
    pTVar8 = pTStack_20;
    local_38._16_8_ = pSVar7;
    if (pSVar7 == (SEyeDropperButton *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar6;
      }
      goto LAB_142f2fe0c;
    }
  }
  if (((pSVar7->_padding_ == 0) || (pSVar7->_padding_ == 0)) ||
     (*(int *)(pSVar7->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar7->_padding_ = (longlong)pSVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar7->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar7->_padding_;
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
      pSVar7->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_142f2fe0c:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SEyeDropperButton *)local_38._16_8_;
    local_38._0_8_ = (SEyeDropperButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SEyeDropperButton,1>::~TSharedPtr<SEyeDropperButton,1>
            ((TSharedPtr<SEyeDropperButton,1> *)local_38);
  TSharedRef<SEyeDropperButton,1>::~TSharedRef<SEyeDropperButton,1>
            ((TSharedRef<SEyeDropperButton,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SEyeDropperButton *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar6;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x538);
  return this;
}

// TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs> @ 142f2fee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs> *pTVar7;
  SFxWidget *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SFxWidget *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SFxWidget *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VSFxWidget___00_SharedPointerInternals__6B_;
    SFxWidget::SFxWidget((SFxWidget *)(pTVar6 + 1));
    pSVar8 = (SFxWidget *)(pTVar6 + 1);
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SFxWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142f30004;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_142f30004:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SFxWidget *)local_38._16_8_;
    local_38._0_8_ = (SFxWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SFxWidget,1>::~TSharedPtr<SFxWidget,1>((TSharedPtr<SFxWidget,1> *)local_38);
  TSharedRef<SFxWidget,1>::~TSharedRef<SFxWidget,1>((TSharedRef<SFxWidget,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SFxWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e0);
  return this;
}

// TSlateDecl<SHeader,RequiredArgs::T0RequiredArgs> @ 142f300d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SHeader,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SHeader,RequiredArgs::T0RequiredArgs>::TSlateDecl<SHeader,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SHeader,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SHeader,RequiredArgs::T0RequiredArgs> *pTVar7;
  SHeader *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SHeader *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x260);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SHeader *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VSHeader___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x250);
    SHorizontalBox::SHorizontalBox((SHorizontalBox *)(pTVar6 + 1));
    pSVar8 = (SHeader *)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7SHeader__6B_;
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SHeader *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SHeader,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142f30210;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SHeader **)&pSVar8->field_0x8 = pSVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pSVar8->field_0x10) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pSVar8->field_0x10;
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
      *(TReferenceControllerBase<1> **)&pSVar8->field_0x10 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_142f30210:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SHeader,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SHeader *)local_38._16_8_;
    local_38._0_8_ = (SHeader *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SHeader,1>::~TSharedPtr<SHeader,1>((TSharedPtr<SHeader,1> *)local_38);
  TSharedRef<SHeader,1>::~TSharedRef<SHeader,1>((TSharedRef<SHeader,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SHeader *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SHeader,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x250);
  return this;
}

// TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs> @ 142f302e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  uchar *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TIntrusiveReferenceController<SInlineEditableTextBlock,1> *pTVar7;
  TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs> *pTVar8;
  undefined1 local_38 [24];
  TIntrusiveReferenceController<SInlineEditableTextBlock,1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SInlineEditableTextBlock *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = SharedPointerInternals::NewIntrusiveReferenceController<1,SInlineEditableTextBlock>();
  local_38._16_8_ = &pTVar7->ObjectStorage;
  pTStack_20 = pTVar7;
  if ((TTypeCompatibleBytes<SInlineEditableTextBlock> *)local_38._16_8_ ==
      (TTypeCompatibleBytes<SInlineEditableTextBlock> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs> *)(*pcVar5)();
      return pTVar8;
    }
  }
  else {
    puVar1 = (pTVar7->ObjectStorage).Pad + 0x10;
    if (((*(longlong *)((pTVar7->ObjectStorage).Pad + 8) == 0) || (*(longlong *)puVar1 == 0)) ||
       (*(int *)(*(longlong *)puVar1 + 8) < 1)) {
      if (pTVar7 != (TIntrusiveReferenceController<SInlineEditableTextBlock,1> *)0x0) {
        LOCK();
        *(int *)&pTVar7->_padding_ = (int)pTVar7->_padding_ + 1;
        UNLOCK();
      }
      *(undefined8 *)((pTVar7->ObjectStorage).Pad + 8) = local_38._16_8_;
      if (pTVar7 != *(TIntrusiveReferenceController<SInlineEditableTextBlock,1> **)puVar1) {
        if (pTVar7 != (TIntrusiveReferenceController<SInlineEditableTextBlock,1> *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)&pTVar7->_padding_ + 4);
          *piVar2 = *piVar2 + 1;
          UNLOCK();
        }
        plVar4 = *(longlong **)puVar1;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        *(TIntrusiveReferenceController<SInlineEditableTextBlock,1> **)puVar1 = pTVar7;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pTVar7);
    }
  }
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TIntrusiveReferenceController<SInlineEditableTextBlock,1> *)0x0) {
    LOCK();
    *(int *)&pTStack_20->_padding_ = (int)pTStack_20->_padding_ + 1;
    UNLOCK();
  }
  if (this != (TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SInlineEditableTextBlock *)local_38._16_8_;
    local_38._0_8_ = (SInlineEditableTextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SInlineEditableTextBlock,1>::~TSharedPtr<SInlineEditableTextBlock,1>
            ((TSharedPtr<SInlineEditableTextBlock,1> *)local_38);
  TSharedRef<SInlineEditableTextBlock,1>::~TSharedRef<SInlineEditableTextBlock,1>
            ((TSharedRef<SInlineEditableTextBlock,1> *)(local_38 + 0x10));
  if (((this->_Widget).Object == (SInlineEditableTextBlock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs> *)(*pcVar5)();
    return pTVar8;
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x428);
  return this;
}

// TSlateDecl<SStarshipGallery::SListGalleryWidget,RequiredArgs::T0RequiredArgs> @ 142f30490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SStarshipGallery::SListGalleryWidget,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SStarshipGallery::SListGalleryWidget,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SStarshipGallery::SListGalleryWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SStarshipGallery::SListGalleryWidget,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSlateDecl<SStarshipGallery::SListGalleryWidget,RequiredArgs::T0RequiredArgs> *pTVar6;
  SListGalleryWidget *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SListGalleryWidget *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTStack_20 = ::operator_new(0x338);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar7 = (SListGalleryWidget *)&DAT_00000010;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSListGalleryWidget_SStarshipGallery___00_SharedPointerInternals__6B_
    ;
    memset(pTStack_20 + 1,0,0x328);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTStack_20 + 1));
    pSVar7 = (SListGalleryWidget *)(pTStack_20 + 1);
    pTStack_20[1]._padding_ = (longlong)&___7SListGalleryWidget_SStarshipGallery__6B_;
    pTStack_20[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2c]._padding_ = 0;
    pTStack_20[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2d]._padding_ = 0;
    pTStack_20[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2e]._padding_ = 0;
    pTStack_20[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2f]._padding_ = 2;
    pTStack_20[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x30]._padding_ = 0;
    pTStack_20[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x30].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x31]._padding_ = 0;
    pTStack_20[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x31].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x32]._padding_ = 0;
    pTStack_20[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x32].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x33]._padding_ = 0;
    pTVar8 = pTStack_20;
    local_38._16_8_ = pSVar7;
    if (pSVar7 == (SListGalleryWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSlateDecl<SStarshipGallery::SListGalleryWidget,RequiredArgs::T0RequiredArgs> *)
                 (*pcVar4)();
        return pTVar6;
      }
      goto LAB_142f30647;
    }
  }
  if (((pSVar7->_padding_ == 0) || (pSVar7->_padding_ == 0)) ||
     (*(int *)(pSVar7->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar7->_padding_ = (longlong)pSVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar7->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar7->_padding_;
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
      pSVar7->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_142f30647:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SStarshipGallery::SListGalleryWidget,RequiredArgs::T0RequiredArgs> *)
              local_38) {
    (this->_Widget).Object = (SListGalleryWidget *)local_38._16_8_;
    local_38._0_8_ = (SListGalleryWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SStarshipGallery::SListGalleryWidget,1>::
  ~TSharedPtr<SStarshipGallery::SListGalleryWidget,1>
            ((TSharedPtr<SStarshipGallery::SListGalleryWidget,1> *)local_38);
  TSharedRef<SStarshipGallery::SListGalleryWidget,1>::
  ~TSharedRef<SStarshipGallery::SListGalleryWidget,1>
            ((TSharedRef<SStarshipGallery::SListGalleryWidget,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SListGalleryWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSlateDecl<SStarshipGallery::SListGalleryWidget,RequiredArgs::T0RequiredArgs> *)
               (*pcVar4)();
      return pTVar6;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x328);
  return this;
}

// TSlateDecl<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&,int_&,int_&>_> @ 142f30720

TSlateDecl<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&,int_&,int_&>_>
* __thiscall
TSlateDecl<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&,int_&,int_&>_>
::
TSlateDecl<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&,int_&,int_&>_>
          (TSlateDecl<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&,int_&,int_&>_>
           *this,char *param_1,char *param_2,int param_3,
          T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&,int_&,int_&>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&,int_&,int_&>_>
  *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SListViewPinnedRowWidget *pSVar9;
  SListViewPinnedRowWidget *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SListViewPinnedRowWidget *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x2d8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SListViewPinnedRowWidget *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSListViewPinnedRowWidget___SListView_V__TSharedPtr_H_00_____00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2c8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ =
         (longlong)&___7SListViewPinnedRowWidget___SListView_V__TSharedPtr_H_00____6B_;
    pSVar9 = (SListViewPinnedRowWidget *)(pTVar6 + 1);
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SListViewPinnedRowWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&,int_&,int_&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142f30876;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
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
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_142f30876:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&,int_&,int_&>_>
               *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SListViewPinnedRowWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SListViewPinnedRowWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&,int_&,int_&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2c8);
  return this;
}

// TSlateDecl<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&,int_&,int_&>_> @ 142f30940

TSlateDecl<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&,int_&,int_&>_>
* __thiscall
TSlateDecl<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&,int_&,int_&>_>
::
TSlateDecl<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&,int_&,int_&>_>
          (TSlateDecl<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&,int_&,int_&>_>
           *this,char *param_1,char *param_2,int param_3,
          T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&,int_&,int_&>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&,int_&,int_&>_>
  *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SListViewPinnedRowWidget *pSVar9;
  SListViewPinnedRowWidget *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SListViewPinnedRowWidget *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x2d8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SListViewPinnedRowWidget *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSListViewPinnedRowWidget___SListView_V__TSharedPtr_VFTestData___00_____00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2c8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ =
         (longlong)&___7SListViewPinnedRowWidget___SListView_V__TSharedPtr_VFTestData___00____6B_;
    pSVar9 = (SListViewPinnedRowWidget *)(pTVar6 + 1);
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SListViewPinnedRowWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&,int_&,int_&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142f30a96;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
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
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_142f30a96:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&,int_&,int_&>_>
               *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SListViewPinnedRowWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SListViewPinnedRowWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&,int_&,int_&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2c8);
  return this;
}

// TSlateDecl<SProgressBar,RequiredArgs::T0RequiredArgs> @ 142f30b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SProgressBar,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SProgressBar,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SProgressBar,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SProgressBar,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSlateDecl<SProgressBar,RequiredArgs::T0RequiredArgs> *pTVar6;
  SProgressBar *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SProgressBar *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTStack_20 = ::operator_new(0x2f8);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar7 = (SProgressBar *)&DAT_00000010;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSProgressBar___00_SharedPointerInternals__6B_;
    memset(pTStack_20 + 1,0,0x2e8);
    SLeafWidget::SLeafWidget((SLeafWidget *)(pTStack_20 + 1));
    pSVar7 = (SProgressBar *)(pTStack_20 + 1);
    pTStack_20[1]._padding_ = (longlong)&___7SProgressBar__6B_;
    *(undefined1 *)((longlong)&pTStack_20[0x23]._padding_ + 4) = 0;
    *(undefined1 *)&pTStack_20[0x23].SharedReferenceCount = 0;
    pTStack_20[0x25]._padding_ = 0;
    pTStack_20[0x24]._padding_ = 0;
    pTStack_20[0x24].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x24].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTStack_20[0x28].SharedReferenceCount = 0;
    *(undefined1 *)&pTStack_20[0x28].WeakReferenceCount = 0;
    pTStack_20[0x29].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x29].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x27].SharedReferenceCount = (atomic<int>)0x3f800000;
    pTStack_20[0x27].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTStack_20[0x28]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&pTStack_20[0x28]._padding_ + 4) = 0x3f800000;
    pTStack_20[0x2a]._padding_ = 0;
    pTStack_20[0x29]._padding_ = 0;
    pTStack_20[0x2a].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2a].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2b]._padding_ = 0;
    *(undefined1 *)&pTStack_20[0x2b].SharedReferenceCount = 0;
    pTStack_20[0x2d]._padding_ = 0;
    pTStack_20[0x2c]._padding_ = 0;
    pTStack_20[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2e]._padding_ = 0;
    pTStack_20[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTStack_20;
    local_38._16_8_ = pSVar7;
    if (pSVar7 == (SProgressBar *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSlateDecl<SProgressBar,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar6;
      }
      goto LAB_142f30d3c;
    }
  }
  if (((pSVar7->_padding_ == 0) || (pSVar7->_padding_ == 0)) ||
     (*(int *)(pSVar7->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar7->_padding_ = (longlong)pSVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar7->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar7->_padding_;
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
      pSVar7->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_142f30d3c:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SProgressBar,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SProgressBar *)local_38._16_8_;
    local_38._0_8_ = (SProgressBar *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SProgressBar,1>::~TSharedPtr<SProgressBar,1>((TSharedPtr<SProgressBar,1> *)local_38);
  TSharedRef<SProgressBar,1>::~TSharedRef<SProgressBar,1>
            ((TSharedRef<SProgressBar,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SProgressBar *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSlateDecl<SProgressBar,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar6;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e8);
  return this;
}

// TSlateDecl<SSpinningImage,RequiredArgs::T0RequiredArgs> @ 142f30e10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SSpinningImage,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SSpinningImage,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SSpinningImage,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSpinningImage,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2
          ,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SSpinningImage,RequiredArgs::T0RequiredArgs> *pTVar7;
  SSpinningImage *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SSpinningImage *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2d8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SSpinningImage *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSSpinningImage___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x2c8);
    SImage::SImage((SImage *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SSpinningImage__6B_;
    FCurveSequence::FCurveSequence((FCurveSequence *)&pTVar6[0x26].SharedReferenceCount);
    pSVar8 = (SSpinningImage *)(pTVar6 + 1);
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SSpinningImage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SSpinningImage,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142f30f60;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_142f30f60:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SSpinningImage,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SSpinningImage *)local_38._16_8_;
    local_38._0_8_ = (SSpinningImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SSpinningImage,1>::~TSharedPtr<SSpinningImage,1>
            ((TSharedPtr<SSpinningImage,1> *)local_38);
  TSharedRef<SSpinningImage,1>::~TSharedRef<SSpinningImage,1>
            ((TSharedRef<SSpinningImage,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SSpinningImage *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SSpinningImage,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2c8);
  return this;
}

// TSlateDecl<SStarshipGallery,RequiredArgs::T0RequiredArgs> @ 142f31030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SStarshipGallery,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SStarshipGallery,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SStarshipGallery,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SStarshipGallery,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSlateDecl<SStarshipGallery,RequiredArgs::T0RequiredArgs> *pTVar6;
  SStarshipGallery *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SStarshipGallery *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTStack_20 = ::operator_new(0x318);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar7 = (SStarshipGallery *)&DAT_00000010;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSStarshipGallery___00_SharedPointerInternals__6B_;
    memset(pTStack_20 + 1,0,0x308);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTStack_20 + 1));
    pSVar7 = (SStarshipGallery *)(pTStack_20 + 1);
    pTStack_20[1]._padding_ = (longlong)&___7SStarshipGallery__6B_;
    pTStack_20[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2c]._padding_ = 0;
    pTStack_20[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2d]._padding_ = 0;
    pTStack_20[0x2e]._padding_ = 0;
    pTStack_20[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x30]._padding_ = 0;
    pTStack_20[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x30].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x31]._padding_ = 0;
    pTVar8 = pTStack_20;
    local_38._16_8_ = pSVar7;
    if (pSVar7 == (SStarshipGallery *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSlateDecl<SStarshipGallery,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar6;
      }
      goto LAB_142f311b9;
    }
  }
  if (((pSVar7->_padding_ == 0) || (pSVar7->_padding_ == 0)) ||
     (*(int *)(pSVar7->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar7->_padding_ = (longlong)pSVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar7->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar7->_padding_;
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
      pSVar7->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_142f311b9:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SStarshipGallery,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SStarshipGallery *)local_38._16_8_;
    local_38._0_8_ = (SStarshipGallery *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SStarshipGallery,1>::~TSharedPtr<SStarshipGallery,1>
            ((TSharedPtr<SStarshipGallery,1> *)local_38);
  TSharedRef<SStarshipGallery,1>::~TSharedRef<SStarshipGallery,1>
            ((TSharedRef<SStarshipGallery,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SStarshipGallery *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSlateDecl<SStarshipGallery,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar6;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x308);
  return this;
}

// TSlateDecl<STableViewTesting,RequiredArgs::T0RequiredArgs> @ 142f31290

TSlateDecl<STableViewTesting,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<STableViewTesting,RequiredArgs::T0RequiredArgs>::
TSlateDecl<STableViewTesting,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STableViewTesting,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<STableViewTesting,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  STableViewTesting *pSVar9;
  STableViewTesting *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STableViewTesting *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x3b0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (STableViewTesting *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSTableViewTesting___00_SharedPointerInternals__6B_;
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7STableViewTesting__6B_;
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x2e]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar6[0x2e]._padding_ + 4) = 0x80;
    pTVar6[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar6[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x30]._padding_ = 0;
    pTVar6[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x30].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x31]._padding_ = 0;
    pTVar6[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x31].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x32]._padding_ = 0;
    pTVar6[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x32].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x33]._padding_ = 0;
    pTVar6[0x33].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x33].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x34]._padding_ = 0;
    pTVar6[0x34].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x34].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x35]._padding_ = 0;
    pTVar6[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x35].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x36]._padding_ = 0;
    pTVar6[0x37]._padding_ = 0;
    pTVar6[0x37].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x37].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x38]._padding_ = 0;
    pTVar6[0x38].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x38].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x39]._padding_ = 0;
    pTVar6[0x39].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x39].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined2 *)&pTVar6[0x3a]._padding_ = 0;
    pTVar6[0x3a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x3a].WeakReferenceCount = (atomic<int>)0x0;
    pSVar9 = (STableViewTesting *)(pTVar6 + 1);
    pTVar6[0x36].SharedReferenceCount = (atomic<int>)0x1388;
    pTVar6[0x36].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTVar6;
    if (pSVar9 == (STableViewTesting *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<STableViewTesting,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142f31489;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
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
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_142f31489:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<STableViewTesting,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (STableViewTesting *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (STableViewTesting *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<STableViewTesting,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x3a0);
  return this;
}

// TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs> @ 142f31550

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs>::
TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  STestMenu *pSVar9;
  STestMenu *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STestMenu *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x2c8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (STestMenu *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VSTestMenu___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x2b8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7STestMenu__6B_;
    pSVar9 = (STestMenu *)(pTVar6 + 1);
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (STestMenu *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142f31698;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
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
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_142f31698:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (STestMenu *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (STestMenu *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2b8);
  return this;
}

// TSlateDecl<STextComboBox,RequiredArgs::T0RequiredArgs> @ 142f31760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<STextComboBox,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<STextComboBox,RequiredArgs::T0RequiredArgs>::
TSlateDecl<STextComboBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STextComboBox,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSlateDecl<STextComboBox,RequiredArgs::T0RequiredArgs> *pTVar6;
  STextComboBox *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STextComboBox *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTStack_20 = ::operator_new(0x398);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar7 = (STextComboBox *)&DAT_00000010;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSTextComboBox___00_SharedPointerInternals__6B_;
    memset(pTStack_20 + 1,0,0x388);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTStack_20 + 1));
    pTStack_20[1]._padding_ = (longlong)&___7STextComboBox__6B_;
    pTStack_20[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2c]._padding_ = 0;
    pTStack_20[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2d]._padding_ = 0;
    pTStack_20[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2e]._padding_ = 0;
    pTStack_20[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2f]._padding_ = 0;
    pTStack_20[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x30]._padding_ = 0;
    pTStack_20[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x30].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTStack_20[0x31]._padding_ = 0;
    FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)&pTStack_20[0x31].SharedReferenceCount);
    *(undefined1 *)&pTStack_20[0x37].SharedReferenceCount = 0;
    pSVar7 = (STextComboBox *)(pTStack_20 + 1);
    pTStack_20[0x39]._padding_ = 0;
    pTStack_20[0x38]._padding_ = 0;
    pTStack_20[0x38].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x38].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTStack_20;
    local_38._16_8_ = pSVar7;
    if (pSVar7 == (STextComboBox *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSlateDecl<STextComboBox,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar6;
      }
      goto LAB_142f3191f;
    }
  }
  if (((pSVar7->_padding_ == 0) || (pSVar7->_padding_ == 0)) ||
     (*(int *)(pSVar7->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar7->_padding_ = (longlong)pSVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar7->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar7->_padding_;
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
      pSVar7->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_142f3191f:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<STextComboBox,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (STextComboBox *)local_38._16_8_;
    local_38._0_8_ = (STextComboBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<STextComboBox,1>::~TSharedPtr<STextComboBox,1>((TSharedPtr<STextComboBox,1> *)local_38)
  ;
  TSharedRef<STextComboBox,1>::~TSharedRef<STextComboBox,1>
            ((TSharedRef<STextComboBox,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (STextComboBox *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSlateDecl<STextComboBox,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar6;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x388);
  return this;
}

// TSlateDecl<STextComboPopup,RequiredArgs::T0RequiredArgs> @ 142f319f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<STextComboPopup,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<STextComboPopup,RequiredArgs::T0RequiredArgs>::
TSlateDecl<STextComboPopup,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STextComboPopup,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSlateDecl<STextComboPopup,RequiredArgs::T0RequiredArgs> *pTVar6;
  STextComboPopup *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STextComboPopup *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTStack_20 = ::operator_new(0x310);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar7 = (STextComboPopup *)&DAT_00000010;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSTextComboPopup___00_SharedPointerInternals__6B_;
    memset(pTStack_20 + 1,0,0x300);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTStack_20 + 1));
    pSVar7 = (STextComboPopup *)(pTStack_20 + 1);
    pTStack_20[1]._padding_ = (longlong)&___7STextComboPopup__6B_;
    pTStack_20[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2c]._padding_ = 0;
    pTStack_20[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2d]._padding_ = 0;
    pTStack_20[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2e]._padding_ = 0;
    pTStack_20[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2f]._padding_ = 0;
    pTStack_20[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x30]._padding_ = 0;
    pTStack_20[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x30].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTStack_20;
    local_38._16_8_ = pSVar7;
    if (pSVar7 == (STextComboPopup *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSlateDecl<STextComboPopup,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar6;
      }
      goto LAB_142f31b80;
    }
  }
  if (((pSVar7->_padding_ == 0) || (pSVar7->_padding_ == 0)) ||
     (*(int *)(pSVar7->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar7->_padding_ = (longlong)pSVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar7->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar7->_padding_;
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
      pSVar7->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_142f31b80:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<STextComboPopup,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (STextComboPopup *)local_38._16_8_;
    local_38._0_8_ = (STextComboPopup *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<STextComboPopup,1>::~TSharedPtr<STextComboPopup,1>
            ((TSharedPtr<STextComboPopup,1> *)local_38);
  TSharedRef<STextComboPopup,1>::~TSharedRef<STextComboPopup,1>
            ((TSharedRef<STextComboPopup,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (STextComboPopup *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSlateDecl<STextComboPopup,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar6;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x300);
  return this;
}

// TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs> @ 142f31c50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs> *pTVar7;
  SThemeColorBlocksBar *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SThemeColorBlocksBar *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x350);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SThemeColorBlocksBar *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSThemeColorBlocksBar___00_SharedPointerInternals__6B_
    ;
    SThemeColorBlocksBar::SThemeColorBlocksBar((SThemeColorBlocksBar *)(pTVar6 + 1));
    pSVar8 = (SThemeColorBlocksBar *)(pTVar6 + 1);
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SThemeColorBlocksBar *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142f31d74;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_142f31d74:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SThemeColorBlocksBar *)local_38._16_8_;
    local_38._0_8_ = (SThemeColorBlocksBar *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  TSharedRef<SThemeColorBlocksBar,1>::~TSharedRef<SThemeColorBlocksBar,1>
            ((TSharedRef<SThemeColorBlocksBar,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SThemeColorBlocksBar *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x340);
  return this;
}

// TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs> @ 142f31e40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs> *pTVar6;
  SThrobber *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SThrobber *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTStack_20 = ::operator_new(0x388);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar7 = (SThrobber *)&DAT_00000010;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VSThrobber___00_SharedPointerInternals__6B_;
    memset(pTStack_20 + 1,0,0x378);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTStack_20 + 1));
    pTStack_20[1]._padding_ = (longlong)&___7SThrobber__6B_;
    FCurveSequence::FCurveSequence((FCurveSequence *)&pTStack_20[0x2b].SharedReferenceCount);
    pTStack_20[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x35].WeakReferenceCount = (atomic<int>)0x0;
    pSVar7 = (SThrobber *)(pTStack_20 + 1);
    *(undefined4 *)&pTStack_20[0x36]._padding_ = 0;
    *(undefined4 *)((longlong)&pTStack_20[0x36]._padding_ + 4) = 3;
    pTStack_20[0x36].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x36].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x37]._padding_ = 0;
    pTVar8 = pTStack_20;
    local_38._16_8_ = pSVar7;
    if (pSVar7 == (SThrobber *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar6;
      }
      goto LAB_142f31fb5;
    }
  }
  if (((pSVar7->_padding_ == 0) || (pSVar7->_padding_ == 0)) ||
     (*(int *)(pSVar7->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar7->_padding_ = (longlong)pSVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar7->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar7->_padding_;
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
      pSVar7->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_142f31fb5:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SThrobber *)local_38._16_8_;
    local_38._0_8_ = (SThrobber *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SThrobber,1>::~TSharedPtr<SThrobber,1>((TSharedPtr<SThrobber,1> *)local_38);
  TSharedRef<SThrobber,1>::~TSharedRef<SThrobber,1>((TSharedRef<SThrobber,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SThrobber *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar6;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x378);
  return this;
}

// TSlateDecl<SVolumeControl,RequiredArgs::T0RequiredArgs> @ 142f32080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SVolumeControl,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SVolumeControl,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SVolumeControl,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SVolumeControl,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2
          ,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSlateDecl<SVolumeControl,RequiredArgs::T0RequiredArgs> *pTVar6;
  SVolumeControl *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SVolumeControl *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTStack_20 = ::operator_new(0x360);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar7 = (SVolumeControl *)&DAT_00000010;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSVolumeControl___00_SharedPointerInternals__6B_;
    memset(pTStack_20 + 1,0,0x350);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTStack_20 + 1));
    pSVar7 = (SVolumeControl *)(pTStack_20 + 1);
    pTStack_20[1]._padding_ = (longlong)&___7SVolumeControl__6B_;
    pTStack_20[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTStack_20[0x2b].WeakReferenceCount = 0;
    pTStack_20[0x2d]._padding_ = 0;
    pTStack_20[0x2c]._padding_ = 0;
    pTStack_20[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2e]._padding_ = 0;
    pTStack_20[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined2 *)&pTStack_20[0x2f]._padding_ = 0;
    pTStack_20[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x30].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x30]._padding_ = 0;
    pTStack_20[0x31]._padding_ = 0;
    pTStack_20[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x31].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTStack_20[0x32]._padding_ = 0;
    pTStack_20[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x32].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x33]._padding_ = 0;
    pTVar8 = pTStack_20;
    local_38._16_8_ = pSVar7;
    if (pSVar7 == (SVolumeControl *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSlateDecl<SVolumeControl,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar6;
      }
      goto LAB_142f3223b;
    }
  }
  if (((pSVar7->_padding_ == 0) || (pSVar7->_padding_ == 0)) ||
     (*(int *)(pSVar7->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar7->_padding_ = (longlong)pSVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar7->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar7->_padding_;
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
      pSVar7->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_142f3223b:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SVolumeControl,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SVolumeControl *)local_38._16_8_;
    local_38._0_8_ = (SVolumeControl *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SVolumeControl,1>::~TSharedPtr<SVolumeControl,1>
            ((TSharedPtr<SVolumeControl,1> *)local_38);
  TSharedRef<SVolumeControl,1>::~TSharedRef<SVolumeControl,1>
            ((TSharedRef<SVolumeControl,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SVolumeControl *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSlateDecl<SVolumeControl,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar6;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x350);
  return this;
}

// TSlateDecl<SWidgetGallery,RequiredArgs::T0RequiredArgs> @ 142f32310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SWidgetGallery,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SWidgetGallery,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SWidgetGallery,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SWidgetGallery,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2
          ,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSlateDecl<SWidgetGallery,RequiredArgs::T0RequiredArgs> *pTVar6;
  SWidgetGallery *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SWidgetGallery *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTStack_20 = ::operator_new(1000);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar7 = (SWidgetGallery *)&DAT_00000010;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSWidgetGallery___00_SharedPointerInternals__6B_;
    memset(pTStack_20 + 1,0,0x3d8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTStack_20 + 1));
    pTStack_20[1]._padding_ = (longlong)&___7SWidgetGallery__6B_;
    pTStack_20[0x2c]._padding_ = 0;
    pTStack_20[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2e]._padding_ = 0;
    *(undefined1 *)&pTStack_20[0x2e].SharedReferenceCount = 0x19;
    FCurveSequence::FCurveSequence((FCurveSequence *)(pTStack_20 + 0x2f));
    pSVar7 = (SWidgetGallery *)(pTStack_20 + 1);
    pTStack_20[0x36].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x36].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x37]._padding_ = 0;
    pTStack_20[0x37].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x37].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x38]._padding_ = 0;
    pTStack_20[0x38].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x38].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x39]._padding_ = 0;
    pTStack_20[0x39].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x39].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x3a]._padding_ = 0;
    pTStack_20[0x3a].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x3a].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x3b]._padding_ = 0;
    pTStack_20[0x3b].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x3b].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x3c]._padding_ = 0;
    pTStack_20[0x3c].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x3c].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x3d]._padding_ = 0;
    pTStack_20[0x3d].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x3d].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x3e]._padding_ = 0;
    pTVar8 = pTStack_20;
    local_38._16_8_ = pSVar7;
    if (pSVar7 == (SWidgetGallery *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSlateDecl<SWidgetGallery,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar6;
      }
      goto LAB_142f324f2;
    }
  }
  if (((pSVar7->_padding_ == 0) || (pSVar7->_padding_ == 0)) ||
     (*(int *)(pSVar7->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar7->_padding_ = (longlong)pSVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar7->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar7->_padding_;
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
      pSVar7->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_142f324f2:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SWidgetGallery,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SWidgetGallery *)local_38._16_8_;
    local_38._0_8_ = (SWidgetGallery *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SWidgetGallery,1>::~TSharedPtr<SWidgetGallery,1>
            ((TSharedPtr<SWidgetGallery,1> *)local_38);
  TSharedRef<SWidgetGallery,1>::~TSharedRef<SWidgetGallery,1>
            ((TSharedRef<SWidgetGallery,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SWidgetGallery *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSlateDecl<SWidgetGallery,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar6;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x3d8);
  return this;
}

// ~TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs> @ 142f3abe0

void __thiscall
TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs> @ 142f3ac10

void __thiscall
TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs> @ 142f3ac40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SSegmentedControl<int>,RequiredArgs::T0RequiredArgs> @ 142f3ac70

void __thiscall
TSlateDecl<SSegmentedControl<int>,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SSegmentedControl<int>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSegmentedControl<int>,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> @ 142f3aca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> @ 142f3acd0

void __thiscall
TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Widget).SharedReferenceCount.ReferenceController);
  return;
}

// ~TSlateDecl<SCircularThrobber,RequiredArgs::T0RequiredArgs> @ 142f3ace0

void __thiscall
TSlateDecl<SCircularThrobber,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SCircularThrobber,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SCircularThrobber,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs> @ 142f3ad10

void __thiscall
TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs> @ 142f3ad40

void __thiscall
TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs> *this)

{
  TSharedPtr<SColorWheel,1>::~TSharedPtr<SColorWheel,1>(&this->_Widget);
  return;
}

// ~TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> @ 142f3ad70

void __thiscall
TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs> @ 142f3ada0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Widget).SharedReferenceCount.ReferenceController);
  return;
}

// ~TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> @ 142f3adb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs> @ 142f3ade0

void __thiscall
TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs> @ 142f3ae10

void __thiscall
TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> @ 142f3ae40

void __thiscall
TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> *this)

{
  TSharedPtr<SGridPanel,1>::~TSharedPtr<SGridPanel,1>(&this->_Widget);
  return;
}

// ~TSlateDecl<SHeader,RequiredArgs::T0RequiredArgs> @ 142f3ae70

void __thiscall
TSlateDecl<SHeader,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SHeader,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SHeader,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> @ 142f3aea0

void __thiscall
TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Widget).SharedReferenceCount.ReferenceController);
  return;
}

// ~TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs> @ 142f3aeb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> @ 142f3aee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Widget).SharedReferenceCount.ReferenceController);
  return;
}

// ~TSlateDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs> @ 142f3aef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSlateDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs> *this)

{
  TSharedPtr<SMultiLineEditableText,1>::~TSharedPtr<SMultiLineEditableText,1>(&this->_Widget);
  return;
}

// ~TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs> @ 142f3af20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> @ 142f3af50

void __thiscall
TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Widget).SharedReferenceCount.ReferenceController);
  return;
}

// ~TSlateDecl<SProgressBar,RequiredArgs::T0RequiredArgs> @ 142f3af60

void __thiscall
TSlateDecl<SProgressBar,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SProgressBar,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SProgressBar,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> @ 142f3af90

void __thiscall
TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Widget).SharedReferenceCount.ReferenceController);
  return;
}

// ~TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> @ 142f3afa0

void __thiscall
TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> @ 142f3afd0

void __thiscall
TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs> @ 142f3b000

void __thiscall
TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> @ 142f3b030

void __thiscall
TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Widget).SharedReferenceCount.ReferenceController);
  return;
}

// ~TSlateDecl<SSpinningImage,RequiredArgs::T0RequiredArgs> @ 142f3b040

void __thiscall
TSlateDecl<SSpinningImage,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SSpinningImage,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSpinningImage,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<STextComboBox,RequiredArgs::T0RequiredArgs> @ 142f3b070

void __thiscall
TSlateDecl<STextComboBox,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<STextComboBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STextComboBox,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs> @ 142f3b0a0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs> *this)

{
  TSharedPtr<SThemeColorBlocksBar,1>::~TSharedPtr<SThemeColorBlocksBar,1>(&this->_Widget);
  return;
}

// ~TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs> @ 142f3b0d0

void __thiscall
TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> @ 142f3b100

void __thiscall
TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Widget).SharedReferenceCount.ReferenceController);
  return;
}

// ~TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs> @ 142f3b110

void __thiscall
TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SUserWidgetExample,RequiredArgs::T0RequiredArgs> @ 142f3b140

void __thiscall
TSlateDecl<SUserWidgetExample,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SUserWidgetExample,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SUserWidgetExample,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> @ 142f3b170

void __thiscall
TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Widget).SharedReferenceCount.ReferenceController);
  return;
}

// ~TSlateDecl<SVolumeControl,RequiredArgs::T0RequiredArgs> @ 142f3b180

void __thiscall
TSlateDecl<SVolumeControl,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SVolumeControl,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SVolumeControl,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// operator<<= @ 142f4c170

TSharedRef<SBreadcrumbTrail<int>,1> * __thiscall
TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SBreadcrumbTrail<int>,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SBreadcrumbTrail<int> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SBreadcrumbTrail<int>,1> *pTVar7;
  
  if ((this->_Widget).Object == (SBreadcrumbTrail<int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SBreadcrumbTrail<int>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SBreadcrumbTrail<int>::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SBreadcrumbTrail<int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SBreadcrumbTrail<int>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4c211;
  }
  bVar6 = 0x20;
LAB_142f4c211:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SBreadcrumbTrail<int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SBreadcrumbTrail<int>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SBreadcrumbTrail<int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SBreadcrumbTrail<int>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SBreadcrumbTrail<int> *)0x0;
  if (__return_storage_ptr__->Object == (SBreadcrumbTrail<int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SBreadcrumbTrail<int>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4c2e0

TSharedRef<SComboBox<TSharedPtr<ESelectionMode::Type,1>_>,1> * __thiscall
TSlateDecl<SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs>::
operator<<=(void *this,
           TSharedRef<SComboBox<TSharedPtr<ESelectionMode::Type,1>_>,1> *__return_storage_ptr__,
           FArguments *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  TSharedRef<SComboBox<TSharedPtr<ESelectionMode::Type,1>_>,1> *pTVar6;
  
  if (*(longlong *)this == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedRef<SComboBox<TSharedPtr<ESelectionMode::Type,1>_>,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  SWidget::SWidgetConstruct(*(SWidget **)this,(FSlateBaseNamedArgs *)param_1);
  SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::Construct(*(void **)this,param_1);
  if (*(longlong *)this == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedRef<SComboBox<TSharedPtr<ESelectionMode::Type,1>_>,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  plVar1 = *(longlong **)this;
  if ((*(byte *)(plVar1 + 6) & 0x10) == 0) {
    cVar4 = (**(code **)(*plVar1 + 0x228))(plVar1);
    bVar5 = 0;
    if (cVar4 == '\0') goto LAB_142f4c381;
  }
  bVar5 = 0x20;
LAB_142f4c381:
  *(byte *)(plVar1 + 6) = *(byte *)(plVar1 + 6) & 0xdf;
  *(byte *)(plVar1 + 6) = *(byte *)(plVar1 + 6) | bVar5;
  if (*(longlong *)this == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedRef<SComboBox<TSharedPtr<ESelectionMode::Type,1>_>,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  *(byte *)(*(longlong *)this + 0x31) = *(byte *)(*(longlong *)this + 0x31) | 4;
  if (*(longlong *)this == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedRef<SComboBox<TSharedPtr<ESelectionMode::Type,1>_>,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->Object = *(SComboBox<TSharedPtr<ESelectionMode::Type,1>_> **)this;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 8);
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)this = 0;
  if (__return_storage_ptr__->Object == (SComboBox<TSharedPtr<ESelectionMode::Type,1>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedRef<SComboBox<TSharedPtr<ESelectionMode::Type,1>_>,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4c450

TSharedRef<SComboRow<TSharedPtr<ESelectionMode::Type,1>_>,1> * __thiscall
TSlateDecl<SComboRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
::operator<<=(void *this,
             TSharedRef<SComboRow<TSharedPtr<ESelectionMode::Type,1>_>,1> *__return_storage_ptr__,
             FArguments *param_1)

{
  longlong *this_00;
  TSharedRef<STableViewBase,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  TSharedRef<SComboRow<TSharedPtr<ESelectionMode::Type,1>_>,1> *pTVar13;
  FArguments *pFVar14;
  undefined1 local_360 [8];
  ForAnyElementType FStack_358;
  int local_350;
  FDestructionSentinel local_348;
  SWidget *local_330;
  TReferenceControllerBase<1> *pTStack_328;
  undefined1 local_320 [760];
  
  if (*(longlong *)this == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SComboRow<TSharedPtr<ESelectionMode::Type,1>_>,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(*(longlong *)this + 8),(FSlateBaseNamedArgs *)param_1);
  this_00 = *(longlong **)this;
  pTVar1 = (TSharedRef<STableViewBase,1> *)**(undefined8 **)((longlong)this + 0x10);
  pFVar14 = STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::FArguments::FArguments(local_320);
  pFVar14->_Style = param_1->_Style;
  fVar6 = (param_1->_Padding).Value.Left;
  fVar7 = (param_1->_Padding).Value.Top;
  fVar8 = (param_1->_Padding).Value.Right;
  fVar9 = (param_1->_Padding).Value.Bottom;
  bVar10 = (param_1->_Padding).bIsSet;
  local_350 = 0;
  local_360 = (undefined1  [8])0x0;
  FStack_358.Data = (FScriptContainerElement *)0x0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_360,
             &(param_1->_Padding).Getter);
  (pFVar14->_Padding).Value.Left = fVar6;
  (pFVar14->_Padding).Value.Top = fVar7;
  (pFVar14->_Padding).Value.Right = fVar8;
  (pFVar14->_Padding).Value.Bottom = fVar9;
  (pFVar14->_Padding).bIsSet = bVar10;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_360);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_360,
             (FWriteAccessScope *)&local_348);
  if ((local_350 != 0) && (FStack_358.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_358.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_358,0,0,0x10);
    local_350 = 0;
  }
  if (local_348.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_348.Accessor,&local_348);
  }
  if (FStack_358.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_358.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_360);
  pTVar2 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar3 = (param_1->_Content).Widget.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_330 = (pFVar14->_Content).Widget.Object;
  pTStack_328 = (pFVar14->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar14->_Content).Widget.Object = pSVar3;
  (pFVar14->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_328);
  STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::ConstructInternal(this_00,pFVar14,pTVar1);
  (**(code **)(*this_00 + 0x80))
            (this_00,pTVar1->Object->TableViewMode,&pFVar14->_Padding,&pFVar14->_Content);
  STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::FArguments::~FArguments(local_320);
  if (*(longlong *)this == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SComboRow<TSharedPtr<ESelectionMode::Type,1>_>,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  lVar4 = *(longlong *)this;
  if ((*(byte *)(lVar4 + 0x38) & 0x10) == 0) {
    cVar11 = (**(code **)(*(longlong *)(lVar4 + 8) + 0x228))(lVar4 + 8);
    bVar12 = 0;
    if (cVar11 == '\0') goto LAB_142f4c686;
  }
  bVar12 = 0x20;
LAB_142f4c686:
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xdf;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) | bVar12;
  if (*(longlong *)this == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SComboRow<TSharedPtr<ESelectionMode::Type,1>_>,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  *(byte *)(*(longlong *)this + 0x39) = *(byte *)(*(longlong *)this + 0x39) | 4;
  if (*(longlong *)this == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SComboRow<TSharedPtr<ESelectionMode::Type,1>_>,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  __return_storage_ptr__->Object = *(SComboRow<TSharedPtr<ESelectionMode::Type,1>_> **)this;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 8);
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)this = 0;
  if (__return_storage_ptr__->Object == (SComboRow<TSharedPtr<ESelectionMode::Type,1>_> *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SComboRow<TSharedPtr<ESelectionMode::Type,1>_>,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4c760

TSharedRef<SListView<TSharedPtr<int,1>_>,1> * __thiscall
TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SListView<TSharedPtr<int,1>_>,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SListView<TSharedPtr<int,1>_> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SListView<TSharedPtr<int,1>_>,1> *pTVar7;
  
  if ((this->_Widget).Object == (SListView<TSharedPtr<int,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedPtr<int,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SListView<TSharedPtr<int,1>_>::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SListView<TSharedPtr<int,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedPtr<int,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4c801;
  }
  bVar6 = 0x20;
LAB_142f4c801:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SListView<TSharedPtr<int,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedPtr<int,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SListView<TSharedPtr<int,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedPtr<int,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SListView<TSharedPtr<int,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (SListView<TSharedPtr<int,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedPtr<int,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4c8d0

TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1> * __thiscall
TSlateDecl<SListView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SListView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1> *__return_storage_ptr__,
          FArguments *param_1)

{
  byte *pbVar1;
  SListView<TSharedPtr<FTestData,1>_> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1> *pTVar7;
  
  if ((this->_Widget).Object == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SListView<TSharedPtr<FTestData,1>_>::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4c971;
  }
  bVar6 = 0x20;
LAB_142f4c971:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SListView<TSharedPtr<FTestData,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4ca40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedRef<SNumericEntryBox<int>,1> * __thiscall
TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SNumericEntryBox<int>,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SNumericEntryBox<int> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SNumericEntryBox<int>,1> *pTVar7;
  
  if ((this->_Widget).Object == (SNumericEntryBox<int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNumericEntryBox<int>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SNumericEntryBox<int>::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SNumericEntryBox<int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNumericEntryBox<int>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4cae1;
  }
  bVar6 = 0x20;
LAB_142f4cae1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SNumericEntryBox<int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNumericEntryBox<int>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SNumericEntryBox<int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNumericEntryBox<int>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SNumericEntryBox<int> *)0x0;
  if (__return_storage_ptr__->Object == (SNumericEntryBox<int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNumericEntryBox<int>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4cbb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedRef<SNumericEntryBox<float>,1> * __thiscall
TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SNumericEntryBox<float>,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SNumericEntryBox<float> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SNumericEntryBox<float>,1> *pTVar7;
  
  if ((this->_Widget).Object == (SNumericEntryBox<float> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNumericEntryBox<float>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SNumericEntryBox<float>::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SNumericEntryBox<float> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNumericEntryBox<float>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4cc51;
  }
  bVar6 = 0x20;
LAB_142f4cc51:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SNumericEntryBox<float> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNumericEntryBox<float>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SNumericEntryBox<float> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNumericEntryBox<float>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SNumericEntryBox<float> *)0x0;
  if (__return_storage_ptr__->Object == (SNumericEntryBox<float> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNumericEntryBox<float>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4cd20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedRef<SNumericEntryBox<double>,1> * __thiscall
TSlateDecl<SNumericEntryBox<double>,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SNumericEntryBox<double>,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SNumericEntryBox<double>,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SNumericEntryBox<double> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SNumericEntryBox<double>,1> *pTVar7;
  
  if ((this->_Widget).Object == (SNumericEntryBox<double> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNumericEntryBox<double>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SNumericEntryBox<double>::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SNumericEntryBox<double> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNumericEntryBox<double>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4cdc1;
  }
  bVar6 = 0x20;
LAB_142f4cdc1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SNumericEntryBox<double> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNumericEntryBox<double>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SNumericEntryBox<double> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNumericEntryBox<double>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SNumericEntryBox<double> *)0x0;
  if (__return_storage_ptr__->Object == (SNumericEntryBox<double> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNumericEntryBox<double>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4ce90

TSharedRef<SSegmentedControl<int>,1> * __thiscall
TSlateDecl<SSegmentedControl<int>,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SSegmentedControl<int>,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SSegmentedControl<int>,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SSegmentedControl<int> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SSegmentedControl<int>,1> *pTVar7;
  
  if ((this->_Widget).Object == (SSegmentedControl<int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSegmentedControl<int>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SSegmentedControl<int>::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SSegmentedControl<int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSegmentedControl<int>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4cf31;
  }
  bVar6 = 0x20;
LAB_142f4cf31:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SSegmentedControl<int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSegmentedControl<int>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SSegmentedControl<int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSegmentedControl<int>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SSegmentedControl<int> *)0x0;
  if (__return_storage_ptr__->Object == (SSegmentedControl<int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSegmentedControl<int>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4d000

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SSpinBox<int>,1> * __thiscall
TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SSpinBox<int>,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SSpinBox<int> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SSpinBox<int>,1> *pTVar7;
  
  if ((this->_Widget).Object == (SSpinBox<int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinBox<int>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SSpinBox<int>::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SSpinBox<int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinBox<int>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4d0a1;
  }
  bVar6 = 0x20;
LAB_142f4d0a1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SSpinBox<int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinBox<int>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SSpinBox<int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinBox<int>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SSpinBox<int> *)0x0;
  if (__return_storage_ptr__->Object == (SSpinBox<int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinBox<int>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4d170

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SSpinBox<double>,1> * __thiscall
TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SSpinBox<double>,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SSpinBox<double> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SSpinBox<double>,1> *pTVar7;
  
  if ((this->_Widget).Object == (SSpinBox<double> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinBox<double>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SSpinBox<double>::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SSpinBox<double> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinBox<double>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4d211;
  }
  bVar6 = 0x20;
LAB_142f4d211:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SSpinBox<double> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinBox<double>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SSpinBox<double> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinBox<double>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SSpinBox<double> *)0x0;
  if (__return_storage_ptr__->Object == (SSpinBox<double> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinBox<double>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4d2e0

TSharedRef<STableRow<TSharedPtr<int,1>_>,1> * __thiscall
TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<int,1>_>,1>_&>_>
::operator<<=(TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<int,1>_>,1>_&>_>
              *this,TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *__return_storage_ptr__,
             FArguments *param_1)

{
  byte *pbVar1;
  STableRow<TSharedPtr<int,1>_> *pSVar2;
  TSharedRef<STreeView<TSharedPtr<int,1>_>,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  STreeView<TSharedPtr<int,1>_> *pSVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *pTVar10;
  TSharedRef<STableViewBase,1> local_28;
  
  if ((this->_Widget).Object == (STableRow<TSharedPtr<int,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->_padding_,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg0;
  pTVar4 = (pTVar3->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar3->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = (STableViewBase *)pSVar5;
  local_28.SharedReferenceCount.ReferenceController = pTVar4;
  STableRow<TSharedPtr<int,1>_>::ConstructInternal(pSVar2,param_1,&local_28);
  (**(code **)(pSVar2->_padding_ + 0x80))
            (pSVar2,*(undefined4 *)&pSVar5->field_0x2b0,&param_1->_Padding,&param_1->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->_Widget).Object == (STableRow<TSharedPtr<int,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_142f4d3e2;
  }
  bVar9 = 0x20;
LAB_142f4d3e2:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar9;
  if ((this->_Widget).Object == (STableRow<TSharedPtr<int,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (STableRow<TSharedPtr<int,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STableRow<TSharedPtr<int,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (STableRow<TSharedPtr<int,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4d4b0

TSharedRef<STableRow<TSharedPtr<int,1>_>,1> * __thiscall
TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
::operator<<=(TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *this,TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *__return_storage_ptr__,
             FArguments *param_1)

{
  byte *pbVar1;
  STableRow<TSharedPtr<int,1>_> *pSVar2;
  TSharedRef<STableViewBase,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *pTVar8;
  
  if ((this->_Widget).Object == (STableRow<TSharedPtr<int,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->_padding_,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg0;
  STableRow<TSharedPtr<int,1>_>::ConstructInternal(pSVar2,param_1,pTVar3);
  (**(code **)(pSVar2->_padding_ + 0x80))
            (pSVar2,pTVar3->Object->TableViewMode,&param_1->_Padding,&param_1->_Content);
  if ((this->_Widget).Object == (STableRow<TSharedPtr<int,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_142f4d592;
  }
  bVar7 = 0x20;
LAB_142f4d592:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar7;
  if ((this->_Widget).Object == (STableRow<TSharedPtr<int,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (STableRow<TSharedPtr<int,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STableRow<TSharedPtr<int,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (STableRow<TSharedPtr<int,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4d660

TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> * __thiscall
TSlateDecl<STableRow<TSharedPtr<FTestData,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<STableRow<TSharedPtr<FTestData,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&>_>
              *this,TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> *__return_storage_ptr__,
             FArguments *param_1)

{
  byte *pbVar1;
  STableRow<TSharedPtr<FTestData,1>_> *pSVar2;
  TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SListView<TSharedPtr<FTestData,1>_> *pSVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> *pTVar10;
  TSharedRef<STableViewBase,1> local_28;
  
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->_padding_,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg0;
  pTVar4 = (pTVar3->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar3->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = (STableViewBase *)pSVar5;
  local_28.SharedReferenceCount.ReferenceController = pTVar4;
  STableRow<TSharedPtr<FTestData,1>_>::ConstructInternal(pSVar2,param_1,&local_28);
  (**(code **)(pSVar2->_padding_ + 0x80))
            (pSVar2,(int)pSVar5->_padding_,&param_1->_Padding,&param_1->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_142f4d762;
  }
  bVar9 = 0x20;
LAB_142f4d762:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar9;
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STableRow<TSharedPtr<FTestData,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (STableRow<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4d830

TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> * __thiscall
TSlateDecl<STableRow<TSharedPtr<FTestData,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1>_&>_>
::operator<<=(TSlateDecl<STableRow<TSharedPtr<FTestData,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1>_&>_>
              *this,TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> *__return_storage_ptr__,
             FArguments *param_1)

{
  byte *pbVar1;
  STableRow<TSharedPtr<FTestData,1>_> *pSVar2;
  TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  STreeView<TSharedPtr<FTestData,1>_> *pSVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> *pTVar10;
  TSharedRef<STableViewBase,1> local_28;
  
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->_padding_,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg0;
  pTVar4 = (pTVar3->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar3->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = (STableViewBase *)pSVar5;
  local_28.SharedReferenceCount.ReferenceController = pTVar4;
  STableRow<TSharedPtr<FTestData,1>_>::ConstructInternal(pSVar2,param_1,&local_28);
  (**(code **)(pSVar2->_padding_ + 0x80))
            (pSVar2,*(undefined4 *)&pSVar5->field_0x2b0,&param_1->_Padding,&param_1->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_142f4d932;
  }
  bVar9 = 0x20;
LAB_142f4d932:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar9;
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STableRow<TSharedPtr<FTestData,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (STableRow<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4da00

TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1> * __thiscall
TSlateDecl<STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>_&&>_>
::operator<<=(void *this,
             TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1> *__return_storage_ptr__,
             FArguments *param_1)

{
  longlong *this_00;
  TReferenceControllerBase<1> *pTVar1;
  STableViewBase *pSVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1> *pTVar8;
  TSharedRef<STableViewBase,1> local_28;
  
  if (*(longlong *)this == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(*(longlong *)this + 8),(FSlateBaseNamedArgs *)param_1);
  this_00 = *(longlong **)this;
  pTVar1 = (TReferenceControllerBase<1> *)((longlong *)**(longlong **)((longlong)this + 0x10))[1];
  pSVar2 = *(STableViewBase **)**(longlong **)((longlong)this + 0x10);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = pSVar2;
  local_28.SharedReferenceCount.ReferenceController = pTVar1;
  STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::ConstructInternal(this_00,param_1,&local_28);
  (**(code **)(*this_00 + 0x80))
            (this_00,pSVar2->TableViewMode,&param_1->_Padding,&param_1->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (*(longlong *)this == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  lVar3 = *(longlong *)this;
  if ((*(byte *)(lVar3 + 0x38) & 0x10) == 0) {
    cVar6 = (**(code **)(*(longlong *)(lVar3 + 8) + 0x228))(lVar3 + 8);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_142f4db02;
  }
  bVar7 = 0x20;
LAB_142f4db02:
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xdf;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) | bVar7;
  if (*(longlong *)this == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  *(byte *)(*(longlong *)this + 0x39) = *(byte *)(*(longlong *)this + 0x39) | 4;
  if (*(longlong *)this == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = *(STableRow<TSharedPtr<ESelectionMode::Type,1>_> **)this;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 8);
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)this = 0;
  if (__return_storage_ptr__->Object == (STableRow<TSharedPtr<ESelectionMode::Type,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4dbd0

TSharedRef<STileView<TSharedPtr<int,1>_>,1> * __thiscall
TSlateDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<STileView<TSharedPtr<int,1>_>,1> *__return_storage_ptr__,FArguments *param_1)

{
  undefined1 *puVar1;
  STileView<TSharedPtr<int,1>_> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<STileView<TSharedPtr<int,1>_>,1> *pTVar7;
  
  if ((this->_Widget).Object == (STileView<TSharedPtr<int,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STileView<TSharedPtr<int,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  STileView<TSharedPtr<int,1>_>::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (STileView<TSharedPtr<int,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STileView<TSharedPtr<int,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->field_0x30 & 0x10) == 0) {
    cVar5 = (**(code **)(*(longlong *)pSVar2 + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4dc71;
  }
  bVar6 = 0x20;
LAB_142f4dc71:
  pSVar2->field_0x30 = pSVar2->field_0x30 & 0xdf;
  pSVar2->field_0x30 = pSVar2->field_0x30 | bVar6;
  if ((this->_Widget).Object == (STileView<TSharedPtr<int,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STileView<TSharedPtr<int,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x31;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object == (STileView<TSharedPtr<int,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STileView<TSharedPtr<int,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STileView<TSharedPtr<int,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (STileView<TSharedPtr<int,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STileView<TSharedPtr<int,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4dd40

TSharedRef<STileView<TSharedPtr<FTestData,1>_>,1> * __thiscall
TSlateDecl<STileView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<STileView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<STileView<TSharedPtr<FTestData,1>_>,1> *__return_storage_ptr__,
          FArguments *param_1)

{
  undefined1 *puVar1;
  STileView<TSharedPtr<FTestData,1>_> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<STileView<TSharedPtr<FTestData,1>_>,1> *pTVar7;
  
  if ((this->_Widget).Object == (STileView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STileView<TSharedPtr<FTestData,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  STileView<TSharedPtr<FTestData,1>_>::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (STileView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STileView<TSharedPtr<FTestData,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->field_0x30 & 0x10) == 0) {
    cVar5 = (**(code **)(*(longlong *)pSVar2 + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4dde1;
  }
  bVar6 = 0x20;
LAB_142f4dde1:
  pSVar2->field_0x30 = pSVar2->field_0x30 & 0xdf;
  pSVar2->field_0x30 = pSVar2->field_0x30 | bVar6;
  if ((this->_Widget).Object == (STileView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STileView<TSharedPtr<FTestData,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x31;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object == (STileView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STileView<TSharedPtr<FTestData,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STileView<TSharedPtr<FTestData,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (STileView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STileView<TSharedPtr<FTestData,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4deb0

TSharedRef<STreeView<TSharedPtr<int,1>_>,1> * __thiscall
TSlateDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<STreeView<TSharedPtr<int,1>_>,1> *__return_storage_ptr__,FArguments *param_1)

{
  undefined1 *puVar1;
  STreeView<TSharedPtr<int,1>_> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<STreeView<TSharedPtr<int,1>_>,1> *pTVar7;
  
  if ((this->_Widget).Object == (STreeView<TSharedPtr<int,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STreeView<TSharedPtr<int,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  STreeView<TSharedPtr<int,1>_>::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (STreeView<TSharedPtr<int,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STreeView<TSharedPtr<int,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->field_0x30 & 0x10) == 0) {
    cVar5 = (**(code **)(*(longlong *)pSVar2 + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4df51;
  }
  bVar6 = 0x20;
LAB_142f4df51:
  pSVar2->field_0x30 = pSVar2->field_0x30 & 0xdf;
  pSVar2->field_0x30 = pSVar2->field_0x30 | bVar6;
  if ((this->_Widget).Object == (STreeView<TSharedPtr<int,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STreeView<TSharedPtr<int,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x31;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object == (STreeView<TSharedPtr<int,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STreeView<TSharedPtr<int,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STreeView<TSharedPtr<int,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (STreeView<TSharedPtr<int,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STreeView<TSharedPtr<int,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4e020

TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1> * __thiscall
TSlateDecl<STreeView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<STreeView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1> *__return_storage_ptr__,
          FArguments *param_1)

{
  undefined1 *puVar1;
  STreeView<TSharedPtr<FTestData,1>_> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1> *pTVar7;
  
  if ((this->_Widget).Object == (STreeView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  STreeView<TSharedPtr<FTestData,1>_>::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (STreeView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->field_0x30 & 0x10) == 0) {
    cVar5 = (**(code **)(*(longlong *)pSVar2 + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4e0c1;
  }
  bVar6 = 0x20;
LAB_142f4e0c1:
  pSVar2->field_0x30 = pSVar2->field_0x30 & 0xdf;
  pSVar2->field_0x30 = pSVar2->field_0x30 | bVar6;
  if ((this->_Widget).Object == (STreeView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x31;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object == (STreeView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STreeView<TSharedPtr<FTestData,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (STreeView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4e190

TSharedRef<SCircularThrobber,1> * __thiscall
TSlateDecl<SCircularThrobber,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SCircularThrobber,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SCircularThrobber,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SCircularThrobber *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SCircularThrobber,1> *pTVar7;
  
  if ((this->_Widget).Object == (SCircularThrobber *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SCircularThrobber,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SCircularThrobber::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SCircularThrobber *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SCircularThrobber,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4e231;
  }
  bVar6 = 0x20;
LAB_142f4e231:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SCircularThrobber *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SCircularThrobber,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SCircularThrobber *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SCircularThrobber,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SCircularThrobber *)0x0;
  if (__return_storage_ptr__->Object == (SCircularThrobber *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SCircularThrobber,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4e300

TSharedRef<SColorSlider,1> * __thiscall
TSlateDecl<SColorSlider,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SColorSlider,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SColorSlider,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SColorSlider *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SColorSlider,1> *pTVar7;
  
  if ((this->_Widget).Object == (SColorSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorSlider,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SColorSlider::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SColorSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorSlider,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4e3a1;
  }
  bVar6 = 0x20;
LAB_142f4e3a1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SColorSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorSlider,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SColorSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorSlider,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SColorSlider *)0x0;
  if (__return_storage_ptr__->Object == (SColorSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorSlider,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4e470

TSharedRef<SColorSpectrum,1> * __thiscall
TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SColorSpectrum,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SColorSpectrum *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SColorSpectrum,1> *pTVar7;
  
  if ((this->_Widget).Object == (SColorSpectrum *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorSpectrum,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SColorSpectrum::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SColorSpectrum *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorSpectrum,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4e511;
  }
  bVar6 = 0x20;
LAB_142f4e511:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SColorSpectrum *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorSpectrum,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SColorSpectrum *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorSpectrum,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SColorSpectrum *)0x0;
  if (__return_storage_ptr__->Object == (SColorSpectrum *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorSpectrum,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4e5e0

TSharedRef<SColorWheel,1> * __thiscall
TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SColorWheel,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SColorWheel *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SColorWheel,1> *pTVar7;
  
  if ((this->_Widget).Object == (SColorWheel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorWheel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SColorWheel::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SColorWheel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorWheel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4e681;
  }
  bVar6 = 0x20;
LAB_142f4e681:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SColorWheel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorWheel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SColorWheel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorWheel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SColorWheel *)0x0;
  if (__return_storage_ptr__->Object == (SColorWheel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorWheel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4e750

TSharedRef<SExpanderArrow,1> * __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>_&&>_>
              *this,TSharedRef<SExpanderArrow,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SExpanderArrow *pSVar2;
  TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  TSharedRef<SExpanderArrow,1> *pTVar8;
  TSharedPtr<ITableRow,1> local_18;
  
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg0;
  local_18.Object = (ITableRow *)pTVar3->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (pTVar3->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SExpanderArrow::Construct(pSVar2,param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_142f4e821;
  }
  bVar7 = 0x20;
LAB_142f4e821:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar7;
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SExpanderArrow *)0x0;
  if (__return_storage_ptr__->Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4e8f0

TSharedRef<SExpanderArrow,1> * __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>_&&>_>
::operator<<=(void *this,TSharedRef<SExpanderArrow,1> *__return_storage_ptr__,FArguments *param_1)

{
  SExpanderArrow *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  TSharedRef<SExpanderArrow,1> *pTVar6;
  TSharedPtr<ITableRow,1> local_18;
  
  if (*(longlong *)this == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedRef<SExpanderArrow,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  SWidget::SWidgetConstruct(*(SWidget **)this,(FSlateBaseNamedArgs *)param_1);
  this_00 = *(SExpanderArrow **)this;
  local_18.Object = *(ITableRow **)**(longlong **)((longlong)this + 0x10);
  local_18.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)((undefined8 *)**(longlong **)((longlong)this + 0x10))[1];
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SExpanderArrow::Construct(this_00,param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (*(longlong *)this == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedRef<SExpanderArrow,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  plVar1 = *(longlong **)this;
  if ((*(byte *)(plVar1 + 6) & 0x10) == 0) {
    cVar4 = (**(code **)(*plVar1 + 0x228))(plVar1);
    bVar5 = 0;
    if (cVar4 == '\0') goto LAB_142f4e9c1;
  }
  bVar5 = 0x20;
LAB_142f4e9c1:
  *(byte *)(plVar1 + 6) = *(byte *)(plVar1 + 6) & 0xdf;
  *(byte *)(plVar1 + 6) = *(byte *)(plVar1 + 6) | bVar5;
  if (*(longlong *)this == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedRef<SExpanderArrow,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  *(byte *)(*(longlong *)this + 0x31) = *(byte *)(*(longlong *)this + 0x31) | 4;
  if (*(longlong *)this == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedRef<SExpanderArrow,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->Object = *(SExpanderArrow **)this;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 8);
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)this = 0;
  if (__return_storage_ptr__->Object == (SExpanderArrow *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedRef<SExpanderArrow,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4ea90

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SExpanderArrow,1> * __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SItemEditor,1>_&&>_>::operator<<=
          (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SItemEditor,1>_&&>_>
           *this,TSharedRef<SExpanderArrow,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SExpanderArrow *pSVar2;
  TSharedRef<SItemEditor,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  TSharedRef<SExpanderArrow,1> *pTVar8;
  TSharedPtr<ITableRow,1> local_18;
  
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg0;
  local_18.Object = (ITableRow *)pTVar3->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (pTVar3->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SExpanderArrow::Construct(pSVar2,param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_142f4eb61;
  }
  bVar7 = 0x20;
LAB_142f4eb61:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar7;
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SExpanderArrow *)0x0;
  if (__return_storage_ptr__->Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4ec30

TSharedRef<SEyeDropperButton,1> * __thiscall
TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SEyeDropperButton,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SEyeDropperButton *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SEyeDropperButton,1> *pTVar7;
  
  if ((this->_Widget).Object == (SEyeDropperButton *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SEyeDropperButton,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SEyeDropperButton::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SEyeDropperButton *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SEyeDropperButton,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4ecd1;
  }
  bVar6 = 0x20;
LAB_142f4ecd1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SEyeDropperButton *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SEyeDropperButton,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SEyeDropperButton *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SEyeDropperButton,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SEyeDropperButton *)0x0;
  if (__return_storage_ptr__->Object == (SEyeDropperButton *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SEyeDropperButton,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4eda0

TSharedRef<SFxWidget,1> * __thiscall
TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SFxWidget,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SFxWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SFxWidget,1> *pTVar7;
  
  if ((this->_Widget).Object == (SFxWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SFxWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SFxWidget::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SFxWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SFxWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4ee41;
  }
  bVar6 = 0x20;
LAB_142f4ee41:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SFxWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SFxWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SFxWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SFxWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SFxWidget *)0x0;
  if (__return_storage_ptr__->Object == (SFxWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SFxWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4ef10

TSharedRef<SHeader,1> * __thiscall
TSlateDecl<SHeader,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SHeader,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SHeader,1> *__return_storage_ptr__,FArguments *param_1)

{
  undefined1 *puVar1;
  SHeader *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SHeader,1> *pTVar7;
  
  if ((this->_Widget).Object == (SHeader *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SHeader,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SHeader::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SHeader *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SHeader,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->field_0x30 & 0x10) == 0) {
    cVar5 = (**(code **)(*(longlong *)pSVar2 + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4efb1;
  }
  bVar6 = 0x20;
LAB_142f4efb1:
  pSVar2->field_0x30 = pSVar2->field_0x30 & 0xdf;
  pSVar2->field_0x30 = pSVar2->field_0x30 | bVar6;
  if ((this->_Widget).Object == (SHeader *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SHeader,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x31;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object == (SHeader *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SHeader,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SHeader *)0x0;
  if (__return_storage_ptr__->Object == (SHeader *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SHeader,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4f080

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SInlineEditableTextBlock,1> * __thiscall
TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SInlineEditableTextBlock,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SInlineEditableTextBlock *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SInlineEditableTextBlock,1> *pTVar7;
  
  if ((this->_Widget).Object == (SInlineEditableTextBlock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SInlineEditableTextBlock,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SInlineEditableTextBlock::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SInlineEditableTextBlock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SInlineEditableTextBlock,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4f121;
  }
  bVar6 = 0x20;
LAB_142f4f121:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SInlineEditableTextBlock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SInlineEditableTextBlock,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SInlineEditableTextBlock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SInlineEditableTextBlock,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SInlineEditableTextBlock *)0x0;
  if (__return_storage_ptr__->Object == (SInlineEditableTextBlock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SInlineEditableTextBlock,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4f1f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SItemEditor,1> * __thiscall
TSlateDecl<SItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>::
operator<<=(TSlateDecl<SItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
            *this,TSharedRef<SItemEditor,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SItemEditor *pSVar2;
  FTestData *pFVar3;
  TSharedRef<STableViewBase,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<SItemEditor,1> *pTVar10;
  FArguments *pFVar11;
  undefined1 local_360 [8];
  ForAnyElementType FStack_358;
  ulonglong local_350;
  FDestructionSentinel local_348;
  FTestData *local_330;
  TReferenceControllerBase<1> *pTStack_328;
  FArguments local_320;
  
  if ((this->_Widget).Object == (SItemEditor *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<SItemEditor,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->_padding_,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pFVar3 = (param_1->_ItemToEdit).Object;
  pTVar4 = this->_RequiredArgs->Arg0;
  pTVar5 = (param_1->_ItemToEdit).SharedReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_330 = (pSVar2->ItemToEdit).Object;
  pTStack_328 = (pSVar2->ItemToEdit).SharedReferenceCount.ReferenceController;
  (pSVar2->ItemToEdit).Object = pFVar3;
  (pSVar2->ItemToEdit).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_328);
  pFVar11 = STableRow<TSharedPtr<FTestData,1>_>::FArguments::FArguments(&local_320);
  TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
  ::operator=(&pFVar11->_OnCanAcceptDrop,&param_1->_OnCanAcceptDrop);
  TDelegate<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
  ::operator=(&pFVar11->_OnAcceptDrop,&param_1->_OnAcceptDrop);
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pFVar11->_OnDragDetected,&param_1->_OnDragDetected);
  local_350 = 0;
  local_360 = (undefined1  [8])0x0;
  FStack_358.Data = (FScriptContainerElement *)0x0;
  (pFVar11->_Padding).Value.Left = 0.0;
  (pFVar11->_Padding).Value.Top = 0.0;
  (pFVar11->_Padding).Value.Right = 0.0;
  (pFVar11->_Padding).Value.Bottom = 0.0;
  (pFVar11->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_360);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_360,
             (FWriteAccessScope *)&local_348);
  if (((int)local_350 != 0) && (FStack_358.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_358.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_358,0,0,0x10);
    local_350 = local_350 & 0xffffffff00000000;
  }
  if (local_348.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_348.Accessor,&local_348);
  }
  if (FStack_358.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_358.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_360);
  SMultiColumnTableRow<TSharedPtr<FTestData,1>_>::Construct
            ((SMultiColumnTableRow<TSharedPtr<FTestData,1>_> *)pSVar2,pFVar11,pTVar4);
  STableRow<TSharedPtr<FTestData,1>_>::FArguments::~FArguments(&local_320);
  if ((this->_Widget).Object == (SItemEditor *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<SItemEditor,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_142f4f406;
  }
  bVar9 = 0x20;
LAB_142f4f406:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar9;
  if ((this->_Widget).Object == (SItemEditor *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<SItemEditor,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SItemEditor *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<SItemEditor,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SItemEditor *)0x0;
  if (__return_storage_ptr__->Object == (SItemEditor *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<SItemEditor,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4f4e0

TSharedRef<SStarshipGallery::SListGalleryWidget,1> * __thiscall
TSlateDecl<SStarshipGallery::SListGalleryWidget,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SStarshipGallery::SListGalleryWidget,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SStarshipGallery::SListGalleryWidget,1> *__return_storage_ptr__,
          FArguments *param_1)

{
  byte *pbVar1;
  SListGalleryWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SStarshipGallery::SListGalleryWidget,1> *pTVar7;
  
  if ((this->_Widget).Object == (SListGalleryWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SStarshipGallery::SListGalleryWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SStarshipGallery::SListGalleryWidget::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SListGalleryWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SStarshipGallery::SListGalleryWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4f581;
  }
  bVar6 = 0x20;
LAB_142f4f581:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SListGalleryWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SStarshipGallery::SListGalleryWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SListGalleryWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SStarshipGallery::SListGalleryWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SListGalleryWidget *)0x0;
  if (__return_storage_ptr__->Object == (SListGalleryWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SStarshipGallery::SListGalleryWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4f650

TSharedRef<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,1> * __thiscall
TSlateDecl<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&,int_&,int_&>_>
::operator<<=(TSlateDecl<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&,int_&,int_&>_>
              *this,TSharedRef<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&,int_&,int_&>
  *pTVar4;
  SListViewPinnedRowWidget *pSVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,1> *pTVar10;
  TSharedRef<SListView<TSharedPtr<int,1>_>,1> local_28;
  TSharedPtr<ITableRow,1> local_18;
  
  if ((this->_Widget).Object == (SListViewPinnedRowWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,1> *)(*pcVar6)()
      ;
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pTVar4 = this->_RequiredArgs;
  pSVar5 = (this->_Widget).Object;
  iVar2 = *pTVar4->Arg3;
  iVar3 = *pTVar4->Arg2;
  local_28.Object = pTVar4->Arg1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar4->Arg1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = pTVar4->Arg0->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (pTVar4->Arg0->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget::Construct
            (pSVar5,param_1,&local_18,&local_28,iVar3,iVar2);
  if ((this->_Widget).Object == (SListViewPinnedRowWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,1> *)(*pcVar6)()
      ;
      return pTVar10;
    }
  }
  pSVar5 = (this->_Widget).Object;
  if ((pSVar5->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar5->_padding_ + 0x228))(pSVar5);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_142f4f755;
  }
  bVar9 = 0x20;
LAB_142f4f755:
  *(byte *)&pSVar5->_padding_ = (byte)pSVar5->_padding_ & 0xdf;
  *(byte *)&pSVar5->_padding_ = (byte)pSVar5->_padding_ | bVar9;
  if ((this->_Widget).Object == (SListViewPinnedRowWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,1> *)(*pcVar6)()
      ;
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SListViewPinnedRowWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,1> *)(*pcVar6)()
      ;
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SListViewPinnedRowWidget *)0x0;
  if (__return_storage_ptr__->Object == (SListViewPinnedRowWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,1> *)(*pcVar6)()
      ;
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4f820

TSharedRef<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,1> * __thiscall
TSlateDecl<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&,int_&,int_&>_>
::operator<<=(TSlateDecl<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&,int_&,int_&>_>
              *this,TSharedRef<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&,int_&,int_&>
  *pTVar4;
  SListViewPinnedRowWidget *pSVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,1> *pTVar10;
  TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1> local_28;
  TSharedPtr<ITableRow,1> local_18;
  
  if ((this->_Widget).Object == (SListViewPinnedRowWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pTVar4 = this->_RequiredArgs;
  pSVar5 = (this->_Widget).Object;
  iVar2 = *pTVar4->Arg3;
  iVar3 = *pTVar4->Arg2;
  local_28.Object = pTVar4->Arg1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar4->Arg1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = pTVar4->Arg0->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (pTVar4->Arg0->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget::Construct
            (pSVar5,param_1,&local_18,&local_28,iVar3,iVar2);
  if ((this->_Widget).Object == (SListViewPinnedRowWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  pSVar5 = (this->_Widget).Object;
  if ((pSVar5->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar5->_padding_ + 0x228))(pSVar5);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_142f4f925;
  }
  bVar9 = 0x20;
LAB_142f4f925:
  *(byte *)&pSVar5->_padding_ = (byte)pSVar5->_padding_ & 0xdf;
  *(byte *)&pSVar5->_padding_ = (byte)pSVar5->_padding_ | bVar9;
  if ((this->_Widget).Object == (SListViewPinnedRowWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SListViewPinnedRowWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SListViewPinnedRowWidget *)0x0;
  if (__return_storage_ptr__->Object == (SListViewPinnedRowWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4f9f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SMultiLineEditableText,1> * __thiscall
TSlateDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SMultiLineEditableText,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SMultiLineEditableText *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SMultiLineEditableText,1> *pTVar7;
  
  if ((this->_Widget).Object == (SMultiLineEditableText *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiLineEditableText,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SMultiLineEditableText::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SMultiLineEditableText *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiLineEditableText,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4fa91;
  }
  bVar6 = 0x20;
LAB_142f4fa91:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SMultiLineEditableText *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiLineEditableText,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SMultiLineEditableText *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiLineEditableText,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SMultiLineEditableText *)0x0;
  if (__return_storage_ptr__->Object == (SMultiLineEditableText *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiLineEditableText,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4fb60

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SMultiLineEditableTextBox,1> * __thiscall
TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SMultiLineEditableTextBox,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SMultiLineEditableTextBox *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SMultiLineEditableTextBox,1> *pTVar7;
  
  if ((this->_Widget).Object == (SMultiLineEditableTextBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiLineEditableTextBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SMultiLineEditableTextBox::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SMultiLineEditableTextBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiLineEditableTextBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4fc01;
  }
  bVar6 = 0x20;
LAB_142f4fc01:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SMultiLineEditableTextBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiLineEditableTextBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SMultiLineEditableTextBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiLineEditableTextBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SMultiLineEditableTextBox *)0x0;
  if (__return_storage_ptr__->Object == (SMultiLineEditableTextBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiLineEditableTextBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4fcd0

TSharedRef<SProgressBar,1> * __thiscall
TSlateDecl<SProgressBar,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SProgressBar,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SProgressBar,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SProgressBar *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SProgressBar,1> *pTVar7;
  
  if ((this->_Widget).Object == (SProgressBar *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SProgressBar,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SProgressBar::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SProgressBar *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SProgressBar,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4fd71;
  }
  bVar6 = 0x20;
LAB_142f4fd71:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SProgressBar *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SProgressBar,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SProgressBar *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SProgressBar,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SProgressBar *)0x0;
  if (__return_storage_ptr__->Object == (SProgressBar *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SProgressBar,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4fe40

TSharedRef<SSearchBox,1> * __thiscall
TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SSearchBox,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SSearchBox *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SSearchBox,1> *pTVar7;
  
  if ((this->_Widget).Object == (SSearchBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSearchBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SSearchBox::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SSearchBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSearchBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f4fee1;
  }
  bVar6 = 0x20;
LAB_142f4fee1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SSearchBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSearchBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SSearchBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSearchBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SSearchBox *)0x0;
  if (__return_storage_ptr__->Object == (SSearchBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSearchBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f4ffb0

TSharedRef<SSlider,1> * __thiscall
TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SSlider,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SSlider *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SSlider,1> *pTVar7;
  
  if ((this->_Widget).Object == (SSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSlider,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SSlider::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSlider,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f50051;
  }
  bVar6 = 0x20;
LAB_142f50051:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSlider,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSlider,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SSlider *)0x0;
  if (__return_storage_ptr__->Object == (SSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSlider,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f50120

TSharedRef<SSpinningImage,1> * __thiscall
TSlateDecl<SSpinningImage,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SSpinningImage,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SSpinningImage,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SSpinningImage *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SSpinningImage,1> *pTVar7;
  
  if ((this->_Widget).Object == (SSpinningImage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinningImage,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SSpinningImage::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SSpinningImage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinningImage,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f501c1;
  }
  bVar6 = 0x20;
LAB_142f501c1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SSpinningImage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinningImage,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SSpinningImage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinningImage,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SSpinningImage *)0x0;
  if (__return_storage_ptr__->Object == (SSpinningImage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinningImage,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f50290

TSharedRef<SStarshipGallery,1> * __thiscall
TSlateDecl<SStarshipGallery,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SStarshipGallery,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SStarshipGallery,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SStarshipGallery *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SStarshipGallery,1> *pTVar7;
  
  if ((this->_Widget).Object == (SStarshipGallery *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SStarshipGallery,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SStarshipGallery::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SStarshipGallery *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SStarshipGallery,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f50331;
  }
  bVar6 = 0x20;
LAB_142f50331:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SStarshipGallery *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SStarshipGallery,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SStarshipGallery *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SStarshipGallery,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SStarshipGallery *)0x0;
  if (__return_storage_ptr__->Object == (SStarshipGallery *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SStarshipGallery,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f50400

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<STestMenu,1> * __thiscall
TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<STestMenu,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  STestMenu *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<STestMenu,1> *pTVar7;
  
  if ((this->_Widget).Object == (STestMenu *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STestMenu,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  STestMenu::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (STestMenu *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STestMenu,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f504a1;
  }
  bVar6 = 0x20;
LAB_142f504a1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (STestMenu *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STestMenu,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (STestMenu *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STestMenu,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STestMenu *)0x0;
  if (__return_storage_ptr__->Object == (STestMenu *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STestMenu,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f50570

TSharedRef<STextComboBox,1> * __thiscall
TSlateDecl<STextComboBox,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<STextComboBox,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<STextComboBox,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  STextComboBox *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<STextComboBox,1> *pTVar7;
  
  if ((this->_Widget).Object == (STextComboBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STextComboBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  STextComboBox::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (STextComboBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STextComboBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f50611;
  }
  bVar6 = 0x20;
LAB_142f50611:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (STextComboBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STextComboBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (STextComboBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STextComboBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STextComboBox *)0x0;
  if (__return_storage_ptr__->Object == (STextComboBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STextComboBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f506e0

TSharedRef<STextComboPopup,1> * __thiscall
TSlateDecl<STextComboPopup,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<STextComboPopup,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<STextComboPopup,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  STextComboPopup *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<STextComboPopup,1> *pTVar7;
  
  if ((this->_Widget).Object == (STextComboPopup *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STextComboPopup,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  STextComboPopup::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (STextComboPopup *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STextComboPopup,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f50781;
  }
  bVar6 = 0x20;
LAB_142f50781:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (STextComboPopup *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STextComboPopup,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (STextComboPopup *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STextComboPopup,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STextComboPopup *)0x0;
  if (__return_storage_ptr__->Object == (STextComboPopup *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STextComboPopup,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f50850

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SThemeColorBlocksBar,1> * __thiscall
TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SThemeColorBlocksBar,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SThemeColorBlocksBar *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SThemeColorBlocksBar,1> *pTVar7;
  
  if ((this->_Widget).Object == (SThemeColorBlocksBar *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SThemeColorBlocksBar,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SThemeColorBlocksBar::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SThemeColorBlocksBar *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SThemeColorBlocksBar,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f508f1;
  }
  bVar6 = 0x20;
LAB_142f508f1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SThemeColorBlocksBar *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SThemeColorBlocksBar,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SThemeColorBlocksBar *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SThemeColorBlocksBar,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SThemeColorBlocksBar *)0x0;
  if (__return_storage_ptr__->Object == (SThemeColorBlocksBar *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SThemeColorBlocksBar,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f509c0

TSharedRef<SThrobber,1> * __thiscall
TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SThrobber,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SThrobber *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SThrobber,1> *pTVar7;
  
  if ((this->_Widget).Object == (SThrobber *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SThrobber,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SThrobber::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SThrobber *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SThrobber,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f50a61;
  }
  bVar6 = 0x20;
LAB_142f50a61:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SThrobber *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SThrobber,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SThrobber *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SThrobber,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SThrobber *)0x0;
  if (__return_storage_ptr__->Object == (SThrobber *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SThrobber,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f50b30

TSharedRef<SUniformGridPanel,1> * __thiscall
TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SUniformGridPanel,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SUniformGridPanel *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SUniformGridPanel,1> *pTVar7;
  
  if ((this->_Widget).Object == (SUniformGridPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SUniformGridPanel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SUniformGridPanel::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SUniformGridPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SUniformGridPanel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f50bd1;
  }
  bVar6 = 0x20;
LAB_142f50bd1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SUniformGridPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SUniformGridPanel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SUniformGridPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SUniformGridPanel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SUniformGridPanel *)0x0;
  if (__return_storage_ptr__->Object == (SUniformGridPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SUniformGridPanel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f50ca0

TSharedRef<SUserWidgetExample,1> * __thiscall
TSlateDecl<SUserWidgetExample,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SUserWidgetExample,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SUserWidgetExample,1> *__return_storage_ptr__,FArguments *param_1)

{
  undefined1 *puVar1;
  SUserWidgetExample *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SUserWidgetExample,1> *pTVar7;
  
  if ((this->_Widget).Object == (SUserWidgetExample *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SUserWidgetExample,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  (**(code **)(*(longlong *)pSVar2 + 0x248))(pSVar2,param_1);
  if ((this->_Widget).Object == (SUserWidgetExample *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SUserWidgetExample,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->field_0x30 & 0x10) == 0) {
    cVar5 = (**(code **)(*(longlong *)pSVar2 + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f50d45;
  }
  bVar6 = 0x20;
LAB_142f50d45:
  pSVar2->field_0x30 = pSVar2->field_0x30 & 0xdf;
  pSVar2->field_0x30 = pSVar2->field_0x30 | bVar6;
  if ((this->_Widget).Object == (SUserWidgetExample *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SUserWidgetExample,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x31;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object == (SUserWidgetExample *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SUserWidgetExample,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SUserWidgetExample *)0x0;
  if (__return_storage_ptr__->Object == (SUserWidgetExample *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SUserWidgetExample,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f50e10

TSharedRef<SVolumeControl,1> * __thiscall
TSlateDecl<SVolumeControl,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SVolumeControl,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SVolumeControl,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SVolumeControl *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SVolumeControl,1> *pTVar7;
  
  if ((this->_Widget).Object == (SVolumeControl *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SVolumeControl,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SVolumeControl::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SVolumeControl *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SVolumeControl,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f50eb1;
  }
  bVar6 = 0x20;
LAB_142f50eb1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SVolumeControl *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SVolumeControl,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SVolumeControl *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SVolumeControl,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SVolumeControl *)0x0;
  if (__return_storage_ptr__->Object == (SVolumeControl *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SVolumeControl,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142f50f80

TSharedRef<SWidgetGallery,1> * __thiscall
TSlateDecl<SWidgetGallery,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SWidgetGallery,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SWidgetGallery,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SWidgetGallery *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SWidgetGallery,1> *pTVar7;
  
  if ((this->_Widget).Object == (SWidgetGallery *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SWidgetGallery,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SWidgetGallery::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SWidgetGallery *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SWidgetGallery,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f51021;
  }
  bVar6 = 0x20;
LAB_142f51021:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SWidgetGallery *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SWidgetGallery,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SWidgetGallery *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SWidgetGallery,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SWidgetGallery *)0x0;
  if (__return_storage_ptr__->Object == (SWidgetGallery *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SWidgetGallery,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// Expose<SEditableTextBox> @ 143018820

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::Expose<SEditableTextBox>
          (TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SEditableTextBox,1> *param_1)

{
  SEditableTextBox *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<SEditableTextBox,1> local_18;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  TSharedPtr<SEditableTextBox,1>::~TSharedPtr<SEditableTextBox,1>(&local_18);
  return this;
}

// Expose<SUniformGridPanel> @ 143018870

TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>::Expose<SUniformGridPanel>
          (TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SUniformGridPanel,1> *param_1)

{
  SUniformGridPanel *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// TSlateDecl<SColorThemesViewer,RequiredArgs::T0RequiredArgs> @ 143019c80

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SColorThemesViewer,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SColorThemesViewer,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SColorThemesViewer,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SColorThemesViewer,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SColorThemesViewer,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SColorThemesViewer *pSVar9;
  SColorThemesViewer *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SColorThemesViewer *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x318);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SColorThemesViewer *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSColorThemesViewer___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x308);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SColorThemesViewer__6B_;
    pSVar9 = (SColorThemesViewer *)(pTVar6 + 1);
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d]._padding_ = 0;
    pTVar6[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e]._padding_ = 0;
    pTVar6[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f]._padding_ = 2;
    *(undefined2 *)&pTVar6[0x2f].SharedReferenceCount = 0;
    pTVar6[0x31]._padding_ = 0;
    pTVar6[0x30]._padding_ = 0;
    pTVar6[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x30].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SColorThemesViewer *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SColorThemesViewer,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_143019e13;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
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
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_143019e13:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SColorThemesViewer,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SColorThemesViewer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SColorThemesViewer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SColorThemesViewer,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x308);
  return this;
}

// TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs> @ 143019ed0

TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs>::
TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  STextEntryPopup *pSVar9;
  STextEntryPopup *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STextEntryPopup *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x2e8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (STextEntryPopup *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSTextEntryPopup___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x2d8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7STextEntryPopup__6B_;
    pSVar9 = (STextEntryPopup *)(pTVar6 + 1);
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d]._padding_ = 0;
    pTVar6[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (STextEntryPopup *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14301a034;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
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
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14301a034:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (STextEntryPopup *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (STextEntryPopup *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2d8);
  return this;
}

// TSlateDecl<SThemeColorBlock,RequiredArgs::T0RequiredArgs> @ 14301a100

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SThemeColorBlock,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SThemeColorBlock,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SThemeColorBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SThemeColorBlock,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SThemeColorBlock,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SThemeColorBlock *pSVar9;
  SThemeColorBlock *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SThemeColorBlock *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x390);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SThemeColorBlock *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSThemeColorBlock___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x380);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SThemeColorBlock__6B_;
    pSVar9 = (SThemeColorBlock *)(pTVar6 + 1);
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d]._padding_ = 0;
    pTVar6[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e]._padding_ = 0;
    pTVar6[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f]._padding_ = 0;
    pTVar6[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x30]._padding_ = 0;
    pTVar6[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x30].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x31]._padding_ = 0;
    pTVar6[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x31].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x32]._padding_ = 0;
    pTVar6[0x32].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined2 *)&pTVar6[0x33]._padding_ = 0;
    pTVar6[0x34].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x34].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x33].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x33].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x34]._padding_ = 0;
    *(undefined2 *)&pTVar6[0x35]._padding_ = 0;
    pTVar6[0x36].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x36].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x35].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x36]._padding_ = 0;
    *(undefined2 *)&pTVar6[0x37]._padding_ = 0;
    pTVar6[0x38].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x38].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x37].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x37].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x38]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SThemeColorBlock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SThemeColorBlock,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14301a2fa;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
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
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14301a2fa:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SThemeColorBlock,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SThemeColorBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SThemeColorBlock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SThemeColorBlock,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x380);
  return this;
}

// operator<<= @ 14301b810

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SMultiBoxWidget,1> * __thiscall
TSlateDecl<SMultiBoxWidget,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SMultiBoxWidget,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SMultiBoxWidget,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SMultiBoxWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SMultiBoxWidget,1> *pTVar7;
  
  if ((this->_Widget).Object == (SMultiBoxWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiBoxWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SMultiBoxWidget::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SMultiBoxWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiBoxWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14301b8b1;
  }
  bVar6 = 0x20;
LAB_14301b8b1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SMultiBoxWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiBoxWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SMultiBoxWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiBoxWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SMultiBoxWidget *)0x0;
  if (__return_storage_ptr__->Object == (SMultiBoxWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiBoxWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// Expose<SSpinBox<unsigned_short>_> @ 143048290

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs>::Expose<SSpinBox<unsigned_short>_>
          (TSlateDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SSpinBox<unsigned_short>,1> *param_1)

{
  SSpinBox<unsigned_short> *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// Expose<SEditableTextBox> @ 1430482e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>::Expose<SEditableTextBox>
          (TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SEditableTextBox,1> *param_1)

{
  TSharedPtr<SEditableTextBox,1> local_18;
  
  local_18.SharedReferenceCount.ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  local_18.Object = (SEditableTextBox *)(this->_Widget).Object;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (param_1 != &local_18) {
    param_1->Object = local_18.Object;
    local_18.Object = (SEditableTextBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_1->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  TSharedPtr<SEditableTextBox,1>::~TSharedPtr<SEditableTextBox,1>(&local_18);
  return this;
}

// Expose<SErrorText> @ 143048350

TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs>::Expose<SErrorText>
          (TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SErrorText,1> *param_1)

{
  SErrorText *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<SErrorText,1> local_18;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  TSharedPtr<SErrorText,1>::~TSharedPtr<SErrorText,1>(&local_18);
  return this;
}

// Expose<SInlineEditableTextBlock> @ 1430483a0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs>::Expose<SInlineEditableTextBlock>
          (TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SInlineEditableTextBlock,1> *param_1)

{
  SInlineEditableTextBlock *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<SInlineEditableTextBlock,1> local_18;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  TSharedPtr<SInlineEditableTextBlock,1>::~TSharedPtr<SInlineEditableTextBlock,1>(&local_18);
  return this;
}

// Expose<SInvalidationPanel> @ 1430483f0

TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs>::Expose<SInvalidationPanel>
          (TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SInvalidationPanel,1> *param_1)

{
  SInvalidationPanel *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<SInvalidationPanel,1> local_18;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  TSharedPtr<SInvalidationPanel,1>::~TSharedPtr<SInvalidationPanel,1>(&local_18);
  return this;
}

// Expose<SMultiLineEditableTextBox> @ 143048440

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>::
Expose<SMultiLineEditableTextBox>
          (TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SMultiLineEditableTextBox,1> *param_1)

{
  SMultiLineEditableTextBox *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<SMultiLineEditableTextBox,1> local_18;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  TSharedPtr<SMultiLineEditableTextBox,1>::~TSharedPtr<SMultiLineEditableTextBox,1>(&local_18);
  return this;
}

// Expose<SNotificationList> @ 143048490

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SNotificationList,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SNotificationList,RequiredArgs::T0RequiredArgs>::Expose<SNotificationList>
          (TSlateDecl<SNotificationList,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SNotificationList,1> *param_1)

{
  SNotificationList *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<SNotificationList,1> local_18;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  TSharedPtr<SNotificationList,1>::~TSharedPtr<SNotificationList,1>(&local_18);
  return this;
}

// Expose<SResponsiveGridPanel> @ 1430484e0

TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_> * __thiscall
TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>::Expose<SResponsiveGridPanel>
          (TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_> *this,
          TSharedPtr<SResponsiveGridPanel,1> *param_1)

{
  SResponsiveGridPanel *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<SResponsiveGridPanel,1> local_18;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  TSharedPtr<SResponsiveGridPanel,1>::~TSharedPtr<SResponsiveGridPanel,1>(&local_18);
  return this;
}

// Expose<SRichTextBlock> @ 143048530

TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>::Expose<SRichTextBlock>
          (TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SRichTextBlock,1> *param_1)

{
  SRichTextBlock *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<SRichTextBlock,1> local_18;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  TSharedPtr<SRichTextBlock,1>::~TSharedPtr<SRichTextBlock,1>(&local_18);
  return this;
}

// Expose<SSplineWithHandles> @ 143048580

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs>::Expose<SSplineWithHandles>
          (TSlateDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SSplineWithHandles,1> *param_1)

{
  SSplineWithHandles *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<SSplineWithHandles,1> local_18;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  TSharedPtr<SSplineWithHandles,1>::~TSharedPtr<SSplineWithHandles,1>(&local_18);
  return this;
}

// Expose<STextEntryPopup> @ 1430485d0

TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs>::Expose<STextEntryPopup>
          (TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<STextEntryPopup,1> *param_1)

{
  STextEntryPopup *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<STextEntryPopup,1> local_18;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  TSharedPtr<STextEntryPopup,1>::~TSharedPtr<STextEntryPopup,1>(&local_18);
  return this;
}

// TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs> @ 143055c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs> *
__thiscall
TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
  *pTVar7;
  SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *pSVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTStack_20 = ::operator_new(0x4e0);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)&DAT_00000010;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SComboBox_V__TSharedPtr_UFFontFamily_FTextStyles___00_____00_SharedPointerInternals__6B_
    ;
    SComboButton::SComboButton((SComboButton *)(pTStack_20 + 1));
    pTStack_20[1]._padding_ =
         (longlong)&SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::_vftable__for__SPanel__;
    *(undefined ***)&pTStack_20[0x22].SharedReferenceCount =
         &SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::_vftable__for__IMenuHost__;
    FSlateSound::FSlateSound((FSlateSound *)(pTStack_20 + 0x40));
    FSlateSound::FSlateSound((FSlateSound *)&pTStack_20[0x41].SharedReferenceCount);
    pbVar1 = (byte *)((longlong)&pTStack_20[4]._padding_ + 2);
    *pbVar1 = *pbVar1 | 4;
    pSVar8 = (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)(pTStack_20 + 1);
    pTStack_20[0x44]._padding_ = 0;
    pTStack_20[0x44].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x45]._padding_ = 0;
    pTStack_20[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTStack_20[0x46]._padding_ = 0;
    pTStack_20[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x47]._padding_ = 0;
    pTStack_20[0x47].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x47].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x48]._padding_ = 0;
    pTStack_20[0x48].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x48].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x49]._padding_ = 0;
    pTStack_20[0x49].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x49].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x4a]._padding_ = 0;
    pTStack_20[0x4a].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x4b]._padding_ = 0;
    pTStack_20[0x4b].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x4b].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTStack_20[0x4c]._padding_ = 0;
    pTStack_20[0x4d]._padding_ = 0;
    pTStack_20[0x4d].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x4d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)((longlong)&pTStack_20[4]._padding_ + 3) = 1;
    pTVar9 = pTStack_20;
    local_38._16_8_ = pSVar8;
    if (pSVar8 == (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar5)();
        return pTVar7;
      }
      goto LAB_143055e05;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar9 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pSVar8->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pSVar8->_padding_ = (longlong)pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_143055e05:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
               *)local_38) {
    (this->_Widget).Object = (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)local_38._16_8_;
    local_38._0_8_ = (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
  ~TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
            ((TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *)local_38);
  TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
  ~TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
            ((TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x4d0);
  return this;
}

// TSlateDecl<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs> @ 143055ed0

TSlateDecl<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs> *
__thiscall
TSlateDecl<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
  *pTVar7;
  SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *pSVar8;
  SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0xa10);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SListView_V__TSharedPtr_UFFontFamily_FTextStyles___00_____00_SharedPointerInternals__6B_
    ;
    SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>::
    SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>
              ((SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *)(pTVar6 + 1),List);
    pSVar8 = (SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *)(pTVar6 + 1);
    if (pSVar8 == (SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_143055ff1;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_143055ff1:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0xa00);
  return this;
}

// TSlateDecl<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T0RequiredArgs> @ 1430560b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T0RequiredArgs> *
__thiscall
TSlateDecl<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T0RequiredArgs>
  *pTVar7;
  SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0xa10);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SListView_V__TSharedRef_UFDocumentInfo_SDocumentsTest___00_____00_SharedPointerInternals__6B_
    ;
    SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::
    SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>
              ((SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)(pTVar6 + 1),List);
    pSVar8 = (SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)(pTVar6 + 1);
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_1430561d6;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_1430561d6:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T0RequiredArgs>
               *)local_38) {
    (this->_Widget).Object =
         (SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)local_38._16_8_;
    local_38._0_8_ = (SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
  ~TSharedPtr<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
            ((TSharedPtr<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)local_38);
  TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
  ~TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
            ((TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)
             (local_38 + 0x10));
  if ((this->_Widget).Object == (SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T0RequiredArgs>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0xa00);
  return this;
}

// TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs> @ 1430562a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  uchar *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TIntrusiveReferenceController<SNumericEntryBox<unsigned_short>,1> *pTVar7;
  TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs> *pTVar8;
  undefined1 local_38 [24];
  TIntrusiveReferenceController<SNumericEntryBox<unsigned_short>,1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SNumericEntryBox<unsigned_short> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = SharedPointerInternals::
           NewIntrusiveReferenceController<1,SNumericEntryBox<unsigned_short>_>();
  local_38._16_8_ = &pTVar7->ObjectStorage;
  pTStack_20 = pTVar7;
  if ((TTypeCompatibleBytes<SNumericEntryBox<unsigned_short>_> *)local_38._16_8_ ==
      (TTypeCompatibleBytes<SNumericEntryBox<unsigned_short>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs> *)
               (*pcVar5)();
      return pTVar8;
    }
  }
  else {
    puVar1 = (pTVar7->ObjectStorage).Pad + 0x10;
    if (((*(longlong *)((pTVar7->ObjectStorage).Pad + 8) == 0) || (*(longlong *)puVar1 == 0)) ||
       (*(int *)(*(longlong *)puVar1 + 8) < 1)) {
      if (pTVar7 != (TIntrusiveReferenceController<SNumericEntryBox<unsigned_short>,1> *)0x0) {
        LOCK();
        *(int *)&pTVar7->_padding_ = (int)pTVar7->_padding_ + 1;
        UNLOCK();
      }
      *(undefined8 *)((pTVar7->ObjectStorage).Pad + 8) = local_38._16_8_;
      if (pTVar7 != *(TIntrusiveReferenceController<SNumericEntryBox<unsigned_short>,1> **)puVar1) {
        if (pTVar7 != (TIntrusiveReferenceController<SNumericEntryBox<unsigned_short>,1> *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)&pTVar7->_padding_ + 4);
          *piVar2 = *piVar2 + 1;
          UNLOCK();
        }
        plVar4 = *(longlong **)puVar1;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        *(TIntrusiveReferenceController<SNumericEntryBox<unsigned_short>,1> **)puVar1 = pTVar7;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pTVar7);
    }
  }
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TIntrusiveReferenceController<SNumericEntryBox<unsigned_short>,1> *)0x0) {
    LOCK();
    *(int *)&pTStack_20->_padding_ = (int)pTStack_20->_padding_ + 1;
    UNLOCK();
  }
  if (this != (TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs> *)local_38)
  {
    (this->_Widget).Object = (SNumericEntryBox<unsigned_short> *)local_38._16_8_;
    local_38._0_8_ = (SNumericEntryBox<unsigned_short> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SNumericEntryBox<unsigned_short>,1>::~TSharedPtr<SNumericEntryBox<unsigned_short>,1>
            ((TSharedPtr<SNumericEntryBox<unsigned_short>,1> *)local_38);
  TSharedRef<SNumericEntryBox<unsigned_short>,1>::~TSharedRef<SNumericEntryBox<unsigned_short>,1>
            ((TSharedRef<SNumericEntryBox<unsigned_short>,1> *)(local_38 + 0x10));
  if (((this->_Widget).Object == (SNumericEntryBox<unsigned_short> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs> *)
             (*pcVar5)();
    return pTVar8;
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x488);
  return this;
}

// TSlateDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs> @ 143056450

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs> *pTVar7;
  SSpinBox<unsigned_short> *pSVar8;
  SSpinBox<unsigned_short> *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SSpinBox<unsigned_short> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x6e8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SSpinBox<unsigned_short> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__SSpinBox_G___00_SharedPointerInternals__6B_;
    SSpinBox<unsigned_short>::SSpinBox<unsigned_short>((SSpinBox<unsigned_short> *)(pTVar6 + 1));
    pSVar8 = (SSpinBox<unsigned_short> *)(pTVar6 + 1);
    if (pSVar8 == (SSpinBox<unsigned_short> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14305656f;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14305656f:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SSpinBox<unsigned_short> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SSpinBox<unsigned_short> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x6d8);
  return this;
}

// TSlateDecl<SAnimTest,RequiredArgs::T0RequiredArgs> @ 143056630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SAnimTest,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SAnimTest,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SAnimTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAnimTest,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SAnimTest,RequiredArgs::T0RequiredArgs> *pTVar7;
  SAnimTest *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SAnimTest *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x350);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SAnimTest *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VSAnimTest___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x340);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SAnimTest__6B_;
    FCurveSequence::FCurveSequence((FCurveSequence *)(pTVar6 + 0x2c));
    FCurveHandle::FCurveHandle((FCurveHandle *)(pTVar6 + 0x33),(FCurveSequence *)0x0,0);
    FCurveHandle::FCurveHandle((FCurveHandle *)(pTVar6 + 0x34),(FCurveSequence *)0x0,0);
    pSVar8 = (SAnimTest *)(pTVar6 + 1);
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SAnimTest *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SAnimTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_1430567a2;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_1430567a2:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SAnimTest,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SAnimTest *)local_38._16_8_;
    local_38._0_8_ = (SAnimTest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SAnimTest,1>::~TSharedPtr<SAnimTest,1>((TSharedPtr<SAnimTest,1> *)local_38);
  TSharedRef<SAnimTest,1>::~TSharedRef<SAnimTest,1>((TSharedRef<SAnimTest,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SAnimTest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SAnimTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x340);
  return this;
}

// TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs> @ 143056870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs> *pTVar6;
  SColorPickerTest *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SColorPickerTest *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTStack_20 = ::operator_new(0x2f8);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar7 = (SColorPickerTest *)&DAT_00000010;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSColorPickerTest___00_SharedPointerInternals__6B_;
    memset(pTStack_20 + 1,0,0x2e8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTStack_20 + 1));
    pSVar7 = (SColorPickerTest *)(pTStack_20 + 1);
    pTStack_20[1]._padding_ = (longlong)&___7SColorPickerTest__6B_;
    pTStack_20[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2c]._padding_ = 0;
    *(undefined1 *)&pTStack_20[0x2c].SharedReferenceCount = 0;
    pTStack_20[0x2e]._padding_ = 0;
    pTStack_20[0x2d]._padding_ = 0;
    pTStack_20[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2f]._padding_ = 0;
    pTVar8 = pTStack_20;
    local_38._16_8_ = pSVar7;
    if (pSVar7 == (SColorPickerTest *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar6;
      }
      goto LAB_1430569e7;
    }
  }
  if (((pSVar7->_padding_ == 0) || (pSVar7->_padding_ == 0)) ||
     (*(int *)(pSVar7->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar7->_padding_ = (longlong)pSVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar7->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar7->_padding_;
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
      pSVar7->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_1430569e7:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SColorPickerTest *)local_38._16_8_;
    local_38._0_8_ = (SColorPickerTest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SColorPickerTest,1>::~TSharedPtr<SColorPickerTest,1>
            ((TSharedPtr<SColorPickerTest,1> *)local_38);
  TSharedRef<SColorPickerTest,1>::~TSharedRef<SColorPickerTest,1>
            ((TSharedRef<SColorPickerTest,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SColorPickerTest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar6;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e8);
  return this;
}

// TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs> @ 143056ac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs> *pTVar7;
  SCustomPaintWidget *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SCustomPaintWidget *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2d0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SCustomPaintWidget *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSCustomPaintWidget___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x2c0);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SCustomPaintWidget__6B_;
    TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy> *)
               &pTVar6[0x2b].SharedReferenceCount);
    pSVar8 = (SCustomPaintWidget *)(pTVar6 + 1);
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SCustomPaintWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_143056c10;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_143056c10:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SCustomPaintWidget *)local_38._16_8_;
    local_38._0_8_ = (SCustomPaintWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SCustomPaintWidget,1>::~TSharedPtr<SCustomPaintWidget,1>
            ((TSharedPtr<SCustomPaintWidget,1> *)local_38);
  TSharedRef<SCustomPaintWidget,1>::~TSharedRef<SCustomPaintWidget,1>
            ((TSharedRef<SCustomPaintWidget,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SCustomPaintWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2c0);
  return this;
}

// TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs> @ 143056ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs> *pTVar7;
  SDPIScaler *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SDPIScaler *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x288);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SDPIScaler *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VSDPIScaler___00_SharedPointerInternals__6B_
    ;
    SDPIScaler::SDPIScaler((SDPIScaler *)(pTVar6 + 1));
    pSVar8 = (SDPIScaler *)(pTVar6 + 1);
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SDPIScaler *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_143056e04;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_143056e04:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SDPIScaler *)local_38._16_8_;
    local_38._0_8_ = (SDPIScaler *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SDPIScaler,1>::~TSharedPtr<SDPIScaler,1>((TSharedPtr<SDPIScaler,1> *)local_38);
  TSharedRef<SDPIScaler,1>::~TSharedRef<SDPIScaler,1>((TSharedRef<SDPIScaler,1> *)(local_38 + 0x10))
  ;
  if ((this->_Widget).Object == (SDPIScaler *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x278);
  return this;
}

// TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs> @ 143056ed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs> *pTVar7;
  SDPIScalingTest *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SDPIScalingTest *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2c8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SDPIScalingTest *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSDPIScalingTest___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x2b8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pSVar8 = (SDPIScalingTest *)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7SDPIScalingTest__6B_;
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SDPIScalingTest *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_143057010;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_143057010:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SDPIScalingTest *)local_38._16_8_;
    local_38._0_8_ = (SDPIScalingTest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SDPIScalingTest,1>::~TSharedPtr<SDPIScalingTest,1>
            ((TSharedPtr<SDPIScalingTest,1> *)local_38);
  TSharedRef<SDPIScalingTest,1>::~TSharedRef<SDPIScalingTest,1>
            ((TSharedRef<SDPIScalingTest,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SDPIScalingTest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2b8);
  return this;
}

// TSlateDecl<SDocumentsTest,RequiredArgs::T1RequiredArgs<FTabManager_*_&>_> @ 1430570e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SDocumentsTest,RequiredArgs::T1RequiredArgs<FTabManager_*_&>_> * __thiscall
TSlateDecl<SDocumentsTest,RequiredArgs::T1RequiredArgs<FTabManager_*_&>_>::
TSlateDecl<SDocumentsTest,RequiredArgs::T1RequiredArgs<FTabManager_*_&>_>
          (TSlateDecl<SDocumentsTest,RequiredArgs::T1RequiredArgs<FTabManager_*_&>_> *this,
          char *param_1,char *param_2,int param_3,T1RequiredArgs<FTabManager_*_&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSlateDecl<SDocumentsTest,RequiredArgs::T1RequiredArgs<FTabManager_*_&>_> *pTVar6;
  SDocumentsTest *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDocumentsTest *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTStack_20 = ::operator_new(0x2d8);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar7 = (SDocumentsTest *)&DAT_00000010;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSDocumentsTest___00_SharedPointerInternals__6B_;
    memset(pTStack_20 + 1,0,0x2c8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTStack_20 + 1));
    pSVar7 = (SDocumentsTest *)(pTStack_20 + 1);
    pTStack_20[1]._padding_ = (longlong)&___7SDocumentsTest__6B_;
    pTStack_20[0x2c]._padding_ = 0;
    pTStack_20[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTStack_20;
    local_38._16_8_ = pSVar7;
    if (pSVar7 == (SDocumentsTest *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSlateDecl<SDocumentsTest,RequiredArgs::T1RequiredArgs<FTabManager_*_&>_> *)
                 (*pcVar4)();
        return pTVar6;
      }
      goto LAB_143057231;
    }
  }
  if (((pSVar7->_padding_ == 0) || (pSVar7->_padding_ == 0)) ||
     (*(int *)(pSVar7->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar7->_padding_ = (longlong)pSVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar7->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar7->_padding_;
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
      pSVar7->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_143057231:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SDocumentsTest,RequiredArgs::T1RequiredArgs<FTabManager_*_&>_> *)local_38)
  {
    (this->_Widget).Object = (SDocumentsTest *)local_38._16_8_;
    local_38._0_8_ = (SDocumentsTest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SDocumentsTest,1>::~TSharedPtr<SDocumentsTest,1>
            ((TSharedPtr<SDocumentsTest,1> *)local_38);
  TSharedRef<SDocumentsTest,1>::~TSharedRef<SDocumentsTest,1>
            ((TSharedRef<SDocumentsTest,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SDocumentsTest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSlateDecl<SDocumentsTest,RequiredArgs::T1RequiredArgs<FTabManager_*_&>_> *)
               (*pcVar4)();
      return pTVar6;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2c8);
  return this;
}

// TSlateDecl<SDynamicBrushTest,RequiredArgs::T0RequiredArgs> @ 143057300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SDynamicBrushTest,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SDynamicBrushTest,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SDynamicBrushTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDynamicBrushTest,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSlateDecl<SDynamicBrushTest,RequiredArgs::T0RequiredArgs> *pTVar6;
  SDynamicBrushTest *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDynamicBrushTest *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTStack_20 = ::operator_new(0x2d8);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar7 = (SDynamicBrushTest *)&DAT_00000010;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSDynamicBrushTest___00_SharedPointerInternals__6B_;
    memset(pTStack_20 + 1,0,0x2c8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTStack_20 + 1));
    pTStack_20[1]._padding_ = (longlong)&___7SDynamicBrushTest__6B_;
    pTStack_20[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2c]._padding_ = 0;
    FText::FText((FText *)&pTStack_20[0x2c].SharedReferenceCount);
    pSVar7 = (SDynamicBrushTest *)(pTStack_20 + 1);
    pTVar8 = pTStack_20;
    local_38._16_8_ = pSVar7;
    if (pSVar7 == (SDynamicBrushTest *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSlateDecl<SDynamicBrushTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar6;
      }
      goto LAB_14305745d;
    }
  }
  if (((pSVar7->_padding_ == 0) || (pSVar7->_padding_ == 0)) ||
     (*(int *)(pSVar7->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar7->_padding_ = (longlong)pSVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar7->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar7->_padding_;
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
      pSVar7->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14305745d:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SDynamicBrushTest,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SDynamicBrushTest *)local_38._16_8_;
    local_38._0_8_ = (SDynamicBrushTest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SDynamicBrushTest,1>::~TSharedPtr<SDynamicBrushTest,1>
            ((TSharedPtr<SDynamicBrushTest,1> *)local_38);
  TSharedRef<SDynamicBrushTest,1>::~TSharedRef<SDynamicBrushTest,1>
            ((TSharedRef<SDynamicBrushTest,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SDynamicBrushTest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSlateDecl<SDynamicBrushTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar6;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2c8);
  return this;
}

// TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs> @ 143057530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs> *pTVar7;
  SElementTesting *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SElementTesting *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2d8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SElementTesting *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSElementTesting___00_SharedPointerInternals__6B_;
    SElementTesting::SElementTesting((SElementTesting *)(pTVar6 + 1));
    pSVar8 = (SElementTesting *)(pTVar6 + 1);
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SElementTesting *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_143057654;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_143057654:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SElementTesting *)local_38._16_8_;
    local_38._0_8_ = (SElementTesting *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SElementTesting,1>::~TSharedPtr<SElementTesting,1>
            ((TSharedPtr<SElementTesting,1> *)local_38);
  TSharedRef<SElementTesting,1>::~TSharedRef<SElementTesting,1>
            ((TSharedRef<SElementTesting,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SElementTesting *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2c8);
  return this;
}

// TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_> @ 143057720

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_>
* __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_>
::
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_>
          (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_>
  *pTVar7;
  SExpanderArrow *pSVar8;
  SExpanderArrow *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SExpanderArrow *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SExpanderArrow *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSExpanderArrow___00_SharedPointerInternals__6B_;
    SExpanderArrow::SExpanderArrow((SExpanderArrow *)(pTVar6 + 1));
    pSVar8 = (SExpanderArrow *)(pTVar6 + 1);
    if (pSVar8 == (SExpanderArrow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14305783f;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14305783f:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SExpanderArrow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e0);
  return this;
}

// TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_> @ 143057900

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_>
* __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_>
::
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_>
          (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_>
  *pTVar7;
  SExpanderArrow *pSVar8;
  SExpanderArrow *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SExpanderArrow *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SExpanderArrow *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSExpanderArrow___00_SharedPointerInternals__6B_;
    SExpanderArrow::SExpanderArrow((SExpanderArrow *)(pTVar6 + 1));
    pSVar8 = (SExpanderArrow *)(pTVar6 + 1);
    if (pSVar8 == (SExpanderArrow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_143057a1f;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_143057a1f:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SExpanderArrow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e0);
  return this;
}

// TSlateDecl<SFxTest,RequiredArgs::T0RequiredArgs> @ 143057ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SFxTest,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SFxTest,RequiredArgs::T0RequiredArgs>::TSlateDecl<SFxTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SFxTest,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SFxTest,RequiredArgs::T0RequiredArgs> *pTVar7;
  SFxTest *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SFxTest *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2e8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SFxTest *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VSFxTest___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x2d8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pSVar8 = (SFxTest *)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7SFxTest__6B_;
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SFxTest *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SFxTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_143057c20;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_143057c20:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SFxTest,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SFxTest *)local_38._16_8_;
    local_38._0_8_ = (SFxTest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SFxTest,1>::~TSharedPtr<SFxTest,1>((TSharedPtr<SFxTest,1> *)local_38);
  TSharedRef<SFxTest,1>::~TSharedRef<SFxTest,1>((TSharedRef<SFxTest,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SFxTest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SFxTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2d8);
  return this;
}

// TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs> @ 143057cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs> *pTVar7;
  SGammaTest *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SGammaTest *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2b8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SGammaTest *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VSGammaTest___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2a8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pSVar8 = (SGammaTest *)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7SGammaTest__6B_;
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SGammaTest *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_143057e30;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SGammaTest **)&pSVar8->field_0x8 = pSVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pSVar8->field_0x10) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pSVar8->field_0x10;
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
      *(TReferenceControllerBase<1> **)&pSVar8->field_0x10 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_143057e30:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SGammaTest *)local_38._16_8_;
    local_38._0_8_ = (SGammaTest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SGammaTest,1>::~TSharedPtr<SGammaTest,1>((TSharedPtr<SGammaTest,1> *)local_38);
  TSharedRef<SGammaTest,1>::~TSharedRef<SGammaTest,1>((TSharedRef<SGammaTest,1> *)(local_38 + 0x10))
  ;
  if ((this->_Widget).Object == (SGammaTest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2a8);
  return this;
}

// TSlateDecl<SGlobalInvalidationTest,RequiredArgs::T0RequiredArgs> @ 143057f00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SGlobalInvalidationTest,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SGlobalInvalidationTest,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SGlobalInvalidationTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SGlobalInvalidationTest,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SGlobalInvalidationTest,RequiredArgs::T0RequiredArgs> *pTVar7;
  SGlobalInvalidationTest *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SGlobalInvalidationTest *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2b8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SGlobalInvalidationTest *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSGlobalInvalidationTest___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2a8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pSVar8 = (SGlobalInvalidationTest *)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7SGlobalInvalidationTest__6B_;
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SGlobalInvalidationTest *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SGlobalInvalidationTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_143058040;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SGlobalInvalidationTest **)&pSVar8->field_0x8 = pSVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pSVar8->field_0x10) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pSVar8->field_0x10;
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
      *(TReferenceControllerBase<1> **)&pSVar8->field_0x10 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_143058040:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SGlobalInvalidationTest,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SGlobalInvalidationTest *)local_38._16_8_;
    local_38._0_8_ = (SGlobalInvalidationTest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SGlobalInvalidationTest,1>::~TSharedPtr<SGlobalInvalidationTest,1>
            ((TSharedPtr<SGlobalInvalidationTest,1> *)local_38);
  TSharedRef<SGlobalInvalidationTest,1>::~TSharedRef<SGlobalInvalidationTest,1>
            ((TSharedRef<SGlobalInvalidationTest,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SGlobalInvalidationTest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SGlobalInvalidationTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2a8);
  return this;
}

// TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs> @ 143058110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2
          ,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs> *pTVar7;
  SGridPanelTest *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SGridPanelTest *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2b8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SGridPanelTest *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSGridPanelTest___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x2a8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pSVar8 = (SGridPanelTest *)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7SGridPanelTest__6B_;
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SGridPanelTest *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_143058250;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SGridPanelTest **)&pSVar8->field_0x8 = pSVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pSVar8->field_0x10) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pSVar8->field_0x10;
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
      *(TReferenceControllerBase<1> **)&pSVar8->field_0x10 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_143058250:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SGridPanelTest *)local_38._16_8_;
    local_38._0_8_ = (SGridPanelTest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SGridPanelTest,1>::~TSharedPtr<SGridPanelTest,1>
            ((TSharedPtr<SGridPanelTest,1> *)local_38);
  TSharedRef<SGridPanelTest,1>::~TSharedRef<SGridPanelTest,1>
            ((TSharedRef<SGridPanelTest,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SGridPanelTest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2a8);
  return this;
}

// TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs> @ 143058320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs> *pTVar7;
  SInvalidationPanel *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SInvalidationPanel *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x460);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SInvalidationPanel *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSInvalidationPanel___00_SharedPointerInternals__6B_;
    SInvalidationPanel::SInvalidationPanel((SInvalidationPanel *)(pTVar6 + 1));
    pSVar8 = (SInvalidationPanel *)(pTVar6 + 1);
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SInvalidationPanel *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_143058444;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_143058444:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SInvalidationPanel *)local_38._16_8_;
    local_38._0_8_ = (SInvalidationPanel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SInvalidationPanel,1>::~TSharedPtr<SInvalidationPanel,1>
            ((TSharedPtr<SInvalidationPanel,1> *)local_38);
  TSharedRef<SInvalidationPanel,1>::~TSharedRef<SInvalidationPanel,1>
            ((TSharedRef<SInvalidationPanel,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SInvalidationPanel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x450);
  return this;
}

// TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs> @ 143058510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs> *pTVar6;
  SInvalidationTest *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SInvalidationTest *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTStack_20 = ::operator_new(0x2c8);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar7 = (SInvalidationTest *)&DAT_00000010;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSInvalidationTest___00_SharedPointerInternals__6B_;
    memset(pTStack_20 + 1,0,0x2b8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTStack_20 + 1));
    pSVar7 = (SInvalidationTest *)(pTStack_20 + 1);
    pTStack_20[1]._padding_ = (longlong)&___7SInvalidationTest__6B_;
    pTStack_20[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2c]._padding_ = 0;
    pTVar8 = pTStack_20;
    local_38._16_8_ = pSVar7;
    if (pSVar7 == (SInvalidationTest *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar6;
      }
      goto LAB_143058661;
    }
  }
  if (((pSVar7->_padding_ == 0) || (pSVar7->_padding_ == 0)) ||
     (*(int *)(pSVar7->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar7->_padding_ = (longlong)pSVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar7->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar7->_padding_;
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
      pSVar7->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_143058661:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SInvalidationTest *)local_38._16_8_;
    local_38._0_8_ = (SInvalidationTest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SInvalidationTest,1>::~TSharedPtr<SInvalidationTest,1>
            ((TSharedPtr<SInvalidationTest,1> *)local_38);
  TSharedRef<SInvalidationTest,1>::~TSharedRef<SInvalidationTest,1>
            ((TSharedRef<SInvalidationTest,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SInvalidationTest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar6;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2b8);
  return this;
}

// TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs> @ 143058730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs> *pTVar7;
  SLayoutRoundingTest *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SLayoutRoundingTest *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2b8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SLayoutRoundingTest *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSLayoutRoundingTest___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x2a8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pSVar8 = (SLayoutRoundingTest *)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7SLayoutRoundingTest__6B_;
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SLayoutRoundingTest *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_143058870;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SLayoutRoundingTest **)&pSVar8->field_0x8 = pSVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pSVar8->field_0x10) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pSVar8->field_0x10;
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
      *(TReferenceControllerBase<1> **)&pSVar8->field_0x10 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_143058870:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SLayoutRoundingTest *)local_38._16_8_;
    local_38._0_8_ = (SLayoutRoundingTest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SLayoutRoundingTest,1>::~TSharedPtr<SLayoutRoundingTest,1>
            ((TSharedPtr<SLayoutRoundingTest,1> *)local_38);
  TSharedRef<SLayoutRoundingTest,1>::~TSharedRef<SLayoutRoundingTest,1>
            ((TSharedRef<SLayoutRoundingTest,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SLayoutRoundingTest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2a8);
  return this;
}

// TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs> @ 143058940

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs> *pTVar7;
  SMultiBoxTest *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SMultiBoxTest *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2c8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SMultiBoxTest *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSMultiBoxTest___00_SharedPointerInternals__6B_;
    SMultiBoxTest::SMultiBoxTest((SMultiBoxTest *)(pTVar6 + 1));
    pSVar8 = (SMultiBoxTest *)(pTVar6 + 1);
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SMultiBoxTest *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_143058a64;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_143058a64:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SMultiBoxTest *)local_38._16_8_;
    local_38._0_8_ = (SMultiBoxTest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SMultiBoxTest,1>::~TSharedPtr<SMultiBoxTest,1>((TSharedPtr<SMultiBoxTest,1> *)local_38)
  ;
  TSharedRef<SMultiBoxTest,1>::~TSharedRef<SMultiBoxTest,1>
            ((TSharedRef<SMultiBoxTest,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SMultiBoxTest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2b8);
  return this;
}

// TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs> @ 143058b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs> *pTVar7;
  SMultiLineEditingTest *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SMultiLineEditingTest *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2d0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SMultiLineEditingTest *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSMultiLineEditingTest___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2c0);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SMultiLineEditingTest__6B_;
    FText::FText((FText *)(pTVar6 + 0x2c));
    pSVar8 = (SMultiLineEditingTest *)(pTVar6 + 1);
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SMultiLineEditingTest *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_143058c80;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_143058c80:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SMultiLineEditingTest *)local_38._16_8_;
    local_38._0_8_ = (SMultiLineEditingTest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SMultiLineEditingTest,1>::~TSharedPtr<SMultiLineEditingTest,1>
            ((TSharedPtr<SMultiLineEditingTest,1> *)local_38);
  TSharedRef<SMultiLineEditingTest,1>::~TSharedRef<SMultiLineEditingTest,1>
            ((TSharedRef<SMultiLineEditingTest,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SMultiLineEditingTest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2c0);
  return this;
}

// TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs> @ 143058d50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs> *pTVar6;
  SNotificationListTest *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SNotificationListTest *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTStack_20 = ::operator_new(0x2e8);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar7 = (SNotificationListTest *)&DAT_00000010;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSNotificationListTest___00_SharedPointerInternals__6B_
    ;
    memset(pTStack_20 + 1,0,0x2d8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTStack_20 + 1));
    pSVar7 = (SNotificationListTest *)(pTStack_20 + 1);
    pTStack_20[1]._padding_ = (longlong)&___7SNotificationListTest__6B_;
    pTStack_20[0x2c]._padding_ = 0;
    pTStack_20[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2d]._padding_ = 0;
    pTStack_20[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTStack_20;
    local_38._16_8_ = pSVar7;
    if (pSVar7 == (SNotificationListTest *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar6;
      }
      goto LAB_143058eaf;
    }
  }
  if (((pSVar7->_padding_ == 0) || (pSVar7->_padding_ == 0)) ||
     (*(int *)(pSVar7->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar7->_padding_ = (longlong)pSVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar7->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar7->_padding_;
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
      pSVar7->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_143058eaf:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SNotificationListTest *)local_38._16_8_;
    local_38._0_8_ = (SNotificationListTest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SNotificationListTest,1>::~TSharedPtr<SNotificationListTest,1>
            ((TSharedPtr<SNotificationListTest,1> *)local_38);
  TSharedRef<SNotificationListTest,1>::~TSharedRef<SNotificationListTest,1>
            ((TSharedRef<SNotificationListTest,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SNotificationListTest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar6;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2d8);
  return this;
}

// TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_> @ 143058f80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_> * __thiscall
TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>::
TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>
          (TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_> *this,
          char *param_1,char *param_2,int param_3,T1RequiredArgs<int_&&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_> *pTVar7;
  SResponsiveGridPanel *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SResponsiveGridPanel *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x290);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SResponsiveGridPanel *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSResponsiveGridPanel___00_SharedPointerInternals__6B_
    ;
    SResponsiveGridPanel::SResponsiveGridPanel((SResponsiveGridPanel *)(pTVar6 + 1));
    pSVar8 = (SResponsiveGridPanel *)(pTVar6 + 1);
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SResponsiveGridPanel *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_> *)
                 (*pcVar4)();
        return pTVar7;
      }
      goto LAB_1430590a4;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_1430590a4:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_> *)local_38) {
    (this->_Widget).Object = (SResponsiveGridPanel *)local_38._16_8_;
    local_38._0_8_ = (SResponsiveGridPanel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SResponsiveGridPanel,1>::~TSharedPtr<SResponsiveGridPanel,1>
            ((TSharedPtr<SResponsiveGridPanel,1> *)local_38);
  TSharedRef<SResponsiveGridPanel,1>::~TSharedRef<SResponsiveGridPanel,1>
            ((TSharedRef<SResponsiveGridPanel,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SResponsiveGridPanel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_> *)(*pcVar4)()
      ;
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x280);
  return this;
}

// TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs> @ 143059170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs> *pTVar6;
  SRichTextEditTest *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SRichTextEditTest *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTStack_20 = ::operator_new(0x368);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar7 = (SRichTextEditTest *)&DAT_00000010;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSRichTextEditTest___00_SharedPointerInternals__6B_;
    memset(pTStack_20 + 1,0,0x358);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTStack_20 + 1));
    pTStack_20[1]._padding_ = (longlong)&___7SRichTextEditTest__6B_;
    FText::FText((FText *)&pTStack_20[0x2b].SharedReferenceCount);
    pSVar7 = (SRichTextEditTest *)(pTStack_20 + 1);
    pTStack_20[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2d]._padding_ = 0;
    pTStack_20[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2e]._padding_ = 0;
    pTStack_20[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2f]._padding_ = 0;
    pTStack_20[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x30]._padding_ = 0;
    pTStack_20[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x30].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x31]._padding_ = 0;
    pTStack_20[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x31].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x32]._padding_ = 0;
    pTStack_20[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x32].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x33]._padding_ = 0;
    pTStack_20[0x33].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x33].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x34]._padding_ = 0;
    pTStack_20[0x34].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x34].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTStack_20;
    local_38._16_8_ = pSVar7;
    if (pSVar7 == (SRichTextEditTest *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar6;
      }
      goto LAB_143059336;
    }
  }
  if (((pSVar7->_padding_ == 0) || (pSVar7->_padding_ == 0)) ||
     (*(int *)(pSVar7->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar7->_padding_ = (longlong)pSVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar7->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar7->_padding_;
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
      pSVar7->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_143059336:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SRichTextEditTest *)local_38._16_8_;
    local_38._0_8_ = (SRichTextEditTest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SRichTextEditTest,1>::~TSharedPtr<SRichTextEditTest,1>
            ((TSharedPtr<SRichTextEditTest,1> *)local_38);
  TSharedRef<SRichTextEditTest,1>::~TSharedRef<SRichTextEditTest,1>
            ((TSharedRef<SRichTextEditTest,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SRichTextEditTest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar6;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x358);
  return this;
}

// TSlateDecl<SRichTextTest,RequiredArgs::T0RequiredArgs> @ 143059410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SRichTextTest,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SRichTextTest,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SRichTextTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SRichTextTest,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSlateDecl<SRichTextTest,RequiredArgs::T0RequiredArgs> *pTVar6;
  SRichTextTest *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SRichTextTest *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTStack_20 = ::operator_new(0x300);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar7 = (SRichTextTest *)&DAT_00000010;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSRichTextTest___00_SharedPointerInternals__6B_;
    memset(pTStack_20 + 1,0,0x2f0);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTStack_20 + 1));
    pSVar7 = (SRichTextTest *)(pTStack_20 + 1);
    pTStack_20[1]._padding_ = (longlong)&___7SRichTextTest__6B_;
    pTStack_20[0x2c]._padding_ = 0;
    pTStack_20[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2e]._padding_ = 0;
    pTStack_20[0x2f]._padding_ = 0;
    pTStack_20[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTStack_20;
    local_38._16_8_ = pSVar7;
    if (pSVar7 == (SRichTextTest *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSlateDecl<SRichTextTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar6;
      }
      goto LAB_14305957d;
    }
  }
  if (((pSVar7->_padding_ == 0) || (pSVar7->_padding_ == 0)) ||
     (*(int *)(pSVar7->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar7->_padding_ = (longlong)pSVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar7->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar7->_padding_;
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
      pSVar7->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14305957d:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SRichTextTest,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SRichTextTest *)local_38._16_8_;
    local_38._0_8_ = (SRichTextTest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SRichTextTest,1>::~TSharedPtr<SRichTextTest,1>((TSharedPtr<SRichTextTest,1> *)local_38)
  ;
  TSharedRef<SRichTextTest,1>::~TSharedRef<SRichTextTest,1>
            ((TSharedRef<SRichTextTest,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SRichTextTest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSlateDecl<SRichTextTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar6;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2f0);
  return this;
}

// TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs> @ 143059650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs> *pTVar6;
  SSplineTest *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SSplineTest *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTStack_20 = ::operator_new(0x2d0);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar7 = (SSplineTest *)&DAT_00000010;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSSplineTest___00_SharedPointerInternals__6B_;
    memset(pTStack_20 + 1,0,0x2c0);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTStack_20 + 1));
    pSVar7 = (SSplineTest *)(pTStack_20 + 1);
    pTStack_20[0x2b].SharedReferenceCount = (atomic<int>)0x40a00000;
    pTStack_20[1]._padding_ = (longlong)&___7SSplineTest__6B_;
    pTStack_20[0x2c]._padding_ = 0;
    pTStack_20[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTStack_20;
    local_38._16_8_ = pSVar7;
    if (pSVar7 == (SSplineTest *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar6;
      }
      goto LAB_1430597ab;
    }
  }
  if (((pSVar7->_padding_ == 0) || (pSVar7->_padding_ == 0)) ||
     (*(int *)(pSVar7->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar7->_padding_ = (longlong)pSVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar7->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar7->_padding_;
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
      pSVar7->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_1430597ab:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SSplineTest *)local_38._16_8_;
    local_38._0_8_ = (SSplineTest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SSplineTest,1>::~TSharedPtr<SSplineTest,1>((TSharedPtr<SSplineTest,1> *)local_38);
  TSharedRef<SSplineTest,1>::~TSharedRef<SSplineTest,1>
            ((TSharedRef<SSplineTest,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SSplineTest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar6;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2c0);
  return this;
}

// TSlateDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs> @ 143059880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs> *pTVar7;
  SSplineWithHandles *pSVar8;
  TVector2<float>_u_0 local_res8;
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  float local_50;
  float local_4c;
  TSharedRef<SSplineWithHandles,1> local_48;
  FMargin local_38;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SSplineWithHandles *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x3e0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_48.Object = ___xmm_00000000000000000000000000000010;
    local_48.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pSVar8 = (SSplineWithHandles *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSSplineWithHandles___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x3d0);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    local_4c = __real_3b808081;
    pTVar6[1]._padding_ = (longlong)&___7SSplineWithHandles__6B_;
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x41000000;
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x41000000;
    local_58._0_4_ = (float)FColor::White.field0_0x0._2_1_ * local_4c;
    local_58._4_4_ = (float)FColor::White.field0_0x0._1_1_ * local_4c;
    local_50 = (float)FColor::White.field0_0x0._0_1_ * local_4c;
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_4c = (float)FColor::White.field0_0x0._3_1_ * local_4c;
    local_38 = (FMargin)ZEXT416(0);
    FSlateBrush::FSlateBrush
              ((FSlateBrush *)(pTVar6 + 0x2d),Image,(FName)0x0,&local_38,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res8._s_0,(FLinearColor *)(local_68 + 0x10),
               (UObject *)0x0,false);
    pTVar6[0x2d]._padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pSVar8 = (SSplineWithHandles *)(pTVar6 + 1);
    *(undefined4 *)&pTVar6[0x3a]._padding_ = 0xffffffff;
    pTVar6[0x3a].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar6[0x3a].WeakReferenceCount = 0;
    pTVar6[0x3c]._padding_ = 0;
    pTVar6[0x3b]._padding_ = 0;
    pTVar6[0x3b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x3b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x3c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x3c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x3d]._padding_ = 0;
    local_48.Object = pSVar8;
    local_48.SharedReferenceCount.ReferenceController = pTVar6;
    if (pSVar8 == (SSplineWithHandles *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_143059b0e;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SSplineWithHandles **)&pSVar8->field_0x8 = pSVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pSVar8->field_0x10) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pSVar8->field_0x10;
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
      *(TReferenceControllerBase<1> **)&pSVar8->field_0x10 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_143059b0e:
  local_68._0_8_ = local_48.Object;
  local_68._8_8_ = local_48.SharedReferenceCount.ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs> *)local_68) {
    (this->_Widget).Object = local_48.Object;
    local_68._0_8_ = (SSplineWithHandles *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_68 + 8));
  }
  TSharedPtr<SSplineWithHandles,1>::~TSharedPtr<SSplineWithHandles,1>
            ((TSharedPtr<SSplineWithHandles,1> *)local_68);
  TSharedRef<SSplineWithHandles,1>::~TSharedRef<SSplineWithHandles,1>(&local_48);
  if ((this->_Widget).Object == (SSplineWithHandles *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x3d0);
  return this;
}

// TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs> @ 143059bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs> *pTVar7;
  SSplitterTest *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SSplitterTest *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x348);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (SSplitterTest *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSSplitterTest___00_SharedPointerInternals__6B_;
    SSplitterTest::SSplitterTest((SSplitterTest *)(pTVar6 + 1));
    pSVar8 = (SSplitterTest *)(pTVar6 + 1);
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SSplitterTest *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_143059d14;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_143059d14:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SSplitterTest *)local_38._16_8_;
    local_38._0_8_ = (SSplitterTest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SSplitterTest,1>::~TSharedPtr<SSplitterTest,1>((TSharedPtr<SSplitterTest,1> *)local_38)
  ;
  TSharedRef<SSplitterTest,1>::~TSharedRef<SSplitterTest,1>
            ((TSharedRef<SSplitterTest,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SSplitterTest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x338);
  return this;
}

// TSlateDecl<STestNotificationWidget,RequiredArgs::T0RequiredArgs> @ 143059de0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<STestNotificationWidget,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<STestNotificationWidget,RequiredArgs::T0RequiredArgs>::
TSlateDecl<STestNotificationWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STestNotificationWidget,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<STestNotificationWidget,RequiredArgs::T0RequiredArgs> *pTVar7;
  STestNotificationWidget *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (STestNotificationWidget *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2c0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar8 = (STestNotificationWidget *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSTestNotificationWidget___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2b0);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&STestNotificationWidget::_vftable__for__SCompoundWidget__;
    pSVar8 = (STestNotificationWidget *)(pTVar6 + 1);
    *(undefined ***)&pTVar6[0x2b].SharedReferenceCount =
         &STestNotificationWidget::_vftable__for__INotificationWidget__;
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (STestNotificationWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<STestNotificationWidget,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_143059f32;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(STestNotificationWidget **)&pSVar8->field_0x8 = pSVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pSVar8->field_0x10) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pSVar8->field_0x10;
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
      *(TReferenceControllerBase<1> **)&pSVar8->field_0x10 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_143059f32:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<STestNotificationWidget,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (STestNotificationWidget *)local_38._16_8_;
    local_38._0_8_ = (STestNotificationWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<STestNotificationWidget,1>::~TSharedPtr<STestNotificationWidget,1>
            ((TSharedPtr<STestNotificationWidget,1> *)local_38);
  TSharedRef<STestNotificationWidget,1>::~TSharedRef<STestNotificationWidget,1>
            ((TSharedRef<STestNotificationWidget,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (STestNotificationWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<STestNotificationWidget,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2b0);
  return this;
}

// TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs> @ 14305a000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs>::
TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs> *pTVar6;
  STextEditTest *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STextEditTest *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTStack_20 = ::operator_new(0x3c0);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar7 = (STextEditTest *)&DAT_00000010;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSTextEditTest___00_SharedPointerInternals__6B_;
    memset(pTStack_20 + 1,0,0x3b0);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTStack_20 + 1));
    pTStack_20[1]._padding_ = (longlong)&___7STextEditTest__6B_;
    pTStack_20[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2c]._padding_ = 0;
    pTStack_20[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2d]._padding_ = 0;
    FCurveSequence::FCurveSequence((FCurveSequence *)&pTStack_20[0x2d].SharedReferenceCount);
    pTStack_20[0x34].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x34].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x35]._padding_ = 0;
    pTStack_20[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x35].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x36]._padding_ = 0;
    pTStack_20[0x36].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x36].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x37]._padding_ = 0;
    pTStack_20[0x37].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x37].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x38]._padding_ = 0;
    pTStack_20[0x38].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x38].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x39]._padding_ = 0;
    pTStack_20[0x39].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x39].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x3a]._padding_ = 0;
    FText::FText((FText *)&pTStack_20[0x3a].SharedReferenceCount);
    pSVar7 = (STextEditTest *)(pTStack_20 + 1);
    pTVar8 = pTStack_20;
    local_38._16_8_ = pSVar7;
    if (pSVar7 == (STextEditTest *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar6;
      }
      goto LAB_14305a1cb;
    }
  }
  if (((pSVar7->_padding_ == 0) || (pSVar7->_padding_ == 0)) ||
     (*(int *)(pSVar7->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar7->_padding_ = (longlong)pSVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar7->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar7->_padding_;
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
      pSVar7->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14305a1cb:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (STextEditTest *)local_38._16_8_;
    local_38._0_8_ = (STextEditTest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<STextEditTest,1>::~TSharedPtr<STextEditTest,1>((TSharedPtr<STextEditTest,1> *)local_38)
  ;
  TSharedRef<STextEditTest,1>::~TSharedRef<STextEditTest,1>
            ((TSharedRef<STextEditTest,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (STextEditTest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar6;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x3b0);
  return this;
}

// ~TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs> @ 14305fe50

void __thiscall
TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
           *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs> @ 14305fe80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs> @ 14305feb0

void __thiscall
TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs> @ 14305fee0

void __thiscall
TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> @ 14305ff10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> *this)

{
  TSharedPtr<SDockTab,1>::~TSharedPtr<SDockTab,1>(&this->_Widget);
  return;
}

// ~TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs> @ 14305ff40

void __thiscall
TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs> @ 14305ff70

void __thiscall
TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs> @ 14305ffa0

void __thiscall
TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs> @ 14305ffd0

void __thiscall
TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs> @ 143060000

void __thiscall
TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs> @ 143060030

void __thiscall
TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs> @ 143060060

void __thiscall
TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs> @ 143060090

void __thiscall
TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs> @ 1430600c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_> @ 1430600f0

void __thiscall
TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>::
~TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>
          (TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs> @ 143060120

void __thiscall
TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs> @ 143060150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs> @ 143060180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> @ 1430601b0

void __thiscall
TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs> @ 1430601e0

void __thiscall
TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs> @ 143060210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// operator<<= @ 1430659e0

TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> * __thiscall
TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>::
operator<<=(TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
            *this,TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
                  *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *pTVar7;
  
  if ((this->_Widget).Object == (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143065a81;
  }
  bVar6 = 0x20;
LAB_143065a81:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143065b50

TSharedRef<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> * __thiscall
TSlateDecl<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
::operator<<=(TSlateDecl<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *this,TSharedRef<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  undefined1 *puVar1;
  STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *this_00;
  TSharedRef<STableViewBase,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *pSVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  char cVar12;
  byte bVar13;
  TSharedRef<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *pTVar14;
  FArguments *pFVar15;
  undefined1 local_350 [24];
  SWidget *local_338;
  TReferenceControllerBase<1> *pTStack_330;
  FArguments local_328;
  
  if ((this->_Widget).Object == (SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *)(*pcVar6)();
      return pTVar14;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->field_0x8,(FSlateBaseNamedArgs *)param_1);
  this_00 = (STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)(this->_Widget).Object;
  pTVar2 = this->_RequiredArgs->Arg0;
  pFVar15 = STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::FArguments(&local_328);
  pFVar15->_Style = param_1->_Style;
  bVar11 = (param_1->_Padding).bIsSet;
  fVar7 = (param_1->_Padding).Value.Left;
  fVar8 = (param_1->_Padding).Value.Top;
  fVar9 = (param_1->_Padding).Value.Right;
  fVar10 = (param_1->_Padding).Value.Bottom;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_350,
             &(param_1->_Padding).Getter);
  (pFVar15->_Padding).Value.Left = fVar7;
  (pFVar15->_Padding).Value.Top = fVar8;
  (pFVar15->_Padding).Value.Right = fVar9;
  (pFVar15->_Padding).Value.Bottom = fVar10;
  (pFVar15->_Padding).bIsSet = bVar11;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_350);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_350);
  if ((void *)local_350._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_350._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_350);
  pTVar3 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->_Content).Widget.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_338 = (pFVar15->_Content).Widget.Object;
  pTStack_330 = (pFVar15->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar15->_Content).Widget.Object = pSVar4;
  (pFVar15->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_330);
  STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::ConstructInternal(this_00,pFVar15,pTVar2);
  (**(code **)(this_00->_padding_ + 0x80))
            (this_00,pTVar2->Object->TableViewMode,&pFVar15->_Padding,&pFVar15->_Content);
  STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::~FArguments(&local_328);
  if ((this->_Widget).Object == (SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *)(*pcVar6)();
      return pTVar14;
    }
  }
  pSVar5 = (this->_Widget).Object;
  if ((pSVar5->field_0x38 & 0x10) == 0) {
    cVar12 = (**(code **)(*(longlong *)&pSVar5->field_0x8 + 0x228))(&pSVar5->field_0x8);
    bVar13 = 0;
    if (cVar12 == '\0') goto LAB_143065d0b;
  }
  bVar13 = 0x20;
LAB_143065d0b:
  pSVar5->field_0x38 = pSVar5->field_0x38 & 0xdf;
  pSVar5->field_0x38 = pSVar5->field_0x38 | bVar13;
  if ((this->_Widget).Object == (SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *)(*pcVar6)();
      return pTVar14;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x39;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object == (SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *)(*pcVar6)();
      return pTVar14;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *)(*pcVar6)();
      return pTVar14;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143065de0

TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> * __thiscall
TSlateDecl<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T0RequiredArgs>::
operator<<=(TSlateDecl<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T0RequiredArgs>
            *this,TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
                  *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *pTVar7;
  
  if ((this->_Widget).Object == (SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::Construct((this->_Widget).Object,param_1)
  ;
  if ((this->_Widget).Object == (SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143065e81;
  }
  bVar6 = 0x20;
LAB_143065e81:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0;
  if (__return_storage_ptr__->Object ==
      (SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143065f50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedRef<SNumericEntryBox<unsigned_short>,1> * __thiscall
TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SNumericEntryBox<unsigned_short>,1> *__return_storage_ptr__,FArguments *param_1
          )

{
  byte *pbVar1;
  SNumericEntryBox<unsigned_short> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SNumericEntryBox<unsigned_short>,1> *pTVar7;
  
  if ((this->_Widget).Object == (SNumericEntryBox<unsigned_short> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNumericEntryBox<unsigned_short>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SNumericEntryBox<unsigned_short>::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SNumericEntryBox<unsigned_short> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNumericEntryBox<unsigned_short>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143065ff1;
  }
  bVar6 = 0x20;
LAB_143065ff1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SNumericEntryBox<unsigned_short> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNumericEntryBox<unsigned_short>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SNumericEntryBox<unsigned_short> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNumericEntryBox<unsigned_short>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SNumericEntryBox<unsigned_short> *)0x0;
  if (__return_storage_ptr__->Object == (SNumericEntryBox<unsigned_short> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNumericEntryBox<unsigned_short>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 1430660c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SSpinBox<unsigned_short>,1> * __thiscall
TSlateDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SSpinBox<unsigned_short>,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SSpinBox<unsigned_short> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SSpinBox<unsigned_short>,1> *pTVar7;
  
  if ((this->_Widget).Object == (SSpinBox<unsigned_short> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinBox<unsigned_short>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SSpinBox<unsigned_short>::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SSpinBox<unsigned_short> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinBox<unsigned_short>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143066161;
  }
  bVar6 = 0x20;
LAB_143066161:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SSpinBox<unsigned_short> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinBox<unsigned_short>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SSpinBox<unsigned_short> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinBox<unsigned_short>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SSpinBox<unsigned_short> *)0x0;
  if (__return_storage_ptr__->Object == (SSpinBox<unsigned_short> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinBox<unsigned_short>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143066230

TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> * __thiscall
TSlateDecl<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_>
              *this,TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *pSVar2;
  TSharedRef<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *pSVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *pTVar10;
  TSharedRef<STableViewBase,1> local_28;
  
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->_padding_,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg0;
  pTVar4 = (pTVar3->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar3->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = (STableViewBase *)pSVar5;
  local_28.SharedReferenceCount.ReferenceController = pTVar4;
  STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::ConstructInternal(pSVar2,param_1,&local_28);
  (**(code **)(pSVar2->_padding_ + 0x80))
            (pSVar2,(int)pSVar5->_padding_,&param_1->_Padding,&param_1->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_143066332;
  }
  bVar9 = 0x20;
LAB_143066332:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar9;
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143066400

TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> * __thiscall
TSlateDecl<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_>
              *this,TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *pSVar2;
  TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *pSVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *pTVar10;
  TSharedRef<STableViewBase,1> local_28;
  
  if ((this->_Widget).Object == (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)(*pcVar6)()
      ;
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->_padding_,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg0;
  pTVar4 = (pTVar3->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar3->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = (STableViewBase *)pSVar5;
  local_28.SharedReferenceCount.ReferenceController = pTVar4;
  STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::ConstructInternal
            (pSVar2,param_1,&local_28);
  (**(code **)(pSVar2->_padding_ + 0x80))
            (pSVar2,(int)pSVar5->_padding_,&param_1->_Padding,&param_1->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->_Widget).Object == (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)(*pcVar6)()
      ;
      return pTVar10;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_143066502;
  }
  bVar9 = 0x20;
LAB_143066502:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar9;
  if ((this->_Widget).Object == (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)(*pcVar6)()
      ;
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)(*pcVar6)()
      ;
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0;
  if (__return_storage_ptr__->Object ==
      (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)(*pcVar6)()
      ;
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 1430665d0

TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> * __thiscall
TSlateDecl<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
::operator<<=(TSlateDecl<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *this,TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *pSVar2;
  TSharedRef<STableViewBase,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *pTVar8;
  
  if ((this->_Widget).Object == (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->_padding_,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg0;
  STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::ConstructInternal(pSVar2,param_1,pTVar3);
  (**(code **)(pSVar2->_padding_ + 0x80))
            (pSVar2,pTVar3->Object->TableViewMode,&param_1->_Padding,&param_1->_Content);
  if ((this->_Widget).Object == (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_1430666b2;
  }
  bVar7 = 0x20;
LAB_1430666b2:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar7;
  if ((this->_Widget).Object == (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0;
  if (__return_storage_ptr__->Object ==
      (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143066780

TSharedRef<SAnimTest,1> * __thiscall
TSlateDecl<SAnimTest,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SAnimTest,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SAnimTest,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SAnimTest *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SAnimTest,1> *pTVar7;
  
  if ((this->_Widget).Object == (SAnimTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAnimTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SAnimTest::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SAnimTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAnimTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143066821;
  }
  bVar6 = 0x20;
LAB_143066821:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SAnimTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAnimTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SAnimTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAnimTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SAnimTest *)0x0;
  if (__return_storage_ptr__->Object == (SAnimTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAnimTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 1430668f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SColorPicker,1> * __thiscall
TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SColorPicker,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SColorPicker *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SColorPicker,1> *pTVar7;
  
  if ((this->_Widget).Object == (SColorPicker *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorPicker,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SColorPicker::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SColorPicker *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorPicker,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143066991;
  }
  bVar6 = 0x20;
LAB_143066991:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SColorPicker *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorPicker,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SColorPicker *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorPicker,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SColorPicker *)0x0;
  if (__return_storage_ptr__->Object == (SColorPicker *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorPicker,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143066a60

TSharedRef<SColorPickerTest,1> * __thiscall
TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SColorPickerTest,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SColorPickerTest *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SColorPickerTest,1> *pTVar7;
  
  if ((this->_Widget).Object == (SColorPickerTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorPickerTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SColorPickerTest::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SColorPickerTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorPickerTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143066b01;
  }
  bVar6 = 0x20;
LAB_143066b01:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SColorPickerTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorPickerTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SColorPickerTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorPickerTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SColorPickerTest *)0x0;
  if (__return_storage_ptr__->Object == (SColorPickerTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorPickerTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143066bd0

TSharedRef<SCustomPaintWidget,1> * __thiscall
TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SCustomPaintWidget,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SCustomPaintWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SCustomPaintWidget,1> *pTVar7;
  
  if ((this->_Widget).Object == (SCustomPaintWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SCustomPaintWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SCustomPaintWidget::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SCustomPaintWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SCustomPaintWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143066c71;
  }
  bVar6 = 0x20;
LAB_143066c71:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SCustomPaintWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SCustomPaintWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SCustomPaintWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SCustomPaintWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SCustomPaintWidget *)0x0;
  if (__return_storage_ptr__->Object == (SCustomPaintWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SCustomPaintWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143066d40

TSharedRef<SDPIScaler,1> * __thiscall
TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SDPIScaler,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SDPIScaler *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SDPIScaler,1> *pTVar7;
  
  if ((this->_Widget).Object == (SDPIScaler *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDPIScaler,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SDPIScaler::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SDPIScaler *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDPIScaler,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143066de1;
  }
  bVar6 = 0x20;
LAB_143066de1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SDPIScaler *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDPIScaler,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SDPIScaler *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDPIScaler,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDPIScaler *)0x0;
  if (__return_storage_ptr__->Object == (SDPIScaler *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDPIScaler,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143066eb0

TSharedRef<SDPIScalingTest,1> * __thiscall
TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SDPIScalingTest,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SDPIScalingTest *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SDPIScalingTest,1> *pTVar7;
  
  if ((this->_Widget).Object == (SDPIScalingTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDPIScalingTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SDPIScalingTest::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SDPIScalingTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDPIScalingTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143066f51;
  }
  bVar6 = 0x20;
LAB_143066f51:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SDPIScalingTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDPIScalingTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SDPIScalingTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDPIScalingTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDPIScalingTest *)0x0;
  if (__return_storage_ptr__->Object == (SDPIScalingTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDPIScalingTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143067020

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDocumentsTest,1> * __thiscall
TSlateDecl<SDocumentsTest,RequiredArgs::T1RequiredArgs<FTabManager_*_&>_>::operator<<=
          (TSlateDecl<SDocumentsTest,RequiredArgs::T1RequiredArgs<FTabManager_*_&>_> *this,
          TSharedRef<SDocumentsTest,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SDocumentsTest *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SDocumentsTest,1> *pTVar7;
  
  if ((this->_Widget).Object == (SDocumentsTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDocumentsTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SDocumentsTest::Construct((this->_Widget).Object,param_1,*this->_RequiredArgs->Arg0);
  if ((this->_Widget).Object == (SDocumentsTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDocumentsTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_1430670cb;
  }
  bVar6 = 0x20;
LAB_1430670cb:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SDocumentsTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDocumentsTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SDocumentsTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDocumentsTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDocumentsTest *)0x0;
  if (__return_storage_ptr__->Object == (SDocumentsTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDocumentsTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143067190

TSharedRef<SDynamicBrushTest,1> * __thiscall
TSlateDecl<SDynamicBrushTest,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SDynamicBrushTest,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SDynamicBrushTest,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SDynamicBrushTest *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SDynamicBrushTest,1> *pTVar7;
  
  if ((this->_Widget).Object == (SDynamicBrushTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDynamicBrushTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SDynamicBrushTest::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SDynamicBrushTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDynamicBrushTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143067231;
  }
  bVar6 = 0x20;
LAB_143067231:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SDynamicBrushTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDynamicBrushTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SDynamicBrushTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDynamicBrushTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDynamicBrushTest *)0x0;
  if (__return_storage_ptr__->Object == (SDynamicBrushTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDynamicBrushTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143067300

TSharedRef<SElementTesting,1> * __thiscall
TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SElementTesting,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SElementTesting *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SElementTesting,1> *pTVar7;
  
  if ((this->_Widget).Object == (SElementTesting *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SElementTesting,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SElementTesting::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SElementTesting *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SElementTesting,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_1430673a1;
  }
  bVar6 = 0x20;
LAB_1430673a1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SElementTesting *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SElementTesting,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SElementTesting *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SElementTesting,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SElementTesting *)0x0;
  if (__return_storage_ptr__->Object == (SElementTesting *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SElementTesting,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143067470

TSharedRef<SExpanderArrow,1> * __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_>
              *this,TSharedRef<SExpanderArrow,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SExpanderArrow *pSVar2;
  TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  TSharedRef<SExpanderArrow,1> *pTVar8;
  TSharedPtr<ITableRow,1> local_18;
  
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg0;
  local_18.Object = (ITableRow *)pTVar3->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (pTVar3->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SExpanderArrow::Construct(pSVar2,param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_143067541;
  }
  bVar7 = 0x20;
LAB_143067541:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar7;
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SExpanderArrow *)0x0;
  if (__return_storage_ptr__->Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143067610

TSharedRef<SExpanderArrow,1> * __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_>
              *this,TSharedRef<SExpanderArrow,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SExpanderArrow *pSVar2;
  TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  TSharedRef<SExpanderArrow,1> *pTVar8;
  TSharedPtr<ITableRow,1> local_18;
  
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg0;
  local_18.Object = (ITableRow *)pTVar3->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (pTVar3->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SExpanderArrow::Construct(pSVar2,param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_1430676e1;
  }
  bVar7 = 0x20;
LAB_1430676e1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar7;
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SExpanderArrow *)0x0;
  if (__return_storage_ptr__->Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 1430677b0

TSharedRef<SFxTest,1> * __thiscall
TSlateDecl<SFxTest,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SFxTest,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SFxTest,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SFxTest *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SFxTest,1> *pTVar7;
  
  if ((this->_Widget).Object == (SFxTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SFxTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SFxTest::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SFxTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SFxTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143067851;
  }
  bVar6 = 0x20;
LAB_143067851:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SFxTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SFxTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SFxTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SFxTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SFxTest *)0x0;
  if (__return_storage_ptr__->Object == (SFxTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SFxTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143067920

TSharedRef<SGammaTest,1> * __thiscall
TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SGammaTest,1> *__return_storage_ptr__,FArguments *param_1)

{
  undefined1 *puVar1;
  SGammaTest *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SGammaTest,1> *pTVar7;
  
  if ((this->_Widget).Object == (SGammaTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SGammaTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SGammaTest::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SGammaTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SGammaTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->field_0x30 & 0x10) == 0) {
    cVar5 = (**(code **)(*(longlong *)pSVar2 + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_1430679c1;
  }
  bVar6 = 0x20;
LAB_1430679c1:
  pSVar2->field_0x30 = pSVar2->field_0x30 & 0xdf;
  pSVar2->field_0x30 = pSVar2->field_0x30 | bVar6;
  if ((this->_Widget).Object == (SGammaTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SGammaTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x31;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object == (SGammaTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SGammaTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SGammaTest *)0x0;
  if (__return_storage_ptr__->Object == (SGammaTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SGammaTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143067a90

TSharedRef<SGlobalInvalidationTest,1> * __thiscall
TSlateDecl<SGlobalInvalidationTest,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SGlobalInvalidationTest,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SGlobalInvalidationTest,1> *__return_storage_ptr__,FArguments *param_1)

{
  undefined1 *puVar1;
  SGlobalInvalidationTest *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SGlobalInvalidationTest,1> *pTVar7;
  
  if ((this->_Widget).Object == (SGlobalInvalidationTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SGlobalInvalidationTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SGlobalInvalidationTest::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SGlobalInvalidationTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SGlobalInvalidationTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->field_0x30 & 0x10) == 0) {
    cVar5 = (**(code **)(*(longlong *)pSVar2 + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143067b31;
  }
  bVar6 = 0x20;
LAB_143067b31:
  pSVar2->field_0x30 = pSVar2->field_0x30 & 0xdf;
  pSVar2->field_0x30 = pSVar2->field_0x30 | bVar6;
  if ((this->_Widget).Object == (SGlobalInvalidationTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SGlobalInvalidationTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x31;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object == (SGlobalInvalidationTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SGlobalInvalidationTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SGlobalInvalidationTest *)0x0;
  if (__return_storage_ptr__->Object == (SGlobalInvalidationTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SGlobalInvalidationTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143067c00

TSharedRef<SGridPanelTest,1> * __thiscall
TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SGridPanelTest,1> *__return_storage_ptr__,FArguments *param_1)

{
  undefined1 *puVar1;
  SGridPanelTest *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SGridPanelTest,1> *pTVar7;
  
  if ((this->_Widget).Object == (SGridPanelTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SGridPanelTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SGridPanelTest::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SGridPanelTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SGridPanelTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->field_0x30 & 0x10) == 0) {
    cVar5 = (**(code **)(*(longlong *)pSVar2 + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143067ca1;
  }
  bVar6 = 0x20;
LAB_143067ca1:
  pSVar2->field_0x30 = pSVar2->field_0x30 & 0xdf;
  pSVar2->field_0x30 = pSVar2->field_0x30 | bVar6;
  if ((this->_Widget).Object == (SGridPanelTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SGridPanelTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x31;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object == (SGridPanelTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SGridPanelTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SGridPanelTest *)0x0;
  if (__return_storage_ptr__->Object == (SGridPanelTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SGridPanelTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143067d70

TSharedRef<SInvalidationPanel,1> * __thiscall
TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SInvalidationPanel,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SInvalidationPanel *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SInvalidationPanel,1> *pTVar7;
  
  if ((this->_Widget).Object == (SInvalidationPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SInvalidationPanel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SInvalidationPanel::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SInvalidationPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SInvalidationPanel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143067e11;
  }
  bVar6 = 0x20;
LAB_143067e11:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SInvalidationPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SInvalidationPanel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SInvalidationPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SInvalidationPanel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SInvalidationPanel *)0x0;
  if (__return_storage_ptr__->Object == (SInvalidationPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SInvalidationPanel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143067ee0

TSharedRef<SInvalidationTest,1> * __thiscall
TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SInvalidationTest,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SInvalidationTest *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SInvalidationTest,1> *pTVar7;
  
  if ((this->_Widget).Object == (SInvalidationTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SInvalidationTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SInvalidationTest::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SInvalidationTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SInvalidationTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143067f81;
  }
  bVar6 = 0x20;
LAB_143067f81:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SInvalidationTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SInvalidationTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SInvalidationTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SInvalidationTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SInvalidationTest *)0x0;
  if (__return_storage_ptr__->Object == (SInvalidationTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SInvalidationTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143068050

TSharedRef<SLayoutRoundingTest,1> * __thiscall
TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SLayoutRoundingTest,1> *__return_storage_ptr__,FArguments *param_1)

{
  undefined1 *puVar1;
  SLayoutRoundingTest *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SLayoutRoundingTest,1> *pTVar7;
  
  if ((this->_Widget).Object == (SLayoutRoundingTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SLayoutRoundingTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SLayoutRoundingTest::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SLayoutRoundingTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SLayoutRoundingTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->field_0x30 & 0x10) == 0) {
    cVar5 = (**(code **)(*(longlong *)pSVar2 + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_1430680f1;
  }
  bVar6 = 0x20;
LAB_1430680f1:
  pSVar2->field_0x30 = pSVar2->field_0x30 & 0xdf;
  pSVar2->field_0x30 = pSVar2->field_0x30 | bVar6;
  if ((this->_Widget).Object == (SLayoutRoundingTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SLayoutRoundingTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x31;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object == (SLayoutRoundingTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SLayoutRoundingTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SLayoutRoundingTest *)0x0;
  if (__return_storage_ptr__->Object == (SLayoutRoundingTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SLayoutRoundingTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 1430681c0

TSharedRef<SMultiBoxTest,1> * __thiscall
TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SMultiBoxTest,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SMultiBoxTest *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SMultiBoxTest,1> *pTVar7;
  
  if ((this->_Widget).Object == (SMultiBoxTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiBoxTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SMultiBoxTest::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SMultiBoxTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiBoxTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143068261;
  }
  bVar6 = 0x20;
LAB_143068261:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SMultiBoxTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiBoxTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SMultiBoxTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiBoxTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SMultiBoxTest *)0x0;
  if (__return_storage_ptr__->Object == (SMultiBoxTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiBoxTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143068330

TSharedRef<SMultiLineEditingTest,1> * __thiscall
TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SMultiLineEditingTest,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SMultiLineEditingTest *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SMultiLineEditingTest,1> *pTVar7;
  
  if ((this->_Widget).Object == (SMultiLineEditingTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiLineEditingTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SMultiLineEditingTest::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SMultiLineEditingTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiLineEditingTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_1430683d1;
  }
  bVar6 = 0x20;
LAB_1430683d1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SMultiLineEditingTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiLineEditingTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SMultiLineEditingTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiLineEditingTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SMultiLineEditingTest *)0x0;
  if (__return_storage_ptr__->Object == (SMultiLineEditingTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SMultiLineEditingTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 1430684a0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SNotificationList,1> * __thiscall
TSlateDecl<SNotificationList,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SNotificationList,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SNotificationList,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SNotificationList *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SNotificationList,1> *pTVar7;
  
  if ((this->_Widget).Object == (SNotificationList *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNotificationList,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SNotificationList::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SNotificationList *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNotificationList,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143068541;
  }
  bVar6 = 0x20;
LAB_143068541:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SNotificationList *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNotificationList,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SNotificationList *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNotificationList,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SNotificationList *)0x0;
  if (__return_storage_ptr__->Object == (SNotificationList *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNotificationList,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143068610

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SNotificationListTest,1> * __thiscall
TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SNotificationListTest,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SNotificationListTest *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SNotificationListTest,1> *pTVar7;
  
  if ((this->_Widget).Object == (SNotificationListTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNotificationListTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SNotificationListTest::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SNotificationListTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNotificationListTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_1430686b1;
  }
  bVar6 = 0x20;
LAB_1430686b1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SNotificationListTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNotificationListTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SNotificationListTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNotificationListTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SNotificationListTest *)0x0;
  if (__return_storage_ptr__->Object == (SNotificationListTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNotificationListTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143068780

TSharedRef<SRenderTransformManipulatorWidget,1> * __thiscall
TSlateDecl<SRenderTransformManipulatorWidget,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SRenderTransformManipulatorWidget,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SRenderTransformManipulatorWidget,1> *__return_storage_ptr__,
          FArguments *param_1)

{
  undefined1 *puVar1;
  SRenderTransformManipulatorWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SRenderTransformManipulatorWidget,1> *pTVar7;
  
  if ((this->_Widget).Object == (SRenderTransformManipulatorWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SRenderTransformManipulatorWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  (**(code **)(*(longlong *)pSVar2 + 0x248))(pSVar2,param_1);
  if ((this->_Widget).Object == (SRenderTransformManipulatorWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SRenderTransformManipulatorWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->field_0x30 & 0x10) == 0) {
    cVar5 = (**(code **)(*(longlong *)pSVar2 + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143068825;
  }
  bVar6 = 0x20;
LAB_143068825:
  pSVar2->field_0x30 = pSVar2->field_0x30 & 0xdf;
  pSVar2->field_0x30 = pSVar2->field_0x30 | bVar6;
  if ((this->_Widget).Object == (SRenderTransformManipulatorWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SRenderTransformManipulatorWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x31;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object == (SRenderTransformManipulatorWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SRenderTransformManipulatorWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SRenderTransformManipulatorWidget *)0x0;
  if (__return_storage_ptr__->Object == (SRenderTransformManipulatorWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SRenderTransformManipulatorWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 1430688f0

TSharedRef<SResponsiveGridPanel,1> * __thiscall
TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>::operator<<=
          (TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_> *this,
          TSharedRef<SResponsiveGridPanel,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SResponsiveGridPanel *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SResponsiveGridPanel,1> *pTVar7;
  
  if ((this->_Widget).Object == (SResponsiveGridPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SResponsiveGridPanel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SResponsiveGridPanel::Construct((this->_Widget).Object,param_1,*this->_RequiredArgs->Arg0);
  if ((this->_Widget).Object == (SResponsiveGridPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SResponsiveGridPanel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14306899b;
  }
  bVar6 = 0x20;
LAB_14306899b:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SResponsiveGridPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SResponsiveGridPanel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SResponsiveGridPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SResponsiveGridPanel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SResponsiveGridPanel *)0x0;
  if (__return_storage_ptr__->Object == (SResponsiveGridPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SResponsiveGridPanel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143068a60

TSharedRef<SResponsiveGridPanelTestWidget,1> * __thiscall
TSlateDecl<SResponsiveGridPanelTestWidget,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SResponsiveGridPanelTestWidget,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SResponsiveGridPanelTestWidget,1> *__return_storage_ptr__,FArguments *param_1)

{
  undefined1 *puVar1;
  SResponsiveGridPanelTestWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SResponsiveGridPanelTestWidget,1> *pTVar7;
  
  if ((this->_Widget).Object == (SResponsiveGridPanelTestWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SResponsiveGridPanelTestWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  (**(code **)(*(longlong *)pSVar2 + 0x248))(pSVar2,param_1);
  if ((this->_Widget).Object == (SResponsiveGridPanelTestWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SResponsiveGridPanelTestWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->field_0x30 & 0x10) == 0) {
    cVar5 = (**(code **)(*(longlong *)pSVar2 + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143068b05;
  }
  bVar6 = 0x20;
LAB_143068b05:
  pSVar2->field_0x30 = pSVar2->field_0x30 & 0xdf;
  pSVar2->field_0x30 = pSVar2->field_0x30 | bVar6;
  if ((this->_Widget).Object == (SResponsiveGridPanelTestWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SResponsiveGridPanelTestWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x31;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object == (SResponsiveGridPanelTestWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SResponsiveGridPanelTestWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SResponsiveGridPanelTestWidget *)0x0;
  if (__return_storage_ptr__->Object == (SResponsiveGridPanelTestWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SResponsiveGridPanelTestWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143068bd0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SRichTextEditTest,1> * __thiscall
TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SRichTextEditTest,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SRichTextEditTest *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SRichTextEditTest,1> *pTVar7;
  
  if ((this->_Widget).Object == (SRichTextEditTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SRichTextEditTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SRichTextEditTest::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SRichTextEditTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SRichTextEditTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143068c71;
  }
  bVar6 = 0x20;
LAB_143068c71:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SRichTextEditTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SRichTextEditTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SRichTextEditTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SRichTextEditTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SRichTextEditTest *)0x0;
  if (__return_storage_ptr__->Object == (SRichTextEditTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SRichTextEditTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143068d40

TSharedRef<SRichTextTest,1> * __thiscall
TSlateDecl<SRichTextTest,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SRichTextTest,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SRichTextTest,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SRichTextTest *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SRichTextTest,1> *pTVar7;
  
  if ((this->_Widget).Object == (SRichTextTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SRichTextTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SRichTextTest::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SRichTextTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SRichTextTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143068de1;
  }
  bVar6 = 0x20;
LAB_143068de1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SRichTextTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SRichTextTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SRichTextTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SRichTextTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SRichTextTest *)0x0;
  if (__return_storage_ptr__->Object == (SRichTextTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SRichTextTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143068eb0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SSplineTest,1> * __thiscall
TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SSplineTest,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SSplineTest *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SSplineTest,1> *pTVar7;
  
  if ((this->_Widget).Object == (SSplineTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSplineTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SSplineTest::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SSplineTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSplineTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143068f51;
  }
  bVar6 = 0x20;
LAB_143068f51:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SSplineTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSplineTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SSplineTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSplineTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SSplineTest *)0x0;
  if (__return_storage_ptr__->Object == (SSplineTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSplineTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143069020

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SSplineWithHandles,1> * __thiscall
TSlateDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SSplineWithHandles,1> *__return_storage_ptr__,FArguments *param_1)

{
  undefined1 *puVar1;
  SSplineWithHandles *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SSplineWithHandles,1> *pTVar7;
  
  if ((this->_Widget).Object == (SSplineWithHandles *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSplineWithHandles,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SSplineWithHandles::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SSplineWithHandles *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSplineWithHandles,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->field_0x30 & 0x10) == 0) {
    cVar5 = (**(code **)(*(longlong *)pSVar2 + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_1430690c1;
  }
  bVar6 = 0x20;
LAB_1430690c1:
  pSVar2->field_0x30 = pSVar2->field_0x30 & 0xdf;
  pSVar2->field_0x30 = pSVar2->field_0x30 | bVar6;
  if ((this->_Widget).Object == (SSplineWithHandles *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSplineWithHandles,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x31;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object == (SSplineWithHandles *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSplineWithHandles,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SSplineWithHandles *)0x0;
  if (__return_storage_ptr__->Object == (SSplineWithHandles *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSplineWithHandles,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143069190

TSharedRef<SSplitterTest,1> * __thiscall
TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SSplitterTest,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SSplitterTest *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SSplitterTest,1> *pTVar7;
  
  if ((this->_Widget).Object == (SSplitterTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSplitterTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SSplitterTest::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SSplitterTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSplitterTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143069231;
  }
  bVar6 = 0x20;
LAB_143069231:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SSplitterTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSplitterTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SSplitterTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSplitterTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SSplitterTest *)0x0;
  if (__return_storage_ptr__->Object == (SSplitterTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSplitterTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143069300

TSharedRef<STestNotificationWidget,1> * __thiscall
TSlateDecl<STestNotificationWidget,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<STestNotificationWidget,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<STestNotificationWidget,1> *__return_storage_ptr__,FArguments *param_1)

{
  undefined1 *puVar1;
  STestNotificationWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<STestNotificationWidget,1> *pTVar7;
  
  if ((this->_Widget).Object == (STestNotificationWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STestNotificationWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  STestNotificationWidget::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (STestNotificationWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STestNotificationWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->field_0x30 & 0x10) == 0) {
    cVar5 = (**(code **)(*(longlong *)pSVar2 + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_1430693a1;
  }
  bVar6 = 0x20;
LAB_1430693a1:
  pSVar2->field_0x30 = pSVar2->field_0x30 & 0xdf;
  pSVar2->field_0x30 = pSVar2->field_0x30 | bVar6;
  if ((this->_Widget).Object == (STestNotificationWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STestNotificationWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x31;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object == (STestNotificationWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STestNotificationWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STestNotificationWidget *)0x0;
  if (__return_storage_ptr__->Object == (STestNotificationWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STestNotificationWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 143069470

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<STextEditTest,1> * __thiscall
TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<STextEditTest,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  STextEditTest *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<STextEditTest,1> *pTVar7;
  
  if ((this->_Widget).Object == (STextEditTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STextEditTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  STextEditTest::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (STextEditTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STextEditTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143069511;
  }
  bVar6 = 0x20;
LAB_143069511:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (STextEditTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STextEditTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (STextEditTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STextEditTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STextEditTest *)0x0;
  if (__return_storage_ptr__->Object == (STextEditTest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STextEditTest,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 1430695e0

TSharedRef<STextEntryPopup,1> * __thiscall
TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<STextEntryPopup,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  STextEntryPopup *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<STextEntryPopup,1> *pTVar7;
  
  if ((this->_Widget).Object == (STextEntryPopup *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STextEntryPopup,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  STextEntryPopup::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (STextEntryPopup *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STextEntryPopup,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_143069681;
  }
  bVar6 = 0x20;
LAB_143069681:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (STextEntryPopup *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STextEntryPopup,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (STextEntryPopup *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STextEntryPopup,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STextEntryPopup *)0x0;
  if (__return_storage_ptr__->Object == (STextEntryPopup *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STextEntryPopup,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

