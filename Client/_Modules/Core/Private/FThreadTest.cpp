// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141bc1910

EAutomationTestFlags __thiscall FThreadTest::GetTestFlags(FThreadTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bc1920

bool __thiscall FThreadTest::IsStressTest(FThreadTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bc1930

uint __thiscall FThreadTest::GetRequiredDeviceNum(FThreadTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bc1940

FString * __thiscall
FThreadTest::GetTestSourceFileName(FThreadTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\HAL\\ThreadTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bc1970

int __thiscall FThreadTest::GetTestSourceFileLine(FThreadTest *this)

{
  return 0xf8;
}

// GetTests @ 141bc1980

/* WARNING: Removing unreachable block (ram,0x000141bc1afe) */

void __thiscall
FThreadTest::GetTests
          (FThreadTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bc1b20

bool __thiscall FThreadTest::RunTest(FThreadTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bc1b50

FString * __thiscall
FThreadTest::GetBeautifiedTestName(FThreadTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FThreadTest @ 141bea440

FThreadTest * __thiscall FThreadTest::FThreadTest(FThreadTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FThreadTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::HAL::Thread");
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
  ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
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

// TestBody @ 141c42d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FThreadTest::TestBody(FThreadTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  FAutomationTestFramework *pFVar5;
  undefined ***pppuVar6;
  undefined1 auStackY_648 [32];
  int local_608 [4];
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  FThread local_5e8;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  FThread local_5c8;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  FThread local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FThreadAffinity local_568;
  FThreadAffinity local_558;
  FThreadAffinity local_548;
  code *local_538 [2];
  undefined **local_528;
  code *local_520;
  undefined ***local_510;
  code *local_508 [2];
  undefined **local_4f8;
  int *local_4f0;
  undefined ***local_4e0;
  code *local_4d8 [2];
  undefined **local_4c8;
  code *local_4c0;
  undefined ***local_4b0;
  wchar_t local_4a8 [128];
  void *local_3a8;
  wchar_t *local_3a0;
  undefined4 local_398;
  wchar_t local_388 [128];
  void *local_288;
  wchar_t *local_280;
  undefined4 local_278;
  wchar_t local_268 [128];
  void *local_168;
  wchar_t *local_160;
  undefined4 local_158;
  wchar_t local_148 [128];
  void *local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_648;
  if (4 < (byte)LogTemp._0_1_) {
    local_3a8 = (void *)0x0;
    local_3a0 = local_4a8;
    local_398 = 0x15;
    pwVar4 = FGenericPlatformString::Convert<char,wchar_t>
                       (local_4a8,0x16,"FThreadTest::TestBody",0x16);
    if (pwVar4 == (wchar_t *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    if (local_3a8 != (void *)0x0) {
      FMemory::Free(local_3a8);
    }
  }
  local_5f8 = 0xffffffffffffffff;
  local_520 = ``anonymous_namespace'::TestIsJoinableAfterCreation'::__l2::<lambda_1>::
              <lambda_invoker_cdecl>;
  uStack_5f0 = 0;
  local_568.ThreadAffinityMask = 0xffffffffffffffff;
  local_568.ProcessorGroup = 0;
  local_568._10_6_ = 0;
  local_510 = (undefined ***)0x0;
  local_528 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_538[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  ::FThread::FThread(&local_5e8,L"Test.Thread.TestIsJoinableAfterCreation",
                     (TUniqueFunction<void___cdecl(void)> *)local_538,0,TPri_Normal,&local_568,
                     NonForkable);
  if (local_538[0] != (code *)0x0) {
    pppuVar6 = &local_528;
    if (local_510 != (undefined ***)0x0) {
      pppuVar6 = local_510;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  bVar3 = ::FThread::IsJoinable(&local_5e8);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_598,L"FThread must be joinable after construction");
    (*pcVar2)(pFVar1,&local_598,0);
    if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.Data.AllocatorInstance.Data);
    }
  }
  ::FThread::Join(&local_5e8);
  if (4 < (byte)LogTemp._0_1_) {
    local_288 = (void *)0x0;
    local_280 = local_388;
    local_278 = 0x32;
    pwVar4 = FGenericPlatformString::Convert<char,wchar_t>
                       (local_388,0x33,"`anonymous-namespace\'::TestIsJoinableAfterCreation",0x33);
    if (pwVar4 == (wchar_t *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u__s_completed_15072c538,(FLogCategoryBase *)&LogTemp);
    if (local_288 != (void *)0x0) {
      FMemory::Free(local_288);
    }
  }
  ::FThread::~FThread(&local_5e8);
  local_5d8 = 0xffffffffffffffff;
  local_4f8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`TestIsJoinableAfterCompletion'::`2'::<lambda_1>,1,0>::
               _vftable_;
  local_4f0 = local_608;
  uStack_5d0 = 0;
  local_608[0] = 0;
  local_508[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<``anonymous_namespace'::TestIsJoinableAfterCompletion'::__l2::<lambda_1>,void>
                 ::Call;
  local_4e0 = (undefined ***)0x0;
  local_558.ThreadAffinityMask = 0xffffffffffffffff;
  local_558.ProcessorGroup = 0;
  local_558._10_6_ = 0;
  ::FThread::FThread(&local_5c8,L"Test.Thread.TestIsJoinableAfterCompletion",
                     (TUniqueFunction<void___cdecl(void)> *)local_508,0,TPri_Normal,&local_558,
                     NonForkable);
  if (local_508[0] != (code *)0x0) {
    pppuVar6 = &local_4f8;
    if (local_4e0 != (undefined ***)0x0) {
      pppuVar6 = local_4e0;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  do {
  } while (local_608[0] == 0);
  bVar3 = ::FThread::IsJoinable(&local_5c8);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_588,L"FThread must still be joinable after completion");
    (*pcVar2)(pFVar1,&local_588,0);
    if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data.AllocatorInstance.Data);
    }
  }
  ::FThread::Join(&local_5c8);
  if (4 < (byte)LogTemp._0_1_) {
    local_168 = (void *)0x0;
    local_160 = local_268;
    local_158 = 0x34;
    pwVar4 = FGenericPlatformString::Convert<char,wchar_t>
                       (local_268,0x35,"`anonymous-namespace\'::TestIsJoinableAfterCompletion",0x35)
    ;
    if (pwVar4 == (wchar_t *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u__s_completed_15072c660,(FLogCategoryBase *)&LogTemp);
    if (local_168 != (void *)0x0) {
      FMemory::Free(local_168);
    }
  }
  ::FThread::~FThread(&local_5c8);
  local_5b8 = 0xffffffffffffffff;
  local_4c0 = ``anonymous_namespace'::TestIsNotJoinableAfterJoining'::__l2::<lambda_1>::
              <lambda_invoker_cdecl>;
  uStack_5b0 = 0;
  local_548.ThreadAffinityMask = 0xffffffffffffffff;
  local_548.ProcessorGroup = 0;
  local_548._10_6_ = 0;
  local_4b0 = (undefined ***)0x0;
  local_4c8 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_4d8[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  ::FThread::FThread(&local_5a8,L"Test.Thread.TestIsNotJoinableAfterJoining",
                     (TUniqueFunction<void___cdecl(void)> *)local_4d8,0,TPri_Normal,&local_548,
                     NonForkable);
  if (local_4d8[0] != (code *)0x0) {
    pppuVar6 = &local_4c8;
    if (local_4b0 != (undefined ***)0x0) {
      pppuVar6 = local_4b0;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  ::FThread::Join(&local_5a8);
  bVar3 = ::FThread::IsJoinable(&local_5a8);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_578,L"FThread must not be joinable after joining");
    (*pcVar2)(pFVar1,&local_578,0);
    if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_578.Data.AllocatorInstance.Data);
    }
  }
  if (4 < (byte)LogTemp._0_1_) {
    local_48 = (void *)0x0;
    local_40 = local_148;
    local_38 = 0x34;
    pwVar4 = FGenericPlatformString::Convert<char,wchar_t>
                       (local_148,0x35,"`anonymous-namespace\'::TestIsNotJoinableAfterJoining",0x35)
    ;
    if (pwVar4 == (wchar_t *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u__s_completed_15072c778,(FLogCategoryBase *)&LogTemp);
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
  }
  ::FThread::~FThread(&local_5a8);
  ::`anonymous_namespace'::TestDefaultConstruction();
  ::`anonymous_namespace'::TestMovability();
  ::`anonymous_namespace'::TestTypicalUseCase();
  ::`anonymous_namespace'::TestThreadSingleton();
  return;
}

