// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 14

// GetTestFlags @ 141acad10

EAutomationTestFlags __thiscall
UE::FSharedRecursiveMutexTest::GetTestFlags(FSharedRecursiveMutexTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141acad20

bool __thiscall UE::FSharedRecursiveMutexTest::IsStressTest(FSharedRecursiveMutexTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141acad30

uint __thiscall UE::FSharedRecursiveMutexTest::GetRequiredDeviceNum(FSharedRecursiveMutexTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141acad40

FString * __thiscall
UE::FSharedRecursiveMutexTest::GetTestSourceFileName
          (FSharedRecursiveMutexTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\SharedRecursiveMutexTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141acad70

int __thiscall UE::FSharedRecursiveMutexTest::GetTestSourceFileLine(FSharedRecursiveMutexTest *this)

{
  return 0x11;
}

// GetTests @ 141acad80

/* WARNING: Removing unreachable block (ram,0x000141acaefe) */

void __thiscall
UE::FSharedRecursiveMutexTest::GetTests
          (FSharedRecursiveMutexTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar1 = &this->PrettyNameDotNotation;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar1)
  ;
  pFVar5 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = local_18;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar5 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 141acaf20

bool __thiscall
UE::FSharedRecursiveMutexTest::RunTest(FSharedRecursiveMutexTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141acaf50

FString * __thiscall
UE::FSharedRecursiveMutexTest::GetBeautifiedTestName
          (FSharedRecursiveMutexTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FSharedRecursiveMutexTest @ 141b26c10

FSharedRecursiveMutexTest * __thiscall
UE::FSharedRecursiveMutexTest::FSharedRecursiveMutexTest
          (FSharedRecursiveMutexTest *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EAutomationTestFlags EVar3;
  FString *pFVar4;
  FAutomationTestFramework *this_00;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,false);
  this->_padding_ = (longlong)&___7FSharedRecursiveMutexTest_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][Async]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"Core::Async::SharedRecursiveMutex");
  pFVar4 = ::FString::Replace(pFVar4,&local_18,L"::",L".",IgnoreCase);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrettyNameDotNotation).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->PrettyNameDotNotation).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar3 = this->TestFlags;
  if ((EVar3 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext)) == None
     ) {
    EVar3 = EVar3 | (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
    this->TestFlags = EVar3;
  }
  if ((EVar3 & (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      None) {
    this->TestFlags = EVar3 | EngineFilter;
  }
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_18,"[Core][Async]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,lVar5 * 2);
  }
  FAutomationTestFramework::RegisterAutomationTestTags(this_00,&local_28,&local_18,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// operator() @ 141b32160

void __thiscall `UE::FSharedRecursiveMutexTest::TestBody'::__l33::<lambda_3>::operator()(void *this)

{
  byte bVar1;
  FSharedRecursiveMutex *this_00;
  FAutomationTestBase *pFVar2;
  undefined4 *puVar3;
  code *pcVar4;
  bool bVar5;
  byte *pbVar6;
  FAutomationTestFramework *pFVar7;
  longlong lVar8;
  FSharedRecursiveMutexLink local_90;
  char local_80;
  FSharedRecursiveMutex *local_78;
  FSharedRecursiveMutexLink local_70;
  char local_60;
  FSharedRecursiveMutex *local_58;
  FSharedRecursiveMutexLink local_50;
  FString local_40;
  FString local_30;
  FString local_20;
  
  this_00 = *(FSharedRecursiveMutex **)this;
  local_90.OwnedMutex = (FSharedRecursiveMutex *)0x0;
  local_90.Next = (FSharedRecursiveMutexLink *)0x0;
  local_80 = '\0';
  local_70.OwnedMutex = (FSharedRecursiveMutex *)0x0;
  local_70.Next = (FSharedRecursiveMutexLink *)0x0;
  local_60 = '\0';
  local_78 = this_00;
  UE::FSharedRecursiveMutex::Lock(this_00);
  lVar8 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar6 = (byte *)(lVar8 + 1);
  bVar1 = *pbVar6;
  *pbVar6 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar8 + 1));
  }
  FWindowsPlatformProcess::YieldThread();
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar6 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar6 = *pbVar6 & 0xfe;
  UNLOCK();
  **(undefined4 **)((longlong)this + 8) = 1;
  UE::FSharedRecursiveMutex::Unlock(*(FSharedRecursiveMutex **)this);
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar6 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar6 = *pbVar6 & 0xfe;
  UNLOCK();
  lVar8 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar6 = (byte *)(lVar8 + 2);
  bVar1 = *pbVar6;
  *pbVar6 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar8 + 2));
  }
  FWindowsPlatformProcess::YieldThread();
  if (local_80 != '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xb2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this_00 == (FSharedRecursiveMutex *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xb3,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  UE::FSharedRecursiveMutex::LockShared(this_00,&local_90);
  local_80 = '\x01';
  if (**(int **)((longlong)this + 8) != 2) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_40,L"Condition failed");
    (*pcVar4)(pFVar2,&local_40,0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  lVar8 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar6 = (byte *)(lVar8 + 1);
  bVar1 = *pbVar6;
  *pbVar6 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar8 + 1));
  }
  FWindowsPlatformProcess::YieldThread();
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar6 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar6 = *pbVar6 & 0xfe;
  UNLOCK();
  **(undefined4 **)((longlong)this + 8) = 3;
  if (local_60 != '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xaa,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (local_78 == (FSharedRecursiveMutex *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xab,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_60 = UE::FSharedRecursiveMutex::TryLockShared(local_78,&local_70);
  if (!(bool)local_60) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_30,L"Condition failed");
    (*pcVar4)(pFVar2,&local_30,0);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  if (local_60 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xba,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_60 = '\0';
  UE::FSharedRecursiveMutex::UnlockShared(local_78,&local_70);
  if (local_80 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xba,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_80 = '\0';
  UE::FSharedRecursiveMutex::UnlockShared(this_00,&local_90);
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar6 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar6 = *pbVar6 & 0xfe;
  UNLOCK();
  lVar8 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar6 = (byte *)(lVar8 + 1);
  bVar1 = *pbVar6;
  *pbVar6 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar8 + 1));
  }
  FWindowsPlatformProcess::YieldThread();
  if (local_80 != '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xb2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this_00 == (FSharedRecursiveMutex *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xb3,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  UE::FSharedRecursiveMutex::LockShared(this_00,&local_90);
  local_80 = '\x01';
  if (**(int **)((longlong)this + 8) != 4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_20,L"Condition failed");
    (*pcVar4)(pFVar2,&local_20,0);
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar6 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar6 = *pbVar6 & 0xfe;
  UNLOCK();
  if (local_80 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xba,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_80 = '\0';
  UE::FSharedRecursiveMutex::UnlockShared(this_00,&local_90);
  puVar3 = *(undefined4 **)((longlong)this + 0x10);
  *puVar3 = 3;
  LOCK();
  pbVar6 = (byte *)(puVar3 + 1);
  *pbVar6 = *pbVar6 & 0xfe;
  UNLOCK();
  lVar8 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar6 = (byte *)(lVar8 + 1);
  bVar1 = *pbVar6;
  *pbVar6 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar8 + 1));
  }
  FWindowsPlatformProcess::YieldThread();
  lVar8 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar6 = (byte *)(lVar8 + 2);
  bVar1 = *pbVar6;
  *pbVar6 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar8 + 2));
  }
  FWindowsPlatformProcess::YieldThread();
  lVar8 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar6 = (byte *)(lVar8 + 3);
  bVar1 = *pbVar6;
  *pbVar6 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar8 + 3));
  }
  FWindowsPlatformProcess::YieldThread();
  lVar8 = 0x4000;
  do {
    local_58 = *(FSharedRecursiveMutex **)this;
    local_50.OwnedMutex = (FSharedRecursiveMutex *)0x0;
    local_50.Next = (FSharedRecursiveMutexLink *)0x0;
    UE::FSharedRecursiveMutex::LockShared(local_58,&local_50);
    FWindowsPlatformProcess::YieldThread();
    UE::FSharedRecursiveMutex::UnlockShared(local_58,&local_50);
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  UE::FManualResetEvent::Wait((FManualResetEvent *)(*(longlong *)((longlong)this + 0x10) + 4));
  if (GIsBuildMachine == false) {
    if (local_80 != '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bLocked",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                         ,0xb2,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (this_00 == (FSharedRecursiveMutex *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                         ,0xb3,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    UE::FSharedRecursiveMutex::LockShared(this_00,&local_90);
    local_80 = '\x01';
    **(undefined4 **)((longlong)this + 8) = 5;
    lVar8 = **(longlong **)((longlong)this + 0x18);
    LOCK();
    pbVar6 = (byte *)(lVar8 + 1);
    bVar1 = *pbVar6;
    *pbVar6 = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      UE::ParkingLot::WakeAll((void *)(lVar8 + 1));
    }
    FWindowsPlatformProcess::YieldThread();
    UE::FManualResetEvent::Wait
              ((FManualResetEvent *)
               ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
    pbVar6 = (byte *)((longlong)*(int *)((longlong)this + 0x28) +
                     *(longlong *)((longlong)this + 0x20));
    LOCK();
    *pbVar6 = *pbVar6 & 0xfe;
    UNLOCK();
    if (local_60 != '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bLocked",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                         ,0xb2,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (local_78 == (FSharedRecursiveMutex *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                         ,0xb3,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    UE::FSharedRecursiveMutex::LockShared(local_78,&local_70);
    local_60 = '\x01';
    if (local_80 == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bLocked",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                         ,0xba,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_80 = '\0';
    UE::FSharedRecursiveMutex::UnlockShared(this_00,&local_90);
    if (local_60 == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bLocked",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                         ,0xba,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_60 = '\0';
    UE::FSharedRecursiveMutex::UnlockShared(local_78,&local_70);
  }
  if (local_60 != '\0') {
    UE::FSharedRecursiveMutex::UnlockShared(local_78,&local_70);
  }
  if (local_80 != '\0') {
    UE::FSharedRecursiveMutex::UnlockShared(this_00,&local_90);
  }
  return;
}

// operator() @ 141b33ba0

void __thiscall `UE::FSharedRecursiveMutexTest::TestBody'::__l33::<lambda_4>::operator()(void *this)

{
  byte bVar1;
  int iVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  int *piVar5;
  byte *pbVar6;
  FAutomationTestFramework *pFVar7;
  longlong lVar8;
  undefined1 local_28 [8];
  FSharedRecursiveMutexLink local_20;
  
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar6 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar6 = *pbVar6 & 0xfe;
  UNLOCK();
  lVar8 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar6 = (byte *)(lVar8 + 2);
  bVar1 = *pbVar6;
  *pbVar6 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar8 + 2));
  }
  FWindowsPlatformProcess::YieldThread();
  UE::FSharedRecursiveMutex::Lock(*(FSharedRecursiveMutex **)this);
  if (**(int **)((longlong)this + 8) != 1) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)local_28,L"Condition failed");
    (*pcVar4)(pFVar3,local_28,0);
    if (local_28 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_28);
    }
  }
  pbVar6 = (byte *)**(undefined8 **)((longlong)this + 0x18);
  LOCK();
  bVar1 = *pbVar6;
  *pbVar6 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll(pbVar6);
  }
  FWindowsPlatformProcess::YieldThread();
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar6 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar6 = *pbVar6 & 0xfe;
  UNLOCK();
  **(undefined4 **)((longlong)this + 8) = 2;
  UE::FSharedRecursiveMutex::Unlock(*(FSharedRecursiveMutex **)this);
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar6 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar6 = *pbVar6 & 0xfe;
  UNLOCK();
  lVar8 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar6 = (byte *)(lVar8 + 2);
  bVar1 = *pbVar6;
  *pbVar6 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar8 + 2));
  }
  FWindowsPlatformProcess::YieldThread();
  UE::FSharedRecursiveMutex::Lock(*(FSharedRecursiveMutex **)this);
  if (**(int **)((longlong)this + 8) != 3) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)local_28,L"Condition failed");
    (*pcVar4)(pFVar3,local_28,0);
    if (local_28 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_28);
    }
  }
  lVar8 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar6 = (byte *)(lVar8 + 2);
  bVar1 = *pbVar6;
  *pbVar6 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar8 + 2));
  }
  FWindowsPlatformProcess::YieldThread();
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar6 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar6 = *pbVar6 & 0xfe;
  UNLOCK();
  **(undefined4 **)((longlong)this + 8) = 4;
  UE::FSharedRecursiveMutex::Unlock(*(FSharedRecursiveMutex **)this);
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar6 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar6 = *pbVar6 & 0xfe;
  UNLOCK();
  lVar8 = 0x4000;
  do {
    local_28 = *(undefined1 (*) [8])this;
    local_20.OwnedMutex = (FSharedRecursiveMutex *)0x0;
    local_20.Next = (FSharedRecursiveMutexLink *)0x0;
    UE::FSharedRecursiveMutex::LockShared((FSharedRecursiveMutex *)local_28,&local_20);
    FWindowsPlatformProcess::YieldThread();
    UE::FSharedRecursiveMutex::UnlockShared((FSharedRecursiveMutex *)local_28,&local_20);
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  piVar5 = *(int **)((longlong)this + 0x10);
  LOCK();
  iVar2 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    pbVar6 = (byte *)(piVar5 + 1);
    LOCK();
    bVar1 = *pbVar6;
    *pbVar6 = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar6);
    }
  }
  if (GIsBuildMachine == false) {
    UE::FManualResetEvent::Wait
              ((FManualResetEvent *)
               ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
    pbVar6 = (byte *)((longlong)*(int *)((longlong)this + 0x28) +
                     *(longlong *)((longlong)this + 0x20));
    LOCK();
    *pbVar6 = *pbVar6 & 0xfe;
    UNLOCK();
    lVar8 = **(longlong **)((longlong)this + 0x18);
    LOCK();
    pbVar6 = (byte *)(lVar8 + 2);
    bVar1 = *pbVar6;
    *pbVar6 = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      UE::ParkingLot::WakeAll((void *)(lVar8 + 2));
    }
    FWindowsPlatformProcess::YieldThread();
    UE::FSharedRecursiveMutex::Lock(*(FSharedRecursiveMutex **)this);
    if (**(int **)((longlong)this + 8) != 5) {
      pFVar7 = FAutomationTestFramework::Get();
      pFVar3 = pFVar7->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString((FString *)local_28,L"Condition failed");
      (*pcVar4)(pFVar3,local_28,0);
      if (local_28 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_28);
      }
    }
    **(undefined4 **)((longlong)this + 8) = 6;
    UE::FSharedRecursiveMutex::Unlock(*(FSharedRecursiveMutex **)this);
  }
  return;
}

