// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// GetTestFlags @ 1422b3200

EAutomationTestFlags __thiscall
FOptionalPropertyTestIdentical::GetTestFlags(FOptionalPropertyTestIdentical *this)

{
  return this->TestFlags;
}

// IsStressTest @ 1422b3210

bool __thiscall FOptionalPropertyTestIdentical::IsStressTest(FOptionalPropertyTestIdentical *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1422b3220

uint __thiscall
FOptionalPropertyTestIdentical::GetRequiredDeviceNum(FOptionalPropertyTestIdentical *this)

{
  return 1;
}

// GetTestSourceFileName @ 1422b3230

FString * __thiscall
FOptionalPropertyTestIdentical::GetTestSourceFileName
          (FOptionalPropertyTestIdentical *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Tests\\OptionalPropertyTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1422b3260

int __thiscall
FOptionalPropertyTestIdentical::GetTestSourceFileLine(FOptionalPropertyTestIdentical *this)

{
  return 0x9d;
}

// GetTests @ 1422b3270

/* WARNING: Removing unreachable block (ram,0x0001422b33ee) */

void __thiscall
FOptionalPropertyTestIdentical::GetTests
          (FOptionalPropertyTestIdentical *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

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

// RunTest @ 1422b3410

bool __thiscall
FOptionalPropertyTestIdentical::RunTest(FOptionalPropertyTestIdentical *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 1422b3440

FString * __thiscall
FOptionalPropertyTestIdentical::GetBeautifiedTestName
          (FOptionalPropertyTestIdentical *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FOptionalPropertyTestIdentical @ 1422b7a20

FOptionalPropertyTestIdentical * __thiscall
FOptionalPropertyTestIdentical::FOptionalPropertyTestIdentical
          (FOptionalPropertyTestIdentical *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FOptionalPropertyTestIdentical__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][UObject][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"UE::CoreUObject::OptionalProperty::Identical");
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

// TestBody @ 1422c0ad0

void __thiscall
FOptionalPropertyTestIdentical::TestBody(FOptionalPropertyTestIdentical *this,FString *param_1)

{
  TOptional<FString> *this_00;
  TOptional<FText> *pTVar1;
  TOptional<FName> *pTVar2;
  TOptional<int> *pTVar3;
  FAutomationTestBase *pFVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  bool bVar8;
  char cVar9;
  FAutomationTestFramework *pFVar10;
  FString *pFVar11;
  FText *pFVar12;
  TOptional<FString> *local_res18;
  undefined4 local_res20;
  undefined4 local_res24;
  int local_208;
  char local_204;
  FOptionalTestObject local_200;
  FString local_1d8;
  TOptional<FName>_u_0 local_1c8;
  FText local_1c0;
  FName local_1b0;
  FScriptContainerElement *local_1a8;
  undefined4 local_1a0;
  int local_19c;
  undefined1 local_198 [4];
  undefined1 local_194;
  longlong *local_190;
  undefined4 local_188;
  TStringView<wchar_t> local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FText local_48;
  
  FOptionalTestObject::FOptionalTestObject(&local_200);
  bVar8 = FOptionalTestObject::IsValid(&local_200);
  if (bVar8) {
    local_1a8 = (FScriptContainerElement *)0x0;
    local_1a0 = 0;
    local_190 = (longlong *)0x0;
    local_188 = 0;
    local_res24 = 0;
    local_194 = 0;
    local_19c = -1;
    local_res20 = 0xffffffff;
    cVar9 = (**(code **)(*(longlong *)local_200.StringProperty + 0xb8))
                      (local_200.StringProperty,&(local_200.Obj)->OptionalString,&local_1a8,0);
    if (cVar9 == '\0') {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_158,L"Condition failed");
      (*pcVar5)(pFVar4,&local_158,0);
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
    }
    cVar9 = (**(code **)(*(longlong *)local_200.TextProperty + 0xb8))
                      (local_200.TextProperty,&(local_200.Obj)->OptionalText,&local_190,0);
    if (cVar9 == '\0') {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_148,L"Condition failed");
      (*pcVar5)(pFVar4,&local_148,0);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
    cVar9 = (**(code **)(*(longlong *)local_200.NameProperty + 0xb8))
                      (local_200.NameProperty,&(local_200.Obj)->OptionalName,&local_res20,0);
    if (cVar9 == '\0') {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_138,L"Condition failed");
      (*pcVar5)(pFVar4,&local_138,0);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
    }
    cVar9 = (**(code **)(*(longlong *)local_200.IntProperty + 0xb8))
                      (local_200.IntProperty,&(local_200.Obj)->OptionalInt,local_198,0);
    if (cVar9 == '\0') {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_128,L"Condition failed");
      (*pcVar5)(pFVar4,&local_128,0);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
    }
    pFVar11 = ::FString::FString(&local_58,L"Optional");
    local_1d8.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.Data.ArrayNum = (pFVar11->Data).ArrayNum;
    local_1d8.Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
    if ((local_1d8.Data.ArrayMax == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_178.Size = 8;
    local_178.DataPtr = L"Optional";
    pFVar12 = FText::FromStringView(&local_48,&local_178);
    FText::FText(&local_1c0,pFVar12);
    if ((local_1c0.TextData.Reference == (ITextData *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    ::FName::FName(&local_1b0,"Optional");
    local_1c8.TypedValue = local_1b0;
    if ((local_1b0.ComparisonIndex.Value.Value == 0xffffffff) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = &(local_200.Obj)->OptionalString;
    local_208 = 0x3a;
    local_204 = '\x01';
    cVar9 = (**(code **)(*(longlong *)local_200.StringProperty + 0xb8))
                      (local_200.StringProperty,this_00,&local_1d8,0);
    if (cVar9 != '\0') {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_118,L"Condition expected to return false but returned true");
      (*pcVar5)(pFVar4,&local_118,0);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
    }
    cVar9 = (**(code **)(*(longlong *)local_200.TextProperty + 0xb8))
                      (local_200.TextProperty,&(local_200.Obj)->OptionalText,&local_1c0,0);
    if (cVar9 != '\0') {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_108,L"Condition expected to return false but returned true");
      (*pcVar5)(pFVar4,&local_108,0);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
    cVar9 = (**(code **)(*(longlong *)local_200.NameProperty + 0xb8))
                      (local_200.NameProperty,&(local_200.Obj)->OptionalName,&local_1c8,0);
    if (cVar9 != '\0') {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_f8,L"Condition expected to return false but returned true");
      (*pcVar5)(pFVar4,&local_f8,0);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
    cVar9 = (**(code **)(*(longlong *)local_200.IntProperty + 0xb8))
                      (local_200.IntProperty,&(local_200.Obj)->OptionalInt,&local_208,0);
    if (cVar9 != '\0') {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_e8,L"Condition expected to return false but returned true");
      (*pcVar5)(pFVar4,&local_e8,0);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
    if (&local_1d8 != (FString *)this_00) {
      if (local_1d8.Data.ArrayMax == -1) {
        if (*(int *)((longlong)&((local_200.Obj)->OptionalString).field0_0x0 + 0xc) != -1) {
          pFVar6 = (this_00->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
          (this_00->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&((local_200.Obj)->OptionalString).field0_0x0 + 8) = 0;
          *(undefined4 *)((longlong)&((local_200.Obj)->OptionalString).field0_0x0 + 0xc) =
               0xffffffff;
        }
      }
      else {
        pFVar6 = (this_00->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        ::FString::FString((FString *)this_00,&local_1d8);
        if ((*(int *)((longlong)&((local_200.Obj)->OptionalString).field0_0x0 + 0xc) == -1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    pTVar1 = &(local_200.Obj)->OptionalText;
    if (&local_1c0 != (FText *)pTVar1) {
      plVar7 = *(longlong **)&pTVar1->field0_0x0;
      if (local_1c0.TextData.Reference == (ITextData *)0x0) {
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x10))();
          (pTVar1->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
          ((local_200.Obj)->OptionalText).field0_0x0.TypedValue.Flags = 0;
        }
      }
      else {
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        (pTVar1->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
        *(ITextData **)&pTVar1->field0_0x0 = local_1c0.TextData.Reference;
        if (local_1c0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1c0.TextData.Reference + 8))
                    (local_1c0.TextData.Reference,&local_res18);
        }
        ((local_200.Obj)->OptionalText).field0_0x0.TypedValue.Flags = local_1c0.Flags;
        if (((pTVar1->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    pTVar2 = &(local_200.Obj)->OptionalName;
    if (&local_1c8 != &pTVar2->field0_0x0) {
      if (local_1c8.TypedValue.ComparisonIndex.Value.Value == 0xffffffff) {
        if ((pTVar2->field0_0x0).TypedValue.ComparisonIndex.Value != 0xffffffff) {
          (pTVar2->field0_0x0).TypedValue.ComparisonIndex.Value = 0xffffffff;
          ((local_200.Obj)->OptionalName).field0_0x0.TypedValue.Number = 0;
        }
      }
      else {
        (pTVar2->field0_0x0).TypedValue = (FName)local_1c8;
      }
    }
    pTVar3 = &(local_200.Obj)->OptionalInt;
    if ((TOptional<int> *)&local_208 != pTVar3) {
      if (local_204 == '\0') {
        if (((local_200.Obj)->OptionalInt).bIsSet != false) {
          ((local_200.Obj)->OptionalInt).bIsSet = false;
        }
      }
      else {
        pTVar3->TypedValue = local_208;
        ((local_200.Obj)->OptionalInt).bIsSet = true;
      }
    }
    local_res18 = &(local_200.Obj)->OptionalString;
    cVar9 = (**(code **)(*(longlong *)local_200.StringProperty + 0xb8))
                      (local_200.StringProperty,local_res18,&local_1d8,0);
    if (cVar9 == '\0') {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_d8,L"Condition failed");
      (*pcVar5)(pFVar4,&local_d8,0);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    local_1b0 = (FName)&(local_200.Obj)->OptionalText;
    cVar9 = (**(code **)(*(longlong *)local_200.TextProperty + 0xb8))
                      (local_200.TextProperty,local_1b0,&local_1c0,0);
    if (cVar9 == '\0') {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_c8,L"Condition failed");
      (*pcVar5)(pFVar4,&local_c8,0);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
    cVar9 = (**(code **)(*(longlong *)local_200.NameProperty + 0xb8))
                      (local_200.NameProperty,&(local_200.Obj)->OptionalName,&local_1c8,0);
    if (cVar9 == '\0') {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_b8,L"Condition failed");
      (*pcVar5)(pFVar4,&local_b8,0);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
    cVar9 = (**(code **)(*(longlong *)local_200.IntProperty + 0xb8))
                      (local_200.IntProperty,pTVar3,&local_208,0);
    if (cVar9 == '\0') {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_a8,L"Condition failed");
      (*pcVar5)(pFVar4,&local_a8,0);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    cVar9 = (**(code **)(*(longlong *)local_200.StringProperty + 0xb8))
                      (local_200.StringProperty,local_res18,&local_1a8,0);
    if (cVar9 != '\0') {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_98,L"Condition expected to return false but returned true");
      (*pcVar5)(pFVar4,&local_98,0);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    cVar9 = (**(code **)(*(longlong *)local_200.TextProperty + 0xb8))
                      (local_200.TextProperty,local_1b0,&local_190,0);
    if (cVar9 != '\0') {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_88,L"Condition expected to return false but returned true");
      (*pcVar5)(pFVar4,&local_88,0);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    cVar9 = (**(code **)(*(longlong *)local_200.NameProperty + 0xb8))
                      (local_200.NameProperty,&(local_200.Obj)->OptionalName,&local_res20,0);
    if (cVar9 != '\0') {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_78,L"Condition expected to return false but returned true");
      (*pcVar5)(pFVar4,&local_78,0);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    cVar9 = (**(code **)(*(longlong *)local_200.IntProperty + 0xb8))
                      (local_200.IntProperty,pTVar3,local_198,0);
    if (cVar9 != '\0') {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_68,L"Condition expected to return false but returned true");
      (*pcVar5)(pFVar4,&local_68,0);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    if (local_1c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1c0.TextData.Reference + 0x10))();
    }
    if ((local_1d8.Data.ArrayMax != -1) &&
       (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (local_190 != (longlong *)0x0) {
      (**(code **)(*local_190 + 0x10))();
    }
    local_168.Data.AllocatorInstance.Data = local_1a8;
    if (local_19c == -1) {
      return;
    }
  }
  else {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar4 = pFVar10->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_168,L"Required condition failed, interrupting test");
    (*pcVar5)(pFVar4,&local_168,0);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  return;
}

