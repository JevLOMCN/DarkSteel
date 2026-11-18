// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 1

// GetSavedWorldData @ 14cf55f20

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FARSaveWorldAsyncTask::GetSavedWorldData
          (FARSaveWorldAsyncTask *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  if ((int)lVar1 != 0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (this->WorldData).AllocatorInstance.Data;
    (this->WorldData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = (this->WorldData).ArrayNum;
    __return_storage_ptr__->ArrayMax = (this->WorldData).ArrayMax;
    (this->WorldData).ArrayNum = 0;
    (this->WorldData).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

