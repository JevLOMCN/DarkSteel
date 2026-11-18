// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// GetTestFlags @ 1422b4ca0

EAutomationTestFlags __thiscall
FOptionalPropertyTestInitializeValue::GetTestFlags(FOptionalPropertyTestInitializeValue *this)

{
  return this->TestFlags;
}

// IsStressTest @ 1422b4cb0

bool __thiscall
FOptionalPropertyTestInitializeValue::IsStressTest(FOptionalPropertyTestInitializeValue *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1422b4cc0

uint __thiscall
FOptionalPropertyTestInitializeValue::GetRequiredDeviceNum
          (FOptionalPropertyTestInitializeValue *this)

{
  return 1;
}

// GetTestSourceFileName @ 1422b4cd0

FString * __thiscall
FOptionalPropertyTestInitializeValue::GetTestSourceFileName
          (FOptionalPropertyTestInitializeValue *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Tests\\OptionalPropertyTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1422b4d00

int __thiscall
FOptionalPropertyTestInitializeValue::GetTestSourceFileLine
          (FOptionalPropertyTestInitializeValue *this)

{
  return 0x3a;
}

// GetTests @ 1422b4d10

/* WARNING: Removing unreachable block (ram,0x0001422b4e8e) */

void __thiscall
FOptionalPropertyTestInitializeValue::GetTests
          (FOptionalPropertyTestInitializeValue *this,
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

// RunTest @ 1422b4eb0

bool __thiscall
FOptionalPropertyTestInitializeValue::RunTest
          (FOptionalPropertyTestInitializeValue *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 1422b4ee0

FString * __thiscall
FOptionalPropertyTestInitializeValue::GetBeautifiedTestName
          (FOptionalPropertyTestInitializeValue *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FOptionalPropertyTestInitializeValue @ 1422b7bf0

FOptionalPropertyTestInitializeValue * __thiscall
FOptionalPropertyTestInitializeValue::FOptionalPropertyTestInitializeValue
          (FOptionalPropertyTestInitializeValue *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FOptionalPropertyTestInitializeValue__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][UObject][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"UE::CoreUObject::OptionalProperty::InitializeValue");
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

// TestBody @ 1422c1520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FOptionalPropertyTestInitializeValue::TestBody
          (FOptionalPropertyTestInitializeValue *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  wchar_t *pwVar5;
  undefined1 auStack_98 [32];
  FString local_78;
  FOptionalTestObject local_68;
  int local_40 [2];
  undefined1 local_38 [4];
  char local_34;
  undefined1 local_30 [12];
  int local_24;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_98;
  FOptionalTestObject::FOptionalTestObject(&local_68);
  bVar3 = FOptionalTestObject::IsValid(&local_68);
  if (bVar3) {
    if ((*(uint *)&(local_68.StringProperty)->field_0x38 >> 9 & 1) == 0) {
      (**(code **)(*(longlong *)local_68.StringProperty + 0x150))();
    }
    else {
      memset(local_30,0,
             (longlong)*(int *)&(local_68.StringProperty)->field_0x34 *
             (longlong)*(int *)&(local_68.StringProperty)->field_0x30);
    }
    if ((*(uint *)&(local_68.TextProperty)->field_0x38 >> 9 & 1) == 0) {
      (**(code **)(*(longlong *)local_68.TextProperty + 0x150))();
    }
    else {
      memset(local_20,0,
             (longlong)*(int *)&(local_68.TextProperty)->field_0x34 *
             (longlong)*(int *)&(local_68.TextProperty)->field_0x30);
    }
    if ((*(uint *)&(local_68.NameProperty)->field_0x38 >> 9 & 1) == 0) {
      (**(code **)(*(longlong *)local_68.NameProperty + 0x150))();
    }
    else {
      memset(local_40,0,
             (longlong)*(int *)&(local_68.NameProperty)->field_0x34 *
             (longlong)*(int *)&(local_68.NameProperty)->field_0x30);
    }
    if ((*(uint *)&(local_68.IntProperty)->field_0x38 >> 9 & 1) == 0) {
      (**(code **)(*(longlong *)local_68.IntProperty + 0x150))(local_68.IntProperty,local_38);
    }
    else {
      memset(local_38,0,
             (longlong)*(int *)&(local_68.IntProperty)->field_0x34 *
             (longlong)*(int *)&(local_68.IntProperty)->field_0x30);
    }
    if (local_24 != -1) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_78,L"Condition expected to return false but returned true");
      (*pcVar2)(pFVar1,&local_78,0);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    if (local_20[0] != 0) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_78,L"Condition expected to return false but returned true");
      (*pcVar2)(pFVar1,&local_78,0);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    if (local_40[0] != -1) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_78,L"Condition expected to return false but returned true");
      (*pcVar2)(pFVar1,&local_78,0);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    if (local_34 == '\0') {
      return;
    }
    pFVar4 = FAutomationTestFramework::Get();
    pwVar5 = L"Condition expected to return false but returned true";
  }
  else {
    pFVar4 = FAutomationTestFramework::Get();
    pwVar5 = L"Required condition failed, interrupting test";
  }
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_78,pwVar5);
  (*pcVar2)(pFVar1,&local_78,0);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

