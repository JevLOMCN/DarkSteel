// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141c5ba10

EAutomationTestFlags __thiscall FFileTruncateTest::GetTestFlags(FFileTruncateTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141c5ba20

bool __thiscall FFileTruncateTest::IsStressTest(FFileTruncateTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141c5ba30

uint __thiscall FFileTruncateTest::GetRequiredDeviceNum(FFileTruncateTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141c5ba40

FString * __thiscall
FFileTruncateTest::GetTestSourceFileName(FFileTruncateTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\FileTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141c5ba70

int __thiscall FFileTruncateTest::GetTestSourceFileLine(FFileTruncateTest *this)

{
  return 0x17;
}

// GetTests @ 141c5ba80

/* WARNING: Removing unreachable block (ram,0x000141c5bbfe) */

void __thiscall
FFileTruncateTest::GetTests
          (FFileTruncateTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141c5bc40

bool __thiscall FFileTruncateTest::RunTest(FFileTruncateTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141c5bc80

FString * __thiscall
FFileTruncateTest::GetBeautifiedTestName(FFileTruncateTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FFileTruncateTest @ 141c8b7d0

FFileTruncateTest * __thiscall
FFileTruncateTest::FFileTruncateTest(FFileTruncateTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FFileTruncateTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][EditorContext][CriticalPriority][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::FileTruncate");
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
  ::FString::FString(&local_18,"[.][EditorContext][CriticalPriority][EngineFilter]");
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

// TestBody @ 141c9f1b0

void __thiscall FFileTruncateTest::TestBody(FFileTruncateTest *this,FString *param_1)

{
  char cVar1;
  FString *pFVar2;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  FAutomationTestFramework *pFVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  code *pcVar11;
  FAutomationTestBase *pFVar12;
  int local_res18 [2];
  undefined4 local_res20 [2];
  FString local_58;
  FString local_48;
  
  pFVar2 = FPaths::ProjectIntermediateDir(&local_48);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  FPaths::CreateTempFilename(&local_58,pwVar10,L"",L".tmp");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  this_00 = FPlatformFileManager::Get();
  pIVar3 = FPlatformFileManager::GetPlatformFile(this_00);
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar9.Data = local_58.Data.AllocatorInstance.Data;
  }
  plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x110))(pIVar3,FVar9.Data,0,1);
  if (plVar4 == (longlong *)0x0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar12 = pFVar8->CurrentTest;
    pcVar11 = *(code **)(pFVar12->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_48,L"File failed to open: %s");
    (*pcVar11)(pFVar12,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    goto LAB_141c9f48b;
  }
  local_res18[0] = 1;
  (**(code **)(*plVar4 + 0x30))(plVar4,local_res18,4);
  local_res18[0] = local_res18[0] + 1;
  (**(code **)(*plVar4 + 0x30))(plVar4,local_res18,4);
  lVar5 = (**(code **)(*plVar4 + 8))(plVar4);
  local_res18[0] = local_res18[0] + 1;
  (**(code **)(*plVar4 + 0x30))(plVar4,local_res18,4);
  uVar6 = (**(code **)(*plVar4 + 8))(plVar4);
  local_res18[0] = local_res18[0] + 1;
  (**(code **)(*plVar4 + 0x30))(plVar4,local_res18,4);
  lVar7 = (**(code **)(*plVar4 + 8))(plVar4);
  if ((lVar7 == 0x10) && (lVar7 = (**(code **)(*plVar4 + 0x50))(plVar4), lVar7 == 0x10)) {
    cVar1 = (**(code **)(*plVar4 + 0x40))(plVar4,lVar5);
    if (cVar1 == '\0') {
      pFVar8 = FAutomationTestFramework::Get();
      pwVar10 = L"File truncation request failed: %s";
LAB_141c9f3f6:
      pFVar12 = pFVar8->CurrentTest;
      pcVar11 = *(code **)(pFVar12->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_48,pwVar10);
      goto LAB_141c9f419;
    }
    lVar7 = (**(code **)(*plVar4 + 0x50))(plVar4);
    if (lVar7 != lVar5) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar12 = pFVar8->CurrentTest;
      pcVar11 = *(code **)(pFVar12->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_48,
                 L"File was not the expected size after truncation (got %lld, expected %lld): %s");
      goto LAB_141c9f419;
    }
    local_res20[0] = 0;
    cVar1 = (**(code **)(*plVar4 + 0x10))(plVar4,uVar6);
    if ((cVar1 != '\0') &&
       (cVar1 = (**(code **)(*plVar4 + 0x20))(plVar4,local_res20,4), cVar1 != '\0')) {
      pFVar8 = FAutomationTestFramework::Get();
      pwVar10 = L"File read seek outside the truncated range: %s";
      goto LAB_141c9f3f6;
    }
  }
  else {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar12 = pFVar8->CurrentTest;
    pcVar11 = *(code **)(pFVar12->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_48,L"File was not the expected size (got %lld, expected %lld): %s")
    ;
LAB_141c9f419:
    (*pcVar11)(pFVar12,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)*plVar4)(plVar4,1);
LAB_141c9f48b:
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar9.Data = local_58.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar3 + 0x88))(pIVar3,FVar9.Data);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

