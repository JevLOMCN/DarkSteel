// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetArchiveName @ 148954e70

FString * __thiscall
TBufferArchive<64>::GetArchiveName(TBufferArchive<64> *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::FName::ToString((FName *)&this->field_0xa0,&local_18);
  ::FString::ConcatCF(__return_storage_ptr__,L"FBufferArchive64 ",pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

