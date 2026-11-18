// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 27

// FMallocCallstackHandler @ 1416d6150

FMallocCallstackHandler * __thiscall
FMallocCallstackHandler::FMallocCallstackHandler(FMallocCallstackHandler *this,FMalloc *param_1)

{
  DWORD dwTlsIndex;
  
  this->UsedMalloc = param_1;
  this->_padding_ = (longlong)&___7FMallocCallstackHandler__6B_;
  this->Initialized = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->RWLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->CallStackMapKeyToCallStackIndexMap = 0;
  *(undefined8 *)&(this->CallStackMapKeyToCallStackIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->CallStackMapKeyToCallStackIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->CallStackMapKeyToCallStackIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->CallStackMapKeyToCallStackIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CallStackMapKeyToCallStackIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CallStackMapKeyToCallStackIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->CallStackMapKeyToCallStackIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->CallStackMapKeyToCallStackIndexMap).field_0x48 = 0;
  (this->CallStackInfoArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CallStackInfoArray).ArrayNum = 0;
  (this->CallStackInfoArray).ArrayMax = 0;
  dwTlsIndex = TlsAlloc();
  this->DisabledTLS = dwTlsIndex;
  TlsSetValue(dwTlsIndex,(LPVOID)0x0);
  return this;
}

// ~FMallocCallstackHandler @ 1416d8e90

void __thiscall FMallocCallstackHandler::~FMallocCallstackHandler(FMallocCallstackHandler *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  pFVar1 = (this->CallStackInfoArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->CallStackMapKeyToCallStackIndexMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CallStackMapKeyToCallStackIndexMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FMallocCallstackHandler::FCallStackMapKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMallocCallstackHandler::FCallStackMapKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMallocCallstackHandler::FCallStackMapKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CallStackMapKeyToCallStackIndexMap);
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->RWLock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->RWLock);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  FExec::~FExec((FExec *)this);
  return;
}

// ClearAndDisableTLSCachesOnCurrentThread @ 1416e30a0

void __thiscall
FMallocCallstackHandler::ClearAndDisableTLSCachesOnCurrentThread(FMallocCallstackHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001416e30a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0x90))();
  return;
}

// DumpAllocatorStats @ 1416ec070

void __thiscall
FMallocCallstackHandler::DumpAllocatorStats(FMallocCallstackHandler *this,FOutputDevice *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001416ec077. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0xb0))();
  return;
}

// DumpStackTraceToLog @ 1416ec140

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMallocCallstackHandler::DumpStackTraceToLog(FMallocCallstackHandler *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  size_t sVar4;
  char *pcVar5;
  FOutputDeviceRedirector *this_00;
  int iVar6;
  char cVar7;
  char *pcVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStackY_4198 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4168;
  char local_4048 [16384];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1416ec15a;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4198;
  uVar9 = 0;
  local_4048[0] = '\0';
  lVar10 = (longlong)param_1 * 0x208;
  do {
    uVar3 = 0;
    if (param_1 < (this->CallStackInfoArray).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(longlong *)((this->CallStackInfoArray).AllocatorInstance.Data + lVar10 + 8) == 0) break;
    uVar3 = 0;
    if (param_1 < (this->CallStackInfoArray).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FGenericPlatformStackWalk::ProgramCounterToHumanReadableString
              (uVar9,*(ulong64 *)((this->CallStackInfoArray).AllocatorInstance.Data + lVar10 + 8),
               local_4048,0x4000,(FGenericCrashContext *)0x0);
    pcVar8 = "\r\n";
    sVar4 = strlen(local_4048);
    iVar6 = (int)sVar4 + 1;
    if (iVar6 < 0x4000) {
      cVar7 = '\r';
      pcVar5 = local_4048 + (int)sVar4;
      do {
        *pcVar5 = cVar7;
        pcVar8 = pcVar8 + 1;
        cVar7 = *pcVar8;
        pcVar5 = pcVar5 + 1;
        iVar6 = iVar6 + 1;
        if (cVar7 == '\0') break;
      } while (iVar6 < 0x4000);
      *pcVar5 = '\0';
    }
    uVar9 = uVar9 + 1;
    lVar10 = lVar10 + 8;
  } while (uVar9 < 0x40);
  local_4168._padding_ = 0;
  sVar4 = strlen(local_4048);
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_4168,local_4048,(int)sVar4,Yes);
  ::FDebug::LogFormattedMessageWithCallstack
            ((FName *)&LogOutputDevice.field_0x4,
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocCallstackHandler.cpp"
             ,0xcb,L"FMallocCallstackHandler::DumpStackTraceToLog",local_4168.Ptr,Error);
  if ((void *)local_4168._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_4168._padding_);
  }
  this_00 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
  FOutputDeviceRedirector::Flush(this_00);
}

