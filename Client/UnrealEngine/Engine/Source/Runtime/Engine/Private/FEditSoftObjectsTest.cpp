// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 148869d30

EAutomationTestFlags __thiscall
TransactionDiffingTests::FEditSoftObjectsTest::GetTestFlags(FEditSoftObjectsTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 148869d40

bool __thiscall
TransactionDiffingTests::FEditSoftObjectsTest::IsStressTest(FEditSoftObjectsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148869d50

uint __thiscall
TransactionDiffingTests::FEditSoftObjectsTest::GetRequiredDeviceNum(FEditSoftObjectsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 148869d60

FString * __thiscall
TransactionDiffingTests::FEditSoftObjectsTest::GetTestSourceFileName
          (FEditSoftObjectsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\TransactionDiffingTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148869d90

int __thiscall
TransactionDiffingTests::FEditSoftObjectsTest::GetTestSourceFileLine(FEditSoftObjectsTest *this)

{
  return 0x9b;
}

// GetTests @ 148869da0

/* WARNING: Removing unreachable block (ram,0x000148869e8d) */
/* WARNING: Removing unreachable block (ram,0x000148869f58) */

void __thiscall
TransactionDiffingTests::FEditSoftObjectsTest::GetTests
          (FEditSoftObjectsTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Transactions.EditSoftObjects");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 148869f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014886a355) */

bool __thiscall
TransactionDiffingTests::FEditSoftObjectsTest::RunTest(FEditSoftObjectsTest *this,FString *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UClass *this_00;
  UObject *pUVar7;
  UTransactionDiffingTestObject *pUVar8;
  UObject *pUVar9;
  FName *pFVar10;
  UTransactionDiffingTestObject *pUVar11;
  longlong *plVar12;
  ForAnyElementType FVar13;
  undefined1 auStackY_6b8 [32];
  undefined1 local_668 [24];
  FUtf8String local_650;
  FTransactionObjectDeltaChange local_640;
  UTransactionDiffingTestObject *local_628;
  UTransactionDiffingTestObject *local_620;
  FTransactionObjectDeltaChange local_618;
  FTransactionObjectDeltaChange local_600;
  FName local_5e8;
  FName local_5e0;
  FName local_5d8;
  FName local_5d0;
  undefined1 local_5c8 [56];
  longlong *local_590;
  FProperty **local_588;
  int local_580;
  bool local_578;
  longlong local_568;
  longlong local_558 [3];
  longlong *local_540;
  undefined2 local_538;
  undefined1 local_528 [56];
  longlong *local_4f0;
  FProperty **local_4e8;
  int local_4e0;
  bool local_4d8;
  longlong local_4c8;
  longlong local_4b8 [3];
  longlong *local_4a0;
  undefined2 local_498;
  undefined1 local_488 [56];
  longlong *local_450;
  FProperty **local_448;
  int local_440;
  bool local_438;
  longlong local_428;
  longlong local_418 [3];
  longlong *local_400;
  undefined2 local_3f8;
  undefined1 local_3e8 [56];
  longlong *plStack_3b0;
  FProperty **local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined1 local_388 [56];
  longlong *plStack_350;
  FProperty **local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined1 local_328 [56];
  longlong *plStack_2f0;
  FProperty **local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  FDiffableObject local_2c8;
  FDiffableObject local_1e8;
  FDiffableObject local_108;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_6b8;
  this_00 = UTransactionDiffingTestObject::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar9 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar7 = GetTransientPackageAsObject();
  pUVar8 = NewObject<UTransactionDiffingTestObject>(pUVar7);
  local_3e8._0_8_ = 0;
  local_3e8._8_8_ = 0;
  local_3e8._16_8_ = 0;
  local_3e8._24_8_ = 0;
  local_3e8._32_8_ = 0;
  local_3e8._40_8_ = 0;
  local_3e8._48_8_ = 0;
  plStack_3b0 = (longlong *)0x0;
  local_3a8 = (FProperty **)0x0;
  uStack_3a0._0_4_ = 0;
  uStack_3a0._4_4_ = 0;
  local_398._0_1_ = false;
  local_398._1_7_ = 0;
  uStack_390 = 0;
  UE::Transaction::DiffUtil::GetDiffableObject
            (&local_108,pUVar9,(FGetDiffableObjectOptions *)local_3e8);
  if (local_3e8._16_8_ != 0) {
    plVar12 = (longlong *)(local_3e8 + 0x20);
    if (plStack_3b0 != (longlong *)0x0) {
      plVar12 = plStack_3b0;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  pUVar9 = GetTransientPackageAsObject();
  local_628 = NewObject<UTransactionDiffingTestObject>(pUVar9);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_628 != (UTransactionDiffingTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_628);
  }
  FSoftObjectPtr::operator=(&(pUVar8->AdditionalSoftObject).SoftObjectPtr,(FObjectPtr)&local_628);
  local_388._0_8_ = 0;
  local_388._8_8_ = 0;
  local_388._16_8_ = 0;
  local_388._24_8_ = 0;
  local_388._32_8_ = 0;
  local_388._40_8_ = 0;
  local_388._48_8_ = 0;
  plStack_350 = (longlong *)0x0;
  local_348 = (FProperty **)0x0;
  uStack_340._0_4_ = 0;
  uStack_340._4_4_ = 0;
  local_338._0_1_ = false;
  local_338._1_7_ = 0;
  uStack_330 = 0;
  UE::Transaction::DiffUtil::GetDiffableObject
            (&local_1e8,(UObject *)pUVar8,(FGetDiffableObjectOptions *)local_388);
  if (local_388._16_8_ != 0) {
    plVar12 = (longlong *)(local_388 + 0x20);
    if (plStack_350 != (longlong *)0x0) {
      plVar12 = plStack_350;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  local_5c8[0] = SerializeObject;
  local_5c8._16_8_ = 0;
  local_590 = (longlong *)0x0;
  local_588 = (FProperty **)0x0;
  local_580 = 0;
  local_568 = 0;
  local_540 = (longlong *)0x0;
  local_538._0_1_ = true;
  local_538._1_1_ = false;
  local_578 = true;
  UE::Transaction::DiffUtil::GenerateObjectDiff
            (&local_618,&local_108,&local_1e8,(FGenerateObjectDiffOptions *)local_5c8,
             (FDiffableObjectArchetypeCache *)0x0);
  if (local_568 != 0) {
    plVar12 = local_558;
    if (local_540 != (longlong *)0x0) {
      plVar12 = local_540;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_5c8._16_8_ != 0) {
    plVar12 = (longlong *)(local_5c8 + 0x20);
    if (local_590 != (longlong *)0x0) {
      plVar12 = local_590;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"bHasNonPropertyChanges",local_618.bHasNonPropertyChanges)
  ;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"ChangedProperties.Num()",
             local_618.ChangedProperties.ArrayNum,1);
  pFVar10 = ::FName::FName(&local_5e8,0x14,L"AdditionalSoftObject",FNAME_Add);
  for (FVar13.Data = local_618.ChangedProperties.AllocatorInstance.Data;
      (FName *)FVar13.Data !=
      (FName *)(local_618.ChangedProperties.AllocatorInstance.Data +
               (longlong)local_618.ChangedProperties.ArrayNum * 8); FVar13.Data = FVar13.Data + 8) {
    if (*(FName *)FVar13.Data == *pFVar10) {
      bVar4 = true;
      goto LAB_14886a1e7;
    }
  }
  bVar4 = false;
LAB_14886a1e7:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"ChangedProperties.Contains(\'AdditionalSoftObject\')",
             bVar4);
  if ((FName *)local_618.ChangedProperties.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_618.ChangedProperties.AllocatorInstance.Data);
  }
  pUVar9 = GetTransientPackageAsObject();
  pUVar11 = NewObject<UTransactionDiffingTestObject>(pUVar9);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 != (UTransactionDiffingTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  local_650.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_650.Data.ArrayNum = 0;
  local_650.Data.ArrayMax = 0;
  local_668._0_8_ = 0;
  local_668._16_8_ = 0;
  local_668._8_8_ = 0;
  FUtf8String::Reset(&local_650,0);
  local_620 = pUVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 != (UTransactionDiffingTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_668,(FObjectPtr)&local_620);
  pFVar2 = (pUVar8->SoftObjectsArray).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_668) &&
      ((FScriptContainerElement *)local_668 <
       pFVar2 + (longlong)(pUVar8->SoftObjectsArray).ArrayMax * 0x28)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar6 = (pUVar8->SoftObjectsArray).ArrayNum;
  piVar1 = &(pUVar8->SoftObjectsArray).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&(pUVar8->SoftObjectsArray).AllocatorInstance,piVar1);
  }
  (pUVar8->SoftObjectsArray).ArrayNum = iVar6 + 1;
  pFVar2 = (pUVar8->SoftObjectsArray).AllocatorInstance.Data + (longlong)iVar6 * 0x28;
  *(undefined8 *)pFVar2 = local_668._0_8_;
  *(undefined8 *)(pFVar2 + 8) = local_668._8_8_;
  *(undefined8 *)(pFVar2 + 0x10) = local_668._16_8_;
  *(undefined8 *)(pFVar2 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar2 + 0x18) = local_650.Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + 0x20) = local_650.Data.ArrayNum;
  *(int *)(pFVar2 + 0x24) = local_650.Data.ArrayMax;
  local_650.Data.ArrayNum = 0;
  local_650.Data.ArrayMax = 0;
  local_650.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328._0_8_ = 0;
  local_328._8_8_ = 0;
  local_328._16_8_ = 0;
  local_328._24_8_ = 0;
  local_328._32_8_ = 0;
  local_328._40_8_ = 0;
  local_328._48_8_ = 0;
  plStack_2f0 = (longlong *)0x0;
  local_2e8 = (FProperty **)0x0;
  uStack_2e0._0_4_ = 0;
  uStack_2e0._4_4_ = 0;
  local_2d8._0_1_ = false;
  local_2d8._1_7_ = 0;
  uStack_2d0 = 0;
  UE::Transaction::DiffUtil::GetDiffableObject
            (&local_2c8,(UObject *)pUVar8,(FGetDiffableObjectOptions *)local_328);
  if (local_328._16_8_ != 0) {
    plVar12 = (longlong *)(local_328 + 0x20);
    if (plStack_2f0 != (longlong *)0x0) {
      plVar12 = plStack_2f0;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  local_528[0] = SerializeObject;
  local_528._16_8_ = 0;
  local_4f0 = (longlong *)0x0;
  local_4e8 = (FProperty **)0x0;
  local_4e0 = 0;
  local_4c8 = 0;
  local_4a0 = (longlong *)0x0;
  local_498._0_1_ = true;
  local_498._1_1_ = false;
  local_4d8 = true;
  UE::Transaction::DiffUtil::GenerateObjectDiff
            (&local_640,&local_108,&local_2c8,(FGenerateObjectDiffOptions *)local_528,
             (FDiffableObjectArchetypeCache *)0x0);
  if (local_4c8 != 0) {
    plVar12 = local_4b8;
    if (local_4a0 != (longlong *)0x0) {
      plVar12 = local_4a0;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_528._16_8_ != 0) {
    plVar12 = (longlong *)(local_528 + 0x20);
    if (local_4f0 != (longlong *)0x0) {
      plVar12 = local_4f0;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"bHasNonPropertyChanges",local_640.bHasNonPropertyChanges)
  ;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"ChangedProperties.Num()",
             local_640.ChangedProperties.ArrayNum,2);
  pFVar10 = ::FName::FName(&local_5e0,0x14,L"AdditionalSoftObject",FNAME_Add);
  for (FVar13.Data = local_640.ChangedProperties.AllocatorInstance.Data;
      (FName *)FVar13.Data !=
      (FName *)(local_640.ChangedProperties.AllocatorInstance.Data +
               (longlong)local_640.ChangedProperties.ArrayNum * 8); FVar13.Data = FVar13.Data + 8) {
    if (*(FName *)FVar13.Data == *pFVar10) {
      bVar4 = true;
      goto LAB_14886a4e8;
    }
  }
  bVar4 = false;
LAB_14886a4e8:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"ChangedProperties.Contains(\'AdditionalSoftObject\')",
             bVar4);
  pFVar10 = ::FName::FName(&local_5d8,0x10,L"SoftObjectsArray",FNAME_Add);
  for (FVar13.Data = local_640.ChangedProperties.AllocatorInstance.Data;
      (FName *)FVar13.Data !=
      (FName *)(local_640.ChangedProperties.AllocatorInstance.Data +
               (longlong)local_640.ChangedProperties.ArrayNum * 8); FVar13.Data = FVar13.Data + 8) {
    if (*(FName *)FVar13.Data == *pFVar10) {
      bVar4 = true;
      goto LAB_14886a53b;
    }
  }
  bVar4 = false;
LAB_14886a53b:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"ChangedProperties.Contains(\'SoftObjectsArray\')",bVar4);
  if ((FName *)local_640.ChangedProperties.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_640.ChangedProperties.AllocatorInstance.Data);
  }
  local_488[0] = SerializeObject;
  local_488._16_8_ = 0;
  local_450 = (longlong *)0x0;
  local_448 = (FProperty **)0x0;
  local_440 = 0;
  local_428 = 0;
  local_400 = (longlong *)0x0;
  local_3f8._0_1_ = true;
  local_3f8._1_1_ = false;
  local_438 = true;
  UE::Transaction::DiffUtil::GenerateObjectDiff
            (&local_600,&local_1e8,&local_2c8,(FGenerateObjectDiffOptions *)local_488,
             (FDiffableObjectArchetypeCache *)0x0);
  if (local_428 != 0) {
    plVar12 = local_418;
    if (local_400 != (longlong *)0x0) {
      plVar12 = local_400;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_488._16_8_ != 0) {
    plVar12 = (longlong *)(local_488 + 0x20);
    if (local_450 != (longlong *)0x0) {
      plVar12 = local_450;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"bHasNonPropertyChanges",local_600.bHasNonPropertyChanges)
  ;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"ChangedProperties.Num()",
             local_600.ChangedProperties.ArrayNum,1);
  pFVar10 = ::FName::FName(&local_5d0,0x10,L"SoftObjectsArray",FNAME_Add);
  FVar13.Data = local_600.ChangedProperties.AllocatorInstance.Data;
  do {
    if ((FName *)FVar13.Data ==
        (FName *)(local_600.ChangedProperties.AllocatorInstance.Data +
                 (longlong)local_600.ChangedProperties.ArrayNum * 8)) {
      bVar4 = false;
LAB_14886a685:
      FAutomationTestBase::TestTrue
                ((FAutomationTestBase *)this,L"ChangedProperties.Contains(\'SoftObjectsArray\')",
                 bVar4);
      if ((FName *)local_600.ChangedProperties.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_600.ChangedProperties.AllocatorInstance.Data);
      }
      if (local_2c8.SerializedTaggedData.Pairs.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.SerializedTaggedData.Pairs.AllocatorInstance.Data);
      }
      if (local_2c8.SerializedData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.SerializedData.Data.AllocatorInstance.Data);
      }
      if (local_2c8.ObjectArchetype.CachedSubObjectHierarchy.AllocatorInstance.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
        FMemory::Free((void *)local_2c8.ObjectArchetype.CachedSubObjectHierarchy.AllocatorInstance.
                              SecondaryData);
      }
      if (local_2c8.ObjectArchetype.SubObjectHierarchyIDs.AllocatorInstance.SecondaryData !=
          (ForElementType<FName>)0x0) {
        FMemory::Free((void *)local_2c8.ObjectArchetype.SubObjectHierarchyIDs.AllocatorInstance.
                              SecondaryData);
      }
      if (local_1e8.SerializedTaggedData.Pairs.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.SerializedTaggedData.Pairs.AllocatorInstance.Data);
      }
      if (local_1e8.SerializedData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.SerializedData.Data.AllocatorInstance.Data);
      }
      if (local_1e8.ObjectArchetype.CachedSubObjectHierarchy.AllocatorInstance.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
        FMemory::Free((void *)local_1e8.ObjectArchetype.CachedSubObjectHierarchy.AllocatorInstance.
                              SecondaryData);
      }
      if (local_1e8.ObjectArchetype.SubObjectHierarchyIDs.AllocatorInstance.SecondaryData !=
          (ForElementType<FName>)0x0) {
        FMemory::Free((void *)local_1e8.ObjectArchetype.SubObjectHierarchyIDs.AllocatorInstance.
                              SecondaryData);
      }
      if (local_108.SerializedTaggedData.Pairs.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.SerializedTaggedData.Pairs.AllocatorInstance.Data);
      }
      if (local_108.SerializedData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.SerializedData.Data.AllocatorInstance.Data);
      }
      if (local_108.ObjectArchetype.CachedSubObjectHierarchy.AllocatorInstance.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
        FMemory::Free((void *)local_108.ObjectArchetype.CachedSubObjectHierarchy.AllocatorInstance.
                              SecondaryData);
      }
      if (local_108.ObjectArchetype.SubObjectHierarchyIDs.AllocatorInstance.SecondaryData !=
          (ForElementType<FName>)0x0) {
        FMemory::Free((void *)local_108.ObjectArchetype.SubObjectHierarchyIDs.AllocatorInstance.
                              SecondaryData);
      }
      return true;
    }
    if (*(FName *)FVar13.Data == *pFVar10) {
      bVar4 = true;
      goto LAB_14886a685;
    }
    FVar13.Data = FVar13.Data + 8;
  } while( true );
}

// GetBeautifiedTestName @ 14886a7d0

FString * __thiscall
TransactionDiffingTests::FEditSoftObjectsTest::GetBeautifiedTestName
          (FEditSoftObjectsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Transactions.EditSoftObjects");
  return __return_storage_ptr__;
}

