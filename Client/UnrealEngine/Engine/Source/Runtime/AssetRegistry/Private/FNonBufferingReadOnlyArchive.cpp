// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 15

// FNonBufferingReadOnlyArchive @ 142b4e160

FNonBufferingReadOnlyArchive * __thiscall
FNonBufferingReadOnlyArchive::FNonBufferingReadOnlyArchive
          (FNonBufferingReadOnlyArchive *this,long64 param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FGenericPlatformMemoryConstants *pFVar3;
  FNonBufferingReadOnlyArchive *pFVar4;
  uchar *puVar5;
  ulonglong uVar6;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->Flags = param_2;
  this->_padding_ = (longlong)&___7FNonBufferingReadOnlyArchive__6B_;
  (this->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filename).Data.ArrayNum = 0;
  (this->Filename).Data.ArrayMax = 0;
  this->Size = 0;
  this->Pos = 0;
  this->BufferBase = 0;
  (this->Handle).Ptr = (IFileHandle *)0x0;
  pFVar3 = FWindowsPlatformMemory::GetConstants();
  uVar6 = pFVar3->BinnedPageSize;
  this->BufferReadAlignment = uVar6;
  if ((uVar6 & uVar6 - 1) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FMath::IsPowerOfTwo(BufferReadAlignment)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\NonBufferingReadOnlyArchive.cpp"
                       ,0x17,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FNonBufferingReadOnlyArchive *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar6 = this->BufferReadAlignment;
  if (this->BufferReadAlignment < param_1) {
    uVar6 = param_1;
  }
  this->BufferSize = uVar6;
  if ((uVar6 & uVar6 - 1) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FMath::IsPowerOfTwo(BufferSize)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\NonBufferingReadOnlyArchive.cpp"
                       ,0x19,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FNonBufferingReadOnlyArchive *)(*pcVar1)();
      return pFVar4;
    }
  }
  puVar5 = FWindowsPlatformMemory::BinnedAllocFromOS(this->BufferSize);
  this->Buffer = puVar5;
  if (puVar5 == (uchar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\NonBufferingReadOnlyArchive.cpp"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FNonBufferingReadOnlyArchive *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

// ~FNonBufferingReadOnlyArchive @ 142b4f280

void __thiscall
FNonBufferingReadOnlyArchive::~FNonBufferingReadOnlyArchive(FNonBufferingReadOnlyArchive *this)

{
  IFileHandle *pIVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FNonBufferingReadOnlyArchive__6B_;
  pIVar1 = (this->Handle).Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
    (this->Handle).Ptr = (IFileHandle *)0x0;
    (**(code **)*pIVar1)(pIVar1,1);
  }
  FWindowsPlatformMemory::BinnedFreeToOS(this->Buffer,this->BufferSize);
  pIVar1 = (this->Handle).Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pFVar2 = (this->Filename).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FArchive::~FArchive((FArchive *)this);
  return;
}

// Close @ 142b56aa0

bool __thiscall FNonBufferingReadOnlyArchive::Close(FNonBufferingReadOnlyArchive *this)

{
  IFileHandle *pIVar1;
  
  pIVar1 = (this->Handle).Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
    (this->Handle).Ptr = (IFileHandle *)0x0;
    (**(code **)*pIVar1)(pIVar1,1);
  }
  return (bool)((byte)~*(byte *)((longlong)&this->_padding_ + 1) >> 1 & 1);
}

// CloseLowLevel @ 142b56ae0

void __thiscall FNonBufferingReadOnlyArchive::CloseLowLevel(FNonBufferingReadOnlyArchive *this)

