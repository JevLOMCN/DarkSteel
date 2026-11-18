// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 37

// operator() @ 141a9dfb0

bool __thiscall
`FWindowsPlatformFile::IterateDirectory'::__l2::<lambda_1>::operator()
          (void *this,_WIN32_FIND_DATAW *param_1)

{
  wchar_t *_Str;
  uint uVar1;
  longlong *plVar2;
  TStringBuilderBase<wchar_t> *pTVar3;
  wchar_t *pwVar4;
  FDirectoryVisitor *this_00;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  size_t sVar8;
  int iVar9;
  int iVar10;
  
  plVar2 = *(longlong **)this;
  iVar10 = (int)(plVar2[1] - *plVar2 >> 1);
  iVar9 = iVar10 - **(int **)((longlong)this + 8);
  if (iVar10 < iVar9) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount <= Len()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                       ,0xe8,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  plVar2[1] = plVar2[1] + (longlong)iVar9 * -2;
  _Str = param_1->cFileName;
  pTVar3 = *(TStringBuilderBase<wchar_t> **)this;
  pwVar4 = pTVar3->CurPos;
  if ((((int)((longlong)pwVar4 - (longlong)pTVar3->Base >> 1) != 0) && (pwVar4[-1] != L'/')) &&
     (pwVar4[-1] != L'\\')) {
    if (pTVar3->End < pwVar4 + 1) {
      TStringBuilderBase<wchar_t>::Extend(pTVar3,1);
    }
    *pTVar3->CurPos = L'/';
    pTVar3->CurPos = pTVar3->CurPos + 1;
  }
  iVar9 = 0;
  if (_Str != (wchar_t *)0x0) {
    sVar8 = wcslen(_Str);
    iVar9 = (int)sVar8;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar3,_Str,iVar9);
  pTVar3 = *(TStringBuilderBase<wchar_t> **)this;
  uVar1 = param_1->dwFileAttributes;
  this_00 = *(FDirectoryVisitor **)((longlong)this + 0x10);
  if (pTVar3->End < pTVar3->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar3,1);
  }
  *pTVar3->CurPos = L'\0';
  bVar6 = IPlatformFile::FDirectoryVisitor::CallShouldVisitAndVisit
                    (this_00,pTVar3->Base,(bool)((byte)(uVar1 >> 4) & 1));
  return bVar6;
}

// operator() @ 141a9e0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FWindowsPlatformFile::IterateDirectoryStat'::__l2::<lambda_1>::operator()
          (void *this,_WIN32_FIND_DATAW *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  FDateTime FVar3;
  FDateTime FVar4;
  bool bVar5;
  BOOL BVar6;
  int iVar7;
  size_t sVar8;
  int iVar9;
  ForAnyElementType FVar10;
  long64 lVar11;
  uint uVar12;
  undefined1 auStackY_f8 [32];
  FString local_b0;
  FDateTime local_a0;
  FDateTime local_98;
  FDateTime local_90;
  FDirectoryStatVisitor *local_88;
  FFileStatData local_80;
  _SYSTEMTIME local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  uVar12 = param_1->dwFileAttributes;
  lVar11 = -1;
  if ((uVar12 >> 4 & 1) == 0) {
    lVar11 = CONCAT44(param_1->nFileSizeHigh,param_1->nFileSizeLow);
  }
  local_88 = *(FDirectoryStatVisitor **)this;
  BVar6 = FileTimeToSystemTime((FILETIME *)&param_1->ftLastWriteTime,&local_58);
  if (BVar6 == 0) {
    local_a0.Ticks = 0;
  }
  else {
    FDateTime::FDateTime
              (&local_a0,(uint)local_58.wYear,(uint)local_58.wMonth,(uint)local_58.wDay,
               (uint)local_58.wHour,(uint)local_58.wMinute,(uint)local_58.wSecond,0);
  }
  FVar3.Ticks = local_a0.Ticks;
  BVar6 = FileTimeToSystemTime((FILETIME *)&param_1->ftLastAccessTime,&local_58);
  if (BVar6 == 0) {
    local_98.Ticks = 0;
  }
  else {
    FDateTime::FDateTime
              (&local_98,(uint)local_58.wYear,(uint)local_58.wMonth,(uint)local_58.wDay,
               (uint)local_58.wHour,(uint)local_58.wMinute,(uint)local_58.wSecond,0);
  }
  FVar4.Ticks = local_98.Ticks;
  BVar6 = FileTimeToSystemTime((FILETIME *)&param_1->ftCreationTime,&local_58);
  if (BVar6 == 0) {
    local_90.Ticks = 0;
  }
  else {
    FDateTime::FDateTime
              (&local_90,(uint)local_58.wYear,(uint)local_58.wMonth,(uint)local_58.wDay,
               (uint)local_58.wHour,(uint)local_58.wMinute,(uint)local_58.wSecond,0);
  }
  local_80._32_1_ =
       ((byte)uVar12 & 1 | 2) * '\x02' | local_80._32_1_ & 0xfc | (uVar12 >> 4 & 1) != 0;
  puVar2 = *(undefined8 **)((longlong)this + 8);
  local_80.CreationTime.Ticks = local_90.Ticks;
  local_80.AccessTime.Ticks = FVar4.Ticks;
  local_80.ModificationTime.Ticks = FVar3.Ticks;
  local_80.FileSize = lVar11;
  sVar8 = wcslen(param_1->cFileName);
  iVar7 = (int)sVar8;
  if ((*(int *)(puVar2 + 1) != 0) || (iVar9 = 2, iVar7 == -1)) {
    iVar9 = 1;
  }
  local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  local_b0.Data.ArrayNum = iVar1;
  if ((iVar1 == 0) && (iVar7 + iVar9 == 0)) {
    local_b0.Data.ArrayMax = 0;
  }
  else {
    uVar12 = iVar1 + iVar7 + iVar9;
    if ((int)uVar12 < iVar1) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar12,0,(ForAnyElementType *)&local_b0,iVar1,&local_b0.Data.ArrayMax);
    if (iVar1 != 0) {
      memcpy(local_b0.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    }
  }
  ::FString::PathAppend(&local_b0,param_1->cFileName,iVar7);
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_b0.Data.ArrayNum != 0) {
    FVar10.Data = local_b0.Data.AllocatorInstance.Data;
  }
  bVar5 = IPlatformFile::FDirectoryStatVisitor::CallShouldVisitAndVisit
                    (local_88,(wchar_t *)FVar10.Data,&local_80);
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// CreateDirectory @ 141aa29d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FWindowsPlatformFile::CreateDirectory(FWindowsPlatformFile *this,wchar_t *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  size_t sVar3;
  void *pvVar4;
  ulong64 uVar5;
  bool bVar6;
  int iVar7;
  WCHAR *pWVar8;
  undefined1 auStack_268 [48];
  TStringBuilderBase<wchar_t> local_238;
  WCHAR local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_268;
  local_238.Base = local_218;
  local_238.End = (wchar_t *)local_18;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  iVar7 = 0;
  local_238.CurPos = local_218;
  if (param_1 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_1);
    iVar7 = (int)sVar3;
  }
  uVar5 = (ulong64)iVar7;
  pWVar8 = local_218;
  if (local_18 < local_218 + uVar5) {
    TStringBuilderBase<wchar_t>::Extend(&local_238,uVar5);
    pWVar8 = local_238.CurPos;
  }
  if (iVar7 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(pWVar8,param_1,uVar5 * 2);
    local_238.CurPos = (wchar_t *)((longlong)pvVar4 + uVar5 * 2);
  }
  NormalizeWindowsPath(&local_238,false);
  if (local_238.End < local_238.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_238,1);
  }
  *local_238.CurPos = L'\0';
  BVar1 = CreateDirectoryW(local_238.Base,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 != 0xb7) {
      bVar6 = false;
      goto LAB_141aa2ad8;
    }
  }
  bVar6 = true;
LAB_141aa2ad8:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return bVar6;
}

// DeleteDirectory @ 141aa4040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FWindowsPlatformFile::DeleteDirectory(FWindowsPlatformFile *this,wchar_t *param_1)

{
  char cVar1;
  DWORD dwErrCode;
  size_t sVar2;
  void *pvVar3;
  ulong64 uVar4;
  int iVar5;
  WCHAR *pWVar6;
  undefined1 auStack_278 [32];
  TStringBuilderBase<wchar_t> local_258;
  WCHAR local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_278;
  local_258.Base = local_238;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  local_258.End = (wchar_t *)local_38;
  iVar5 = 0;
  local_258.CurPos = local_238;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    iVar5 = (int)sVar2;
  }
  uVar4 = (ulong64)iVar5;
  pWVar6 = local_238;
  if (local_38 < local_238 + uVar4) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,uVar4);
    pWVar6 = local_258.CurPos;
  }
  if (iVar5 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(pWVar6,param_1,uVar4 * 2);
    local_258.CurPos = (wchar_t *)((longlong)pvVar3 + uVar4 * 2);
  }
  NormalizeWindowsPath(&local_258,false);
  if (local_258.End < local_258.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,1);
  }
  *local_258.CurPos = L'\0';
  RemoveDirectoryW(local_258.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  dwErrCode = GetLastError();
  cVar1 = (**(code **)((longlong)*this + 0x118))(this,param_1);
  if (cVar1 != '\0') {
    SetLastError(dwErrCode);
  }
  return cVar1 == '\0';
}

// DeleteFile @ 141aa41a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FWindowsPlatformFile::DeleteFile(FWindowsPlatformFile *this,wchar_t *param_1)

{
  BOOL BVar1;
  size_t sVar2;
  void *pvVar3;
  ulong64 uVar4;
  int iVar5;
  WCHAR *pWVar6;
  undefined1 auStack_258 [32];
  TStringBuilderBase<wchar_t> local_238;
  WCHAR local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_258;
  local_238.Base = local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.End = (wchar_t *)local_18;
  iVar5 = 0;
  local_238.CurPos = local_218;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    iVar5 = (int)sVar2;
  }
  uVar4 = (ulong64)iVar5;
  pWVar6 = local_218;
  if (local_18 < local_218 + uVar4) {
    TStringBuilderBase<wchar_t>::Extend(&local_238,uVar4);
    pWVar6 = local_238.CurPos;
  }
  if (iVar5 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(pWVar6,param_1,uVar4 * 2);
    local_238.CurPos = (wchar_t *)((longlong)pvVar3 + uVar4 * 2);
  }
  NormalizeWindowsPath(&local_238,true);
  if (local_238.End < local_238.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_238,1);
  }
  *local_238.CurPos = L'\0';
  BVar1 = DeleteFileW(local_238.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return BVar1 != 0;
}

// DirectoryExists @ 141aa4ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FWindowsPlatformFile::DirectoryExists(FWindowsPlatformFile *this,wchar_t *param_1)

{
  bool bVar1;
  DWORD DVar2;
  size_t sVar3;
  void *pvVar4;
  ulong64 uVar5;
  WCHAR *pWVar6;
  int iVar7;
  undefined1 auStack_258 [32];
  TStringBuilderBase<wchar_t> local_238;
  WCHAR local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_258;
  sVar3 = wcslen(param_1);
  if ((int)sVar3 == 0) {
    bVar1 = true;
  }
  else {
    local_238.Base = local_218;
    local_238.End = (wchar_t *)local_18;
    iVar7 = 0;
    local_238.bIsDynamic = false;
    local_238.bIsExternal = false;
    local_238.CurPos = local_218;
    if (param_1 != (wchar_t *)0x0) {
      sVar3 = wcslen(param_1);
      iVar7 = (int)sVar3;
    }
    uVar5 = (ulong64)iVar7;
    pWVar6 = local_218;
    if (local_18 < local_218 + uVar5) {
      TStringBuilderBase<wchar_t>::Extend(&local_238,uVar5);
      pWVar6 = local_238.CurPos;
    }
    if (iVar7 != 0) {
      pvVar4 = FGenericPlatformString::Memcpy(pWVar6,param_1,uVar5 * 2);
      local_238.CurPos = (wchar_t *)((longlong)pvVar4 + uVar5 * 2);
    }
    NormalizeWindowsPath(&local_238,false);
    if (local_238.End < local_238.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_238,1);
    }
    *local_238.CurPos = L'\0';
    DVar2 = GetFileAttributesW(local_238.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
    if ((DVar2 == 0xffffffff) || ((DVar2 & 0x10) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  return bVar1;
}

// FileExists @ 141aa6440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FWindowsPlatformFile::FileExists(FWindowsPlatformFile *this,wchar_t *param_1)

{
  DWORD DVar1;
  size_t sVar2;
  void *pvVar3;
  ulong64 uVar4;
  bool bVar5;
  int iVar6;
  WCHAR *pWVar7;
  undefined1 auStack_258 [32];
  TStringBuilderBase<wchar_t> local_238;
  WCHAR local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_258;
  local_238.Base = local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.End = (wchar_t *)local_18;
  iVar6 = 0;
  local_238.CurPos = local_218;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    iVar6 = (int)sVar2;
  }
  uVar4 = (ulong64)iVar6;
  pWVar7 = local_218;
  if (local_18 < local_218 + uVar4) {
    TStringBuilderBase<wchar_t>::Extend(&local_238,uVar4);
    pWVar7 = local_238.CurPos;
  }
  if (iVar6 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(pWVar7,param_1,uVar4 * 2);
    local_238.CurPos = (wchar_t *)((longlong)pvVar3 + uVar4 * 2);
  }
  NormalizeWindowsPath(&local_238,true);
  if (local_238.End < local_238.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_238,1);
  }
  *local_238.CurPos = L'\0';
  DVar1 = GetFileAttributesW(local_238.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  if (DVar1 == 0xffffffff) {
    bVar5 = false;
  }
  else {
    bVar5 = (bool)(~(byte)(DVar1 >> 4) & 1);
  }
  return bVar5;
}

// FileJournalGetFileData @ 141aa6590

FFileJournalData * __thiscall
FWindowsPlatformFile::FileJournalGetFileData
          (FWindowsPlatformFile *this,FFileJournalData *__return_storage_ptr__,wchar_t *param_1,
          FString *param_2)

{
  IPlatformFile::FileJournalGetFileData
            ((IPlatformFile *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// FileJournalGetLatestEntry @ 141aa65b0

EFileJournalResult __thiscall
FWindowsPlatformFile::FileJournalGetLatestEntry
          (FWindowsPlatformFile *this,wchar_t *param_1,ulong64 *param_2,ulong64 *param_3,
          FString *param_4)

{
  EFileJournalResult EVar1;
  
  if (param_4 != (FString *)0x0) {
    ::FString::operator=(param_4,L"FileJournal is only available in editor.");
  }
  EVar1 = IPlatformFile::FileJournalGetLatestEntry
                    ((IPlatformFile *)this,param_1,param_2,param_3,(FString *)0x0);
  return EVar1;
}

// FileJournalGetMaximumSize @ 141aa6620

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
FWindowsPlatformFile::FileJournalGetMaximumSize
          (FWindowsPlatformFile *this,wchar_t *param_1,Type *param_2,FString *param_3)

{
  ulong64 uVar1;
  
  if (param_2 != (Type *)0x0) {
    *param_2 = Display;
  }
  if (param_3 != (FString *)0x0) {
    ::FString::operator=(param_3,L"FileJournal is only available in editor.");
  }
  uVar1 = IPlatformFile::FileJournalGetMaximumSize
                    ((IPlatformFile *)this,param_1,(Type *)0x0,(FString *)0x0);
  return uVar1;
}

// FileJournalGetVolumeName @ 141aa6680

FString * __thiscall
FWindowsPlatformFile::FileJournalGetVolumeName
          (FWindowsPlatformFile *this,FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  FString local_78;
  TStringView<wchar_t> local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  local_48.DataPtr = param_1->DataPtr;
  local_48._8_8_ = *(undefined8 *)&param_1->Size;
  pFVar6 = (FScriptContainerElement *)0x0;
  bVar3 = FPathViews::IsDriveSpecifierWithoutRoot(&local_48);
  pwVar1 = param_1->DataPtr;
  iVar4 = (int)*(undefined8 *)&param_1->Size;
  if (bVar3) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    pFVar5 = ::FString::ConstructFromPtrSize((FString *)&local_48,pwVar1,iVar4);
    pFVar6 = (FScriptContainerElement *)local_48.DataPtr;
    if (__return_storage_ptr__ != pFVar5) {
      pFVar6 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
      pFVar6 = (FScriptContainerElement *)local_48.DataPtr;
    }
  }
  else {
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    pFVar5 = ::FString::ConstructFromPtrSize(&local_58,pwVar1,iVar4);
    if (&local_78 != pFVar5) {
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      local_78.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = (pFVar5->Data).ArrayNum;
      local_78.Data.ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pFVar5 = FPaths::ConvertRelativePathToFull((FString *)&local_38,&local_78);
    iVar4 = 0;
    if (&local_28 != pFVar5) {
      pFVar6 = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar4 = (pFVar5->Data).ArrayNum;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if ((FScriptContainerElement *)local_38.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.DataPtr);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_68.DataPtr = (wchar_t *)0x0;
    local_68.Size = 0;
    local_58.Data.ArrayNum = iVar4 + -1;
    if (iVar4 == 0) {
      local_58.Data.ArrayNum = 0;
    }
    local_48.DataPtr = (wchar_t *)0x0;
    local_38._12_4_ = local_58.Data.ArrayMax;
    local_38.Size = local_58.Data.ArrayNum;
    local_48._8_8_ = local_48._8_8_ & 0xffffffff00000000;
    local_58.Data.AllocatorInstance.Data = pFVar6;
    local_38.DataPtr = (wchar_t *)pFVar6;
    FPathViews::SplitVolumeSpecifier(&local_38,&local_68,&local_48);
    iVar4 = local_68.Size;
    if (1 < local_68.Size) {
      iVar4 = 1;
    }
    iVar7 = 0;
    if (0 < iVar4) {
      iVar7 = iVar4;
    }
    if ((iVar7 == 1) &&
       (iVar4 = FGenericPlatformStricmp::Strnicmp
                          (L":",local_68.DataPtr + ((longlong)local_68.Size - (longlong)iVar7),1),
       iVar4 == 0)) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      pFVar5 = ::FString::ConstructFromPtrSize((FString *)&local_38,local_68.DataPtr,local_68.Size);
      if (__return_storage_ptr__ != pFVar5) {
        pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if ((FScriptContainerElement *)local_38.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.DataPtr);
      }
    }
    else {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
    }
  }
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  return __return_storage_ptr__;
}

// FileJournalIsAvailable @ 141aa68c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWindowsPlatformFile::FileJournalIsAvailable
          (FWindowsPlatformFile *this,wchar_t *param_1,Type *param_2,FString *param_3)

{
  bool bVar1;
  
  if (param_2 != (Type *)0x0) {
    *param_2 = Display;
  }
  if (param_3 != (FString *)0x0) {
    ::FString::operator=(param_3,L"FileJournal is only available in editor.");
  }
  bVar1 = IPlatformFile::FileJournalIsAvailable
                    ((IPlatformFile *)this,param_1,(Type *)0x0,(FString *)0x0);
  return bVar1;
}

// FileJournalIterateDirectory @ 141aa6920

bool __thiscall
FWindowsPlatformFile::FileJournalIterateDirectory
          (FWindowsPlatformFile *this,wchar_t *param_1,
          TFunctionRef<bool___cdecl(wchar_t_const_*,FFileJournalData_const_&)> *param_2,
          FString *param_3)

{
  bool bVar1;
  TFunctionRef<bool___cdecl(wchar_t_const_*,FFileJournalData_const_&)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  bVar1 = IPlatformFile::FileJournalIterateDirectory
                    ((IPlatformFile *)this,param_1,&local_18,param_3);
  return bVar1;
}

// FileJournalReadModified @ 141aa6950

EFileJournalResult __thiscall
FWindowsPlatformFile::FileJournalReadModified
          (FWindowsPlatformFile *this,wchar_t *param_1,ulong64 *param_2,ulong64 *param_3,
          TMap<FFileJournalFileHandle,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFileJournalFileHandle,FString,0>_>
          *param_4,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_5,
          ulong64 *param_6,FString *param_7)

{
  EFileJournalResult EVar1;
  
  if (param_7 != (FString *)0x0) {
    ::FString::operator=(param_7,L"FileJournal is only available in editor.");
  }
  EVar1 = IPlatformFile::FileJournalReadModified
                    ((IPlatformFile *)this,param_1,param_2,param_3,param_4,param_5,param_6,
                     (FString *)0x0);
  return EVar1;
}

// FileSize @ 141aa69d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __thiscall FWindowsPlatformFile::FileSize(FWindowsPlatformFile *this,wchar_t *param_1)

{
  BOOL BVar1;
  size_t sVar2;
  void *pvVar3;
  long64 lVar4;
  ulong64 uVar5;
  int iVar6;
  WCHAR *pWVar7;
  undefined1 auStack_298 [32];
  byte local_278 [28];
  undefined4 local_25c;
  undefined4 local_258;
  TStringBuilderBase<wchar_t> local_248;
  WCHAR local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_298;
  local_248.Base = local_228;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  local_248.End = (wchar_t *)local_28;
  iVar6 = 0;
  local_248.CurPos = local_228;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    iVar6 = (int)sVar2;
  }
  uVar5 = (ulong64)iVar6;
  pWVar7 = local_228;
  if (local_28 < local_228 + uVar5) {
    TStringBuilderBase<wchar_t>::Extend(&local_248,uVar5);
    pWVar7 = local_248.CurPos;
  }
  if (iVar6 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(pWVar7,param_1,uVar5 * 2);
    local_248.CurPos = (wchar_t *)((longlong)pvVar3 + uVar5 * 2);
  }
  NormalizeWindowsPath(&local_248,true);
  if (local_248.End < local_248.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_248,1);
  }
  *local_248.CurPos = L'\0';
  BVar1 = GetFileAttributesExW(local_248.Base,GetFileExInfoStandard,local_278);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  if ((BVar1 == 0) || ((local_278[0] & 0x10) != 0)) {
    lVar4 = -1;
  }
  else {
    lVar4 = CONCAT44(local_25c,local_258);
  }
  return lVar4;
}

// FindFirstFileWithWildcard @ 141aa6d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
FWindowsPlatformFile::FindFirstFileWithWildcard(wchar_t *param_1,_WIN32_FIND_DATAW *param_2)

{
  size_t sVar1;
  void *pvVar2;
  HANDLE pvVar3;
  ulong64 uVar4;
  int iVar5;
  undefined1 auStack_268 [32];
  TStringBuilderBase<wchar_t> local_248;
  WCHAR local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_268;
  iVar5 = 0;
  if (param_1 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_1);
    iVar5 = (int)sVar1;
  }
  local_248.Base = local_228;
  uVar4 = (ulong64)iVar5;
  local_248.End = (wchar_t *)local_28;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  local_248.CurPos = local_228;
  if (local_28 < local_228 + uVar4) {
    TStringBuilderBase<wchar_t>::Extend(&local_248,uVar4);
  }
  if (iVar5 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(local_248.CurPos,param_1,uVar4 * 2);
    local_248.CurPos = (wchar_t *)((longlong)pvVar2 + uVar4 * 2);
  }
  if ((((int)((longlong)local_248.CurPos - (longlong)local_248.Base >> 1) != 0) &&
      (local_248.CurPos[-1] != L'/')) && (local_248.CurPos[-1] != L'\\')) {
    if (local_248.End < local_248.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_248,1);
    }
    *local_248.CurPos = L'/';
    local_248.CurPos = local_248.CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_248,L"*.*",3);
  NormalizeWindowsPath(&local_248,true);
  if (local_248.End < local_248.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_248,1);
  }
  *local_248.CurPos = L'\0';
  pvVar3 = FindFirstFileW(local_248.Base,(LPWIN32_FIND_DATAW)param_2);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  return pvVar3;
}

// GetAccessTimeStamp @ 141aa7370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDateTime __thiscall
FWindowsPlatformFile::GetAccessTimeStamp(FWindowsPlatformFile *this,wchar_t *param_1)

{
  BOOL BVar1;
  size_t sVar2;
  void *pvVar3;
  ulong64 uVar4;
  wchar_t *in_R8;
  int iVar5;
  WCHAR *pWVar6;
  undefined1 auStackY_2d8 [32];
  _SYSTEMTIME local_298;
  undefined1 local_288 [12];
  FILETIME local_27c [4];
  TStringBuilderBase<wchar_t> local_258;
  WCHAR local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_258.Base = local_238;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  local_258.End = (wchar_t *)local_38;
  iVar5 = 0;
  local_258.CurPos = local_238;
  if (in_R8 != (wchar_t *)0x0) {
    sVar2 = wcslen(in_R8);
    iVar5 = (int)sVar2;
  }
  uVar4 = (ulong64)iVar5;
  pWVar6 = local_238;
  if (local_38 < local_238 + uVar4) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,uVar4);
    pWVar6 = local_258.CurPos;
  }
  if (iVar5 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(pWVar6,in_R8,uVar4 * 2);
    local_258.CurPos = (wchar_t *)((longlong)pvVar3 + uVar4 * 2);
  }
  NormalizeWindowsPath(&local_258,true);
  if (local_258.End < local_258.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,1);
  }
  *local_258.CurPos = L'\0';
  BVar1 = GetFileAttributesExW(local_258.Base,GetFileExInfoStandard,local_288);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  if ((BVar1 != 0) && (BVar1 = FileTimeToSystemTime(local_27c,&local_298), BVar1 != 0)) {
    FDateTime::FDateTime
              ((FDateTime *)param_1,(uint)local_298.wYear,(uint)local_298.wMonth,
               (uint)local_298.wDay,(uint)local_298.wHour,(uint)local_298.wMinute,
               (uint)local_298.wSecond,0);
    return (FDateTime)(long64)param_1;
  }
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  return (FDateTime)(long64)param_1;
}

// GetFilenameOnDisk @ 141aa93a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
FWindowsPlatformFile::GetFilenameOnDisk
          (FWindowsPlatformFile *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  DWORD DVar5;
  BOOL BVar6;
  size_t sVar7;
  void *pvVar8;
  HANDLE hFile;
  FString *pFVar9;
  wchar_t *pwVar10;
  ulong64 uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  TStringBuilderBase<wchar_t> *pTVar16;
  undefined1 auStackY_4c8 [32];
  TStringBuilderBase<wchar_t> local_488;
  TStringBuilderBase<wchar_t> local_468 [16];
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  local_488.Base = (wchar_t *)local_468;
  local_488.bIsDynamic = false;
  local_488.bIsExternal = false;
  local_488.End = (wchar_t *)&local_268;
  iVar15 = 0;
  iVar4 = iVar15;
  local_488.CurPos = (wchar_t *)local_468;
  if (param_1 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_1);
    iVar4 = (int)sVar7;
  }
  uVar11 = (ulong64)iVar4;
  pTVar16 = local_468;
  if (&local_268 < (TStringBuilderBase<wchar_t> *)((longlong)&local_468[0].Base + uVar11 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_488,uVar11);
    pTVar16 = (TStringBuilderBase<wchar_t> *)local_488.CurPos;
  }
  if (iVar4 != 0) {
    pvVar8 = FGenericPlatformString::Memcpy(pTVar16,param_1,uVar11 * 2);
    local_488.CurPos = (wchar_t *)((longlong)pvVar8 + uVar11 * 2);
  }
  NormalizeWindowsPath(&local_488,true);
  if (local_488.End < (TStringBuilderBase<wchar_t> *)((longlong)(wchar_t **)local_488.CurPos + 2U))
  {
    TStringBuilderBase<wchar_t>::Extend(&local_488,1);
  }
  *(undefined2 *)(wchar_t **)local_488.CurPos = 0;
  ::FString::FString(__return_storage_ptr__,local_488.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_488);
  FPlatformFileTrace::BeginOpen(param_1);
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  if ((__return_storage_ptr__->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
  }
  hFile = CreateFileW(pwVar10,0x80,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x2000000,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    FPlatformFileTrace::FailOpen(param_1);
  }
  else {
    FPlatformFileTrace::EndOpen((ulong64)hFile);
    uVar14 = *piVar1;
    uVar13 = (ulonglong)(uVar14 + 9);
    if (uVar14 == 0) {
      uVar13 = 10;
    }
    do {
      uVar12 = (uint)uVar13;
      if ((int)uVar14 < (int)uVar12) {
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,uVar12 - uVar14,(ForAnyElementType *)__return_storage_ptr__,piVar1,
                           &(__return_storage_ptr__->Data).ArrayMax);
        memset((__return_storage_ptr__->Data).AllocatorInstance.Data + (longlong)iVar4 * 2,0,
               (longlong)(int)(uVar12 - uVar14) * 2);
      }
      else {
        if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar13);
        }
        if ((int)uVar12 < (int)uVar14) {
          uVar14 = uVar14 - uVar12;
          if ((int)(uVar14 | uVar12) < 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pFVar9 = (FString *)(*pcVar2)();
              return pFVar9;
            }
          }
          if (uVar14 != 0) {
            _Dst = (__return_storage_ptr__->Data).AllocatorInstance.Data + (longlong)(int)uVar12 * 2
            ;
            iVar4 = (*piVar1 - uVar14) - uVar12;
            if (iVar4 != 0) {
              memmove(_Dst,_Dst + (longlong)(int)uVar14 * 2,(longlong)iVar4 * 2);
            }
            *piVar1 = *piVar1 - uVar14;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,(ForAnyElementType *)__return_storage_ptr__,*piVar1,
                       &(__return_storage_ptr__->Data).ArrayMax);
          }
        }
      }
      DVar5 = GetFinalPathNameByHandleW
                        (hFile,(LPWSTR)(__return_storage_ptr__->Data).AllocatorInstance.Data,*piVar1
                         ,0);
      uVar13 = (ulonglong)DVar5;
      if (DVar5 == 0) {
        local_268.bIsDynamic = false;
        local_268.bIsExternal = false;
        local_268.Base = local_248;
        local_268.End = (wchar_t *)local_48;
        local_268.CurPos = local_248;
        if (param_1 != (wchar_t *)0x0) {
          sVar7 = wcslen(param_1);
          iVar15 = (int)sVar7;
        }
        uVar11 = (ulong64)iVar15;
        pwVar10 = local_248;
        if (local_48 < local_248 + uVar11) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,uVar11);
          pwVar10 = local_268.CurPos;
        }
        if (iVar15 != 0) {
          pvVar8 = FGenericPlatformString::Memcpy(pwVar10,param_1,uVar11 * 2);
          local_268.CurPos = (wchar_t *)((longlong)pvVar8 + uVar11 * 2);
        }
        NormalizeWindowsPath(&local_268,true);
        if (local_268.End < local_268.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,1);
        }
        *local_268.CurPos = L'\0';
        ::FString::operator=(__return_storage_ptr__,local_268.Base);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
        goto LAB_141aa9716;
      }
      uVar14 = *piVar1;
    } while (uVar14 <= DVar5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNum
              (&__return_storage_ptr__->Data,DVar5 + 1,Default);
LAB_141aa9716:
    FPlatformFileTrace::BeginClose((ulong64)hFile);
    BVar6 = CloseHandle(hFile);
    if (BVar6 == 0) {
      FPlatformFileTrace::FailClose((ulong64)hFile);
    }
    else {
      FPlatformFileTrace::EndClose((ulong64)hFile);
    }
  }
  bVar3 = ::FString::StartsWith(__return_storage_ptr__,L"\\\\?\\UNC\\",8,CaseSensitive);
  if (bVar3) {
    ::FString::RemoveAt(__return_storage_ptr__,2,6,Default);
  }
  else {
    ::FString::RemoveFromStart(__return_storage_ptr__,L"\\\\?\\",4,CaseSensitive);
  }
  ::FString::ReplaceCharInlineCaseSensitive(__return_storage_ptr__,L'\\',L'/');
  return __return_storage_ptr__;
}

// GetStatData @ 141aadb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FFileStatData * __thiscall
FWindowsPlatformFile::GetStatData
          (FWindowsPlatformFile *this,FFileStatData *__return_storage_ptr__,wchar_t *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  FDateTime FVar3;
  FDateTime FVar4;
  BOOL BVar5;
  size_t sVar6;
  void *pvVar7;
  ulong64 uVar8;
  long64 lVar9;
  int iVar10;
  FDateTime FVar11;
  WCHAR *pWVar12;
  undefined1 auStackY_2e8 [32];
  FDateTime local_2a8;
  FDateTime local_2a0;
  FDateTime local_298;
  _SYSTEMTIME local_290;
  uint local_280;
  FILETIME local_27c;
  FILETIME local_274;
  FILETIME local_26c;
  undefined4 local_264;
  undefined4 local_260;
  TStringBuilderBase<wchar_t> local_258;
  WCHAR local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_258.Base = local_238;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  FVar11.Ticks = 0;
  local_258.End = (wchar_t *)local_38;
  iVar10 = 0;
  local_258.CurPos = local_238;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    iVar10 = (int)sVar6;
  }
  uVar8 = (ulong64)iVar10;
  pWVar12 = local_238;
  if (local_38 < local_238 + uVar8) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,uVar8);
    pWVar12 = local_258.CurPos;
  }
  if (iVar10 != 0) {
    pvVar7 = FGenericPlatformString::Memcpy(pWVar12,param_1,uVar8 * 2);
    local_258.CurPos = (wchar_t *)((longlong)pvVar7 + uVar8 * 2);
  }
  NormalizeWindowsPath(&local_258,true);
  if (local_258.End < local_258.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,1);
  }
  *local_258.CurPos = L'\0';
  BVar5 = GetFileAttributesExW(local_258.Base,GetFileExInfoStandard,&local_280);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  lVar9 = -1;
  if (BVar5 == 0) {
    __return_storage_ptr__->bIsDirectory = false;
    __return_storage_ptr__->bIsValid = false;
    __return_storage_ptr__->bIsReadOnly = false;
    (__return_storage_ptr__->AccessTime).Ticks = 0;
    (__return_storage_ptr__->ModificationTime).Ticks = 0;
  }
  else {
    if ((local_280 >> 4 & 1) == 0) {
      lVar9 = CONCAT44(local_264,local_260);
    }
    BVar5 = FileTimeToSystemTime(&local_26c,&local_290);
    if (BVar5 == 0) {
      local_2a8.Ticks = 0;
    }
    else {
      FDateTime::FDateTime
                (&local_2a8,(uint)local_290.wYear,(uint)local_290.wMonth,(uint)local_290.wDay,
                 (uint)local_290.wHour,(uint)local_290.wMinute,(uint)local_290.wSecond,0);
    }
    FVar3.Ticks = local_2a8.Ticks;
    BVar5 = FileTimeToSystemTime(&local_274,&local_290);
    if (BVar5 == 0) {
      local_2a0.Ticks = 0;
    }
    else {
      FDateTime::FDateTime
                (&local_2a0,(uint)local_290.wYear,(uint)local_290.wMonth,(uint)local_290.wDay,
                 (uint)local_290.wHour,(uint)local_290.wMinute,(uint)local_290.wSecond,0);
    }
    FVar4.Ticks = local_2a0.Ticks;
    BVar5 = FileTimeToSystemTime(&local_27c,&local_290);
    if (BVar5 != 0) {
      FDateTime::FDateTime
                (&local_298,(uint)local_290.wYear,(uint)local_290.wMonth,(uint)local_290.wDay,
                 (uint)local_290.wHour,(uint)local_290.wMinute,(uint)local_290.wSecond,0);
      FVar11.Ticks = local_298.Ticks;
    }
    __return_storage_ptr__->bIsDirectory = false;
    bVar2 = __return_storage_ptr__->field_0x20;
    (__return_storage_ptr__->ModificationTime).Ticks = FVar3.Ticks;
    __return_storage_ptr__->field_0x20 =
         (local_280 >> 4 & 1) != 0 | bVar2 & 0xfd | ((byte)local_280 & 1 | 2) * '\x02';
    (__return_storage_ptr__->AccessTime).Ticks = FVar4.Ticks;
  }
  __return_storage_ptr__->FileSize = lVar9;
  (__return_storage_ptr__->CreationTime).Ticks = FVar11.Ticks;
  return __return_storage_ptr__;
}

// GetTimeStamp @ 141aae990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDateTime __thiscall FWindowsPlatformFile::GetTimeStamp(FWindowsPlatformFile *this,wchar_t *param_1)

{
  BOOL BVar1;
  size_t sVar2;
  void *pvVar3;
  ulong64 uVar4;
  wchar_t *in_R8;
  int iVar5;
  WCHAR *pWVar6;
  undefined1 auStackY_2d8 [32];
  _SYSTEMTIME local_298;
  undefined1 local_288 [20];
  FILETIME local_274 [3];
  TStringBuilderBase<wchar_t> local_258;
  WCHAR local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_258.Base = local_238;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  local_258.End = (wchar_t *)local_38;
  iVar5 = 0;
  local_258.CurPos = local_238;
  if (in_R8 != (wchar_t *)0x0) {
    sVar2 = wcslen(in_R8);
    iVar5 = (int)sVar2;
  }
  uVar4 = (ulong64)iVar5;
  pWVar6 = local_238;
  if (local_38 < local_238 + uVar4) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,uVar4);
    pWVar6 = local_258.CurPos;
  }
  if (iVar5 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(pWVar6,in_R8,uVar4 * 2);
    local_258.CurPos = (wchar_t *)((longlong)pvVar3 + uVar4 * 2);
  }
  NormalizeWindowsPath(&local_258,true);
  if (local_258.End < local_258.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,1);
  }
  *local_258.CurPos = L'\0';
  BVar1 = GetFileAttributesExW(local_258.Base,GetFileExInfoStandard,local_288);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  if ((BVar1 != 0) && (BVar1 = FileTimeToSystemTime(local_274,&local_298), BVar1 != 0)) {
    FDateTime::FDateTime
              ((FDateTime *)param_1,(uint)local_298.wYear,(uint)local_298.wMonth,
               (uint)local_298.wDay,(uint)local_298.wHour,(uint)local_298.wMinute,
               (uint)local_298.wSecond,0);
    return (FDateTime)(long64)param_1;
  }
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  return (FDateTime)(long64)param_1;
}

// HasMarkOfTheWeb @ 141ab1bb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FWindowsPlatformFile::HasMarkOfTheWeb
          (FWindowsPlatformFile *this,TStringView<wchar_t> *param_1,FString *param_2)

{
  UINT UVar1;
  DWORD DVar2;
  void *pvVar3;
  FString *pFVar4;
  ulong64 uVar5;
  bool bVar6;
  int iVar7;
  undefined1 auStackY_1288 [32];
  FString local_1258;
  TStringBuilderBase<wchar_t> local_1248;
  WCHAR local_1228 [256];
  WCHAR local_1028 [2048];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x141ab1bca;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1288;
  local_1258.Data.AllocatorInstance.Data._0_4_ = *(undefined4 *)&param_1->DataPtr;
  local_1258.Data.AllocatorInstance.Data._4_4_ = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  local_1258.Data.ArrayNum = param_1->Size;
  local_1258.Data.ArrayMax = *(int *)&param_1->field_0xc;
  local_1248.Base = local_1228;
  local_1248.CurPos = local_1228;
  local_1248.End = local_1028;
  iVar7 = (int)*(undefined8 *)&param_1->Size;
  uVar5 = (ulong64)iVar7;
  local_1248.bIsDynamic = false;
  local_1248.bIsExternal = false;
  if (local_1028 < local_1228 + uVar5) {
    TStringBuilderBase<wchar_t>::Extend(&local_1248,uVar5);
  }
  if (iVar7 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy
                       (local_1248.CurPos,
                        (void *)CONCAT44(local_1258.Data.AllocatorInstance.Data._4_4_,
                                         local_1258.Data.AllocatorInstance.Data._0_4_),uVar5 * 2);
    local_1248.CurPos = (wchar_t *)((longlong)pvVar3 + uVar5 * 2);
  }
  NormalizeWindowsPath(&local_1248,true);
  if (local_1248.End < local_1248.CurPos + 0x10) {
    TStringBuilderBase<wchar_t>::Extend(&local_1248,0x10);
  }
  pvVar3 = FGenericPlatformString::Memcpy(local_1248.CurPos,L":Zone.Identifier",0x20);
  local_1248.CurPos = (wchar_t *)((longlong)pvVar3 + 0x20);
  if (local_1248.End < (WCHAR *)((longlong)pvVar3 + 0x22)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1248,1);
  }
  bVar6 = false;
  *local_1248.CurPos = L'\0';
  UVar1 = GetPrivateProfileIntW(L"ZoneTransfer",L"ZoneId",-1,local_1248.Base);
  if (UVar1 - 2 < 3) {
    if (param_2 != (FString *)0x0) {
      if (local_1248.End < local_1248.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_1248,1);
      }
      *local_1248.CurPos = L'\0';
      DVar2 = GetPrivateProfileStringW
                        (L"ZoneTransfer",L"HostUrl",(LPCWSTR)0x0,local_1028,0x800,local_1248.Base);
      if ((0 < (int)DVar2) && (DVar2 < 0x801)) {
        pFVar4 = ::FString::ConstructFromPtrSize(&local_1258,local_1028,DVar2);
        ::FString::operator=(param_2,pFVar4);
        if ((void *)CONCAT44(local_1258.Data.AllocatorInstance.Data._4_4_,
                             local_1258.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
          FMemory::Free((void *)CONCAT44(local_1258.Data.AllocatorInstance.Data._4_4_,
                                         local_1258.Data.AllocatorInstance.Data._0_4_));
        }
      }
    }
    bVar6 = true;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1248);
  return bVar6;
}

// IsReadOnly @ 141ab2f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FWindowsPlatformFile::IsReadOnly(FWindowsPlatformFile *this,wchar_t *param_1)

{
  DWORD DVar1;
  size_t sVar2;
  void *pvVar3;
  ulong64 uVar4;
  bool bVar5;
  int iVar6;
  WCHAR *pWVar7;
  undefined1 auStack_258 [32];
  TStringBuilderBase<wchar_t> local_238;
  WCHAR local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_258;
  local_238.Base = local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.End = (wchar_t *)local_18;
  iVar6 = 0;
  local_238.CurPos = local_218;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    iVar6 = (int)sVar2;
  }
  uVar4 = (ulong64)iVar6;
  pWVar7 = local_218;
  if (local_18 < local_218 + uVar4) {
    TStringBuilderBase<wchar_t>::Extend(&local_238,uVar4);
    pWVar7 = local_238.CurPos;
  }
  if (iVar6 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(pWVar7,param_1,uVar4 * 2);
    local_238.CurPos = (wchar_t *)((longlong)pvVar3 + uVar4 * 2);
  }
  NormalizeWindowsPath(&local_238,true);
  if (local_238.End < local_238.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_238,1);
  }
  *local_238.CurPos = L'\0';
  DVar1 = GetFileAttributesW(local_238.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  if (DVar1 == 0xffffffff) {
    bVar5 = false;
  }
  else {
    bVar5 = (bool)((byte)DVar1 & 1);
  }
  return bVar5;
}

// IsSymlink @ 141ab3240

ESymlinkResult __thiscall
FWindowsPlatformFile::IsSymlink(FWindowsPlatformFile *this,wchar_t *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetFileAttributesW(param_1);
  if (DVar1 != 0xffffffff) {
    return (ESymlinkResult)(DVar1 >> 10) & Symlink;
  }
  return NonSymlink;
}

// IterateDirectory @ 141ab35c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FWindowsPlatformFile::IterateDirectory
          (FWindowsPlatformFile *this,wchar_t *param_1,FDirectoryVisitor *param_2)

{
  bool bVar1;
  size_t sVar2;
  void *pvVar3;
  ulong64 uVar4;
  wchar_t *pwVar5;
  int iVar6;
  undefined1 auStack_2a8 [32];
  undefined4 local_288 [2];
  code *local_280;
  TStringBuilderBase<wchar_t> **local_278;
  TStringBuilderBase<wchar_t> *local_270;
  undefined4 *local_268;
  FDirectoryVisitor *local_260;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_2a8;
  local_258.Base = local_238;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  iVar6 = 0;
  local_258.End = (wchar_t *)local_38;
  local_258.CurPos = local_238;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    iVar6 = (int)sVar2;
  }
  uVar4 = (ulong64)iVar6;
  pwVar5 = local_238;
  if (local_38 < local_238 + uVar4) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,uVar4);
    pwVar5 = local_258.CurPos;
  }
  if (iVar6 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(pwVar5,param_1,uVar4 * 2);
    pwVar5 = (wchar_t *)((longlong)pvVar3 + uVar4 * 2);
    local_258.CurPos = pwVar5;
  }
  local_270 = &local_258;
  local_268 = local_288;
  local_278 = &local_270;
  local_288[0] = (undefined4)((longlong)pwVar5 - (longlong)local_258.Base >> 1);
  local_280 = UE::Core::Private::Function::
              TFunctionRefCaller<`FWindowsPlatformFile::IterateDirectory'::__l2::<lambda_1>,bool,_WIN32_FIND_DATAW_const_&>
              ::Call;
  local_260 = param_2;
  bVar1 = IterateDirectoryCommon
                    (this,param_1,
                     (TFunctionRef<bool___cdecl(_WIN32_FIND_DATAW_const_&)> *)&local_280);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  return bVar1;
}

