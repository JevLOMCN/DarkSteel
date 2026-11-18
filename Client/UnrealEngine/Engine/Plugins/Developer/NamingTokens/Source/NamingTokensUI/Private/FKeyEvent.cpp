// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 1

// GetKey @ 14d108e00

FKey * __thiscall FKeyEvent::GetKey(FKeyEvent *this,FKey *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->KeyName = (this->Key).KeyName;
  (__return_storage_ptr__->KeyDetails).Object = (this->Key).KeyDetails.Object;
  pTVar1 = (this->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

