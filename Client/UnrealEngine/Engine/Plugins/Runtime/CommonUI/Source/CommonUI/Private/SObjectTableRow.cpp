// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 1

// SObjectTableRow<UObject_*> @ 14a7a6850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

SObjectTableRow<UObject_*> * __thiscall
SObjectTableRow<UObject_*>::SObjectTableRow<UObject_*>(SObjectTableRow<UObject_*> *this)

{
  SObjectWidget::SObjectWidget((SObjectWidget *)this);
  this->IndexInList = -1;
  this->_padding_ = (longlong)&SObjectTableRow<UObject*___ptr64>::_vftable__for__SCompoundWidget__;
  this->_padding_ = (longlong)&SObjectTableRow<UObject*___ptr64>::_vftable__for__FGCObject__;
  this->_padding_ = (longlong)&___7__SObjectTableRow_PEAVUObject____6B_;
  *(undefined8 *)&this->OnHovered = 0;
  *(undefined8 *)&(this->OnHovered).field_0x8 = 0;
  *(undefined4 *)&(this->OnHovered).field_0x10 = 0;
  *(undefined8 *)&this->OnUnhovered = 0;
  *(undefined8 *)&(this->OnUnhovered).field_0x8 = 0;
  *(undefined4 *)&(this->OnUnhovered).field_0x10 = 0;
  *(undefined8 *)&this->OnRowCanAcceptDrop = 0;
  *(undefined8 *)&(this->OnRowCanAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->OnRowCanAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->OnRowAcceptDrop = 0;
  *(undefined8 *)&(this->OnRowAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->OnRowAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->OnRowDragDetected = 0;
  *(undefined8 *)&(this->OnRowDragDetected).field_0x8 = 0;
  *(undefined4 *)&(this->OnRowDragDetected).field_0x10 = 0;
  *(undefined8 *)&this->OnRowDragEnter = 0;
  *(undefined8 *)&(this->OnRowDragEnter).field_0x8 = 0;
  *(undefined4 *)&(this->OnRowDragEnter).field_0x10 = 0;
  *(undefined8 *)&this->OnRowDragLeave = 0;
  *(undefined8 *)&(this->OnRowDragLeave).field_0x8 = 0;
  *(undefined4 *)&(this->OnRowDragLeave).field_0x10 = 0;
  *(undefined8 *)&this->OnRowDragCancelled = 0;
  *(undefined8 *)&(this->OnRowDragCancelled).field_0x8 = 0;
  *(undefined4 *)&(this->OnRowDragCancelled).field_0x10 = 0;
  (this->OwnerListView).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerTablePtr).Object = (ITypedTableView<UObject_*> *)0x0;
  (this->OwnerTablePtr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bDragWasDetected = false;
  (this->ItemDropZone).bIsSet = false;
  this->bChangedSelectionOnMouseDown = false;
  this->bIsAppearingSelected = false;
  this->bProcessingSelectionTouch = false;
  this->bAllowKeepPreselectedItems = true;
  return this;
}