// IterateDirectoryCommon @ 141ab3710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FWindowsPlatformFile::IterateDirectoryCommon
          (FWindowsPlatformFile *this,wchar_t *param_1,
          TFunctionRef<bool___cdecl(_WIN32_FIND_DATAW_const_&)> *param_2)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  void *hFindFile;
  bool bVar4;
  undefined1 auStack_298 [32];
  _WIN32_FIND_DATAW local_278;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_298;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1767,
               "FWindowsPlatformFile_IterateDirectoryCommon_WithCallback",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
               ,0x6e7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1767);
  }
  cVar1 = '\x01';
  hFindFile = FindFirstFileWithWildcard(param_1,&local_278);
  if (hFindFile != (void *)0xffffffffffffffff) {
    do {
      iVar2 = wcscmp(local_278.cFileName,L".");
      if (iVar2 != 0) {
        iVar2 = wcscmp(local_278.cFileName,L"..");
        if (iVar2 != 0) {
          cVar1 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_278);
        }
        if (cVar1 == '\0') break;
      }
      BVar3 = FindNextFileW(hFindFile,(LPWIN32_FIND_DATAW)&local_278);
    } while (BVar3 != 0);
    FindClose(hFindFile);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (bool)cVar1;
}

// IterateDirectoryStat @ 141ab3830

