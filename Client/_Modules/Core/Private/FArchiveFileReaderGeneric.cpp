// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 14

// FArchiveFileReaderGeneric @ 1416776c0

FArchiveFileReaderGeneric * __thiscall
FArchiveFileReaderGeneric::FArchiveFileReaderGeneric
          (FArchiveFileReaderGeneric *this,IFileHandle *param_1,wchar_t *param_2,long64 param_3,
          uint param_4,uint param_5)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->_padding_ = (longlong)&___7FArchiveFileReaderGeneric__6B_;
  ::FString::FString(&this->Filename,param_2);
  (this->BufferArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferArray).ArrayNum = 0;
  (this->BufferArray).ArrayMax = 0;
  uVar3 = 1;
  if (param_4 != 0) {
    uVar3 = (ulonglong)param_4;
  }
  this->Pos = 0;
  this->BufferBase = 0;
  uVar3 = uVar3 - 1;
  lVar1 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  this->Flags = param_5;
  (this->Handle).Ptr = param_1;
  cVar2 = (char)lVar1;
  if (uVar3 == 0) {
    cVar2 = -1;
  }
  this->Size = param_3;
  this->bFirstReadAfterSeek = false;
  uVar4 = 1L << (0x40U - ('?' - cVar2) & 0x3f);
  if (uVar4 < (ulonglong)param_3) {
    param_3 = uVar4;
  }
  this->BufferSize = param_3;
  (**(code **)(this->_padding_ + 200))(this,CONCAT71((int7)(uVar3 >> 8),1));
  (**(code **)(this->_padding_ + 0x108))(this,1);
  return this;
}

// ~FArchiveFileReaderGeneric @ 14167b710

void __thiscall
FArchiveFileReaderGeneric::~FArchiveFileReaderGeneric(FArchiveFileReaderGeneric *this)

{
  FScriptContainerElement *pFVar1;
  IFileHandle *pIVar2;
  
  this->_padding_ = (longlong)&___7FArchiveFileReaderGeneric__6B_;
  TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>::Reset(&this->Handle,(IFileHandle *)0x0);
  pFVar1 = (this->BufferArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->Handle).Ptr;
  if (pIVar2 != (IFileHandle *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  pFVar1 = (this->Filename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FArchive::~FArchive((FArchive *)this);
  return;
}

// Close @ 14168bd80

bool __thiscall FArchiveFileReaderGeneric::Close(FArchiveFileReaderGeneric *this)

{
  (**(code **)(this->_padding_ + 0x270))();
  return (bool)((byte)~*(byte *)((longlong)&this->_padding_ + 1) >> 1 & 1);
}

// CloseLowLevel @ 14168be10

void __thiscall FArchiveFileReaderGeneric::CloseLowLevel(FArchiveFileReaderGeneric *this)

{
  IFileHandle *pIVar1;
  
  pIVar1 = (this->Handle).Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
    (this->Handle).Ptr = (IFileHandle *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014168be32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

// FlushCache @ 1416952d0

void __thiscall FArchiveFileReaderGeneric::FlushCache(FArchiveFileReaderGeneric *this)

{
  long64 *plVar1;
  IFileHandle *pIVar2;
  
  plVar1 = &(this->BufferArray).ArrayMax;
  (this->BufferArray).ArrayNum = 0;
  if (*plVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,&(this->BufferArray).AllocatorInstance,0,plVar1);
  }
  pIVar2 = (this->Handle).Ptr;
  this->BufferBase = this->Pos;
  if (pIVar2 != (IFileHandle *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x00014169533a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x268))(this,this->Pos);
    return;
  }
  return;
}

// GetArchiveName @ 1416991a0

FString * __thiscall
FArchiveFileReaderGeneric::GetArchiveName
          (FArchiveFileReaderGeneric *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->Filename);
  return __return_storage_ptr__;
}

// InternalPrecache @ 1416b08d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FArchiveFileReaderGeneric::InternalPrecache
          (FArchiveFileReaderGeneric *this,long64 param_1,long64 param_2)

{
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *this_00;
  ulong64 uVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined1 auStackY_858 [32];
  longlong local_828 [2];
  wchar_t local_818 [1024];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_858;
  this_00 = &this->BufferArray;
  if ((this->BufferArray).ArrayMax == 0) {
    uVar1 = this->BufferSize;
    if ((longlong)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar1);
    }
    if (0 < (longlong)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,uVar1,&this_00->AllocatorInstance,(this->BufferArray).ArrayNum,
                 &(this->BufferArray).ArrayMax);
    }
  }
  lVar2 = this->Pos;
  if (lVar2 == param_1) {
    lVar5 = this->Size - lVar2;
    if (this->BufferSize < lVar5) {
      lVar5 = this->BufferSize;
    }
    if (0 < lVar5) {
      if ((this->BufferBase <= lVar2) && (lVar2 < this->BufferBase + (this->BufferArray).ArrayNum))
      {
        return true;
      }
      TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNumUninitialized(this_00,lVar5,No);
      pFVar3 = (this_00->AllocatorInstance).Data;
      this->BufferBase = this->Pos;
      local_828[0] = 0;
      (**(code **)(this->_padding_ + 0x278))(this,pFVar3,lVar5,local_828);
      if (local_828[0] == lVar5) {
        return true;
      }
      DVar4 = FWindowsPlatformMisc::GetLastError();
      if ((2 < (byte)LogFileManager._0_1_) && ((this->Flags & 2) == 0)) {
        FWindowsPlatformMisc::GetSystemErrorMessage(local_818,0x400,DVar4);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogFileManager);
      }
      lVar2 = local_828[0];
      TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNumUninitialized
                (this_00,local_828[0],Default);
      return 0 < lVar2;
    }
  }
  else if ((this->BufferBase <= param_1) &&
          (param_1 < this->BufferBase + (this->BufferArray).ArrayNum)) {
    return true;
  }
  return false;
}

