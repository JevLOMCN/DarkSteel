// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FLargeMemoryWriter @ 1419ce4b0

FLargeMemoryWriter * __thiscall
FLargeMemoryWriter::FLargeMemoryWriter
          (FLargeMemoryWriter *this,long64 param_1,bool param_2,wchar_t *param_3)

{
  wchar_t *pwVar1;
  
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
  this->_padding_ = (longlong)&___7FLargeMemoryWriter__6B_;
  FLargeMemoryData::FLargeMemoryData(&this->Data,param_1);
  pwVar1 = L"FLargeMemoryWriter";
  if (param_3 != (wchar_t *)0x0) {
    pwVar1 = param_3;
  }
  ::FString::FString(&this->ArchiveName,pwVar1);
  (**(code **)(this->_padding_ + 0xd8))(this,1);
  (**(code **)(this->_padding_ + 0x108))(this,param_2);
  return this;
}

// ~FLargeMemoryWriter @ 1419d2b00

void __thiscall FLargeMemoryWriter::~FLargeMemoryWriter(FLargeMemoryWriter *this)

{
  FScriptContainerElement *pFVar1;
  uchar *puVar2;
  
  this->_padding_ = (longlong)&___7FLargeMemoryWriter__6B_;
  pFVar1 = (this->ArchiveName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  puVar2 = (this->Data).Data;
  if (puVar2 != (uchar *)0x0) {
    FMemory::Free(puVar2);
  }
  FArchive::~FArchive((FArchive *)this);
  return;
}

// GetArchiveName @ 1419fc780

FString * __thiscall
FLargeMemoryWriter::GetArchiveName(FLargeMemoryWriter *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->ArchiveName);
  return __return_storage_ptr__;
}

// GetData @ 1419fd210

/* WARNING: Enum "Type": Some values do not have unique names */

uchar * __thiscall FLargeMemoryWriter::GetData(FLargeMemoryWriter *this)

{
  if ((2 < (byte)LogSerialization._0_1_) && ((this->Data).Data == (uchar *)0x0)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
    return (this->Data).Data;
  }
  return (this->Data).Data;
}

// Serialize @ 141a1e610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLargeMemoryWriter::Serialize(FLargeMemoryWriter *this,void *param_1,long64 param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulong64 uVar4;
  uchar *puVar5;
  longlong lVar6;
  
  if ((this->Data).Data == (uchar *)0x0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
  }
  lVar1 = this->_padding_;
  if (-1 < lVar1) {
    if (param_1 == (void *)0x0) {
      uVar3 = (uint)(param_2 == 0);
    }
    else {
      uVar3 = (uint)((ulonglong)param_2 >> 0x3f) ^ 1;
    }
    if (uVar3 != 0) {
      lVar2 = (this->Data).NumBytes;
      lVar6 = lVar1 + param_2;
      if (lVar1 + param_2 < lVar2) {
        lVar6 = lVar2;
      }
      (this->Data).NumBytes = lVar6;
      if ((this->Data).MaxBytes < lVar6) {
        uVar4 = FMemory::QuantizeSize
                          (lVar6 + 0x10 +
                           ((longlong)(lVar6 * 3 + (ulonglong)((uint)(lVar6 * 3 >> 0x3f) & 7)) >> 3)
                           ,0);
        if ((longlong)uVar4 < 0x10000) {
          uVar4 = 0x10000;
        }
        puVar5 = (this->Data).Data;
        (this->Data).MaxBytes = uVar4;
        if (puVar5 == (uchar *)0x0) {
          puVar5 = FMemory::Malloc(uVar4,0);
        }
        else {
          puVar5 = FMemory::Realloc(puVar5,uVar4,0);
        }
        (this->Data).Data = puVar5;
      }
      if (param_2 != 0) {
        memcpy((this->Data).Data + lVar1,param_1,param_2);
      }
      this->_padding_ = this->_padding_ + param_2;
    }
  }
  return;
}

// TotalSize @ 141a25710

long64 __thiscall FLargeMemoryWriter::TotalSize(FLargeMemoryWriter *this)

{
  return (this->Data).NumBytes;
}

