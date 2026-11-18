// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 3

// FBufferReader @ 141dc4080

FBufferReader * __thiscall
FBufferReader::FBufferReader
          (FBufferReader *this,void *param_1,long64 param_2,bool param_3,bool param_4)

{
  FArchiveState::FArchiveState((FArchiveState *)this);
  *(void **)&this->field_0x90 = param_1;
  *(undefined ***)this = &___7FBufferReaderBase__6B_;
  *(undefined8 *)&this->field_0x98 = 0;
  *(long64 *)&this->field_0xa0 = param_2;
  this->field_0xa8 = param_3;
  FArchiveState::SetIsLoading((FArchiveState *)this,true);
  (**(code **)(*(longlong *)this + 0x108))(this,param_4);
  *(undefined ***)this = &___7FBufferReader__6B_;
  return this;
}

// ~FBufferReader @ 141dc6420

void __thiscall FBufferReader::~FBufferReader(FBufferReader *this)

{
  *(undefined ***)this = &___7FBufferReader__6B_;
  if (this->field_0xa8 != '\0') {
    FMemory::Free(*(void **)&this->field_0x90);
    *(undefined8 *)&this->field_0x90 = 0;
  }
  *(undefined ***)this = &___7FBufferReaderBase__6B_;
  FArchive::~FArchive((FArchive *)this);
  return;
}

// GetArchiveName @ 141dd5180

FString * __thiscall
FBufferReader::GetArchiveName(FBufferReader *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FBufferReader");
  return __return_storage_ptr__;
}