// operator() @ 141b34530

void __thiscall `UE::FSharedRecursiveMutexTest::TestBody'::__l33::<lambda_5>::operator()(void *this)

{
  byte bVar1;
  int iVar2;
  FAutomationTestBase *pFVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  byte *pbVar7;
  FAutomationTestFramework *pFVar8;
  longlong lVar9;
  FString local_68;
  FString local_58;
  FSharedRecursiveMutex *local_48;
  FSharedRecursiveMutexLink local_40;
  FSharedRecursiveMutex *local_30;
  FSharedRecursiveMutexLink local_28;
  char local_18;
  
  local_30 = *(FSharedRecursiveMutex **)this;
  local_28.OwnedMutex = (FSharedRecursiveMutex *)0x0;
  local_28.Next = (FSharedRecursiveMutexLink *)0x0;
  local_18 = '\0';
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar7 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar7 = *pbVar7 & 0xfe;
  UNLOCK();
  pbVar7 = (byte *)**(undefined8 **)((longlong)this + 0x18);
  LOCK();
  bVar1 = *pbVar7;
  *pbVar7 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll(pbVar7);
  }
  FWindowsPlatformProcess::YieldThread();
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar7 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar7 = *pbVar7 & 0xfe;
  UNLOCK();
  lVar9 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar7 = (byte *)(lVar9 + 1);
  bVar1 = *pbVar7;
  *pbVar7 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar9 + 1));
  }
  FWindowsPlatformProcess::YieldThread();
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar7 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar7 = *pbVar7 & 0xfe;
  UNLOCK();
  pbVar7 = (byte *)**(undefined8 **)((longlong)this + 0x18);
  LOCK();
  bVar1 = *pbVar7;
  *pbVar7 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll(pbVar7);
  }
  FWindowsPlatformProcess::YieldThread();
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar7 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar7 = *pbVar7 & 0xfe;
  UNLOCK();
  lVar9 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar7 = (byte *)(lVar9 + 3);
  bVar1 = *pbVar7;
  *pbVar7 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar9 + 3));
  }
  FWindowsPlatformProcess::YieldThread();
  if (local_18 != '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xb2,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_30 == (FSharedRecursiveMutex *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xb3,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  UE::FSharedRecursiveMutex::LockShared(local_30,&local_28);
  local_18 = '\x01';
  if (**(int **)((longlong)this + 8) != 4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar5 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar5)(pFVar3,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  lVar9 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar7 = (byte *)(lVar9 + 3);
  bVar1 = *pbVar7;
  *pbVar7 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar9 + 3));
  }
  FWindowsPlatformProcess::YieldThread();
  if (local_18 == '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xba,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_18 = '\0';
  UE::FSharedRecursiveMutex::UnlockShared(local_30,&local_28);
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar7 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar7 = *pbVar7 & 0xfe;
  UNLOCK();
  lVar9 = 0x4000;
  do {
    local_48 = *(FSharedRecursiveMutex **)this;
    local_40.OwnedMutex = (FSharedRecursiveMutex *)0x0;
    local_40.Next = (FSharedRecursiveMutexLink *)0x0;
    UE::FSharedRecursiveMutex::LockShared(local_48,&local_40);
    FWindowsPlatformProcess::YieldThread();
    UE::FSharedRecursiveMutex::UnlockShared(local_48,&local_40);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  piVar4 = *(int **)((longlong)this + 0x10);
  LOCK();
  iVar2 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    pbVar7 = (byte *)(piVar4 + 1);
    LOCK();
    bVar1 = *pbVar7;
    *pbVar7 = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar7);
    }
  }
  if (GIsBuildMachine == false) {
    UE::FManualResetEvent::Wait
              ((FManualResetEvent *)
               ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
    pbVar7 = (byte *)((longlong)*(int *)((longlong)this + 0x28) +
                     *(longlong *)((longlong)this + 0x20));
    LOCK();
    *pbVar7 = *pbVar7 & 0xfe;
    UNLOCK();
    FWindowsPlatformProcess::Sleep(__real_3a83126f);
    pbVar7 = (byte *)**(undefined8 **)((longlong)this + 0x18);
    LOCK();
    bVar1 = *pbVar7;
    *pbVar7 = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar7);
    }
    FWindowsPlatformProcess::YieldThread();
    if (local_18 != '\0') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bLocked",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                         ,0xb2,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (local_30 == (FSharedRecursiveMutex *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                         ,0xb3,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UE::FSharedRecursiveMutex::LockShared(local_30,&local_28);
    local_18 = '\x01';
    if (**(int **)((longlong)this + 8) != 6) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar3 = pFVar8->CurrentTest;
      pcVar5 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_58,L"Condition failed");
      (*pcVar5)(pFVar3,&local_58,0);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_18 == '\0') {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bLocked",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                           ,0xba,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    local_18 = '\0';
    UE::FSharedRecursiveMutex::UnlockShared(local_30,&local_28);
  }
  if (local_18 != '\0') {
    UE::FSharedRecursiveMutex::UnlockShared(local_30,&local_28);
  }
  return;
}

// operator() @ 141b34f30

void __thiscall `UE::FSharedRecursiveMutexTest::TestBody'::__l33::<lambda_6>::operator()(void *this)

