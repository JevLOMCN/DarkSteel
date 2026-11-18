// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141d58cf0

EAutomationTestFlags __thiscall FStringRemoveFromTest::GetTestFlags(FStringRemoveFromTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141d58d00

bool __thiscall FStringRemoveFromTest::IsStressTest(FStringRemoveFromTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141d58d10

uint __thiscall FStringRemoveFromTest::GetRequiredDeviceNum(FStringRemoveFromTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141d58d20

FString * __thiscall
FStringRemoveFromTest::GetTestSourceFileName
          (FStringRemoveFromTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\String\\RemoveFromTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141d58d50

int __thiscall FStringRemoveFromTest::GetTestSourceFileLine(FStringRemoveFromTest *this)

{
  return 10;
}

// GetTests @ 141d58d70

/* WARNING: Removing unreachable block (ram,0x000141d58eee) */

void __thiscall
FStringRemoveFromTest::GetTests
          (FStringRemoveFromTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141d58f70

bool __thiscall FStringRemoveFromTest::RunTest(FStringRemoveFromTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141d58fa0

FString * __thiscall
FStringRemoveFromTest::GetBeautifiedTestName
          (FStringRemoveFromTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FStringRemoveFromTest @ 141d69b80

FStringRemoveFromTest * __thiscall
FStringRemoveFromTest::FStringRemoveFromTest(FStringRemoveFromTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FStringRemoveFromTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][String][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::String::RemoveFrom");
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

// TestBody @ 141d7b410

/* WARNING: Removing unreachable block (ram,0x000141d7b60e) */
/* WARNING: Removing unreachable block (ram,0x000141d7b4c6) */
/* WARNING: Removing unreachable block (ram,0x000141d7c39d) */
/* WARNING: Removing unreachable block (ram,0x000141d7c437) */

void __thiscall FStringRemoveFromTest::TestBody(FStringRemoveFromTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FAutomationTestFramework *pFVar6;
  TStringView<wchar_t> *pTVar7;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_68,L"RemoveFromStart");
  (*pcVar2)(pFVar1,&local_68,0);
  if (local_68.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_68.DataPtr);
  }
  iVar4 = wcsncmp(L"Ab",L"AbCABCAbCABC",2);
  if (iVar4 == 0) {
    local_68.Size = 10;
    local_68.DataPtr = L"CABCAbCABC";
    iVar4 = FGenericPlatformStricmp::Strnicmp(L"CABCAbCABC",L"CABCAbCABC",10);
    if (iVar4 != 0) goto LAB_141d7b4dc;
  }
  else {
LAB_141d7b4dc:
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_68.DataPtr);
    }
  }
  local_68.DataPtr = L"AbCABCAbCABC";
  local_68._12_4_ = local_48._12_4_;
  local_68.Size = 0xc;
  iVar4 = wcsncmp(L"Abc",L"AbCABCAbCABC",3);
  if (iVar4 == 0) {
LAB_141d7b57e:
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_68.DataPtr);
    }
  }
  else {
    iVar4 = local_68.Size;
    if (iVar4 != 0) {
      iVar5 = 0xc;
      if (iVar4 < 0xc) {
        iVar5 = iVar4;
      }
      iVar5 = FGenericPlatformStricmp::Strnicmp(local_68.DataPtr,L"AbCABCAbCABC",(longlong)iVar5);
      if (iVar5 != 0) goto LAB_141d7b57e;
    }
    if (iVar4 != 0xc) goto LAB_141d7b57e;
  }
  iVar4 = FGenericPlatformStricmp::Strnicmp(L"Abc",L"AbCABCAbCABC",3);
  if (iVar4 == 0) {
    local_68.Size = 9;
    local_68.DataPtr = L"ABCAbCABC";
    iVar4 = FGenericPlatformStricmp::Strnicmp(L"ABCAbCABC",L"ABCAbCABC",9);
    if (iVar4 != 0) goto LAB_141d7b624;
  }
  else {
LAB_141d7b624:
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_68.DataPtr);
    }
  }
  local_68.DataPtr = L"AbCABCAbCABC";
  local_68._12_4_ = local_48._12_4_;
  local_68.Size = 0xc;
  iVar4 = FGenericPlatformStricmp::Strnicmp(L"AbD",L"AbCABCAbCABC",3);
  if (iVar4 == 0) {
LAB_141d7b6cc:
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_68.DataPtr);
    }
  }
  else {
    iVar4 = local_68.Size;
    if (iVar4 != 0) {
      iVar5 = 0xc;
      if (iVar4 < 0xc) {
        iVar5 = iVar4;
      }
      iVar5 = FGenericPlatformStricmp::Strnicmp(local_68.DataPtr,L"AbCABCAbCABC",(longlong)iVar5);
      if (iVar5 != 0) goto LAB_141d7b6cc;
    }
    if (iVar4 != 0xc) goto LAB_141d7b6cc;
  }
  local_48.DataPtr = L"";
  local_48._8_8_ = (ulonglong)(uint)local_48._12_4_ << 0x20;
  iVar4 = wcsncmp(L"A",L"A",1);
  if (iVar4 == 0) {
    local_68.DataPtr = L"";
    local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  }
  else {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_68.DataPtr);
    }
  }
  local_48.DataPtr = L"";
  local_48._8_8_ = local_48._8_8_ & 0xffffffff00000000;
  iVar4 = FGenericPlatformStricmp::Strnicmp(L"A",L"A",1);
  if (iVar4 == 0) {
    local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  }
  else {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_68.DataPtr);
    }
  }
  local_58.Size = 2;
  local_68.DataPtr = L"A";
  local_68.Size = 1;
  local_58.DataPtr = L"AA";
  local_48.DataPtr = L"A";
  local_48.Size = 1;
  local_48._12_4_ = local_68._12_4_;
  pTVar7 = UE::String::RemoveFromStart<wchar_t>(&local_68,&local_58,&local_48,CaseSensitive);
  if ((pTVar7->Size != 1) ||
     (iVar4 = FGenericPlatformStricmp::Strnicmp(pTVar7->DataPtr,L"A",1), iVar4 != 0)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_58,L"Condition failed");
    (*pcVar2)(pFVar1,&local_58,0);
    if (local_58.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
  }
  local_68.DataPtr = L"AA";
  local_68.Size = 2;
  local_48.DataPtr = L"A";
  local_48.Size = 1;
  local_48._12_4_ = local_58._12_4_;
  local_58.DataPtr = L"AA";
  local_58.Size = 2;
  local_58._12_4_ = local_68._12_4_;
  pTVar7 = UE::String::RemoveFromStart<wchar_t>(&local_68,&local_58,&local_48,IgnoreCase);
  if ((pTVar7->Size != 1) ||
     (iVar4 = FGenericPlatformStricmp::Strnicmp(pTVar7->DataPtr,L"A",1), iVar4 != 0)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_58,L"Condition failed");
    (*pcVar2)(pFVar1,&local_58,0);
    if (local_58.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
  }
  local_68.DataPtr = L"A";
  local_68.Size = 1;
  local_48.DataPtr = L"a";
  local_48.Size = 1;
  local_48._12_4_ = local_58._12_4_;
  local_58.DataPtr = L"A";
  local_58.Size = 1;
  local_58._12_4_ = local_68._12_4_;
  pTVar7 = UE::String::RemoveFromStart<wchar_t>(&local_68,&local_58,&local_48,CaseSensitive);
  if ((pTVar7->Size != 1) ||
     (iVar4 = FGenericPlatformStricmp::Strnicmp(pTVar7->DataPtr,L"A",1), iVar4 != 0)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_58,L"Condition failed");
    (*pcVar2)(pFVar1,&local_58,0);
    if (local_58.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
  }
  local_68.DataPtr = L"A";
  local_68.Size = 1;
  local_48.DataPtr = L"a";
  local_48.Size = 1;
  local_48._12_4_ = local_58._12_4_;
  local_58.DataPtr = L"A";
  local_58.Size = 1;
  local_58._12_4_ = local_68._12_4_;
  pTVar7 = UE::String::RemoveFromStart<wchar_t>(&local_68,&local_58,&local_48,IgnoreCase);
  if (pTVar7->Size != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_58,L"Condition failed");
    (*pcVar2)(pFVar1,&local_58,0);
    if (local_58.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
  }
  local_58.Size = 1;
  local_68.Size = 3;
  local_68.DataPtr = L"ABC";
  local_48.DataPtr = L"BC";
  local_48.Size = 2;
  local_58.DataPtr = L"A";
  pTVar7 = UE::String::RemoveFromStart<wchar_t>(&local_38,&local_68,&local_58,CaseSensitive);
  bVar3 = TStringView<wchar_t>::UEOpEquals(pTVar7,&local_48);
  if (!bVar3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  local_48.Size = 1;
  local_58.Size = 3;
  local_48.DataPtr = L"a";
  local_68.DataPtr = L"ABC";
  local_68.Size = 3;
  local_58.DataPtr = L"ABC";
  pTVar7 = UE::String::RemoveFromStart<wchar_t>(&local_38,&local_58,&local_48,CaseSensitive);
  local_48.DataPtr = local_68.DataPtr;
  local_48.Size = local_68.Size;
  local_48._12_4_ = local_68._12_4_;
  bVar3 = TStringView<wchar_t>::UEOpEquals(pTVar7,&local_48);
  if (!bVar3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  local_48.Size = 1;
  local_58.Size = 3;
  local_48.DataPtr = L"a";
  local_68.DataPtr = L"BC";
  local_68.Size = 2;
  local_58.DataPtr = L"ABC";
  pTVar7 = UE::String::RemoveFromStart<wchar_t>(&local_38,&local_58,&local_48,IgnoreCase);
  local_48.DataPtr = local_68.DataPtr;
  local_48.Size = local_68.Size;
  local_48._12_4_ = local_68._12_4_;
  bVar3 = TStringView<wchar_t>::UEOpEquals(pTVar7,&local_48);
  if (!bVar3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  local_48.Size = 1;
  local_58.Size = 3;
  local_48.DataPtr = L"B";
  local_68.DataPtr = L"ABC";
  local_68.Size = 3;
  local_58.DataPtr = L"ABC";
  pTVar7 = UE::String::RemoveFromStart<wchar_t>(&local_38,&local_58,&local_48,CaseSensitive);
  local_48.DataPtr = local_68.DataPtr;
  local_48.Size = local_68.Size;
  local_48._12_4_ = local_68._12_4_;
  bVar3 = TStringView<wchar_t>::UEOpEquals(pTVar7,&local_48);
  if (!bVar3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  local_48.Size = 1;
  local_58.Size = 3;
  local_48.DataPtr = L"C";
  local_68.DataPtr = L"ABC";
  local_68.Size = 3;
  local_58.DataPtr = L"ABC";
  pTVar7 = UE::String::RemoveFromStart<wchar_t>(&local_38,&local_58,&local_48,CaseSensitive);
  local_48.DataPtr = local_68.DataPtr;
  local_48.Size = local_68.Size;
  local_48._12_4_ = local_68._12_4_;
  bVar3 = TStringView<wchar_t>::UEOpEquals(pTVar7,&local_48);
  if (!bVar3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  local_48.Size = 2;
  local_58.Size = 3;
  local_48.DataPtr = L"BC";
  local_58.DataPtr = L"ABC";
  local_68.DataPtr = L"ABC";
  local_68.Size = 3;
  pTVar7 = UE::String::RemoveFromStart<wchar_t>(&local_38,&local_58,&local_48,CaseSensitive);
  local_48.DataPtr = local_68.DataPtr;
  local_48.Size = local_68.Size;
  local_48._12_4_ = local_68._12_4_;
  bVar3 = TStringView<wchar_t>::UEOpEquals(pTVar7,&local_48);
  if (!bVar3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_48,L"RemoveFromEnd");
  (*pcVar2)(pFVar1,&local_48,0);
  if (local_48.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  local_48.Size = 3;
  local_58.Size = 0xc;
  local_48.DataPtr = L"ABC";
  local_58.DataPtr = L"AbCABCAbCABC";
  local_68.DataPtr = L"AbCABCAbC";
  local_68.Size = 9;
  pTVar7 = UE::String::RemoveFromEnd<wchar_t>(&local_38,&local_58,&local_48,CaseSensitive);
  local_48.DataPtr = local_68.DataPtr;
  local_48.Size = local_68.Size;
  local_48._12_4_ = local_68._12_4_;
  bVar3 = TStringView<wchar_t>::UEOpEquals(pTVar7,&local_48);
  if (!bVar3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  local_48.Size = 3;
  local_58.Size = 0xc;
  local_48.DataPtr = L"abc";
  local_68.DataPtr = L"AbCABCAbCABC";
  local_68.Size = 0xc;
  local_58.DataPtr = L"AbCABCAbCABC";
  pTVar7 = UE::String::RemoveFromEnd<wchar_t>(&local_38,&local_58,&local_48,CaseSensitive);
  local_48.DataPtr = local_68.DataPtr;
  local_48.Size = local_68.Size;
  local_48._12_4_ = local_68._12_4_;
  bVar3 = TStringView<wchar_t>::UEOpEquals(pTVar7,&local_48);
  if (!bVar3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  local_48.Size = 3;
  local_58.Size = 0xc;
  local_48.DataPtr = L"abc";
  local_58.DataPtr = L"AbCABCAbCABC";
  local_68.DataPtr = L"AbCABCAbC";
  local_68.Size = 9;
  pTVar7 = UE::String::RemoveFromEnd<wchar_t>(&local_38,&local_58,&local_48,IgnoreCase);
  local_48.DataPtr = local_68.DataPtr;
  local_48.Size = local_68.Size;
  local_48._12_4_ = local_68._12_4_;
  bVar3 = TStringView<wchar_t>::UEOpEquals(pTVar7,&local_48);
  if (!bVar3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  local_48.Size = 3;
  local_58.Size = 0xc;
  local_48.DataPtr = L"abD";
  local_68.DataPtr = L"AbCABCAbCABC";
  local_68.Size = 0xc;
  local_58.DataPtr = L"AbCABCAbCABC";
  pTVar7 = UE::String::RemoveFromEnd<wchar_t>(&local_38,&local_58,&local_48,IgnoreCase);
  local_48.DataPtr = local_68.DataPtr;
  local_48.Size = local_68.Size;
  local_48._12_4_ = local_68._12_4_;
  bVar3 = TStringView<wchar_t>::UEOpEquals(pTVar7,&local_48);
  if (!bVar3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  local_48.Size = 1;
  local_58._8_8_ = local_58._8_8_ & 0xffffffff00000000;
  local_58.DataPtr = L"";
  local_68.DataPtr = L"";
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  local_48.DataPtr = L"A";
  pTVar7 = UE::String::RemoveFromEnd<wchar_t>(&local_38,&local_58,&local_48,CaseSensitive);
  local_48.DataPtr = local_68.DataPtr;
  local_48.Size = local_68.Size;
  local_48._12_4_ = local_68._12_4_;
  bVar3 = TStringView<wchar_t>::UEOpEquals(pTVar7,&local_48);
  if (!bVar3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  local_48.Size = 3;
  local_58._8_8_ = local_58._8_8_ & 0xffffffff00000000;
  local_48.DataPtr = L"ABC";
  local_58.DataPtr = L"";
  local_68.DataPtr = L"";
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  pTVar7 = UE::String::RemoveFromEnd<wchar_t>(&local_38,&local_58,&local_48,CaseSensitive);
  local_48.DataPtr = local_68.DataPtr;
  local_48.Size = local_68.Size;
  local_48._12_4_ = local_68._12_4_;
  bVar3 = TStringView<wchar_t>::UEOpEquals(pTVar7,&local_48);
  if (!bVar3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  local_48.Size = 1;
  local_58.Size = 1;
  local_48.DataPtr = L"A";
  local_58.DataPtr = L"A";
  local_68.DataPtr = L"";
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  pTVar7 = UE::String::RemoveFromEnd<wchar_t>(&local_38,&local_58,&local_48,CaseSensitive);
  local_48.DataPtr = local_68.DataPtr;
  local_48.Size = local_68.Size;
  local_48._12_4_ = local_68._12_4_;
  bVar3 = TStringView<wchar_t>::UEOpEquals(pTVar7,&local_48);
  if (!bVar3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  local_48.DataPtr = L"";
  local_48._8_8_ = local_48._8_8_ & 0xffffffff00000000;
  iVar4 = FGenericPlatformStricmp::Strnicmp(L"A",L"A",1);
  if (iVar4 == 0) {
    local_48.DataPtr = L"A";
    local_48._8_8_ = local_48._8_8_ & 0xffffffff00000000;
  }
  else {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  iVar4 = wcsncmp(L"A",L"A",1);
  if (iVar4 == 0) {
    local_48.DataPtr = L"AA";
    local_48.Size = 1;
    iVar4 = FGenericPlatformStricmp::Strnicmp(L"AA",L"A",1);
    if (iVar4 != 0) goto LAB_141d7c3b2;
  }
  else {
LAB_141d7c3b2:
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  iVar4 = FGenericPlatformStricmp::Strnicmp(L"A",L"A",1);
  if (iVar4 == 0) {
    local_48.DataPtr = L"AA";
    local_48.Size = 1;
    iVar4 = FGenericPlatformStricmp::Strnicmp(L"AA",L"A",1);
    if (iVar4 != 0) goto LAB_141d7c44c;
  }
  else {
LAB_141d7c44c:
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  local_68.DataPtr = L"A";
  local_68._12_4_ = local_38._12_4_;
  local_68.Size = 1;
  iVar4 = wcsncmp(L"a",L"A",1);
  if (iVar4 != 0) {
    iVar4 = local_68.Size;
    if (iVar4 != 0) {
      iVar5 = 1;
      if (iVar4 < 1) {
        iVar5 = iVar4;
      }
      iVar5 = FGenericPlatformStricmp::Strnicmp(local_68.DataPtr,L"A",(longlong)iVar5);
      if (iVar5 != 0) goto LAB_141d7c4f0;
    }
    if (iVar4 == 1) goto LAB_141d7c52d;
  }
LAB_141d7c4f0:
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString((FString *)&local_48,L"Condition failed");
  (*pcVar2)(pFVar1,&local_48,0);
  if (local_48.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
LAB_141d7c52d:
  local_48.Size = 1;
  local_58.Size = 1;
  local_48.DataPtr = L"a";
  local_58.DataPtr = L"A";
  pTVar7 = UE::String::RemoveFromEnd<wchar_t>(&local_38,&local_58,&local_48,IgnoreCase);
  if (pTVar7->Size != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  local_48.Size = 1;
  local_58.Size = 3;
  local_48.DataPtr = L"C";
  local_58.DataPtr = L"ABC";
  pTVar7 = UE::String::RemoveFromEnd<wchar_t>(&local_38,&local_58,&local_48,CaseSensitive);
  if ((pTVar7->Size != 2) ||
     (iVar4 = FGenericPlatformStricmp::Strnicmp(pTVar7->DataPtr,L"AB",2), iVar4 != 0)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  local_48.DataPtr = L"ABC";
  local_48.Size = 3;
  iVar4 = wcsncmp(L"c",L"C",1);
  local_68.DataPtr = L"ABC";
  local_68._12_4_ = local_38._12_4_;
  local_68.Size = 2;
  if (iVar4 != 0) {
    local_68.Size = 3;
  }
  local_58.DataPtr = L"ABC";
  local_58.Size = local_68.Size;
  local_58._12_4_ = local_68._12_4_;
  bVar3 = TStringView<wchar_t>::UEOpEquals(&local_58,&local_48);
  if (!bVar3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  local_48.Size = 1;
  local_58.Size = 3;
  local_48.DataPtr = L"c";
  local_58.DataPtr = L"ABC";
  local_68.DataPtr = L"AB";
  local_68.Size = 2;
  pTVar7 = UE::String::RemoveFromEnd<wchar_t>(&local_38,&local_58,&local_48,IgnoreCase);
  local_48.DataPtr = local_68.DataPtr;
  local_48.Size = local_68.Size;
  local_48._12_4_ = local_68._12_4_;
  bVar3 = TStringView<wchar_t>::UEOpEquals(pTVar7,&local_48);
  if (!bVar3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  local_48.Size = 1;
  local_58.Size = 3;
  local_48.DataPtr = L"A";
  local_58.DataPtr = L"ABC";
  local_68.DataPtr = L"ABC";
  local_68.Size = 3;
  pTVar7 = UE::String::RemoveFromEnd<wchar_t>(&local_38,&local_58,&local_48,CaseSensitive);
  local_48.DataPtr = local_68.DataPtr;
  local_48.Size = local_68.Size;
  local_48._12_4_ = local_68._12_4_;
  bVar3 = TStringView<wchar_t>::UEOpEquals(pTVar7,&local_48);
  if (!bVar3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  local_48.Size = 1;
  local_58.Size = 3;
  local_48.DataPtr = L"B";
  local_68.DataPtr = L"ABC";
  local_68.Size = 3;
  local_58.DataPtr = L"ABC";
  pTVar7 = UE::String::RemoveFromEnd<wchar_t>(&local_38,&local_58,&local_48,CaseSensitive);
  local_48.DataPtr = local_68.DataPtr;
  local_48.Size = local_68.Size;
  local_48._12_4_ = local_68._12_4_;
  bVar3 = TStringView<wchar_t>::UEOpEquals(pTVar7,&local_48);
  if (!bVar3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  local_48.Size = 2;
  local_58.Size = 3;
  local_48.DataPtr = L"AB";
  local_58.DataPtr = L"ABC";
  local_68.DataPtr = L"ABC";
  local_68.Size = 3;
  pTVar7 = UE::String::RemoveFromEnd<wchar_t>(&local_38,&local_58,&local_48,CaseSensitive);
  local_48.DataPtr = local_68.DataPtr;
  local_48.Size = local_68.Size;
  local_48._12_4_ = local_68._12_4_;
  bVar3 = TStringView<wchar_t>::UEOpEquals(pTVar7,&local_48);
  if (!bVar3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  return;
}

