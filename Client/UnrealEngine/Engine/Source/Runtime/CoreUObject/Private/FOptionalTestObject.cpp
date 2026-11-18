// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FOptionalTestObject @ 1422b8160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FOptionalTestObject * __thiscall FOptionalTestObject::FOptionalTestObject(FOptionalTestObject *this)

{
  UStruct *this_00;
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  UOptionalPropertyTestObject *pUVar5;
  FName *pFVar6;
  FOptionalProperty *pFVar7;
  FAutomationTestFramework *pFVar8;
  longlong *plVar9;
  undefined1 auStack_168 [32];
  FString local_148;
  FName local_138 [2];
  undefined1 local_128 [128];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  ::FName::FName(local_138,L"/Engine/TestPackage");
  if (local_138[0] == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)0x0,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar3 = Z_Construct_UClass_UPackage_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_128,pUVar3);
  local_128._16_4_ = local_138[0].ComparisonIndex.Value;
  local_128._20_4_ = local_138[0].Number;
  local_128._8_8_ = (UObject *)0x0;
  local_128._48_8_ = (FObjectInstancingGraph *)0x0;
  local_128._56_8_ = (UPackage *)0x0;
  local_128._24_4_ = RF_Transient;
  local_128._40_8_ = (UObject *)0x0;
  local_128[0x20] = false;
  pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_128);
  if (local_128._64_8_ != 0) {
    plVar9 = (longlong *)(local_128 + 0x50);
    if ((longlong *)local_128._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_128._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  FObjectInitializer::AssertIfInConstructor
            (pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UOptionalPropertyTestObject_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar3);
  local_a8._8_8_ = pUVar4;
  pUVar5 = (UOptionalPropertyTestObject *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar9 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  this->Obj = pUVar5;
  this_00 = (UStruct *)pUVar5->_padding_;
  pFVar6 = ::FName::FName((FName *)&local_148,"OptionalString");
  pFVar7 = (FOptionalProperty *)UStruct::FindPropertyByName(this_00,*pFVar6);
  if ((pFVar7 == (FOptionalProperty *)0x0) ||
     ((*(ulonglong *)(*(longlong *)&pFVar7->field_0x8 + 0x18) & 0x100000000000000) == 0)) {
    this->StringProperty = (FOptionalProperty *)0x0;
  }
  else {
    this->StringProperty = pFVar7;
    pFVar6 = ::FName::FName((FName *)&local_148,"OptionalText");
    pFVar7 = (FOptionalProperty *)UStruct::FindPropertyByName(this_00,*pFVar6);
    if ((pFVar7 == (FOptionalProperty *)0x0) ||
       ((*(ulonglong *)(*(longlong *)&pFVar7->field_0x8 + 0x18) & 0x100000000000000) == 0)) {
      this->TextProperty = (FOptionalProperty *)0x0;
    }
    else {
      this->TextProperty = pFVar7;
      pFVar6 = ::FName::FName((FName *)&local_148,"OptionalName");
      pFVar7 = (FOptionalProperty *)UStruct::FindPropertyByName(this_00,*pFVar6);
      if ((pFVar7 == (FOptionalProperty *)0x0) ||
         ((*(ulonglong *)(*(longlong *)&pFVar7->field_0x8 + 0x18) & 0x100000000000000) == 0)) {
        this->NameProperty = (FOptionalProperty *)0x0;
      }
      else {
        this->NameProperty = pFVar7;
        pFVar6 = ::FName::FName((FName *)&local_148,"OptionalInt");
        pFVar7 = (FOptionalProperty *)UStruct::FindPropertyByName(this_00,*pFVar6);
        if ((pFVar7 != (FOptionalProperty *)0x0) &&
           ((*(ulonglong *)(*(longlong *)&pFVar7->field_0x8 + 0x18) & 0x100000000000000) != 0)) {
          this->IntProperty = pFVar7;
          return this;
        }
        this->IntProperty = (FOptionalProperty *)0x0;
      }
    }
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_148,L"Required condition failed, interrupting test");
  (*pcVar2)(pFVar1,&local_148,0);
  if ((FName)local_148.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return this;
}

// IsValid @ 1422bdaa0

bool __thiscall FOptionalTestObject::IsValid(FOptionalTestObject *this)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FAutomationTestFramework *pFVar3;
  FString local_18;
  
  if (this->StringProperty == (FOptionalProperty *)0x0) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_18,L"Condition failed");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (this->TextProperty == (FOptionalProperty *)0x0) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_18,L"Condition failed");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (this->NameProperty == (FOptionalProperty *)0x0) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_18,L"Condition failed");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (this->IntProperty == (FOptionalProperty *)0x0) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_18,L"Condition failed");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

