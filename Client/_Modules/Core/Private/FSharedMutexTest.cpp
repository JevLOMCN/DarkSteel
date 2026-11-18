// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 14

// GetTestFlags @ 141ac8800

EAutomationTestFlags __thiscall UE::FSharedMutexTest::GetTestFlags(FSharedMutexTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ac8810

bool __thiscall UE::FSharedMutexTest::IsStressTest(FSharedMutexTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ac8820

uint __thiscall UE::FSharedMutexTest::GetRequiredDeviceNum(FSharedMutexTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ac8830

FString * __thiscall
UE::FSharedMutexTest::GetTestSourceFileName(FSharedMutexTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\SharedMutexTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ac8860

int __thiscall UE::FSharedMutexTest::GetTestSourceFileLine(FSharedMutexTest *this)

{
  return 0x11;
}

// GetTests @ 141ac8870

/* WARNING: Removing unreachable block (ram,0x000141ac89ee) */

void __thiscall
UE::FSharedMutexTest::GetTests
          (FSharedMutexTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ac8a10

bool __thiscall UE::FSharedMutexTest::RunTest(FSharedMutexTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ac8a40

FString * __thiscall
UE::FSharedMutexTest::GetBeautifiedTestName(FSharedMutexTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FSharedMutexTest @ 141b26a40

FSharedMutexTest * __thiscall
UE::FSharedMutexTest::FSharedMutexTest(FSharedMutexTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FSharedMutexTest_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][Async]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"Core::Async::SharedMutex");
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

// operator() @ 141b31dd0

void __thiscall `UE::FSharedMutexTest::TestBody'::__l30::<lambda_3>::operator()(void *this)

{
  byte bVar1;
  FSharedMutex FVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned_int> *paVar4;
  FAutomationTestBase *pFVar5;
  code *pcVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  FAutomationTestFramework *pFVar9;
  longlong lVar10;
  FString local_28;
  
  paVar4 = *(atomic<unsigned_int> **)this;
  LOCK();
  FVar2.State = *paVar4;
  if (FVar2.State == (atomic<unsigned_int>)0x0) {
    *paVar4 = (atomic<unsigned_int>)0x1;
  }
  UNLOCK();
  if (FVar2.State != (atomic<unsigned_int>)0x0) {
    UE::FSharedMutex::LockSlow((FSharedMutex *)paVar4);
  }
  lVar10 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar8 = (byte *)(lVar10 + 1);
  bVar1 = *pbVar8;
  *pbVar8 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar10 + 1));
  }
  FWindowsPlatformProcess::YieldThread();
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar8 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar8 = *pbVar8 & 0xfe;
  UNLOCK();
  **(undefined4 **)((longlong)this + 8) = 1;
  paVar4 = *(atomic<unsigned_int> **)this;
  LOCK();
  aVar3 = *paVar4;
  *paVar4 = (atomic<unsigned_int>)((int)*paVar4 + -1);
  UNLOCK();
  if (((uint)aVar3 & 6) != 0) {
    UE::FSharedMutex::WakeWaitingThreads((FSharedMutex *)paVar4,(uint)aVar3);
  }
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar8 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar8 = *pbVar8 & 0xfe;
  UNLOCK();
  lVar10 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar8 = (byte *)(lVar10 + 2);
  bVar1 = *pbVar8;
  *pbVar8 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar10 + 2));
  }
  FWindowsPlatformProcess::YieldThread();
  paVar4 = *(atomic<unsigned_int> **)this;
  FVar2.State = *paVar4;
  if (((uint)FVar2.State & 3) == 0) {
    LOCK();
    aVar3 = *paVar4;
    if (FVar2.State == aVar3) {
      *paVar4 = FVar2.State + 8;
    }
    UNLOCK();
    if (FVar2.State != aVar3) goto LAB_141b31e95;
  }
  else {
LAB_141b31e95:
    UE::FSharedMutex::LockSharedSlow((FSharedMutex *)paVar4);
  }
  if (**(int **)((longlong)this + 8) != 2) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar5 = pFVar9->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_28,L"Condition failed");
    (*pcVar6)(pFVar5,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  lVar10 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar8 = (byte *)(lVar10 + 1);
  bVar1 = *pbVar8;
  *pbVar8 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar10 + 1));
  }
  FWindowsPlatformProcess::YieldThread();
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar8 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar8 = *pbVar8 & 0xfe;
  UNLOCK();
  **(undefined4 **)((longlong)this + 8) = 3;
  paVar4 = *(atomic<unsigned_int> **)this;
  LOCK();
  aVar3 = *paVar4;
  *paVar4 = (atomic<unsigned_int>)((int)*paVar4 + -8);
  UNLOCK();
  if (((uint)aVar3 & 0xfffffffb) == 10) {
    UE::FSharedMutex::WakeWaitingThread((FSharedMutex *)paVar4);
  }
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar8 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar8 = *pbVar8 & 0xfe;
  UNLOCK();
  lVar10 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar8 = (byte *)(lVar10 + 1);
  bVar1 = *pbVar8;
  *pbVar8 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar10 + 1));
  }
  FWindowsPlatformProcess::YieldThread();
  paVar4 = *(atomic<unsigned_int> **)this;
  FVar2.State = *paVar4;
  if (((uint)FVar2.State & 3) == 0) {
    LOCK();
    aVar3 = *paVar4;
    if (FVar2.State == aVar3) {
      *paVar4 = FVar2.State + 8;
    }
    UNLOCK();
    if (FVar2.State != aVar3) goto LAB_141b31f91;
  }
  else {
LAB_141b31f91:
    UE::FSharedMutex::LockSharedSlow((FSharedMutex *)paVar4);
  }
  if (**(int **)((longlong)this + 8) != 4) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar5 = pFVar9->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_28,L"Condition failed");
    (*pcVar6)(pFVar5,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar8 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar8 = *pbVar8 & 0xfe;
  UNLOCK();
  paVar4 = *(atomic<unsigned_int> **)this;
  LOCK();
  aVar3 = *paVar4;
  *paVar4 = (atomic<unsigned_int>)((int)*paVar4 + -8);
  UNLOCK();
  if (((uint)aVar3 & 0xfffffffb) == 10) {
    UE::FSharedMutex::WakeWaitingThread((FSharedMutex *)paVar4);
  }
  puVar7 = *(undefined4 **)((longlong)this + 0x10);
  *puVar7 = 3;
  LOCK();
  pbVar8 = (byte *)(puVar7 + 1);
  *pbVar8 = *pbVar8 & 0xfe;
  UNLOCK();
  lVar10 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar8 = (byte *)(lVar10 + 1);
  bVar1 = *pbVar8;
  *pbVar8 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar10 + 1));
  }
  FWindowsPlatformProcess::YieldThread();
  lVar10 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar8 = (byte *)(lVar10 + 2);
  bVar1 = *pbVar8;
  *pbVar8 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar10 + 2));
  }
  FWindowsPlatformProcess::YieldThread();
  lVar10 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar8 = (byte *)(lVar10 + 3);
  bVar1 = *pbVar8;
  *pbVar8 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar10 + 3));
  }
  FWindowsPlatformProcess::YieldThread();
  lVar10 = 0x4000;
  do {
    paVar4 = *(atomic<unsigned_int> **)this;
    FVar2.State = *paVar4;
    if (((uint)FVar2.State & 3) == 0) {
      LOCK();
      aVar3 = *paVar4;
      if (FVar2.State == aVar3) {
        *paVar4 = FVar2.State + 8;
      }
      UNLOCK();
      if (FVar2.State != aVar3) goto LAB_141b32099;
    }
    else {
LAB_141b32099:
      UE::FSharedMutex::LockSharedSlow((FSharedMutex *)paVar4);
    }
    FWindowsPlatformProcess::YieldThread();
    paVar4 = *(atomic<unsigned_int> **)this;
    LOCK();
    aVar3 = *paVar4;
    *paVar4 = (atomic<unsigned_int>)((int)*paVar4 + -8);
    UNLOCK();
    if (((uint)aVar3 & 0xfffffffb) == 10) {
      UE::FSharedMutex::WakeWaitingThread((FSharedMutex *)paVar4);
    }
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  UE::FManualResetEvent::Wait((FManualResetEvent *)(*(longlong *)((longlong)this + 0x10) + 4));
  if (GIsBuildMachine != false) {
    return;
  }
  paVar4 = *(atomic<unsigned_int> **)this;
  FVar2.State = *paVar4;
  if (((uint)FVar2.State & 3) == 0) {
    LOCK();
    aVar3 = *paVar4;
    if (FVar2.State == aVar3) {
      *paVar4 = FVar2.State + 8;
    }
    UNLOCK();
    if (FVar2.State == aVar3) goto LAB_141b320f1;
  }
  UE::FSharedMutex::LockSharedSlow((FSharedMutex *)paVar4);
LAB_141b320f1:
  **(undefined4 **)((longlong)this + 8) = 5;
  lVar10 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar8 = (byte *)(lVar10 + 1);
  bVar1 = *pbVar8;
  *pbVar8 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar10 + 1));
  }
  FWindowsPlatformProcess::YieldThread();
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar8 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar8 = *pbVar8 & 0xfe;
  UNLOCK();
  paVar4 = *(atomic<unsigned_int> **)this;
  LOCK();
  aVar3 = *paVar4;
  *paVar4 = (atomic<unsigned_int>)((int)*paVar4 + -8);
  UNLOCK();
  if (((uint)aVar3 & 0xfffffffb) == 10) {
    UE::FSharedMutex::WakeWaitingThread((FSharedMutex *)paVar4);
  }
  return;
}

// operator() @ 141b33850

void __thiscall `UE::FSharedMutexTest::TestBody'::__l30::<lambda_4>::operator()(void *this)

{
  byte bVar1;
  FSharedMutex FVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  atomic<unsigned_int> *paVar5;
  FAutomationTestBase *pFVar6;
  code *pcVar7;
  int *piVar8;
  byte *pbVar9;
  FAutomationTestFramework *pFVar10;
  longlong lVar11;
  FString local_28;
  
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  lVar11 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar9 = (byte *)(lVar11 + 2);
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar11 + 2));
  }
  FWindowsPlatformProcess::YieldThread();
  paVar5 = *(atomic<unsigned_int> **)this;
  LOCK();
  FVar2.State = *paVar5;
  if (FVar2.State == (atomic<unsigned_int>)0x0) {
    *paVar5 = (atomic<unsigned_int>)0x1;
  }
  UNLOCK();
  if (FVar2.State != (atomic<unsigned_int>)0x0) {
    UE::FSharedMutex::LockSlow((FSharedMutex *)paVar5);
  }
  if (**(int **)((longlong)this + 8) != 1) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar6 = pFVar10->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_28,L"Condition failed");
    (*pcVar7)(pFVar6,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pbVar9 = (byte *)**(undefined8 **)((longlong)this + 0x18);
  LOCK();
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll(pbVar9);
  }
  FWindowsPlatformProcess::YieldThread();
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  **(undefined4 **)((longlong)this + 8) = 2;
  paVar5 = *(atomic<unsigned_int> **)this;
  LOCK();
  aVar3 = *paVar5;
  *paVar5 = (atomic<unsigned_int>)((int)*paVar5 + -1);
  UNLOCK();
  if (((uint)aVar3 & 6) != 0) {
    UE::FSharedMutex::WakeWaitingThreads((FSharedMutex *)paVar5,(uint)aVar3);
  }
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  lVar11 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar9 = (byte *)(lVar11 + 2);
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar11 + 2));
  }
  FWindowsPlatformProcess::YieldThread();
  paVar5 = *(atomic<unsigned_int> **)this;
  LOCK();
  FVar2.State = *paVar5;
  if (FVar2.State == (atomic<unsigned_int>)0x0) {
    *paVar5 = (atomic<unsigned_int>)0x1;
  }
  UNLOCK();
  if (FVar2.State != (atomic<unsigned_int>)0x0) {
    UE::FSharedMutex::LockSlow((FSharedMutex *)paVar5);
  }
  if (**(int **)((longlong)this + 8) != 3) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar6 = pFVar10->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_28,L"Condition failed");
    (*pcVar7)(pFVar6,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  lVar11 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar9 = (byte *)(lVar11 + 2);
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar11 + 2));
  }
  FWindowsPlatformProcess::YieldThread();
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  **(undefined4 **)((longlong)this + 8) = 4;
  paVar5 = *(atomic<unsigned_int> **)this;
  LOCK();
  aVar3 = *paVar5;
  *paVar5 = (atomic<unsigned_int>)((int)*paVar5 + -1);
  UNLOCK();
  if (((uint)aVar3 & 6) != 0) {
    UE::FSharedMutex::WakeWaitingThreads((FSharedMutex *)paVar5,(uint)aVar3);
  }
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  lVar11 = 0x4000;
  do {
    paVar5 = *(atomic<unsigned_int> **)this;
    FVar2.State = *paVar5;
    if (((uint)FVar2.State & 3) == 0) {
      LOCK();
      aVar3 = *paVar5;
      if (FVar2.State == aVar3) {
        *paVar5 = FVar2.State + 8;
      }
      UNLOCK();
      if (FVar2.State != aVar3) goto LAB_141b33a72;
    }
    else {
LAB_141b33a72:
      UE::FSharedMutex::LockSharedSlow((FSharedMutex *)paVar5);
    }
    FWindowsPlatformProcess::YieldThread();
    paVar5 = *(atomic<unsigned_int> **)this;
    LOCK();
    aVar3 = *paVar5;
    *paVar5 = (atomic<unsigned_int>)((int)*paVar5 + -8);
    UNLOCK();
    if (((uint)aVar3 & 0xfffffffb) == 10) {
      UE::FSharedMutex::WakeWaitingThread((FSharedMutex *)paVar5);
    }
    lVar11 = lVar11 + -1;
    if (lVar11 == 0) {
      piVar8 = *(int **)((longlong)this + 0x10);
      LOCK();
      iVar4 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pbVar9 = (byte *)(piVar8 + 1);
        LOCK();
        bVar1 = *pbVar9;
        *pbVar9 = 1;
        UNLOCK();
        if ((bVar1 & 3) == 2) {
          UE::ParkingLot::WakeAll(pbVar9);
        }
      }
      if (GIsBuildMachine == false) {
        UE::FManualResetEvent::Wait
                  ((FManualResetEvent *)
                   ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   ));
        pbVar9 = (byte *)((longlong)*(int *)((longlong)this + 0x28) +
                         *(longlong *)((longlong)this + 0x20));
        LOCK();
        *pbVar9 = *pbVar9 & 0xfe;
        UNLOCK();
        lVar11 = **(longlong **)((longlong)this + 0x18);
        LOCK();
        pbVar9 = (byte *)(lVar11 + 2);
        bVar1 = *pbVar9;
        *pbVar9 = 1;
        UNLOCK();
        if ((bVar1 & 3) == 2) {
          UE::ParkingLot::WakeAll((void *)(lVar11 + 2));
        }
        FWindowsPlatformProcess::YieldThread();
        paVar5 = *(atomic<unsigned_int> **)this;
        LOCK();
        FVar2.State = *paVar5;
        if (FVar2.State == (atomic<unsigned_int>)0x0) {
          *paVar5 = (atomic<unsigned_int>)0x1;
        }
        UNLOCK();
        if (FVar2.State != (atomic<unsigned_int>)0x0) {
          UE::FSharedMutex::LockSlow((FSharedMutex *)paVar5);
        }
        if (**(int **)((longlong)this + 8) != 5) {
          pFVar10 = FAutomationTestFramework::Get();
          pFVar6 = pFVar10->CurrentTest;
          pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
          ::FString::FString(&local_28,L"Condition failed");
          (*pcVar7)(pFVar6,&local_28,0);
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
        }
        **(undefined4 **)((longlong)this + 8) = 6;
        paVar5 = *(atomic<unsigned_int> **)this;
        LOCK();
        aVar3 = *paVar5;
        *paVar5 = (atomic<unsigned_int>)((int)*paVar5 + -1);
        UNLOCK();
        if (((uint)aVar3 & 6) != 0) {
          UE::FSharedMutex::WakeWaitingThreads((FSharedMutex *)paVar5,(uint)aVar3);
        }
      }
      return;
    }
  } while( true );
}

