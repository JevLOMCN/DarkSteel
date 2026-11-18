// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FWindowsSystemWideMutex @ 141a9c700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FWindowsSystemWideMutex * __thiscall
UE::FWindowsSystemWideMutex::FWindowsSystemWideMutex
          (FWindowsSystemWideMutex *this,FString *param_1,FTimespan param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  DWORD DVar4;
  FWindowsSystemWideMutex *pFVar5;
  HANDLE pvVar6;
  int iVar7;
  int iVar8;
  ForAnyElementType _Source;
  longlong lVar9;
  undefined1 auStackY_2a8 [32];
  FString local_268;
  wchar_t local_258 [264];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  iVar8 = (param_1->Data).ArrayNum;
  iVar7 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar7 = 0;
  }
  if (iVar7 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InName.Len() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMutex.cpp"
                       ,0x10,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FWindowsSystemWideMutex *)(*pcVar1)();
      return pFVar5;
    }
  }
  iVar7 = (param_1->Data).ArrayNum;
  iVar8 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar8 = 0;
  }
  if (0x103 < iVar8) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InName.Len() < 260",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMutex.cpp"
                       ,0x11,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FWindowsSystemWideMutex *)(*pcVar1)();
      return pFVar5;
    }
  }
  if (param_2.Ticks < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTimeout >= FTimespan::Zero()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMutex.cpp"
                       ,0x13,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FWindowsSystemWideMutex *)(*pcVar1)();
      return pFVar5;
    }
  }
  dVar2 = (double)param_2.Ticks * __real_3f1a36e2eb1c432d;
  if (___real_41dfffffff800000 <= dVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTimeout.GetTotalMilliseconds() < (double)0x7FFFFFFE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMutex.cpp"
                       ,0x14,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FWindowsSystemWideMutex *)(*pcVar1)();
      return pFVar5;
    }
  }
  local_268.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar9 = (longlong)local_268.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_268.Data.ArrayNum == 0) {
    local_268.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_268.Data.ArrayNum,0,(ForAnyElementType *)&local_268,local_268.Data.ArrayNum
               ,&local_268.Data.ArrayMax);
    memcpy(local_268.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
  }
  ::FString::ReplaceInline(&local_268,L"\\",L"/",IgnoreCase);
  memset(local_258,0,0x208);
  _Source.Data = (FScriptContainerElement *)L"";
  if (local_268.Data.ArrayNum != 0) {
    _Source.Data = local_268.Data.AllocatorInstance.Data;
  }
  wcscpy(local_258,(wchar_t *)_Source.Data);
  pvVar6 = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,1,local_258);
  this->Mutex = pvVar6;
  if (pvVar6 != (HANDLE)0x0) {
    DVar4 = GetLastError();
    if (DVar4 == 0xb7) {
      if (param_2.Ticks != 0) {
        DVar4 = WaitForSingleObject(this->Mutex,(int)dVar2);
        if ((DVar4 & 0xffffff7f) == 0) goto LAB_141a9c902;
      }
      CloseHandle(this->Mutex);
      this->Mutex = (void *)0x0;
    }
  }
LAB_141a9c902:
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FWindowsSystemWideMutex @ 141a9d4a0

void __thiscall UE::FWindowsSystemWideMutex::~FWindowsSystemWideMutex(FWindowsSystemWideMutex *this)

{
  if (this->Mutex != (HANDLE)0x0) {
    ReleaseMutex(this->Mutex);
    CloseHandle(this->Mutex);
    this->Mutex = (void *)0x0;
  }
  return;
}

// IsValid @ 141ab32e0

bool __thiscall UE::FWindowsSystemWideMutex::IsValid(FWindowsSystemWideMutex *this)

{
  return this->Mutex != (void *)0x0;
}

// Release @ 141abc3c0

void __thiscall UE::FWindowsSystemWideMutex::Release(FWindowsSystemWideMutex *this)

{
  if (this->Mutex != (HANDLE)0x0) {
    ReleaseMutex(this->Mutex);
    CloseHandle(this->Mutex);
    this->Mutex = (void *)0x0;
  }
  return;
}

