// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// FWidgetAndPointer @ 1426a9a20

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

