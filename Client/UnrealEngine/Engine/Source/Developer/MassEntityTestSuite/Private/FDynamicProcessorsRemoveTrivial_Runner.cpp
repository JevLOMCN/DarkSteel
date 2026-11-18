// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 8

// GetTestFlags @ 1470884f0

EAutomationTestFlags __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsRemoveTrivial_Runner::GetTestFlags
          (FDynamicProcessorsRemoveTrivial_Runner *this)

{
  EAutomationTestFlags EVar1;
  
  EVar1 = ::operator|(ClientContext,EditorContext);
  EVar1 = ::operator|(EVar1,EngineFilter);
  return EVar1;
}

// IsStressTest @ 147088520

bool __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsRemoveTrivial_Runner::IsStressTest
          (FDynamicProcessorsRemoveTrivial_Runner *this)

{
  return false;
}

// GetRequiredDeviceNum @ 147088530

uint __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsRemoveTrivial_Runner::GetRequiredDeviceNum
          (FDynamicProcessorsRemoveTrivial_Runner *this)

{
  return 1;
}

// GetTestSourceFileName @ 147088550

FString * __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsRemoveTrivial_Runner::GetTestSourceFileName
          (FDynamicProcessorsRemoveTrivial_Runner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassDynamicProcessorsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 147088580

int __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsRemoveTrivial_Runner::GetTestSourceFileLine
          (FDynamicProcessorsRemoveTrivial_Runner *this)

{
  return 100;
}

// GetTests @ 1470885a0

void __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsRemoveTrivial_Runner::GetTests
          (FDynamicProcessorsRemoveTrivial_Runner *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,"System.Mass.ProcessingPhases.DynamicProcessors.Remove");
  if (((param_1->AllocatorInstance).Data <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      (param_1->AllocatorInstance).Data + (longlong)param_1->ArrayMax * 0x10)) {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->ArrayNum == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
    param_1->ArrayNum = iVar3;
  }
  iVar3 = param_1->ArrayNum;
  param_1->ArrayNum = param_1->ArrayNum + 1;
  pFVar4 = ::operator_new(0x10,(param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10);
  ::FString::FString(pFVar4,&local_28);
  ::FString::~FString(&local_28);
  pFVar4 = &local_18;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&(pFVar4->Data).AllocatorInstance.Data = 0;
    pFVar4 = (FString *)((longlong)&(pFVar4->Data).AllocatorInstance.Data + 1);
  }
  pFVar5 = (FScriptContainerElement *)::FString::FString(&local_18);
  if (((param_2->AllocatorInstance).Data <= pFVar5) &&
     (pFVar5 < (param_2->AllocatorInstance).Data + (longlong)param_2->ArrayMax * 0x10)) {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2->ArrayNum == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    param_2->ArrayNum = iVar3;
  }
  iVar3 = param_2->ArrayNum;
  param_2->ArrayNum = param_2->ArrayNum + 1;
  pFVar4 = ::operator_new(0x10,(param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10);
  ::FString::FString(pFVar4,(FString *)pFVar5);
  ::FString::~FString(&local_18);
  return;
}

// RunTest @ 147088b00

bool __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsRemoveTrivial_Runner::RunTest
          (FDynamicProcessorsRemoveTrivial_Runner *this,FString *param_1)

{
  FAutomationTestFramework *pFVar1;
  FAITestCommand_SetUpTest *this_00;
  TRawPtrProxy<FAITestCommand_SetUpTest> TVar2;
  TSharedPtr<IAutomationLatentCommand,1> *pTVar3;
  FAITestCommand_PerformTest *this_01;
  TRawPtrProxy<FAITestCommand_PerformTest> TVar4;
  FAITestCommand_VerifyTestResults *this_02;
  TRawPtrProxy<FAITestCommand_VerifyTestResults> TVar5;
  FAITestCommand_TearDownTest *this_03;
  TRawPtrProxy<FAITestCommand_TearDownTest> TVar6;
  FDynamicProcessorsAddTrivial *local_128;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  TSharedPtr<IAutomationLatentCommand,1> local_50;
  TSharedPtr<IAutomationLatentCommand,1> local_40;
  TSharedPtr<IAutomationLatentCommand,1> local_30;
  TSharedPtr<IAutomationLatentCommand,1> local_20 [2];
  
  local_128 = ::operator_new(0x1a8);
  if (local_128 == (FDynamicProcessorsAddTrivial *)0x0) {
    local_128 = (FDynamicProcessorsAddTrivial *)0x0;
  }
  else {
    FDynamicProcessorsAddTrivial::FDynamicProcessorsAddTrivial(local_128);
    local_128->_padding_ =
         (longlong)&___7FDynamicProcessorsRemoveTrivial_FMassDynamicProcessorsTest__6B_;
    *(undefined4 *)&local_128[1]._padding_ = 2;
    local_128->AllowedTicksCount = 1;
  }
  (**(code **)(local_128->_padding_ + 8))(local_128,this);
  pFVar1 = FAutomationTestFramework::Get();
  this_00 = ::operator_new(0x28);
  if (this_00 != (FAITestCommand_SetUpTest *)0x0) {
    FAITestCommand_SetUpTest::FAITestCommand_SetUpTest(this_00,(FAITestBase *)local_128);
  }
  TVar2 = MakeShareable<FAITestCommand_SetUpTest>((FAITestCommand_SetUpTest *)local_70);
  pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
           TSharedPtr<IAutomationLatentCommand,1><FAITestCommand_SetUpTest>
                     (&local_50,(TRawPtrProxy<FAITestCommand_SetUpTest> *)TVar2.Object);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
  pFVar1 = FAutomationTestFramework::Get();
  this_01 = ::operator_new(0x28);
  if (this_01 != (FAITestCommand_PerformTest *)0x0) {
    FAITestCommand_PerformTest::FAITestCommand_PerformTest(this_01,(FAITestBase *)local_128);
  }
  TVar4 = MakeShareable<FAITestCommand_PerformTest>((FAITestCommand_PerformTest *)(local_70 + 8));
  pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
           TSharedPtr<IAutomationLatentCommand,1><FAITestCommand_PerformTest>
                     (&local_40,(TRawPtrProxy<FAITestCommand_PerformTest> *)TVar4.Object);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
  pFVar1 = FAutomationTestFramework::Get();
  this_02 = ::operator_new(0x28);
  if (this_02 != (FAITestCommand_VerifyTestResults *)0x0) {
    FAITestCommand_VerifyTestResults::FAITestCommand_VerifyTestResults
              (this_02,(FAITestBase *)local_128);
  }
  TVar5 = MakeShareable<FAITestCommand_VerifyTestResults>
                    ((FAITestCommand_VerifyTestResults *)local_60);
  pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
           TSharedPtr<IAutomationLatentCommand,1><FAITestCommand_VerifyTestResults>
                     (&local_30,(TRawPtrProxy<FAITestCommand_VerifyTestResults> *)TVar5.Object);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
  pFVar1 = FAutomationTestFramework::Get();
  this_03 = ::operator_new(0x28);
  if (this_03 != (FAITestCommand_TearDownTest *)0x0) {
    FAITestCommand_TearDownTest::FAITestCommand_TearDownTest(this_03,(FAITestBase *)local_128);
  }
  TVar6 = MakeShareable<FAITestCommand_TearDownTest>((FAITestCommand_TearDownTest *)(local_60 + 8));
  pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
           TSharedPtr<IAutomationLatentCommand,1><FAITestCommand_TearDownTest>
                     (local_20,(TRawPtrProxy<FAITestCommand_TearDownTest> *)TVar6.Object);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
  return true;
}

// GetBeautifiedTestName @ 147088e10

FString * __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsRemoveTrivial_Runner::GetBeautifiedTestName
          (FDynamicProcessorsRemoveTrivial_Runner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Mass.ProcessingPhases.DynamicProcessors.Remove")
  ;
  return __return_storage_ptr__;
}