// Free @ 1416f0900

void __thiscall FMallocCallstackHandler::Free(FMallocCallstackHandler *this,void *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FMallocCallstackHandler *pFVar1;
  char cVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  ulonglong local_res8;
  
  cVar2 = (**(code **)(this->_padding_ + 0x100))();
  pFVar1 = GMallocCallstackHandler;
  if ((cVar2 == '\0') && (param_1 != (void *)0x0)) {
    pvVar4 = TlsGetValue(GMallocCallstackHandler->DisabledTLS);
    TlsSetValue(pFVar1->DisabledTLS,(LPVOID)((longlong)pvVar4 + 1));
    uVar3 = (**(code **)(this->_padding_ + 0x120))(this);
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_res8 = 0;
      (**(code **)((longlong)*this->UsedMalloc + 0x68))(this->UsedMalloc,param_1,&local_res8);
      (**(code **)((longlong)*this->UsedMalloc + 0x48))(this->UsedMalloc,param_1);
      (**(code **)(this->_padding_ + 0x118))(this,param_1,local_res8 & 0xffffffff,uVar3);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar1 = GMallocCallstackHandler;
      pvVar4 = TlsGetValue(GMallocCallstackHandler->DisabledTLS);
      TlsSetValue(pFVar1->DisabledTLS,(LPVOID)((longlong)pvVar4 + -1));
      return;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  (**(code **)((longlong)*this->UsedMalloc + 0x48))(this->UsedMalloc,param_1);
  return;
}

// GetAllocationSize @ 1416f1e10

bool __thiscall
FMallocCallstackHandler::GetAllocationSize
          (FMallocCallstackHandler *this,void *param_1,ulong64 *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416f1e17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->UsedMalloc + 0x68))();
  return (bool)uVar1;
}

// GetAllocatorStats @ 1416f2050

void __thiscall
FMallocCallstackHandler::GetAllocatorStats
          (FMallocCallstackHandler *this,FGenericMemoryStats *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001416f2057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0xa8))();
  return;
}

// GetCallStackIndex @ 1416f2c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

