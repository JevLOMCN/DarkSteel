// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// GetDirectoryEntry @ 14175c530

FIoDirectoryIndexEntry * __thiscall
FIoDirectoryIndexReaderImpl::GetDirectoryEntry
          (FIoDirectoryIndexReaderImpl *this,FIoDirectoryIndexHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FIoDirectoryIndexEntry *pFVar4;
  
  uVar3 = 0;
  if ((int)param_1.Handle < (this->DirectoryIndex).DirectoryEntries.ArrayNum) {
    uVar3 = ~param_1.Handle >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FIoDirectoryIndexEntry *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FIoDirectoryIndexEntry *)
         ((this->DirectoryIndex).DirectoryEntries.AllocatorInstance.Data +
         (longlong)(int)param_1.Handle * 0x10);
}

// GetDirectoryName @ 14175c5d0

TStringView<wchar_t> * __thiscall
FIoDirectoryIndexReaderImpl::GetDirectoryName
          (FIoDirectoryIndexReaderImpl *this,TStringView<wchar_t> *__return_storage_ptr__,
          FIoDirectoryIndexHandle param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FIoDirectoryIndexEntry *pFVar6;
  TStringView<wchar_t> *pTVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  
  if ((param_1.Handle != 0xffffffff) && (0 < (this->DirectoryIndex).DirectoryEntries.ArrayNum)) {
    pFVar6 = GetDirectoryEntry(this,param_1);
    uVar1 = pFVar6->Name;
    uVar5 = 0;
    if ((int)uVar1 < (this->DirectoryIndex).StringTable.ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TStringView<wchar_t> *)(*pcVar3)();
        return pTVar7;
      }
    }
    pFVar9 = (this->DirectoryIndex).StringTable.AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10
    ;
    __return_storage_ptr__->DataPtr = *(wchar_t **)pFVar9;
    iVar2 = *(int *)(pFVar9 + 8);
    iVar8 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar8 = 0;
    }
    __return_storage_ptr__->Size = iVar8;
    return __return_storage_ptr__;
  }
  *(undefined8 *)&__return_storage_ptr__->Size = 0;
  __return_storage_ptr__->DataPtr = (wchar_t *)0x0;
  return __return_storage_ptr__;
}

// GetFileData @ 14175cfb0

uint __thiscall
FIoDirectoryIndexReaderImpl::GetFileData
          (FIoDirectoryIndexReaderImpl *this,FIoDirectoryIndexHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((param_1.Handle != 0xffffffff) && (0 < (this->DirectoryIndex).DirectoryEntries.ArrayNum)) {
    uVar3 = 0;
    if ((int)param_1.Handle < (this->DirectoryIndex).FileEntries.ArrayNum) {
      uVar3 = ~param_1.Handle >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    return *(uint *)((this->DirectoryIndex).FileEntries.AllocatorInstance.Data +
                    (longlong)(int)param_1.Handle * 0xc + 8);
  }
  return 0xffffffff;
}

// GetFileEntry @ 14175d040

FIoFileIndexEntry * __thiscall
FIoDirectoryIndexReaderImpl::GetFileEntry
          (FIoDirectoryIndexReaderImpl *this,FIoDirectoryIndexHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FIoFileIndexEntry *pFVar4;
  
  uVar3 = 0;
  if ((int)param_1.Handle < (this->DirectoryIndex).FileEntries.ArrayNum) {
    uVar3 = ~param_1.Handle >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FIoFileIndexEntry *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FIoFileIndexEntry *)
         ((this->DirectoryIndex).FileEntries.AllocatorInstance.Data +
         (longlong)(int)param_1.Handle * 0xc);
}

// GetFileName @ 14175d0e0

TStringView<wchar_t> * __thiscall
FIoDirectoryIndexReaderImpl::GetFileName
          (FIoDirectoryIndexReaderImpl *this,TStringView<wchar_t> *__return_storage_ptr__,
          FIoDirectoryIndexHandle param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FIoFileIndexEntry *pFVar6;
  TStringView<wchar_t> *pTVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  
  if ((param_1.Handle != 0xffffffff) && (0 < (this->DirectoryIndex).DirectoryEntries.ArrayNum)) {
    pFVar6 = GetFileEntry(this,param_1);
    uVar1 = pFVar6->Name;
    uVar5 = 0;
    if ((int)uVar1 < (this->DirectoryIndex).StringTable.ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TStringView<wchar_t> *)(*pcVar3)();
        return pTVar7;
      }
    }
    pFVar9 = (this->DirectoryIndex).StringTable.AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10
    ;
    __return_storage_ptr__->DataPtr = *(wchar_t **)pFVar9;
    iVar2 = *(int *)(pFVar9 + 8);
    iVar8 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar8 = 0;
    }
    __return_storage_ptr__->Size = iVar8;
    return __return_storage_ptr__;
  }
  *(undefined8 *)&__return_storage_ptr__->Size = 0;
  __return_storage_ptr__->DataPtr = (wchar_t *)0x0;
  return __return_storage_ptr__;
}

