// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// GetTestFlags @ 1422b4f60

EAutomationTestFlags __thiscall
FOptionalPropertyTestClearValue::GetTestFlags(FOptionalPropertyTestClearValue *this)

{
  return this->TestFlags;
}

// IsStressTest @ 1422b4f70

bool __thiscall FOptionalPropertyTestClearValue::IsStressTest(FOptionalPropertyTestClearValue *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1422b4f80

uint __thiscall
FOptionalPropertyTestClearValue::GetRequiredDeviceNum(FOptionalPropertyTestClearValue *this)

{
  return 1;
}

// GetTestSourceFileName @ 1422b4f90

FString * __thiscall
FOptionalPropertyTestClearValue::GetTestSourceFileName
          (FOptionalPropertyTestClearValue *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Tests\\OptionalPropertyTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1422b4fc0

int __thiscall
FOptionalPropertyTestClearValue::GetTestSourceFileLine(FOptionalPropertyTestClearValue *this)

{
  return 0x4f;
}

// GetTests @ 1422b4fd0

/* WARNING: Removing unreachable block (ram,0x0001422b514e) */

void __thiscall
FOptionalPropertyTestClearValue::GetTests
          (FOptionalPropertyTestClearValue *this,
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

// RunTest @ 1422b5170

bool __thiscall
FOptionalPropertyTestClearValue::RunTest(FOptionalPropertyTestClearValue *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 1422b51a0

FString * __thiscall
FOptionalPropertyTestClearValue::GetBeautifiedTestName
          (FOptionalPropertyTestClearValue *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FOptionalPropertyTestClearValue @ 1422b72e0

FOptionalPropertyTestClearValue * __thiscall
FOptionalPropertyTestClearValue::FOptionalPropertyTestClearValue
          (FOptionalPropertyTestClearValue *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FOptionalPropertyTestClearValue__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][UObject][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"UE::CoreUObject::OptionalProperty::ClearValue");
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
  ::FString::FString(&local_18,"[Core][UObject][SmokeFilter]");
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

// TestBody @ 1422bf510

void __thiscall
FOptionalPropertyTestClearValue::TestBody(FOptionalPropertyTestClearValue *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  FAutomationTestFramework *pFVar5;
  FText *pFVar6;
  TStringView<wchar_t> local_b8;
  FOptionalTestObject local_a8;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  FText local_30;
  
  FOptionalTestObject::FOptionalTestObject(&local_a8);
  bVar4 = FOptionalTestObject::IsValid(&local_a8);
  if (bVar4) {
    pFVar3 = ((local_a8.Obj)->OptionalString).field0_0x0.TypedValue.Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::FString::FString((FString *)&(local_a8.Obj)->OptionalString,L"Optional");
    if ((*(int *)((longlong)&((local_a8.Obj)->OptionalString).field0_0x0 + 0xc) == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_b8.Size = 8;
    local_b8.DataPtr = L"Optional";
    pFVar6 = FText::FromStringView(&local_30,&local_b8);
    TOptional<FText>::Emplace<FText>(&(local_a8.Obj)->OptionalText,pFVar6);
    if (local_30.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
    }
    ::FName::FName((FName *)&(local_a8.Obj)->OptionalName,L"Optional");
    if ((((local_a8.Obj)->OptionalName).field0_0x0.TypedValue.ComparisonIndex.Value == 0xffffffff)
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x171,
                              L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                             ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ((local_a8.Obj)->OptionalInt).TypedValue = 0x2a;
    ((local_a8.Obj)->OptionalInt).bIsSet = true;
    if ((*(ulonglong *)&(local_a8.StringProperty)->field_0x38 & 0x1000000200) == 0x1000000200) {
      memset(&(local_a8.Obj)->OptionalString,0,
             (longlong)*(int *)&(local_a8.StringProperty)->field_0x34);
    }
    else {
      (**(code **)(*(longlong *)local_a8.StringProperty + 0x130))();
    }
    if (*(int *)((longlong)&((local_a8.Obj)->OptionalString).field0_0x0 + 0xc) != -1) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar1 = pFVar5->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_70,L"Condition expected to return false but returned true");
      (*pcVar2)(pFVar1,&local_70,0);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
    if ((*(ulonglong *)&(local_a8.TextProperty)->field_0x38 & 0x1000000200) == 0x1000000200) {
      memset(&(local_a8.Obj)->OptionalText,0,(longlong)*(int *)&(local_a8.TextProperty)->field_0x34)
      ;
    }
    else {
      (**(code **)(*(longlong *)local_a8.TextProperty + 0x130))();
    }
    if (((local_a8.Obj)->OptionalText).field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)
    {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar1 = pFVar5->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_60,L"Condition expected to return false but returned true");
      (*pcVar2)(pFVar1,&local_60,0);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    if ((*(ulonglong *)&(local_a8.NameProperty)->field_0x38 & 0x1000000200) == 0x1000000200) {
      memset(&(local_a8.Obj)->OptionalName,0,(longlong)*(int *)&(local_a8.NameProperty)->field_0x34)
      ;
    }
    else {
      (**(code **)(*(longlong *)local_a8.NameProperty + 0x130))();
    }
    if (((local_a8.Obj)->OptionalName).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar1 = pFVar5->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_50,L"Condition expected to return false but returned true");
      (*pcVar2)(pFVar1,&local_50,0);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    if ((*(ulonglong *)&(local_a8.IntProperty)->field_0x38 & 0x1000000200) == 0x1000000200) {
      memset(&(local_a8.Obj)->OptionalInt,0,(longlong)*(int *)&(local_a8.IntProperty)->field_0x34);
    }
    else {
      (**(code **)(*(longlong *)local_a8.IntProperty + 0x130))
                (local_a8.IntProperty,&(local_a8.Obj)->OptionalInt);
    }
    if (((local_a8.Obj)->OptionalInt).bIsSet == false) {
      return;
    }
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_40,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_40,0);
    local_80.Data.AllocatorInstance.Data = local_40.Data.AllocatorInstance.Data;
  }
  else {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_80,L"Required condition failed, interrupting test");
    (*pcVar2)(pFVar1,&local_80,0);
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  return;
}