{
  IFileHandle *pIVar1;
  
  pIVar1 = (this->Handle).Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
    (this->Handle).Ptr = (IFileHandle *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000142b56b02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

// GetArchiveName @ 142b58c30

FString * __thiscall
FNonBufferingReadOnlyArchive::GetArchiveName
          (FNonBufferingReadOnlyArchive *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->Filename);
  return __return_storage_ptr__;
}

// InternalPrecache @ 142b59e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FNonBufferingReadOnlyArchive::InternalPrecache
          (FNonBufferingReadOnlyArchive *this,long64 param_1,long64 param_2)

{
  longlong lVar1;
  uchar *puVar2;
  IFileHandle *pIVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_868 [32];
  longlong local_848;
  longlong local_840;
  ulonglong local_838;
  long64 local_830;
  DWORD local_828;
  wchar_t *local_820;
  wchar_t local_818 [1024];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_868;
  if ((this->Buffer == (uchar *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\NonBufferingReadOnlyArchive.cpp"
                         ,0x7c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  local_838 = this->Pos;
  lVar8 = this->BufferBase;
  if (local_838 == param_1) {
    lVar1 = this->BufferSize;
    if (((longlong)local_838 < lVar8) || (lVar1 + lVar8 <= (longlong)local_838)) {
      local_848 = this->BufferReadAlignment;
      this->BufferBase = -local_848 & local_838;
      if ((longlong)((-local_848 & local_838) + lVar1) < (longlong)local_838) {
        if ((2 < (byte)LogAssetRegistry._0_1_) && ((this->Flags & 2) == 0)) {
          local_840 = lVar1;
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        }
        return false;
      }
      (**(code **)((longlong)*(this->Handle).Ptr + 0x10))();
      puVar2 = this->Buffer;
      lVar8 = (**(code **)((longlong)*(this->Handle).Ptr + 8))();
      pIVar3 = (this->Handle).Ptr;
      cVar7 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,puVar2,lVar1);
      if (cVar7 == '\0') {
        lVar9 = 0;
      }
      else {
        lVar9 = (**(code **)((longlong)*(this->Handle).Ptr + 8))();
        lVar9 = lVar9 - lVar8;
      }
      if ((lVar9 != lVar1) && (lVar9 != this->Size - this->BufferBase)) {
        local_828 = FWindowsPlatformMisc::GetLastError();
        if ((2 < (byte)LogAssetRegistry._0_1_) && ((this->Flags & 2) == 0)) {
          local_820 = FWindowsPlatformMisc::GetSystemErrorMessage(local_818,0x400,local_828);
          local_830 = this->BufferReadAlignment;
          local_840 = this->BufferBase;
          local_848 = this->Size;
          local_838 = lVar1;
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        }
        return this->Pos <= this->BufferBase + lVar9;
      }
    }
    return true;
  }
  if ((lVar8 <= param_1) && (param_1 < this->BufferSize + lVar8)) {
    return true;
  }
  return false;
}

// OpenFile @ 142b5d130

bool __thiscall
FNonBufferingReadOnlyArchive::OpenFile(FNonBufferingReadOnlyArchive *this,wchar_t *param_1)

{
  IFileHandle *pIVar1;
  long64 lVar2;
  
  OpenFileLowLevel(this,param_1);
  pIVar1 = (this->Handle).Ptr;
  if (pIVar1 == (IFileHandle *)0x0) {
    return false;
  }
  lVar2 = (**(code **)((longlong)*pIVar1 + 0x50))();
  this->Size = lVar2;
  ::FString::operator=(&this->Filename,param_1);
  this->Pos = 0;
  this->BufferBase = ~this->BufferSize;
  (**(code **)(this->_padding_ + 200))(this,1);
  (**(code **)(this->_padding_ + 0x108))(this,1);
  return true;
}

// OpenFileLowLevel @ 142b5d1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNonBufferingReadOnlyArchive::OpenFileLowLevel(FNonBufferingReadOnlyArchive *this,wchar_t *param_1)

{
  TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_> *pTVar1;
  IFileHandle *pIVar2;
  code *pcVar3;
  TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_> TVar4;
  int iVar5;
  bool bVar6;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStackY_8c8 [32];
  FString local_888;
  longlong local_878;
  TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_> local_870;
  undefined8 local_868;
  int local_860;
  byte local_858;
  wchar_t local_848 [1024];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_8c8;
  pTVar1 = &this->Handle;
  pIVar2 = pTVar1->Ptr;
  if (pIVar2 != (IFileHandle *)0x0) {
    pTVar1->Ptr = (IFileHandle *)0x0;
    (**(code **)*pIVar2)(pIVar2,1);
  }
  this_00 = FPlatformFileManager::Get();
  pIVar7 = FPlatformFileManager::GetPlatformFile(this_00);
  (**(code **)((longlong)*pIVar7 + 0x100))(pIVar7,&local_870,param_1);
  uVar9 = (ulonglong)local_858;
  if ((2 < uVar9) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar9) == '\0') {
    if ((local_858 != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TVar4.Ptr = local_870.Ptr;
    local_870.Ptr = (IFileHandle *)0x0;
    if ((2 < local_858) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_858])(&local_870);
    local_858 = 2;
    if (pTVar1 == (TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_> *)&local_878) {
      if (TVar4.Ptr != (IFileHandle *)0x0) {
        (**(code **)*TVar4.Ptr)(TVar4.Ptr,1);
      }
    }
    else {
      pIVar2 = pTVar1->Ptr;
      pTVar1->Ptr = TVar4.Ptr;
      if (pIVar2 != (IFileHandle *)0x0) {
        (**(code **)*pIVar2)(pIVar2,1);
      }
    }
  }
  else if ((2 < (byte)LogAssetRegistry._0_1_) && ((this->Flags & 2) == 0)) {
    if ((local_858 != 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TVar4.Ptr = local_870.Ptr;
    iVar5 = (int)local_868;
    lVar8 = (longlong)(int)local_868;
    local_870.Ptr = (IFileHandle *)0x0;
    local_868 = 0;
    if ((2 < local_858) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_858] !=
        UE::Core::Private::
        TDestructorCaller<TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FEmptyType>
        ::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_858])(&local_870);
    }
    local_858 = 2;
    if (local_860 == 0) {
      local_888.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_888.Data.ArrayNum = iVar5;
      if (iVar5 == 0) {
        local_888.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar5,0,(ForAnyElementType *)&local_888,iVar5,&local_888.Data.ArrayMax);
        memcpy(local_888.Data.AllocatorInstance.Data,TVar4.Ptr,lVar8 * 2);
      }
    }
    else {
      memset(local_848,0,0x800);
      FWindowsPlatformMisc::GetSystemErrorMessage(local_848,0x400,local_860);
      ::FString::PrintfImpl(&local_888,L"%s [%s (%d)]");
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_888.Data.AllocatorInstance.Data);
    }
    if (TVar4.Ptr != (IFileHandle *)0x0) {
      FMemory::Free(TVar4.Ptr);
    }
  }
  uVar9 = (ulonglong)local_858;
  if ((2 < local_858) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar9])(&local_870);
  return;
}

