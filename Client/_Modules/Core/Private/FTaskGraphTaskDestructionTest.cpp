// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad3540

EAutomationTestFlags __thiscall
TaskGraphTests::FTaskGraphTaskDestructionTest::GetTestFlags(FTaskGraphTaskDestructionTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad3720

bool __thiscall
TaskGraphTests::FTaskGraphTaskDestructionTest::IsStressTest(FTaskGraphTaskDestructionTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad3760

uint __thiscall
TaskGraphTests::FTaskGraphTaskDestructionTest::GetRequiredDeviceNum
          (FTaskGraphTaskDestructionTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad3770

FString * __thiscall
TaskGraphTests::FTaskGraphTaskDestructionTest::GetTestSourceFileName
          (FTaskGraphTaskDestructionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad37a0

int __thiscall
TaskGraphTests::FTaskGraphTaskDestructionTest::GetTestSourceFileLine
          (FTaskGraphTaskDestructionTest *this)

{
  return 0x51f;
}

// GetTests @ 141ad3810

/* WARNING: Removing unreachable block (ram,0x000141ad398e) */

void __thiscall
TaskGraphTests::FTaskGraphTaskDestructionTest::GetTests
          (FTaskGraphTaskDestructionTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ad39b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TaskGraphTests::FTaskGraphTaskDestructionTest::RunTest
          (FTaskGraphTaskDestructionTest *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  TRefCountPtr<FBaseGraphTask> TVar4;
  undefined1 local_res18 [8];
  undefined8 *local_res20;
  code *local_38 [2];
  undefined **local_28;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_res18[0] = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`TaskGraphTests::FTaskGraphTaskDestructionTest::TestBody'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_20 = local_res18;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`TaskGraphTests::FTaskGraphTaskDestructionTest::TestBody'::__l2::<lambda_1>,void>
                ::Call;
  TVar4 = FFunctionGraphTask::CreateAndDispatchWhenReady
                    ((TUniqueFunction<void___cdecl(void)> *)&local_res20,(TStatIdData *)local_38,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)&TStatId::TStatId_NAME_None,MainQueue);
                    /* WARNING: Load size is inaccurate */
  FBaseGraphTask::Wait(*TVar4.Reference,AnyNormalThreadNormalTask);
  if (local_res20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res20 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_res20 != (undefined8 *)0x0)) {
      (**(code **)*local_res20)(local_res20,1);
    }
  }
  bVar3 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar3;
}

// GetBeautifiedTestName @ 141ad3a60

FString * __thiscall
TaskGraphTests::FTaskGraphTaskDestructionTest::GetBeautifiedTestName
          (FTaskGraphTaskDestructionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTaskGraphTaskDestructionTest @ 141b281d0

FTaskGraphTaskDestructionTest * __thiscall
TaskGraphTests::FTaskGraphTaskDestructionTest::FTaskGraphTaskDestructionTest
          (FTaskGraphTaskDestructionTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTaskGraphTaskDestructionTest_TaskGraphTests__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Async::TaskGraph::TaskDestruction");
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

// TestBody @ 141ba36c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TaskGraphTests::FTaskGraphTaskDestructionTest::TestBody
          (FTaskGraphTaskDestructionTest *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  TRefCountPtr<FBaseGraphTask> TVar3;
  undefined1 local_res18 [8];
  undefined8 *local_res20;
  code *local_38 [2];
  undefined **local_28;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_res18[0] = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`TaskGraphTests::FTaskGraphTaskDestructionTest::TestBody'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_20 = local_res18;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`TaskGraphTests::FTaskGraphTaskDestructionTest::TestBody'::__l2::<lambda_1>,void>
                ::Call;
  TVar3 = FFunctionGraphTask::CreateAndDispatchWhenReady
                    ((TUniqueFunction<void___cdecl(void)> *)&local_res20,(TStatIdData *)local_38,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)&TStatId::TStatId_NAME_None,MainQueue);
                    /* WARNING: Load size is inaccurate */
  FBaseGraphTask::Wait(*TVar3.Reference,AnyNormalThreadNormalTask);
  if (local_res20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res20 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_res20 != (undefined8 *)0x0)) {
      (**(code **)*local_res20)(local_res20,1);
    }
  }
  return;
}

