// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// FWidgetAndPointer @ 1424ebae0

FWidgetAndPointer * __thiscall
FWidgetAndPointer::FWidgetAndPointer(FWidgetAndPointer *this,FWidgetAndPointer *param_1)

{
  bool bVar1;
  longlong lVar2;
  FDeprecateSlateVector2D FVar3;
  
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  lVar2 = param_1->_padding_;
  this->_padding_ = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  (this->OptionalPointerPosition).bIsSet = false;
  bVar1 = (param_1->OptionalPointerPosition).bIsSet;
  (this->OptionalPointerPosition).bIsSet = bVar1;
  if (bVar1 != false) {
    FVar3 = (param_1->OptionalPointerPosition).TypedValue.LastCursorPosition;
    (this->OptionalPointerPosition).TypedValue.CurrentCursorPosition =
         (param_1->OptionalPointerPosition).TypedValue.CurrentCursorPosition;
    (this->OptionalPointerPosition).TypedValue.LastCursorPosition = FVar3;
  }
  return this;
}

// FWidgetAndPointer @ 1424ebb40

/* WARNING: Type propagation algorithm not settling */

FWidgetAndPointer * __thiscall
FWidgetAndPointer::FWidgetAndPointer(FWidgetAndPointer *this,FArrangedWidget *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)&(param_1->Geometry).Scale;
  this->_padding_ = (longlong)(param_1->Geometry).Size;
  this->_padding_ = lVar2;
  lVar2 = *(longlong *)((longlong)&(param_1->Geometry).Position.field0_0x0 + 4);
  this->_padding_ = *(longlong *)((longlong)&(param_1->Geometry).AbsolutePosition.field0_0x0 + 4);
  this->_padding_ = lVar2;
  lVar2 = *(longlong *)((param_1->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
  this->_padding_ = *(longlong *)((param_1->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
  this->_padding_ = lVar2;
  this->_padding_ =
       *(longlong *)((longlong)&(param_1->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4)
  ;
  this->_padding_ = (longlong)(param_1->Widget).Object;
  pTVar1 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->OptionalPointerPosition).bIsSet = false;
  return this;
}

// FWidgetAndPointer @ 1424ebb90

/* WARNING: Type propagation algorithm not settling */

FWidgetAndPointer * __thiscall
FWidgetAndPointer::FWidgetAndPointer
          (FWidgetAndPointer *this,FArrangedWidget *param_1,
          TOptional<FVirtualPointerPosition> *param_2)

{
  bool bVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  FDeprecateSlateVector2D FVar4;
  
  lVar3 = *(longlong *)&(param_1->Geometry).Scale;
  this->_padding_ = (longlong)(param_1->Geometry).Size;
  this->_padding_ = lVar3;
  lVar3 = *(longlong *)((longlong)&(param_1->Geometry).Position.field0_0x0 + 4);
  this->_padding_ = *(longlong *)((longlong)&(param_1->Geometry).AbsolutePosition.field0_0x0 + 4);
  this->_padding_ = lVar3;
  lVar3 = *(longlong *)((param_1->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
  this->_padding_ = *(longlong *)((param_1->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
  this->_padding_ = lVar3;
  this->_padding_ =
       *(longlong *)((longlong)&(param_1->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4)
  ;
  this->_padding_ = (longlong)(param_1->Widget).Object;
  pTVar2 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  this->_padding_ = (longlong)pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->OptionalPointerPosition).bIsSet = false;
  bVar1 = param_2->bIsSet;
  (this->OptionalPointerPosition).bIsSet = bVar1;
  if (bVar1 != false) {
    FVar4 = (param_2->TypedValue).LastCursorPosition;
    (this->OptionalPointerPosition).TypedValue.CurrentCursorPosition =
         (param_2->TypedValue).CurrentCursorPosition;
    (this->OptionalPointerPosition).TypedValue.LastCursorPosition = FVar4;
  }
  return this;
}

// FWidgetAndPointer @ 1424ebbf0

/* WARNING: Type propagation algorithm not settling */

FWidgetAndPointer * __thiscall FWidgetAndPointer::FWidgetAndPointer(FWidgetAndPointer *this)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  FArrangedWidget *pFVar3;
  
  pFVar3 = FArrangedWidget::GetNullWidget();
  lVar2 = *(longlong *)&(pFVar3->Geometry).Scale;
  this->_padding_ = (longlong)(pFVar3->Geometry).Size;
  this->_padding_ = lVar2;
  lVar2 = *(longlong *)((longlong)&(pFVar3->Geometry).Position.field0_0x0 + 4);
  this->_padding_ = *(longlong *)((longlong)&(pFVar3->Geometry).AbsolutePosition.field0_0x0 + 4);
  this->_padding_ = lVar2;
  lVar2 = *(longlong *)((pFVar3->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
  this->_padding_ = *(longlong *)((pFVar3->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
  this->_padding_ = lVar2;
  this->_padding_ =
       *(longlong *)((longlong)&(pFVar3->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
  this->_padding_ = (longlong)(pFVar3->Widget).Object;
  pTVar1 = (pFVar3->Widget).SharedReferenceCount.ReferenceController;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->OptionalPointerPosition).bIsSet = false;
  return this;
}

