// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 15

// GetTestFlags @ 141ada940

EAutomationTestFlags __thiscall
TaskGraphTests::FTaskGraphGraphEventTest::GetTestFlags(FTaskGraphGraphEventTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ada950

bool __thiscall
TaskGraphTests::FTaskGraphGraphEventTest::IsStressTest(FTaskGraphGraphEventTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ada960

uint __thiscall
TaskGraphTests::FTaskGraphGraphEventTest::GetRequiredDeviceNum(FTaskGraphGraphEventTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ada970

FString * __thiscall
TaskGraphTests::FTaskGraphGraphEventTest::GetTestSourceFileName
          (FTaskGraphGraphEventTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ada9a0

int __thiscall
TaskGraphTests::FTaskGraphGraphEventTest::GetTestSourceFileLine(FTaskGraphGraphEventTest *this)

{
  return 0x2cd;
}

// GetTests @ 141ada9b0

/* WARNING: Removing unreachable block (ram,0x000141adab2e) */

void __thiscall
TaskGraphTests::FTaskGraphGraphEventTest::GetTests
          (FTaskGraphGraphEventTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = UE::Core::Private::
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
    iVar4 = UE::Core::Private::
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

// RunTest @ 141adaba0

bool __thiscall
TaskGraphTests::FTaskGraphGraphEventTest::RunTest(FTaskGraphGraphEventTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141adabd0

FString * __thiscall
TaskGraphTests::FTaskGraphGraphEventTest::GetBeautifiedTestName
          (FTaskGraphGraphEventTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 141adea40

void __cdecl
`TaskGraphTests::FTaskGraphGraphEventTest::TestBody'::__l3::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  return;
}

// <lambda_invoker_cdecl> @ 141adec30

void __cdecl
`TaskGraphTests::FTaskGraphGraphEventTest::TestBody'::__l6::<lambda_2>::<lambda_invoker_cdecl>(void)

{
  FWindowsPlatformProcess::Sleep(__real_3dcccccd);
  return;
}

// <lambda_invoker_cdecl> @ 141adecd0

void __cdecl
`TaskGraphTests::FTaskGraphGraphEventTest::TestBody'::__l33::<lambda_6>::<lambda_invoker_cdecl>
          (void)

{
  return;
}

// FTaskGraphGraphEventTest @ 141b27a90

FTaskGraphGraphEventTest * __thiscall
TaskGraphTests::FTaskGraphGraphEventTest::FTaskGraphGraphEventTest
          (FTaskGraphGraphEventTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTaskGraphGraphEventTest_TaskGraphTests__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Async::TaskGraph::GraphEventTest");
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
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// operator() @ 141b33fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TaskGraphTests::FTaskGraphGraphEventTest::TestBody'::__l25::<lambda_5>::operator()
          (void *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  FTaskBase *this_00;
  code *pcVar4;
  bool bVar5;
  
  pFVar3 = (FTaskBase *)param_2->Reference;
  this_00 = (FTaskBase *)**(undefined8 **)this;
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
    if (pFVar3->ExtendedPriority == TaskEvent) {
      if ((pFVar3->NumLocks == (atomic<unsigned_int>)0x0) || (0x7fffffff < (uint)pFVar3->NumLocks))
      {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                           ,0xe3,L"Prerequisites can be added only before the task is launched");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      LOCK();
      paVar1 = &pFVar3->NumLocks;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
      UNLOCK();
      if (0x7fffffff < (int)aVar2 + 1U) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PrevNumLocks + 1 < ExecutionFlag",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                           ,0xea,L"Max number of task prerequisites reached: %d");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      bVar5 = UE::Tasks::Private::FTaskBase::AddSubsequent(this_00,pFVar3);
    }
    else {
      LOCK();
      paVar1 = &pFVar3->NumLocks;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0xfffffffe) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PrevNumLocks + 1 < TNumericLimits<uint32>::Max()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                           ,0x1c2,L"Max number of nested tasks reached: %d");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((uint)aVar2 < 0x80000001) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PrevNumLocks > ExecutionFlag",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                           ,0x1c3,
                           L"Internal error: nested tasks can be added only during parent\'s execution (%u)"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      bVar5 = UE::Tasks::Private::FTaskBase::AddSubsequent(this_00,pFVar3);
    }
    if (bVar5 == false) {
      LOCK();
      pFVar3->NumLocks = (atomic<unsigned_int>)((int)pFVar3->NumLocks + -1);
      UNLOCK();
    }
    else {
      LOCK();
      this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::
      FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                (&pFVar3->Prerequisites,this_00);
    }
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  return;
}

// operator() @ 141b357c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TaskGraphTests::FTaskGraphGraphEventTest::TestBody'::__l33::<lambda_7>::operator()
          (void *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  FTaskBase *this_00;
  code *pcVar4;
  bool bVar5;
  
  pFVar3 = (FTaskBase *)param_2->Reference;
  this_00 = (FTaskBase *)**(undefined8 **)this;
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
    if (pFVar3->ExtendedPriority == TaskEvent) {
      if ((pFVar3->NumLocks == (atomic<unsigned_int>)0x0) || (0x7fffffff < (uint)pFVar3->NumLocks))
      {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                           ,0xe3,L"Prerequisites can be added only before the task is launched");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      LOCK();
      paVar1 = &pFVar3->NumLocks;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
      UNLOCK();
      if (0x7fffffff < (int)aVar2 + 1U) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PrevNumLocks + 1 < ExecutionFlag",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                           ,0xea,L"Max number of task prerequisites reached: %d");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      bVar5 = UE::Tasks::Private::FTaskBase::AddSubsequent(this_00,pFVar3);
    }
    else {
      LOCK();
      paVar1 = &pFVar3->NumLocks;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0xfffffffe) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PrevNumLocks + 1 < TNumericLimits<uint32>::Max()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                           ,0x1c2,L"Max number of nested tasks reached: %d");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((uint)aVar2 < 0x80000001) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PrevNumLocks > ExecutionFlag",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                           ,0x1c3,
                           L"Internal error: nested tasks can be added only during parent\'s execution (%u)"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      bVar5 = UE::Tasks::Private::FTaskBase::AddSubsequent(this_00,pFVar3);
    }
    if (bVar5 == false) {
      LOCK();
      pFVar3->NumLocks = (atomic<unsigned_int>)((int)pFVar3->NumLocks + -1);
      UNLOCK();
    }
    else {
      LOCK();
      this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::
      FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                (&pFVar3->Prerequisites,this_00);
    }
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  return;
}

// TestBody @ 141ba2430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TaskGraphTests::FTaskGraphGraphEventTest::TestBody(FTaskGraphGraphEventTest *this,FString *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  atomic<unsigned_int> *paVar3;
  atomic<unsigned_int> aVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FTaskGraphInterface *pFVar8;
  FBaseGraphTask *local_res18;
  FBaseGraphTask *local_res20;
  FTaskBase *local_1b8;
  undefined1 local_1b0 [8];
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  undefined1 local_198 [8];
  undefined1 local_190 [8];
  undefined1 local_188 [8];
  undefined1 local_180 [24];
  undefined **local_168;
  code *local_160;
  undefined8 local_150;
  code *local_148 [2];
  undefined **local_138;
  code *local_130;
  undefined8 local_120;
  code *local_118 [2];
  undefined **local_108;
  FBaseGraphTask **local_100;
  undefined8 local_f0;
  code *local_e8 [2];
  undefined **local_d8;
  FBaseGraphTask **local_d0;
  undefined8 local_c0;
  code *local_b8 [2];
  undefined **local_a8;
  FTaskBase **local_a0;
  undefined8 local_90;
  code *local_88 [2];
  undefined **local_78;
  code *local_70;
  undefined8 local_60;
  code *local_58 [2];
  undefined **local_48;
  undefined1 *local_40;
  undefined8 local_30;
  
  local_150 = 0;
  local_160 = `TaskGraphTests::FTaskGraphGraphEventTest::TestBody'::__l3::<lambda_1>::
              <lambda_invoker_cdecl>;
  local_168 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_180._8_8_ =
       UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)local_198,(TStatIdData *)(local_180 + 8),
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&TStatId::TStatId_NAME_None,MainQueue);
  do {
    if (*(undefined1 *)((longlong)local_198 + 0xd0) != '\0') break;
    pFVar8 = FTaskGraphInterface::Get();
    iVar7 = (**(code **)((longlong)*pFVar8 + 0x20))(pFVar8);
  } while (iVar7 != 0);
  FBaseGraphTask::Wait((FBaseGraphTask *)local_198,GameThread);
  if (local_198 != (undefined1  [8])0x0) {
    LOCK();
    puVar1 = (undefined1 *)((longlong)local_198 + 0x30);
    iVar7 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (*(code *)**(undefined8 **)local_198)(local_198,1);
    }
  }
  local_120 = 0;
  local_130 = `TaskGraphTests::FTaskGraphGraphEventTest::TestBody'::__l6::<lambda_2>::
              <lambda_invoker_cdecl>;
  local_138 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_148[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)local_1a8,(TStatIdData *)local_148,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&TStatId::TStatId_NAME_None,MainQueue);
  if (*(undefined1 *)((longlong)local_1a8 + 0xd0) != '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Event->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                       ,0x2e2,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FBaseGraphTask::Wait((FBaseGraphTask *)local_1a8,GameThread);
  if (local_1a8 != (undefined1  [8])0x0) {
    LOCK();
    puVar1 = (undefined1 *)((longlong)local_1a8 + 0x30);
    iVar7 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (*(code *)**(undefined8 **)local_1a8)(local_1a8,1);
    }
  }
  FBaseGraphTask::CreateGraphEvent();
  local_f0 = 0;
  local_108 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`TaskGraphTests::FTaskGraphGraphEventTest::TestBody'::`14'::<lambda_3>,1,0>
               ::_vftable_;
  local_100 = &local_res18;
  local_118[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`TaskGraphTests::FTaskGraphGraphEventTest::TestBody'::__l14::<lambda_3>,void>
                 ::Call;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)local_190,(TStatIdData *)local_118,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&TStatId::TStatId_NAME_None,MainQueue);
  if (local_190 != (undefined1  [8])0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_190 + 0x30);
    iVar7 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (*(code *)**(undefined8 **)local_190)(local_190,1);
    }
  }
  do {
    if (local_res18->field_0xd0 != '\0') break;
    pFVar8 = FTaskGraphInterface::Get();
    iVar7 = (**(code **)((longlong)*pFVar8 + 0x20))(pFVar8);
  } while (iVar7 != 0);
  FBaseGraphTask::Wait(local_res18,GameThread);
  if (local_res18 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &local_res18->field_0x30;
    iVar7 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar7 == 1) && (local_res18 != (FBaseGraphTask *)0x0)) {
      (*(code *)**(undefined8 **)local_res18)(local_res18,1);
    }
  }
  FBaseGraphTask::CreateGraphEvent();
  local_c0 = 0;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`TaskGraphTests::FTaskGraphGraphEventTest::TestBody'::`17'::<lambda_4>,1,0>
              ::_vftable_;
  local_d0 = &local_res20;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`TaskGraphTests::FTaskGraphGraphEventTest::TestBody'::__l17::<lambda_4>,void>
                ::Call;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)local_188,(TStatIdData *)local_e8,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&TStatId::TStatId_NAME_None,MainQueue);
  if (local_res20->field_0xd0 != '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Event->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                       ,0x2fb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FBaseGraphTask::Wait(local_res20,AnyNormalThreadNormalTask);
  FBaseGraphTask::Wait((FBaseGraphTask *)local_188,AnyNormalThreadNormalTask);
  if (local_188 != (undefined1  [8])0x0) {
    LOCK();
    puVar1 = (undefined1 *)((longlong)local_188 + 0x30);
    iVar7 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (*(code *)**(undefined8 **)local_188)(local_188,1);
    }
  }
  if (local_res20 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &local_res20->field_0x30;
    iVar7 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar7 == 1) && (local_res20 != (FBaseGraphTask *)0x0)) {
      (*(code *)**(undefined8 **)local_res20)(local_res20,1);
    }
  }
  FBaseGraphTask::CreateGraphEvent();
  local_90 = 0;
  local_a8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`TaskGraphTests::FTaskGraphGraphEventTest::TestBody'::`25'::<lambda_5>,1,0>
              ::_vftable_;
  local_a0 = &local_1b8;
  local_b8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`TaskGraphTests::FTaskGraphGraphEventTest::TestBody'::__l25::<lambda_5>,void,enum_ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&>
                ::Call;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)>
              *)local_1a0,(TStatIdData *)local_b8,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&TStatId::TStatId_NAME_None,MainQueue);
  FWindowsPlatformProcess::Sleep(__real_3c23d70a);
  if (*(undefined1 *)((longlong)local_1a0 + 0xd0) != '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Task->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                       ,0x309,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_1b8->ExtendedPriority == TaskEvent) {
    LOCK();
    local_1b8->RefCount = (atomic<unsigned_int>)((int)local_1b8->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(local_1b8,0);
  FBaseGraphTask::Wait((FBaseGraphTask *)local_1a0,GameThread);
  if (local_1a0 != (undefined1  [8])0x0) {
    LOCK();
    puVar1 = (undefined1 *)((longlong)local_1a0 + 0x30);
    iVar7 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (*(code *)**(undefined8 **)local_1a0)(local_1a0,1);
    }
  }
  if (local_1b8 != (FTaskBase *)0x0) {
    LOCK();
    paVar3 = &local_1b8->RefCount;
    aVar4 = *paVar3;
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
    UNLOCK();
    if ((aVar4 == (atomic<unsigned_int>)0x1) && (local_1b8 != (FTaskBase *)0x0)) {
      (**(code **)local_1b8->_padding_)(local_1b8,1);
    }
  }
  local_60 = 0;
  local_70 = `TaskGraphTests::FTaskGraphGraphEventTest::TestBody'::__l33::<lambda_6>::
             <lambda_invoker_cdecl>;
  local_78 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_88[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)local_1b0,(TStatIdData *)local_88,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&TStatId::TStatId_NAME_None,MainQueue);
  FBaseGraphTask::Wait((FBaseGraphTask *)local_1b0,GameThread);
  local_30 = 0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`TaskGraphTests::FTaskGraphGraphEventTest::TestBody'::`33'::<lambda_7>,1,0>
              ::_vftable_;
  local_40 = local_1b0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`TaskGraphTests::FTaskGraphGraphEventTest::TestBody'::__l33::<lambda_7>,void,enum_ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&>
                ::Call;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)>
              *)local_180,(TStatIdData *)local_58,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&TStatId::TStatId_NAME_None,MainQueue);
  do {
    if (*(undefined1 *)(local_180._0_8_ + 0xd0) != '\0') break;
    pFVar8 = FTaskGraphInterface::Get();
    iVar7 = (**(code **)((longlong)*pFVar8 + 0x20))(pFVar8);
  } while (iVar7 != 0);
  FBaseGraphTask::Wait((FBaseGraphTask *)local_180._0_8_,GameThread);
  if ((FBaseGraphTask *)local_180._0_8_ != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = (undefined1 *)(local_180._0_8_ + 0x30);
    iVar7 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (*(code *)**(undefined8 **)local_180._0_8_)(local_180._0_8_,1);
    }
  }
  if (local_1b0 != (undefined1  [8])0x0) {
    LOCK();
    puVar1 = (undefined1 *)((longlong)local_1b0 + 0x30);
    iVar7 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar7 == 1) && (local_1b0 != (undefined1  [8])0x0)) {
      (*(code *)**(undefined8 **)local_1b0)(local_1b0,1);
    }
  }
  return;
}

