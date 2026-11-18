// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// GetTestFlags @ 1422c63c0

EAutomationTestFlags __thiscall
UE::FPropertyPathFunctionsFindPropertyTest::GetTestFlags
          (FPropertyPathFunctionsFindPropertyTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 1422c63d0

bool __thiscall
UE::FPropertyPathFunctionsFindPropertyTest::IsStressTest
          (FPropertyPathFunctionsFindPropertyTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1422c63e0

uint __thiscall
UE::FPropertyPathFunctionsFindPropertyTest::GetRequiredDeviceNum
          (FPropertyPathFunctionsFindPropertyTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1422c63f0

FString * __thiscall
UE::FPropertyPathFunctionsFindPropertyTest::GetTestSourceFileName
          (FPropertyPathFunctionsFindPropertyTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Tests\\UObject\\PropertyPathFunctionsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1422c6420

int __thiscall
UE::FPropertyPathFunctionsFindPropertyTest::GetTestSourceFileLine
          (FPropertyPathFunctionsFindPropertyTest *this)

{
  return 0x11;
}

// GetTests @ 1422c6430

/* WARNING: Removing unreachable block (ram,0x0001422c65ae) */

void __thiscall
UE::FPropertyPathFunctionsFindPropertyTest::GetTests
          (FPropertyPathFunctionsFindPropertyTest *this,
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

// RunTest @ 1422c65d0

bool __thiscall
UE::FPropertyPathFunctionsFindPropertyTest::RunTest
          (FPropertyPathFunctionsFindPropertyTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 1422c6600

FString * __thiscall
UE::FPropertyPathFunctionsFindPropertyTest::GetBeautifiedTestName
          (FPropertyPathFunctionsFindPropertyTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPropertyPathFunctionsFindPropertyTest @ 1422cd7a0

FPropertyPathFunctionsFindPropertyTest * __thiscall
UE::FPropertyPathFunctionsFindPropertyTest::FPropertyPathFunctionsFindPropertyTest
          (FPropertyPathFunctionsFindPropertyTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPropertyPathFunctionsFindPropertyTest_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][UObject][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"CoreUObject::PropertyPathFunctions::FindProperty");
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

// TestBody @ 1422ea470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::FPropertyPathFunctionsFindPropertyTest::TestBody
          (FPropertyPathFunctionsFindPropertyTest *this,FString *param_1)

{
  FPropertyTypeName FVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  FNameEntryId FVar6;
  FAutomationTestFramework *pFVar7;
  UClass *pUVar8;
  FPropertyTypeName *pFVar9;
  FProperty *pFVar10;
  undefined4 extraout_var;
  FProperty *pFVar11;
  FName FVar12;
  FName FVar13;
  undefined1 auStack_138 [32];
  FString local_118;
  FPropertyTypeName local_108 [4];
  FPropertyTypeNameBuilder local_f8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  pFVar7 = FAutomationTestFramework::Get();
  pFVar2 = pFVar7->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_118,L"Found");
  (*pcVar3)(pFVar2,&local_118,0,0);
  if ((void *)CONCAT44(local_118.Data.AllocatorInstance.Data._4_4_,
                       (uint)local_118.Data.AllocatorInstance.Data) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_118.Data.AllocatorInstance.Data._4_4_,
                                   (uint)local_118.Data.AllocatorInstance.Data));
  }
  pUVar8 = UTestPropertyPathFunctionsClass::StaticClass();
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
  for (pFVar11 = (FProperty *)pUVar8->_padding_; pFVar11 != (FProperty *)0x0;
      pFVar11 = pFVar11->PropertyLinkNext) {
    pFVar9 = FPropertyTypeName::FPropertyTypeName(local_108,pFVar11);
    FVar1.Index = pFVar9->Index;
    bVar5 = IsThisNotNull(pFVar11,"FField::GetFName");
    FVar12 = FVar13;
    if (bVar5) {
      FVar12 = (FName)pFVar11->_padding_;
    }
    pFVar10 = FindPropertyByNameAndTypeName((UStruct *)pUVar8,FVar12,FVar1);
    if (pFVar11 != pFVar10) {
      pFVar7 = FAutomationTestFramework::Get();
      pFVar2 = pFVar7->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_118,L"Condition failed");
      (*pcVar3)(pFVar2,&local_118,0);
      if ((void *)CONCAT44(local_118.Data.AllocatorInstance.Data._4_4_,
                           (uint)local_118.Data.AllocatorInstance.Data) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_118.Data.AllocatorInstance.Data._4_4_,
                                       (uint)local_118.Data.AllocatorInstance.Data));
      }
    }
  }
  pFVar7 = FAutomationTestFramework::Get();
  pFVar2 = pFVar7->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_118,L"Missing");
  (*pcVar3)(pFVar2,&local_118,0,0);
  if ((void *)CONCAT44(local_118.Data.AllocatorInstance.Data._4_4_,
                       (uint)local_118.Data.AllocatorInstance.Data) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_118.Data.AllocatorInstance.Data._4_4_,
                                   (uint)local_118.Data.AllocatorInstance.Data));
  }
  pUVar8 = UTestPropertyPathFunctionsClass::StaticClass();
  local_f8.Nodes.AllocatorInstance.SecondaryData = (ForElementType<UE::FPropertyTypeNameNode>)0x0;
  local_f8.Nodes.ArrayNum = 0;
  local_f8.Nodes.ArrayMax = 10;
  local_f8.OuterNodeIndex.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_f8.OuterNodeIndex.ArrayNum = 0;
  local_f8.OuterNodeIndex.ArrayMax = 10;
  local_f8.ActiveIndex = -1;
  FVar6 = FNameEntryId::FromValidEName((EName)&local_118);
  local_118.Data.AllocatorInstance.Data._0_4_ = *(uint *)CONCAT44(extraout_var,FVar6.Value);
  local_118.Data.AllocatorInstance.Data._4_4_ = 0;
  FVar12.Number = 0;
  FVar12.ComparisonIndex.Value = (uint)local_118.Data.AllocatorInstance.Data;
  FPropertyTypeNameBuilder::AddName(&local_f8,FVar12);
  FPropertyTypeNameBuilder::Build(&local_f8);
  if (local_f8.OuterNodeIndex.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_f8.OuterNodeIndex.AllocatorInstance.SecondaryData);
  }
  if (local_f8.Nodes.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
    FMemory::Free((void *)local_f8.Nodes.AllocatorInstance.SecondaryData);
  }
  FVar1.Index = local_108[0].Index;
  for (pvVar4 = (void *)pUVar8->_padding_; pvVar4 != (void *)0x0;
      pvVar4 = *(void **)((longlong)pvVar4 + 0x48)) {
    local_108[0].Index = FVar1.Index;
    bVar5 = IsThisNotNull(pvVar4,"FField::GetFName");
    FVar12 = FVar13;
    if (bVar5) {
      FVar12 = *(FName *)((longlong)pvVar4 + 0x20);
    }
    pFVar11 = FindPropertyByNameAndTypeName((UStruct *)pUVar8,FVar12,FVar1);
    if (pFVar11 != (FProperty *)0x0) {
      pFVar7 = FAutomationTestFramework::Get();
      pFVar2 = pFVar7->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_118,L"Condition expected to return false but returned true");
      (*pcVar3)(pFVar2,&local_118,0);
      if ((void *)CONCAT44(local_118.Data.AllocatorInstance.Data._4_4_,
                           (uint)local_118.Data.AllocatorInstance.Data) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_118.Data.AllocatorInstance.Data._4_4_,
                                       (uint)local_118.Data.AllocatorInstance.Data));
      }
    }
    FVar1.Index = local_108[0].Index;
  }
  return;
}

