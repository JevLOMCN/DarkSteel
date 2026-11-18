// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// GetTestFlags @ 1422b3780

EAutomationTestFlags __thiscall
FOptionalPropertyTestLayout::GetTestFlags(FOptionalPropertyTestLayout *this)

{
  return this->TestFlags;
}

// IsStressTest @ 1422b3790

bool __thiscall FOptionalPropertyTestLayout::IsStressTest(FOptionalPropertyTestLayout *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1422b37a0

uint __thiscall FOptionalPropertyTestLayout::GetRequiredDeviceNum(FOptionalPropertyTestLayout *this)

{
  return 1;
}

// GetTestSourceFileName @ 1422b37b0

FString * __thiscall
FOptionalPropertyTestLayout::GetTestSourceFileName
          (FOptionalPropertyTestLayout *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Tests\\OptionalPropertyTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1422b37e0

int __thiscall FOptionalPropertyTestLayout::GetTestSourceFileLine(FOptionalPropertyTestLayout *this)

{
  return 0xd9;
}

// GetTests @ 1422b37f0

/* WARNING: Removing unreachable block (ram,0x0001422b396e) */

void __thiscall
FOptionalPropertyTestLayout::GetTests
          (FOptionalPropertyTestLayout *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 1422b3990

bool __thiscall
FOptionalPropertyTestLayout::RunTest(FOptionalPropertyTestLayout *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 1422b39c0

FString * __thiscall
FOptionalPropertyTestLayout::GetBeautifiedTestName
          (FOptionalPropertyTestLayout *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FOptionalPropertyTestLayout @ 1422b7dc0

FOptionalPropertyTestLayout * __thiscall
FOptionalPropertyTestLayout::FOptionalPropertyTestLayout
          (FOptionalPropertyTestLayout *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FOptionalPropertyTestLayout__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][UObject][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"UE::CoreUObject::OptionalProperty::OptionalPropertyLayout")
  ;
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

// TestBody @ 1422c1770

void __thiscall
FOptionalPropertyTestLayout::TestBody(FOptionalPropertyTestLayout *this,FString *param_1)

{
  TOptional<FString> *pTVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  FProperty *pFVar4;
  FProperty *pFVar5;
  FProperty *pFVar6;
  FProperty *pFVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  FAutomationTestFramework *pFVar11;
  FText *pFVar12;
  FString *pFVar13;
  FName *pFVar14;
  wchar_t *pwVar15;
  FText *pFVar16;
  FOptionalPropertyLayout local_res18;
  FOptionalPropertyLayout local_res20;
  FOptionalPropertyLayout local_1d8;
  FOptionalPropertyLayout local_1d0;
  FText *local_1c8;
  FText *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  FOptionalTestObject local_1a8;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FName local_70;
  FName local_68 [2];
  TStringView<wchar_t> local_58;
  FText local_48;
  
  FOptionalTestObject::FOptionalTestObject(&local_1a8);
  bVar8 = FOptionalTestObject::IsValid(&local_1a8);
  if (bVar8) {
    if ((*(longlong *)&(local_1a8.StringProperty)->field_0x70 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValueProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                           ,0x18,L"Expected ValueProperty to be initialized"), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar4 = *(FProperty **)&(local_1a8.StringProperty)->field_0x70;
    local_res18.ValueProperty = pFVar4;
    if ((pFVar4 == (FProperty *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValueProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                           ,0x13,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(longlong *)&(local_1a8.TextProperty)->field_0x70 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValueProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                           ,0x18,L"Expected ValueProperty to be initialized"), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar5 = *(FProperty **)&(local_1a8.TextProperty)->field_0x70;
    local_res20.ValueProperty = pFVar5;
    if ((pFVar5 == (FProperty *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValueProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                           ,0x13,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(longlong *)&(local_1a8.NameProperty)->field_0x70 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValueProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                           ,0x18,L"Expected ValueProperty to be initialized"), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar6 = *(FProperty **)&(local_1a8.NameProperty)->field_0x70;
    local_1d8.ValueProperty = pFVar6;
    if ((pFVar6 == (FProperty *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValueProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                           ,0x13,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(longlong *)&(local_1a8.IntProperty)->field_0x70 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValueProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                           ,0x18,L"Expected ValueProperty to be initialized"), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar7 = *(FProperty **)&(local_1a8.IntProperty)->field_0x70;
    local_1d0.ValueProperty = pFVar7;
    if ((pFVar7 == (FProperty *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValueProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                           ,0x13,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    cVar9 = (**(code **)(pFVar4->_padding_ + 0x1a8))(pFVar4);
    if (cVar9 == '\0') {
      cVar9 = (**(code **)(pFVar4->_padding_ + 0x1a8))(pFVar4);
      if ((cVar9 != '\0') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ValueProperty->HasIntrusiveUnsetOptionalState()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                             ,0xa0,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar9 = *(char *)((longlong)&((local_1a8.Obj)->OptionalString).field0_0x0 +
                       (longlong)(pFVar4->ElementSize * pFVar4->ArrayDim));
    }
    else {
      cVar9 = (**(code **)(pFVar4->_padding_ + 0x1b8))(pFVar4,&(local_1a8.Obj)->OptionalString);
    }
    if (cVar9 != '\0') {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar2 = pFVar11->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_170,L"Condition expected to return false but returned true");
      (*pcVar3)(pFVar2,&local_170,0);
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
    }
    cVar9 = (**(code **)(pFVar5->_padding_ + 0x1a8))(pFVar5);
    if (cVar9 == '\0') {
      cVar9 = (**(code **)(pFVar5->_padding_ + 0x1a8))(pFVar5);
      if ((cVar9 != '\0') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ValueProperty->HasIntrusiveUnsetOptionalState()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                             ,0xa0,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar9 = *(char *)((longlong)&((local_1a8.Obj)->OptionalText).field0_0x0 +
                       (longlong)(pFVar5->ElementSize * pFVar5->ArrayDim));
    }
    else {
      cVar9 = (**(code **)(pFVar5->_padding_ + 0x1b8))(pFVar5,&(local_1a8.Obj)->OptionalText);
    }
    if (cVar9 != '\0') {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar2 = pFVar11->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_160,L"Condition expected to return false but returned true");
      (*pcVar3)(pFVar2,&local_160,0);
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
    }
    cVar9 = (**(code **)(pFVar6->_padding_ + 0x1a8))(pFVar6);
    if (cVar9 == '\0') {
      cVar9 = (**(code **)(pFVar6->_padding_ + 0x1a8))(pFVar6);
      if ((cVar9 != '\0') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ValueProperty->HasIntrusiveUnsetOptionalState()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                             ,0xa0,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar9 = *(char *)((longlong)&((local_1a8.Obj)->OptionalName).field0_0x0 +
                       (longlong)(pFVar6->ElementSize * pFVar6->ArrayDim));
    }
    else {
      cVar9 = (**(code **)(pFVar6->_padding_ + 0x1b8))(pFVar6,&(local_1a8.Obj)->OptionalName);
    }
    if (cVar9 != '\0') {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar2 = pFVar11->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_150,L"Condition expected to return false but returned true");
      (*pcVar3)(pFVar2,&local_150,0);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
    }
    cVar9 = (**(code **)(pFVar7->_padding_ + 0x1a8))(pFVar7);
    if (cVar9 == '\0') {
      cVar9 = (**(code **)(pFVar7->_padding_ + 0x1a8))(pFVar7);
      if ((cVar9 != '\0') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ValueProperty->HasIntrusiveUnsetOptionalState()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                             ,0xa0,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar9 = *(char *)((longlong)&((local_1a8.Obj)->OptionalInt).TypedValue +
                       (longlong)(pFVar7->ElementSize * pFVar7->ArrayDim));
    }
    else {
      cVar9 = (**(code **)(pFVar7->_padding_ + 0x1b8))(pFVar7,&(local_1a8.Obj)->OptionalInt);
    }
    if (cVar9 != '\0') {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar2 = pFVar11->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_140,L"Condition expected to return false but returned true");
      (*pcVar3)(pFVar2,&local_140,0);
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
    }
    pFVar16 = (FText *)&(local_1a8.Obj)->OptionalString;
    local_1b8 = pFVar16;
    local_1c8 = FOptionalPropertyLayout::MarkSetAndGetInitializedValuePointerToReplace
                          (&local_res18,pFVar16);
    if (*(int *)((longlong)&((local_1a8.Obj)->OptionalString).field0_0x0 + 0xc) == -1) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar2 = pFVar11->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_130,L"Condition failed");
      (*pcVar3)(pFVar2,&local_130,0);
      pFVar16 = local_1b8;
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
        pFVar16 = local_1b8;
      }
    }
    ::FString::operator=((FString *)local_1c8,L"Optional");
    if ((*(int *)((longlong)&((TOptional<FString> *)pFVar16)->field0_0x0 + 0xc) == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(int *)((longlong)&((TOptional<FString> *)pFVar16)->field0_0x0 + 8) == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)
                (((TOptional<FString> *)pFVar16)->field0_0x0).TypedValue.Data.AllocatorInstance.Data
      ;
    }
    iVar10 = FGenericPlatformStricmp::Stricmp(pwVar15,L"Optional");
    if (iVar10 != 0) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar2 = pFVar11->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_120,L"Condition failed");
      (*pcVar3)(pFVar2,&local_120,0);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
    }
    pFVar16 = (FText *)&(local_1a8.Obj)->OptionalText;
    local_1b8 = pFVar16;
    local_1c8 = FOptionalPropertyLayout::MarkSetAndGetInitializedValuePointerToReplace
                          (&local_res20,pFVar16);
    if ((((TOptional<FText> *)pFVar16)->field0_0x0).TypedValue.TextData.Reference ==
        (ITextData *)0x0) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar2 = pFVar11->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_110,L"Condition failed");
      (*pcVar3)(pFVar2,&local_110,0);
      pFVar16 = local_1b8;
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
        pFVar16 = local_1b8;
      }
    }
    uStack_1b0 = 8;
    local_1b8 = (FText *)0x1507bd300;
    local_58._12_4_ = uStack_1ac;
    local_58.Size = 8;
    local_58.DataPtr = L"Optional";
    pFVar12 = FText::FromStringView(&local_48,&local_58);
    FText::operator=(local_1c8,pFVar12);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    if (((pFVar16->TextData).Reference == (ITextData *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar13 = FText::ToString(pFVar16);
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    iVar10 = FGenericPlatformStricmp::Stricmp(pwVar15,L"Optional");
    if (iVar10 != 0) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar2 = pFVar11->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_100,L"Condition failed");
      (*pcVar3)(pFVar2,&local_100,0);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    pFVar16 = (FText *)&(local_1a8.Obj)->OptionalName;
    local_1b8 = pFVar16;
    local_1c8 = FOptionalPropertyLayout::MarkSetAndGetInitializedValuePointerToReplace
                          (&local_1d8,pFVar16);
    if ((((TOptional<FName> *)pFVar16)->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff)
    {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar2 = pFVar11->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_f0,L"Condition failed");
      (*pcVar3)(pFVar2,&local_f0,0);
      pFVar16 = local_1b8;
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        pFVar16 = local_1b8;
      }
    }
    pFVar14 = ::FName::FName(&local_70,"Optional");
    *(FName *)local_1c8 = *pFVar14;
    pFVar14 = ::FName::FName(local_68,"Optional");
    if (((((FName *)pFVar16)->ComparisonIndex).Value == 0xffffffff) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(FName *)pFVar16 != *pFVar14) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar2 = pFVar11->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_e0,L"Condition failed");
      (*pcVar3)(pFVar2,&local_e0,0);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
    }
    local_1c8 = (FText *)&(local_1a8.Obj)->OptionalInt;
    local_1b8 = FOptionalPropertyLayout::MarkSetAndGetInitializedValuePointerToReplace
                          (&local_1d0,local_1c8);
    if (((local_1a8.Obj)->OptionalInt).bIsSet == false) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar2 = pFVar11->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_d0,L"Condition failed");
      (*pcVar3)(pFVar2,&local_d0,0);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
    pFVar16 = local_1c8;
    *(undefined4 *)local_1b8 = 0x4f;
    if ((*(bool *)((longlong)local_1c8 + 4) == false) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(int *)&pFVar16->TextData != 0x4f) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar2 = pFVar11->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_c0,L"Condition failed");
      (*pcVar3)(pFVar2,&local_c0,0);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
    }
    pTVar1 = &(local_1a8.Obj)->OptionalString;
    FOptionalPropertyLayout::MarkUnset(&local_res18,pTVar1);
    FOptionalPropertyLayout::MarkUnset(&local_res20,&(local_1a8.Obj)->OptionalText);
    FOptionalPropertyLayout::MarkUnset(&local_1d8,&(local_1a8.Obj)->OptionalName);
    FOptionalPropertyLayout::MarkUnset(&local_1d0,&(local_1a8.Obj)->OptionalInt);
    cVar9 = (**(code **)(pFVar4->_padding_ + 0x1a8))(pFVar4);
    if (cVar9 == '\0') {
      cVar9 = (**(code **)(pFVar4->_padding_ + 0x1a8))(pFVar4);
      if ((cVar9 != '\0') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ValueProperty->HasIntrusiveUnsetOptionalState()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                             ,0xa0,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar9 = *(char *)((longlong)&pTVar1->field0_0x0 +
                       (longlong)(pFVar4->ElementSize * pFVar4->ArrayDim));
    }
    else {
      cVar9 = (**(code **)(pFVar4->_padding_ + 0x1b8))(pFVar4,pTVar1);
    }
    if (cVar9 != '\0') {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar2 = pFVar11->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_b0,L"Condition expected to return false but returned true");
      (*pcVar3)(pFVar2,&local_b0,0);
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
    }
    cVar9 = (**(code **)(pFVar5->_padding_ + 0x1a8))(pFVar5);
    if (cVar9 == '\0') {
      cVar9 = (**(code **)(pFVar5->_padding_ + 0x1a8))(pFVar5);
      if ((cVar9 != '\0') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ValueProperty->HasIntrusiveUnsetOptionalState()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                             ,0xa0,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar9 = *(char *)((longlong)&((local_1a8.Obj)->OptionalText).field0_0x0 +
                       (longlong)(pFVar5->ElementSize * pFVar5->ArrayDim));
    }
    else {
      cVar9 = (**(code **)(pFVar5->_padding_ + 0x1b8))(pFVar5,&(local_1a8.Obj)->OptionalText);
    }
    if (cVar9 != '\0') {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar2 = pFVar11->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_a0,L"Condition expected to return false but returned true");
      (*pcVar3)(pFVar2,&local_a0,0);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
    cVar9 = (**(code **)(pFVar6->_padding_ + 0x1a8))(pFVar6);
    if (cVar9 == '\0') {
      cVar9 = (**(code **)(pFVar6->_padding_ + 0x1a8))(pFVar6);
      if ((cVar9 != '\0') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ValueProperty->HasIntrusiveUnsetOptionalState()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                             ,0xa0,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar9 = *(char *)((longlong)&((local_1a8.Obj)->OptionalName).field0_0x0 +
                       (longlong)(pFVar6->ElementSize * pFVar6->ArrayDim));
    }
    else {
      cVar9 = (**(code **)(pFVar6->_padding_ + 0x1b8))(pFVar6,&(local_1a8.Obj)->OptionalName);
    }
    if (cVar9 != '\0') {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar2 = pFVar11->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_90,L"Condition expected to return false but returned true");
      (*pcVar3)(pFVar2,&local_90,0);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
    }
    cVar9 = (**(code **)(pFVar7->_padding_ + 0x1a8))(pFVar7);
    if (cVar9 == '\0') {
      cVar9 = (**(code **)(pFVar7->_padding_ + 0x1a8))(pFVar7);
      if ((cVar9 != '\0') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ValueProperty->HasIntrusiveUnsetOptionalState()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                             ,0xa0,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar9 = *(char *)((longlong)&((local_1a8.Obj)->OptionalInt).TypedValue +
                       (longlong)(pFVar7->ElementSize * pFVar7->ArrayDim));
    }
    else {
      cVar9 = (**(code **)(pFVar7->_padding_ + 0x1b8))(pFVar7,&(local_1a8.Obj)->OptionalInt);
    }
    if (cVar9 == '\0') {
      return;
    }
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_80,L"Condition expected to return false but returned true");
    (*pcVar3)(pFVar2,&local_80,0);
    local_180.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
  }
  else {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_180,L"Required condition failed, interrupting test");
    (*pcVar3)(pFVar2,&local_180,0);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  return;
}

