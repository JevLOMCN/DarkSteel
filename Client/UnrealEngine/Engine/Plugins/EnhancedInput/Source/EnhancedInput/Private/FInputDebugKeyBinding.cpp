// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 1

// FInputDebugKeyBinding @ 14a6ca680

FInputDebugKeyBinding * __thiscall
FInputDebugKeyBinding::FInputDebugKeyBinding
          (FInputDebugKeyBinding *this,FInputDebugKeyBinding *param_1,EInputBindingClone param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  uint uVar2;
  
  this->_padding_ = (longlong)&___7FInputBindingHandle__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->_padding_ = (longlong)&___7FInputDebugKeyBinding__6B_;
  (this->KeyEvent).Value = (param_1->KeyEvent).Value;
  this->bExecuteWhenPaused = param_1->bExecuteWhenPaused;
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
  return this;
}

