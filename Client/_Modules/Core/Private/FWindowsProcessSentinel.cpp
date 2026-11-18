// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// ~FWindowsProcessSentinel @ 141a9d460

void __thiscall FWindowsProcessSentinel::~FWindowsProcessSentinel(FWindowsProcessSentinel *this)

{
  this->_padding_ = (longlong)&___7FWindowsProcessSentinel__6B_;
                    /* WARNING: Could not recover jumptable at 0x000141a9d46e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseHandle(this->FileHandle);
  return;
}

// CreateSentinelFile @ 141aa3c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FWindowsProcessSentinel::CreateSentinelFile
          (FWindowsProcessSentinel *this,wchar_t *param_1,FString *param_2)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  IFileManager *pIVar4;
  FString *pFVar5;
  HANDLE pvVar6;
  size_t sVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  wchar_t *_Str;
  uint uVar10;
  bool bVar11;
  undefined1 auStackY_148 [32];
  DWORD local_108 [2];
  FString local_100;
  FString local_f0;
  FScriptContainerElement local_d8 [128];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  DWORD local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  (**(code **)(this->_padding_ + 8))(this,&local_100,param_1);
  pIVar4 = IFileManager::Get();
  _Str = L"";
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_100.Data.ArrayNum != 0) {
    FVar8.Data = local_100.Data.AllocatorInstance.Data;
  }
  cVar3 = (**(code **)((longlong)*pIVar4 + 0x50))(pIVar4,FVar8.Data);
  if (cVar3 != '\0') {
    bVar11 = false;
    goto LAB_141aa3e4a;
  }
  pIVar4 = IFileManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar4 + 0x60);
  pFVar5 = FPaths::GetPath(&local_f0,&local_100);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(pIVar4,pwVar9,1);
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_100.Data.ArrayNum != 0) {
    FVar8.Data = local_100.Data.AllocatorInstance.Data;
  }
  pvVar6 = CreateFileW((LPCWSTR)FVar8.Data,0x40000000,5,(LPSECURITY_ATTRIBUTES)0x0,2,0x4000000,
                       (HANDLE)0x0);
  this->FileHandle = pvVar6;
  local_58.Data = (FScriptContainerElement *)0x0;
  if (((param_2->Data).ArrayNum == 0) ||
     (_Str = (wchar_t *)(param_2->Data).AllocatorInstance.Data,
     (FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0)) {
    sVar7 = wcslen(_Str);
    local_48 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar7);
    uVar1 = local_48 + 1;
    uVar10 = uVar1;
    if (uVar1 < 0x81) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar10 = 0;
        goto LAB_141aa3dc7;
      }
    }
    else {
LAB_141aa3dc7:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar10,1);
    }
    local_50 = local_d8;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      local_50 = local_58.Data;
    }
    UE::Core::Private::Convert((uchar *)local_50,uVar1,_Str,(int)sVar7 + 1);
  }
  else {
    local_48 = 0;
    local_50 = (FScriptContainerElement *)0x0;
  }
  local_108[0] = 0;
  WriteFile(this->FileHandle,local_50,local_48,local_108,(LPOVERLAPPED)0x0);
  FlushFileBuffers(this->FileHandle);
  bVar11 = this->FileHandle != (void *)0x0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
LAB_141aa3e4a:
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  return bVar11;
}

// DoesSentinelFileExistImpl @ 141aa4c40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWindowsProcessSentinel::DoesSentinelFileExistImpl
          (FWindowsProcessSentinel *this,wchar_t *param_1,FString *param_2)

{
  char cVar1;
  DWORD nNumberOfBytesToRead;
  BOOL BVar2;
  HANDLE hFile;
  IFileManager *pIVar3;
  char *lpBuffer;
  FString *pFVar4;
  wchar_t *pwVar5;
  bool bVar6;
  LPCWSTR local_28;
  int local_20;
  FString local_18;
  
  (**(code **)(this->_padding_ + 8))(this,&local_28,param_1);
  pwVar5 = L"";
  if (local_20 != 0) {
    pwVar5 = local_28;
  }
  hFile = CreateFileW(pwVar5,0x80000000,6,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    pIVar3 = IFileManager::Get();
    pwVar5 = L"";
    if (local_20 != 0) {
      pwVar5 = local_28;
    }
    cVar1 = (**(code **)((longlong)*pIVar3 + 0x50))(pIVar3,pwVar5);
    if ((cVar1 != '\0') && (1 < (byte)LogWindows._0_1_)) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_bool___cdecl_FWindowsProcessSentinel::DoesSentinelFileExistImpl(wchar_t_const*___ptr64,FString*___ptr64)___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    bVar6 = false;
  }
  else {
    if (param_2 != (FString *)0x0) {
      nNumberOfBytesToRead = SetFilePointer(hFile,0,(PLONG)0x0,2);
      SetFilePointer(hFile,0,(PLONG)0x0,0);
      lpBuffer = FMemory::Malloc((ulonglong)(nNumberOfBytesToRead + 1),0);
      BVar2 = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,(LPDWORD)0x0,(LPOVERLAPPED)0x0);
      if (BVar2 != 0) {
        lpBuffer[nNumberOfBytesToRead] = '\0';
        pFVar4 = ::FString::FString(&local_18,lpBuffer);
        ::FString::operator=(param_2,pFVar4);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      FMemory::Free(lpBuffer);
    }
    CloseHandle(hFile);
    bVar6 = true;
  }
  if (local_28 != (LPCWSTR)0x0) {
    FMemory::Free(local_28);
  }
  return bVar6;
}

