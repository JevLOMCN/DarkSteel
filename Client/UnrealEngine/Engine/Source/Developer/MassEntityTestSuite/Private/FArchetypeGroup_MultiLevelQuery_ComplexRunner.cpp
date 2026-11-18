// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 8

// GetTestFlags @ 14706b830

EAutomationTestFlags __thiscall
UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_ComplexRunner::GetTestFlags
          (FArchetypeGroup_MultiLevelQuery_ComplexRunner *this)

{
  EAutomationTestFlags EVar1;
  
  EVar1 = ::operator|(ClientContext,EditorContext);
  EVar1 = ::operator|(EVar1,EngineFilter);
  return EVar1;
}

// IsStressTest @ 14706b870

bool __thiscall
UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_ComplexRunner::IsStressTest
          (FArchetypeGroup_MultiLevelQuery_ComplexRunner *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14706b880

uint __thiscall
UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_ComplexRunner::GetRequiredDeviceNum
          (FArchetypeGroup_MultiLevelQuery_ComplexRunner *this)

{
  return 1;
}

// GetTestSourceFileName @ 14706b8a0

FString * __thiscall
UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_ComplexRunner::GetTestSourceFileName
          (FArchetypeGroup_MultiLevelQuery_ComplexRunner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassArchetypeGroupTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14706b8d0

int __thiscall
UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_ComplexRunner::GetTestSourceFileLine
          (FArchetypeGroup_MultiLevelQuery_ComplexRunner *this)

{
  return 0x1ea;
}

// GetTests @ 14706b970

void __thiscall
UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_ComplexRunner::GetTests
          (FArchetypeGroup_MultiLevelQuery_ComplexRunner *this,
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
  
  ::FString::FString(&local_28,"System.Mass.Archetype.Group.MultiLevelQuery.Complex");
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

// RunTest @ 14706bec0

bool __thiscall
UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_ComplexRunner::RunTest
          (FArchetypeGroup_MultiLevelQuery_ComplexRunner *this,FString *param_1)

{
  char cVar1;
  FArchetypeGroup_MultiLevelQuery_Complex *this_00;
  longlong lVar2;
  FArchetypeGroup_MultiLevelQuery_Complex *pFVar3;
  undefined1 local_48;
  FArchetypeGroup_MultiLevelQuery_Complex *local_28;
  
  local_48 = 0;
  this_00 = ::operator_new(0x430);
  if (this_00 == (FArchetypeGroup_MultiLevelQuery_Complex *)0x0) {
    local_28 = (FArchetypeGroup_MultiLevelQuery_Complex *)0x0;
  }
  else {
    pFVar3 = this_00;
    for (lVar2 = 0x430; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)&pFVar3->_padding_ = 0;
      pFVar3 = (FArchetypeGroup_MultiLevelQuery_Complex *)((longlong)&pFVar3->_padding_ + 1);
    }
    local_28 = FArchetypeGroup_MultiLevelQuery_Complex::FArchetypeGroup_MultiLevelQuery_Complex
                         (this_00);
  }
  (**(code **)(local_28->_padding_ + 8))(local_28,this);
  cVar1 = (**(code **)(local_28->_padding_ + 0x18))(local_28);
  if (cVar1 != '\0') {
    local_48 = (**(code **)(local_28->_padding_ + 0x30))(local_28);
  }
  (**(code **)(local_28->_padding_ + 0x38))(local_28);
  if (local_28 != (FArchetypeGroup_MultiLevelQuery_Complex *)0x0) {
    (**(code **)(local_28->_padding_ + 0x10))(local_28,1);
  }
  return (bool)local_48;
}

// GetBeautifiedTestName @ 14706bfd0

FString * __thiscall
UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_ComplexRunner::GetBeautifiedTestName
          (FArchetypeGroup_MultiLevelQuery_ComplexRunner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Mass.Archetype.Group.MultiLevelQuery.Complex");
  return __return_storage_ptr__;
}

