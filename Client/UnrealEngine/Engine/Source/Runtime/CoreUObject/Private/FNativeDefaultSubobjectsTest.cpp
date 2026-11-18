// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// GetTestFlags @ 1422c6c90

EAutomationTestFlags __thiscall
UE::FNativeDefaultSubobjectsTest::GetTestFlags(FNativeDefaultSubobjectsTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 1422c6ca0

bool __thiscall UE::FNativeDefaultSubobjectsTest::IsStressTest(FNativeDefaultSubobjectsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1422c6cb0

uint __thiscall
UE::FNativeDefaultSubobjectsTest::GetRequiredDeviceNum(FNativeDefaultSubobjectsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1422c6cc0

FString * __thiscall
UE::FNativeDefaultSubobjectsTest::GetTestSourceFileName
          (FNativeDefaultSubobjectsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Tests\\UObject\\SubobjectInstancingTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1422c6cf0

int __thiscall
UE::FNativeDefaultSubobjectsTest::GetTestSourceFileLine(FNativeDefaultSubobjectsTest *this)

{
  return 0x731;
}

// GetTests @ 1422c6d00

/* WARNING: Removing unreachable block (ram,0x0001422c6e7e) */

void __thiscall
UE::FNativeDefaultSubobjectsTest::GetTests
          (FNativeDefaultSubobjectsTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = Core::Private::
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
    iVar4 = Core::Private::
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

// RunTest @ 1422c6ea0

bool __thiscall
UE::FNativeDefaultSubobjectsTest::RunTest(FNativeDefaultSubobjectsTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 1422c6ed0

FString * __thiscall
UE::FNativeDefaultSubobjectsTest::GetBeautifiedTestName
          (FNativeDefaultSubobjectsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FNativeDefaultSubobjectsTest @ 1422ccec0

FNativeDefaultSubobjectsTest * __thiscall
UE::FNativeDefaultSubobjectsTest::FNativeDefaultSubobjectsTest
          (FNativeDefaultSubobjectsTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FNativeDefaultSubobjectsTest_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[CoreUObject][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"CoreUObject::NativeDefaultSubobjects");
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
  ::FString::FString(&local_18,"[CoreUObject][EngineFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// TestBody @ 1422e7f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::FNativeDefaultSubobjectsTest::TestBody(FNativeDefaultSubobjectsTest *this,FString *param_1)

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  UObject *pUVar4;
  UObjectBaseUtility *this_00;
  USubobjectInstancingTestObject *pUVar5;
  USubobjectInstancingTestDirectlyNestedObject *pUVar6;
  USubobjectInstancingTestIndirectlyNestedObject *pUVar7;
  longlong lVar8;
  bool bVar9;
  FAutomationTestFramework *pFVar10;
  UClass *pUVar11;
  UPackage *pUVar12;
  USubobjectInstancingTestOuterObject *pUVar13;
  UObject *pUVar14;
  TObjectPtr<USubobjectInstancingTestObject>_u_0 *pTVar15;
  uint uVar16;
  longlong *plVar17;
  wchar_t *pwVar18;
  undefined1 auStackY_e8 [32];
  FString local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pFVar10 = FAutomationTestFramework::Get();
  pFVar2 = pFVar10->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_a8,L"Class default subobjects");
  (*pcVar3)(pFVar2,&local_a8,0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pUVar11 = USubobjectInstancingTestOuterObject::StaticClass();
  if ((pUVar11->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar11);
  }
  pUVar14 = (pUVar11->ClassDefaultObject).field0_0x0.DebugPtr;
  if (*(UObjectBaseUtility **)&pUVar14[1].field_0x10 == (UObjectBaseUtility *)0x0) {
    pFVar10 = FAutomationTestFramework::Get();
    pwVar18 = L"Required condition failed, interrupting test";
  }
  else {
    bVar9 = UObjectBaseUtility::IsInOuter(*(UObjectBaseUtility **)&pUVar14[1].field_0x10,pUVar14);
    if (!bVar9) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar2 = pFVar10->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_a8,L"Condition failed");
      (*pcVar3)(pFVar2,&local_a8,0);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    if ((*(uint *)(*(longlong *)&pUVar14[1].field_0x10 + 8) >> 5 & 1) == 0) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar2 = pFVar10->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_a8,L"Condition failed");
      (*pcVar3)(pFVar2,&local_a8,0);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    if ((*(uint *)(*(longlong *)&pUVar14[1].field_0x10 + 8) >> 0x12 & 1) == 0) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar2 = pFVar10->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_a8,L"Condition failed");
      (*pcVar3)(pFVar2,&local_a8,0);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    uVar16 = *(uint *)&pUVar14->field_0x8 & 0x69;
    if ((*(uint *)(*(longlong *)&pUVar14[1].field_0x10 + 8) & uVar16) != uVar16) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar2 = pFVar10->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_a8,L"Condition failed");
      (*pcVar3)(pFVar2,&local_a8,0);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    bVar9 = UObjectBaseUtility::IsTemplate
                      (*(UObjectBaseUtility **)&pUVar14[1].field_0x10,
                       RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar9) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar2 = pFVar10->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_a8,L"Condition failed");
      (*pcVar3)(pFVar2,&local_a8,0);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    bVar9 = UObjectBaseUtility::IsDefaultSubobject(*(UObjectBaseUtility **)&pUVar14[1].field_0x10);
    if (!bVar9) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar2 = pFVar10->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_a8,L"Condition failed");
      (*pcVar3)(pFVar2,&local_a8,0);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    bVar9 = UObjectBaseUtility::IsTemplateForSubobjects
                      (*(UObjectBaseUtility **)&pUVar14[1].field_0x10,
                       RF_InheritableComponentTemplate|RF_DefaultSubObject|RF_ClassDefaultObject);
    if (!bVar9) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar2 = pFVar10->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_a8,L"Condition failed");
      (*pcVar3)(pFVar2,&local_a8,0);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    pUVar4 = *(UObject **)&pUVar14[0xe].field_0x8;
    if (pUVar4 == (UObject *)0x0) {
      pFVar10 = FAutomationTestFramework::Get();
      pwVar18 = L"Required condition failed, interrupting test";
    }
    else if (*(UObjectBaseUtility **)&pUVar4[1].field_0x18 == (UObjectBaseUtility *)0x0) {
      pFVar10 = FAutomationTestFramework::Get();
      pwVar18 = L"Required condition failed, interrupting test";
    }
    else {
      bVar9 = UObjectBaseUtility::IsInOuter(*(UObjectBaseUtility **)&pUVar4[1].field_0x18,pUVar4);
      if (!bVar9) {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar2 = pFVar10->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_a8,L"Condition failed");
        (*pcVar3)(pFVar2,&local_a8,0);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      bVar9 = UObjectBaseUtility::IsTemplate
                        (*(UObjectBaseUtility **)(*(longlong *)&pUVar14[0xe].field_0x8 + 0x40),
                         RF_ArchetypeObject|RF_ClassDefaultObject);
      if (!bVar9) {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar2 = pFVar10->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_a8,L"Condition failed");
        (*pcVar3)(pFVar2,&local_a8,0);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      bVar9 = UObjectBaseUtility::IsDefaultSubobject
                        (*(UObjectBaseUtility **)(*(longlong *)&pUVar14[0xe].field_0x8 + 0x40));
      if (!bVar9) {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar2 = pFVar10->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_a8,L"Condition failed");
        (*pcVar3)(pFVar2,&local_a8,0);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      bVar9 = UObjectBaseUtility::IsTemplateForSubobjects
                        (*(UObjectBaseUtility **)(*(longlong *)&pUVar14[0xe].field_0x8 + 0x40),
                         RF_InheritableComponentTemplate|RF_DefaultSubObject|RF_ClassDefaultObject);
      if (!bVar9) {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar2 = pFVar10->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_a8,L"Condition failed");
        (*pcVar3)(pFVar2,&local_a8,0);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      pUVar4 = *(UObject **)&pUVar14[0xe].field_0x10;
      if (pUVar4 == (UObject *)0x0) {
        pFVar10 = FAutomationTestFramework::Get();
        pwVar18 = L"Required condition failed, interrupting test";
      }
      else {
        this_00 = *(UObjectBaseUtility **)&pUVar4[1].field_0x8;
        if (this_00 == (UObjectBaseUtility *)0x0) {
          pFVar10 = FAutomationTestFramework::Get();
          pwVar18 = L"Required condition failed, interrupting test";
        }
        else if (*(longlong *)&this_00[1].field_0x18 == 0) {
          pFVar10 = FAutomationTestFramework::Get();
          pwVar18 = L"Required condition failed, interrupting test";
        }
        else {
          bVar9 = UObjectBaseUtility::IsInOuter(this_00,pUVar4);
          if (!bVar9) {
            pFVar10 = FAutomationTestFramework::Get();
            pFVar2 = pFVar10->CurrentTest;
            pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
            ::FString::FString(&local_a8,L"Condition failed");
            (*pcVar3)(pFVar2,&local_a8,0);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
          }
          pUVar4 = *(UObject **)(*(longlong *)&pUVar14[0xe].field_0x10 + 0x30);
          bVar9 = UObjectBaseUtility::IsInOuter
                            (*(UObjectBaseUtility **)&pUVar4[1].field_0x18,pUVar4);
          if (!bVar9) {
            pFVar10 = FAutomationTestFramework::Get();
            pFVar2 = pFVar10->CurrentTest;
            pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
            ::FString::FString(&local_a8,L"Condition failed");
            (*pcVar3)(pFVar2,&local_a8,0);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
          }
          bVar9 = UObjectBaseUtility::IsTemplate
                            (*(UObjectBaseUtility **)(*(longlong *)&pUVar14[0xe].field_0x10 + 0x30),
                             RF_ArchetypeObject|RF_ClassDefaultObject);
          if (!bVar9) {
            pFVar10 = FAutomationTestFramework::Get();
            pFVar2 = pFVar10->CurrentTest;
            pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
            ::FString::FString(&local_a8,L"Condition failed");
            (*pcVar3)(pFVar2,&local_a8,0);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
          }
          bVar9 = UObjectBaseUtility::IsDefaultSubobject
                            (*(UObjectBaseUtility **)(*(longlong *)&pUVar14[0xe].field_0x10 + 0x30))
          ;
          if (!bVar9) {
            pFVar10 = FAutomationTestFramework::Get();
            pFVar2 = pFVar10->CurrentTest;
            pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
            ::FString::FString(&local_a8,L"Condition failed");
            (*pcVar3)(pFVar2,&local_a8,0);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
          }
          bVar9 = UObjectBaseUtility::IsTemplateForSubobjects
                            (*(UObjectBaseUtility **)(*(longlong *)&pUVar14[0xe].field_0x10 + 0x30),
                             RF_InheritableComponentTemplate|RF_DefaultSubObject|
                             RF_ClassDefaultObject);
          if (!bVar9) {
            pFVar10 = FAutomationTestFramework::Get();
            pFVar2 = pFVar10->CurrentTest;
            pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
            ::FString::FString(&local_a8,L"Condition failed");
            (*pcVar3)(pFVar2,&local_a8,0);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
          }
          bVar9 = UObjectBaseUtility::IsTemplate
                            (*(UObjectBaseUtility **)
                              (*(longlong *)(*(longlong *)&pUVar14[0xe].field_0x10 + 0x30) + 0x40),
                             RF_ArchetypeObject|RF_ClassDefaultObject);
          if (!bVar9) {
            pFVar10 = FAutomationTestFramework::Get();
            pFVar2 = pFVar10->CurrentTest;
            pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
            ::FString::FString(&local_a8,L"Condition failed");
            (*pcVar3)(pFVar2,&local_a8,0);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
          }
          bVar9 = UObjectBaseUtility::IsDefaultSubobject
                            (*(UObjectBaseUtility **)
                              (*(longlong *)(*(longlong *)&pUVar14[0xe].field_0x10 + 0x30) + 0x40));
          if (!bVar9) {
            pFVar10 = FAutomationTestFramework::Get();
            pFVar2 = pFVar10->CurrentTest;
            pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
            ::FString::FString(&local_a8,L"Condition failed");
            (*pcVar3)(pFVar2,&local_a8,0);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
          }
          bVar9 = UObjectBaseUtility::IsTemplateForSubobjects
                            (*(UObjectBaseUtility **)
                              (*(longlong *)(*(longlong *)&pUVar14[0xe].field_0x10 + 0x30) + 0x40),
                             RF_InheritableComponentTemplate|RF_DefaultSubObject|
                             RF_ClassDefaultObject);
          if (!bVar9) {
            pFVar10 = FAutomationTestFramework::Get();
            pFVar2 = pFVar10->CurrentTest;
            pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
            ::FString::FString(&local_a8,L"Condition failed");
            (*pcVar3)(pFVar2,&local_a8,0);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
          }
          pFVar10 = FAutomationTestFramework::Get();
          pFVar2 = pFVar10->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
          ::FString::FString(&local_a8,L"Template default subobjects");
          (*pcVar3)(pFVar2,&local_a8,0);
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pUVar12 = GetTransientPackage();
          pUVar13 = NewObject<USubobjectInstancingTestOuterObject>
                              ((UObject *)pUVar12,(FName)0x0,RF_ArchetypeObject,(UObject *)0x0,false
                               ,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
          pUVar5 = (pUVar13->InnerObject).field0_0x0.DebugPtr;
          if (pUVar5 == (USubobjectInstancingTestObject *)0x0) {
            pFVar10 = FAutomationTestFramework::Get();
            pwVar18 = L"Required condition failed, interrupting test";
          }
          else {
            bVar9 = UObjectBaseUtility::IsInOuter((UObjectBaseUtility *)pUVar5,(UObject *)pUVar13);
            if (!bVar9) {
              pFVar10 = FAutomationTestFramework::Get();
              pFVar2 = pFVar10->CurrentTest;
              pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
              ::FString::FString(&local_a8,L"Condition failed");
              (*pcVar3)(pFVar2,&local_a8,0);
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
            }
            if (((uint)((pUVar13->InnerObject).field0_0x0.DebugPtr)->_padding_ >> 5 & 1) == 0) {
              pFVar10 = FAutomationTestFramework::Get();
              pFVar2 = pFVar10->CurrentTest;
              pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
              ::FString::FString(&local_a8,L"Condition failed");
              (*pcVar3)(pFVar2,&local_a8,0);
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
            }
            if (((uint)((pUVar13->InnerObject).field0_0x0.DebugPtr)->_padding_ >> 0x12 & 1) == 0) {
              pFVar10 = FAutomationTestFramework::Get();
              pFVar2 = pFVar10->CurrentTest;
              pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
              ::FString::FString(&local_a8,L"Condition failed");
              (*pcVar3)(pFVar2,&local_a8,0);
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
            }
            uVar16 = (uint)pUVar13->_padding_ & 0x69;
            if (((uint)((pUVar13->InnerObject).field0_0x0.DebugPtr)->_padding_ & uVar16) != uVar16)
            {
              pFVar10 = FAutomationTestFramework::Get();
              pFVar2 = pFVar10->CurrentTest;
              pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
              ::FString::FString(&local_a8,L"Condition failed");
              (*pcVar3)(pFVar2,&local_a8,0);
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
            }
            bVar9 = UObjectBaseUtility::IsTemplate
                              ((UObjectBaseUtility *)(pUVar13->InnerObject).field0_0x0.DebugPtr,
                               RF_ArchetypeObject|RF_ClassDefaultObject);
            if (!bVar9) {
              pFVar10 = FAutomationTestFramework::Get();
              pFVar2 = pFVar10->CurrentTest;
              pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
              ::FString::FString(&local_a8,L"Condition failed");
              (*pcVar3)(pFVar2,&local_a8,0);
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
            }
            bVar9 = UObjectBaseUtility::IsDefaultSubobject
                              ((UObjectBaseUtility *)(pUVar13->InnerObject).field0_0x0.DebugPtr);
            if (!bVar9) {
              pFVar10 = FAutomationTestFramework::Get();
              pFVar2 = pFVar10->CurrentTest;
              pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
              ::FString::FString(&local_a8,L"Condition failed");
              (*pcVar3)(pFVar2,&local_a8,0);
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
            }
            bVar9 = UObjectBaseUtility::IsTemplateForSubobjects
                              ((UObjectBaseUtility *)(pUVar13->InnerObject).field0_0x0.DebugPtr,
                               RF_InheritableComponentTemplate|RF_DefaultSubObject|
                               RF_ClassDefaultObject);
            if (!bVar9) {
              pFVar10 = FAutomationTestFramework::Get();
              pFVar2 = pFVar10->CurrentTest;
              pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
              ::FString::FString(&local_a8,L"Condition failed");
              (*pcVar3)(pFVar2,&local_a8,0);
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
            }
            pUVar6 = (pUVar13->InnerObjectWithDirectlyNestedObject).field0_0x0.DebugPtr;
            if (pUVar6 == (USubobjectInstancingTestDirectlyNestedObject *)0x0) {
              pFVar10 = FAutomationTestFramework::Get();
              pwVar18 = L"Required condition failed, interrupting test";
            }
            else {
              pUVar5 = (pUVar6->InnerObject).field0_0x0.DebugPtr;
              if (pUVar5 == (USubobjectInstancingTestObject *)0x0) {
                pFVar10 = FAutomationTestFramework::Get();
                pwVar18 = L"Required condition failed, interrupting test";
              }
              else {
                bVar9 = UObjectBaseUtility::IsInOuter
                                  ((UObjectBaseUtility *)pUVar5,(UObject *)pUVar6);
                if (!bVar9) {
                  pFVar10 = FAutomationTestFramework::Get();
                  pFVar2 = pFVar10->CurrentTest;
                  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                  ::FString::FString(&local_a8,L"Condition failed");
                  (*pcVar3)(pFVar2,&local_a8,0);
                  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                  }
                }
                bVar9 = UObjectBaseUtility::IsTemplate
                                  ((UObjectBaseUtility *)
                                   (((pUVar13->InnerObjectWithDirectlyNestedObject).field0_0x0.
                                    DebugPtr)->InnerObject).field0_0x0.DebugPtr,
                                   RF_ArchetypeObject|RF_ClassDefaultObject);
                if (!bVar9) {
                  pFVar10 = FAutomationTestFramework::Get();
                  pFVar2 = pFVar10->CurrentTest;
                  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                  ::FString::FString(&local_a8,L"Condition failed");
                  (*pcVar3)(pFVar2,&local_a8,0);
                  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                  }
                }
                bVar9 = UObjectBaseUtility::IsDefaultSubobject
                                  ((UObjectBaseUtility *)
                                   (((pUVar13->InnerObjectWithDirectlyNestedObject).field0_0x0.
                                    DebugPtr)->InnerObject).field0_0x0.DebugPtr);
                if (!bVar9) {
                  pFVar10 = FAutomationTestFramework::Get();
                  pFVar2 = pFVar10->CurrentTest;
                  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                  ::FString::FString(&local_a8,L"Condition failed");
                  (*pcVar3)(pFVar2,&local_a8,0);
                  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                  }
                }
                bVar9 = UObjectBaseUtility::IsTemplateForSubobjects
                                  ((UObjectBaseUtility *)
                                   (((pUVar13->InnerObjectWithDirectlyNestedObject).field0_0x0.
                                    DebugPtr)->InnerObject).field0_0x0.DebugPtr,
                                   RF_InheritableComponentTemplate|RF_DefaultSubObject|
                                   RF_ClassDefaultObject);
                if (!bVar9) {
                  pFVar10 = FAutomationTestFramework::Get();
                  pFVar2 = pFVar10->CurrentTest;
                  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                  ::FString::FString(&local_a8,L"Condition failed");
                  (*pcVar3)(pFVar2,&local_a8,0);
                  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                  }
                }
                pUVar7 = (pUVar13->InnerObjectWithIndirectlyNestedObject).field0_0x0.DebugPtr;
                if (pUVar7 == (USubobjectInstancingTestIndirectlyNestedObject *)0x0) {
                  pFVar10 = FAutomationTestFramework::Get();
                  pwVar18 = L"Required condition failed, interrupting test";
                }
                else {
                  pUVar6 = (pUVar7->InnerObject).field0_0x0.DebugPtr;
                  if (pUVar6 == (USubobjectInstancingTestDirectlyNestedObject *)0x0) {
                    pFVar10 = FAutomationTestFramework::Get();
                    pwVar18 = L"Required condition failed, interrupting test";
                  }
                  else if ((pUVar6->InnerObject).field0_0x0 == (USubobjectInstancingTestObject *)0x0
                          ) {
                    pFVar10 = FAutomationTestFramework::Get();
                    pwVar18 = L"Required condition failed, interrupting test";
                  }
                  else {
                    bVar9 = UObjectBaseUtility::IsInOuter
                                      ((UObjectBaseUtility *)pUVar6,(UObject *)pUVar7);
                    if (!bVar9) {
                      pFVar10 = FAutomationTestFramework::Get();
                      pFVar2 = pFVar10->CurrentTest;
                      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                      ::FString::FString(&local_a8,L"Condition failed");
                      (*pcVar3)(pFVar2,&local_a8,0);
                      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                      }
                    }
                    pUVar6 = (((pUVar13->InnerObjectWithIndirectlyNestedObject).field0_0x0.DebugPtr)
                             ->InnerObject).field0_0x0.DebugPtr;
                    bVar9 = UObjectBaseUtility::IsInOuter
                                      ((UObjectBaseUtility *)(pUVar6->InnerObject).field0_0x0,
                                       (UObject *)pUVar6);
                    if (!bVar9) {
                      pFVar10 = FAutomationTestFramework::Get();
                      pFVar2 = pFVar10->CurrentTest;
                      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                      ::FString::FString(&local_a8,L"Condition failed");
                      (*pcVar3)(pFVar2,&local_a8,0);
                      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                      }
                    }
                    bVar9 = UObjectBaseUtility::IsTemplate
                                      ((UObjectBaseUtility *)
                                       (((pUVar13->InnerObjectWithIndirectlyNestedObject).field0_0x0
                                        .DebugPtr)->InnerObject).field0_0x0.DebugPtr,
                                       RF_ArchetypeObject|RF_ClassDefaultObject);
                    if (!bVar9) {
                      pFVar10 = FAutomationTestFramework::Get();
                      pFVar2 = pFVar10->CurrentTest;
                      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                      ::FString::FString(&local_a8,L"Condition failed");
                      (*pcVar3)(pFVar2,&local_a8,0);
                      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                      }
                    }
                    bVar9 = UObjectBaseUtility::IsDefaultSubobject
                                      ((UObjectBaseUtility *)
                                       (((pUVar13->InnerObjectWithIndirectlyNestedObject).field0_0x0
                                        .DebugPtr)->InnerObject).field0_0x0.DebugPtr);
                    if (!bVar9) {
                      pFVar10 = FAutomationTestFramework::Get();
                      pFVar2 = pFVar10->CurrentTest;
                      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                      ::FString::FString(&local_a8,L"Condition failed");
                      (*pcVar3)(pFVar2,&local_a8,0);
                      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                      }
                    }
                    bVar9 = UObjectBaseUtility::IsTemplateForSubobjects
                                      ((UObjectBaseUtility *)
                                       (((pUVar13->InnerObjectWithIndirectlyNestedObject).field0_0x0
                                        .DebugPtr)->InnerObject).field0_0x0.DebugPtr,
                                       RF_InheritableComponentTemplate|RF_DefaultSubObject|
                                       RF_ClassDefaultObject);
                    if (!bVar9) {
                      pFVar10 = FAutomationTestFramework::Get();
                      pFVar2 = pFVar10->CurrentTest;
                      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                      ::FString::FString(&local_a8,L"Condition failed");
                      (*pcVar3)(pFVar2,&local_a8,0);
                      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                      }
                    }
                    bVar9 = UObjectBaseUtility::IsTemplate
                                      ((UObjectBaseUtility *)
                                       (((((pUVar13->InnerObjectWithIndirectlyNestedObject).
                                           field0_0x0.DebugPtr)->InnerObject).field0_0x0.DebugPtr)->
                                       InnerObject).field0_0x0.DebugPtr,
                                       RF_ArchetypeObject|RF_ClassDefaultObject);
                    if (!bVar9) {
                      pFVar10 = FAutomationTestFramework::Get();
                      pFVar2 = pFVar10->CurrentTest;
                      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                      ::FString::FString(&local_a8,L"Condition failed");
                      (*pcVar3)(pFVar2,&local_a8,0);
                      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                      }
                    }
                    bVar9 = UObjectBaseUtility::IsDefaultSubobject
                                      ((UObjectBaseUtility *)
                                       (((((pUVar13->InnerObjectWithIndirectlyNestedObject).
                                           field0_0x0.DebugPtr)->InnerObject).field0_0x0.DebugPtr)->
                                       InnerObject).field0_0x0.DebugPtr);
                    if (!bVar9) {
                      pFVar10 = FAutomationTestFramework::Get();
                      pFVar2 = pFVar10->CurrentTest;
                      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                      ::FString::FString(&local_a8,L"Condition failed");
                      (*pcVar3)(pFVar2,&local_a8,0);
                      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                      }
                    }
                    bVar9 = UObjectBaseUtility::IsTemplateForSubobjects
                                      ((UObjectBaseUtility *)
                                       (((((pUVar13->InnerObjectWithIndirectlyNestedObject).
                                           field0_0x0.DebugPtr)->InnerObject).field0_0x0.DebugPtr)->
                                       InnerObject).field0_0x0.DebugPtr,
                                       RF_InheritableComponentTemplate|RF_DefaultSubObject|
                                       RF_ClassDefaultObject);
                    if (!bVar9) {
                      pFVar10 = FAutomationTestFramework::Get();
                      pFVar2 = pFVar10->CurrentTest;
                      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                      ::FString::FString(&local_a8,L"Condition failed");
                      (*pcVar3)(pFVar2,&local_a8,0);
                      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                      }
                    }
                    pFVar10 = FAutomationTestFramework::Get();
                    pFVar2 = pFVar10->CurrentTest;
                    pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
                    ::FString::FString(&local_a8,
                                       L"Default subobject constructed using SetDefaultSubobjectClass() override"
                                      );
                    (*pcVar3)(pFVar2,&local_a8,0,0);
                    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                    }
                    pUVar12 = GetTransientPackage();
                    FObjectInitializer::AssertIfInConstructor
                              ((UObject *)pUVar12,
                               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                              );
                    pUVar11 = USubobjectInstancingTestDerivedOuterObjectWithTypeOverride::
                              StaticClass();
                    FStaticConstructObjectParameters::FStaticConstructObjectParameters
                              ((FStaticConstructObjectParameters *)local_98,pUVar11);
                    local_98._8_8_ = pUVar12;
                    pUVar14 = StaticConstructObject_Internal
                                        ((FStaticConstructObjectParameters *)local_98);
                    if (local_98._64_8_ != 0) {
                      plVar17 = (longlong *)(local_98 + 0x50);
                      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
                        plVar17 = (longlong *)local_98._104_8_;
                      }
                      (**(code **)(*plVar17 + 0x10))();
                    }
                    lVar8 = *(longlong *)&pUVar14[1].field_0x10;
                    if (lVar8 == 0) {
                      pFVar10 = FAutomationTestFramework::Get();
                      pwVar18 = L"Required condition failed, interrupting test";
                    }
                    else {
                      pUVar11 = USubobjectInstancingTestDerivedObject::StaticClass();
                      lVar8 = *(longlong *)(lVar8 + 0x10);
                      iVar1 = (int)pUVar11->_padding_;
                      if ((*(int *)(lVar8 + 0x38) < iVar1) ||
                         ((longlong *)
                          *(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar1 * 8) !=
                          &pUVar11->_padding_)) {
                        pFVar10 = FAutomationTestFramework::Get();
                        pFVar2 = pFVar10->CurrentTest;
                        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                        ::FString::FString(&local_a8,L"Condition failed");
                        (*pcVar3)(pFVar2,&local_a8,0);
                        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                        }
                      }
                      pUVar14 = UObject::GetArchetype(*(UObject **)&pUVar14[1].field_0x10);
                      pUVar11 = USubobjectInstancingTestObject::StaticClass();
                      iVar1 = (int)pUVar11->_padding_;
                      if ((*(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38) < iVar1) ||
                         ((longlong *)
                          *(undefined1 **)
                           (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) +
                           (longlong)iVar1 * 8) != &pUVar11->_padding_)) {
                        pFVar10 = FAutomationTestFramework::Get();
                        pFVar2 = pFVar10->CurrentTest;
                        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                        ::FString::FString(&local_a8,L"Condition failed");
                        (*pcVar3)(pFVar2,&local_a8,0);
                        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                        }
                      }
                      pFVar10 = FAutomationTestFramework::Get();
                      pFVar2 = pFVar10->CurrentTest;
                      pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
                      ::FString::FString(&local_a8,
                                         L"Optional default subobject excluded from construction using DoNotCreateDefaultSubobject() override"
                                        );
                      (*pcVar3)(pFVar2,&local_a8,0,0);
                      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                      }
                      pUVar12 = GetTransientPackage();
                      FObjectInitializer::AssertIfInConstructor
                                ((UObject *)pUVar12,
                                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                                );
                      pUVar11 = USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride::
                                StaticClass();
                      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                                ((FStaticConstructObjectParameters *)local_98,pUVar11);
                      local_98._8_8_ = pUVar12;
                      pUVar14 = StaticConstructObject_Internal
                                          ((FStaticConstructObjectParameters *)local_98);
                      if (local_98._64_8_ != 0) {
                        plVar17 = (longlong *)(local_98 + 0x50);
                        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
                          plVar17 = (longlong *)local_98._104_8_;
                        }
                        (**(code **)(*plVar17 + 0x10))();
                      }
                      if (pUVar14[0xd].field_0x8 == '\0') {
                        pFVar10 = FAutomationTestFramework::Get();
                        pwVar18 = L"Required condition failed, interrupting test";
                      }
                      else {
                        pTVar15 = &TOptional<TObjectPtr<USubobjectInstancingTestObject>_>::GetValue
                                             ((TOptional<TObjectPtr<USubobjectInstancingTestObject>_>
                                               *)(pUVar14 + 0xd))->field0_0x0;
                        if (pTVar15->DebugPtr == (USubobjectInstancingTestObject *)0x0) {
                          return;
                        }
                        pFVar10 = FAutomationTestFramework::Get();
                        pwVar18 = L"Condition failed";
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  pFVar2 = pFVar10->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString(&local_a8,pwVar18);
  (*pcVar3)(pFVar2,&local_a8,0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return;
}

