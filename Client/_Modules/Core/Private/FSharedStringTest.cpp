// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141adac00

EAutomationTestFlags __thiscall UE::FSharedStringTest::GetTestFlags(FSharedStringTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141adac10

bool __thiscall UE::FSharedStringTest::IsStressTest(FSharedStringTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141adac20

uint __thiscall UE::FSharedStringTest::GetRequiredDeviceNum(FSharedStringTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141adac30

FString * __thiscall
UE::FSharedStringTest::GetTestSourceFileName
          (FSharedStringTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\SharedStringTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141adac60

int __thiscall UE::FSharedStringTest::GetTestSourceFileLine(FSharedStringTest *this)

{
  return 0xc;
}

// GetTests @ 141adacb0

/* WARNING: Removing unreachable block (ram,0x000141adae2e) */

void __thiscall
UE::FSharedStringTest::GetTests
          (FSharedStringTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141adae50

bool __thiscall UE::FSharedStringTest::RunTest(FSharedStringTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141adaed0

FString * __thiscall
UE::FSharedStringTest::GetBeautifiedTestName
          (FSharedStringTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FSharedStringTest @ 141b26de0

FSharedStringTest * __thiscall
UE::FSharedStringTest::FSharedStringTest(FSharedStringTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FSharedStringTest_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][String][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::String::SharedString");
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
  ::FString::FString(&local_18,"[Core][String][SmokeFilter]");
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

// TestBody @ 141b9cca0

/* WARNING: Removing unreachable block (ram,0x000141b9cf8e) */
/* WARNING: Removing unreachable block (ram,0x000141b9d1d8) */

void __thiscall UE::FSharedStringTest::TestBody(FSharedStringTest *this,FString *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  FScriptContainerElement *pFVar3;
  FAutomationTestBase *pFVar4;
  code *pcVar5;
  TSharedString<wchar_t> TVar6;
  int iVar7;
  int iVar8;
  FAutomationTestFramework *pFVar9;
  int *piVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  int iVar13;
  wchar_t *pwVar14;
  FString local_48;
  
  pFVar9 = FAutomationTestFramework::Get();
  pFVar4 = pFVar9->CurrentTest;
  pcVar5 = *(code **)(pFVar4->_padding_ + 0x50);
  ::FString::FString(&local_48,L"Empty");
  (*pcVar5)(pFVar4,&local_48,0,0);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pwVar1 = TSharedString<wchar_t>::Empty.Chars + -4;
  if (TSharedString<wchar_t>::Empty.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)pwVar1 = *(int *)pwVar1 + 1;
    UNLOCK();
    LOCK();
    iVar7 = *(int *)pwVar1;
    *(int *)pwVar1 = *(int *)pwVar1 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      FMemory::Free(pwVar1);
    }
  }
  TVar6.Chars = TSharedString<wchar_t>::Empty.Chars;
  pwVar1 = TSharedString<wchar_t>::Empty.Chars + -4;
  if (TSharedString<wchar_t>::Empty.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)pwVar1 = *(int *)pwVar1 + 1;
    UNLOCK();
    iVar13 = *(int *)(TVar6.Chars + -2);
    LOCK();
    iVar7 = *(int *)pwVar1;
    *(int *)pwVar1 = *(int *)pwVar1 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      FMemory::Free(pwVar1);
    }
    if (iVar13 != 0) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar4 = pFVar9->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_48,L"Condition failed");
      (*pcVar5)(pFVar4,&local_48,0);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar9 = FAutomationTestFramework::Get();
  pFVar4 = pFVar9->CurrentTest;
  pcVar5 = *(code **)(pFVar4->_padding_ + 0x50);
  ::FString::FString(&local_48,L"Construct");
  (*pcVar5)(pFVar4,&local_48,0,0);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  piVar10 = FMemory::Malloc(0x10,0);
  pwVar1 = (wchar_t *)(piVar10 + 2);
  *piVar10 = 1;
  piVar10[1] = 3;
  *(undefined4 *)pwVar1 = u_ABC._0_4_;
  *(wchar_t *)(piVar10 + 3) = u_ABC[2];
  *(undefined2 *)((longlong)piVar10 + 0xe) = 0;
  if (pwVar1 == (wchar_t *)0x0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar4 = pFVar9->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Condition failed");
    (*pcVar5)(pFVar4,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
LAB_141b9ce56:
    pFVar9 = FAutomationTestFramework::Get();
    pFVar4 = pFVar9->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Condition failed");
    (*pcVar5)(pFVar4,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pwVar12 = L"";
    if (pwVar1 != (wchar_t *)0x0) goto LAB_141b9ce9b;
  }
  else {
    if (piVar10[1] != 3) goto LAB_141b9ce56;
LAB_141b9ce9b:
    pwVar12 = pwVar1;
  }
  if (*pwVar12 != L'A') {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar4 = pFVar9->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Condition failed");
    (*pcVar5)(pFVar4,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (pwVar1 == (wchar_t *)0x0) {
    pwVar12 = L"";
    iVar7 = 0;
  }
  else {
    if (pwVar1 == L"ABC") {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar4 = pFVar9->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_48,L"Condition failed");
      (*pcVar5)(pFVar4,&local_48,0);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    LOCK();
    *piVar10 = *piVar10 + 1;
    UNLOCK();
    LOCK();
    iVar7 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      FMemory::Free(piVar10);
    }
    LOCK();
    *piVar10 = *piVar10 + 1;
    UNLOCK();
    iVar7 = piVar10[1];
    LOCK();
    iVar13 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    pwVar12 = pwVar1;
    if (iVar13 == 1) {
      FMemory::Free(piVar10);
    }
  }
  if ((iVar7 != 3) || (iVar7 = FGenericPlatformStricmp::Strnicmp(L"ABC",pwVar12,3), iVar7 != 0)) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar4 = pFVar9->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Condition failed");
    (*pcVar5)(pFVar4,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (pwVar1 == (wchar_t *)0x0) {
    pwVar12 = L"";
    iVar7 = 0;
  }
  else {
    LOCK();
    *piVar10 = *piVar10 + 1;
    UNLOCK();
    LOCK();
    iVar7 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      FMemory::Free(piVar10);
    }
    LOCK();
    *piVar10 = *piVar10 + 1;
    UNLOCK();
    iVar7 = piVar10[1];
    LOCK();
    iVar13 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    pwVar12 = pwVar1;
    if (iVar13 == 1) {
      FMemory::Free(piVar10);
    }
  }
  pwVar14 = TSharedString<wchar_t>::Empty.Chars;
  pwVar2 = TSharedString<wchar_t>::Empty.Chars + -4;
  if (TSharedString<wchar_t>::Empty.Chars == (wchar_t *)0x0) {
    pwVar14 = L"";
  }
  else {
    LOCK();
    *(int *)pwVar2 = *(int *)pwVar2 + 1;
    UNLOCK();
    LOCK();
    iVar13 = *(int *)pwVar2;
    *(int *)pwVar2 = *(int *)pwVar2 + -1;
    UNLOCK();
    if (iVar13 == 1) {
      FMemory::Free(pwVar2);
    }
  }
  TVar6.Chars = TSharedString<wchar_t>::Empty.Chars;
  pwVar2 = TSharedString<wchar_t>::Empty.Chars + -4;
  if (TSharedString<wchar_t>::Empty.Chars == (wchar_t *)0x0) {
    iVar13 = 0;
  }
  else {
    LOCK();
    *(int *)pwVar2 = *(int *)pwVar2 + 1;
    UNLOCK();
    iVar13 = *(int *)(TVar6.Chars + -2);
    LOCK();
    iVar8 = *(int *)pwVar2;
    *(int *)pwVar2 = *(int *)pwVar2 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      FMemory::Free(pwVar2);
    }
  }
  if (((iVar7 == iVar13) &&
      (((iVar7 == 0 || (iVar13 == 0)) ||
       (iVar8 = FGenericPlatformStricmp::Strnicmp(pwVar12,pwVar14,(longlong)iVar13), iVar8 == 0))))
     && (iVar7 == iVar13)) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar4 = pFVar9->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Condition expected to return false but returned true");
    (*pcVar5)(pFVar4,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (pwVar1 != (wchar_t *)0x0) {
    LOCK();
    iVar7 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      FMemory::Free(piVar10);
    }
  }
  pFVar9 = FAutomationTestFramework::Get();
  pFVar4 = pFVar9->CurrentTest;
  pcVar5 = *(code **)(pFVar4->_padding_ + 0x50);
  ::FString::FString(&local_48,L"Copy/Move");
  (*pcVar5)(pFVar4,&local_48,0,0);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar11 = FMemory::Malloc(0x10,0);
  *(int *)pFVar11 = 1;
  pFVar3 = pFVar11 + 8;
  *(int *)(pFVar11 + 4) = 3;
  *(undefined4 *)pFVar3 = u_ABC._0_4_;
  *(wchar_t *)(pFVar11 + 0xc) = u_ABC[2];
  *(undefined2 *)(pFVar11 + 0xe) = 0;
  LOCK();
  *(int *)pFVar11 = *(int *)pFVar11 + 1;
  UNLOCK();
  LOCK();
  iVar7 = *(int *)pFVar11;
  *(int *)pFVar11 = *(int *)pFVar11 + -1;
  UNLOCK();
  if (iVar7 == 1) {
    FMemory::Free(pFVar11);
  }
  LOCK();
  *(int *)pFVar11 = *(int *)pFVar11 + 1;
  UNLOCK();
  LOCK();
  iVar7 = *(int *)pFVar11;
  *(int *)pFVar11 = *(int *)pFVar11 + -1;
  UNLOCK();
  if (iVar7 == 1) {
    FMemory::Free(pFVar11);
  }
  LOCK();
  *(int *)pFVar11 = *(int *)pFVar11 + 1;
  UNLOCK();
  iVar13 = *(int *)(pFVar11 + 4);
  LOCK();
  iVar7 = *(int *)pFVar11;
  *(int *)pFVar11 = *(int *)pFVar11 + -1;
  UNLOCK();
  if (iVar7 == 1) {
    FMemory::Free(pFVar11);
  }
  if ((iVar13 != 3) ||
     (iVar7 = FGenericPlatformStricmp::Strnicmp(L"ABC",(wchar_t *)pFVar3,3), iVar7 != 0)) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar4 = pFVar9->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Condition failed");
    (*pcVar5)(pFVar4,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  LOCK();
  *(int *)pFVar11 = *(int *)pFVar11 + 1;
  UNLOCK();
  if (pFVar3 == (FScriptContainerElement *)0x0) {
LAB_141b9d279:
    pFVar9 = FAutomationTestFramework::Get();
    pFVar4 = pFVar9->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Condition failed");
    (*pcVar5)(pFVar4,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    iVar7 = *(int *)pFVar11;
    *(int *)pFVar11 = *(int *)pFVar11 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      FMemory::Free(pFVar11);
    }
    else if (pFVar3 == (FScriptContainerElement *)0x0) goto LAB_141b9d279;
    LOCK();
    iVar7 = *(int *)pFVar11;
    *(int *)pFVar11 = *(int *)pFVar11 + -1;
    UNLOCK();
    local_48.Data.AllocatorInstance.Data = pFVar11;
    if (iVar7 != 1) {
      return;
    }
  }
  FMemory::Free(local_48.Data.AllocatorInstance.Data);
  return;
}

