// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 15

// FArchiveFileWriterGeneric @ 1416777c0

FArchiveFileWriterGeneric * __thiscall
FArchiveFileWriterGeneric::FArchiveFileWriterGeneric
          (FArchiveFileWriterGeneric *this,IFileHandle *param_1,wchar_t *param_2,long64 param_3,
          uint param_4,uint param_5)

{
  long64 *plVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->_padding_ = (longlong)&___7FArchiveFileWriterGeneric__6B_;
  ::FString::FString(&this->Filename,param_2);
  plVar1 = &(this->BufferArray).ArrayMax;
  this->Flags = param_5;
  (this->Handle).Ptr = param_1;
  (this->BufferArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferArray).ArrayNum = 0;
  uVar4 = 1;
  if (param_4 != 0) {
    uVar4 = (ulonglong)param_4;
  }
  *plVar1 = 0;
  this->bLoggingError = false;
  uVar4 = uVar4 - 1;
  lVar2 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  this->Pos = param_3;
  cVar3 = (char)lVar2;
  if (uVar4 == 0) {
    cVar3 = -1;
  }
  uVar5 = 1L << (0x40U - ('?' - cVar3) & 0x3f);
  this->BufferSize = uVar5;
  if (-1 < (longlong)uVar5) {
    if (*plVar1 < (longlong)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,uVar5,&(this->BufferArray).AllocatorInstance,(this->BufferArray).ArrayNum,
                 plVar1);
    }
    (**(code **)(this->_padding_ + 0xd8))(this,1);
    (**(code **)(this->_padding_ + 0x108))(this,1);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar5);
}

// ~FArchiveFileWriterGeneric @ 14167b7b0

void __thiscall
FArchiveFileWriterGeneric::~FArchiveFileWriterGeneric(FArchiveFileWriterGeneric *this)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  IFileHandle *pIVar3;
  char cVar4;
  DWORD DVar5;
  
  this->_padding_ = (longlong)&___7FArchiveFileWriterGeneric__6B_;
  FlushBuffer(this);
  pcVar1 = *(code **)(this->_padding_ + 0x270);
  if (pcVar1 == CloseLowLevel) {
    TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>::Reset(&this->Handle,(IFileHandle *)0x0);
  }
  else {
    cVar4 = (*pcVar1)(this);
    if (cVar4 == '\0') {
      DVar5 = FWindowsPlatformMisc::GetLastError();
      FArchiveState::SetError((FArchiveState *)this);
      LogWriteError(this,L"Error closing file",DVar5);
    }
  }
  pFVar2 = (this->BufferArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (this->Handle).Ptr;
  if (pIVar3 != (IFileHandle *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  pFVar2 = (this->Filename).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FArchive::~FArchive((FArchive *)this);
  return;
}

// Close @ 14168bdb0

bool __thiscall FArchiveFileWriterGeneric::Close(FArchiveFileWriterGeneric *this)

{
  char cVar1;
  DWORD DVar2;
  
  FlushBuffer(this);
  cVar1 = (**(code **)(this->_padding_ + 0x270))(this);
  if (cVar1 == '\0') {
    DVar2 = FWindowsPlatformMisc::GetLastError();
    FArchiveState::SetError((FArchiveState *)this);
    LogWriteError(this,L"Error closing file",DVar2);
  }
  return (bool)((byte)~*(byte *)((longlong)&this->_padding_ + 1) >> 1 & 1);
}

// CloseLowLevel @ 14168be40

bool __thiscall FArchiveFileWriterGeneric::CloseLowLevel(FArchiveFileWriterGeneric *this)

{
  IFileHandle *pIVar1;
  
  pIVar1 = (this->Handle).Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
    (this->Handle).Ptr = (IFileHandle *)0x0;
    (**(code **)*pIVar1)(pIVar1,1);
  }
  return true;
}

// Flush @ 141695060

void __thiscall FArchiveFileWriterGeneric::Flush(FArchiveFileWriterGeneric *this)

{
  IFileHandle *pIVar1;
  bool bVar2;
  
  bVar2 = FlushBuffer(this);
  if ((bVar2) && (pIVar1 = (this->Handle).Ptr, pIVar1 != (IFileHandle *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141695088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,0);
    return;
  }
  return;
}

// FlushBuffer @ 141695210

bool __thiscall FArchiveFileWriterGeneric::FlushBuffer(FArchiveFileWriterGeneric *this)

{
  long64 *plVar1;
  char cVar2;
  DWORD DVar3;
  
  if ((this->BufferArray).ArrayNum != 0) {
    cVar2 = (**(code **)(this->_padding_ + 0x278))();
    if (cVar2 == '\0') {
      DVar3 = FWindowsPlatformMisc::GetLastError();
      FArchiveState::SetError((FArchiveState *)this);
      LogWriteError(this,L"Error flushing file",DVar3);
    }
    plVar1 = &(this->BufferArray).ArrayMax;
    (this->BufferArray).ArrayNum = 0;
    if (*plVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,0,&(this->BufferArray).AllocatorInstance,0,plVar1);
    }
    return (bool)cVar2;
  }
  return false;
}

// GetArchiveName @ 141699200

FString * __thiscall
FArchiveFileWriterGeneric::GetArchiveName
          (FArchiveFileWriterGeneric *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->Filename);
  return __return_storage_ptr__;
}