bool __thiscall
FWindowsPlatformFile::IterateDirectoryStat
          (FWindowsPlatformFile *this,wchar_t *param_1,FDirectoryStatVisitor *param_2)

{
  bool bVar1;
  FDirectoryStatVisitor *local_38;
  FString *local_30;
  code *local_28;
  FDirectoryStatVisitor **local_20;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  local_30 = &local_18;
  local_20 = &local_38;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`FWindowsPlatformFile::IterateDirectoryStat'::__l2::<lambda_1>,bool,_WIN32_FIND_DATAW_const_&>
             ::Call;
  local_38 = param_2;
  bVar1 = IterateDirectoryCommon
                    (this,param_1,(TFunctionRef<bool___cdecl(_WIN32_FIND_DATAW_const_&)> *)&local_28
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// MoveFile @ 141ab6e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FWindowsPlatformFile::MoveFile(FWindowsPlatformFile *this,wchar_t *param_1,wchar_t *param_2)

{
  wchar_t *lpNewFileName;
  BOOL BVar1;
  size_t sVar2;
  void *pvVar3;
  ulong64 uVar4;
  int iVar5;
  WCHAR *pWVar6;
  TStringBuilderBase<wchar_t> *pTVar7;
  undefined1 auStack_488 [32];
  TStringBuilderBase<wchar_t> local_468;
  TStringBuilderBase<wchar_t> local_448 [16];
  TStringBuilderBase<wchar_t> local_248;
  WCHAR local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_488;
  local_248.Base = local_228;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  iVar5 = 0;
  local_248.End = (wchar_t *)local_28;
  local_248.CurPos = local_228;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    iVar5 = (int)sVar2;
  }
  uVar4 = (ulong64)iVar5;
  pWVar6 = local_228;
  if (local_28 < local_228 + uVar4) {
    TStringBuilderBase<wchar_t>::Extend(&local_248,uVar4);
    pWVar6 = local_248.CurPos;
  }
  if (iVar5 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(pWVar6,param_1,uVar4 * 2);
    local_248.CurPos = (wchar_t *)((longlong)pvVar3 + uVar4 * 2);
  }
  NormalizeWindowsPath(&local_248,true);
  if (local_248.End < local_248.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_248,1);
  }
  lpNewFileName = local_248.Base;
  *local_248.CurPos = L'\0';
  local_468.Base = (wchar_t *)local_448;
  local_468.End = (wchar_t *)&local_248;
  iVar5 = 0;
  local_468.bIsDynamic = false;
  local_468.bIsExternal = false;
  local_468.CurPos = (wchar_t *)local_448;
  if (param_2 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_2);
    iVar5 = (int)sVar2;
  }
  uVar4 = (ulong64)iVar5;
  pTVar7 = local_448;
  if (&local_248 < (TStringBuilderBase<wchar_t> *)((longlong)&local_448[0].Base + uVar4 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_468,uVar4);
    pTVar7 = (TStringBuilderBase<wchar_t> *)local_468.CurPos;
  }
  if (iVar5 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(pTVar7,param_2,uVar4 * 2);
    local_468.CurPos = (wchar_t *)((longlong)pvVar3 + uVar4 * 2);
  }
  NormalizeWindowsPath(&local_468,true);
  if (local_468.End < (TStringBuilderBase<wchar_t> *)((longlong)(wchar_t **)local_468.CurPos + 2U))
  {
    TStringBuilderBase<wchar_t>::Extend(&local_468,1);
  }
  *(undefined2 *)(wchar_t **)local_468.CurPos = 0;
  BVar1 = MoveFileW(local_468.Base,lpNewFileName);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  return BVar1 != 0;
}

// NormalizeWindowsPath @ 141ab73e0

void __cdecl
FWindowsPlatformFile::NormalizeWindowsPath(TStringBuilderBase<wchar_t> *param_1,bool param_2)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  wchar_t *pwVar6;
  int iVar7;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  FPathViews::ToAbsolutePathInline(param_1);
  if (!param_2) {
    FPathViews::NormalizeDirectoryName(param_1);
  }
  iVar5 = (int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1);
  if (2 < iVar5) {
    iVar5 = 2;
  }
  iVar7 = 0;
  if (0 < iVar5) {
    iVar7 = iVar5;
  }
  if ((iVar7 == 2) && (iVar5 = FGenericPlatformStricmp::Strnicmp(L"//",param_1->Base,2), iVar5 == 0)
     ) {
    bVar3 = true;
    FPathViews::RemoveDuplicateSlashes(param_1);
    local_38.Size = 1;
    local_38.DataPtr = L"/";
    TStringBuilderBase<wchar_t>::ReplaceAt(param_1,0,0,&local_38);
  }
  else {
    bVar3 = false;
    FPathViews::RemoveDuplicateSlashes(param_1);
  }
  pwVar6 = param_1->Base;
  iVar5 = (int)((longlong)param_1->CurPos - (longlong)pwVar6 >> 1);
  if ((iVar5 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pwVar1 = pwVar6 + iVar5;
  for (; pwVar6 != pwVar1; pwVar6 = pwVar6 + 1) {
    if (*pwVar6 == L'/') {
      *pwVar6 = L'\\';
    }
  }
  if (0x103 < (int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1)) {
    if (bVar3) {
      local_38.Size = 7;
      local_38.DataPtr = L"\\\\?\\UNC";
      local_28.DataPtr = L"\\\\?\\UNC";
      local_28.Size = 7;
      local_28._12_4_ = local_38._12_4_;
      TStringBuilderBase<wchar_t>::ReplaceAt(param_1,0,1,&local_28);
      return;
    }
    local_38.Size = 4;
    local_38.DataPtr = L"\\\\?\\";
    local_18.DataPtr = L"\\\\?\\";
    local_18.Size = 4;
    local_18._12_4_ = local_38._12_4_;
    TStringBuilderBase<wchar_t>::ReplaceAt(param_1,0,0,&local_18);
  }
  return;
}

// OpenMappedEx @ 141ab8420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError> *
__thiscall
FWindowsPlatformFile::OpenMappedEx
          (FWindowsPlatformFile *this,
          TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>
          *__return_storage_ptr__,wchar_t *param_1,EOpenReadFlags param_2,long64 param_3)

{
  BOOL BVar1;
  longlong lVar2;
  size_t sVar3;
  void *pvVar4;
  HANDLE hFile;
  HANDLE pvVar5;
  FMappedFileHandleWindows *this_00;
  FMappedFileHandleWindows *pFVar6;
  ulong64 uVar7;
  wchar_t *pwVar8;
  EOpenReadFlags EVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStackY_2c8 [32];
  FString local_288;
  DWORD local_278;
  DWORD local_274;
  DWORD local_270;
  DWORD local_26c;
  TStringBuilderBase<wchar_t> local_268;
  WCHAR local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  lVar2 = (**(code **)((longlong)*this + 0x80))(this,param_1);
  EVar9 = param_2 & AllowWrite;
  lVar11 = param_3;
  if ((EVar9 == None) && (lVar11 = lVar2, lVar2 < 1)) {
    ::FString::FString(&local_288,L"File size is 0");
    (__return_storage_ptr__->Variant)._padding_ = (longlong)local_288.Data.AllocatorInstance.Data;
    *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_288.Data.ArrayNum;
    *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = local_288.Data.ArrayMax;
    *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ = 0;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    return __return_storage_ptr__;
  }
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_26c = (uint)EVar9 + (uint)EVar9 + 2;
  pFVar6 = (FMappedFileHandleWindows *)0x0;
  iVar10 = 0;
  local_278 = (param_2 & 1 ^ 1) + 2;
  local_274 = (uint)EVar9 + (uint)EVar9 + 1;
  local_270 = (EVar9 + 2) * 0x40000000;
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  local_268.End = (wchar_t *)local_48;
  if (param_1 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_1);
    iVar10 = (int)sVar3;
  }
  uVar7 = (ulong64)iVar10;
  if (local_48 < local_248 + uVar7) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,uVar7);
  }
  if (iVar10 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(local_268.CurPos,param_1,uVar7 * 2);
    local_268.CurPos = (wchar_t *)((longlong)pvVar4 + uVar7 * 2);
  }
  NormalizeWindowsPath(&local_268,true);
  FPlatformFileTrace::BeginOpen(param_1);
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  *local_268.CurPos = L'\0';
  hFile = CreateFileW(local_268.Base,local_270,local_274,(LPSECURITY_ATTRIBUTES)0x0,local_278,0x80,
                      (HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    FPlatformFileTrace::FailOpen(param_1);
    if (local_268.End < local_268.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,1);
    }
    pwVar8 = L"Failed to open file \'%s\'";
  }
  else {
    FPlatformFileTrace::EndOpen((ulong64)hFile);
    if (param_3 == 0) {
      param_3 = lVar11;
    }
    pvVar5 = CreateFileMappingW(hFile,(LPSECURITY_ATTRIBUTES)0x0,local_26c,
                                (DWORD)((ulonglong)param_3 >> 0x20),(DWORD)param_3,(LPCWSTR)0x0);
    if (pvVar5 != (HANDLE)0x0) {
      this_00 = ::operator_new(0x38);
      if (this_00 != (FMappedFileHandleWindows *)0x0) {
        pFVar6 = FMappedFileHandleWindows::FMappedFileHandleWindows
                           (this_00,hFile,pvVar5,lVar11,param_1);
      }
      (__return_storage_ptr__->Variant)._padding_ = (longlong)pFVar6;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      goto LAB_141ab8713;
    }
    FPlatformFileTrace::BeginClose((ulong64)hFile);
    BVar1 = CloseHandle(hFile);
    if (BVar1 == 0) {
      FPlatformFileTrace::FailClose((ulong64)hFile);
    }
    else {
      FPlatformFileTrace::EndClose((ulong64)hFile);
    }
    if (local_268.End < local_268.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,1);
    }
    pwVar8 = L"Failed to create file mapping for a file\'%s\'";
  }
  *local_268.CurPos = L'\0';
  ::FString::PrintfImpl(&local_288,pwVar8);
  (__return_storage_ptr__->Variant)._padding_ = (longlong)local_288.Data.AllocatorInstance.Data;
  *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_288.Data.ArrayNum;
  *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = local_288.Data.ArrayMax;
  *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ = 0;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.Data.ArrayNum = 0;
  local_288.Data.ArrayMax = 0;
LAB_141ab8713:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  return __return_storage_ptr__;
}

// OpenRead @ 141ab8780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError> * __thiscall
FWindowsPlatformFile::OpenRead
          (FWindowsPlatformFile *this,
          TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>
          *__return_storage_ptr__,wchar_t *param_1,EOpenReadFlags param_2)

{
  DWORD DVar1;
  size_t sVar2;
  void *pvVar3;
  HANDLE hFile;
  FAsyncBufferedFileReaderWindows *this_00;
  schar *psVar4;
  ulong64 uVar5;
  int iVar6;
  uint dwShareMode;
  WCHAR *pWVar7;
  undefined1 auStackY_2c8 [32];
  LARGE_INTEGER local_288;
  FString local_280;
  TStringBuilderBase<wchar_t> local_268;
  WCHAR local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  dwShareMode = (param_2 & 2) * 2 | (param_2 & 1) * 2 | 1;
  FPlatformFileTrace::BeginOpen(param_1);
  local_268.Base = local_248;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_268.End = (wchar_t *)local_48;
  iVar6 = 0;
  local_268.CurPos = local_248;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    iVar6 = (int)sVar2;
  }
  uVar5 = (ulong64)iVar6;
  pWVar7 = local_248;
  if (local_48 < local_248 + uVar5) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,uVar5);
    pWVar7 = local_268.CurPos;
  }
  if (iVar6 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(pWVar7,param_1,uVar5 * 2);
    local_268.CurPos = (wchar_t *)((longlong)pvVar3 + uVar5 * 2);
  }
  NormalizeWindowsPath(&local_268,true);
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  *local_268.CurPos = L'\0';
  DVar1 = 0x60000100;
  if ((param_2 & NoBuffering) == None) {
    DVar1 = 0x40000080;
  }
  hFile = CreateFileW(local_268.Base,0x80000000,dwShareMode,(LPSECURITY_ATTRIBUTES)0x0,3,DVar1,
                      (HANDLE)0x0);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    FPlatformFileTrace::FailOpen(param_1);
    DVar1 = GetLastError();
    ::FString::FString(&local_280,L"Failed to open file for reading");
    (__return_storage_ptr__->Variant)._padding_ = (longlong)local_280.Data.AllocatorInstance.Data;
    *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_280.Data.ArrayNum;
    *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = local_280.Data.ArrayMax;
    *(DWORD *)&(__return_storage_ptr__->Variant)._padding_ = DVar1;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  }
  else {
    FPlatformFileTrace::EndOpen((ulong64)hFile);
    this_00 = ::operator_new(0x80);
    if (this_00 == (FAsyncBufferedFileReaderWindows *)0x0) {
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      (__return_storage_ptr__->Variant)._padding_ = 0;
    }
    else {
      this_00->Handle = hFile;
      this_00->_padding_ = (longlong)&___7FAsyncBufferedFileReaderWindows__6B_;
      this_00->FilePos = 0;
      this_00->OverlappedFilePos = 0;
      this_00->BufferSize = 0x10000;
      this_00->SerializeBuffer = 0;
      this_00->StreamBuffer = 1;
      this_00->SerializePos = 0;
      this_00->CurrentAsyncReadBuffer = 0;
      this_00->DesiredAccess = 0x80000000;
      this_00->ShareMode = dwShareMode;
      this_00->Flags = DVar1;
      this_00->bIsAtEOF = false;
      this_00->bHasReadOutstanding = false;
      GetFileSizeEx(hFile,&local_288);
      this_00->FileSize = (long64)local_288;
      psVar4 = FMemory::Malloc((longlong)this_00->BufferSize,0);
      this_00->Buffers[0] = psVar4;
      psVar4 = FMemory::Malloc((longlong)this_00->BufferSize,0);
      this_00->Buffers[1] = psVar4;
      (this_00->OverlappedIO).Internal = 0;
      (this_00->OverlappedIO).InternalHigh = 0;
      (this_00->OverlappedIO).field2_0x10.Pointer = (void *)0x0;
      (this_00->OverlappedIO).hEvent = (void *)0x0;
      FAsyncBufferedFileReaderWindows::StartAsyncRead(this_00,this_00->SerializeBuffer);
      (__return_storage_ptr__->Variant)._padding_ = (longlong)this_00;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
    }
  }
  return __return_storage_ptr__;
}

// OpenRead @ 141ab8a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

IFileHandle * __thiscall
FWindowsPlatformFile::OpenRead(FWindowsPlatformFile *this,wchar_t *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  IFileHandle *pIVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  IFileHandle *local_48 [3];
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  (**(code **)((longlong)*this + 0xf0))(this,local_48,param_1,param_2);
  uVar4 = (ulonglong)local_30;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IFileHandle *)(*pcVar1)();
      return pIVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    if (local_30 != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pIVar3 = (IFileHandle *)(*pcVar1)();
        return pIVar3;
      }
    }
    pIVar3 = local_48[0];
    local_48[0] = (IFileHandle *)0x0;
    if (2 < local_30) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pIVar3 = (IFileHandle *)(*pcVar1)();
        return pIVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_30])(local_48);
    local_30 = 2;
  }
  else {
    pIVar3 = (IFileHandle *)0x0;
  }
  uVar4 = (ulonglong)local_30;
  if (2 < local_30) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IFileHandle *)(*pcVar1)();
      return pIVar3;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4] !=
      UE::Core::Private::
      TDestructorCaller<TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FEmptyType>
      ::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])(local_48);
  }
  return pIVar3;
}

// OpenReadNoBuffering @ 141ab8ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError> * __thiscall
FWindowsPlatformFile::OpenReadNoBuffering
          (FWindowsPlatformFile *this,
          TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>
          *__return_storage_ptr__,wchar_t *param_1,EOpenReadFlags param_2)

{
  DWORD DVar1;
  size_t sVar2;
  void *pvVar3;
  HANDLE pvVar4;
  FFileHandleWindows *this_00;
  FFileHandleWindows *pFVar5;
  ulong64 uVar6;
  int iVar7;
  WCHAR *pWVar8;
  uint dwFlagsAndAttributes;
  uint dwShareMode;
  undefined1 auStackY_2c8 [32];
  FString local_288 [2];
  TStringBuilderBase<wchar_t> local_268;
  WCHAR local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  dwShareMode = (param_2 & 2) * 2 | (param_2 & 1) * 2 | 1;
  dwFlagsAndAttributes = 0x60000100;
  if ((param_2 & NoBuffering) == None) {
    dwFlagsAndAttributes = 0x40000080;
  }
  FPlatformFileTrace::BeginOpen(param_1);
  local_268.Base = local_248;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  iVar7 = 0;
  local_268.End = (wchar_t *)local_48;
  local_268.CurPos = local_248;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    iVar7 = (int)sVar2;
  }
  uVar6 = (ulong64)iVar7;
  pWVar8 = local_248;
  if (local_48 < local_248 + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,uVar6);
    pWVar8 = local_268.CurPos;
  }
  if (iVar7 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(pWVar8,param_1,uVar6 * 2);
    local_268.CurPos = (wchar_t *)((longlong)pvVar3 + uVar6 * 2);
  }
  NormalizeWindowsPath(&local_268,true);
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  pFVar5 = (FFileHandleWindows *)0x0;
  *local_268.CurPos = L'\0';
  pvVar4 = CreateFileW(local_268.Base,0x80000000,dwShareMode,(LPSECURITY_ATTRIBUTES)0x0,3,
                       dwFlagsAndAttributes,(HANDLE)0x0);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  if (pvVar4 == (HANDLE)0xffffffffffffffff) {
    FPlatformFileTrace::FailOpen(param_1);
    DVar1 = GetLastError();
    ::FString::FString(local_288,L"Failed to open file for reading");
    (__return_storage_ptr__->Variant)._padding_ = (longlong)local_288[0].Data.AllocatorInstance.Data
    ;
    *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_288[0].Data.ArrayNum;
    *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) =
         local_288[0].Data.ArrayMax;
    *(DWORD *)&(__return_storage_ptr__->Variant)._padding_ = DVar1;
  }
  else {
    FPlatformFileTrace::EndOpen((ulong64)pvVar4);
    this_00 = ::operator_new(0x50);
    if (this_00 != (FFileHandleWindows *)0x0) {
      pFVar5 = FFileHandleWindows::FFileHandleWindows
                         (this_00,pvVar4,0x80000000,dwShareMode,dwFlagsAndAttributes);
    }
    if (((pFVar5->FileHandle != (void *)0x0) && (pFVar5->FileHandle != (void *)0xffffffffffffffff))
       && (pFVar5->FileSize != -1)) {
      (__return_storage_ptr__->Variant)._padding_ = (longlong)pFVar5;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      return __return_storage_ptr__;
    }
    (**(code **)pFVar5->_padding_)(pFVar5,1);
    ::FString::FString(local_288,L"Failed to create FFileHandleWindows");
    (__return_storage_ptr__->Variant)._padding_ = (longlong)local_288[0].Data.AllocatorInstance.Data
    ;
    *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_288[0].Data.ArrayNum;
    *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) =
         local_288[0].Data.ArrayMax;
    *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ = 0;
  }
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// OpenReadNoBuffering @ 141ab8e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

IFileHandle * __thiscall
FWindowsPlatformFile::OpenReadNoBuffering(FWindowsPlatformFile *this,wchar_t *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  IFileHandle *pIVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  IFileHandle *local_48 [3];
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  (**(code **)((longlong)*this + 0x100))(this,local_48,param_1,param_2);
  uVar4 = (ulonglong)local_30;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IFileHandle *)(*pcVar1)();
      return pIVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    if (local_30 != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pIVar3 = (IFileHandle *)(*pcVar1)();
        return pIVar3;
      }
    }
    pIVar3 = local_48[0];
    local_48[0] = (IFileHandle *)0x0;
    if (2 < local_30) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pIVar3 = (IFileHandle *)(*pcVar1)();
        return pIVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_30])(local_48);
    local_30 = 2;
  }
  else {
    pIVar3 = (IFileHandle *)0x0;
  }
  uVar4 = (ulonglong)local_30;
  if (2 < local_30) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IFileHandle *)(*pcVar1)();
      return pIVar3;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4] !=
      UE::Core::Private::
      TDestructorCaller<TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FEmptyType>
      ::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])(local_48);
  }
  return pIVar3;
}

// OpenWrite @ 141ab8f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

IFileHandle * __thiscall
FWindowsPlatformFile::OpenWrite
          (FWindowsPlatformFile *this,wchar_t *param_1,bool param_2,bool param_3)

{
  size_t sVar1;
  void *pvVar2;
  HANDLE pvVar3;
  FFileHandleWindows *this_00;
  FFileHandleWindows *pFVar4;
  ulong64 uVar5;
  int iVar6;
  uint dwDesiredAccess;
  WCHAR *pWVar7;
  undefined1 auStackY_2b8 [32];
  TStringBuilderBase<wchar_t> local_268;
  WCHAR local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  dwDesiredAccess = (uint)param_3 << 0x1f | 0x40000000;
  FPlatformFileTrace::BeginOpen(param_1);
  local_268.Base = local_248;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  pFVar4 = (FFileHandleWindows *)0x0;
  local_268.End = (wchar_t *)local_48;
  iVar6 = 0;
  local_268.CurPos = local_248;
  if (param_1 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_1);
    iVar6 = (int)sVar1;
  }
  uVar5 = (ulong64)iVar6;
  pWVar7 = local_248;
  if (local_48 < local_248 + uVar5) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,uVar5);
    pWVar7 = local_268.CurPos;
  }
  if (iVar6 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(pWVar7,param_1,uVar5 * 2);
    local_268.CurPos = (wchar_t *)((longlong)pvVar2 + uVar5 * 2);
  }
  NormalizeWindowsPath(&local_268,true);
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  *local_268.CurPos = L'\0';
  pvVar3 = CreateFileW(local_268.Base,dwDesiredAccess,(uint)param_3,(LPSECURITY_ATTRIBUTES)0x0,
                       (uint)param_2 * 2 + 2,0x80,(HANDLE)0x0);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  if (pvVar3 == (HANDLE)0xffffffffffffffff) {
    FPlatformFileTrace::FailOpen(param_1);
  }
  else {
    FPlatformFileTrace::EndOpen((ulong64)pvVar3);
    this_00 = ::operator_new(0x50);
    if (this_00 != (FFileHandleWindows *)0x0) {
      pFVar4 = FFileHandleWindows::FFileHandleWindows
                         (this_00,pvVar3,dwDesiredAccess,(uint)param_3,0);
    }
    if (((pFVar4->FileHandle != (void *)0x0) && (pFVar4->FileHandle != (void *)0xffffffffffffffff))
       && (pFVar4->FileSize != -1)) {
      if (!param_2) {
        return (IFileHandle *)pFVar4;
      }
      (**(code **)(pFVar4->_padding_ + 0x18))(pFVar4,0);
      return (IFileHandle *)pFVar4;
    }
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  return (IFileHandle *)0x0;
}

// SetMarkOfTheWeb @ 141ac0800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FWindowsPlatformFile::SetMarkOfTheWeb
          (FWindowsPlatformFile *this,TStringView<wchar_t> *param_1,bool param_2,FString *param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  void *pvVar3;
  ulong64 uVar4;
  bool bVar5;
  int iVar6;
  wchar_t *lpString;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  undefined4 uStack_254;
  int iStack_250;
  undefined4 uStack_24c;
  TStringBuilderBase<wchar_t> local_248;
  WCHAR local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_278;
  local_258 = *(undefined4 *)&param_1->DataPtr;
  uStack_254 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_250 = param_1->Size;
  uStack_24c = *(undefined4 *)&param_1->field_0xc;
  local_248.Base = local_228;
  local_248.CurPos = local_228;
  local_248.End = (wchar_t *)local_28;
  iVar6 = (int)*(undefined8 *)&param_1->Size;
  uVar4 = (ulong64)iVar6;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  if (local_28 < local_228 + uVar4) {
    TStringBuilderBase<wchar_t>::Extend(&local_248,uVar4);
  }
  if (iVar6 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy
                       (local_248.CurPos,(void *)CONCAT44(uStack_254,local_258),uVar4 * 2);
    local_248.CurPos = (wchar_t *)((longlong)pvVar3 + uVar4 * 2);
  }
  NormalizeWindowsPath(&local_248,true);
  if (local_248.End < local_248.CurPos + 0x10) {
    TStringBuilderBase<wchar_t>::Extend(&local_248,0x10);
  }
  pvVar3 = FGenericPlatformString::Memcpy(local_248.CurPos,L":Zone.Identifier",0x20);
  local_248.CurPos = (wchar_t *)((longlong)pvVar3 + 0x20);
  if (param_2) {
    if (local_248.End < (WCHAR *)((longlong)pvVar3 + 0x22)) {
      TStringBuilderBase<wchar_t>::Extend(&local_248,1);
    }
    *local_248.CurPos = L'\0';
    BVar1 = WritePrivateProfileStringW(L"ZoneTransfer",L"ZoneId",L"3",local_248.Base);
    bVar5 = false;
    if (BVar1 == 0) goto LAB_141ac09ec;
    if (param_3 != (FString *)0x0) {
      if (local_248.End < local_248.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_248,1);
      }
      *local_248.CurPos = L'\0';
      if ((param_3->Data).ArrayNum == 0) {
        lpString = L"";
      }
      else {
        lpString = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
      }
      BVar1 = WritePrivateProfileStringW(L"ZoneTransfer",L"HostUrl",lpString,local_248.Base);
      bVar5 = false;
      if (BVar1 == 0) goto LAB_141ac09ec;
    }
  }
  else {
    if (local_248.End < (WCHAR *)((longlong)pvVar3 + 0x22)) {
      TStringBuilderBase<wchar_t>::Extend(&local_248,1);
    }
    *local_248.CurPos = L'\0';
    BVar1 = DeleteFileW(local_248.Base);
    if ((BVar1 == 0) && (DVar2 = GetLastError(), bVar5 = false, DVar2 != 2)) goto LAB_141ac09ec;
  }
  bVar5 = true;
LAB_141ac09ec:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  return bVar5;
}

// SetReadOnly @ 141ac0dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FWindowsPlatformFile::SetReadOnly(FWindowsPlatformFile *this,wchar_t *param_1,bool param_2)

{
  BOOL BVar1;
  size_t sVar2;
  void *pvVar3;
  DWORD dwFileAttributes;
  ulong64 uVar4;
  int iVar5;
  WCHAR *pWVar6;
  undefined1 auStack_268 [32];
  TStringBuilderBase<wchar_t> local_248;
  WCHAR local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_268;
  local_248.Base = local_228;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  local_248.End = (wchar_t *)local_28;
  iVar5 = 0;
  local_248.CurPos = local_228;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    iVar5 = (int)sVar2;
  }
  uVar4 = (ulong64)iVar5;
  pWVar6 = local_228;
  if (local_28 < local_228 + uVar4) {
    TStringBuilderBase<wchar_t>::Extend(&local_248,uVar4);
    pWVar6 = local_248.CurPos;
  }
  if (iVar5 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(pWVar6,param_1,uVar4 * 2);
    local_248.CurPos = (wchar_t *)((longlong)pvVar3 + uVar4 * 2);
  }
  NormalizeWindowsPath(&local_248,true);
  if (local_248.End < local_248.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_248,1);
  }
  *local_248.CurPos = L'\0';
  dwFileAttributes = 0x80;
  if (param_2) {
    dwFileAttributes = 1;
  }
  BVar1 = SetFileAttributesW(local_248.Base,dwFileAttributes);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  return BVar1 != 0;
}

// SetTimeStamp @ 141ac1420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FWindowsPlatformFile::SetTimeStamp(FWindowsPlatformFile *this,wchar_t *param_1,FDateTime param_2)

{
  int iVar1;
  EDayOfWeek EVar2;
  BOOL BVar3;
  size_t sVar4;
  void *pvVar5;
  HANDLE hFile;
  ulong64 uVar6;
  longlong lVar7;
  longlong lVar8;
  WCHAR *pWVar9;
  FDateTime local_res18 [2];
  undefined1 auStackY_2b8 [32];
  _FILETIME local_278;
  _FILETIME local_270;
  SYSTEMTIME local_268;
  TStringBuilderBase<wchar_t> local_258;
  WCHAR local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_res18[0].Ticks = param_2.Ticks;
  FPlatformFileTrace::BeginOpen(param_1);
  local_258.Base = local_238;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  local_258.End = (wchar_t *)local_38;
  iVar1 = 0;
  local_258.CurPos = local_238;
  if (param_1 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_1);
    iVar1 = (int)sVar4;
  }
  uVar6 = (ulong64)iVar1;
  pWVar9 = local_238;
  if (local_38 < local_238 + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,uVar6);
    pWVar9 = local_258.CurPos;
  }
  if (iVar1 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pWVar9,param_1,uVar6 * 2);
    local_258.CurPos = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
  }
  NormalizeWindowsPath(&local_258,true);
  if (local_258.End < local_258.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,1);
  }
  *local_258.CurPos = L'\0';
  hFile = CreateFileW(local_258.Base,0x100,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000080,(HANDLE)0x0);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    FPlatformFileTrace::FailOpen(param_1);
  }
  else {
    FPlatformFileTrace::EndOpen((ulong64)hFile);
    iVar1 = FDateTime::GetYear(local_res18);
    local_268.wYear = (WORD)iVar1;
    iVar1 = FDateTime::GetMonth(local_res18);
    local_268.wMonth = (WORD)iVar1;
    iVar1 = FDateTime::GetDay(local_res18);
    local_268.wDay = (WORD)iVar1;
    EVar2 = FDateTime::GetDayOfWeek(local_res18);
    local_268.wDayOfWeek = 1;
    switch(EVar2) {
    case Monday:
      break;
    case Tuesday:
      local_268.wDayOfWeek = 2;
      break;
    case Wednesday:
      local_268.wDayOfWeek = 3;
      break;
    case Thursday:
      local_268.wDayOfWeek = 4;
      break;
    case Friday:
      local_268.wDayOfWeek = 5;
      break;
    case Saturday:
      local_268.wDayOfWeek = 6;
      break;
    default:
      local_268.wDayOfWeek = 0;
    }
    local_268.wMilliseconds = 0;
    local_268.wHour =
         (short)(local_res18[0].Ticks / 36000000000) +
         (short)((local_res18[0].Ticks / 36000000000) / 0x18) * -0x18;
    lVar8 = local_res18[0].Ticks / 600000000;
    lVar7 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar8),8) + lVar8;
    local_268.wMinute = (short)lVar8 + ((short)(lVar7 >> 5) - (short)(lVar7 >> 0x3f)) * -0x3c;
    lVar8 = local_res18[0].Ticks +
            SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(local_res18[0].Ticks),8);
    lVar7 = (lVar8 >> 0x17) - (lVar8 >> 0x3f);
    lVar8 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar7),8) + lVar7;
    local_268.wSecond = (short)lVar7 + ((short)(lVar8 >> 5) - (short)(lVar8 >> 0x3f)) * -0x3c;
    SystemTimeToFileTime(&local_268,&local_278);
    local_270 = local_278;
    SetFileTime(hFile,(FILETIME *)0x0,(FILETIME *)0x0,&local_270);
    FPlatformFileTrace::BeginClose((ulong64)hFile);
    BVar3 = CloseHandle(hFile);
    if (BVar3 == 0) {
      FPlatformFileTrace::FailClose((ulong64)hFile);
    }
    else {
      FPlatformFileTrace::EndClose((ulong64)hFile);
    }
  }
  return;
}

