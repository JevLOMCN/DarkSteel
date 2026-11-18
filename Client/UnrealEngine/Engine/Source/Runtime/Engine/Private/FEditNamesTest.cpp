// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 148867520

EAutomationTestFlags __thiscall
TransactionDiffingTests::FEditNamesTest::GetTestFlags(FEditNamesTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 148867530

bool __thiscall TransactionDiffingTests::FEditNamesTest::IsStressTest(FEditNamesTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148867540

uint __thiscall TransactionDiffingTests::FEditNamesTest::GetRequiredDeviceNum(FEditNamesTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 148867550

FString * __thiscall
TransactionDiffingTests::FEditNamesTest::GetTestSourceFileName
          (FEditNamesTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\TransactionDiffingTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148867580

int __thiscall TransactionDiffingTests::FEditNamesTest::GetTestSourceFileLine(FEditNamesTest *this)

{
  return 0x43;
}

// GetTests @ 148867590

/* WARNING: Removing unreachable block (ram,0x00014886767d) */
/* WARNING: Removing unreachable block (ram,0x000148867748) */

void __thiscall
TransactionDiffingTests::FEditNamesTest::GetTests
          (FEditNamesTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Transactions.EditNames");
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

// RunTest @ 148867770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
TransactionDiffingTests::FEditNamesTest::RunTest(FEditNamesTest *this,FString *param_1)

{
  int *piVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UClass *this_00;
  UObject *pUVar7;
  UTransactionDiffingTestObject *pUVar8;
  FName *pFVar9;
  longlong *plVar10;
  ForAnyElementType FVar11;
  undefined1 auStackY_698 [32];
  FName local_648;
  FTransactionObjectDeltaChange local_640;
  FName local_628;
  FTransactionObjectDeltaChange local_620;
  FTransactionObjectDeltaChange local_608;
  FName local_5f0;
  FName local_5e8;
  FName local_5e0;
  FName local_5d8 [2];
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
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_698;
  this_00 = UTransactionDiffingTestObject::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
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
            (&local_108,pUVar2,(FGetDiffableObjectOptions *)local_3e8);
  if (local_3e8._16_8_ != 0) {
    plVar10 = (longlong *)(local_3e8 + 0x20);
    if (plStack_3b0 != (longlong *)0x0) {
      plVar10 = plStack_3b0;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  ::FName::FName(&local_628,"Test0");
  pUVar8->AdditionalName = local_628;
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
    plVar10 = (longlong *)(local_388 + 0x20);
    if (plStack_350 != (longlong *)0x0) {
      plVar10 = plStack_350;
    }
    (**(code **)(*plVar10 + 0x10))();
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
            (&local_620,&local_108,&local_1e8,(FGenerateObjectDiffOptions *)local_5c8,
             (FDiffableObjectArchetypeCache *)0x0);
  if (local_568 != 0) {
    plVar10 = local_558;
    if (local_540 != (longlong *)0x0) {
      plVar10 = local_540;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (local_5c8._16_8_ != 0) {
    plVar10 = (longlong *)(local_5c8 + 0x20);
    if (local_590 != (longlong *)0x0) {
      plVar10 = local_590;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"bHasNonPropertyChanges",local_620.bHasNonPropertyChanges)
  ;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"ChangedProperties.Num()",
             local_620.ChangedProperties.ArrayNum,1);
  pFVar9 = ::FName::FName(&local_5f0,0xe,L"AdditionalName",FNAME_Add);
  for (FVar11.Data = local_620.ChangedProperties.AllocatorInstance.Data;
      (FName *)FVar11.Data !=
      (FName *)(local_620.ChangedProperties.AllocatorInstance.Data +
               (longlong)local_620.ChangedProperties.ArrayNum * 8); FVar11.Data = FVar11.Data + 8) {
    if (*(FName *)FVar11.Data == *pFVar9) {
      bVar4 = true;
      goto LAB_1488679b6;
    }
  }
  bVar4 = false;
LAB_1488679b6:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"ChangedProperties.Contains(\'AdditionalName\')",bVar4);
  if ((FName *)local_620.ChangedProperties.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_620.ChangedProperties.AllocatorInstance.Data);
  }
  ::FName::FName(&local_648,"Test1");
  pFVar9 = (FName *)(pUVar8->NamesArray).AllocatorInstance.Data;
  if (((pFVar9 <= &local_648) && (&local_648 < pFVar9 + (pUVar8->NamesArray).ArrayMax)) &&
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
  iVar6 = (pUVar8->NamesArray).ArrayNum;
  piVar1 = &(pUVar8->NamesArray).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(pUVar8->NamesArray).AllocatorInstance,piVar1);
  }
  local_328._0_8_ = 0;
  local_328._8_8_ = 0;
  (pUVar8->NamesArray).ArrayNum = iVar6 + 1;
  local_328._16_8_ = 0;
  local_328._24_8_ = 0;
  local_328._32_8_ = 0;
  local_328._40_8_ = 0;
  local_328._48_8_ = 0;
  plStack_2f0 = (longlong *)0x0;
  *(FName *)((pUVar8->NamesArray).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_648;
  local_2e8 = (FProperty **)0x0;
  uStack_2e0._0_4_ = 0;
  uStack_2e0._4_4_ = 0;
  local_2d8._0_1_ = false;
  local_2d8._1_7_ = 0;
  uStack_2d0 = 0;
  UE::Transaction::DiffUtil::GetDiffableObject
            (&local_2c8,(UObject *)pUVar8,(FGetDiffableObjectOptions *)local_328);
  if (local_328._16_8_ != 0) {
    plVar10 = (longlong *)(local_328 + 0x20);
    if (plStack_2f0 != (longlong *)0x0) {
      plVar10 = plStack_2f0;
    }
    (**(code **)(*plVar10 + 0x10))();
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
    plVar10 = local_4b8;
    if (local_4a0 != (longlong *)0x0) {
      plVar10 = local_4a0;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (local_528._16_8_ != 0) {
    plVar10 = (longlong *)(local_528 + 0x20);
    if (local_4f0 != (longlong *)0x0) {
      plVar10 = local_4f0;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"bHasNonPropertyChanges",local_640.bHasNonPropertyChanges)
  ;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"ChangedProperties.Num()",
             local_640.ChangedProperties.ArrayNum,2);
  pFVar9 = ::FName::FName(&local_5e8,0xe,L"AdditionalName",FNAME_Add);
  for (FVar11.Data = local_640.ChangedProperties.AllocatorInstance.Data;
      (FName *)FVar11.Data !=
      (FName *)(local_640.ChangedProperties.AllocatorInstance.Data +
               (longlong)local_640.ChangedProperties.ArrayNum * 8); FVar11.Data = FVar11.Data + 8) {
    if (*(FName *)FVar11.Data == *pFVar9) {
      bVar4 = true;
      goto LAB_148867c0b;
    }
  }
  bVar4 = false;
LAB_148867c0b:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"ChangedProperties.Contains(\'AdditionalName\')",bVar4);
  pFVar9 = ::FName::FName(&local_5e0,10,L"NamesArray",FNAME_Add);
  for (FVar11.Data = local_640.ChangedProperties.AllocatorInstance.Data;
      (FName *)FVar11.Data !=
      (FName *)(local_640.ChangedProperties.AllocatorInstance.Data +
               (longlong)local_640.ChangedProperties.ArrayNum * 8); FVar11.Data = FVar11.Data + 8) {
    if (*(FName *)FVar11.Data == *pFVar9) {
      bVar4 = true;
      goto LAB_148867c65;
    }
  }
  bVar4 = false;
LAB_148867c65:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"ChangedProperties.Contains(\'NamesArray\')",bVar4);
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
            (&local_608,&local_1e8,&local_2c8,(FGenerateObjectDiffOptions *)local_488,
             (FDiffableObjectArchetypeCache *)0x0);
  if (local_428 != 0) {
    plVar10 = local_418;
    if (local_400 != (longlong *)0x0) {
      plVar10 = local_400;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (local_488._16_8_ != 0) {
    plVar10 = (longlong *)(local_488 + 0x20);
    if (local_450 != (longlong *)0x0) {
      plVar10 = local_450;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"bHasNonPropertyChanges",local_608.bHasNonPropertyChanges)
  ;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"ChangedProperties.Num()",
             local_608.ChangedProperties.ArrayNum,1);
  pFVar9 = ::FName::FName(local_5d8,10,L"NamesArray",FNAME_Add);
  FVar11.Data = local_608.ChangedProperties.AllocatorInstance.Data;
  do {
    if ((FName *)FVar11.Data ==
        (FName *)(local_608.ChangedProperties.AllocatorInstance.Data +
                 (longlong)local_608.ChangedProperties.ArrayNum * 8)) {
      bVar4 = false;
LAB_148867da8:
      FAutomationTestBase::TestTrue
                ((FAutomationTestBase *)this,L"ChangedProperties.Contains(\'NamesArray\')",bVar4);
      if ((FName *)local_608.ChangedProperties.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_608.ChangedProperties.AllocatorInstance.Data);
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
    if (*(FName *)FVar11.Data == *pFVar9) {
      bVar4 = true;
      goto LAB_148867da8;
    }
    FVar11.Data = FVar11.Data + 8;
  } while( true );
}

// GetBeautifiedTestName @ 148867ee0

FString * __thiscall
TransactionDiffingTests::FEditNamesTest::GetBeautifiedTestName
          (FEditNamesTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Transactions.EditNames");
  return __return_storage_ptr__;
}

