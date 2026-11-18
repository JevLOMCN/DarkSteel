// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141d58d60

EAutomationTestFlags __thiscall
UE::TasksTests::FTaskGraphBackgroundWithNormalAsPrereq::GetTestFlags
          (FTaskGraphBackgroundWithNormalAsPrereq *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141d58f10

bool __thiscall
UE::TasksTests::FTaskGraphBackgroundWithNormalAsPrereq::IsStressTest
          (FTaskGraphBackgroundWithNormalAsPrereq *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141d58f20

uint __thiscall
UE::TasksTests::FTaskGraphBackgroundWithNormalAsPrereq::GetRequiredDeviceNum
          (FTaskGraphBackgroundWithNormalAsPrereq *this)

{
  return 1;
}

// GetTestSourceFileName @ 141d58f30

FString * __thiscall
UE::TasksTests::FTaskGraphBackgroundWithNormalAsPrereq::GetTestSourceFileName
          (FTaskGraphBackgroundWithNormalAsPrereq *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141d58f60

int __thiscall
UE::TasksTests::FTaskGraphBackgroundWithNormalAsPrereq::GetTestSourceFileLine
          (FTaskGraphBackgroundWithNormalAsPrereq *this)

{
  return 0x726;
}

// GetTests @ 141d58fd0

/* WARNING: Removing unreachable block (ram,0x000141d5914e) */

void __thiscall
UE::TasksTests::FTaskGraphBackgroundWithNormalAsPrereq::GetTests
          (FTaskGraphBackgroundWithNormalAsPrereq *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141d59170

bool __thiscall
UE::TasksTests::FTaskGraphBackgroundWithNormalAsPrereq::RunTest
          (FTaskGraphBackgroundWithNormalAsPrereq *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141d591a0

FString * __thiscall
UE::TasksTests::FTaskGraphBackgroundWithNormalAsPrereq::GetBeautifiedTestName
          (FTaskGraphBackgroundWithNormalAsPrereq *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTaskGraphBackgroundWithNormalAsPrereq @ 141d69f20

FTaskGraphBackgroundWithNormalAsPrereq * __thiscall
UE::TasksTests::FTaskGraphBackgroundWithNormalAsPrereq::FTaskGraphBackgroundWithNormalAsPrereq
          (FTaskGraphBackgroundWithNormalAsPrereq *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTaskGraphBackgroundWithNormalAsPrereq_TasksTests_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Async::Tasks::BackgroundWithNormalAsPrereq");
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
  ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter]");
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

// TestBody @ 141d81120

void __thiscall
UE::TasksTests::FTaskGraphBackgroundWithNormalAsPrereq::TestBody
          (FTaskGraphBackgroundWithNormalAsPrereq *this,FString *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  FTaskBase *this_00;
  FTask *pFVar8;
  FTaskBase *this_01;
  undefined8 uVar9;
  FAutomationTestFramework *pFVar10;
  int iVar11;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  FString local_68 [3];
  
  dVar6 = __real_4024000000000000;
  iVar11 = 0;
  do {
    this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&Tasks::Private::SmallTaskAllocator);
    if (this_00 == (FTaskBase *)0x0) {
      this_00 = (FTaskBase *)0x0;
    }
    else {
      Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
      this_00->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTaskBase<`UE::TasksTests::FTaskGraphBackgroundWithNormalAsPrereq::TestBody'::`4'::<lambda_2>,void,void>
            ::_vftable_;
      if (((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x1dd,L"State: %d"), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
                (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
      *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FTaskBase **)&this_00->LowLevelTask = this_00;
      *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
      pFVar8 = LowLevelTasks::FTask::GetActiveTask();
      uVar9 = 0;
      if (pFVar8 != (FTask *)0x0) {
        uVar9 = *(undefined8 *)&pFVar8->field_0x30;
      }
      *(undefined8 *)&(this_00->LowLevelTask).field_0x30 = uVar9;
      *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc80000541e80f800;
      this_00->ExtendedPriority = None;
      FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_);
      this_00->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTask<`UE::TasksTests::FTaskGraphBackgroundWithNormalAsPrereq::TestBody'::`4'::<lambda_2>_>
            ::_vftable_;
    }
    Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
    this_01 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&Tasks::Private::SmallTaskAllocator);
    if (this_01 == (FTaskBase *)0x0) {
      this_01 = (FTaskBase *)0x0;
    }
    else {
      Tasks::Private::FTaskBase::FTaskBase(this_01,2,true);
      this_01->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTaskBase<`UE::TasksTests::FTaskGraphBackgroundWithNormalAsPrereq::TestBody'::`4'::<lambda_1>,void,void>
            ::_vftable_;
      if (((*(ulonglong *)&(this_01->LowLevelTask).field_0x38 & 0x20) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x1dd,L"State: %d"), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(*(longlong *)&(this_01->LowLevelTask).field_0x28 + 0x18))
                (&(this_01->LowLevelTask).field_0x28,&this_01->LowLevelTask);
      *(FTaskBase **)&this_01->LowLevelTask = this_01;
      *(undefined ***)&(this_01->LowLevelTask).field_0x28 =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FTaskBase **)&(this_01->LowLevelTask).field_0x8 = this_01;
      pFVar8 = LowLevelTasks::FTask::GetActiveTask();
      uVar9 = 0;
      if (pFVar8 != (FTask *)0x0) {
        uVar9 = *(undefined8 *)&pFVar8->field_0x30;
      }
      *(undefined8 *)&(this_01->LowLevelTask).field_0x30 = uVar9;
      *(undefined8 *)&(this_01->LowLevelTask).field_0x38 = 0xd80000541e80f800;
      this_01->ExtendedPriority = None;
      FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_01->_padding_);
      this_01->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTask<`UE::TasksTests::FTaskGraphBackgroundWithNormalAsPrereq::TestBody'::`4'::<lambda_1>_>
            ::_vftable_;
    }
    if (this_00 == (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
    }
    else {
      Tasks::Private::FTaskBase::AddPrerequisites(this_01,this_00);
      Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
      LOCK();
      paVar1 = &this_00->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_00->_padding_)(this_00,1);
      }
    }
    QueryPerformanceCounter(&local_res18);
    dVar5 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    if (this_01 != (FTaskBase *)0x0) {
      while ((this_01->Subsequents).bIsClosed == (atomic<bool>)0x0) {
        QueryPerformanceCounter(&local_res20);
        if (dVar6 < (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar5) {
          pFVar10 = FAutomationTestFramework::Get();
          pFVar3 = pFVar10->CurrentTest;
          pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
          ::FString::FString(local_68,L"Test is likely deadlocked, aborting.");
          (*pcVar4)(pFVar3,local_68,0);
          if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
          }
          LOCK();
          paVar1 = &this_01->RefCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 != (atomic<unsigned_int>)0x1) {
            return;
          }
          (**(code **)this_01->_padding_)(this_01,1);
          return;
        }
      }
      LOCK();
      paVar1 = &this_01->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_01->_padding_)(this_01,1);
      }
    }
    iVar11 = iVar11 + 1;
    if (99 < iVar11) {
      return;
    }
  } while( true );
}

