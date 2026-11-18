// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FWindowsSemaphore @ 141a9c670

FWindowsSemaphore * __thiscall
FWindowsPlatformProcess::FWindowsSemaphore::FWindowsSemaphore
          (FWindowsSemaphore *this,FString *param_1,void *param_2)

{
  wchar_t *pwVar1;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FGenericPlatformProcess::FSemaphore::FSemaphore((FSemaphore *)this,pwVar1);
  this->Semaphore = param_2;
  this->_padding_ = (longlong)&___7FWindowsSemaphore_FWindowsPlatformProcess__6B_;
  return this;
}

// FWindowsSemaphore @ 141a9c6c0

FWindowsSemaphore * __thiscall
FWindowsPlatformProcess::FWindowsSemaphore::FWindowsSemaphore
          (FWindowsSemaphore *this,wchar_t *param_1,void *param_2)

{
  FGenericPlatformProcess::FSemaphore::FSemaphore((FSemaphore *)this,param_1);
  this->Semaphore = param_2;
  this->_padding_ = (longlong)&___7FWindowsSemaphore_FWindowsPlatformProcess__6B_;
  return this;
}

// ~FWindowsSemaphore @ 141a9d480

void __thiscall
FWindowsPlatformProcess::FWindowsSemaphore::~FWindowsSemaphore(FWindowsSemaphore *this)

{
  this->_padding_ = (longlong)&___7FSemaphore_FGenericPlatformProcess__6B_;
  return;
}

// Lock @ 141ab5700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsPlatformProcess::FWindowsSemaphore::Lock(FWindowsSemaphore *this)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  
  if (this->Semaphore == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Semaphore",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                       ,0x838,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DVar3 = WaitForSingleObject(this->Semaphore,0xffffffff);
  if (DVar3 != 0) {
    GetLastError();
    if (2 < (byte)LogHAL._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
    }
  }
  return;
}

// TryLock @ 141ac32e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWindowsPlatformProcess::FWindowsSemaphore::TryLock(FWindowsSemaphore *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  DWORD DVar4;
  
  if (this->Semaphore == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Semaphore",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                       ,0x846,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  DVar4 = WaitForSingleObject(this->Semaphore,(DWORD)(param_1 / 1000000));
  if ((DVar4 != 0) && (DVar4 != 0x102)) {
    GetLastError();
    if (2 < (byte)LogHAL._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
    }
  }
  return DVar4 == 0;
}

// Unlock @ 141ac38c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsPlatformProcess::FWindowsSemaphore::Unlock(FWindowsSemaphore *this)

{
  code *pcVar1;
  bool bVar2;
  BOOL BVar3;
  
  if (this->Semaphore == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Semaphore",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                       ,0x857,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  BVar3 = ReleaseSemaphore(this->Semaphore,1,(LPLONG)0x0);
  if (BVar3 == 0) {
    GetLastError();
    if (2 < (byte)LogHAL._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
      return;
    }
  }
  return;
}

