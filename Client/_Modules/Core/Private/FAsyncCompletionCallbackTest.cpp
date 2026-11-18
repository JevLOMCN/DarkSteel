// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad8150

EAutomationTestFlags __thiscall
FAsyncCompletionCallbackTest::GetTestFlags(FAsyncCompletionCallbackTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad8190

bool __thiscall FAsyncCompletionCallbackTest::IsStressTest(FAsyncCompletionCallbackTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad81b0

uint __thiscall
FAsyncCompletionCallbackTest::GetRequiredDeviceNum(FAsyncCompletionCallbackTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad81c0

FString * __thiscall
FAsyncCompletionCallbackTest::GetTestSourceFileName
          (FAsyncCompletionCallbackTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\AsyncTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad81f0

int __thiscall
FAsyncCompletionCallbackTest::GetTestSourceFileLine(FAsyncCompletionCallbackTest *this)

{
  return 0x48;
}

// GetTests @ 141ad83a0

/* WARNING: Removing unreachable block (ram,0x000141ad851e) */

void __thiscall
FAsyncCompletionCallbackTest::GetTests
          (FAsyncCompletionCallbackTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ad85a0

bool __thiscall
FAsyncCompletionCallbackTest::RunTest(FAsyncCompletionCallbackTest *this,FString *param_1)

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FAutomationTestFramework *pFVar6;
  char local_res18 [8];
  FEvent *local_res20;
  FTimespan local_68;
  undefined1 local_60 [16];
  FString local_50;
  code *local_38 [2];
  undefined **local_28;
  char *local_20;
  FEvent **local_18;
  undefined8 local_10;
  
  local_res18[0] = '\0';
  local_res20 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FAsyncCompletionCallbackTest::TestBody'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_20 = local_res18;
  local_10 = 0;
  local_18 = &local_res20;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FAsyncCompletionCallbackTest::TestBody'::__l2::<lambda_1>,void>
                ::Call;
  Async<TFunction<int___cdecl(void)>_&>
            ((TFuture<int> *)local_60,TaskGraph,&AsyncTestUtils::Task,
             (TUniqueFunction<void___cdecl(void)> *)local_38);
  if (local_60._0_8_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  while (*(char *)(local_60._0_8_ + 0x68) == '\0') {
    (**(code **)(**(longlong **)(local_60._0_8_ + 0x60) + 0x20))();
  }
  iVar1 = *(int *)(local_60._0_8_ + 0x70);
  FTimespan::Assign(&local_68,0,0,0,5,0);
  bVar4 = FEvent::Wait(local_res20,&local_68,false);
  FGenericPlatformProcess::ReturnSynchEventToPool(local_res20);
  pFVar6 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual(pFVar6->CurrentTest,L"Async Result",iVar1,0x7b);
  if ((!bVar4) || (local_res18[0] == '\0')) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_50,L"Completion callback to be called");
    (*pcVar3)(pFVar2,&local_50,0);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_60._8_8_);
  bVar4 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar4;
}

// GetBeautifiedTestName @ 141ad8790

FString * __thiscall
FAsyncCompletionCallbackTest::GetBeautifiedTestName
          (FAsyncCompletionCallbackTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FAsyncCompletionCallbackTest @ 141b18eb0

FAsyncCompletionCallbackTest * __thiscall
FAsyncCompletionCallbackTest::FAsyncCompletionCallbackTest
          (FAsyncCompletionCallbackTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FAsyncCompletionCallbackTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[EditorContext][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Async::Async (Completion Callback)");
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
  ::FString::FString(&local_18,"[EditorContext][EngineFilter]");
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

// TestBody @ 141b5e440

void __thiscall
FAsyncCompletionCallbackTest::TestBody(FAsyncCompletionCallbackTest *this,FString *param_1)

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAutomationTestFramework *pFVar5;
  char local_res18 [8];
  FEvent *local_res20;
  FTimespan local_68;
  undefined1 local_60 [16];
  FString local_50;
  code *local_38 [2];
  undefined **local_28;
  char *local_20;
  FEvent **local_18;
  undefined8 local_10;
  
  local_res18[0] = '\0';
  local_res20 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FAsyncCompletionCallbackTest::TestBody'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_20 = local_res18;
  local_10 = 0;
  local_18 = &local_res20;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FAsyncCompletionCallbackTest::TestBody'::__l2::<lambda_1>,void>
                ::Call;
  Async<TFunction<int___cdecl(void)>_&>
            ((TFuture<int> *)local_60,TaskGraph,&AsyncTestUtils::Task,
             (TUniqueFunction<void___cdecl(void)> *)local_38);
  if (local_60._0_8_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  while (*(char *)(local_60._0_8_ + 0x68) == '\0') {
    (**(code **)(**(longlong **)(local_60._0_8_ + 0x60) + 0x20))();
  }
  iVar1 = *(int *)(local_60._0_8_ + 0x70);
  FTimespan::Assign(&local_68,0,0,0,5,0);
  bVar4 = FEvent::Wait(local_res20,&local_68,false);
  FGenericPlatformProcess::ReturnSynchEventToPool(local_res20);
  pFVar5 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual(pFVar5->CurrentTest,L"Async Result",iVar1,0x7b);
  if ((!bVar4) || (local_res18[0] == '\0')) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_50,L"Completion callback to be called");
    (*pcVar3)(pFVar2,&local_50,0);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_60._8_8_);
  return;
}