// Initialize @ 141765e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIoStatus * __thiscall
FIoDirectoryIndexReaderImpl::Initialize
          (FIoDirectoryIndexReaderImpl *this,FIoStatus *__return_storage_ptr__,
          TArrayView<unsigned_char_const_,int> *param_1,FAESKey *param_2)

{
  wchar_t *pwVar1;
  uchar *puVar2;
  code *pcVar3;
  TSharedString<wchar_t> TVar4;
  bool bVar5;
  longlong lVar6;
  FIoStatus *pFVar7;
  ForElementType<unsigned_char> FVar8;
  size_t _Size;
  undefined1 auStackY_9f8 [32];
  FArchiveState local_9b8;
  undefined8 local_928;
  uchar *local_920;
  size_t local_918;
  undefined8 local_910;
  FArchiveState local_908;
  undefined8 local_878;
  ForElementType<unsigned_char> local_870;
  longlong local_868;
  undefined8 local_860;
  ForElementType<unsigned_char> local_858;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  TVar4.Chars = FIoStatus::Invalid.ErrorMessage.Chars;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_9f8;
  local_50 = param_1->ArrayNum;
  _Size = (size_t)local_50;
  if (local_50 == 0) {
    (__return_storage_ptr__->ErrorMessage).Chars = FIoStatus::Invalid.ErrorMessage.Chars;
    if (TVar4.Chars != (wchar_t *)0x0) {
      LOCK();
      pwVar1 = TVar4.Chars + -4;
      *(int *)pwVar1 = *(int *)pwVar1 + 1;
      UNLOCK();
    }
    __return_storage_ptr__->ErrorCode = FIoStatus::Invalid.ErrorCode;
    __return_storage_ptr__->SystemErrorCode = FIoStatus::Invalid.SystemErrorCode;
  }
  else {
    lVar6 = 0;
    do {
      if (*(int *)(param_2->Key + lVar6 * 4) != 0) {
        local_858.SecondaryData = (ForElementType<unsigned_char>)0x0;
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                  (1,1,local_50,0,&local_858,local_50,&local_4c);
        FVar8 = (ForElementType<unsigned_char>)&local_858;
        if (local_858.SecondaryData != (ForElementType<unsigned_char>)0x0) {
          FVar8 = local_858.SecondaryData;
        }
        memcpy((void *)FVar8,param_1->DataPtr,_Size);
        FVar8 = (ForElementType<unsigned_char>)&local_858;
        if (local_858.SecondaryData != (ForElementType<unsigned_char>)0x0) {
          FVar8 = local_858.SecondaryData;
        }
        FAES::DecryptData((uchar *)FVar8,(longlong)local_50,param_2);
        lVar6 = (longlong)local_50;
        FVar8 = (ForElementType<unsigned_char>)&local_858;
        if (local_858.SecondaryData != (ForElementType<unsigned_char>)0x0) {
          FVar8 = local_858.SecondaryData;
        }
        if (local_50 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FIoStatus *)(*pcVar3)();
            return pFVar7;
          }
        }
        local_908._padding_ = 0;
        local_908.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        local_908.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
        local_908.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
        local_908.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
        local_908._40_8_ = 0;
        local_908.ArSerializingDefaults = 0;
        local_908.ArPortFlags = 0;
        local_908.ArMaxSerializeSize = 0;
        local_908.ArUEVer.FileVersionUE4 = 0;
        local_908.ArUEVer.FileVersionUE5 = 0;
        local_908.ArLicenseeUEVer = 0;
        local_908.ArEngineVer.Major = 0;
        local_908.ArEngineVer.Minor = 0;
        local_908.ArEngineVer.Patch = 0;
        local_908.ArEngineVer._6_2_ = 0;
        local_908.ArEngineVer.Changelist = 0;
        local_908.CustomVersionContainer = (FCustomVersionContainer *)0x0;
        local_908.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
        local_908.SavePackageData = (FArchiveSavePackageData *)0x0;
        local_908.SerializedProperty = (FProperty *)0x0;
        local_908.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
        local_908.bCustomVersionsAreReset = false;
        local_908._129_7_ = 0;
        local_908.NextProxy = (FArchiveState *)0x0;
        FArchiveState::FArchiveState(&local_908);
        local_878 = 0;
        local_860 = 0x7fffffffffffffff;
        local_908._padding_ = (longlong)&___7FMemoryReaderView__6B_;
        local_870 = FVar8;
        local_868 = lVar6;
        FArchiveState::SetIsLoading(&local_908,true);
        (**(code **)(local_908._padding_ + 0x108))(&local_908,0);
        local_908._padding_ = (longlong)&___7FMemoryReaderView__6B_;
        ::operator<<((FArchive *)&local_908,(FString *)this);
        TArrayPrivateFriend::Serialize<FIoDirectoryIndexEntry,TSizedDefaultAllocator<32>_>
                  ((FArchive *)&local_908,&(this->DirectoryIndex).DirectoryEntries);
        TArrayPrivateFriend::Serialize<FIoFileIndexEntry,TSizedDefaultAllocator<32>_>
                  ((FArchive *)&local_908,&(this->DirectoryIndex).FileEntries);
        TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
                  ((FArchive *)&local_908,&(this->DirectoryIndex).StringTable);
        FArchive::~FArchive((FArchive *)&local_908);
        if (local_858.SecondaryData != (ForElementType<unsigned_char>)0x0) {
          FMemory::Free((void *)local_858.SecondaryData);
        }
        goto LAB_141766137;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < 8);
    puVar2 = param_1->DataPtr;
    if (local_50 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FIoStatus *)(*pcVar3)();
        return pFVar7;
      }
    }
    local_9b8._padding_ = 0;
    local_9b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_9b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_9b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_9b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_9b8._40_8_ = 0;
    local_9b8.ArSerializingDefaults = 0;
    local_9b8.ArPortFlags = 0;
    local_9b8.ArMaxSerializeSize = 0;
    local_9b8.ArUEVer.FileVersionUE4 = 0;
    local_9b8.ArUEVer.FileVersionUE5 = 0;
    local_9b8.ArLicenseeUEVer = 0;
    local_9b8.ArEngineVer.Major = 0;
    local_9b8.ArEngineVer.Minor = 0;
    local_9b8.ArEngineVer.Patch = 0;
    local_9b8.ArEngineVer._6_2_ = 0;
    local_9b8.ArEngineVer.Changelist = 0;
    local_9b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_9b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_9b8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_9b8.SerializedProperty = (FProperty *)0x0;
    local_9b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_9b8.bCustomVersionsAreReset = false;
    local_9b8._129_7_ = 0;
    local_9b8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_9b8);
    local_928 = 0;
    local_910 = 0x7fffffffffffffff;
    local_9b8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_920 = puVar2;
    local_918 = _Size;
    FArchiveState::SetIsLoading(&local_9b8,true);
    (**(code **)(local_9b8._padding_ + 0x108))(&local_9b8,0);
    local_9b8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    ::operator<<((FArchive *)&local_9b8,(FString *)this);
    TArrayPrivateFriend::Serialize<FIoDirectoryIndexEntry,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_9b8,&(this->DirectoryIndex).DirectoryEntries);
    TArrayPrivateFriend::Serialize<FIoFileIndexEntry,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_9b8,&(this->DirectoryIndex).FileEntries);
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_9b8,&(this->DirectoryIndex).StringTable);
    FArchive::~FArchive((FArchive *)&local_9b8);
