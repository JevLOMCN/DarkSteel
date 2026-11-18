// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141d5b6d0

EAutomationTestFlags __thiscall
UE::TasksTests::FTasksPriorityCVarTest::GetTestFlags(FTasksPriorityCVarTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141d5b6f0

bool __thiscall UE::TasksTests::FTasksPriorityCVarTest::IsStressTest(FTasksPriorityCVarTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141d5b710

uint __thiscall
UE::TasksTests::FTasksPriorityCVarTest::GetRequiredDeviceNum(FTasksPriorityCVarTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141d5b750

FString * __thiscall
UE::TasksTests::FTasksPriorityCVarTest::GetTestSourceFileName
          (FTasksPriorityCVarTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141d5b790

int __thiscall
UE::TasksTests::FTasksPriorityCVarTest::GetTestSourceFileLine(FTasksPriorityCVarTest *this)

{
  return 0x558;
}

// GetTests @ 141d5b940

/* WARNING: Removing unreachable block (ram,0x000141d5babe) */

void __thiscall
UE::TasksTests::FTasksPriorityCVarTest::GetTests
          (FTasksPriorityCVarTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141d5bb10

bool __thiscall
UE::TasksTests::FTasksPriorityCVarTest::RunTest(FTasksPriorityCVarTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141d5bb70

FString * __thiscall
UE::TasksTests::FTasksPriorityCVarTest::GetBeautifiedTestName
          (FTasksPriorityCVarTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTasksPriorityCVarTest @ 141d6c550

FTasksPriorityCVarTest * __thiscall
UE::TasksTests::FTasksPriorityCVarTest::FTasksPriorityCVarTest
          (FTasksPriorityCVarTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTasksPriorityCVarTest_TasksTests_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Tasks::PriorityCVar");
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

// TestBody @ 141d89520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::TasksTests::FTasksPriorityCVarTest::TestBody(FTasksPriorityCVarTest *this,FString *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  size_t sVar8;
  void *pvVar9;
  wchar_t *pwVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  FTaskBase *this_00;
  wchar_t *pwVar13;
  ulong64 uVar14;
  int iVar15;
  ETaskPriority EVar16;
  int iVar17;
  undefined1 auStackY_9c8 [32];
  undefined4 local_970;
  undefined1 local_96c;
  undefined8 local_968;
  undefined1 local_960;
  undefined4 local_95c;
  undefined4 local_958;
  undefined4 local_954;
  undefined1 local_950;
  undefined8 local_94c;
  undefined1 local_944;
  undefined4 local_940;
  undefined4 local_93c;
  undefined4 local_938;
  undefined1 local_934;
  undefined8 local_930;
  undefined1 local_928;
  undefined4 local_924;
  undefined4 local_920;
  undefined4 local_91c;
  undefined1 local_918;
  undefined8 local_914;
  undefined1 local_90c;
  undefined4 local_908;
  undefined4 local_904;
  undefined1 local_900 [32];
  FAutoConsoleObject local_8e0;
  ETaskPriority local_8d0;
  EExtendedTaskPriority local_8cf;
  wchar_t *local_8c8 [5];
  void *local_8a0 [2];
  undefined1 local_890 [12];
  undefined1 local_884 [12];
  undefined1 local_878 [12];
  undefined1 local_86c [20];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_9c8;
  Tasks::FTaskPriorityCVar::FTaskPriorityCVar
            ((FTaskPriorityCVar *)local_900,L"TasksPriorityTestCVar",L"CVarHelp",Default,None);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar7 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"TasksPriorityTestCVar",1);
  iVar17 = 0;
  do {
    iVar15 = 0;
    do {
      pwVar10 = (wchar_t *)0x0;
      local_858.bIsDynamic = false;
      local_858.bIsExternal = false;
      local_858.Base = local_838;
      local_858.End = (wchar_t *)local_38;
      iVar6 = 0;
      EVar16 = (ETaskPriority)iVar17;
      local_858.CurPos = local_838;
      if (EVar16 < Count) {
        local_8c8[0] = L"High";
        local_8c8[1] = L"Normal";
        local_8c8[2] = L"BackgroundHigh";
        local_8c8[3] = L"BackgroundNormal";
        local_8c8[4] = L"BackgroundLow";
        pwVar10 = local_8c8[(char)EVar16];
        if (pwVar10 != (wchar_t *)0x0) {
          sVar8 = wcslen(pwVar10);
          iVar6 = (int)sVar8;
        }
      }
      uVar14 = (ulong64)iVar6;
      pwVar13 = local_838;
      if (local_38 < local_838 + uVar14) {
        TStringBuilderBase<wchar_t>::Extend(&local_858,uVar14);
        pwVar13 = local_858.CurPos;
      }
      if (iVar6 != 0) {
        pvVar9 = FGenericPlatformString::Memcpy(pwVar13,pwVar10,uVar14 * 2);
        pwVar13 = (wchar_t *)((longlong)pvVar9 + uVar14 * 2);
        local_858.CurPos = pwVar13;
      }
      if (local_858.End < pwVar13 + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_858,1);
        pwVar13 = local_858.CurPos;
      }
      pvVar9 = FGenericPlatformString::Memcpy(pwVar13,&::u__,2);
      local_858.CurPos = (wchar_t *)((longlong)pvVar9 + 2);
      pwVar10 = Tasks::ToString((EExtendedTaskPriority)iVar15);
      iVar6 = 0;
      if (pwVar10 != (wchar_t *)0x0) {
        sVar8 = wcslen(pwVar10);
        iVar6 = (int)sVar8;
      }
      uVar14 = (ulong64)iVar6;
      if (local_858.End < local_858.CurPos + uVar14) {
        TStringBuilderBase<wchar_t>::Extend(&local_858,uVar14);
      }
      if (iVar6 != 0) {
        pvVar9 = FGenericPlatformString::Memcpy(local_858.CurPos,pwVar10,uVar14 * 2);
        local_858.CurPos = (wchar_t *)((longlong)pvVar9 + uVar14 * 2);
      }
      if (local_858.End < local_858.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_858,1);
      }
      pwVar10 = local_858.Base;
      *local_858.CurPos = L'\0';
      local_970 = 0xe000000;
      lVar3 = *plVar7;
      local_96c = 0;
      local_968 = 0;
      local_960 = 0;
      local_95c = 0xf000000;
      local_958 = 0x1000000;
      uVar11 = (**(code **)(lVar3 + 0xa8))(plVar7,local_890,&local_970);
      (**(code **)(lVar3 + 0xb0))(plVar7,pwVar10,uVar11);
      if ((local_8d0 != EVar16) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CVar.GetTaskPriority() == (ETaskPriority)Priority",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                             ,0x569,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((local_8cf != (EExtendedTaskPriority)iVar15) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CVar.GetExtendedTaskPriority() == (EExtendedTaskPriority)ExtendedPriority"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                             ,0x56a,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_858.End < local_858.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_858,1);
      }
      pwVar10 = local_858.Base;
      *local_858.CurPos = L'\0';
      puVar12 = (undefined8 *)(**(code **)(*plVar7 + 0xd8))(plVar7,local_8a0);
      if (*(int *)(puVar12 + 1) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)*puVar12;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp(pwVar13,pwVar10);
      if (local_8a0[0] != (void *)0x0) {
        FMemory::Free(local_8a0[0]);
      }
      if ((iVar6 != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CVarPtr->GetString() == *TaskPriorities",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                             ,0x56b,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
      iVar15 = iVar15 + 1;
    } while (iVar15 != 0xf);
    iVar17 = iVar17 + 1;
    if (iVar17 == 5) {
      lVar3 = *plVar7;
      local_954 = 0xe000000;
      local_950 = 0;
      local_94c = 0;
      local_944 = 0;
      local_940 = 0xf000000;
      local_93c = 0x1000000;
      uVar11 = (**(code **)(lVar3 + 0xa8))(plVar7,local_884,&local_954);
      (**(code **)(lVar3 + 0xb0))(plVar7,L"High",uVar11);
      if ((local_8d0 != High) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CVar.GetTaskPriority() == ETaskPriority::High",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                             ,0x571,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((local_8cf != None) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CVar.GetExtendedTaskPriority() == EExtendedTaskPriority::None",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                             ,0x572,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *plVar7;
      local_938 = 0xe000000;
      local_934 = 0;
      local_930 = 0;
      local_928 = 0;
      local_924 = 0xf000000;
      local_920 = 0x1000000;
      uVar11 = (**(code **)(lVar3 + 0xa8))(plVar7,local_878,&local_938);
      (**(code **)(lVar3 + 0xb0))(plVar7,L"Normal",uVar11);
      if ((local_8d0 != Default) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CVar.GetTaskPriority() == ETaskPriority::Normal",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                             ,0x574,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *plVar7;
      local_91c = 0xe000000;
      local_918 = 0;
      local_914 = 0;
      local_90c = 0;
      local_908 = 0xf000000;
      local_904 = 0x1000000;
      uVar11 = (**(code **)(lVar3 + 0xa8))(plVar7,local_86c,&local_91c);
      (**(code **)(lVar3 + 0xb0))(plVar7,L"Normal",uVar11);
      this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                            *)&Tasks::Private::SmallTaskAllocator);
      if (this_00 == (FTaskBase *)0x0) {
        Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
      }
      else {
        Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
        this_00->_padding_ =
             (longlong)
             &Tasks::Private::
              TExecutableTaskBase<`UE::TasksTests::FTasksPriorityCVarTest::TestBody'::`2'::<lambda_1>,void,void>
              ::_vftable_;
        Tasks::Private::FTaskBase::Init
                  (this_00,
                   L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp(1400)"
                   ,local_8d0,local_8cf,None);
        this_00->_padding_ =
             (longlong)
             &Tasks::Private::
              TExecutableTask<`UE::TasksTests::FTasksPriorityCVarTest::TestBody'::`2'::<lambda_1>_>
              ::_vftable_;
        Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
        Tasks::Private::FTaskBase::Wait(this_00);
        LOCK();
        paVar1 = &this_00->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_00->_padding_)(this_00,1);
        }
      }
      local_8e0._padding_ = (longlong)&___7FAutoConsoleVariableRef__6B_;
      FAutoConsoleObject::~FAutoConsoleObject(&local_8e0);
      if ((FScriptContainerElement *)local_900._16_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_900._16_8_);
      }
      if ((FScriptContainerElement *)local_900._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_900._0_8_);
      }
      return;
    }
  } while( true );
}

