// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 8

// GetTestFlags @ 1470856a0

EAutomationTestFlags __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsAddTrivial_Runner::GetTestFlags
          (FDynamicProcessorsAddTrivial_Runner *this)

{
  EAutomationTestFlags EVar1;
  
  EVar1 = ::operator|(ClientContext,EditorContext);
  EVar1 = ::operator|(EVar1,EngineFilter);
  return EVar1;
}

// IsStressTest @ 1470856d0

bool __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsAddTrivial_Runner::IsStressTest
          (FDynamicProcessorsAddTrivial_Runner *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1470856e0

uint __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsAddTrivial_Runner::GetRequiredDeviceNum
          (FDynamicProcessorsAddTrivial_Runner *this)

{
  return 1;
}

// GetTestSourceFileName @ 147085750

FString * __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsAddTrivial_Runner::GetTestSourceFileName
          (FDynamicProcessorsAddTrivial_Runner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassDynamicProcessorsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 147085780

int __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsAddTrivial_Runner::GetTestSourceFileLine
          (FDynamicProcessorsAddTrivial_Runner *this)

{
  return 0x43;
}

// GetTests @ 1470857a0

void __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsAddTrivial_Runner::GetTests
          (FDynamicProcessorsAddTrivial_Runner *this,
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
  
  ::FString::FString(&local_28,"System.Mass.ProcessingPhases.DynamicProcessors.Add");
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

// RunTest @ 147085cf0

bool __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsAddTrivial_Runner::RunTest
          (FDynamicProcessorsAddTrivial_Runner *this,FString *param_1)

{
  FDynamicProcessorsAddTrivial *this_00;
  FAutomationTestFramework *pFVar1;
  FAITestCommand_SetUpTest *this_01;
  TRawPtrProxy<FAITestCommand_SetUpTest> TVar2;
  TSharedPtr<IAutomationLatentCommand,1> *pTVar3;
  FAITestCommand_PerformTest *this_02;
  TRawPtrProxy<FAITestCommand_PerformTest> TVar4;
  FAITestCommand_VerifyTestResults *this_03;
  TRawPtrProxy<FAITestCommand_VerifyTestResults> TVar5;
  FAITestCommand_TearDownTest *this_04;
  TRawPtrProxy<FAITestCommand_TearDownTest> TVar6;
  longlong lVar7;
  FDynamicProcessorsAddTrivial *pFVar8;
  FDynamicProcessorsAddTrivial *local_118;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  TSharedPtr<IAutomationLatentCommand,1> local_48;
  TSharedPtr<IAutomationLatentCommand,1> local_38;
  TSharedPtr<IAutomationLatentCommand,1> local_28;
  TSharedPtr<IAutomationLatentCommand,1> local_18;
  
  this_00 = ::operator_new(0x1a0);
  if (this_00 == (FDynamicProcessorsAddTrivial *)0x0) {
    local_118 = (FDynamicProcessorsAddTrivial *)0x0;
  }
  else {
    pFVar8 = this_00;
    for (lVar7 = 0x1a0; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)&pFVar8->_padding_ = 0;
      pFVar8 = (FDynamicProcessorsAddTrivial *)((longlong)&pFVar8->_padding_ + 1);
    }
    local_118 = FDynamicProcessorsAddTrivial::FDynamicProcessorsAddTrivial(this_00);
  }
  (**(code **)(local_118->_padding_ + 8))(local_118,this);
  pFVar1 = FAutomationTestFramework::Get();
  this_01 = ::operator_new(0x28);
  if (this_01 != (FAITestCommand_SetUpTest *)0x0) {
    FAITestCommand_SetUpTest::FAITestCommand_SetUpTest(this_01,(FAITestBase *)local_118);
  }
  TVar2 = MakeShareable<FAITestCommand_SetUpTest>((FAITestCommand_SetUpTest *)local_68);
  pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
           TSharedPtr<IAutomationLatentCommand,1><FAITestCommand_SetUpTest>
                     (&local_48,(TRawPtrProxy<FAITestCommand_SetUpTest> *)TVar2.Object);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
  pFVar1 = FAutomationTestFramework::Get();
  this_02 = ::operator_new(0x28);
  if (this_02 != (FAITestCommand_PerformTest *)0x0) {
    FAITestCommand_PerformTest::FAITestCommand_PerformTest(this_02,(FAITestBase *)local_118);
  }
  TVar4 = MakeShareable<FAITestCommand_PerformTest>((FAITestCommand_PerformTest *)(local_68 + 8));
  pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
           TSharedPtr<IAutomationLatentCommand,1><FAITestCommand_PerformTest>
                     (&local_38,(TRawPtrProxy<FAITestCommand_PerformTest> *)TVar4.Object);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
  pFVar1 = FAutomationTestFramework::Get();
  this_03 = ::operator_new(0x28);
  if (this_03 != (FAITestCommand_VerifyTestResults *)0x0) {
    FAITestCommand_VerifyTestResults::FAITestCommand_VerifyTestResults
              (this_03,(FAITestBase *)local_118);
  }
  TVar5 = MakeShareable<FAITestCommand_VerifyTestResults>
                    ((FAITestCommand_VerifyTestResults *)local_58);
  pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
           TSharedPtr<IAutomationLatentCommand,1><FAITestCommand_VerifyTestResults>
                     (&local_28,(TRawPtrProxy<FAITestCommand_VerifyTestResults> *)TVar5.Object);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
  pFVar1 = FAutomationTestFramework::Get();
  this_04 = ::operator_new(0x28);
  if (this_04 != (FAITestCommand_TearDownTest *)0x0) {
    FAITestCommand_TearDownTest::FAITestCommand_TearDownTest(this_04,(FAITestBase *)local_118);
  }
  TVar6 = MakeShareable<FAITestCommand_TearDownTest>((FAITestCommand_TearDownTest *)(local_58 + 8));
  pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
           TSharedPtr<IAutomationLatentCommand,1><FAITestCommand_TearDownTest>
                     (&local_18,(TRawPtrProxy<FAITestCommand_TearDownTest> *)TVar6.Object);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
  return true;
}

// GetBeautifiedTestName @ 147085fd0

FString * __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsAddTrivial_Runner::GetBeautifiedTestName
          (FDynamicProcessorsAddTrivial_Runner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Mass.ProcessingPhases.DynamicProcessors.Add");
  return __return_storage_ptr__;
}

