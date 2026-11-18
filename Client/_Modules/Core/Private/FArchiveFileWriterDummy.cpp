// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// ~FArchiveFileWriterDummy @ 14167b790

void __thiscall FArchiveFileWriterDummy::~FArchiveFileWriterDummy(FArchiveFileWriterDummy *this)

{
  this->_padding_ = (longlong)&___7FArchiveFileWriterDummy__6B_;
  FArchive::~FArchive((FArchive *)this);
  return;
}

// GetArchiveName @ 1416991d0

FString * __thiscall
FArchiveFileWriterDummy::GetArchiveName
          (FArchiveFileWriterDummy *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FArchiveFileWriterDummy");
  return __return_storage_ptr__;
}

// Seek @ 1416bf090

void __thiscall FArchiveFileWriterDummy::Seek(FArchiveFileWriterDummy *this,long64 param_1)

{
  this->Pos = param_1;
  return;
}

// Serialize @ 1416bf920

void __thiscall
FArchiveFileWriterDummy::Serialize(FArchiveFileWriterDummy *this,void *param_1,long64 param_2)

{
  this->Pos = this->Pos + param_2;
  return;
}

// Tell @ 1416c1af0

long64 __thiscall FArchiveFileWriterDummy::Tell(FArchiveFileWriterDummy *this)

{
  return this->Pos;
}