// Precache @ 1416b6990

bool __thiscall
FArchiveFileReaderGeneric::Precache(FArchiveFileReaderGeneric *this,long64 param_1,long64 param_2)

{
  if (-1 < param_2) {
    InternalPrecache(this,param_1,param_2);
    this->bFirstReadAfterSeek = false;
  }
  return true;
}

// ReadLowLevel @ 1416b9f30

void __thiscall
FArchiveFileReaderGeneric::ReadLowLevel
          (FArchiveFileReaderGeneric *this,uchar *param_1,long64 param_2,long64 *param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)((longlong)*(this->Handle).Ptr + 0x20))();
  if (cVar1 == '\0') {
    param_2 = 0;
  }
  *param_3 = param_2;
  return;
}

// Seek @ 1416beeb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FArchiveFileReaderGeneric::Seek(FArchiveFileReaderGeneric *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined1 auStack_868 [32];
  long64 local_848;
  longlong local_840;
  FScriptContainerElement *local_838;
  wchar_t *local_830;
  wchar_t local_828 [1024];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_868;
  if (param_1 < 0) {
    if ((this->Filename).Data.ArrayNum == 0) {
      local_838 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_838 = (this->Filename).Data.AllocatorInstance.Data;
    }
    local_840 = this->Size;
    local_848 = param_1;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPos >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\FileManagerGeneric.cpp"
                       ,0x2aa,
                       L"Attempted to seek to a negative location (%lld/%lld), file: %s. The file is most likely corrupt."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->Size < param_1) {
    if ((this->Filename).Data.ArrayNum == 0) {
      local_838 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_838 = (this->Filename).Data.AllocatorInstance.Data;
    }
    local_848 = param_1;
    local_840 = this->Size;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPos <= Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\FileManagerGeneric.cpp"
                       ,0x2ab,
                       L"Attempted to seek past the end of file (%lld/%lld), file: %s. The file is most likely corrupt."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1 < this->BufferBase) ||
     (lVar5 = (this->BufferArray).ArrayNum + this->BufferBase, lVar5 <= param_1)) {
    bVar2 = true;
    lVar5 = param_1;
  }
  else {
    bVar2 = false;
  }
  this->bFirstReadAfterSeek = bVar2;
  cVar3 = (**(code **)(this->_padding_ + 0x268))(this,lVar5);
  if (cVar3 == '\0') {
    DVar4 = FWindowsPlatformMisc::GetLastError();
    FArchiveState::SetError((FArchiveState *)this);
    if ((1 < (byte)LogFileManager._0_1_) && ((this->Flags & 2) == 0)) {
      local_830 = FWindowsPlatformMisc::GetSystemErrorMessage(local_828,0x400,DVar4);
      local_840 = this->Pos;
      local_848 = this->Size;
      local_838 = (FScriptContainerElement *)CONCAT44(local_838._4_4_,DVar4);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogFileManager);
    }
    this->Pos = param_1;
  }
  else {
    this->Pos = param_1;
  }
  return;
}

