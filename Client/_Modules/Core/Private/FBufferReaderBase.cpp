// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// ~FBufferReaderBase @ 1418be960

void __thiscall FBufferReaderBase::~FBufferReaderBase(FBufferReaderBase *this)

{
  this->_padding_ = (longlong)&___7FBufferReaderBase__6B_;
  FArchive::~FArchive((FArchive *)this);
  return;
}

// AtEnd @ 1418c9350

bool __thiscall FBufferReaderBase::AtEnd(FBufferReaderBase *this)

{
  return this->ReaderSize <= this->ReaderPos;
}

// Close @ 1418ca8f0

bool __thiscall FBufferReaderBase::Close(FBufferReaderBase *this)

{
  if (this->bFreeOnClose != false) {
    FMemory::Free(this->ReaderData);
    this->ReaderData = (void *)0x0;
  }
  return (bool)((byte)~*(byte *)((longlong)&this->_padding_ + 1) >> 1 & 1);
}

// GetArchiveName @ 1418dd860

FString * __thiscall
FBufferReaderBase::GetArchiveName(FBufferReaderBase *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FBufferReaderBase");
  return __return_storage_ptr__;
}

// Seek @ 1418f4250

void __thiscall FBufferReaderBase::Seek(FBufferReaderBase *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPos >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BufferReader.h"
                       ,0x42,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->ReaderSize < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPos <= ReaderSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BufferReader.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->ReaderPos = param_1;
  return;
}

// Serialize @ 1418f49f0

void __thiscall FBufferReaderBase::Serialize(FBufferReaderBase *this,void *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->ReaderPos < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReaderPos >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BufferReader.h"
                       ,0x33,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->ReaderSize < this->ReaderPos + param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReaderPos + Num <= ReaderSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BufferReader.h"
                       ,0x34,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  memcpy(param_1,(void *)((longlong)this->ReaderData + this->ReaderPos),param_2);
  this->ReaderPos = this->ReaderPos + param_2;
  return;
}

// Tell @ 1418fa510

long64 __thiscall FBufferReaderBase::Tell(FBufferReaderBase *this)

{
  return this->ReaderPos;
}

// TotalSize @ 1418fca80

long64 __thiscall FBufferReaderBase::TotalSize(FBufferReaderBase *this)

{
  return this->ReaderSize;
}