LAB_141766137:
    TVar4.Chars = FIoStatus::Ok.ErrorMessage.Chars;
    (__return_storage_ptr__->ErrorMessage).Chars = FIoStatus::Ok.ErrorMessage.Chars;
    if (TVar4.Chars != (wchar_t *)0x0) {
      LOCK();
      pwVar1 = TVar4.Chars + -4;
      *(int *)pwVar1 = *(int *)pwVar1 + 1;
      UNLOCK();
    }
    __return_storage_ptr__->ErrorCode = FIoStatus::Ok.ErrorCode;
    __return_storage_ptr__->SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
  }
  return __return_storage_ptr__;
}

// IterateDirectoryIndex @ 141767250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FIoDirectoryIndexReaderImpl::IterateDirectoryIndex
          (FIoDirectoryIndexReaderImpl *this,FIoDirectoryIndexHandle param_1,
          TStringView<wchar_t> *param_2,
          TFunctionRef<bool___cdecl(TStringView<wchar_t>,unsigned_int)> *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TStringBuilderBase<wchar_t> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  FIoDirectoryIndexEntry *pFVar10;
  FIoFileIndexEntry *pFVar11;
  void *pvVar12;
  void *pvVar13;
  ulong64 uVar14;
  FIoDirectoryIndexHandle FVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  undefined1 auStack_548 [32];
  longlong local_528;
  longlong local_520;
  undefined4 local_518;
  FScriptContainerElement *local_510;
  TStringView<wchar_t> *local_508;
  undefined8 local_4f8;
  int iStack_4f0;
  undefined4 uStack_4ec;
  void *local_4e8;
  undefined8 uStack_4e0;
  void *local_4d8;
  undefined8 uStack_4d0;
  TFunctionRef<bool___cdecl(TStringView<wchar_t>,unsigned_int)> *local_4c8;
  TFunctionRef<bool___cdecl(TStringView<wchar_t>,unsigned_int)> local_4c0;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  int iStack_4a0;
  undefined4 uStack_49c;
  TStringView<wchar_t> local_498;
  TStringBuilderBase<wchar_t> local_488;
  TStringBuilderBase<wchar_t> local_468 [16];
  TStringBuilderBase<wchar_t> local_268;
  TStringBuilderBase<wchar_t> local_248 [16];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_548;
  local_508 = param_2;
  local_4c8 = param_3;
  if ((param_1.Handle == 0xffffffff) || ((this->DirectoryIndex).DirectoryEntries.ArrayNum < 1)) {
    FVar15.Handle = 0xffffffff;
    lVar17 = local_520;
  }
  else {
    pFVar10 = GetDirectoryEntry(this,param_1);
    FVar15.Handle = pFVar10->FirstFileEntry;
    lVar17 = local_520;
  }
  do {
    local_520 = lVar17;
    if (FVar15.Handle == 0xffffffff) {
      if ((param_1.Handle == 0xffffffff) || ((this->DirectoryIndex).DirectoryEntries.ArrayNum < 1))
      {
        FVar15.Handle = 0xffffffff;
      }
      else {
        pFVar10 = GetDirectoryEntry(this,param_1);
        FVar15.Handle = pFVar10->FirstChildEntry;
      }
      do {
        if (FVar15.Handle == 0xffffffff) {
          return true;
        }
        if ((this->DirectoryIndex).DirectoryEntries.ArrayNum < 1) {
          local_4d8 = (void *)0x0;
          iVar16 = 0;
          uStack_4d0 = 0;
        }
        else {
          pFVar10 = GetDirectoryEntry(this,FVar15);
          iVar16 = (this->DirectoryIndex).StringTable.ArrayNum;
          uVar8 = pFVar10->Name;
          lVar17 = (longlong)(int)uVar8;
          uVar9 = 0;
          if ((int)uVar8 < iVar16) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (local_528 = lVar17, local_520 = (longlong)iVar16,
             bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          pFVar2 = (this->DirectoryIndex).StringTable.AllocatorInstance.Data;
          iVar18 = *(int *)(pFVar2 + lVar17 * 0x10 + 8);
          local_4d8 = *(void **)(pFVar2 + lVar17 * 0x10);
          iVar16 = iVar18 + -1;
          if (iVar18 == 0) {
            iVar16 = 0;
          }
          uStack_4d0 = CONCAT44(uStack_4d0._4_4_,iVar16);
        }
        pvVar13 = local_4d8;
        local_268.Base = (wchar_t *)local_248;
        local_268.bIsDynamic = false;
        local_268.bIsExternal = false;
        local_268.CurPos = (wchar_t *)local_248;
        local_268.End = (wchar_t *)local_48;
        operator<<<wchar_t,TStringView<wchar_t>_&>(&local_268,param_2);
        if ((((int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1) != 0) &&
            (*(short *)&((TStringBuilderBase<wchar_t> *)((longlong)local_268.CurPos + -0x20))->
                        field_0x1e != 0x2f)) &&
           (*(short *)&((TStringBuilderBase<wchar_t> *)((longlong)local_268.CurPos + -0x20))->
                       field_0x1e != 0x5c)) {
          if (local_268.End < (wchar_t *)((longlong)(wchar_t **)local_268.CurPos + 2U)) {
            TStringBuilderBase<wchar_t>::Extend(&local_268,1);
          }
          *(undefined2 *)(wchar_t **)local_268.CurPos = 0x2f;
          local_268.CurPos = (wchar_t *)((longlong)(wchar_t **)local_268.CurPos + 2);
        }
        uVar14 = (ulong64)iVar16;
        if (local_268.End < (wchar_t *)((longlong)(wchar_t **)local_268.CurPos + uVar14 * 2)) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,uVar14);
        }
        if (iVar16 != 0) {
          pvVar13 = FGenericPlatformString::Memcpy(local_268.CurPos,pvVar13,uVar14 * 2);
          local_268.CurPos = (wchar_t *)((longlong)pvVar13 + uVar14 * 2);
        }
        local_4f8 = (TStringBuilderBase<wchar_t> *)local_268.Base;
        local_4c0._0_8_ = *(undefined8 *)param_3;
        iStack_4f0 = (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1);
        local_498._12_4_ = uStack_4ec;
        local_498.Size = iStack_4f0;
        local_4c0._8_8_ = *(undefined8 *)&param_3->field_0x8;
        local_498.DataPtr = local_268.Base;
        bVar5 = IterateDirectoryIndex(this,FVar15,&local_498,&local_4c0);
        if (!bVar5) {
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
          return false;
        }
        if ((FVar15.Handle == 0xffffffff) || ((this->DirectoryIndex).DirectoryEntries.ArrayNum < 1))
        {
          FVar15.Handle = 0xffffffff;
        }
        else {
          pFVar10 = GetDirectoryEntry(this,FVar15);
          FVar15.Handle = pFVar10->NextSiblingEntry;
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
        param_2 = local_508;
      } while( true );
    }
    pvVar13 = (void *)0x0;
    if ((this->DirectoryIndex).DirectoryEntries.ArrayNum < 1) {
      local_518 = 0xffffffff;
      if (FVar15.Handle != 0xffffffff) goto LAB_141767336;
LAB_1417673ba:
      uStack_4e0 = 0;
      iVar16 = 0;
    }
    else {
      iVar16 = (this->DirectoryIndex).FileEntries.ArrayNum;
      local_520 = (longlong)iVar16;
      uVar8 = 0;
      if ((int)FVar15.Handle < iVar16) {
        uVar8 = ~FVar15.Handle >> 0x1f;
      }
      if (uVar8 == 0) {
        local_528 = (longlong)(int)FVar15.Handle;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        lVar17 = local_520;
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      local_520 = lVar17;
      local_518 = *(undefined4 *)
                   ((this->DirectoryIndex).FileEntries.AllocatorInstance.Data +
                   (longlong)(int)FVar15.Handle * 0xc + 8);
LAB_141767336:
      if ((this->DirectoryIndex).DirectoryEntries.ArrayNum < 1) goto LAB_1417673ba;
      pFVar11 = GetFileEntry(this,FVar15);
      iVar16 = (this->DirectoryIndex).StringTable.ArrayNum;
      uVar8 = pFVar11->Name;
      lVar17 = (longlong)(int)uVar8;
      uVar9 = 0;
      if ((int)uVar8 < iVar16) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (local_528 = lVar17, local_520 = (longlong)iVar16,
         bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar2 = (this->DirectoryIndex).StringTable.AllocatorInstance.Data;
      iVar18 = *(int *)(pFVar2 + lVar17 * 0x10 + 8);
      pvVar13 = *(void **)(pFVar2 + lVar17 * 0x10);
      iVar16 = iVar18 + -1;
      if (iVar18 == 0) {
        iVar16 = 0;
      }
      uStack_4e0 = CONCAT44(uStack_4e0._4_4_,iVar16);
    }
    local_510 = (this->DirectoryIndex).MountPoint.Data.AllocatorInstance.Data;
    local_488.Base = (wchar_t *)local_468;
    local_488.End = (wchar_t *)&local_268;
    local_488.CurPos = (wchar_t *)local_468;
    iVar1 = (this->DirectoryIndex).MountPoint.Data.ArrayNum;
    local_488.bIsDynamic = false;
    local_488.bIsExternal = false;
    iVar18 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar18 = 0;
    }
    uVar14 = (ulong64)iVar18;
    local_4e8 = pvVar13;
    if (&local_268 < (TStringBuilderBase<wchar_t> *)((longlong)&local_468[0].Base + uVar14 * 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_488,uVar14);
    }
    if (iVar18 != 0) {
      pvVar12 = FGenericPlatformString::Memcpy(local_488.CurPos,local_510,uVar14 * 2);
      local_488.CurPos = (wchar_t *)((longlong)pvVar12 + uVar14 * 2);
    }
    if ((((int)((longlong)local_488.CurPos - (longlong)local_488.Base >> 1) != 0) &&
        (*(short *)&((TStringBuilderBase<wchar_t> *)((longlong)local_488.CurPos + -0x20))->
                    field_0x1e != 0x2f)) &&
       (*(short *)&((TStringBuilderBase<wchar_t> *)((longlong)local_488.CurPos + -0x20))->field_0x1e
        != 0x5c)) {
      if (local_488.End <
          (TStringBuilderBase<wchar_t> *)((longlong)(wchar_t **)local_488.CurPos + 2U)) {
        TStringBuilderBase<wchar_t>::Extend(&local_488,1);
      }
      *(undefined2 *)(wchar_t **)local_488.CurPos = 0x2f;
      local_488.CurPos = (wchar_t *)((longlong)(wchar_t **)local_488.CurPos + 2);
    }
    operator<<<wchar_t,TStringView<wchar_t>_&>(&local_488,local_508);
    if ((((int)((longlong)local_488.CurPos - (longlong)local_488.Base >> 1) != 0) &&
        (*(short *)&((TStringBuilderBase<wchar_t> *)((longlong)local_488.CurPos + -0x20))->
                    field_0x1e != 0x2f)) &&
       (*(short *)&((TStringBuilderBase<wchar_t> *)((longlong)local_488.CurPos + -0x20))->field_0x1e
        != 0x5c)) {
      if (local_488.End <
          (TStringBuilderBase<wchar_t> *)((longlong)(wchar_t **)local_488.CurPos + 2)) {
        TStringBuilderBase<wchar_t>::Extend(&local_488,1);
      }
      *(undefined2 *)(wchar_t **)local_488.CurPos = 0x2f;
      local_488.CurPos = (wchar_t *)((longlong)(wchar_t **)local_488.CurPos + 2);
    }
    uVar14 = (ulong64)iVar16;
    if (local_488.End <
        (TStringBuilderBase<wchar_t> *)((longlong)(wchar_t **)local_488.CurPos + uVar14 * 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_488,uVar14);
    }
    if (iVar16 != 0) {
      pvVar13 = FGenericPlatformString::Memcpy(local_488.CurPos,pvVar13,uVar14 * 2);
      local_488.CurPos = (wchar_t *)((longlong)pvVar13 + uVar14 * 2);
    }
    param_3 = local_4c8;
    local_4f8 = (TStringBuilderBase<wchar_t> *)local_488.Base;
    pTVar4 = local_4f8;
    iStack_4f0 = (int)((longlong)local_488.CurPos - (longlong)local_488.Base >> 1);
    local_4f8._0_4_ = SUB84(local_488.Base,0);
    local_4f8._4_4_ = (undefined4)((ulonglong)local_488.Base >> 0x20);
    local_510 = (FScriptContainerElement *)CONCAT44(local_510._4_4_,local_518);
    local_4a8 = (undefined4)local_4f8;
    uStack_4a4 = local_4f8._4_4_;
    uStack_49c = uStack_4ec;
    local_4f8 = pTVar4;
    iStack_4a0 = iStack_4f0;
    cVar7 = (**(code **)local_4c8)(*(undefined8 *)&local_4c8->field_0x8,&local_4a8,&local_510);
    if (cVar7 == '\0') {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_488);
      return false;
    }
    if ((FVar15.Handle == 0xffffffff) || ((this->DirectoryIndex).DirectoryEntries.ArrayNum < 1)) {
      FVar15.Handle = 0xffffffff;
    }
    else {
      pFVar11 = GetFileEntry(this,FVar15);
      FVar15.Handle = pFVar11->NextFileEntry;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_488);
    param_2 = local_508;
    lVar17 = local_520;
  } while( true );
}