int __thiscall FMallocCallstackHandler::GetCallStackIndex(FMallocCallstackHandler *this)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  uint *puVar10;
  int *piVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 auStackY_4a8 [32];
  uint local_478 [2];
  FCallStackMapKey local_470;
  TPairInitializer<FMallocCallstackHandler::FCallStackMapKey_const_&,int_const_&> local_460;
  uint *local_450;
  int local_448 [2];
  longlong lStack_440;
  longlong local_438 [64];
  ulong64 local_238 [2];
  ulong64 local_228 [64];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  memset(local_238,0,0x210);
  FWindowsPlatformStackWalk::CaptureStackBackTrace(local_238,0x42,(void *)0x0);
  local_470.CallStack = local_228;
  local_470.CRC = (*FCrc::MemCrc32Func)(local_228,0x200,0);
  AcquireSRWLockShared((PSRWLOCK)&this->RWLock);
  iVar9 = TSet<TTuple<FMallocCallstackHandler::FCallStackMapKey,int>,TDefaultMapHashableKeyFuncs<FMallocCallstackHandler::FCallStackMapKey,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMallocCallstackHandler::FCallStackMapKey>
                    ((TSet<TTuple<FMallocCallstackHandler::FCallStackMapKey,int>,TDefaultMapHashableKeyFuncs<FMallocCallstackHandler::FCallStackMapKey,int,0>,FDefaultSetAllocator>
                      *)&this->CallStackMapKeyToCallStackIndexMap,local_470.CRC,&local_470);
  puVar10 = (uint *)0x0;
  if (iVar9 != -1) {
    lVar13 = (longlong)iVar9 * 0x20 + *(longlong *)&this->CallStackMapKeyToCallStackIndexMap;
    puVar14 = (uint *)(lVar13 + 0x10);
    if (lVar13 == 0) {
      puVar14 = puVar10;
    }
    if (puVar14 != (uint *)0x0) {
      local_478[0] = *puVar14;
      ReleaseSRWLockShared((PSRWLOCK)&this->RWLock);
      return local_478[0];
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->RWLock);
  local_448[0] = 0x40;
  lVar13 = (longlong)local_438;
  puVar14 = puVar10;
  do {
    iVar9 = (int)puVar14;
    if (*(longlong *)((longlong)local_228 + (longlong)puVar10) == 0) {
      if (local_448[0] == 0x40) {
        local_448[0] = iVar9;
      }
    }
    *(longlong *)((longlong)&lStack_440 + (longlong)puVar10) =
         *(longlong *)((longlong)local_228 + (longlong)puVar10);
    if ((*(longlong *)(lVar13 + 0x218) == 0) && (local_448[0] == 0x40)) {
      local_448[0] = iVar9 + 1;
    }
    *(longlong *)((longlong)local_438 + (longlong)puVar10) = *(longlong *)(lVar13 + 0x218);
    if ((*(longlong *)((longlong)(local_228 + 2) + (longlong)puVar10) == 0) &&
       (local_448[0] == 0x40)) {
      local_448[0] = iVar9 + 2;
    }
    *(longlong *)((longlong)(local_438 + 1) + (longlong)puVar10) =
         *(longlong *)((longlong)(local_228 + 2) + (longlong)puVar10);
    if ((*(longlong *)((longlong)(local_228 + 3) + (longlong)puVar10) == 0) &&
       (local_448[0] == 0x40)) {
      local_448[0] = iVar9 + 3;
    }
    *(longlong *)((longlong)(local_438 + 2) + (longlong)puVar10) =
         *(longlong *)((longlong)(local_228 + 3) + (longlong)puVar10);
    if ((*(longlong *)((longlong)(local_228 + 4) + (longlong)puVar10) == 0) &&
       (local_448[0] == 0x40)) {
      local_448[0] = iVar9 + 4;
    }
    *(longlong *)((longlong)(local_438 + 3) + (longlong)puVar10) =
         *(longlong *)((longlong)(local_228 + 4) + (longlong)puVar10);
    if ((*(longlong *)((longlong)(local_228 + 5) + (longlong)puVar10) == 0) &&
       (local_448[0] == 0x40)) {
      local_448[0] = iVar9 + 5;
    }
    *(longlong *)((longlong)(local_438 + 4) + (longlong)puVar10) =
         *(longlong *)((longlong)(local_228 + 5) + (longlong)puVar10);
    if ((*(longlong *)((longlong)(local_228 + 6) + (longlong)puVar10) == 0) &&
       (local_448[0] == 0x40)) {
      local_448[0] = iVar9 + 6;
    }
    *(longlong *)((longlong)(local_438 + 5) + (longlong)puVar10) =
         *(longlong *)((longlong)(local_228 + 6) + (longlong)puVar10);
    if ((*(longlong *)((longlong)(local_228 + 7) + (longlong)puVar10) == 0) &&
       (local_448[0] == 0x40)) {
      local_448[0] = iVar9 + 7;
    }
    *(longlong *)((longlong)(local_438 + 6) + (longlong)puVar10) =
         *(longlong *)((longlong)(local_228 + 7) + (longlong)puVar10);
    if ((*(longlong *)((longlong)(local_228 + 8) + (longlong)puVar10) == 0) &&
       (local_448[0] == 0x40)) {
      local_448[0] = iVar9 + 8;
    }
    *(longlong *)((longlong)(local_438 + 7) + (longlong)puVar10) =
         *(longlong *)((longlong)(local_228 + 8) + (longlong)puVar10);
    if ((*(longlong *)((longlong)(local_228 + 9) + (longlong)puVar10) == 0) &&
       (local_448[0] == 0x40)) {
      local_448[0] = iVar9 + 9;
    }
    *(longlong *)((longlong)(local_438 + 8) + (longlong)puVar10) =
         *(longlong *)((longlong)(local_228 + 9) + (longlong)puVar10);
    if ((*(longlong *)((longlong)(local_228 + 10) + (longlong)puVar10) == 0) &&
       (local_448[0] == 0x40)) {
      local_448[0] = iVar9 + 10;
    }
    *(longlong *)((longlong)(local_438 + 9) + (longlong)puVar10) =
         *(longlong *)((longlong)(local_228 + 10) + (longlong)puVar10);
    if ((*(longlong *)((longlong)(local_228 + 0xb) + (longlong)puVar10) == 0) &&
       (local_448[0] == 0x40)) {
      local_448[0] = iVar9 + 0xb;
    }
    *(longlong *)((longlong)(local_438 + 10) + (longlong)puVar10) =
         *(longlong *)((longlong)(local_228 + 0xb) + (longlong)puVar10);
    if ((*(longlong *)((longlong)(local_228 + 0xc) + (longlong)puVar10) == 0) &&
       (local_448[0] == 0x40)) {
      local_448[0] = iVar9 + 0xc;
    }
    *(longlong *)((longlong)(local_438 + 0xb) + (longlong)puVar10) =
         *(longlong *)((longlong)(local_228 + 0xc) + (longlong)puVar10);
    if ((*(longlong *)((longlong)(local_228 + 0xd) + (longlong)puVar10) == 0) &&
       (local_448[0] == 0x40)) {
      local_448[0] = iVar9 + 0xd;
    }
    *(longlong *)((longlong)(local_438 + 0xc) + (longlong)puVar10) =
         *(longlong *)((longlong)(local_228 + 0xd) + (longlong)puVar10);
    if ((*(longlong *)((longlong)(local_228 + 0xe) + (longlong)puVar10) == 0) &&
       (local_448[0] == 0x40)) {
      local_448[0] = iVar9 + 0xe;
    }
    *(longlong *)((longlong)(local_438 + 0xd) + (longlong)puVar10) =
         *(longlong *)((longlong)(local_228 + 0xe) + (longlong)puVar10);
    if ((*(longlong *)((longlong)(local_228 + 0xf) + (longlong)puVar10) == 0) &&
       (local_448[0] == 0x40)) {
      local_448[0] = iVar9 + 0xf;
    }
    *(longlong *)((longlong)(local_438 + 0xe) + (longlong)puVar10) =
         *(longlong *)((longlong)(local_228 + 0xf) + (longlong)puVar10);
    puVar14 = (uint *)(ulonglong)(iVar9 + 0x10U);
    puVar10 = puVar10 + 0x20;
    lVar13 = lVar13 + 0x80;
  } while (iVar9 + 0x10U < 0x40);
  AcquireSRWLockExclusive((PSRWLOCK)&this->RWLock);
  piVar11 = &(this->CallStackInfoArray).ArrayNum;
  local_478[0] = *piVar11;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x208,8,1,&(this->CallStackInfoArray).AllocatorInstance,piVar11,
                     &(this->CallStackInfoArray).ArrayMax);
  lVar13 = 4;
  piVar11 = local_448;
  pFVar12 = (this->CallStackInfoArray).AllocatorInstance.Data + (longlong)iVar9 * 0x208;
  do {
    pFVar1 = pFVar12 + 0x80;
    uVar4 = *(undefined8 *)(piVar11 + 2);
    uVar5 = *(undefined8 *)(piVar11 + 4);
    uVar6 = *(undefined8 *)(piVar11 + 6);
    piVar2 = piVar11 + 0x20;
    *(undefined8 *)pFVar12 = *(undefined8 *)piVar11;
    *(undefined8 *)(pFVar12 + 8) = uVar4;
    uVar4 = *(undefined8 *)(piVar11 + 8);
    uVar7 = *(undefined8 *)(piVar11 + 10);
    *(undefined8 *)(pFVar12 + 0x10) = uVar5;
    *(undefined8 *)(pFVar12 + 0x18) = uVar6;
    uVar5 = *(undefined8 *)(piVar11 + 0xc);
    uVar6 = *(undefined8 *)(piVar11 + 0xe);
    *(undefined8 *)(pFVar12 + 0x20) = uVar4;
    *(undefined8 *)(pFVar12 + 0x28) = uVar7;
    uVar4 = *(undefined8 *)(piVar11 + 0x10);
    uVar7 = *(undefined8 *)(piVar11 + 0x12);
    *(undefined8 *)(pFVar12 + 0x30) = uVar5;
    *(undefined8 *)(pFVar12 + 0x38) = uVar6;
    uVar5 = *(undefined8 *)(piVar11 + 0x14);
    uVar6 = *(undefined8 *)(piVar11 + 0x16);
    *(undefined8 *)(pFVar12 + 0x40) = uVar4;
    *(undefined8 *)(pFVar12 + 0x48) = uVar7;
    uVar4 = *(undefined8 *)(piVar11 + 0x18);
    uVar7 = *(undefined8 *)(piVar11 + 0x1a);
    *(undefined8 *)(pFVar12 + 0x50) = uVar5;
    *(undefined8 *)(pFVar12 + 0x58) = uVar6;
    uVar5 = *(undefined8 *)(piVar11 + 0x1c);
    uVar6 = *(undefined8 *)(piVar11 + 0x1e);
    *(undefined8 *)(pFVar12 + 0x60) = uVar4;
    *(undefined8 *)(pFVar12 + 0x68) = uVar7;
    *(undefined8 *)(pFVar12 + 0x70) = uVar5;
    *(undefined8 *)(pFVar12 + 0x78) = uVar6;
    lVar13 = lVar13 + -1;
    piVar11 = piVar2;
    pFVar12 = pFVar1;
  } while (lVar13 != 0);
  *(undefined8 *)pFVar1 = *(undefined8 *)piVar2;
  lVar13 = (longlong)(int)local_478[0];
  uVar15 = 0;
  if ((int)local_478[0] < (this->CallStackInfoArray).ArrayNum) {
    uVar15 = ~local_478[0] >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar3 = (code *)swi(3);
    iVar9 = (*pcVar3)();
    return iVar9;
  }
  local_460.Value = (int *)&local_470;
  local_450 = local_478;
  local_470.CallStack =
       (ulong64 *)((this->CallStackInfoArray).AllocatorInstance.Data + lVar13 * 0x208 + 8);
  TSet<TTuple<FMallocCallstackHandler::FCallStackMapKey,int>,TDefaultMapHashableKeyFuncs<FMallocCallstackHandler::FCallStackMapKey,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FMallocCallstackHandler::FCallStackMapKey_const_&,int_const_&>_>
            ((TSet<TTuple<FMallocCallstackHandler::FCallStackMapKey,int>,TDefaultMapHashableKeyFuncs<FMallocCallstackHandler::FCallStackMapKey,int,0>,FDefaultSetAllocator>
              *)&this->CallStackMapKeyToCallStackIndexMap,&local_460,(bool *)&local_460.Value);
  ReleaseSRWLockExclusive((PSRWLOCK)&this->RWLock);
  return local_478[0];
}

