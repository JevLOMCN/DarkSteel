// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 10

// GetTestFlags @ 146abfef0

EAutomationTestFlags __thiscall
FSystem__GameplayTags__Manager__IsValidGameplayTagString::GetTestFlags
          (FSystem__GameplayTags__Manager__IsValidGameplayTagString *this)

{
  return this->TestFlags;
}

// IsStressTest @ 146abff00

bool __thiscall
FSystem__GameplayTags__Manager__IsValidGameplayTagString::IsStressTest
          (FSystem__GameplayTags__Manager__IsValidGameplayTagString *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146abff10

uint __thiscall
FSystem__GameplayTags__Manager__IsValidGameplayTagString::GetRequiredDeviceNum
          (FSystem__GameplayTags__Manager__IsValidGameplayTagString *this)

{
  return 1;
}

// GetTestSourceFileName @ 146abff20

FString * __thiscall
FSystem__GameplayTags__Manager__IsValidGameplayTagString::GetTestSourceFileName
          (FSystem__GameplayTags__Manager__IsValidGameplayTagString *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\Tests\\GameplayTagTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146abff50

int __thiscall
FSystem__GameplayTags__Manager__IsValidGameplayTagString::GetTestSourceFileLine
          (FSystem__GameplayTags__Manager__IsValidGameplayTagString *this)

{
  return 0x1ab;
}

// GetTests @ 146abff60

/* WARNING: Removing unreachable block (ram,0x000146ac00de) */

void __thiscall
FSystem__GameplayTags__Manager__IsValidGameplayTagString::GetTests
          (FSystem__GameplayTags__Manager__IsValidGameplayTagString *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 146ac0140

bool __thiscall
FSystem__GameplayTags__Manager__IsValidGameplayTagString::RunTest
          (FSystem__GameplayTags__Manager__IsValidGameplayTagString *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 146ac0170

FString * __thiscall
FSystem__GameplayTags__Manager__IsValidGameplayTagString::GetBeautifiedTestName
          (FSystem__GameplayTags__Manager__IsValidGameplayTagString *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FSystem__GameplayTags__Manager__IsValidGameplayTagString @ 146acc1c0

FSystem__GameplayTags__Manager__IsValidGameplayTagString * __thiscall
FSystem__GameplayTags__Manager__IsValidGameplayTagString::
FSystem__GameplayTags__Manager__IsValidGameplayTagString
          (FSystem__GameplayTags__Manager__IsValidGameplayTagString *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FSystem__GameplayTags__Manager__IsValidGameplayTagString__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::GameplayTags::Manager::IsValidGameplayTagString");
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

// TestBody @ 146aeddc0

void __thiscall
FSystem__GameplayTags__Manager__IsValidGameplayTagString::TestBody
          (FSystem__GameplayTags__Manager__IsValidGameplayTagString *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  UGameplayTagsManager *pUVar4;
  FAutomationTestFramework *pFVar5;
  FString *pFVar6;
  int iVar7;
  FString *pFVar8;
  TStringView<wchar_t> local_38;
  FText local_28;
  TStringView<wchar_t> local_18;
  
  pUVar4 = UGameplayTagsManager::Get();
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_28,L"Valid tag: no modifications required");
  (*pcVar2)(pFVar1,&local_28,0,0);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_28.TextData.Reference);
  }
  FText::FText(&local_28);
  local_38.Size = 9;
  pFVar8 = &pUVar4->InvalidTagCharacters;
  local_38.DataPtr = L"Valid.Tag";
  bVar3 = UE::GameplayTags::Private::IsValidGameplayTagString<FString>
                    (&local_38,&local_28,(FString *)0x0,pFVar8);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_38,L"Condition failed");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_38.DataPtr);
    }
  }
  bVar3 = FText::IsEmpty(&local_28);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_38,L"Condition failed");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_38.DataPtr);
    }
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_28,L"Tag with a leading period");
  (*pcVar2)(pFVar1,&local_28,0,0);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_28.TextData.Reference);
  }
  FText::FText(&local_28);
  local_18.Size = 4;
  local_18.DataPtr = L".Tag";
  local_38.DataPtr = (wchar_t *)0x0;
  local_38.Size = 0;
  local_38._12_4_ = 0;
  bVar3 = UE::GameplayTags::Private::IsValidGameplayTagString<FString>
                    (&local_18,&local_28,(FString *)&local_38,pFVar8);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar2)(pFVar1,&local_18);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  bVar3 = FText::IsEmpty(&local_28);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition expected to return false but returned true")
    ;
    (*pcVar2)(pFVar1,&local_18);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  pFVar6 = FText::ToString(&local_28);
  (*pcVar2)(pFVar1,pFVar6,0,0);
  local_18.DataPtr = local_38.DataPtr;
  iVar7 = 0;
  local_18.Size = local_38.Size + -1;
  if (local_38.Size == 0) {
    local_18.Size = iVar7;
  }
  bVar3 = UE::GameplayTags::Private::IsValidGameplayTagString<FString>
                    (&local_18,(FText *)0x0,(FString *)0x0,pFVar8);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_38.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_38.DataPtr);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_18,L"Tag with a trailing period");
  (*pcVar2)(pFVar1,&local_18,0,0);
  if (local_18.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  FText::FText(&local_28);
  local_38.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L"Tag.";
  local_38.Size = 0;
  local_38._12_4_ = 0;
  local_18.Size = 4;
  bVar3 = UE::GameplayTags::Private::IsValidGameplayTagString<FString>
                    (&local_18,&local_28,(FString *)&local_38,pFVar8);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar2)(pFVar1,&local_18);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  bVar3 = FText::IsEmpty(&local_28);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition expected to return false but returned true")
    ;
    (*pcVar2)(pFVar1,&local_18);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  pFVar6 = FText::ToString(&local_28);
  (*pcVar2)(pFVar1,pFVar6,0,0);
  local_18.DataPtr = local_38.DataPtr;
  local_18.Size = local_38.Size + -1;
  if (local_38.Size == 0) {
    local_18.Size = iVar7;
  }
  bVar3 = UE::GameplayTags::Private::IsValidGameplayTagString<FString>
                    (&local_18,(FText *)0x0,(FString *)0x0,pFVar8);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_38.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_38.DataPtr);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_18,L"Tag with a leading space");
  (*pcVar2)(pFVar1,&local_18,0,0);
  if (local_18.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  FText::FText(&local_28);
  local_38.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L" Tag";
  local_38.Size = 0;
  local_38._12_4_ = 0;
  local_18.Size = 4;
  bVar3 = UE::GameplayTags::Private::IsValidGameplayTagString<FString>
                    (&local_18,&local_28,(FString *)&local_38,pFVar8);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar2)(pFVar1,&local_18);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  bVar3 = FText::IsEmpty(&local_28);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition expected to return false but returned true")
    ;
    (*pcVar2)(pFVar1,&local_18);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  pFVar6 = FText::ToString(&local_28);
  (*pcVar2)(pFVar1,pFVar6,0,0);
  local_18.DataPtr = local_38.DataPtr;
  local_18.Size = local_38.Size + -1;
  if (local_38.Size == 0) {
    local_18.Size = iVar7;
  }
  bVar3 = UE::GameplayTags::Private::IsValidGameplayTagString<FString>
                    (&local_18,(FText *)0x0,(FString *)0x0,pFVar8);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_38.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_38.DataPtr);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_18,L"Tag with a trailing space");
  (*pcVar2)(pFVar1,&local_18,0,0);
  if (local_18.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  FText::FText(&local_28);
  local_38.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L"Tag ";
  local_38.Size = 0;
  local_38._12_4_ = 0;
  local_18.Size = 4;
  bVar3 = UE::GameplayTags::Private::IsValidGameplayTagString<FString>
                    (&local_18,&local_28,(FString *)&local_38,pFVar8);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar2)(pFVar1,&local_18);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  bVar3 = FText::IsEmpty(&local_28);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition expected to return false but returned true")
    ;
    (*pcVar2)(pFVar1,&local_18);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  pFVar6 = FText::ToString(&local_28);
  (*pcVar2)(pFVar1,pFVar6,0,0);
  local_18.DataPtr = local_38.DataPtr;
  local_18.Size = local_38.Size + -1;
  if (local_38.Size == 0) {
    local_18.Size = iVar7;
  }
  bVar3 = UE::GameplayTags::Private::IsValidGameplayTagString<FString>
                    (&local_18,(FText *)0x0,(FString *)0x0,pFVar8);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_38.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_38.DataPtr);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_18,L"Tag with both leading and trailing unwanted characters")
  ;
  (*pcVar2)(pFVar1,&local_18,0,0);
  if (local_18.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  FText::FText(&local_28);
  local_38.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L" . Tag . ";
  local_38.Size = 0;
  local_38._12_4_ = 0;
  local_18.Size = 9;
  bVar3 = UE::GameplayTags::Private::IsValidGameplayTagString<FString>
                    (&local_18,&local_28,(FString *)&local_38,pFVar8);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar2)(pFVar1,&local_18);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  bVar3 = FText::IsEmpty(&local_28);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition expected to return false but returned true")
    ;
    (*pcVar2)(pFVar1,&local_18);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  pFVar6 = FText::ToString(&local_28);
  (*pcVar2)(pFVar1,pFVar6,0,0);
  local_18.DataPtr = local_38.DataPtr;
  local_18.Size = local_38.Size + -1;
  if (local_38.Size == 0) {
    local_18.Size = 0;
  }
  bVar3 = UE::GameplayTags::Private::IsValidGameplayTagString<FString>
                    (&local_18,(FText *)0x0,(FString *)0x0,pFVar8);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_38.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_38.DataPtr);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_18,L"Tag with an invalid character inside");
  (*pcVar2)(pFVar1,&local_18,0,0);
  if (local_18.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  FText::FText(&local_28);
  local_38.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L"Tag\t,Name";
  local_38.Size = 0;
  local_38._12_4_ = 0;
  local_18.Size = 9;
  bVar3 = UE::GameplayTags::Private::IsValidGameplayTagString<FString>
                    (&local_18,&local_28,(FString *)&local_38,pFVar8);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar2)(pFVar1,&local_18);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  bVar3 = FText::IsEmpty(&local_28);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition expected to return false but returned true")
    ;
    (*pcVar2)(pFVar1,&local_18);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  pFVar6 = FText::ToString(&local_28);
  (*pcVar2)(pFVar1,pFVar6,0,0);
  local_18.DataPtr = local_38.DataPtr;
  local_18.Size = local_38.Size + -1;
  if (local_38.Size == 0) {
    local_18.Size = 0;
  }
  bVar3 = UE::GameplayTags::Private::IsValidGameplayTagString<FString>
                    (&local_18,(FText *)0x0,(FString *)0x0,pFVar8);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_38.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_38.DataPtr);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_18,
                     L"Tag with both leading and trailing unwanted characters and invalid characters inside"
                    );
  (*pcVar2)(pFVar1,&local_18,0,0);
  if (local_18.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  FText::FText(&local_28);
  local_38.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L" . Tag\t,Name . ";
  local_38.Size = 0;
  local_38._12_4_ = 0;
  local_18.Size = 0xf;
  bVar3 = UE::GameplayTags::Private::IsValidGameplayTagString<FString>
                    (&local_18,&local_28,(FString *)&local_38,pFVar8);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar2)(pFVar1,&local_18);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  bVar3 = FText::IsEmpty(&local_28);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition expected to return false but returned true")
    ;
    (*pcVar2)(pFVar1,&local_18);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  pFVar6 = FText::ToString(&local_28);
  (*pcVar2)(pFVar1,pFVar6,0,0);
  local_18.DataPtr = local_38.DataPtr;
  local_18.Size = local_38.Size + -1;
  if (local_38.Size == 0) {
    local_18.Size = iVar7;
  }
  bVar3 = UE::GameplayTags::Private::IsValidGameplayTagString<FString>
                    (&local_18,(FText *)0x0,(FString *)0x0,pFVar8);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_38.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_38.DataPtr);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