{
  byte bVar1;
  int iVar2;
  FAutomationTestBase *pFVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  byte *pbVar7;
  FAutomationTestFramework *pFVar8;
  longlong lVar9;
  FString local_58;
  FSharedRecursiveMutex *local_48;
  FSharedRecursiveMutexLink local_40;
  FSharedRecursiveMutex *local_30;
  FSharedRecursiveMutexLink local_28;
  char local_18;
  
  local_30 = *(FSharedRecursiveMutex **)this;
  local_28.OwnedMutex = (FSharedRecursiveMutex *)0x0;
  local_28.Next = (FSharedRecursiveMutexLink *)0x0;
  local_18 = '\0';
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar7 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar7 = *pbVar7 & 0xfe;
  UNLOCK();
  pbVar7 = (byte *)**(undefined8 **)((longlong)this + 0x18);
  LOCK();
  bVar1 = *pbVar7;
  *pbVar7 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll(pbVar7);
  }
  FWindowsPlatformProcess::YieldThread();
  if (local_18 != '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xb2,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_30 == (FSharedRecursiveMutex *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xb3,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  UE::FSharedRecursiveMutex::LockShared(local_30,&local_28);
  local_18 = '\x01';
  if (**(int **)((longlong)this + 8) != 4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar5 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar5)(pFVar3,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar7 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar7 = *pbVar7 & 0xfe;
  UNLOCK();
  pbVar7 = (byte *)**(undefined8 **)((longlong)this + 0x18);
  LOCK();
  bVar1 = *pbVar7;
  *pbVar7 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll(pbVar7);
  }
  FWindowsPlatformProcess::YieldThread();
  if (local_18 == '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xba,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_18 = '\0';
  UE::FSharedRecursiveMutex::UnlockShared(local_30,&local_28);
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar7 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar7 = *pbVar7 & 0xfe;
  UNLOCK();
  lVar9 = 0x4000;
  do {
    local_48 = *(FSharedRecursiveMutex **)this;
    local_40.OwnedMutex = (FSharedRecursiveMutex *)0x0;
    local_40.Next = (FSharedRecursiveMutexLink *)0x0;
    UE::FSharedRecursiveMutex::LockShared(local_48,&local_40);
    FWindowsPlatformProcess::YieldThread();
    UE::FSharedRecursiveMutex::UnlockShared(local_48,&local_40);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  piVar4 = *(int **)((longlong)this + 0x10);
  LOCK();
  iVar2 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    LOCK();
    bVar1 = *(byte *)(piVar4 + 1);
    *(byte *)(piVar4 + 1) = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      UE::ParkingLot::WakeAll(piVar4 + 1);
    }
  }
  if (local_18 != '\0') {
    UE::FSharedRecursiveMutex::UnlockShared(local_30,&local_28);
  }
  return;
}

