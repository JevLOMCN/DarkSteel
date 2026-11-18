// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// GetArchiveName @ 141cfdee0

FString * __thiscall
TBufferArchive<32>::GetArchiveName(TBufferArchive<32> *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::FName::ToString((FName *)&this->field_0xa0,&local_18);
  ::FString::ConcatCF(__return_storage_ptr__,L"FBufferArchive ",pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