// GetDescriptiveName @ 1416f7d10

wchar_t * __thiscall FMallocCallstackHandler::GetDescriptiveName(FMallocCallstackHandler *this)

{
  wchar_t *pwVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416f7d17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pwVar1 = (wchar_t *)(**(code **)((longlong)*this->UsedMalloc + 200))();
  return pwVar1;
}

// Init @ 1416fe220

void __thiscall FMallocCallstackHandler::Init(FMallocCallstackHandler *this)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (this->Initialized == false) {
    if ((this->CallStackInfoArray).ArrayMax < 0x1312d0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x208,8,0x1312d0,&(this->CallStackInfoArray).AllocatorInstance,
                 (this->CallStackInfoArray).ArrayNum,&(this->CallStackInfoArray).ArrayMax);
    }
    if ((uint)(*(int *)&(this->CallStackMapKeyToCallStackIndexMap).field_0x8 -
              *(int *)&(this->CallStackMapKeyToCallStackIndexMap).field_0x34) < 0x1312d0) {
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->CallStackMapKeyToCallStackIndexMap,0x1312d0);
      for (lVar2 = 0x3f; 0x1312dfUL >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
      iVar3 = 1 << ((byte)lVar2 & 0x1f);
      iVar1 = *(int *)&(this->CallStackMapKeyToCallStackIndexMap).field_0x48;
      if ((iVar1 == 0) || (iVar1 < iVar3)) {
        *(int *)&(this->CallStackMapKeyToCallStackIndexMap).field_0x48 = iVar3;
        TSet<TTuple<FMallocCallstackHandler::FCallStackMapKey,int>,TDefaultMapHashableKeyFuncs<FMallocCallstackHandler::FCallStackMapKey,int,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FMallocCallstackHandler::FCallStackMapKey,int>,TDefaultMapHashableKeyFuncs<FMallocCallstackHandler::FCallStackMapKey,int,0>,FDefaultSetAllocator>
                  *)&this->CallStackMapKeyToCallStackIndexMap);
      }
    }
    this->Initialized = true;
    GMallocCallstackHandler = this;
  }
  return;
}