// Precache @ 142b5e360

bool __thiscall
FNonBufferingReadOnlyArchive::Precache
          (FNonBufferingReadOnlyArchive *this,long64 param_1,long64 param_2)

{
  if (-1 < param_2) {
    InternalPrecache(this,param_1,param_2);
  }
  return true;
}

// ReadLowLevel @ 142b60f70

void __thiscall
FNonBufferingReadOnlyArchive::ReadLowLevel
          (FNonBufferingReadOnlyArchive *this,uchar *param_1,long64 param_2,long64 *param_3)

{
  IFileHandle *pIVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (**(code **)((longlong)*(this->Handle).Ptr + 8))();
  pIVar1 = (this->Handle).Ptr;
  cVar2 = (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,param_1,param_2);
  if (cVar2 == '\0') {
    *param_3 = 0;
  }
  else {
    lVar4 = (**(code **)((longlong)*(this->Handle).Ptr + 8))();
    *param_3 = lVar4 - lVar3;
  }
  return;
}

// Seek @ 142b64cd0

void __thiscall
FNonBufferingReadOnlyArchive::Seek(FNonBufferingReadOnlyArchive *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPos >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\NonBufferingReadOnlyArchive.cpp"
                         ,0x26,
                         L"Attempted to seek to a negative location (%lld/%lld), file: %s. The file is most likely corrupt."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->Size < param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPos <= Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\NonBufferingReadOnlyArchive.cpp"
                         ,0x27,
                         L"Attempted to seek past the end of file (%lld/%lld), file: %s. The file is most likely corrupt."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->Pos = param_1;
  return;
}

// SeekLowLevel @ 142b64e30

bool __thiscall
FNonBufferingReadOnlyArchive::SeekLowLevel(FNonBufferingReadOnlyArchive *this,long64 param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142b64e3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*(this->Handle).Ptr + 0x10))();
  return (bool)uVar1;
}

// Serialize @ 142b64ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNonBufferingReadOnlyArchive::Serialize
          (FNonBufferingReadOnlyArchive *this,void *param_1,long64 param_2)

{
  longlong lVar1;
  bool bVar2;
  size_t _Size;
  
  lVar1 = this->Pos;
  if (this->Size < lVar1 + param_2) {
    FArchiveState::SetError((FArchiveState *)this);
    if ((1 < (byte)LogAssetRegistry._0_1_) && ((this->Flags & 2) == 0)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      return;
    }
  }
  else {
    if ((lVar1 < this->BufferBase) || (this->BufferBase + this->BufferSize <= lVar1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    for (; 0 < param_2; param_2 = param_2 - _Size) {
      _Size = (this->BufferBase - lVar1) + this->BufferSize;
      if (param_2 < (longlong)_Size) {
        _Size = param_2;
      }
      if (((longlong)_Size < 1) || (bVar2)) {
        bVar2 = InternalPrecache(this,lVar1,0x7fffffff);
        if (!bVar2) {
          FArchiveState::SetError((FArchiveState *)this);
          if ((byte)LogAssetRegistry._0_1_ < 3) {
            return;
          }
          if ((this->Flags & 2) != 0) {
            return;
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
          return;
        }
        _Size = (this->BufferBase - this->Pos) + this->BufferSize;
        if (param_2 < (longlong)_Size) {
          _Size = param_2;
        }
        if ((((longlong)_Size < 1) &&
            (FArchiveState::SetError((FArchiveState *)this), 1 < (byte)LogAssetRegistry._0_1_)) &&
           ((this->Flags & 2) == 0)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        }
        if ((this->_padding_ & 0x200) != 0) {
          return;
        }
      }
      bVar2 = false;
      memcpy(param_1,this->Buffer + (this->Pos - this->BufferBase),_Size);
      this->Pos = this->Pos + _Size;
      lVar1 = this->Pos;
      param_1 = (void *)((longlong)param_1 + _Size);
    }
  }
  return;
}

// Tell @ 142b6bb80

long64 __thiscall FNonBufferingReadOnlyArchive::Tell(FNonBufferingReadOnlyArchive *this)

{
  return this->Pos;
}

// TotalSize @ 142b6cc40

long64 __thiscall FNonBufferingReadOnlyArchive::TotalSize(FNonBufferingReadOnlyArchive *this)

{
  return this->Size;
}

