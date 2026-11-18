// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChunkDownloader
// Functions: 1

// operator<FString,FPakFileEntry>_TTuple<FString,FPakFileEntry> @ 14f01cbd0

TTuple<FString,FPakFileEntry> * __thiscall
TPairInitializer<FString_const_&,FPakFileEntry_const_&>::
operator<FString,FPakFileEntry>_TTuple<FString,FPakFileEntry>
          (TPairInitializer<FString_const_&,FPakFileEntry_const_&> *this,
          TTuple<FString,FPakFileEntry> *__return_storage_ptr__)

{
  FPakFileEntry *pFVar1;
  
  pFVar1 = this->Value;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x10,&pFVar1->FileName);
  *(ulong64 *)&__return_storage_ptr__->field_0x20 = pFVar1->FileSize;
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x28,&pFVar1->FileVersion);
  *(int *)&__return_storage_ptr__->field_0x38 = pFVar1->ChunkId;
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x40,&pFVar1->RelativeUrl);
  return __return_storage_ptr__;
}

