// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleImageUtils
// Functions: 1

// GetData @ 14cfa8e20

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FAppleImageUtilsFailedConversionTask::GetData
          (FAppleImageUtilsFailedConversionTask *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