// InitializeStatsMetadata @ 141700c70

void __thiscall FMallocCallstackHandler::InitializeStatsMetadata(FMallocCallstackHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141700c77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0x98))();
  return;
}

// IsDisabled @ 141701a20

bool __thiscall FMallocCallstackHandler::IsDisabled(FMallocCallstackHandler *this)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(this->DisabledTLS);
  return pvVar1 != (LPVOID)0x0;
}

// IsInternallyThreadSafe @ 1417024e0

bool __thiscall FMallocCallstackHandler::IsInternallyThreadSafe(FMallocCallstackHandler *this)

{
  return true;
}

// Malloc @ 1417044b0

void * __thiscall
FMallocCallstackHandler::Malloc(FMallocCallstackHandler *this,ulong64 param_1,uint param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar1;
  FMallocCallstackHandler *pFVar2;
  char cVar3;
  undefined4 uVar4;
  void *pvVar5;
  LPVOID pvVar6;
  ulonglong local_res8;
  
  cVar3 = (**(code **)(this->_padding_ + 0x100))();
  pFVar2 = GMallocCallstackHandler;
  if (cVar3 != '\0') {
    pvVar5 = (void *)(**(code **)((longlong)*this->UsedMalloc + 0x28))
                               (this->UsedMalloc,param_1,param_2);
    return pvVar5;
  }
  pvVar6 = TlsGetValue(GMallocCallstackHandler->DisabledTLS);
  TlsSetValue(pFVar2->DisabledTLS,(LPVOID)((longlong)pvVar6 + 1));
  uVar4 = (**(code **)(this->_padding_ + 0x120))(this);
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pvVar5 = (void *)(**(code **)((longlong)*this->UsedMalloc + 0x28))
                               (this->UsedMalloc,param_1,param_2);
    local_res8 = param_1;
    cVar3 = (**(code **)((longlong)*this->UsedMalloc + 0x68))(this->UsedMalloc,pvVar5,&local_res8);
    uVar1 = local_res8;
    if (cVar3 == '\0') {
      uVar1 = param_1;
    }
    (**(code **)(this->_padding_ + 0x110))(this,pvVar5,uVar1 & 0xffffffff,uVar4);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = GMallocCallstackHandler;
    pvVar6 = TlsGetValue(GMallocCallstackHandler->DisabledTLS);
    TlsSetValue(pFVar2->DisabledTLS,(LPVOID)((longlong)pvVar6 + -1));
    return pvVar5;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// MarkTLSCachesAsUnusedOnCurrentThread @ 141704ad0

void __thiscall
FMallocCallstackHandler::MarkTLSCachesAsUnusedOnCurrentThread(FMallocCallstackHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141704ad7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0x88))();
  return;
}

