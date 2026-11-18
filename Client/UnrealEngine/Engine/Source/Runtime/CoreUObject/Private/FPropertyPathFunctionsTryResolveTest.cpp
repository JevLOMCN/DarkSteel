// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// GetTestFlags @ 1422c6710

EAutomationTestFlags __thiscall
UE::FPropertyPathFunctionsTryResolveTest::GetTestFlags(FPropertyPathFunctionsTryResolveTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 1422c6720

bool __thiscall
UE::FPropertyPathFunctionsTryResolveTest::IsStressTest(FPropertyPathFunctionsTryResolveTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1422c6730

uint __thiscall
UE::FPropertyPathFunctionsTryResolveTest::GetRequiredDeviceNum
          (FPropertyPathFunctionsTryResolveTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1422c6740

FString * __thiscall
UE::FPropertyPathFunctionsTryResolveTest::GetTestSourceFileName
          (FPropertyPathFunctionsTryResolveTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Tests\\UObject\\PropertyPathFunctionsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1422c6770

int __thiscall
UE::FPropertyPathFunctionsTryResolveTest::GetTestSourceFileLine
          (FPropertyPathFunctionsTryResolveTest *this)

{
  return 0x2c;
}

// GetTests @ 1422c6780

/* WARNING: Removing unreachable block (ram,0x0001422c68fe) */

void __thiscall
UE::FPropertyPathFunctionsTryResolveTest::GetTests
          (FPropertyPathFunctionsTryResolveTest *this,
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

// RunTest @ 1422c6920

bool __thiscall
UE::FPropertyPathFunctionsTryResolveTest::RunTest
          (FPropertyPathFunctionsTryResolveTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 1422c6950

FString * __thiscall
UE::FPropertyPathFunctionsTryResolveTest::GetBeautifiedTestName
          (FPropertyPathFunctionsTryResolveTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPropertyPathFunctionsTryResolveTest @ 1422cd970

FPropertyPathFunctionsTryResolveTest * __thiscall
UE::FPropertyPathFunctionsTryResolveTest::FPropertyPathFunctionsTryResolveTest
          (FPropertyPathFunctionsTryResolveTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPropertyPathFunctionsTryResolveTest_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][UObject][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"CoreUObject::PropertyPathFunctions::TryResolve");
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

// operator() @ 1422d1c30

FPropertyPathName * __thiscall
`UE::FPropertyPathFunctionsTryResolveTest::TestBody'::__l2::<lambda_1>::operator()
          (void *this,FPropertyPathName *__return_storage_ptr__,
          initializer_list<_protected:_void___cdecl_UE::FPropertyPathFunctionsTryResolveTest::TestBody(FString_const_&)_::_2_::FPropertyReference>
          *param_1)

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  FNameEntryId FVar6;
  int iVar7;
  FProperty *pFVar8;
  FAutomationTestFramework *pFVar9;
  FString *pFVar10;
  FPropertyTypeName *pFVar11;
  int iVar12;
  FPropertyReference *pFVar13;
  FPropertyReference *pFVar14;
  FPropertyTypeName local_res10 [2];
  FPropertyReference *local_res18;
  FName local_res20;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pFVar13 = param_1->_Last;
  pFVar14 = param_1->_First;
  (__return_storage_ptr__->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Segments).ArrayNum = 0;
  (__return_storage_ptr__->Segments).ArrayMax = 0;
  local_res18 = pFVar13;
  if (pFVar14 != pFVar13) {
    do {
      ::FName::FName(&local_res20,pFVar14->PropertyName);
      iVar12 = 0;
      if (pFVar14->Struct != (UStruct *)0x0) {
        FVar5.Number = local_res20.Number;
        FVar5.ComparisonIndex.Value = local_res20.ComparisonIndex.Value;
        pFVar8 = UStruct::FindPropertyByName(pFVar14->Struct,FVar5);
        pFVar9 = FAutomationTestFramework::Get();
        pFVar2 = pFVar9->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
        ::FString::FString(&local_68,"Segment.PropertyName");
        pFVar10 = CaptureExpressionsAndValues<char_const_*_const_&>
                            (&local_48,&local_68,&pFVar14->PropertyName);
        (*pcVar3)(pFVar2,pFVar10,0,0);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (pFVar8 == (FProperty *)0x0) {
          pFVar9 = FAutomationTestFramework::Get();
          pFVar2 = pFVar9->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_58,L"Condition failed");
          (*pcVar3)(pFVar2,&local_58,0);
          pFVar13 = local_res18;
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
            pFVar13 = local_res18;
          }
        }
        else {
          pFVar11 = UE::FPropertyTypeName::FPropertyTypeName(local_res10,pFVar8);
          iVar12 = pFVar11->Index;
          pFVar13 = local_res18;
        }
      }
      FVar6.Value = local_res20.ComparisonIndex.Value;
      iVar1 = pFVar14->ArrayIndex;
      iVar7 = (__return_storage_ptr__->Segments).ArrayNum;
      if (iVar7 == (__return_storage_ptr__->Segments).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)__return_storage_ptr__,
                           &(__return_storage_ptr__->Segments).ArrayMax);
      }
      (__return_storage_ptr__->Segments).ArrayNum = iVar7 + 1;
      pFVar14 = pFVar14 + 1;
      pFVar4 = (__return_storage_ptr__->Segments).AllocatorInstance.Data;
      *(ulonglong *)(pFVar4 + (longlong)iVar7 * 0xc) = CONCAT44(iVar1 + 1,FVar6.Value);
      *(int *)(pFVar4 + (longlong)iVar7 * 0xc + 8) = iVar12;
    } while (pFVar14 != pFVar13);
  }
  return __return_storage_ptr__;
}

