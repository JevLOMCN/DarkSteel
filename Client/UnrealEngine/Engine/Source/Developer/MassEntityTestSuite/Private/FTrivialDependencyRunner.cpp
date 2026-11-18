// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 8

// GetTestFlags @ 14705d460

EAutomationTestFlags __thiscall
FMassDependencySolverTest::FTrivialDependencyRunner::GetTestFlags(FTrivialDependencyRunner *this)

{
  EAutomationTestFlags EVar1;
  
  EVar1 = ::operator|(ClientContext,EditorContext);
  EVar1 = ::operator|(EVar1,EngineFilter);
  return EVar1;
}

// IsStressTest @ 14705d490

bool __thiscall
FMassDependencySolverTest::FTrivialDependencyRunner::IsStressTest(FTrivialDependencyRunner *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14705d4a0

uint __thiscall
FMassDependencySolverTest::FTrivialDependencyRunner::GetRequiredDeviceNum
          (FTrivialDependencyRunner *this)

{
  return 1;
}

// GetTestSourceFileName @ 14705d4c0

FString * __thiscall
FMassDependencySolverTest::FTrivialDependencyRunner::GetTestSourceFileName
          (FTrivialDependencyRunner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassDependencyTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14705d4f0

int __thiscall
FMassDependencySolverTest::FTrivialDependencyRunner::GetTestSourceFileLine
          (FTrivialDependencyRunner *this)

{
  return 0x44;
}

// GetTests @ 14705d510

void __thiscall
FMassDependencySolverTest::FTrivialDependencyRunner::GetTests
          (FTrivialDependencyRunner *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
  
  ::FString::FString(&local_28,"System.Mass.Dependencies.Trivial");
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

// RunTest @ 14705da60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassDependencySolverTest::FTrivialDependencyRunner::RunTest
          (FTrivialDependencyRunner *this,FString *param_1)

{
  char cVar1;
  longlong lVar2;
  FDependencySolverBase *pFVar3;
  undefined1 local_58;
  FDependencySolverBase *local_38;
  
  local_58 = 0;
  local_38 = ::operator_new(0x60);
  if (local_38 == (FDependencySolverBase *)0x0) {
    local_38 = (FDependencySolverBase *)0x0;
  }
  else {
    pFVar3 = local_38;
    for (lVar2 = 0x60; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)&pFVar3->_padding_ = 0;
      pFVar3 = (FDependencySolverBase *)((longlong)&pFVar3->_padding_ + 1);
    }
    FDependencySolverBase::FDependencySolverBase(local_38);
    local_38->_padding_ = (longlong)&___7FTrivialDependency_FMassDependencySolverTest__6B_;
    local_38[1]._padding_ = 0;
  }
  (**(code **)(local_38->_padding_ + 8))(local_38,this);
  cVar1 = (**(code **)(local_38->_padding_ + 0x18))(local_38);
  if (cVar1 != '\0') {
    local_58 = (**(code **)(local_38->_padding_ + 0x30))(local_38);
  }
  (**(code **)(local_38->_padding_ + 0x38))(local_38);
  if (local_38 != (FDependencySolverBase *)0x0) {
    (**(code **)(local_38->_padding_ + 0x10))(local_38,1);
  }
  return (bool)local_58;
}

// GetBeautifiedTestName @ 14705dba0

FString * __thiscall
FMassDependencySolverTest::FTrivialDependencyRunner::GetBeautifiedTestName
          (FTrivialDependencyRunner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Mass.Dependencies.Trivial");
  return __return_storage_ptr__;
}

