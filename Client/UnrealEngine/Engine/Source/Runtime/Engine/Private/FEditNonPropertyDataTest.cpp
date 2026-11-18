// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 148866f40

EAutomationTestFlags __thiscall
TransactionDiffingTests::FEditNonPropertyDataTest::GetTestFlags(FEditNonPropertyDataTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 148866f50

bool __thiscall
TransactionDiffingTests::FEditNonPropertyDataTest::IsStressTest(FEditNonPropertyDataTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148866f60

uint __thiscall
TransactionDiffingTests::FEditNonPropertyDataTest::GetRequiredDeviceNum
          (FEditNonPropertyDataTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 148866f70

FString * __thiscall
TransactionDiffingTests::FEditNonPropertyDataTest::GetTestSourceFileName
          (FEditNonPropertyDataTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\TransactionDiffingTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148866fa0

int __thiscall
TransactionDiffingTests::FEditNonPropertyDataTest::GetTestSourceFileLine
          (FEditNonPropertyDataTest *this)

{
  return 0x2d;
}

// GetTests @ 148866fb0

/* WARNING: Removing unreachable block (ram,0x00014886709d) */
/* WARNING: Removing unreachable block (ram,0x000148867168) */

void __thiscall
TransactionDiffingTests::FEditNonPropertyDataTest::GetTests
          (FEditNonPropertyDataTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Transactions.EditNonPropertyData");
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

// RunTest @ 148867190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
TransactionDiffingTests::FEditNonPropertyDataTest::RunTest
          (FEditNonPropertyDataTest *this,FString *param_1)

{
  UObject *pUVar1;
  UClass *this_00;
  UObject *pUVar2;
  UTransactionDiffingTestObject *pUVar3;
  longlong *plVar4;
  undefined1 auStackY_2c8 [32];
  FTransactionObjectDeltaChange local_298;
  undefined1 local_278 [56];
  longlong *plStack_240;
  FProperty **local_238;
  ulonglong uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  longlong local_218;
  longlong local_208 [3];
  longlong *local_1f0;
  undefined2 local_1e8;
  FDiffableObject local_1d8;
  FDiffableObject local_f8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  this_00 = UTransactionDiffingTestObject::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UTransactionDiffingTestObject>(pUVar2);
  local_278._0_8_ = 0;
  local_278._8_8_ = 0;
  local_278._16_8_ = 0;
  local_278._24_8_ = 0;
  local_278._32_8_ = 0;
  local_278._40_8_ = 0;
  local_278._48_8_ = 0;
  plStack_240 = (longlong *)0x0;
  local_238 = (FProperty **)0x0;
  uStack_230 = 0;
  local_228._0_1_ = false;
  local_228._1_7_ = 0;
  uStack_220 = 0;
  UE::Transaction::DiffUtil::GetDiffableObject
            (&local_f8,pUVar1,(FGetDiffableObjectOptions *)local_278);
  if (local_278._16_8_ != 0) {
    plVar4 = (longlong *)(local_278 + 0x20);
    if (plStack_240 != (longlong *)0x0) {
      plVar4 = plStack_240;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pUVar3->NonPropertyData = 10;
  local_278._0_8_ = 0;
  local_278._8_8_ = 0;
  local_278._16_8_ = 0;
  local_278._24_8_ = 0;
  local_278._32_8_ = 0;
  local_278._40_8_ = 0;
  local_278._48_8_ = 0;
  plStack_240 = (longlong *)0x0;
  local_238 = (FProperty **)0x0;
  uStack_230 = 0;
  local_228._0_1_ = false;
  local_228._1_7_ = 0;
  uStack_220 = 0;
  UE::Transaction::DiffUtil::GetDiffableObject
            (&local_1d8,(UObject *)pUVar3,(FGetDiffableObjectOptions *)local_278);
  if (local_278._16_8_ != 0) {
    plVar4 = (longlong *)(local_278 + 0x20);
    if (plStack_240 != (longlong *)0x0) {
      plVar4 = plStack_240;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  local_278._0_8_ = local_278._0_8_ & 0xffffffffffffff00;
  local_278._16_8_ = 0;
  plStack_240 = (longlong *)0x0;
  local_238 = (FProperty **)0x0;
  uStack_230 = uStack_230 & 0xffffffff00000000;
  local_218 = 0;
  local_1f0 = (longlong *)0x0;
  local_1e8._0_1_ = true;
  local_1e8._1_1_ = false;
  local_228._0_1_ = true;
  UE::Transaction::DiffUtil::GenerateObjectDiff
            (&local_298,&local_f8,&local_1d8,(FGenerateObjectDiffOptions *)local_278,
             (FDiffableObjectArchetypeCache *)0x0);
  if (local_218 != 0) {
    plVar4 = local_208;
    if (local_1f0 != (longlong *)0x0) {
      plVar4 = local_1f0;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_278._16_8_ != 0) {
    plVar4 = (longlong *)(local_278 + 0x20);
    if (plStack_240 != (longlong *)0x0) {
      plVar4 = plStack_240;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"bHasNonPropertyChanges",local_298.bHasNonPropertyChanges)
  ;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"ChangedProperties.Num()",
             local_298.ChangedProperties.ArrayNum,0);
  if (local_298.ChangedProperties.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.ChangedProperties.AllocatorInstance.Data);
  }
  if (local_1d8.SerializedTaggedData.Pairs.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_1d8.SerializedTaggedData.Pairs.AllocatorInstance.Data);
  }
  if (local_1d8.SerializedData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.SerializedData.Data.AllocatorInstance.Data);
  }
  if (local_1d8.ObjectArchetype.CachedSubObjectHierarchy.AllocatorInstance.SecondaryData !=
      (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)local_1d8.ObjectArchetype.CachedSubObjectHierarchy.AllocatorInstance.
                          SecondaryData);
  }
  if (local_1d8.ObjectArchetype.SubObjectHierarchyIDs.AllocatorInstance.SecondaryData !=
      (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_1d8.ObjectArchetype.SubObjectHierarchyIDs.AllocatorInstance.
                          SecondaryData);
  }
  if (local_f8.SerializedTaggedData.Pairs.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_f8.SerializedTaggedData.Pairs.AllocatorInstance.Data);
  }
  if (local_f8.SerializedData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.SerializedData.Data.AllocatorInstance.Data);
  }
  if (local_f8.ObjectArchetype.CachedSubObjectHierarchy.AllocatorInstance.SecondaryData !=
      (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)local_f8.ObjectArchetype.CachedSubObjectHierarchy.AllocatorInstance.
                          SecondaryData);
  }
  if (local_f8.ObjectArchetype.SubObjectHierarchyIDs.AllocatorInstance.SecondaryData !=
      (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_f8.ObjectArchetype.SubObjectHierarchyIDs.AllocatorInstance.
                          SecondaryData);
  }
  return true;
}

// GetBeautifiedTestName @ 148867420

FString * __thiscall
TransactionDiffingTests::FEditNonPropertyDataTest::GetBeautifiedTestName
          (FEditNonPropertyDataTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Transactions.EditNonPropertyData");
  return __return_storage_ptr__;
}

