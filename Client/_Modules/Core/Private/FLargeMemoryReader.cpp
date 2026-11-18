// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FLargeMemoryReader @ 1419ce380

/* WARNING: Enum "Type": Some values do not have unique names */

FLargeMemoryReader * __thiscall
FLargeMemoryReader::FLargeMemoryReader
          (FLargeMemoryReader *this,uchar *param_1,long64 param_2,ELargeMemoryReaderFlags param_3,
          FName param_4)

{
  FString local_18;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FLargeMemoryReader__6B_;
  this->Data = param_1;
  this->NumBytes = param_2;
  this->field_0x98 = (this->bFreeOnClose ^ param_3) & TakeOwnership ^ this->field_0x98;
  this->ArchiveName = param_4;
  if ((param_1 == (uchar *)0x0) || (param_2 < 1)) {
    ::FName::ToString(&this->ArchiveName,&local_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(this->_padding_ + 200))(this,1);
  (**(code **)(this->_padding_ + 0x108))(this,param_3 >> 1 & 1);
  return this;
}

// ~FLargeMemoryReader @ 1419d2ac0

void __thiscall FLargeMemoryReader::~FLargeMemoryReader(FLargeMemoryReader *this)

{
  this->_padding_ = (longlong)&___7FLargeMemoryReader__6B_;
  if (this->bFreeOnClose != 0) {
    FMemory::Free(this->Data);
  }
  FArchive::~FArchive((FArchive *)this);
  return;
}

// GetArchiveName @ 1419fc750

FString * __thiscall
FLargeMemoryReader::GetArchiveName(FLargeMemoryReader *this,FString *__return_storage_ptr__)

{
  ::FName::ToString(&this->ArchiveName,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Serialize @ 141a1e5a0

void __thiscall FLargeMemoryReader::Serialize(FLargeMemoryReader *this,void *param_1,long64 param_2)

{
  if ((param_2 != 0) && ((this->_padding_ & 0x200) == 0)) {
    if (this->_padding_ + param_2 <= this->NumBytes) {
      memcpy(param_1,this->Data + this->_padding_,param_2);
      this->_padding_ = this->_padding_ + param_2;
      return;
    }
    FArchiveState::SetError((FArchiveState *)this);
  }
  return;
}

// TotalSize @ 141a25700

long64 __thiscall FLargeMemoryReader::TotalSize(FLargeMemoryReader *this)

{
  return this->NumBytes;
}