// TestBody @ 141b9c140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::FSharedRecursiveMutexTest::TestBody(FSharedRecursiveMutexTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  code **ppcVar5;
  undefined1 auStackY_448 [32];
  FSharedRecursiveMutex local_408;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined1 local_3ec;
  undefined4 *local_3e8 [2];
  FThreadAffinity local_3d8;
  FSharedRecursiveMutex *local_3c8;
  FSharedRecursiveMutexLink local_3c0;
  char local_3b0;
  FSharedRecursiveMutex *local_3a8;
  FSharedRecursiveMutexLink local_3a0;
  char local_390;
  ulong64 local_388;
  undefined8 uStack_380;
  ulong64 local_378;
  undefined8 uStack_370;
  ulong64 local_368;
  undefined8 uStack_360;
  ulong64 local_358;
  undefined8 uStack_350;
  FSharedRecursiveMutex *local_348;
  FSharedRecursiveMutexLink local_340;
  char local_330;
  FSharedRecursiveMutex *local_328;
  FSharedRecursiveMutexLink local_320;
  undefined1 local_310;
  code *local_308;
  code *pcStack_300;
  code *local_2f8;
  undefined4 **ppuStack_2f0;
  code *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  FSharedRecursiveMutex *local_2d8;
  FSharedRecursiveMutexLink local_2d0;
  FSharedRecursiveMutex *local_2c0;
  FSharedRecursiveMutexLink local_2b8;
  FSharedRecursiveMutex *local_2a8;
  FSharedRecursiveMutexLink local_2a0;
  code *local_290;
  code *pcStack_288;
  code *local_280;
  undefined4 **ppuStack_278;
  code *local_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  code *local_260;
  code *pcStack_258;
  code *local_250;
  undefined4 **ppuStack_248;
  code *local_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  code *local_230;
  code *pcStack_228;
  code *local_220;
  undefined4 **ppuStack_218;
  code *local_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FThread local_190;
  FThread local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FThread local_130;
  FThread local_120;
  FThreadAffinity local_108;
  FThreadAffinity local_f8;
  FThreadAffinity local_e8;
  code *local_d8 [2];
  code *local_c8 [3];
  code **local_b0;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_448;
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_200,L"SingleThread");
  (*pcVar2)(pFVar1,&local_200,0);
  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.Data.AllocatorInstance.Data);
  }
  local_408.State = (atomic<unsigned_int>)0x0;
  local_408.ThreadId = (atomic<unsigned_int>)0x0;
  FSharedRecursiveMutex::Lock(&local_408);
  local_328 = &local_408;
  local_310 = 0;
  local_320.OwnedMutex = (FSharedRecursiveMutex *)0x0;
  local_320.Next = (FSharedRecursiveMutexLink *)0x0;
  local_310 = FSharedRecursiveMutex::TryLockShared(&local_408,&local_320);
  if ((bool)local_310) {
    FSharedRecursiveMutex::UnlockShared(local_328,&local_320);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1f0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1f0,0);
    if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    }
  }
  FSharedRecursiveMutex::Unlock(&local_408);
  bVar3 = FSharedRecursiveMutex::TryLock(&local_408);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1e0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1e0,0);
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
  }
  FSharedRecursiveMutex::Unlock(&local_408);
  local_2a8 = &local_408;
  local_2a0.OwnedMutex = (FSharedRecursiveMutex *)0x0;
  local_2a0.Next = (FSharedRecursiveMutexLink *)0x0;
  FSharedRecursiveMutex::LockShared(&local_408,&local_2a0);
  local_2c0 = &local_408;
  local_2b8.OwnedMutex = (FSharedRecursiveMutex *)0x0;
  local_2b8.Next = (FSharedRecursiveMutexLink *)0x0;
  FSharedRecursiveMutex::LockShared(&local_408,&local_2b8);
  local_2d8 = &local_408;
  local_2d0.OwnedMutex = (FSharedRecursiveMutex *)0x0;
  local_2d0.Next = (FSharedRecursiveMutexLink *)0x0;
  FSharedRecursiveMutex::LockShared(&local_408,&local_2d0);
  bVar3 = FSharedRecursiveMutex::TryLock(&local_408);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1d0,0);
    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
    }
  }
  FSharedRecursiveMutex::UnlockShared(local_2d8,&local_2d0);
  FSharedRecursiveMutex::UnlockShared(local_2c0,&local_2b8);
  FSharedRecursiveMutex::UnlockShared(local_2a8,&local_2a0);
  local_330 = 0;
  local_348 = &local_408;
  local_390 = '\0';
  local_3a8 = &local_408;
  local_3b0 = '\0';
  local_3c8 = &local_408;
  local_340.OwnedMutex = (FSharedRecursiveMutex *)0x0;
  local_340.Next = (FSharedRecursiveMutexLink *)0x0;
  local_3a0.OwnedMutex = (FSharedRecursiveMutex *)0x0;
  local_3a0.Next = (FSharedRecursiveMutexLink *)0x0;
  local_3c0.OwnedMutex = (FSharedRecursiveMutex *)0x0;
  local_3c0.Next = (FSharedRecursiveMutexLink *)0x0;
  local_330 = FSharedRecursiveMutex::TryLockShared(&local_408,&local_340);
  if (!(bool)local_330) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1c0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1c0,0);
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
  }
  if (local_390 != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xaa,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_3a8 == (FSharedRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xab,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_390 = FSharedRecursiveMutex::TryLockShared(local_3a8,&local_3a0);
  if (!(bool)local_390) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1b0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1b0,0);
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
  }
  if (local_3b0 != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xaa,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_3c8 == (FSharedRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedRecursiveMutex.h"
                       ,0xab,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_3b0 = FSharedRecursiveMutex::TryLockShared(local_3c8,&local_3c0);
  if (!(bool)local_3b0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1a0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1a0,0);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = FSharedRecursiveMutex::TryLock(&local_408);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_140,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_140,0);
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
  }
  if (local_3b0 != '\0') {
    FSharedRecursiveMutex::UnlockShared(local_3c8,&local_3c0);
  }
  if (local_390 != '\0') {
    FSharedRecursiveMutex::UnlockShared(local_3a8,&local_3a0);
  }
  if (local_330 != '\0') {
    FSharedRecursiveMutex::UnlockShared(local_348,&local_340);
  }
  bVar3 = FSharedRecursiveMutex::TryLock(&local_408);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_150,L"Condition failed");
    (*pcVar2)(pFVar1,&local_150,0);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = FSharedRecursiveMutex::TryLock(&local_408);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_160,L"Condition failed");
    (*pcVar2)(pFVar1,&local_160,0);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
  }
  FSharedRecursiveMutex::Unlock(&local_408);
  FSharedRecursiveMutex::Unlock(&local_408);
  FSharedRecursiveMutex::Lock(&local_408);
  FSharedRecursiveMutex::Lock(&local_408);
  FSharedRecursiveMutex::Unlock(&local_408);
  FSharedRecursiveMutex::Unlock(&local_408);
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_170,L"MultipleThreads");
  (*pcVar2)(pFVar1,&local_170,0);
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  local_3e8[0] = &local_400;
  local_3f8 = 0;
  local_290 = (code *)&local_3f8;
  local_3fc = 0;
  pcStack_288 = (code *)&local_3fc;
  local_400 = 0;
  local_280 = (code *)&local_3f0;
  local_3f0 = 0;
  ppuStack_278 = local_3e8;
  local_270 = (code *)&local_400;
  uStack_264 = local_3d8._12_4_;
  local_3ec = 0;
  local_388 = 0xffffffffffffffff;
  uStack_380._0_2_ = 0;
  uStack_380._2_6_ = 0;
  uStack_268 = 0;
  local_d8[0] = (code *)0x0;
  local_b0 = FMemory::Malloc(0x38,8);
  *local_b0 = (code *)&Core::Private::Function::
                       TFunction_OwnedObject<`UE::FSharedRecursiveMutexTest::TestBody'::`33'::<lambda_3>,1,1>
                       ::_vftable_;
  local_b0[1] = local_290;
  local_b0[2] = pcStack_288;
  local_b0[3] = local_280;
  local_b0[4] = (code *)ppuStack_278;
  local_b0[5] = local_270;
  local_b0[6] = (code *)CONCAT44(uStack_264,uStack_268);
  if (local_b0 + 1 != (code **)0x0) {
    local_d8[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::FSharedRecursiveMutexTest::TestBody'::__l33::<lambda_3>,void>
                  ::Call;
  }
  local_108.ThreadAffinityMask = local_388;
  local_108.ProcessorGroup = (ushort)uStack_380;
  local_108._10_6_ = uStack_380._2_6_;
  ::FThread::FThread(&local_180,L"SharedMutexTest0",(TUniqueFunction<void___cdecl(void)> *)local_d8,
                     0,TPri_Normal,&local_108,NonForkable);
  if (local_d8[0] != (code *)0x0) {
    ppcVar5 = local_d8 + 2;
    if (local_b0 != (code **)0x0) {
      ppcVar5 = local_b0;
    }
    (**(code **)(*ppcVar5 + 0x10))();
  }
  local_260 = (code *)&local_3f8;
  uStack_238 = 1;
  pcStack_258 = (code *)&local_3fc;
  local_378 = 0xffffffffffffffff;
  local_250 = (code *)&local_3f0;
  uStack_370._0_2_ = 0;
  uStack_370._2_6_ = 0;
  ppuStack_248 = local_3e8;
  local_a8[0] = (code *)0x0;
  local_240 = (code *)&local_400;
  uStack_234 = local_3d8._12_4_;
  local_80 = FMemory::Malloc(0x38,8);
  *local_80 = (code *)&Core::Private::Function::
                       TFunction_OwnedObject<`UE::FSharedRecursiveMutexTest::TestBody'::`33'::<lambda_4>,1,1>
                       ::_vftable_;
  local_80[1] = local_260;
  local_80[2] = pcStack_258;
  local_80[3] = local_250;
  local_80[4] = (code *)ppuStack_248;
  local_80[5] = local_240;
  local_80[6] = (code *)CONCAT44(uStack_234,uStack_238);
  if (local_80 + 1 != (code **)0x0) {
    local_a8[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::FSharedRecursiveMutexTest::TestBody'::__l33::<lambda_4>,void>
                  ::Call;
  }
  local_f8.ThreadAffinityMask = local_378;
  local_f8.ProcessorGroup = (ushort)uStack_370;
  local_f8._10_6_ = uStack_370._2_6_;
  ::FThread::FThread(&local_190,L"SharedMutexTest1",(TUniqueFunction<void___cdecl(void)> *)local_a8,
                     0,TPri_Normal,&local_f8,NonForkable);
  if (local_a8[0] != (code *)0x0) {
    ppcVar5 = local_a8 + 2;
    if (local_80 != (code **)0x0) {
      ppcVar5 = local_80;
    }
    (**(code **)(*ppcVar5 + 0x10))();
  }
  local_308 = (code *)&local_3f8;
  uStack_2e0 = 2;
  pcStack_300 = (code *)&local_3fc;
  local_368 = 0xffffffffffffffff;
  local_2f8 = (code *)&local_3f0;
  uStack_360._0_2_ = 0;
  uStack_360._2_6_ = 0;
  ppuStack_2f0 = local_3e8;
  local_78[0] = (code *)0x0;
  local_2e8 = (code *)&local_400;
  uStack_2dc = local_3d8._12_4_;
  local_50 = FMemory::Malloc(0x38,8);
  *local_50 = (code *)&Core::Private::Function::
                       TFunction_OwnedObject<`UE::FSharedRecursiveMutexTest::TestBody'::`33'::<lambda_5>,1,1>
                       ::_vftable_;
  local_50[1] = local_308;
  local_50[2] = pcStack_300;
  local_50[3] = local_2f8;
  local_50[4] = (code *)ppuStack_2f0;
  local_50[5] = local_2e8;
  local_50[6] = (code *)CONCAT44(uStack_2dc,uStack_2e0);
  if (local_50 + 1 != (code **)0x0) {
    local_78[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::FSharedRecursiveMutexTest::TestBody'::__l33::<lambda_5>,void>
                  ::Call;
  }
  local_e8.ThreadAffinityMask = local_368;
  local_e8.ProcessorGroup = (ushort)uStack_360;
  local_e8._10_6_ = uStack_360._2_6_;
  ::FThread::FThread(&local_130,L"SharedMutexTest2",(TUniqueFunction<void___cdecl(void)> *)local_78,
                     0,TPri_Normal,&local_e8,NonForkable);
  if (local_78[0] != (code *)0x0) {
    ppcVar5 = local_78 + 2;
    if (local_50 != (code **)0x0) {
      ppcVar5 = local_50;
    }
    (**(code **)(*ppcVar5 + 0x10))();
  }
  local_230 = (code *)&local_3f8;
  uStack_208 = 3;
  pcStack_228 = (code *)&local_3fc;
  local_358 = 0xffffffffffffffff;
  local_220 = (code *)&local_3f0;
  uStack_350._0_2_ = 0;
  uStack_350._2_6_ = 0;
  ppuStack_218 = local_3e8;
  local_48[0] = (code *)0x0;
  local_210 = (code *)&local_400;
  uStack_204 = local_3d8._12_4_;
  local_20 = FMemory::Malloc(0x38,8);
  *local_20 = (code *)&Core::Private::Function::
                       TFunction_OwnedObject<`UE::FSharedRecursiveMutexTest::TestBody'::`33'::<lambda_6>,1,1>
                       ::_vftable_;
  local_20[1] = local_230;
  local_20[2] = pcStack_228;
  local_20[3] = local_220;
  local_20[4] = (code *)ppuStack_218;
  local_20[5] = local_210;
  local_20[6] = (code *)CONCAT44(uStack_204,uStack_208);
  if (local_20 + 1 != (code **)0x0) {
    local_48[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::FSharedRecursiveMutexTest::TestBody'::__l33::<lambda_6>,void>
                  ::Call;
  }
  local_3d8.ThreadAffinityMask = local_358;
  local_3d8.ProcessorGroup = (ushort)uStack_350;
  local_3d8._10_6_ = uStack_350._2_6_;
  ::FThread::FThread(&local_120,L"SharedMutexTest3",(TUniqueFunction<void___cdecl(void)> *)local_48,
                     0,TPri_Normal,&local_3d8,NonForkable);
  if (local_48[0] != (code *)0x0) {
    ppcVar5 = local_48 + 2;
    if (local_20 != (code **)0x0) {
      ppcVar5 = local_20;
    }
    (**(code **)(*ppcVar5 + 0x10))();
  }
  ::FThread::Join(&local_180);
  ::FThread::Join(&local_190);
  ::FThread::Join(&local_130);
  ::FThread::Join(&local_120);
  ::FThread::~FThread(&local_120);
  ::FThread::~FThread(&local_130);
  ::FThread::~FThread(&local_190);
  ::FThread::~FThread(&local_180);
  return;
}