// MarkTLSCachesAsUsedOnCurrentThread @ 141704b50

void __thiscall
FMallocCallstackHandler::MarkTLSCachesAsUsedOnCurrentThread(FMallocCallstackHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141704b57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0x80))();
  return;
}

// OnMallocInitialized @ 141706110

void __thiscall FMallocCallstackHandler::OnMallocInitialized(FMallocCallstackHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141706117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0xd0))();
  return;
}

// OnPostFork @ 1417061e0

void __thiscall FMallocCallstackHandler::OnPostFork(FMallocCallstackHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001417061e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0xe0))();
  return;
}

// OnPreFork @ 141706330

void __thiscall FMallocCallstackHandler::OnPreFork(FMallocCallstackHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141706337. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0xd8))();
  return;
}

// QuantizeSize @ 141708620

ulong64 __thiscall
FMallocCallstackHandler::QuantizeSize(FMallocCallstackHandler *this,ulong64 param_1,uint param_2)

{
  ulong64 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141708627. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->UsedMalloc + 0x60))();
  return uVar1;
}

// Realloc @ 141708b50

void * __thiscall
FMallocCallstackHandler::Realloc
          (FMallocCallstackHandler *this,void *param_1,ulong64 param_2,uint param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar1;
  FMallocCallstackHandler *pFVar2;
  char cVar3;
  undefined4 uVar4;
  void *pvVar5;
  LPVOID pvVar6;
  undefined8 local_res8;
  ulonglong local_28 [2];
  
  cVar3 = (**(code **)(this->_padding_ + 0x100))();
  pFVar2 = GMallocCallstackHandler;
  if (cVar3 != '\0') {
    pvVar5 = (void *)(**(code **)((longlong)*this->UsedMalloc + 0x38))
                               (this->UsedMalloc,param_1,param_2,param_3);
    return pvVar5;
  }
  pvVar6 = TlsGetValue(GMallocCallstackHandler->DisabledTLS);
  TlsSetValue(pFVar2->DisabledTLS,(LPVOID)((longlong)pvVar6 + 1));
  uVar4 = (**(code **)(this->_padding_ + 0x120))(this);
  lpCriticalSection = &this->CriticalSection;
  local_res8 = 0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (**(code **)((longlong)*this->UsedMalloc + 0x68))(this->UsedMalloc,param_1,&local_res8);
    pvVar5 = (void *)(**(code **)((longlong)*this->UsedMalloc + 0x38))
                               (this->UsedMalloc,param_1,param_2,param_3);
    local_28[0] = param_2;
    cVar3 = (**(code **)((longlong)*this->UsedMalloc + 0x68))(this->UsedMalloc,pvVar5,local_28);
    uVar1 = local_28[0];
    if (cVar3 == '\0') {
      uVar1 = param_2;
    }
    (**(code **)(this->_padding_ + 0x108))
              (this,param_1,pvVar5,uVar1 & 0xffffffff,(undefined4)local_res8,uVar4);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = GMallocCallstackHandler;
    pvVar6 = TlsGetValue(GMallocCallstackHandler->DisabledTLS);
    TlsSetValue(pFVar2->DisabledTLS,(LPVOID)((longlong)pvVar6 + -1));
    return pvVar5;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetupTLSCachesOnCurrentThread @ 141712810

void __thiscall
FMallocCallstackHandler::SetupTLSCachesOnCurrentThread(FMallocCallstackHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141712817. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0x78))();
  return;
}

