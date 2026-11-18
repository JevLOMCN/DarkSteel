// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RawMesh
// Functions: 7

// AtEnd @ 14435dff0

bool __thiscall FBufferWriter::AtEnd(FBufferWriter *this)

{
  return this->WriterSize <= this->WriterPos;
}

// Close @ 14435e010

bool __thiscall FBufferWriter::Close(FBufferWriter *this)

{
  if (this->bFreeOnClose != false) {
    FMemory::Free(this->WriterData);
    this->WriterData = (void *)0x0;
  }
  return (bool)((byte)~*(byte *)((longlong)&this->_padding_ + 1) >> 1 & 1);
}

// GetArchiveName @ 14435e930

FString * __thiscall
FBufferWriter::GetArchiveName(FBufferWriter *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FBufferWriter");
  return __return_storage_ptr__;
}

// Seek @ 14435f220

void __thiscall FBufferWriter::Seek(FBufferWriter *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPos >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BufferWriter.h"
                       ,0x62,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->WriterSize < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPos <= WriterSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BufferWriter.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->WriterPos = param_1;
  return;
}

// Serialize @ 14435f2b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBufferWriter::Serialize(FBufferWriter *this,void *param_1,long64 param_2)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  lVar5 = (this->WriterPos - this->WriterSize) + param_2;
  if (0 < lVar5) {
    if (this->bAllowResize == false) {
      ::FString::FString(&local_18,L"FBufferWriter");
      UE::Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_FBufferWriter::Serialize(void*___ptr64,__int64)___ptr64'
                  ::__l32::LOG_Static,(FLogCategoryBase *)&LogSerialization);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    else {
      uVar1 = this->WriterSize + lVar5;
      if (0x7ffffffe < (longlong)uVar1) {
        ::FString::FString(&local_28,L"FBufferWriter");
        UE::Logging::Private::BasicFatalLog
                  (&`public:_virtual_void___cdecl_FBufferWriter::Serialize(void*___ptr64,__int64)___ptr64'
                    ::__l12::LOG_Static,(FLogCategoryBase *)&LogSerialization);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      pvVar4 = FMemory::Realloc(this->WriterData,uVar1,0);
      this->WriterSize = uVar1;
      this->WriterData = pvVar4;
    }
  }
  if ((this->WriterPos < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("WriterPos >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BufferWriter.h"
                         ,0x53,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->WriterSize < this->WriterPos + param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(WriterPos + Num) <= WriterSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BufferWriter.h"
                         ,0x54,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  memcpy((void *)((longlong)this->WriterData + this->WriterPos),param_1,param_2);
  this->WriterPos = this->WriterPos + param_2;
  return;
}

// Tell @ 14435f510

long64 __thiscall FBufferWriter::Tell(FBufferWriter *this)

{
  return this->WriterPos;
}

// TotalSize @ 14435f520

long64 __thiscall FBufferWriter::TotalSize(FBufferWriter *this)

{
  return this->WriterSize;
}

