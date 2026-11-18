// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SQLiteCore
// Functions: 21

// Access @ 14d120a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl FSQLiteFileFuncs::Access(sqlite3_vfs *param_1,char *param_2,int param_3,int *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  TStringConversion<FUTF8ToTCHAR_Convert,128> *pTVar5;
  FPlatformFileManager *this;
  IPlatformFile *pIVar6;
  ForAnyElementType FVar7;
  undefined1 auStack_198 [32];
  FString local_178;
  undefined1 local_168 [32];
  byte local_148;
  TStringConversion<FUTF8ToTCHAR_Convert,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  if (param_2 == (char *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFilename",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                       ,0x2f1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  pTVar5 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                     (&local_138,param_2);
  ::FString::FString(&local_178,pTVar5->Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  this = FPlatformFileManager::Get();
  pIVar6 = FPlatformFileManager::GetPlatformFile(this);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_178.Data.ArrayNum != 0) {
    FVar7.Data = local_178.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar6 + 0x130))(pIVar6,local_168,FVar7.Data);
  if (param_3 == 1) {
    if (param_4 == (int *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutResultPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                         ,0x2f9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    if (((local_148 & 4) == 0) || ((local_148 & 2) != 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    if (param_4 == (int *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutResultPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                         ,0x2fe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    uVar4 = local_148 >> 2 & 1;
  }
  *param_4 = uVar4;
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  return 0;
}

// CheckReservedLock @ 14d121040

int __cdecl FSQLiteFileFuncs::CheckReservedLock(sqlite3_file *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((param_1 == (sqlite3_file *)0x0) || (param_1[1].pMethods == (sqlite3_io_methods *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("File && File->FileHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                       ,0x2a1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (param_2 == (int *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutIsLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                       ,0x2a4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  *param_2 = (uint)(0 < *(int *)&param_1[4].pMethods);
  return 0;
}

// Close @ 14d121130

int __cdecl FSQLiteFileFuncs::Close(sqlite3_file *param_1)

{
  sqlite3_io_methods *psVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPlatformFileManager *this;
  IPlatformFile *pIVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  
  pwVar7 = L"";
  if (((param_1 == (sqlite3_file *)0x0) || (param_1[1].pMethods == (sqlite3_io_methods *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("File && File->FileHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                         ,0x209,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  if (*(char *)((longlong)&param_1[4].pMethods + 5) != '\0') {
    if (*(int *)&param_1[3].pMethods == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)param_1[2].pMethods;
    }
    FSQLiteFile::CloseAsReadOnly(pwVar6);
  }
  psVar1 = param_1[1].pMethods;
  if (psVar1 != (sqlite3_io_methods *)0x0) {
    (*(code *)**(undefined8 **)psVar1)(psVar1,1);
  }
  if (*(char *)((longlong)&param_1[4].pMethods + 4) != '\0') {
    this = FPlatformFileManager::Get();
    pIVar5 = FPlatformFileManager::GetPlatformFile(this);
    if (*(int *)&param_1[3].pMethods != 0) {
      pwVar7 = (wchar_t *)param_1[2].pMethods;
    }
    (**(code **)((longlong)*pIVar5 + 0x88))(pIVar5,pwVar7);
  }
  if (param_1[2].pMethods != (sqlite3_io_methods *)0x0) {
    FMemory::Free(param_1[2].pMethods);
  }
  return 0;
}

// CurrentTime @ 14d121420

int __cdecl FSQLiteFileFuncs::CurrentTime(sqlite3_vfs *param_1,double *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong local_res10;
  
  if (param_2 == (double *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutTimePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                       ,0x337,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  FDateTime::Now();
  *param_2 = (double)(local_res10 % 864000000000) * __real_3d745c7fe3bc40b0 +
             (double)(local_res10 / 864000000000) + __real_413a445180000000;
  return 0;
}

// CurrentTimeInt64 @ 14d1214c0

int __cdecl FSQLiteFileFuncs::CurrentTimeInt64(sqlite3_vfs *param_1,long64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong local_res10;
  
  if (param_2 == (long64 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutTimePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                       ,0x342,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  FDateTime::Now();
  *param_2 = (longlong)
             (((double)(local_res10 % 864000000000) * __real_3d745c7fe3bc40b0 +
               (double)(local_res10 / 864000000000) + __real_413a445180000000) *
             __real_4194997000000000);
  return 0;
}

// Delete @ 14d121560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl FSQLiteFileFuncs::Delete(sqlite3_vfs *param_1,char *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  TStringConversion<FUTF8ToTCHAR_Convert,128> *pTVar5;
  FPlatformFileManager *this;
  IPlatformFile *pIVar6;
  ForAnyElementType FVar7;
  undefined1 auStack_168 [32];
  FString local_148;
  TStringConversion<FUTF8ToTCHAR_Convert,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  if ((param_2 == (char *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFilename",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                         ,0x2d2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  pTVar5 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                     (&local_138,param_2);
  ::FString::FString(&local_148,pTVar5->Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  this = FPlatformFileManager::Get();
  pIVar6 = FPlatformFileManager::GetPlatformFile(this);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_148.Data.ArrayNum != 0) {
    FVar7.Data = local_148.Data.AllocatorInstance.Data;
  }
  cVar3 = (**(code **)((longlong)*pIVar6 + 0x78))(pIVar6,FVar7.Data);
  if (cVar3 == '\0') {
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_148.Data.ArrayNum != 0) {
      FVar7.Data = local_148.Data.AllocatorInstance.Data;
    }
    cVar3 = (**(code **)((longlong)*pIVar6 + 0x118))(pIVar6,FVar7.Data);
    if (cVar3 != '\0') {
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_148.Data.ArrayNum != 0) {
        FVar7.Data = local_148.Data.AllocatorInstance.Data;
      }
      cVar3 = (**(code **)((longlong)*pIVar6 + 0x128))(pIVar6,FVar7.Data);
      goto joined_r0x00014d121697;
    }
  }
  else {
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_148.Data.ArrayNum != 0) {
      FVar7.Data = local_148.Data.AllocatorInstance.Data;
    }
    cVar3 = (**(code **)((longlong)*pIVar6 + 0x88))(pIVar6,FVar7.Data);
joined_r0x00014d121697:
    if (cVar3 == '\0') {
      iVar4 = 0xa0a;
      goto LAB_14d121630;
    }
  }
  iVar4 = 0;
LAB_14d121630:
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return iVar4;
}

// DeviceCharacteristics @ 14d121750

int __cdecl FSQLiteFileFuncs::DeviceCharacteristics(sqlite3_file *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((param_1 == (sqlite3_file *)0x0) || (param_1[1].pMethods == (sqlite3_io_methods *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("File && File->FileHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                       ,0x2ca,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return 0x800;
}

// FileControl @ 14d121d30

int __cdecl FSQLiteFileFuncs::FileControl(sqlite3_file *param_1,int param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((param_1 == (sqlite3_file *)0x0) || (param_1[1].pMethods == (sqlite3_io_methods *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("File && File->FileHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                       ,0x2ae,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (param_2 != 1) {
    return 0xc;
  }
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[4].pMethods;
  return 0;
}

// FileSize @ 14d121db0

int __cdecl FSQLiteFileFuncs::FileSize(sqlite3_file *param_1,long64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  long64 lVar4;
  
  if (((param_1 == (sqlite3_file *)0x0) || (param_1[1].pMethods == (sqlite3_io_methods *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("File && File->FileHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                         ,0x275,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if ((param_2 == (long64 *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutSizePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                         ,0x277,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  lVar4 = (**(code **)(*(longlong *)param_1[1].pMethods + 0x50))();
  *param_2 = lVar4;
  return 0;
}

// FullPathname @ 14d121ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
FSQLiteFileFuncs::FullPathname(sqlite3_vfs *param_1,char *param_2,int param_3,char *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TStringConversion<FUTF8ToTCHAR_Convert,128> *pTVar4;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar5;
  ForAnyElementType FVar6;
  size_t _Count;
  undefined1 auStack_228 [32];
  FString local_208;
  FString local_1f8;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_1e8;
  TStringConversion<FUTF8ToTCHAR_Convert,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_228;
  _Count = (size_t)param_3;
  if ((param_2 == (char *)0x0) || (param_4 == (char *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFilename && InOutputBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                       ,0x308,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  pTVar4 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                     (&local_148,param_2);
  ::FString::FString(&local_1f8,pTVar4->Ptr);
  FPaths::ConvertRelativePathToFull(&local_208,&local_1f8);
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_208.Data.ArrayNum != 0) {
    FVar6.Data = local_208.Data.AllocatorInstance.Data;
  }
  pTVar5 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
           TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                     (&local_1e8,(wchar_t *)FVar6.Data);
  strncpy(param_4,pTVar5->Ptr,_Count);
  param_4[_Count - 1] = '\0';
  if ((void *)local_1e8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_1e8._padding_);
  }
  param_4[_Count - 1] = '\0';
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  return 0;
}

// GetLastError @ 14d123700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl FSQLiteFileFuncs::GetLastError(sqlite3_vfs *param_1,int param_2,char *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  size_t _Count;
  uint uVar6;
  undefined1 auStack_8e8 [32];
  FScriptContainerElement local_8c8 [128];
  ForAnyElementType local_848;
  FScriptContainerElement *local_840;
  int local_838;
  wchar_t local_828 [1024];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_8e8;
  _Count = (size_t)param_2;
  if (param_2 < 1) {
    return 0;
  }
  if ((param_3 == (char *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOutputBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                         ,0x34f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  FWindowsPlatformMisc::GetSystemErrorMessage(local_828,0x400,0);
  local_848.Data = (FScriptContainerElement *)0x0;
  sVar5 = wcslen(local_828);
  local_838 = UE::Core::Private::GetConvertedLength((uchar *)0x0,local_828,(int)sVar5);
  uVar1 = local_838 + 1;
  uVar6 = uVar1;
  if (uVar1 < 0x81) {
    if (local_848.Data == (FScriptContainerElement *)0x0) goto LAB_14d1237e6;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_848,0,uVar6,1);
LAB_14d1237e6:
  local_840 = local_8c8;
  if (local_848.Data != (FScriptContainerElement *)0x0) {
    local_840 = local_848.Data;
  }
  UE::Core::Private::Convert((uchar *)local_840,uVar1,local_828,(int)sVar5 + 1);
  strncpy(param_3,(char *)local_840,_Count);
  param_3[_Count - 1] = '\0';
  if (local_848.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_848.Data);
  }
  param_3[_Count - 1] = '\0';
  return 0;
}

// Lock @ 14d123c90

int __cdecl FSQLiteFileFuncs::Lock(sqlite3_file *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((param_1 == (sqlite3_file *)0x0) || (param_1[1].pMethods == (sqlite3_io_methods *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("File && File->FileHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                       ,0x281,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (param_2 < *(int *)&param_1[4].pMethods) {
    return 0xf0a;
  }
  *(int *)&param_1[4].pMethods = param_2;
  return 0;
}

// Open @ 14d123fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
FSQLiteFileFuncs::Open
          (sqlite3_vfs *param_1,char *param_2,sqlite3_file *param_3,int param_4,int *param_5)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  FPlatformFileManager *pFVar5;
  IPlatformFile *pIVar6;
  TStringConversion<FUTF8ToTCHAR_Convert,128> *pTVar7;
  sqlite3_io_methods *psVar8;
  IPlatformFile *pIVar9;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar10;
  wchar_t *pwVar11;
  sqlite3_file *psVar12;
  wchar_t *pwVar13;
  undefined1 auStack_1a8 [32];
  char local_188;
  undefined1 local_184 [4];
  void *local_180;
  FString local_170;
  TStringConversion<FUTF8ToTCHAR_Convert,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  pwVar13 = L"";
  if ((param_3 == (sqlite3_file *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("File",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                         ,0x1aa,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  param_3->pMethods = (sqlite3_io_methods *)0x0;
  param_3[1].pMethods = (sqlite3_io_methods *)0x0;
  param_3[2].pMethods = (sqlite3_io_methods *)0x0;
  param_3[3].pMethods = (sqlite3_io_methods *)0x0;
  param_3[4].pMethods = (sqlite3_io_methods *)0x0;
  pFVar5 = FPlatformFileManager::Get();
  pIVar6 = FPlatformFileManager::GetPlatformFile(pFVar5);
  if (param_2 == (char *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `private:_static_int___cdecl_FSQLiteFileFuncs::Open(sqlite3_vfs*___ptr64,char_const*___ptr64,sqlite3_file*___ptr64,int,int*___ptr64)'
         ::__l14::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`private:_static_int___cdecl_FSQLiteFileFuncs::Open(sqlite3_vfs*___ptr64,char_const*___ptr64,sqlite3_file*___ptr64,int,int*___ptr64)'
                             ::__l14::_thread_safe_static_guard_0__),
       `private:_static_int___cdecl_FSQLiteFileFuncs::Open(sqlite3_vfs*___ptr64,char_const*___ptr64,sqlite3_file*___ptr64,int,int*___ptr64)'
       ::__l14::_thread_safe_static_guard_0__ == -1)) {
      pTVar10 = &FPaths::ProjectIntermediateDir(&local_170)->Data;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                (&`private:_static_int___cdecl_FSQLiteFileFuncs::Open(sqlite3_vfs*___ptr64,char_const*___ptr64,sqlite3_file*___ptr64,int,int*___ptr64)'
                  ::__l14::TmpPath.Data,pTVar10,8 - (uint)(pTVar10->ArrayNum != 0));
      ::FString::PathAppend
                (&`private:_static_int___cdecl_FSQLiteFileFuncs::Open(sqlite3_vfs*___ptr64,char_const*___ptr64,sqlite3_file*___ptr64,int,int*___ptr64)'
                  ::__l14::TmpPath,L"SQLite",6);
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
      atexit(`FSQLiteFileFuncs::Open'::__l14::_dynamic_atexit_destructor_for__TmpPath__);
      _Init_thread_footer(&`private:_static_int___cdecl_FSQLiteFileFuncs::Open(sqlite3_vfs*___ptr64,char_const*___ptr64,sqlite3_file*___ptr64,int,int*___ptr64)'
                           ::__l14::_thread_safe_static_guard_0__);
    }
    pwVar11 = L"";
    if (`private:_static_int___cdecl_FSQLiteFileFuncs::Open(sqlite3_vfs*___ptr64,char_const*___ptr64,sqlite3_file*___ptr64,int,int*___ptr64)'
        ::__l14::TmpPath.Data.ArrayNum != 0) {
      pwVar11 = (wchar_t *)
                `private:_static_int___cdecl_FSQLiteFileFuncs::Open(sqlite3_vfs*___ptr64,char_const*___ptr64,sqlite3_file*___ptr64,int,int*___ptr64)'
                ::__l14::TmpPath.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar6 + 0x120))(pIVar6,pwVar11);
    pwVar11 = L"";
    if (`private:_static_int___cdecl_FSQLiteFileFuncs::Open(sqlite3_vfs*___ptr64,char_const*___ptr64,sqlite3_file*___ptr64,int,int*___ptr64)'
        ::__l14::TmpPath.Data.ArrayNum != 0) {
      pwVar11 = (wchar_t *)
                `private:_static_int___cdecl_FSQLiteFileFuncs::Open(sqlite3_vfs*___ptr64,char_const*___ptr64,sqlite3_file*___ptr64,int,int*___ptr64)'
                ::__l14::TmpPath.Data.AllocatorInstance;
    }
    FPaths::CreateTempFilename((FString *)(param_3 + 2),pwVar11,L"",L".tmp");
  }
  else {
    pTVar7 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(&local_158,param_2);
    ::FString::FString((FString *)(param_3 + 2),pTVar7->Ptr);
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  psVar12 = param_3 + 2;
  if (*(int *)&param_3[3].pMethods == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)psVar12->pMethods;
  }
  cVar3 = (**(code **)((longlong)*pIVar6 + 0x78))(pIVar6,pwVar11);
  if (cVar3 == '\0') {
    if ((param_4 & 4U) == 0) goto LAB_14d12411b;
  }
  else if ((param_4 & 0x10U) != 0) goto LAB_14d12411b;
  if (*(int *)&param_3[3].pMethods == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)psVar12->pMethods;
  }
  cVar3 = (**(code **)((longlong)*pIVar6 + 0x98))(pIVar6,pwVar11);
  *(char *)((longlong)&param_3[4].pMethods + 5) = cVar3;
  if (cVar3 == '\0') {
    if (*(int *)&param_3[3].pMethods != 0) {
      pwVar13 = (wchar_t *)psVar12->pMethods;
    }
    psVar8 = (sqlite3_io_methods *)(**(code **)((longlong)*pIVar6 + 0x110))(pIVar6,pwVar13,1);
    param_3[1].pMethods = psVar8;
  }
  else if ((param_4 & 1U) != 0) {
    if (*(int *)&param_3[3].pMethods == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)psVar12->pMethods;
    }
    pFVar5 = FPlatformFileManager::Get();
    pIVar9 = FPlatformFileManager::GetPlatformFile(pFVar5);
    (**(code **)((longlong)*pIVar9 + 200))(pIVar9,local_184 + 4,pwVar11);
    local_188 = '\0';
    EnterCriticalSection((LPCRITICAL_SECTION)&FSQLiteFile::CurrentlyOpenAsReadOnlySection);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&FSQLiteFile::CurrentlyOpenAsReadOnly,(FString *)local_184,(bool *)(local_184 + 4));
    if ((local_184 == (undefined1  [4])0xffffffff) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("bAdded",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                           ,0x15e,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    cVar3 = local_188;
    LeaveCriticalSection((LPCRITICAL_SECTION)&FSQLiteFile::CurrentlyOpenAsReadOnlySection);
    if (local_180 != (void *)0x0) {
      FMemory::Free(local_180);
    }
    if (cVar3 == '\0') {
      if (*(int *)&param_3[3].pMethods == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)psVar12->pMethods;
      }
      psVar8 = (sqlite3_io_methods *)(**(code **)((longlong)*pIVar6 + 0xe8))(pIVar6,pwVar11,0);
      param_3[1].pMethods = psVar8;
      if (psVar8 == (sqlite3_io_methods *)0x0) {
        if (*(int *)&param_3[3].pMethods != 0) {
          pwVar13 = (wchar_t *)psVar12->pMethods;
        }
        FSQLiteFile::CloseAsReadOnly(pwVar13);
      }
    }
  }
  psVar8 = param_3[1].pMethods;
  if (psVar8 != (sqlite3_io_methods *)0x0) {
    (**(code **)(*(longlong *)psVar8 + 0x10))(psVar8,0);
    param_3->pMethods =
         &`private:_static_int___cdecl_FSQLiteFileFuncs::Open(sqlite3_vfs*___ptr64,char_const*___ptr64,sqlite3_file*___ptr64,int,int*___ptr64)'
          ::__l2::FileFuncs;
    *(byte *)((longlong)&param_3[4].pMethods + 4) = (byte)((uint)param_4 >> 3) & 1;
    if ((param_5 != (int *)0x0) && (*(char *)((longlong)&param_3[4].pMethods + 5) != '\0')) {
      *param_5 = 1;
    }
    return 0;
  }
LAB_14d12411b:
  if (psVar12->pMethods != (sqlite3_io_methods *)0x0) {
    FMemory::Free(psVar12->pMethods);
  }
  return 10;
}

// Randomness @ 14d124730

int __cdecl FSQLiteFileFuncs::Randomness(sqlite3_vfs *param_1,int param_2,char *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_res10 [2];
  
  if (0 < param_2) {
    if ((param_3 == (char *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InOutputBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                           ,0x316,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar3 = rand();
    uVar5 = param_2;
    do {
      iVar3 = iVar3 * 0xbb38435 + 0x3619636b;
      uVar4 = 4;
      if (uVar5 < 4) {
        uVar4 = uVar5;
      }
      local_res10[0] = iVar3;
      memcpy(param_3,local_res10,(ulonglong)uVar4);
      param_3 = param_3 + uVar4;
      uVar5 = uVar5 - uVar4;
    } while (0 < (int)uVar5);
  }
  return param_2;
}

// Read @ 14d1247f0

int __cdecl FSQLiteFileFuncs::Read(sqlite3_file *param_1,void *param_2,int param_3,long64 param_4)

{
  sqlite3_file *psVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  psVar1 = param_1 + 1;
  if (((param_1 == (sqlite3_file *)0x0) || (psVar1->pMethods == (sqlite3_io_methods *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("File && File->FileHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                         ,0x224,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  memset(param_2,0,(longlong)param_3);
  lVar6 = (**(code **)(*(longlong *)psVar1->pMethods + 0x50))();
  if (param_4 < lVar6) {
    cVar4 = (**(code **)(*(longlong *)psVar1->pMethods + 0x10))(psVar1->pMethods,param_4);
    if (cVar4 == '\0') {
      iVar5 = 0x160a;
    }
    else {
      cVar4 = (**(code **)(*(longlong *)psVar1->pMethods + 0x20))
                        (psVar1->pMethods,param_2,(longlong)param_3);
      if (cVar4 == '\0') {
        lVar6 = (**(code **)(*(longlong *)psVar1->pMethods + 8))();
        lVar7 = (**(code **)(*(longlong *)psVar1->pMethods + 0x50))();
        iVar5 = 0x10a;
        if (lVar7 <= lVar6) {
          iVar5 = 0x20a;
        }
      }
      else {
        iVar5 = 0;
      }
    }
  }
  else {
    iVar5 = 0x20a;
  }
  return iVar5;
}

// SectorSize @ 14d124930

int __cdecl FSQLiteFileFuncs::SectorSize(sqlite3_file *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((param_1 == (sqlite3_file *)0x0) || (param_1[1].pMethods == (sqlite3_io_methods *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("File && File->FileHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                       ,0x2c1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return 0x1000;
}

// Sleep @ 14d125930

int __cdecl FSQLiteFileFuncs::Sleep(sqlite3_vfs *param_1,int param_2)

{
  FWindowsPlatformProcess::Sleep((float)param_2 * __real_358637bd);
  return (int)(float)param_2;
}

// Sync @ 14d125a10

int __cdecl FSQLiteFileFuncs::Sync(sqlite3_file *param_1,int param_2)

{
  sqlite3_io_methods *psVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  
  if (((param_1 == (sqlite3_file *)0x0) || (param_1[1].pMethods == (sqlite3_io_methods *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("File && File->FileHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                         ,0x266,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  psVar1 = param_1[1].pMethods;
  cVar4 = (**(code **)(*(longlong *)psVar1 + 0x38))(psVar1,((byte)param_2 & 0xf) == 3);
  iVar5 = 0;
  if (cVar4 == '\0') {
    iVar5 = 0x40a;
  }
  return iVar5;
}

// Truncate @ 14d125a90

int __cdecl FSQLiteFileFuncs::Truncate(sqlite3_file *param_1,long64 param_2)

{
  sqlite3_io_methods *psVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  
  if (((param_1 == (sqlite3_file *)0x0) || (param_1[1].pMethods == (sqlite3_io_methods *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("File && File->FileHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                         ,600,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  psVar1 = param_1[1].pMethods;
  cVar4 = (**(code **)(*(longlong *)psVar1 + 0x40))(psVar1,param_2);
  iVar5 = 0;
  if (cVar4 == '\0') {
    iVar5 = 0x60a;
  }
  return iVar5;
}

// Unlock @ 14d125b70

int __cdecl FSQLiteFileFuncs::Unlock(sqlite3_file *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((param_1 == (sqlite3_file *)0x0) || (param_1[1].pMethods == (sqlite3_io_methods *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("File && File->FileHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                       ,0x291,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (*(int *)&param_1[4].pMethods < param_2) {
    return 0x80a;
  }
  *(int *)&param_1[4].pMethods = param_2;
  return 0;
}

// Write @ 14d125cb0

int __cdecl FSQLiteFileFuncs::Write(sqlite3_file *param_1,void *param_2,int param_3,long64 param_4)

{
  sqlite3_file *psVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  
  psVar1 = param_1 + 1;
  if (((param_1 == (sqlite3_file *)0x0) || (psVar1->pMethods == (sqlite3_io_methods *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("File && File->FileHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                         ,0x245,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  cVar4 = (**(code **)(*(longlong *)psVar1->pMethods + 0x10))(psVar1->pMethods,param_4);
  if (cVar4 != '\0') {
    cVar4 = (**(code **)(*(longlong *)psVar1->pMethods + 0x30))
                      (psVar1->pMethods,param_2,(longlong)param_3);
    iVar5 = 0;
    if (cVar4 == '\0') {
      iVar5 = 0x30a;
    }
    return iVar5;
  }
  return 0x160a;
}

