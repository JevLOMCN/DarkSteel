// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 1

// FInputKeyBinding @ 146d3ff80

FInputKeyBinding * __thiscall
FInputKeyBinding::FInputKeyBinding(FInputKeyBinding *this,FInputKeyBinding *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  uint uVar2;
  
  this->_padding_ = param_1->_padding_;
  (this->KeyEvent).Value = (param_1->KeyEvent).Value;
  (this->Chord).Key.KeyName = (param_1->Chord).Key.KeyName;
  (this->Chord).Key.KeyDetails.Object = (param_1->Chord).Key.KeyDetails.Object;
  pTVar1 = (param_1->Chord).Key.KeyDetails.SharedReferenceCount.ReferenceController;
  (this->Chord).Key.KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar2 = ((this->Chord).bShift ^ (param_1->Chord).bShift) & 1 ^ *(uint *)&(this->Chord).field_0x18;
  *(uint *)&(this->Chord).field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&(param_1->Chord).field_0x18) & 2 ^ uVar2;
  *(uint *)&(this->Chord).field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&(param_1->Chord).field_0x18) & 4 ^ uVar2;
  *(uint *)&(this->Chord).field_0x18 = uVar2;
  *(uint *)&(this->Chord).field_0x18 = (uVar2 ^ *(uint *)&(param_1->Chord).field_0x18) & 8 ^ uVar2;
  (this->KeyDelegate).FuncDelegate.Object = (param_1->KeyDelegate).FuncDelegate.Object;
  pTVar1 = (param_1->KeyDelegate).FuncDelegate.SharedReferenceCount.ReferenceController;
  (this->KeyDelegate).FuncDelegate.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->KeyDelegate).FuncDelegateWithKey.Object = (param_1->KeyDelegate).FuncDelegateWithKey.Object
  ;
  pTVar1 = (param_1->KeyDelegate).FuncDelegateWithKey.SharedReferenceCount.ReferenceController;
  (this->KeyDelegate).FuncDelegateWithKey.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->KeyDelegate).FuncDynDelegate.Object = (param_1->KeyDelegate).FuncDynDelegate.Object;
  pTVar1 = (param_1->KeyDelegate).FuncDynDelegate.SharedReferenceCount.ReferenceController;
  (this->KeyDelegate).FuncDynDelegate.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->KeyDelegate).BoundDelegateType = (param_1->KeyDelegate).BoundDelegateType;
  return this;
}

