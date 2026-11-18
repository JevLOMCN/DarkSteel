// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141bc7a70

EAutomationTestFlags __thiscall
FGenericPlatformMiscTest::GetTestFlags(FGenericPlatformMiscTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bc7a80

bool __thiscall FGenericPlatformMiscTest::IsStressTest(FGenericPlatformMiscTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bc7a90

uint __thiscall FGenericPlatformMiscTest::GetRequiredDeviceNum(FGenericPlatformMiscTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bc7aa0

FString * __thiscall
FGenericPlatformMiscTest::GetTestSourceFileName
          (FGenericPlatformMiscTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\GenericPlatform\\GenericPlatformMiscTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bc7ad0

int __thiscall FGenericPlatformMiscTest::GetTestSourceFileLine(FGenericPlatformMiscTest *this)

{
  return 0xb;
}

// GetTests @ 141bc7ae0

/* WARNING: Removing unreachable block (ram,0x000141bc7c5e) */

void __thiscall
FGenericPlatformMiscTest::GetTests
          (FGenericPlatformMiscTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bc7c80

bool __thiscall FGenericPlatformMiscTest::RunTest(FGenericPlatformMiscTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bc7d00

FString * __thiscall
FGenericPlatformMiscTest::GetBeautifiedTestName
          (FGenericPlatformMiscTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FGenericPlatformMiscTest @ 141be2d60

FGenericPlatformMiscTest * __thiscall
FGenericPlatformMiscTest::FGenericPlatformMiscTest(FGenericPlatformMiscTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FGenericPlatformMiscTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][GenericPlatform][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::GenericPlatform");
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
  ::FString::FString(&local_18,"[Core][GenericPlatform][SmokeFilter]");
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

// TestBody @ 141c14010

void __thiscall FGenericPlatformMiscTest::TestBody(FGenericPlatformMiscTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FAutomationTestFramework *pFVar6;
  TStringView<wchar_t> *pTVar7;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_58,L"Parse pakchunk index");
  (*pcVar2)(pFVar1,&local_58,0,0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pTVar7 = FGenericPlatformMisc::GetPakFilenamePrefix(&local_28);
  pFVar9 = (FScriptContainerElement *)0x0;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  pFVar8 = ::FString::ConstructFromPtrSize
                     ((FString *)&local_38,pTVar7->DataPtr,(int)*(undefined8 *)&pTVar7->Size);
  if (&local_88 != pFVar8) {
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    local_88.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_88.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if (local_38.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_38.DataPtr);
  }
  ::FString::ConcatFC(&local_58,&local_88,L"1-Windows");
  local_48.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
  iVar5 = 0;
  local_48.Size = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    local_48.Size = iVar5;
  }
  local_38.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
  local_38.Size = local_48.Size;
  local_38._12_4_ = local_48._12_4_;
  iVar3 = FGenericPlatformMisc::GetPakchunkIndexFromPakFile(&local_38);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (iVar3 != 1) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  pTVar7 = FGenericPlatformMisc::GetPakFilenamePrefix(&local_28);
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  pFVar8 = ::FString::ConstructFromPtrSize
                     ((FString *)&local_48,pTVar7->DataPtr,(int)*(undefined8 *)&pTVar7->Size);
  if (&local_78 != pFVar8) {
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_78.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_78.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  ::FString::ConcatCF((FString *)&local_38,L"../../../Content/Paks/",&local_78);
  ::FString::ConcatFC(&local_58,(FString *)&local_38,L"12-Windows");
  iVar3 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar3 = iVar5;
  }
  local_48.Size = iVar3;
  local_48.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
  iVar3 = FGenericPlatformMisc::GetPakchunkIndexFromPakFile(&local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.DataPtr);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (iVar3 != 0xc) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_38,L"Condition failed");
    (*pcVar2)(pFVar1,&local_38,0);
    if ((FScriptContainerElement *)local_38.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.DataPtr);
    }
  }
  pTVar7 = FGenericPlatformMisc::GetPakFilenamePrefix(&local_28);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  pFVar8 = ::FString::ConstructFromPtrSize
                     ((FString *)&local_38,pTVar7->DataPtr,(int)*(undefined8 *)&pTVar7->Size);
  if (&local_68 != pFVar8) {
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_68.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_68.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_38.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.DataPtr);
  }
  ::FString::ConcatFC(&local_58,&local_68,L"42");
  iVar3 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar3 = iVar5;
  }
  local_38.Size = iVar3;
  local_38.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
  iVar3 = FGenericPlatformMisc::GetPakchunkIndexFromPakFile(&local_38);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (iVar3 != 0x2a) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_38,L"Condition failed");
    (*pcVar2)(pFVar1,&local_38,0);
    if ((FScriptContainerElement *)local_38.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.DataPtr);
    }
  }
  pTVar7 = FGenericPlatformMisc::GetPakFilenamePrefix(&local_28);
  pFVar8 = ::FString::ConstructFromPtrSize
                     ((FString *)&local_38,pTVar7->DataPtr,(int)*(undefined8 *)&pTVar7->Size);
  iVar3 = iVar5;
  if (&local_18 != pFVar8) {
    pFVar9 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar3 = (pFVar8->Data).ArrayNum;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_38.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.DataPtr);
  }
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = iVar5;
  }
  local_38.Size = iVar4;
  local_38.DataPtr = (wchar_t *)pFVar9;
  iVar5 = FGenericPlatformMisc::GetPakchunkIndexFromPakFile(&local_38);
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  if (iVar5 != -1) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_38,L"Condition failed");
    (*pcVar2)(pFVar1,&local_38,0);
    if ((FScriptContainerElement *)local_38.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.DataPtr);
    }
  }
  return;
}

