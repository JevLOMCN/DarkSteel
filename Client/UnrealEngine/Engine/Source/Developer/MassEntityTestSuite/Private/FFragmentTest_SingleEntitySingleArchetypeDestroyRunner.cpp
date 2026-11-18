// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 8

// GetTestFlags @ 147096a50

EAutomationTestFlags __thiscall
UE::Mass::Test::Observers::FFragmentTest_SingleEntitySingleArchetypeDestroyRunner::GetTestFlags
          (FFragmentTest_SingleEntitySingleArchetypeDestroyRunner *this)

{
  EAutomationTestFlags EVar1;
  
  EVar1 = ::operator|(ClientContext,EditorContext);
  EVar1 = ::operator|(EVar1,EngineFilter);
  return EVar1;
}

// IsStressTest @ 147096a80

bool __thiscall
UE::Mass::Test::Observers::FFragmentTest_SingleEntitySingleArchetypeDestroyRunner::IsStressTest
          (FFragmentTest_SingleEntitySingleArchetypeDestroyRunner *this)

{
  return false;
}

// GetRequiredDeviceNum @ 147096a90

uint __thiscall
UE::Mass::Test::Observers::FFragmentTest_SingleEntitySingleArchetypeDestroyRunner::
GetRequiredDeviceNum(FFragmentTest_SingleEntitySingleArchetypeDestroyRunner *this)

{
  return 1;
}

// GetTestSourceFileName @ 147096ab0

FString * __thiscall
UE::Mass::Test::Observers::FFragmentTest_SingleEntitySingleArchetypeDestroyRunner::
GetTestSourceFileName
          (FFragmentTest_SingleEntitySingleArchetypeDestroyRunner *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassObserverTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 147096ae0

int __thiscall
UE::Mass::Test::Observers::FFragmentTest_SingleEntitySingleArchetypeDestroyRunner::
GetTestSourceFileLine(FFragmentTest_SingleEntitySingleArchetypeDestroyRunner *this)

{
  return 0x1e6;
}

// GetTests @ 147096b00

void __thiscall
UE::Mass::Test::Observers::FFragmentTest_SingleEntitySingleArchetypeDestroyRunner::GetTests
          (FFragmentTest_SingleEntitySingleArchetypeDestroyRunner *this,
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
  
  ::FString::FString(&local_28,"System.Mass.Observer.Fragment.SingleEntitySingleArchetypeDestroy");
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

// RunTest @ 147097050

bool __thiscall
UE::Mass::Test::Observers::FFragmentTest_SingleEntitySingleArchetypeDestroyRunner::RunTest
          (FFragmentTest_SingleEntitySingleArchetypeDestroyRunner *this,FString *param_1)

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
         (longlong)&___7FFragmentTest_SingleEntitySingleArchetypeDestroy_Observers_Test_Mass_UE__6B_
    ;
    local_38->OperationFlagsObserved = Remove;
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

// GetBeautifiedTestName @ 147097180

FString * __thiscall
UE::Mass::Test::Observers::FFragmentTest_SingleEntitySingleArchetypeDestroyRunner::
GetBeautifiedTestName
          (FFragmentTest_SingleEntitySingleArchetypeDestroyRunner *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Mass.Observer.Fragment.SingleEntitySingleArchetypeDestroy");
  return __return_storage_ptr__;
}

