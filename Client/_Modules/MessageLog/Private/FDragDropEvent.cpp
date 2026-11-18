// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 1

// FDragDropEvent @ 142bc8160

/* WARNING: Enum "Type": Some values do not have unique names */

FDragDropEvent * __thiscall
FDragDropEvent::FDragDropEvent(FDragDropEvent *this,FDragDropEvent *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  *(short *)&this->_padding_ = (short)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FPointerEvent__6B_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  lVar1 = param_1->_padding_;
  this->_padding_ = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  this->_padding_ = param_1->_padding_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  this->_padding_ = (longlong)&___7FDragDropEvent__6B_;
  (this->Content).Object = (param_1->Content).Object;
  pTVar2 = (param_1->Content).SharedReferenceCount.ReferenceController;
  (this->Content).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

