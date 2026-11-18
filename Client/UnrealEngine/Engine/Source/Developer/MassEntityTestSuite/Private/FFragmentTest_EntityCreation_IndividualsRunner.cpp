// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 8

// GetTestFlags @ 1470a39d0

EAutomationTestFlags __thiscall
UE::Mass::Test::Observers::FFragmentTest_EntityCreation_IndividualsRunner::GetTestFlags
          (FFragmentTest_EntityCreation_IndividualsRunner *this)

{
  EAutomationTestFlags EVar1;
  
  EVar1 = ::operator|(ClientContext,EditorContext);
  EVar1 = ::operator|(EVar1,EngineFilter);
  return EVar1;
}

// IsStressTest @ 1470a3a00

bool __thiscall
UE::Mass::Test::Observers::FFragmentTest_EntityCreation_IndividualsRunner::IsStressTest
          (FFragmentTest_EntityCreation_IndividualsRunner *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1470a3a10

uint __thiscall
UE::Mass::Test::Observers::FFragmentTest_EntityCreation_IndividualsRunner::GetRequiredDeviceNum
          (FFragmentTest_EntityCreation_IndividualsRunner *this)

{
  return 1;
}

// GetTestSourceFileName @ 1470a3a30

FString * __thiscall
UE::Mass::Test::Observers::FFragmentTest_EntityCreation_IndividualsRunner::GetTestSourceFileName
          (FFragmentTest_EntityCreation_IndividualsRunner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassObserverTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1470a3a60

int __thiscall
UE::Mass::Test::Observers::FFragmentTest_EntityCreation_IndividualsRunner::GetTestSourceFileLine
          (FFragmentTest_EntityCreation_IndividualsRunner *this)

{
  return 0x274;
}

// GetTests @ 1470a3a80

void __thiscall
UE::Mass::Test::Observers::FFragmentTest_EntityCreation_IndividualsRunner::GetTests
          (FFragmentTest_EntityCreation_IndividualsRunner *this,
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
  
  ::FString::FString(&local_28,"System.Mass.Observer.Create.FragmentIndividualEntities");
  if (((param_1->AllocatorInstance).Data <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      (param_1->AllocatorInstance).Data + (longlong)param_1->ArrayMax * 0x10)) {
    Core::Private::FormatStringSan::
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
    iVar3 = Core::Private::
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
    Core::Private::FormatStringSan::
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
    iVar3 = Core::Private::
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

// RunTest @ 1470a3fd0

bool __thiscall
UE::Mass::Test::Observers::FFragmentTest_EntityCreation_IndividualsRunner::RunTest
          (FFragmentTest_EntityCreation_IndividualsRunner *this,FString *param_1)

{
  char cVar1;
  undefined1 local_58;
  FFragmentTestBase *local_38;
  
  local_58 = 0;
  local_38 = ::operator_new(0xf8);
  if (local_38 == (FFragmentTestBase *)0x0) {
    local_38 = (FFragmentTestBase *)0x0;
  }
  else {
    FFragmentTestBase::FFragmentTestBase(local_38);
    local_38->_padding_ =
         (longlong)&___7FFragmentTest_EntityCreation_Individuals_Observers_Test_Mass_UE__6B_;
    local_38->OperationFlagsObserved = Add;
  }
  (**(code **)(local_38->_padding_ + 8))(local_38,this);
  cVar1 = (**(code **)(local_38->_padding_ + 0x18))(local_38);
  if (cVar1 != '\0') {
    local_58 = (**(code **)(local_38->_padding_ + 0x30))(local_38);
  }
  (**(code **)(local_38->_padding_ + 0x38))(local_38);
  if (local_38 != (FFragmentTestBase *)0x0) {
    (**(code **)(local_38->_padding_ + 0x10))(local_38,1);
  }
  return (bool)local_58;
}

// GetBeautifiedTestName @ 1470a4100

FString * __thiscall
UE::Mass::Test::Observers::FFragmentTest_EntityCreation_IndividualsRunner::GetBeautifiedTestName
          (FFragmentTest_EntityCreation_IndividualsRunner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Mass.Observer.Create.FragmentIndividualEntities"
                    );
  return __return_storage_ptr__;
}

