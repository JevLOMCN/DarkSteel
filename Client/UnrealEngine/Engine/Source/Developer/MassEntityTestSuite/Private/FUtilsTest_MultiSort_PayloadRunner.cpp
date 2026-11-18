// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 8

// GetTestFlags @ 147060750

EAutomationTestFlags __thiscall
FMassUtilsTest::FUtilsTest_MultiSort_PayloadRunner::GetTestFlags
          (FUtilsTest_MultiSort_PayloadRunner *this)

{
  EAutomationTestFlags EVar1;
  
  EVar1 = ::operator|(ClientContext,EditorContext);
  EVar1 = ::operator|(EVar1,EngineFilter);
  return EVar1;
}

// IsStressTest @ 147060780

bool __thiscall
FMassUtilsTest::FUtilsTest_MultiSort_PayloadRunner::IsStressTest
          (FUtilsTest_MultiSort_PayloadRunner *this)

{
  return false;
}

// GetRequiredDeviceNum @ 147060790

uint __thiscall
FMassUtilsTest::FUtilsTest_MultiSort_PayloadRunner::GetRequiredDeviceNum
          (FUtilsTest_MultiSort_PayloadRunner *this)

{
  return 1;
}

// GetTestSourceFileName @ 1470607b0

FString * __thiscall
FMassUtilsTest::FUtilsTest_MultiSort_PayloadRunner::GetTestSourceFileName
          (FUtilsTest_MultiSort_PayloadRunner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassUtilsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1470607e0

int __thiscall
FMassUtilsTest::FUtilsTest_MultiSort_PayloadRunner::GetTestSourceFileLine
          (FUtilsTest_MultiSort_PayloadRunner *this)

{
  return 0x6f;
}

// GetTests @ 147060800

void __thiscall
FMassUtilsTest::FUtilsTest_MultiSort_PayloadRunner::GetTests
          (FUtilsTest_MultiSort_PayloadRunner *this,
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
  
  ::FString::FString(&local_28,"System.Mass.Utils.MultiSort_Payload");
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

// RunTest @ 147060d50

bool __thiscall
FMassUtilsTest::FUtilsTest_MultiSort_PayloadRunner::RunTest
          (FUtilsTest_MultiSort_PayloadRunner *this,FString *param_1)

{
  char cVar1;
  FUtilsTest_MultiSort_Payload *this_00;
  longlong lVar2;
  FUtilsTest_MultiSort_Payload *pFVar3;
  undefined1 local_48;
  FUtilsTest_MultiSort_Payload *local_28;
  
  local_48 = 0;
  this_00 = ::operator_new(0x40);
  if (this_00 == (FUtilsTest_MultiSort_Payload *)0x0) {
    local_28 = (FUtilsTest_MultiSort_Payload *)0x0;
  }
  else {
    pFVar3 = this_00;
    for (lVar2 = 0x40; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)pFVar3 = 0;
      pFVar3 = (FUtilsTest_MultiSort_Payload *)&pFVar3->field_0x1;
    }
    local_28 = FUtilsTest_MultiSort_Payload::FUtilsTest_MultiSort_Payload(this_00);
  }
  (**(code **)(*(longlong *)local_28 + 8))(local_28,this);
  cVar1 = (**(code **)(*(longlong *)local_28 + 0x18))(local_28);
  if (cVar1 != '\0') {
    local_48 = (**(code **)(*(longlong *)local_28 + 0x30))(local_28);
  }
  (**(code **)(*(longlong *)local_28 + 0x38))(local_28);
  if (local_28 != (FUtilsTest_MultiSort_Payload *)0x0) {
    (**(code **)(*(longlong *)local_28 + 0x10))(local_28,1);
  }
  return (bool)local_48;
}

// GetBeautifiedTestName @ 147060e60

FString * __thiscall
FMassUtilsTest::FUtilsTest_MultiSort_PayloadRunner::GetBeautifiedTestName
          (FUtilsTest_MultiSort_PayloadRunner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Mass.Utils.MultiSort_Payload");
  return __return_storage_ptr__;
}