// operator() @ 141b34240

void __thiscall `UE::FSharedMutexTest::TestBody'::__l30::<lambda_5>::operator()(void *this)

{
  byte bVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  FSharedMutex FVar4;
  atomic<unsigned_int> *paVar5;
  FAutomationTestBase *pFVar6;
  code *pcVar7;
  int *piVar8;
  byte *pbVar9;
  FAutomationTestFramework *pFVar10;
  longlong lVar11;
  FString local_28;
  
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  pbVar9 = (byte *)**(undefined8 **)((longlong)this + 0x18);
  LOCK();
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll(pbVar9);
  }
  FWindowsPlatformProcess::YieldThread();
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  lVar11 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar9 = (byte *)(lVar11 + 1);
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar11 + 1));
  }
  FWindowsPlatformProcess::YieldThread();
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  pbVar9 = (byte *)**(undefined8 **)((longlong)this + 0x18);
  LOCK();
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll(pbVar9);
  }
  FWindowsPlatformProcess::YieldThread();
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  lVar11 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar9 = (byte *)(lVar11 + 3);
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar11 + 3));
  }
  FWindowsPlatformProcess::YieldThread();
  paVar5 = *(atomic<unsigned_int> **)this;
  FVar4.State = *paVar5;
  if (((uint)FVar4.State & 3) == 0) {
    LOCK();
    aVar2 = *paVar5;
    if (FVar4.State == aVar2) {
      *paVar5 = FVar4.State + 8;
    }
    UNLOCK();
    if (FVar4.State != aVar2) goto LAB_141b34345;
  }
  else {
LAB_141b34345:
    UE::FSharedMutex::LockSharedSlow((FSharedMutex *)paVar5);
  }
  if (**(int **)((longlong)this + 8) != 4) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar6 = pFVar10->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_28,L"Condition failed");
    (*pcVar7)(pFVar6,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  lVar11 = **(longlong **)((longlong)this + 0x18);
  LOCK();
  pbVar9 = (byte *)(lVar11 + 3);
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar11 + 3));
  }
  FWindowsPlatformProcess::YieldThread();
  paVar5 = *(atomic<unsigned_int> **)this;
  LOCK();
  aVar2 = *paVar5;
  *paVar5 = (atomic<unsigned_int>)((int)*paVar5 + -8);
  UNLOCK();
  if (((uint)aVar2 & 0xfffffffb) == 10) {
    UE::FSharedMutex::WakeWaitingThread((FSharedMutex *)paVar5);
  }
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  lVar11 = 0x4000;
  do {
    paVar5 = *(atomic<unsigned_int> **)this;
    FVar4.State = *paVar5;
    if (((uint)FVar4.State & 3) == 0) {
      LOCK();
      aVar2 = *paVar5;
      if (FVar4.State == aVar2) {
        *paVar5 = FVar4.State + 8;
      }
      UNLOCK();
      if (FVar4.State != aVar2) goto LAB_141b34404;
    }
    else {
LAB_141b34404:
      UE::FSharedMutex::LockSharedSlow((FSharedMutex *)paVar5);
    }
    FWindowsPlatformProcess::YieldThread();
    paVar5 = *(atomic<unsigned_int> **)this;
    LOCK();
    aVar2 = *paVar5;
    *paVar5 = (atomic<unsigned_int>)((int)*paVar5 + -8);
    UNLOCK();
    if (((uint)aVar2 & 0xfffffffb) == 10) {
      UE::FSharedMutex::WakeWaitingThread((FSharedMutex *)paVar5);
    }
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  piVar8 = *(int **)((longlong)this + 0x10);
  LOCK();
  iVar3 = *piVar8;
  *piVar8 = *piVar8 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    pbVar9 = (byte *)(piVar8 + 1);
    LOCK();
    bVar1 = *pbVar9;
    *pbVar9 = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar9);
    }
  }
  if (GIsBuildMachine != false) {
    return;
  }
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  FWindowsPlatformProcess::Sleep(__real_3a83126f);
  pbVar9 = (byte *)**(undefined8 **)((longlong)this + 0x18);
  LOCK();
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll(pbVar9);
  }
  FWindowsPlatformProcess::YieldThread();
  paVar5 = *(atomic<unsigned_int> **)this;
  FVar4.State = *paVar5;
  if (((uint)FVar4.State & 3) == 0) {
    LOCK();
    aVar2 = *paVar5;
    if (FVar4.State == aVar2) {
      *paVar5 = FVar4.State + 8;
    }
    UNLOCK();
    if (FVar4.State == aVar2) goto LAB_141b344b7;
  }
  UE::FSharedMutex::LockSharedSlow((FSharedMutex *)paVar5);
LAB_141b344b7:
  if (**(int **)((longlong)this + 8) != 6) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar6 = pFVar10->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_28,L"Condition failed");
    (*pcVar7)(pFVar6,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  paVar5 = *(atomic<unsigned_int> **)this;
  LOCK();
  aVar2 = *paVar5;
  *paVar5 = (atomic<unsigned_int>)((int)*paVar5 + -8);
  UNLOCK();
  if (((uint)aVar2 & 0xfffffffb) == 10) {
    UE::FSharedMutex::WakeWaitingThread((FSharedMutex *)paVar5);
  }
  return;
}

// operator() @ 141b34d00

void __thiscall `UE::FSharedMutexTest::TestBody'::__l30::<lambda_6>::operator()(void *this)

