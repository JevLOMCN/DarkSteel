// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// GetTestFlags @ 1422b2f40

EAutomationTestFlags __thiscall
FOptionalPropertyTestCopyValueOut::GetTestFlags(FOptionalPropertyTestCopyValueOut *this)

{
  return this->TestFlags;
}

// IsStressTest @ 1422b2f50

bool __thiscall
FOptionalPropertyTestCopyValueOut::IsStressTest(FOptionalPropertyTestCopyValueOut *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1422b2f60

uint __thiscall
FOptionalPropertyTestCopyValueOut::GetRequiredDeviceNum(FOptionalPropertyTestCopyValueOut *this)

{
  return 1;
}

// GetTestSourceFileName @ 1422b2f70

FString * __thiscall
FOptionalPropertyTestCopyValueOut::GetTestSourceFileName
          (FOptionalPropertyTestCopyValueOut *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Tests\\OptionalPropertyTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1422b2fa0

int __thiscall
FOptionalPropertyTestCopyValueOut::GetTestSourceFileLine(FOptionalPropertyTestCopyValueOut *this)

{
  return 0x80;
}

// GetTests @ 1422b2fb0

/* WARNING: Removing unreachable block (ram,0x0001422b312e) */

void __thiscall
FOptionalPropertyTestCopyValueOut::GetTests
          (FOptionalPropertyTestCopyValueOut *this,
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

// RunTest @ 1422b3150

bool __thiscall
FOptionalPropertyTestCopyValueOut::RunTest(FOptionalPropertyTestCopyValueOut *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 1422b3180

FString * __thiscall
FOptionalPropertyTestCopyValueOut::GetBeautifiedTestName
          (FOptionalPropertyTestCopyValueOut *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FOptionalPropertyTestCopyValueOut @ 1422b7680

FOptionalPropertyTestCopyValueOut * __thiscall
FOptionalPropertyTestCopyValueOut::FOptionalPropertyTestCopyValueOut
          (FOptionalPropertyTestCopyValueOut *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FOptionalPropertyTestCopyValueOut__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][UObject][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"UE::CoreUObject::OptionalProperty::CopyValueOut");
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

// TestBody @ 1422c0010

void __thiscall
FOptionalPropertyTestCopyValueOut::TestBody
          (FOptionalPropertyTestCopyValueOut *this,FString *param_1)

{
  TOptional<FString> *_Dst;
  TOptional<FText> *_Dst_00;
  TOptional<FName> *_Dst_01;
  TOptional<int> *_Dst_02;
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  UOptionalPropertyTestObject *pUVar3;
  bool bVar4;
  int iVar5;
  FAutomationTestFramework *pFVar6;
  FString *pFVar7;
  FText *pFVar8;
  TOptional<FString>_u_0 *pTVar9;
  TOptional<FName>_u_0 *pTVar10;
  FName local_res18;
  undefined1 auStack_1b8 [40];
  TOptional<FName>_u_0 local_190;
  FScriptContainerElement *local_188;
  int local_180;
  int local_17c;
  FText local_178;
  undefined4 local_168;
  TOptional<FName>_u_0 local_164;
  TStringView<wchar_t> local_158;
  TOptional<FString>_u_0 local_148;
  FOptionalTestObject local_138;
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
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  FText local_30;
  
  FOptionalTestObject::FOptionalTestObject(&local_138);
  bVar4 = FOptionalTestObject::IsValid(&local_138);
  if (bVar4) {
    pFVar7 = ::FString::FString(&local_40,L"Optional");
    local_188 = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_180 = (pFVar7->Data).ArrayNum;
    local_17c = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
    if ((local_17c == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    local_158.Size = 8;
    local_158.DataPtr = L"Optional";
    pFVar8 = FText::FromStringView(&local_30,&local_158);
    FText::FText(&local_178,pFVar8);
    if ((local_178.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_30.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
    }
    ::FName::FName(&local_res18,"Optional");
    local_190.TypedValue = local_res18;
    if ((local_res18.ComparisonIndex.Value.Value == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    auStack_1b8._32_4_ = 0x3a;
    auStack_1b8[0x24] = '\x01';
    _Dst = &(local_138.Obj)->OptionalString;
    if (_Dst != (TOptional<FString> *)&local_188) {
      if ((*(uint *)&(local_138.StringProperty)->field_0x38 >> 0x1e & 1) == 0) {
        (**(code **)(*(longlong *)local_138.StringProperty + 0xf0))
                  (local_138.StringProperty,_Dst,&local_188,1);
      }
      else {
        memcpy(_Dst,&local_188,(longlong)*(int *)&(local_138.StringProperty)->field_0x34);
      }
    }
    _Dst_00 = &(local_138.Obj)->OptionalText;
    if ((FText *)_Dst_00 != &local_178) {
      if ((*(uint *)&(local_138.TextProperty)->field_0x38 >> 0x1e & 1) == 0) {
        (**(code **)(*(longlong *)local_138.TextProperty + 0xf0))
                  (local_138.TextProperty,_Dst_00,&local_178,1);
      }
      else {
        memcpy(_Dst_00,&local_178,(longlong)*(int *)&(local_138.TextProperty)->field_0x34);
      }
    }
    _Dst_01 = &(local_138.Obj)->OptionalName;
    if (&_Dst_01->field0_0x0 != &local_190) {
      if ((*(uint *)&(local_138.NameProperty)->field_0x38 >> 0x1e & 1) == 0) {
        (**(code **)(*(longlong *)local_138.NameProperty + 0xf0))
                  (local_138.NameProperty,_Dst_01,&local_190,1);
      }
      else {
        memcpy(_Dst_01,&local_190,(longlong)*(int *)&(local_138.NameProperty)->field_0x34);
      }
    }
    _Dst_02 = &(local_138.Obj)->OptionalInt;
    if (_Dst_02 != (TOptional<int> *)(auStack_1b8 + 0x20)) {
      if ((*(uint *)&(local_138.IntProperty)->field_0x38 >> 0x1e & 1) == 0) {
        (**(code **)(*(longlong *)local_138.IntProperty + 0xf0))
                  (local_138.IntProperty,_Dst_02,auStack_1b8 + 0x20,1);
      }
      else {
        memcpy(_Dst_02,auStack_1b8 + 0x20,(longlong)*(int *)&(local_138.IntProperty)->field_0x34);
      }
    }
    if (local_17c == -1) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_100,L"Condition failed");
      (*pcVar2)(pFVar1,&local_100);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    if (*(int *)((longlong)&((local_138.Obj)->OptionalString).field0_0x0 + 0xc) == -1) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_f0,L"Condition failed");
      (*pcVar2)(pFVar1,&local_f0);
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
    }
    if ((local_17c == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar9 = &local_148;
    if (*(int *)((longlong)&((local_138.Obj)->OptionalString).field0_0x0 + 0xc) != -1) {
      pTVar9 = &((local_138.Obj)->OptionalString).field0_0x0;
    }
    local_148.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_148._8_8_ = 0;
    iVar5 = (pTVar9->TypedValue).Data.ArrayNum;
    bVar4 = false;
    if (iVar5 == local_180) {
      if (1 < iVar5) {
        iVar5 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pTVar9->TypedValue).Data.AllocatorInstance.Data,
                           (wchar_t *)local_188);
        bVar4 = iVar5 != 0;
      }
    }
    else {
      bVar4 = iVar5 + local_180 != 1;
    }
    if (bVar4) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_e0,L"Condition failed");
      (*pcVar2)(pFVar1,&local_e0);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
    }
    if (local_178.TextData.Reference == (ITextData *)0x0) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_d0,L"Condition failed");
      (*pcVar2)(pFVar1,&local_d0);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
    if (((local_138.Obj)->OptionalText).field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0
       ) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_c0,L"Condition failed");
      (*pcVar2)(pFVar1,&local_c0);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
    }
    pFVar8 = FText::GetEmpty();
    if (((local_138.Obj)->OptionalText).field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0
       ) {
      pFVar8 = (FText *)&(local_138.Obj)->OptionalText;
    }
    if ((local_178.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar4 = FText::EqualTo(pFVar8,&local_178,Default);
    if (!bVar4) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_b0,L"Condition failed");
      (*pcVar2)(pFVar1,&local_b0,0);
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
    }
    if (local_190.TypedValue.ComparisonIndex.Value == 0xffffffff) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_a0,L"Condition failed");
      (*pcVar2)(pFVar1,&local_a0,0);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
    if (((local_138.Obj)->OptionalName).field0_0x0.TypedValue.ComparisonIndex.Value == 0xffffffff) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_90,L"Condition failed");
      (*pcVar2)(pFVar1,&local_90,0);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
    }
    if ((local_190.TypedValue.ComparisonIndex.Value == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_164 = (TOptional<FName>_u_0)0x0;
    pTVar10 = &local_164;
    if (((local_138.Obj)->OptionalName).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
      pTVar10 = &((local_138.Obj)->OptionalName).field0_0x0;
    }
    if (*pTVar10 != local_190) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_80,L"Condition failed");
      (*pcVar2)(pFVar1,&local_80,0);
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
    }
    if (auStack_1b8[0x24] == '\0') {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_70,L"Condition failed");
      (*pcVar2)(pFVar1,&local_70,0);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
    if (((local_138.Obj)->OptionalInt).bIsSet == false) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_60,L"Condition failed");
      (*pcVar2)(pFVar1,&local_60,0);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    pUVar3 = (UOptionalPropertyTestObject *)auStack_1b8;
    if (((local_138.Obj)->OptionalInt).bIsSet != false) {
      pUVar3 = local_138.Obj;
    }
    local_168 = 0;
    if ((auStack_1b8[0x24] == '\0') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pUVar3->OptionalInt).TypedValue != auStack_1b8._32_4_) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_50,L"Condition failed");
      (*pcVar2)(pFVar1,&local_50,0);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    if (local_178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
    }
    local_110.Data.AllocatorInstance.Data = local_188;
    if (local_17c == -1) {
      return;
    }
  }
  else {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_110,L"Required condition failed, interrupting test");
    (*pcVar2)(pFVar1,&local_110,0);
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  return;
}

