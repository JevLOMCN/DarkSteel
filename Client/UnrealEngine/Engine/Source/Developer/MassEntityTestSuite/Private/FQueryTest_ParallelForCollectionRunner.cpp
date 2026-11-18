// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 8

// GetTestFlags @ 1470ca9f0

EAutomationTestFlags __thiscall
FMassQueryTest::FQueryTest_ParallelForCollectionRunner::GetTestFlags
          (FQueryTest_ParallelForCollectionRunner *this)

{
  return EngineFilter|ClientContext|EditorContext;
}

// IsStressTest @ 1470caa00

bool __thiscall
FMassQueryTest::FQueryTest_ParallelForCollectionRunner::IsStressTest
          (FQueryTest_ParallelForCollectionRunner *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1470caa10

uint __thiscall
FMassQueryTest::FQueryTest_ParallelForCollectionRunner::GetRequiredDeviceNum
          (FQueryTest_ParallelForCollectionRunner *this)

{
  return 1;
}

// GetTestSourceFileName @ 1470caa20

FString * __thiscall
FMassQueryTest::FQueryTest_ParallelForCollectionRunner::GetTestSourceFileName
          (FQueryTest_ParallelForCollectionRunner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassParallelQueryTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1470caa50

int __thiscall
FMassQueryTest::FQueryTest_ParallelForCollectionRunner::GetTestSourceFileLine
          (FQueryTest_ParallelForCollectionRunner *this)

{
  return 0x72;
}

// GetTests @ 1470caa60

/* WARNING: Removing unreachable block (ram,0x0001470cab4d) */
/* WARNING: Removing unreachable block (ram,0x0001470cac18) */

void __thiscall
FMassQueryTest::FQueryTest_ParallelForCollectionRunner::GetTests
          (FQueryTest_ParallelForCollectionRunner *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Mass.Query.ParallelForCollection");
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

// RunTest @ 1470cac90

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassQueryTest::FQueryTest_ParallelForCollectionRunner::RunTest
          (FQueryTest_ParallelForCollectionRunner *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  FEntityTestBase *this_00;
  
  uVar3 = 0;
  this_00 = ::operator_new(0x90);
  if (this_00 == (FEntityTestBase *)0x0) {
    this_00 = (FEntityTestBase *)0x0;
  }
  else {
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    (this_00->EmptyArchetype).DataPtr.Object = (FMassArchetypeData *)0x0;
    (this_00->EmptyArchetype).DataPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (this_00->FloatsArchetype).DataPtr.Object = (FMassArchetypeData *)0x0;
    (this_00->FloatsArchetype).DataPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (this_00->IntsArchetype).DataPtr.Object = (FMassArchetypeData *)0x0;
    (this_00->IntsArchetype).DataPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (this_00->FloatsIntsArchetype).DataPtr.Object = (FMassArchetypeData *)0x0;
    (this_00->FloatsIntsArchetype).DataPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (this_00->InstanceInt).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    (this_00->InstanceInt).StructMemory = (uchar *)0x0;
    FEntityTestBase::FEntityTestBase(this_00);
    this_00->_padding_ = (longlong)&___7FQueryTest_ParallelForCollection_FMassQueryTest__6B_;
  }
  pcVar1 = *(code **)(this_00->_padding_ + 8);
  if (pcVar1 == FAITestBase::SetTestRunner) {
    this_00->_padding_ = (longlong)this;
  }
  else {
    (*pcVar1)(this_00,this);
  }
  pcVar1 = *(code **)(this_00->_padding_ + 0x18);
  if (pcVar1 == FEntityTestBase::SetUp) {
    cVar2 = FEntityTestBase::SetUp(this_00);
  }
  else {
    cVar2 = (*pcVar1)();
  }
  if (cVar2 != '\0') {
    pcVar1 = *(code **)(this_00->_padding_ + 0x30);
    if (pcVar1 == FQueryTest_ParallelForCollection::InstantTest) {
      uVar3 = FQueryTest_ParallelForCollection::InstantTest
                        ((FQueryTest_ParallelForCollection *)this_00);
    }
    else {
      uVar3 = (*pcVar1)();
    }
  }
  pcVar1 = *(code **)(this_00->_padding_ + 0x38);
  if (pcVar1 == FExecutionTestBase::TearDown) {
    FExecutionTestBase::TearDown((FExecutionTestBase *)this_00);
  }
  else {
    (*pcVar1)();
  }
  (**(code **)(this_00->_padding_ + 0x10))(this_00,1);
  return (bool)uVar3;
}

// GetBeautifiedTestName @ 1470cadb0

FString * __thiscall
FMassQueryTest::FQueryTest_ParallelForCollectionRunner::GetBeautifiedTestName
          (FQueryTest_ParallelForCollectionRunner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Mass.Query.ParallelForCollection");
  return __return_storage_ptr__;
}

