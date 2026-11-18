// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RawMesh
// Functions: 3

// ~FBulkDataReader @ 14435dcb0

void __thiscall FBulkDataReader::~FBulkDataReader(FBulkDataReader *this)

{
  this->_padding_ = (longlong)&___7FBulkDataReader__6B_;
  FBulkData::Unlock((FBulkData *)this->BulkData);
  if ((char)this->_padding_ != '\0') {
    FMemory::Free((void *)this->_padding_);
    this->_padding_ = 0;
  }
  this->_padding_ = (longlong)&___7FBufferReaderBase__6B_;
  FArchive::~FArchive((FArchive *)this);
  return;
}

// operator<< @ 14435de90

FArchive * __thiscall FBulkDataReader::operator<<(FBulkDataReader *this,FName *param_1)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  ::operator<<((FArchive *)this,&local_18);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(&local_res8,(wchar_t *)FVar2.Data);
  *param_1 = *pFVar1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FArchive *)this;
}

// GetArchiveName @ 14435e960

FString * __thiscall
FBulkDataReader::GetArchiveName(FBulkDataReader *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FBulkDataReader");
  return __return_storage_ptr__;
}