// TrackRealloc @ 141716a50

void __thiscall
FMallocCallstackHandler::TrackRealloc
          (FMallocCallstackHandler *this,void *param_1,void *param_2,uint param_3,uint param_4,
          int param_5)

{
  longlong lVar1;
  
  if (param_1 == (void *)0x0) {
    lVar1 = this->_padding_;
  }
  else {
    if (param_1 == param_2) {
      return;
    }
    (**(code **)(this->_padding_ + 0x118))(this,param_1,param_4,param_5);
    if (param_2 == (void *)0x0) {
      return;
    }
    lVar1 = this->_padding_;
  }
  (**(code **)(lVar1 + 0x110))(this,param_2,param_3,param_5);
  return;
}

// Trim @ 141716f20

void __thiscall FMallocCallstackHandler::Trim(FMallocCallstackHandler *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141716f27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0x70))();
  return;
}

// UpdateStats @ 14171a2d0

void __thiscall FMallocCallstackHandler::UpdateStats(FMallocCallstackHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014171a2d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0xa0))();
  return;
}

// ValidateHeap @ 14171a800

bool __thiscall FMallocCallstackHandler::ValidateHeap(FMallocCallstackHandler *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014171a807. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->UsedMalloc + 0xc0))();
  return (bool)uVar1;
}