{
  byte bVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  FSharedMutex FVar4;
  atomic<unsigned_int> *paVar5;
  FAutomationTestBase *pFVar6;
  code *pcVar7;
  int *piVar8;
  byte *pbVar9;
  FAutomationTestFramework *pFVar10;
  longlong lVar11;
  FString local_18;
  
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  pbVar9 = (byte *)**(undefined8 **)((longlong)this + 0x18);
  LOCK();
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll(pbVar9);
  }
  FWindowsPlatformProcess::YieldThread();
  paVar5 = *(atomic<unsigned_int> **)this;
  FVar4.State = *paVar5;
  if (((uint)FVar4.State & 3) == 0) {
    LOCK();
    aVar2 = *paVar5;
    if (FVar4.State == aVar2) {
      *paVar5 = FVar4.State + 8;
    }
    UNLOCK();
    if (FVar4.State == aVar2) goto LAB_141b34d63;
  }
  UE::FSharedMutex::LockSharedSlow((FSharedMutex *)paVar5);
LAB_141b34d63:
  if (**(int **)((longlong)this + 8) != 4) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar6 = pFVar10->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_18,L"Condition failed");
    (*pcVar7)(pFVar6,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  pbVar9 = (byte *)**(undefined8 **)((longlong)this + 0x18);
  LOCK();
  bVar1 = *pbVar9;
  *pbVar9 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll(pbVar9);
  }
  FWindowsPlatformProcess::YieldThread();
  paVar5 = *(atomic<unsigned_int> **)this;
  LOCK();
  aVar2 = *paVar5;
  *paVar5 = (atomic<unsigned_int>)((int)*paVar5 + -8);
  UNLOCK();
  if (((uint)aVar2 & 0xfffffffb) == 10) {
    UE::FSharedMutex::WakeWaitingThread((FSharedMutex *)paVar5);
  }
  UE::FManualResetEvent::Wait
            ((FManualResetEvent *)
             ((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)));
  pbVar9 = (byte *)((longlong)*(int *)((longlong)this + 0x28) + *(longlong *)((longlong)this + 0x20)
                   );
  LOCK();
  *pbVar9 = *pbVar9 & 0xfe;
  UNLOCK();
  lVar11 = 0x4000;
  do {
    paVar5 = *(atomic<unsigned_int> **)this;
    FVar4.State = *paVar5;
    if (((uint)FVar4.State & 3) == 0) {
      LOCK();
      aVar2 = *paVar5;
      if (FVar4.State == aVar2) {
        *paVar5 = FVar4.State + 8;
      }
      UNLOCK();
      if (FVar4.State != aVar2) goto LAB_141b34e33;
    }
    else {
LAB_141b34e33:
      UE::FSharedMutex::LockSharedSlow((FSharedMutex *)paVar5);
    }
    FWindowsPlatformProcess::YieldThread();
    paVar5 = *(atomic<unsigned_int> **)this;
    LOCK();
    aVar2 = *paVar5;
    *paVar5 = (atomic<unsigned_int>)((int)*paVar5 + -8);
    UNLOCK();
    if (((uint)aVar2 & 0xfffffffb) == 10) {
      UE::FSharedMutex::WakeWaitingThread((FSharedMutex *)paVar5);
    }
    lVar11 = lVar11 + -1;
    if (lVar11 == 0) {
      piVar8 = *(int **)((longlong)this + 0x10);
      LOCK();
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        LOCK();
        bVar1 = *(byte *)(piVar8 + 1);
        *(byte *)(piVar8 + 1) = 1;
        UNLOCK();
        if ((bVar1 & 3) == 2) {
          UE::ParkingLot::WakeAll(piVar8 + 1);
          return;
        }
      }
      return;
    }
  } while( true );
}