// LogWriteError @ 1416b1f30

void __thiscall
FArchiveFileWriterGeneric::LogWriteError(FArchiveFileWriterGeneric *this,wchar_t *param_1)

{
  DWORD DVar1;
  
  DVar1 = FWindowsPlatformMisc::GetLastError();
  LogWriteError(this,param_1,DVar1);
  return;
}

// LogWriteError @ 1416b1f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FArchiveFileWriterGeneric::LogWriteError
          (FArchiveFileWriterGeneric *this,wchar_t *param_1,uint param_2)

{
  undefined1 auStack_858 [32];
  uint local_838;
  wchar_t *local_830;
  wchar_t local_828 [1024];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_858;
  if ((this->bLoggingError == false) && ((this->Flags & 0x20) == 0)) {
    this->bLoggingError = true;
    if (1 < (byte)LogFileManager._0_1_) {
      local_830 = FWindowsPlatformMisc::GetSystemErrorMessage(local_828,0x400,param_2);
      local_838 = param_2;
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogFileManager);
    }
    this->bLoggingError = false;
  }
  return;
}

// Seek @ 1416bf0a0

void __thiscall FArchiveFileWriterGeneric::Seek(FArchiveFileWriterGeneric *this,long64 param_1)

{
  char cVar1;
  DWORD DVar2;
  
  FlushBuffer(this);
  cVar1 = (**(code **)(this->_padding_ + 0x268))(this,param_1);
  if (cVar1 == '\0') {
    DVar2 = FWindowsPlatformMisc::GetLastError();
    FArchiveState::SetError((FArchiveState *)this);
    LogWriteError(this,L"Error seeking file",DVar2);
  }
  this->Pos = param_1;
  return;
}

// SeekLowLevel @ 1416bf350

bool __thiscall
FArchiveFileWriterGeneric::SeekLowLevel(FArchiveFileWriterGeneric *this,long64 param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416bf35a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*(this->Handle).Ptr + 0x10))();
  return (bool)uVar1;
}

// Serialize @ 1416bf930

void __thiscall
FArchiveFileWriterGeneric::Serialize(FArchiveFileWriterGeneric *this,void *param_1,long64 param_2)

{
  long64 *plVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  DWORD DVar6;
  long64 lVar7;
  size_t _Size;
  
  this->Pos = this->Pos + param_2;
  if (param_2 < this->BufferSize) {
    plVar1 = &(this->BufferArray).ArrayNum;
    _Size = this->BufferSize - *plVar1;
    pTVar2 = &this->BufferArray;
    if ((longlong)_Size < param_2) {
      do {
        if (((param_1 == (void *)0x0) && (_Size != 0)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                          (1,1,_Size,&pTVar2->AllocatorInstance,&(this->BufferArray).ArrayNum,
                           &(this->BufferArray).ArrayMax);
        if (_Size != 0) {
          memcpy((pTVar2->AllocatorInstance).Data + lVar7,param_1,_Size);
        }
        param_2 = param_2 - _Size;
        param_1 = (void *)((longlong)param_1 + _Size);
        FlushBuffer(this);
        _Size = this->BufferSize - *plVar1;
      } while ((longlong)_Size < param_2);
    }
    if (param_2 != 0) {
      if ((param_1 == (void *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                        (1,1,param_2,&pTVar2->AllocatorInstance,plVar1,&(this->BufferArray).ArrayMax
                        );
      memcpy((pTVar2->AllocatorInstance).Data + lVar7,param_1,param_2);
    }
  }
  else {
    FlushBuffer(this);
    cVar4 = (**(code **)(this->_padding_ + 0x278))(this,param_1,param_2);
    if (cVar4 == '\0') {
      DVar6 = FWindowsPlatformMisc::GetLastError();
      FArchiveState::SetError((FArchiveState *)this);
      LogWriteError(this,L"Error writing to file",DVar6);
      return;
    }
  }
  return;
}

// Tell @ 1416c1b00

long64 __thiscall FArchiveFileWriterGeneric::Tell(FArchiveFileWriterGeneric *this)

{
  return this->Pos;
}

// TotalSize @ 1416c2210

long64 __thiscall FArchiveFileWriterGeneric::TotalSize(FArchiveFileWriterGeneric *this)

{
  long64 lVar1;
  
  FlushBuffer(this);
                    /* WARNING: Could not recover jumptable at 0x0001416c222d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)((longlong)*(this->Handle).Ptr + 0x50))();
  return lVar1;
}

// WriteLowLevel @ 1416c86d0

bool __thiscall
FArchiveFileWriterGeneric::WriteLowLevel
          (FArchiveFileWriterGeneric *this,uchar *param_1,long64 param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416c86da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*(this->Handle).Ptr + 0x30))();
  return (bool)uVar1;
}

