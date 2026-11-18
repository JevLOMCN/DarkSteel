// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 19

// GetTestFlags @ 141adde50

EAutomationTestFlags __thiscall
TaskGraphTests::FTaskGraphBasicTest::GetTestFlags(FTaskGraphBasicTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141adde60

bool __thiscall TaskGraphTests::FTaskGraphBasicTest::IsStressTest(FTaskGraphBasicTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141adde70

uint __thiscall TaskGraphTests::FTaskGraphBasicTest::GetRequiredDeviceNum(FTaskGraphBasicTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141adde80

FString * __thiscall
TaskGraphTests::FTaskGraphBasicTest::GetTestSourceFileName
          (FTaskGraphBasicTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141addeb0

int __thiscall TaskGraphTests::FTaskGraphBasicTest::GetTestSourceFileLine(FTaskGraphBasicTest *this)

{
  return 0x326;
}

// GetTests @ 141addec0

/* WARNING: Removing unreachable block (ram,0x000141ade03e) */

void __thiscall
TaskGraphTests::FTaskGraphBasicTest::GetTests
          (FTaskGraphBasicTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ade060

bool __thiscall
TaskGraphTests::FTaskGraphBasicTest::RunTest(FTaskGraphBasicTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ade090

FString * __thiscall
TaskGraphTests::FTaskGraphBasicTest::GetBeautifiedTestName
          (FTaskGraphBasicTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 141ade900

void __cdecl
`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l89::<lambda_12>::<lambda_invoker_cdecl>(void)

{
  return;
}

// <lambda_invoker_cdecl> @ 141ade910

void __cdecl
`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l104::<lambda_14>::<lambda_invoker_cdecl>(void)

{
  return;
}

// <lambda_invoker_cdecl> @ 141ade920

void __cdecl
`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l104::<lambda_15>::<lambda_invoker_cdecl>(void)

{
  return;
}

// <lambda_invoker_cdecl> @ 141ade930

void __cdecl
`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l149::<lambda_17>::<lambda_invoker_cdecl>(void)

{
  return;
}

// <lambda_invoker_cdecl> @ 141ade940

void __cdecl
`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l157::<lambda_18>::<lambda_invoker_cdecl>(void)

{
  return;
}

// <lambda_invoker_cdecl> @ 141ade950

void __cdecl
`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l157::<lambda_19>::<lambda_invoker_cdecl>(void)

{
  return;
}

// <lambda_invoker_cdecl> @ 141adeb10

void __cdecl
`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l165::<lambda_20>::<lambda_invoker_cdecl>(void)

{
  bool bVar1;
  DWORD DVar2;
  char acStackX_8 [8];
  undefined1 auStackX_10 [24];
  undefined1 *puStack_18;
  char *pcStack_10;
  
  if (!GIsGameThreadIdInitialized) {
    return;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9f0) != 2) {
    bVar1 = FTaskTagScope::IsRunningDuringStaticInit();
    acStackX_8[0] = '\0';
    if (!bVar1) goto LAB_14170213a;
  }
  acStackX_8[0] = '\x01';
LAB_14170213a:
  bVar1 = UE::Tasks::Private::IsThreadRetractingTask();
  if (bVar1) {
    return;
  }
  DVar2 = GetCurrentThreadId();
  auStackX_10[0] = DVar2 == GGameThreadId;
  if (auStackX_10[0] == acStackX_8[0]) {
    return;
  }
  puStack_18 = auStackX_10;
  pcStack_10 = acStackX_8;
  `IsInGameThread'::__l8::<lambda_1>::operator()(&puStack_18);
  return;
}

// <lambda_invoker_cdecl> @ 141adeb20

void __cdecl
`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l165::<lambda_21>::<lambda_invoker_cdecl>(void)

{
  return;
}

// FTaskGraphBasicTest @ 141b276f0

FTaskGraphBasicTest * __thiscall
TaskGraphTests::FTaskGraphBasicTest::FTaskGraphBasicTest(FTaskGraphBasicTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTaskGraphBasicTest_TaskGraphTests__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Async::TaskGraph::BasicTest");
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

// operator() @ 141b2cac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l81::<lambda_10>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  TRefCountPtr<FBaseGraphTask> TVar3;
  undefined8 *local_res8;
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``TaskGraphTests::FTaskGraphBasicTest::TestBody'::`81'::<lambda_10>::operator()'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_20 = *(undefined8 *)this;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l81::<lambda_10>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  TVar3 = FFunctionGraphTask::CreateAndDispatchWhenReady
                    ((TUniqueFunction<void___cdecl(void)> *)&local_res8,(TStatIdData *)local_38,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)&TStatId::TStatId_NAME_None,MainQueue);
                    /* WARNING: Load size is inaccurate */
  FBaseGraphTask::Wait(*TVar3.Reference,ActualRenderingThread_Local);
  if (local_res8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_res8 != (undefined8 *)0x0)) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return;
}

// TestBody @ 141ba0df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TaskGraphTests::FTaskGraphBasicTest::TestBody(FTaskGraphBasicTest *this,FString *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  atomic<unsigned_int> *paVar3;
  int iVar4;
  atomic<unsigned_int> aVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  TRefCountPtr<FBaseGraphTask> TVar9;
  FTaskGraphInterface *pFVar10;
  FTaskBase *this_00;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar11;
  TArrayView<std::nullptr_t,int> *pTVar12;
  FTaskBase *this_01;
  longlong lVar13;
  undefined1 auStackY_558 [32];
  char local_518;
  char local_517;
  char local_516;
  char local_515;
  char local_514;
  char local_513;
  char local_512;
  char local_511;
  char local_510;
  char local_50f;
  char local_50e;
  char local_50d;
  <lambda_1> local_50c;
  EExtendedTaskPriority local_50b [3];
  int local_508 [2];
  FTaskBase *local_500;
  FBaseGraphTask *local_4f8;
  FBaseGraphTask *local_4f0;
  FBaseGraphTask *local_4e8;
  FBaseGraphTask *local_4e0;
  undefined1 local_4d8 [8];
  undefined1 local_4d0 [8];
  undefined1 local_4c8 [8];
  undefined1 local_4c0 [8];
  undefined1 local_4b8 [8];
  undefined1 local_4b0 [8];
  undefined1 local_4a8 [8];
  undefined1 local_4a0 [8];
  undefined1 local_498 [8];
  undefined1 local_490 [8];
  undefined1 local_488 [8];
  undefined1 local_480 [8];
  undefined1 local_478 [8];
  undefined1 local_470 [8];
  undefined1 local_468 [8];
  int *local_460;
  FBaseGraphTask *local_458;
  TRefCountPtr<FBaseGraphTask> local_450;
  void **local_448;
  TArrayView<std::nullptr_t,int> local_440;
  code *local_430;
  int **local_428;
  code *local_418 [2];
  undefined **local_408;
  char *local_400;
  undefined8 local_3f0;
  code *local_3e8 [2];
  undefined **local_3d8;
  char *local_3d0;
  undefined8 local_3c0;
  code *local_3b8 [2];
  undefined **local_3a8;
  char *local_3a0;
  undefined8 local_390;
  code *local_388 [2];
  undefined **local_378;
  char *local_370;
  undefined8 local_360;
  code *local_358 [2];
  undefined **local_348;
  char *local_340;
  undefined8 local_330;
  code *local_328 [2];
  undefined **local_318;
  char *local_310;
  undefined8 local_300;
  code *local_2f8 [2];
  undefined **local_2e8;
  char *local_2e0;
  undefined8 local_2d0;
  code *local_2c8 [2];
  undefined **local_2b8;
  char *local_2b0;
  undefined8 local_2a0;
  code *local_298 [2];
  undefined **local_288;
  char *local_280;
  undefined8 local_270;
  code *local_268 [2];
  undefined **local_258;
  char *local_250;
  undefined8 local_240;
  code *local_238 [2];
  undefined **local_228;
  char *local_220;
  undefined8 local_210;
  code *local_208 [2];
  undefined **local_1f8;
  code *local_1f0;
  undefined8 local_1e0;
  code *local_1d8 [2];
  undefined **local_1c8;
  char *local_1c0;
  undefined8 local_1b0;
  code *local_1a8 [2];
  undefined **local_198;
  code *local_190;
  undefined8 local_180;
  code *local_178 [2];
  undefined **local_168;
  code *local_160;
  undefined8 local_150;
  code *local_148 [2];
  undefined **local_138;
  code *local_130;
  undefined8 local_120;
  code *local_118 [2];
  undefined **local_108;
  code *local_100;
  undefined8 local_f0;
  code *local_e8 [2];
  undefined **local_d8;
  code *local_d0;
  undefined8 local_c0;
  code *local_b8 [2];
  undefined **local_a8;
  code *local_a0;
  undefined8 local_90;
  code *local_88 [2];
  undefined **local_78;
  code *local_70;
  undefined8 local_60;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_58;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_558;
  local_516 = '\0';
  local_408 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::`3'::<lambda_1>,1,0>
               ::_vftable_;
  local_400 = &local_516;
  this_01 = (FTaskBase *)0x0;
  local_418[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l3::<lambda_1>,void>
                 ::Call;
  local_3f0 = 0;
  TVar9 = FFunctionGraphTask::CreateAndDispatchWhenReady
                    ((TUniqueFunction<void___cdecl(void)> *)local_4c8,(TStatIdData *)local_418,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)&TStatId::TStatId_NAME_None,MainQueue);
                    /* WARNING: Load size is inaccurate */
  FBaseGraphTask::Wait(*TVar9.Reference,AnyNormalThreadNormalTask);
  if (local_4c8 != (undefined1  [8])0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_4c8 + 0x30);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (local_4c8 != (undefined1  [8])0x0)) {
      (*(code *)**(undefined8 **)local_4c8)(local_4c8,1);
    }
  }
  if ((local_516 == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                         ,0x32d,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_515 = '\0';
  local_3d8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::`11'::<lambda_2>,1,0>
               ::_vftable_;
  local_3d0 = &local_515;
  local_3c0 = 0;
  local_3e8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l11::<lambda_2>,void>
                 ::Call;
  TVar9 = FFunctionGraphTask::CreateAndDispatchWhenReady
                    ((TUniqueFunction<void___cdecl(void)> *)local_4c0,(TStatIdData *)local_3e8,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)&TStatId::TStatId_NAME_None,MainQueue);
                    /* WARNING: Load size is inaccurate */
  FBaseGraphTask::Wait(*TVar9.Reference,AnyNormalThreadNormalTask);
  if (local_4c0 != (undefined1  [8])0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_4c0 + 0x30);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (local_4c0 != (undefined1  [8])0x0)) {
      (*(code *)**(undefined8 **)local_4c0)(local_4c0,1);
    }
  }
  if ((local_515 == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                         ,0x333,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_514 = '\0';
  local_3a8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::`19'::<lambda_3>,1,0>
               ::_vftable_;
  local_3a0 = &local_514;
  local_390 = 0;
  local_3b8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l19::<lambda_3>,void>
                 ::Call;
  TVar9 = FFunctionGraphTask::CreateAndDispatchWhenReady
                    ((TUniqueFunction<void___cdecl(void)> *)local_4b8,(TStatIdData *)local_3b8,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)&TStatId::TStatId_NAME_None,MainQueue);
                    /* WARNING: Load size is inaccurate */
  FBaseGraphTask::Wait(*TVar9.Reference,AnyNormalThreadNormalTask);
  if (local_4b8 != (undefined1  [8])0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_4b8 + 0x30);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (local_4b8 != (undefined1  [8])0x0)) {
      (*(code *)**(undefined8 **)local_4b8)(local_4b8,1);
    }
  }
  if ((local_514 == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                         ,0x339,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_513 = '\0';
  local_378 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::`27'::<lambda_4>,1,0>
               ::_vftable_;
  local_370 = &local_513;
  local_360 = 0;
  local_388[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l27::<lambda_4>,void>
                 ::Call;
  TVar9 = FFunctionGraphTask::CreateAndDispatchWhenReady
                    ((TUniqueFunction<void___cdecl(void)> *)local_4b0,(TStatIdData *)local_388,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)&TStatId::TStatId_NAME_None,MainQueue);
                    /* WARNING: Load size is inaccurate */
  FBaseGraphTask::Wait(*TVar9.Reference,AnyNormalThreadNormalTask);
  if (local_4b0 != (undefined1  [8])0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_4b0 + 0x30);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (local_4b0 != (undefined1  [8])0x0)) {
      (*(code *)**(undefined8 **)local_4b0)(local_4b0,1);
    }
  }
  if ((local_513 == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                         ,0x33f,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_512 = '\0';
  local_348 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::`35'::<lambda_5>,1,0>
               ::_vftable_;
  local_340 = &local_512;
  local_330 = 0;
  local_358[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l35::<lambda_5>,void>
                 ::Call;
  TVar9 = FFunctionGraphTask::CreateAndDispatchWhenReady
                    ((TUniqueFunction<void___cdecl(void)> *)local_4a8,(TStatIdData *)local_358,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)&TStatId::TStatId_NAME_None,MainQueue);
                    /* WARNING: Load size is inaccurate */
  FBaseGraphTask::Wait(*TVar9.Reference,AnyNormalThreadNormalTask);
  if (local_4a8 != (undefined1  [8])0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_4a8 + 0x30);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (local_4a8 != (undefined1  [8])0x0)) {
      (*(code *)**(undefined8 **)local_4a8)(local_4a8,1);
    }
  }
  if ((local_512 == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                         ,0x345,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar8 = IsRHIThreadRunning();
  if (bVar8) {
    local_511 = '\0';
    local_318 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::`45'::<lambda_6>,1,0>
                 ::_vftable_;
    local_310 = &local_511;
    local_300 = 0;
    local_328[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l45::<lambda_6>,void>
                   ::Call;
    TVar9 = FFunctionGraphTask::CreateAndDispatchWhenReady
                      ((TUniqueFunction<void___cdecl(void)> *)local_4a0,(TStatIdData *)local_328,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)&TStatId::TStatId_NAME_None,MainQueue);
                    /* WARNING: Load size is inaccurate */
    FBaseGraphTask::Wait(*TVar9.Reference,AnyNormalThreadNormalTask);
    if (local_4a0 != (undefined1  [8])0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_4a0 + 0x30);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (local_4a0 != (undefined1  [8])0x0)) {
        (*(code *)**(undefined8 **)local_4a0)(local_4a0,1);
      }
    }
    if ((local_511 == '\0') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bExecuted",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                           ,0x34e,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_510 = '\0';
  local_2e8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::`53'::<lambda_7>,1,0>
               ::_vftable_;
  local_2e0 = &local_510;
  local_2d0 = 0;
  local_2f8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l53::<lambda_7>,void>
                 ::Call;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)local_498,(TStatIdData *)local_2f8,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&TStatId::TStatId_NAME_None,MainQueue);
  if (local_498 != (undefined1  [8])0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_498 + 0x30);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (*(code *)**(undefined8 **)local_498)(local_498,1);
    }
  }
  pFVar10 = FTaskGraphInterface::Get();
  (**(code **)((longlong)*pFVar10 + 0x48))(pFVar10,1);
  if ((local_510 == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                         ,0x356,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar13 = 2;
  if (GRenderThreadId != 0) {
    local_50f = '\0';
    local_2b8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::`63'::<lambda_8>,1,0>
                 ::_vftable_;
    local_2b0 = &local_50f;
    local_2a0 = 0;
    local_2c8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l63::<lambda_8>,void>
                   ::Call;
    TVar9 = FFunctionGraphTask::CreateAndDispatchWhenReady
                      ((TUniqueFunction<void___cdecl(void)> *)local_490,(TStatIdData *)local_2c8,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)&TStatId::TStatId_NAME_None,MainQueue);
                    /* WARNING: Load size is inaccurate */
    FBaseGraphTask::Wait(*TVar9.Reference,AnyNormalThreadNormalTask);
    if (local_490 != (undefined1  [8])0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_490 + 0x30);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (local_490 != (undefined1  [8])0x0)) {
        (*(code *)**(undefined8 **)local_490)(local_490,1);
      }
    }
    if ((local_50f == '\0') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bExecuted",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                           ,0x35f,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_50e = '\0';
  local_288 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::`71'::<lambda_9>,1,0>
               ::_vftable_;
  local_280 = &local_50e;
  local_270 = 0;
  local_298[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l71::<lambda_9>,void>
                 ::Call;
  TVar9 = FFunctionGraphTask::CreateAndDispatchWhenReady
                    ((TUniqueFunction<void___cdecl(void)> *)local_488,(TStatIdData *)local_298,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)&TStatId::TStatId_NAME_None,MainQueue);
                    /* WARNING: Load size is inaccurate */
  FBaseGraphTask::Wait(*TVar9.Reference,GameThread_Local);
  if (local_488 != (undefined1  [8])0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_488 + 0x30);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (local_488 != (undefined1  [8])0x0)) {
      (*(code *)**(undefined8 **)local_488)(local_488,1);
    }
  }
  if ((local_50e == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                         ,0x365,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (GRenderThreadId != 0) {
    local_50d = '\0';
    local_258 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::`81'::<lambda_10>,1,0>
                 ::_vftable_;
    local_250 = &local_50d;
    local_240 = 0;
    local_268[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l81::<lambda_10>,void>
                   ::Call;
    TVar9 = FFunctionGraphTask::CreateAndDispatchWhenReady
                      ((TUniqueFunction<void___cdecl(void)> *)local_480,(TStatIdData *)local_268,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)&TStatId::TStatId_NAME_None,MainQueue);
                    /* WARNING: Load size is inaccurate */
    FBaseGraphTask::Wait(*TVar9.Reference,AnyNormalThreadNormalTask);
    if (local_480 != (undefined1  [8])0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_480 + 0x30);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (local_480 != (undefined1  [8])0x0)) {
        (*(code *)**(undefined8 **)local_480)(local_480,1);
      }
    }
    if ((local_50d == '\0') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bExecuted",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                           ,0x373,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_517 = '\0';
  FBaseGraphTask::CreateGraphEvent();
  local_210 = 0;
  local_228 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::`89'::<lambda_11>,1,0>
               ::_vftable_;
  local_220 = &local_517;
  local_238[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l89::<lambda_11>,void>
                 ::Call;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)&local_4e8,(TStatIdData *)local_238,
             (TRefCountPtr<FBaseGraphTask> *)&TStatId::TStatId_NAME_None,(Type)&local_500);
  local_1e0 = 0;
  local_1f0 = `TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l89::<lambda_12>::
              <lambda_invoker_cdecl>;
  local_1f8 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_208[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  TVar9 = FFunctionGraphTask::CreateAndDispatchWhenReady
                    ((TUniqueFunction<void___cdecl(void)> *)local_478,(TStatIdData *)local_208,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)&TStatId::TStatId_NAME_None,MainQueue);
                    /* WARNING: Load size is inaccurate */
  FBaseGraphTask::Wait(*TVar9.Reference,AnyNormalThreadNormalTask);
  if (local_478 != (undefined1  [8])0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_478 + 0x30);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (local_478 != (undefined1  [8])0x0)) {
      (*(code *)**(undefined8 **)local_478)();
    }
  }
  if ((local_517 != '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                         ,0x37e,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (local_500->ExtendedPriority == TaskEvent) {
    LOCK();
    local_500->RefCount = (atomic<unsigned_int>)((int)local_500->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(local_500,0);
  FBaseGraphTask::Wait(local_4e8,AnyNormalThreadNormalTask);
  if ((local_517 == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                         ,0x381,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (local_4e8 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar2 = &local_4e8->field_0x30;
    iVar4 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (*(code *)**(undefined8 **)local_4e8)(local_4e8,1);
    }
  }
  if (local_500 != (FTaskBase *)0x0) {
    LOCK();
    paVar3 = &local_500->RefCount;
    aVar5 = *paVar3;
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
    UNLOCK();
    if ((aVar5 == (atomic<unsigned_int>)0x1) && (local_500 != (FTaskBase *)0x0)) {
      (**(code **)local_500->_padding_)(local_500,1);
    }
  }
  local_518 = '\0';
  FBaseGraphTask::CreateGraphEvent();
  FBaseGraphTask::CreateGraphEvent();
  local_58.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_30 = 2;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
            (8,8,2,0,&local_58,2,&local_2c);
  FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_58;
  if (local_58.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar11 = local_58.SecondaryData;
  }
  ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
            ((void *)FVar11,&local_450,2);
  pTVar12 = &local_440;
  do {
    puVar6 = *(undefined8 **)&pTVar12[-1].ArrayNum;
    pTVar12 = (TArrayView<std::nullptr_t,int> *)&pTVar12[-1].ArrayNum;
    lVar13 = lVar13 + -1;
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar6 + 6);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
  } while (lVar13 != 0);
  local_1b0 = 0;
  local_1c8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::`104'::<lambda_13>,1,0>
               ::_vftable_;
  local_1c0 = &local_518;
  local_1d8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l104::<lambda_13>,void>
                 ::Call;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)&local_4e0,(TStatIdData *)local_1d8,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&TStatId::TStatId_NAME_None,(Type)&local_58);
  local_180 = 0;
  local_190 = `TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l104::<lambda_14>::
              <lambda_invoker_cdecl>;
  local_198 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_1a8[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  TVar9 = FFunctionGraphTask::CreateAndDispatchWhenReady
                    ((TUniqueFunction<void___cdecl(void)> *)local_470,(TStatIdData *)local_1a8,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)&TStatId::TStatId_NAME_None,MainQueue);
                    /* WARNING: Load size is inaccurate */
  FBaseGraphTask::Wait(*TVar9.Reference,AnyNormalThreadNormalTask);
  if (local_470 != (undefined1  [8])0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_470 + 0x30);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (local_470 != (undefined1  [8])0x0)) {
      (*(code *)**(undefined8 **)local_470)();
    }
  }
  if ((local_518 != '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                         ,0x38a,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((local_30 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_58;
  if (local_58.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar11 = local_58.SecondaryData;
  }
  TVar9.Reference = *(FBaseGraphTask **)FVar11;
  if ((TVar9.Reference)->field_0x44 == TaskEvent) {
    LOCK();
    *(atomic<unsigned_int> *)&(TVar9.Reference)->field_0x30 =
         (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)&(TVar9.Reference)->field_0x30 + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)TVar9.Reference,0);
  local_150 = 0;
  local_160 = `TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l104::<lambda_15>::
              <lambda_invoker_cdecl>;
  local_168 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_178[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  TVar9 = FFunctionGraphTask::CreateAndDispatchWhenReady
                    ((TUniqueFunction<void___cdecl(void)> *)local_468,(TStatIdData *)local_178,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)&TStatId::TStatId_NAME_None,MainQueue);
                    /* WARNING: Load size is inaccurate */
  FBaseGraphTask::Wait(*TVar9.Reference,AnyNormalThreadNormalTask);
  if (local_468 != (undefined1  [8])0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_468 + 0x30);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (local_468 != (undefined1  [8])0x0)) {
      (*(code *)**(undefined8 **)local_468)();
    }
  }
  if ((local_518 != '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                         ,0x38e,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((local_30 < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_58;
  if (local_58.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar11 = local_58.SecondaryData;
  }
  TVar9.Reference = *(FBaseGraphTask **)((longlong)FVar11 + 8);
  if ((TVar9.Reference)->field_0x44 == TaskEvent) {
    LOCK();
    *(atomic<unsigned_int> *)&(TVar9.Reference)->field_0x30 =
         (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)&(TVar9.Reference)->field_0x30 + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)TVar9.Reference,0);
  FBaseGraphTask::Wait(local_4e0,AnyNormalThreadNormalTask);
  if ((local_518 == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                         ,0x392,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (local_4e0 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar2 = &local_4e0->field_0x30;
    iVar4 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (*(code *)**(undefined8 **)local_4e0)(local_4e0,1);
    }
  }
  FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_58;
  if (local_58.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar11 = local_58.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar11,local_30);
  if (local_58.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_58.SecondaryData);
  }
  local_460 = local_508;
  local_508[0] = 0;
  local_440.DataPtr = (void **)0x0;
  local_430 = UE::Core::Private::Function::
              TFunctionRefCaller<`TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l126::<lambda_16>,void,int>
              ::Call;
  local_428 = &local_460;
  local_440.ArrayNum = 0;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",1000,1,(TFunctionRef<void___cdecl(int)> *)&local_430,local_50c,None
             ,&local_440);
  if ((local_508[0] != 0x79f2c) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Total == (Num - 1) * (Num / 2)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                         ,0x399,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe0,8);
  if (this_00 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)this_00,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    this_00->_padding_ =
         (longlong)
         &TGraphTask<`TaskGraphTests::FTaskGraphBasicTest::TestBody'[::G]::FTask>::_vftable_;
    this_01 = this_00;
  }
  UE::Tasks::Private::TranslatePriority
            (AnyNormalThreadNormalTask,(ETaskPriority *)&local_50c,local_50b);
  FBaseGraphTask::Init
            ((FBaseGraphTask *)this_01,L"GraphTask",(ETaskPriority)local_50c,local_50b[0],None);
  TaskTrace::Created((ulong64)this_01->TraceId,0xe0);
  LOCK();
  this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
  UNLOCK();
  if (((this_01->Subsequents).bIsClosed != (atomic<bool>)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Event->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                         ,0x3b4,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (this_01->ExtendedPriority == TaskEvent) {
    LOCK();
    this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0);
  FBaseGraphTask::Wait((FBaseGraphTask *)this_01,AnyNormalThreadNormalTask);
  if (((this_01->Subsequents).bIsClosed == (atomic<bool>)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Event->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                         ,0x3b7,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  LOCK();
  paVar3 = &this_01->RefCount;
  aVar5 = *paVar3;
  *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
  UNLOCK();
  if (aVar5 == (atomic<unsigned_int>)0x1) {
    (**(code **)this_01->_padding_)(this_01,1);
  }
  local_120 = 0;
  local_130 = `TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l149::<lambda_17>::
              <lambda_invoker_cdecl>;
  local_138 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_148[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)&local_4f8,(TStatIdData *)local_148,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&TStatId::TStatId_NAME_None,MainQueue);
  FBaseGraphTask::Wait(local_4f8,GameThread_Local);
  if (local_4f8 == (FBaseGraphTask *)0x0) {
LAB_141ba1cdf:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalQueueTask.GetRefCount() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                       ,0x3bd,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    if (*(int *)&local_4f8->field_0x30 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                         ,0x262,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      goto LAB_141ba1cdf;
    }
    if (*(int *)&local_4f8->field_0x30 != 1) goto LAB_141ba1cdf;
  }
  if (local_4f8 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar2 = &local_4f8->field_0x30;
    iVar4 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (*(code *)**(undefined8 **)local_4f8)(local_4f8,1);
    }
  }
  local_f0 = 0;
  local_100 = `TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l157::<lambda_18>::
              <lambda_invoker_cdecl>;
  local_108 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_118[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)local_4d8,(TStatIdData *)local_118,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&TStatId::TStatId_NAME_None,MainQueue);
  local_c0 = 0;
  local_d0 = `TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l157::<lambda_19>::
             <lambda_invoker_cdecl>;
  local_d8 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_e8[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)&local_4f0,(TStatIdData *)local_e8,
             (TRefCountPtr<FBaseGraphTask> *)&TStatId::TStatId_NAME_None,(Type)local_4d8);
  FBaseGraphTask::Wait(local_4f0,GameThread_Local);
  if (local_4f0 != (FBaseGraphTask *)0x0) {
    if (*(int *)&local_4f0->field_0x30 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                         ,0x262,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else if (*(int *)&local_4f0->field_0x30 == 1) goto LAB_141ba1e2f;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("LocalQueueTask.GetRefCount() == 1",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                     ,0x3c8,L"");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_141ba1e2f:
  if (local_4f0 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar2 = &local_4f0->field_0x30;
    iVar4 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (*(code *)**(undefined8 **)local_4f0)(local_4f0,1);
    }
  }
  if (local_4d8 != (undefined1  [8])0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_4d8 + 0x30);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (local_4d8 != (undefined1  [8])0x0)) {
      (*(code *)**(undefined8 **)local_4d8)(local_4d8,1);
    }
  }
  local_90 = 0;
  local_a0 = `TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l165::<lambda_20>::
             <lambda_invoker_cdecl>;
  local_a8 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_b8[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)local_4d0,(TStatIdData *)local_b8,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&TStatId::TStatId_NAME_None,MainQueue);
  local_60 = 0;
  local_70 = `TaskGraphTests::FTaskGraphBasicTest::TestBody'::__l165::<lambda_21>::
             <lambda_invoker_cdecl>;
  local_78 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_88[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)&local_458,(TStatIdData *)local_88,
             (TRefCountPtr<FBaseGraphTask> *)&TStatId::TStatId_NAME_None,(Type)local_4d0);
  FBaseGraphTask::Wait(local_458,AnyNormalThreadNormalTask);
  if (local_458 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar2 = &local_458->field_0x30;
    iVar4 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (*(code *)**(undefined8 **)local_458)(local_458,1);
    }
  }
  if (local_4d0 != (undefined1  [8])0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_4d0 + 0x30);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (local_4d0 != (undefined1  [8])0x0)) {
      (*(code *)**(undefined8 **)local_4d0)(local_4d0,1);
    }
  }
  return;
}