// TestBody @ 141b9b790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141b9b814) */
/* WARNING: Removing unreachable block (ram,0x000141b9b81c) */
/* WARNING: Removing unreachable block (ram,0x000141b9b8c8) */
/* WARNING: Removing unreachable block (ram,0x000141b9b935) */
/* WARNING: Removing unreachable block (ram,0x000141b9b952) */
/* WARNING: Removing unreachable block (ram,0x000141b9b96f) */
/* WARNING: Removing unreachable block (ram,0x000141b9b991) */
/* WARNING: Removing unreachable block (ram,0x000141b9bb56) */
/* WARNING: Removing unreachable block (ram,0x000141b9bc09) */
/* WARNING: Removing unreachable block (ram,0x000141b9b833) */
/* WARNING: Removing unreachable block (ram,0x000141b9b836) */
/* WARNING: Removing unreachable block (ram,0x000141b9b844) */
/* WARNING: Removing unreachable block (ram,0x000141b9b854) */
/* WARNING: Removing unreachable block (ram,0x000141b9b85e) */
/* WARNING: Removing unreachable block (ram,0x000141b9b899) */
/* WARNING: Removing unreachable block (ram,0x000141b9b83e) */
/* WARNING: Removing unreachable block (ram,0x000141b9b842) */
/* WARNING: Removing unreachable block (ram,0x000141b9b8ae) */
/* WARNING: Removing unreachable block (ram,0x000141b9b8d0) */
/* WARNING: Removing unreachable block (ram,0x000141b9b90b) */
/* WARNING: Removing unreachable block (ram,0x000141b9b920) */
/* WARNING: Removing unreachable block (ram,0x000141b9b93d) */
/* WARNING: Removing unreachable block (ram,0x000141b9b95a) */
/* WARNING: Removing unreachable block (ram,0x000141b9b977) */
/* WARNING: Removing unreachable block (ram,0x000141b9b98c) */
/* WARNING: Removing unreachable block (ram,0x000141b9b9d4) */
/* WARNING: Removing unreachable block (ram,0x000141b9b9e9) */
/* WARNING: Removing unreachable block (ram,0x000141b9ba03) */
/* WARNING: Removing unreachable block (ram,0x000141b9ba1d) */
/* WARNING: Removing unreachable block (ram,0x000141b9ba43) */
/* WARNING: Removing unreachable block (ram,0x000141b9ba81) */
/* WARNING: Removing unreachable block (ram,0x000141b9baa3) */
/* WARNING: Removing unreachable block (ram,0x000141b9bae1) */
/* WARNING: Removing unreachable block (ram,0x000141b9bb03) */
/* WARNING: Removing unreachable block (ram,0x000141b9bb41) */

