// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 2

// GetEffectingButton @ 1430c8ce0

FKey * __thiscall
FPointerEvent::GetEffectingButton(FPointerEvent *this,FKey *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->KeyName = (this->EffectingButton).KeyName;
  (__return_storage_ptr__->KeyDetails).Object = (this->EffectingButton).KeyDetails.Object;
  pTVar1 = (this->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetScreenSpacePosition @ 1430ccaf0

FDeprecateSlateVector2D * __thiscall FPointerEvent::GetScreenSpacePosition(FPointerEvent *this)

{
  return &this->ScreenSpacePosition;
}

