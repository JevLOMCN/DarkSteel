// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// FKeyEvent @ 1426a7c30

FKeyEvent * __thiscall FKeyEvent::FKeyEvent(FKeyEvent *this,FKeyEvent *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  *(short *)&this->_padding_ = (short)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FKeyEvent__6B_;
  (this->Key).KeyName = (param_1->Key).KeyName;
  (this->Key).KeyDetails.Object = (param_1->Key).KeyDetails.Object;
  pTVar1 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->Key).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->CharacterCode = param_1->CharacterCode;
  this->KeyCode = param_1->KeyCode;
  return this;
}

