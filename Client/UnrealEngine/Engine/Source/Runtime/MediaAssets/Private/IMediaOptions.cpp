// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 1

// GetMediaOption @ 146c2a570

TSharedPtr<IMediaOptions::FDataContainer,1> * __thiscall
IMediaOptions::GetMediaOption
          (IMediaOptions *this,TSharedPtr<IMediaOptions::FDataContainer,1> *__return_storage_ptr__,
          FName *param_1,TSharedPtr<IMediaOptions::FDataContainer,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