void __thiscall UE::FSharedMutexTest::TestBody(FSharedMutexTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  atomic<unsigned_int> aVar3;
  FSharedMutex FVar4;
  FSharedMutex FVar5;
  FSharedMutex FVar6;
  uint uVar7;
  FAutomationTestFramework *pFVar8;
  code **ppcVar9;
  code **ppcVar10;
  bool bVar11;
  undefined1 auStackY_158 [32];
  FSharedMutex local_118 [4];
  FThreadAffinity local_108;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  code *pcStack_e8;
  code *local_e0;
  FSharedMutex **ppFStack_d8;
  FSharedMutex *local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined1 local_bc;
  FSharedMutex *local_b8;
  FThread local_b0;
  FThread local_a0;
  FThread local_90;
  FThread local_80;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  ppcVar10 = local_68 + 2;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_108,L"SingleThread");
  (*pcVar2)(pFVar1,&local_108,0);
  if ((void *)local_108.ThreadAffinityMask != (void *)0x0) {
    FMemory::Free((void *)local_108.ThreadAffinityMask);
  }
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  local_118[0].State = (atomic<unsigned_int>)0x0;
  FVar5.State = local_118[0].State;
  FVar6.State = local_118[0].State;
  do {
    local_118[0].State = FVar5.State + 8;
    LOCK();
    bVar11 = FVar5.State != FVar6.State;
    if (bVar11) {
      FVar5.State = FVar6.State;
      local_118[0].State = FVar6.State;
    }
    UNLOCK();
    FVar6.State = local_118[0].State;
    FVar4.State = local_118[0].State;
  } while (bVar11);
  do {
    local_118[0].State = FVar6.State + 8;
    LOCK();
    bVar11 = FVar6.State != FVar4.State;
    if (bVar11) {
      FVar6.State = FVar4.State;
      local_118[0].State = FVar4.State;
    }
    UNLOCK();
    FVar4.State = local_118[0].State;
    FVar5.State = local_118[0].State;
  } while (bVar11);
  do {
    local_118[0].State = FVar5.State + 8;
    LOCK();
    bVar11 = FVar5.State != FVar4.State;
    if (bVar11) {
      FVar5.State = FVar4.State;
      local_118[0].State = FVar4.State;
    }
    UNLOCK();
    FVar4.State = local_118[0].State;
  } while (bVar11);
  if (local_118[0].State == (atomic<unsigned_int>)0x0) {
    local_118[0].State = (atomic<unsigned_int>)0x1;
    LOCK();
    UNLOCK();
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_108,L"Condition expected to return false but returned true"
                      );
    (*pcVar2)(pFVar1,&local_108,0);
    if ((void *)local_108.ThreadAffinityMask != (void *)0x0) {
      FMemory::Free((void *)local_108.ThreadAffinityMask);
    }
  }
  LOCK();
  aVar3 = local_118[0].State - 8;
  UNLOCK();
  uVar7 = (uint)local_118[0].State & 0xfffffffb;
  local_118[0].State = aVar3;
  if (uVar7 == 10) {
    FSharedMutex::WakeWaitingThread(local_118);
  }
  LOCK();
  aVar3 = local_118[0].State - 8;
  UNLOCK();
  uVar7 = (uint)local_118[0].State & 0xfffffffb;
  local_118[0].State = aVar3;
  if (uVar7 == 10) {
    FSharedMutex::WakeWaitingThread(local_118);
  }
  LOCK();
  aVar3 = local_118[0].State - 8;
  UNLOCK();
  uVar7 = (uint)local_118[0].State & 0xfffffffb;
  local_118[0].State = aVar3;
  if (uVar7 == 10) {
    FSharedMutex::WakeWaitingThread(local_118);
  }
  if (((uint)local_118[0].State & 0xfffffff9) == 0) {
    local_118[0].State = local_118[0].State | 1;
    LOCK();
    UNLOCK();
  }
  else {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_108,L"Condition failed");
    (*pcVar2)(pFVar1,&local_108,0);
    if ((void *)local_108.ThreadAffinityMask != (void *)0x0) {
      FMemory::Free((void *)local_108.ThreadAffinityMask);
    }
  }
  FVar5.State = local_118[0].State;
  LOCK();
  aVar3 = local_118[0].State - 1;
  UNLOCK();
  uVar7 = (uint)local_118[0].State & 6;
  local_118[0].State = aVar3;
  if (uVar7 != 0) {
    FSharedMutex::WakeWaitingThreads(local_118,(uint)FVar5.State);
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_108,L"MultipleThreads");
  (*pcVar2)(pFVar1,&local_108,0);
  if ((void *)local_108.ThreadAffinityMask != (void *)0x0) {
    FMemory::Free((void *)local_108.ThreadAffinityMask);
  }
  local_b8 = local_118;
  local_f4 = 0;
  local_f0 = (code *)&local_f4;
  local_f8 = 0;
  pcStack_e8 = (code *)&local_f8;
  local_118[0].State = (atomic<unsigned_int>)0x0;
  local_e0 = (code *)&local_c0;
  local_c0 = 0;
  ppFStack_d8 = &local_b8;
  local_d0 = local_118;
  uStack_c4 = local_b0.Impl.SharedReferenceCount.ReferenceController._4_4_;
  local_bc = 0;
  local_108.ThreadAffinityMask = 0xffffffffffffffff;
  local_108.ProcessorGroup = 0;
  local_108._10_6_ = 0;
  uStack_c8 = 0;
  local_68[0] = (code *)0x0;
  local_40 = FMemory::Malloc(0x38,8);
  *local_40 = (code *)&Core::Private::Function::
                       TFunction_OwnedObject<`UE::FSharedMutexTest::TestBody'::`30'::<lambda_3>,1,1>
                       ::_vftable_;
  local_40[1] = local_f0;
  local_40[2] = pcStack_e8;
  local_40[3] = local_e0;
  local_40[4] = (code *)ppFStack_d8;
  local_40[5] = (code *)local_d0;
  local_40[6] = (code *)CONCAT44(uStack_c4,uStack_c8);
  if (local_40 + 1 != (code **)0x0) {
    local_68[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::FSharedMutexTest::TestBody'::__l30::<lambda_3>,void>::Call
    ;
  }
  ::FThread::FThread(&local_b0,L"SharedMutexTest0",(TUniqueFunction<void___cdecl(void)> *)local_68,0
                     ,TPri_Normal,&local_108,NonForkable);
  if (local_68[0] != (code *)0x0) {
    ppcVar9 = ppcVar10;
    if (local_40 != (code **)0x0) {
      ppcVar9 = local_40;
    }
    (**(code **)(*ppcVar9 + 0x10))();
  }
  local_f0 = (code *)&local_f4;
  uStack_c8 = 1;
  pcStack_e8 = (code *)&local_f8;
  local_108.ThreadAffinityMask = 0xffffffffffffffff;
  local_e0 = (code *)&local_c0;
  local_108.ProcessorGroup = 0;
  local_108._10_6_ = 0;
  ppFStack_d8 = &local_b8;
  local_68[0] = (code *)0x0;
  local_d0 = local_118;
  uStack_c4 = local_b0.Impl.SharedReferenceCount.ReferenceController._4_4_;
  local_40 = FMemory::Malloc(0x38,8);
  *local_40 = (code *)&Core::Private::Function::
                       TFunction_OwnedObject<`UE::FSharedMutexTest::TestBody'::`30'::<lambda_4>,1,1>
                       ::_vftable_;
  local_40[1] = local_f0;
  local_40[2] = pcStack_e8;
  local_40[3] = local_e0;
  local_40[4] = (code *)ppFStack_d8;
  local_40[5] = (code *)local_d0;
  local_40[6] = (code *)CONCAT44(uStack_c4,uStack_c8);
  if (local_40 + 1 != (code **)0x0) {
    local_68[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::FSharedMutexTest::TestBody'::__l30::<lambda_4>,void>::Call
    ;
  }
  ::FThread::FThread(&local_80,L"SharedMutexTest1",(TUniqueFunction<void___cdecl(void)> *)local_68,0
                     ,TPri_Normal,&local_108,NonForkable);
  if (local_68[0] != (code *)0x0) {
    ppcVar9 = ppcVar10;
    if (local_40 != (code **)0x0) {
      ppcVar9 = local_40;
    }
    (**(code **)(*ppcVar9 + 0x10))();
  }
  local_f0 = (code *)&local_f4;
  uStack_c8 = 2;
  pcStack_e8 = (code *)&local_f8;
  local_108.ThreadAffinityMask = 0xffffffffffffffff;
  local_e0 = (code *)&local_c0;
  local_108.ProcessorGroup = 0;
  local_108._10_6_ = 0;
  ppFStack_d8 = &local_b8;
  local_68[0] = (code *)0x0;
  local_d0 = local_118;
  uStack_c4 = local_b0.Impl.SharedReferenceCount.ReferenceController._4_4_;
  local_40 = FMemory::Malloc(0x38,8);
  *local_40 = (code *)&Core::Private::Function::
                       TFunction_OwnedObject<`UE::FSharedMutexTest::TestBody'::`30'::<lambda_5>,1,1>
                       ::_vftable_;
  local_40[1] = local_f0;
  local_40[2] = pcStack_e8;
  local_40[3] = local_e0;
  local_40[4] = (code *)ppFStack_d8;
  local_40[5] = (code *)local_d0;
  local_40[6] = (code *)CONCAT44(uStack_c4,uStack_c8);
  if (local_40 + 1 != (code **)0x0) {
    local_68[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::FSharedMutexTest::TestBody'::__l30::<lambda_5>,void>::Call
    ;
  }
  ::FThread::FThread(&local_90,L"SharedMutexTest2",(TUniqueFunction<void___cdecl(void)> *)local_68,0
                     ,TPri_Normal,&local_108,NonForkable);
  if (local_68[0] != (code *)0x0) {
    ppcVar9 = ppcVar10;
    if (local_40 != (code **)0x0) {
      ppcVar9 = local_40;
    }
    (**(code **)(*ppcVar9 + 0x10))();
  }
  local_f0 = (code *)&local_f4;
  uStack_c8 = 3;
  pcStack_e8 = (code *)&local_f8;
  local_108.ThreadAffinityMask = 0xffffffffffffffff;
  local_e0 = (code *)&local_c0;
  local_108.ProcessorGroup = 0;
  local_108._10_6_ = 0;
  ppFStack_d8 = &local_b8;
  local_68[0] = (code *)0x0;
  local_d0 = local_118;
  uStack_c4 = local_b0.Impl.SharedReferenceCount.ReferenceController._4_4_;
  local_40 = FMemory::Malloc(0x38,8);
  *local_40 = (code *)&Core::Private::Function::
                       TFunction_OwnedObject<`UE::FSharedMutexTest::TestBody'::`30'::<lambda_6>,1,1>
                       ::_vftable_;
  local_40[1] = local_f0;
  local_40[2] = pcStack_e8;
  local_40[3] = local_e0;
  local_40[4] = (code *)ppFStack_d8;
  local_40[5] = (code *)local_d0;
  local_40[6] = (code *)CONCAT44(uStack_c4,uStack_c8);
  if (local_40 + 1 != (code **)0x0) {
    local_68[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::FSharedMutexTest::TestBody'::__l30::<lambda_6>,void>::Call
    ;
  }
  ::FThread::FThread(&local_a0,L"SharedMutexTest3",(TUniqueFunction<void___cdecl(void)> *)local_68,0
                     ,TPri_Normal,&local_108,NonForkable);
  if (local_68[0] != (code *)0x0) {
    if (local_40 != (code **)0x0) {
      ppcVar10 = local_40;
    }
    (**(code **)(*ppcVar10 + 0x10))();
  }
  ::FThread::Join(&local_b0);
  ::FThread::Join(&local_80);
  ::FThread::Join(&local_90);
  ::FThread::Join(&local_a0);
  ::FThread::~FThread(&local_a0);
  ::FThread::~FThread(&local_90);
  ::FThread::~FThread(&local_80);
  ::FThread::~FThread(&local_b0);
  return;
}

