// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// GetTestFlags @ 1440bcd40

EAutomationTestFlags __thiscall
FAutoRTFMChaosPhysSceneLock::GetTestFlags(FAutoRTFMChaosPhysSceneLock *this)

{
  return EngineFilter|CommandletContext|ServerContext|ClientContext;
}

// IsStressTest @ 1440bcd50

bool __thiscall FAutoRTFMChaosPhysSceneLock::IsStressTest(FAutoRTFMChaosPhysSceneLock *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1440bcd60

uint __thiscall FAutoRTFMChaosPhysSceneLock::GetRequiredDeviceNum(FAutoRTFMChaosPhysSceneLock *this)

{
  return 1;
}

// GetTestSourceFileName @ 1440bcd70

FString * __thiscall
FAutoRTFMChaosPhysSceneLock::GetTestSourceFileName
          (FAutoRTFMChaosPhysSceneLock *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Tests\\AutoRTFMPhysSceneLockTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1440bcda0

int __thiscall FAutoRTFMChaosPhysSceneLock::GetTestSourceFileLine(FAutoRTFMChaosPhysSceneLock *this)

{
  return 0x10;
}

// GetTests @ 1440bcdb0

/* WARNING: Removing unreachable block (ram,0x0001440bce9d) */
/* WARNING: Removing unreachable block (ram,0x0001440bcf68) */

void __thiscall
FAutoRTFMChaosPhysSceneLock::GetTests
          (FAutoRTFMChaosPhysSceneLock *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"AutoRTFM + FPhysSceneLock");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 1440bcf90

bool __thiscall
FAutoRTFMChaosPhysSceneLock::RunTest(FAutoRTFMChaosPhysSceneLock *this,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  BOOLEAN BVar4;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_94 [4];
  FPhysicsRwLock local_90;
  FAutomationEvent local_80;
  FString local_48 [3];
  
  bVar2 = AutoRTFM::ForTheRuntime::IsAutoRTFMRuntimeEnabledInternal();
  if (bVar2) {
    local_res18[0] = 0;
    AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosPhysSceneLock::RunTest_::__l2::<lambda_1>_>
              (local_res18);
    local_res20[0] = 0;
    AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosPhysSceneLock::RunTest_::__l2::<lambda_2>_>
              (local_res20);
    local_98 = 0;
    AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosPhysSceneLock::RunTest_::__l2::<lambda_3>_>
              (&local_98);
    local_97 = 0;
    AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosPhysSceneLock::RunTest_::__l2::<lambda_4>_>
              (&local_97);
    local_96 = 0;
    AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosPhysSceneLock::RunTest_::__l2::<lambda_5>_>
              (&local_96);
    local_95 = 0;
    AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosPhysSceneLock::RunTest_::__l2::<lambda_6>_>
              (&local_95);
    local_94[0] = 0;
    AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosPhysSceneLock::RunTest_::__l2::<lambda_7>_>
              (local_94);
    local_90.RwLock.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0;
    local_90.TlsSlot = TlsAlloc();
    if (local_90.TlsSlot == 0xffffffff) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                         ,0x2f4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    Chaos::FPhysicsRwLock::ReadLock(&local_90);
    Chaos::FPhysicsRwLock::ReadLock(&local_90);
    Chaos::FPhysicsRwLock::ReadUnlock(&local_90);
    Chaos::FPhysicsRwLock::ReadLock(&local_90);
    Chaos::FPhysicsRwLock::ReadUnlock(&local_90);
    Chaos::FPhysicsRwLock::WriteLock(&local_90);
    Chaos::FPhysicsRwLock::WriteLock(&local_90);
    Chaos::FPhysicsRwLock::WriteUnlock(&local_90);
    Chaos::FPhysicsRwLock::WriteLock(&local_90);
    Chaos::FPhysicsRwLock::WriteUnlock(&local_90);
    if (local_90.TlsSlot == 0xffffffff) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                         ,0x2f9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    TlsFree(local_90.TlsSlot);
    BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&local_90);
    if (BVar4 != '\0') {
      ReleaseSRWLockExclusive((PSRWLOCK)&local_90);
      return true;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    ::FString::FString(local_48,L"SKIPPED \'FAutoRTFMChaosPhysSceneLock\' test. AutoRTFM disabled.")
    ;
    _Src.Data = local_48[0].Data.AllocatorInstance.Data;
    local_80.Type = Info;
    local_80.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48[0].Data.ArrayNum == 0) {
      local_80.Message.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48[0].Data.ArrayNum,0,(ForAnyElementType *)&local_80.Message,
                 local_48[0].Data.ArrayNum,&local_80.Message.Data.ArrayMax);
      memcpy(local_80.Message.Data.AllocatorInstance.Data,_Src.Data,
             (longlong)local_48[0].Data.ArrayNum * 2);
    }
    local_80.Artifact.A = 0;
    local_80.Artifact.B = 0;
    local_80.Context.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.Context.Data.ArrayNum = 0;
    local_80.Context.Data.ArrayMax = 0;
    local_80.Artifact.C = 0;
    local_80.Artifact.D = 0;
    FAutomationTestExecutionInfo::AddEvent
              ((FAutomationTestExecutionInfo *)&this->field_0x30,&local_80,0,true);
    if (local_80.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Context.Data.AllocatorInstance.Data);
    }
    if (local_80.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Message.Data.AllocatorInstance.Data);
    }
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      return true;
    }
  }
  return true;
}

// GetBeautifiedTestName @ 1440bd230

FString * __thiscall
FAutoRTFMChaosPhysSceneLock::GetBeautifiedTestName
          (FAutoRTFMChaosPhysSceneLock *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"AutoRTFM + FPhysSceneLock");
  return __return_storage_ptr__;
}