// SeekLowLevel @ 1416bf330

bool __thiscall
FArchiveFileReaderGeneric::SeekLowLevel(FArchiveFileReaderGeneric *this,long64 param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416bf33a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*(this->Handle).Ptr + 0x10))();
  return (bool)uVar1;
}

// Serialize @ 1416bf5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FArchiveFileReaderGeneric::Serialize(FArchiveFileReaderGeneric *this,void *param_1,long64 param_2)

{
  longlong lVar1;
  bool bVar2;
  DWORD DVar3;
  size_t _Size;
  char cVar4;
  undefined1 auStackY_898 [32];
  size_t local_858 [2];
  wchar_t local_848 [1024];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_898;
  lVar1 = this->Pos;
  if (this->Size < lVar1 + param_2) {
    FArchiveState::SetError((FArchiveState *)this);
    if ((1 < (byte)LogFileManager._0_1_) && ((this->Flags & 2) == 0)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogFileManager);
    }
  }
  else {
    if ((lVar1 < this->BufferBase) || (this->BufferBase + (this->BufferArray).ArrayNum <= lVar1)) {
      this->BufferBase = lVar1;
      (this->BufferArray).ArrayNum = 0;
      if ((this->BufferArray).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (1,1,0,&(this->BufferArray).AllocatorInstance,0,&(this->BufferArray).ArrayMax);
      }
      cVar4 = this->bFirstReadAfterSeek;
    }
    else {
      cVar4 = '\0';
    }
    this->bFirstReadAfterSeek = false;
    for (; 0 < param_2; param_2 = param_2 - _Size) {
      _Size = (this->BufferBase - this->Pos) + (this->BufferArray).ArrayNum;
      if (param_2 < (longlong)_Size) {
        _Size = param_2;
      }
      if ((longlong)_Size < 1) {
        if ((this->BufferSize <= param_2) || (cVar4 != '\0')) {
          local_858[0] = 0;
          (**(code **)(this->_padding_ + 0x278))(this,param_1,param_2,local_858);
          if (local_858[0] != param_2) {
            DVar3 = FWindowsPlatformMisc::GetLastError();
            FArchiveState::SetError((FArchiveState *)this);
            if ((2 < (byte)LogFileManager._0_1_) && ((this->Flags & 2) == 0)) {
              FWindowsPlatformMisc::GetSystemErrorMessage(local_848,0x400,DVar3);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogFileManager);
            }
          }
          this->Pos = this->Pos + param_2;
          return;
        }
        bVar2 = InternalPrecache(this,this->Pos,0x7fffffff);
        if (!bVar2) {
          FArchiveState::SetError((FArchiveState *)this);
          if ((byte)LogFileManager._0_1_ < 3) {
            return;
          }
          if ((this->Flags & 2) != 0) {
            return;
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogFileManager);
          return;
        }
        _Size = (this->BufferBase - this->Pos) + (this->BufferArray).ArrayNum;
        if (param_2 < (longlong)_Size) {
          _Size = param_2;
        }
        if ((((longlong)_Size < 1) &&
            (FArchiveState::SetError((FArchiveState *)this), 1 < (byte)LogFileManager._0_1_)) &&
           ((this->Flags & 2) == 0)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogFileManager);
        }
        if ((this->_padding_ & 0x200) != 0) {
          return;
        }
      }
      memcpy(param_1,(this->BufferArray).AllocatorInstance.Data + (this->Pos - this->BufferBase),
             _Size);
      this->Pos = this->Pos + _Size;
      param_1 = (void *)((longlong)param_1 + _Size);
    }
  }
  return;
}

// Tell @ 1416c1ae0

long64 __thiscall FArchiveFileReaderGeneric::Tell(FArchiveFileReaderGeneric *this)

{
  return this->Pos;
}

// TotalSize @ 1416c2200

long64 __thiscall FArchiveFileReaderGeneric::TotalSize(FArchiveFileReaderGeneric *this)

{
  return this->Size;
}

