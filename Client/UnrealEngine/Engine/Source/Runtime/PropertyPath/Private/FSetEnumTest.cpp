// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 8

// GetTestFlags @ 14446fe10

EAutomationTestFlags __thiscall FSetEnumTest::GetTestFlags(FSetEnumTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14446fe20

bool __thiscall FSetEnumTest::IsStressTest(FSetEnumTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14446fe30

uint __thiscall FSetEnumTest::GetRequiredDeviceNum(FSetEnumTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14446fe40

FString * __thiscall
FSetEnumTest::GetTestSourceFileName(FSetEnumTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Private\\Tests\\PropertyPathHelpersTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14446fe70

int __thiscall FSetEnumTest::GetTestSourceFileLine(FSetEnumTest *this)

{
  return 0xab;
}

// GetTests @ 14446fe80

/* WARNING: Removing unreachable block (ram,0x00014446ff6d) */
/* WARNING: Removing unreachable block (ram,0x000144470038) */

void __thiscall
FSetEnumTest::GetTests
          (FSetEnumTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.PropertyPath.SetEnumTest");
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

// RunTest @ 144470060

bool __thiscall FSetEnumTest::RunTest(FSetEnumTest *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FString *pFVar6;
  byte bVar7;
  byte bVar8;
  EPropertyPathTestEnum local_res18 [4];
  FString local_1c8;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_1b8 [2];
  FPropertyPathTestStruct local_1a8;
  FPropertyPathTestStruct local_148;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_e8 [2];
  FPropertyPathTestStruct local_d8;
  FPropertyPathTestStruct local_78;
  
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_e8[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_1b8[0].ObjectPtr);
  local_res18[0] = Two;
  ((local_1b8[0].DebugPtr)->EnumTwo).Value = '\x01';
  pFVar6 = ::FString::FString(&local_1c8,"EnumTwo");
  PropertyPathHelpers::SetPropertyValue<enum_EPropertyPathTestEnum>
            ((UObject *)local_e8[0].DebugPtr,pFVar6,local_res18);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  bVar2 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Enum Set",
                     (uint)((local_e8[0].DebugPtr)->EnumTwo).Value,1);
  bVar3 = UPropertyPathTestObject::operator==(local_e8[0].DebugPtr,local_1b8[0].DebugPtr);
  if (!bVar3) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  if ((local_e8[0].DebugPtr)->bSetterCalled == false) {
    bVar7 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  bVar7 = bVar7 & bVar2;
  if ((local_e8[0].DebugPtr)->bGetterCalled != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  (local_e8[0].DebugPtr)->bSetterCalled = false;
  (local_e8[0].DebugPtr)->bGetterCalled = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_148);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1a8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_78);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_d8);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_1b8[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_e8[0].ObjectPtr);
  local_res18[0] = Four;
  ((local_e8[0].DebugPtr)->EnumOne).Value = '\x03';
  ((local_e8[0].DebugPtr)->EnumTwo).Value = '\x02';
  ((local_e8[0].DebugPtr)->EnumThree).Value = '\x01';
  ((local_e8[0].DebugPtr)->EnumFour).Value = '\0';
  pFVar6 = ::FString::FString(&local_1c8,"EnumOne");
  PropertyPathHelpers::SetPropertyValue<enum_EPropertyPathTestEnum>
            ((UObject *)local_1b8[0].DebugPtr,pFVar6,local_res18);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  ((local_e8[0].DebugPtr)->EnumOne).Value = '\x03';
  bVar2 = UPropertyPathTestObject::operator==(local_1b8[0].DebugPtr,local_e8[0].DebugPtr);
  if (bVar2) {
    bVar8 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar8 = 0;
  }
  local_res18[0] = Three;
  bVar8 = bVar8 & bVar7;
  pFVar6 = ::FString::FString(&local_1c8,"EnumTwo");
  PropertyPathHelpers::SetPropertyValue<enum_EPropertyPathTestEnum>
            ((UObject *)local_1b8[0].DebugPtr,pFVar6,local_res18);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  ((local_e8[0].DebugPtr)->EnumTwo).Value = '\x02';
  bVar2 = UPropertyPathTestObject::operator==(local_1b8[0].DebugPtr,local_e8[0].DebugPtr);
  if (!bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar8 = 0;
  }
  local_res18[0] = Two;
  pFVar6 = ::FString::FString(&local_1c8,"EnumThree");
  PropertyPathHelpers::SetPropertyValue<enum_EPropertyPathTestEnum>
            ((UObject *)local_1b8[0].DebugPtr,pFVar6,local_res18);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  ((local_e8[0].DebugPtr)->EnumThree).Value = '\x01';
  bVar2 = UPropertyPathTestObject::operator==(local_1b8[0].DebugPtr,local_e8[0].DebugPtr);
  if (bVar2) {
    bVar7 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  local_res18[0] = One;
  bVar7 = bVar7 & bVar8;
  pFVar6 = ::FString::FString(&local_1c8,"EnumFour");
  PropertyPathHelpers::SetPropertyValue<enum_EPropertyPathTestEnum>
            ((UObject *)local_1b8[0].DebugPtr,pFVar6,local_res18);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  ((local_e8[0].DebugPtr)->EnumFour).Value = '\0';
  bVar2 = UPropertyPathTestObject::operator==(local_1b8[0].DebugPtr,local_e8[0].DebugPtr);
  if (!bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  bVar2 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Enum Close No Overwrite Set",
                     (uint)((local_1b8[0].DebugPtr)->EnumOne).Value,3);
  bVar3 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Enum Close No Overwrite Set",
                     (uint)((local_1b8[0].DebugPtr)->EnumTwo).Value,2);
  bVar4 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Enum Close No Overwrite Set",
                     (uint)((local_1b8[0].DebugPtr)->EnumThree).Value,1);
  bVar5 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Enum Close No Overwrite Set",
                     (uint)((local_1b8[0].DebugPtr)->EnumFour).Value,0);
  local_res18[0] = Four;
  bVar7 = bVar5 & bVar4 & bVar3 & bVar2 & bVar7;
  pFVar6 = ::FString::FString(&local_1c8,"EnumFour");
  PropertyPathHelpers::SetPropertyValue<enum_EPropertyPathTestEnum>
            ((UObject *)local_1b8[0].DebugPtr,pFVar6,local_res18);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  ((local_e8[0].DebugPtr)->EnumFour).Value = '\x03';
  bVar2 = UPropertyPathTestObject::operator==(local_1b8[0].DebugPtr,local_e8[0].DebugPtr);
  if (!bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  local_res18[0] = Three;
  pFVar6 = ::FString::FString(&local_1c8,"EnumThree");
  PropertyPathHelpers::SetPropertyValue<enum_EPropertyPathTestEnum>
            ((UObject *)local_1b8[0].DebugPtr,pFVar6,local_res18);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  ((local_e8[0].DebugPtr)->EnumThree).Value = '\x02';
  bVar2 = UPropertyPathTestObject::operator==(local_1b8[0].DebugPtr,local_e8[0].DebugPtr);
  if (bVar2) {
    bVar8 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar8 = 0;
  }
  local_res18[0] = Two;
  bVar8 = bVar8 & bVar7;
  pFVar6 = ::FString::FString(&local_1c8,"EnumTwo");
  PropertyPathHelpers::SetPropertyValue<enum_EPropertyPathTestEnum>
            ((UObject *)local_1b8[0].DebugPtr,pFVar6,local_res18);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  ((local_e8[0].DebugPtr)->EnumTwo).Value = '\x01';
  bVar2 = UPropertyPathTestObject::operator==(local_1b8[0].DebugPtr,local_e8[0].DebugPtr);
  if (!bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar8 = 0;
  }
  local_res18[0] = One;
  pFVar6 = ::FString::FString(&local_1c8,"EnumOne");
  PropertyPathHelpers::SetPropertyValue<enum_EPropertyPathTestEnum>
            ((UObject *)local_1b8[0].DebugPtr,pFVar6,local_res18);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  ((local_e8[0].DebugPtr)->EnumOne).Value = '\0';
  bVar2 = UPropertyPathTestObject::operator==(local_1b8[0].DebugPtr,local_e8[0].DebugPtr);
  if (bVar2) {
    bVar7 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  bVar2 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Enum Close No Overwrite Set",
                     (uint)((local_1b8[0].DebugPtr)->EnumOne).Value,0);
  bVar3 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Enum Close No Overwrite Set",
                     (uint)((local_1b8[0].DebugPtr)->EnumTwo).Value,1);
  bVar4 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Enum Close No Overwrite Set",
                     (uint)((local_1b8[0].DebugPtr)->EnumThree).Value,2);
  bVar5 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Enum Close No Overwrite Set",
                     (uint)((local_1b8[0].DebugPtr)->EnumFour).Value,3);
  bVar7 = bVar5 & bVar4 & bVar3 & bVar2 & bVar7 & bVar8;
  if ((local_1b8[0].DebugPtr)->bSetterCalled != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  if ((local_1b8[0].DebugPtr)->bGetterCalled == false) {
    bVar8 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar8 = 0;
  }
  *(bool *)((longlong)local_1b8[0] + 0x178) = false;
  *(bool *)((longlong)local_1b8[0] + 0x179) = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_78);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_d8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_148);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1a8);
  return (bool)(bVar8 & bVar7);
}

// GetBeautifiedTestName @ 144470940

FString * __thiscall
FSetEnumTest::GetBeautifiedTestName(FSetEnumTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.PropertyPath.SetEnumTest");
  return __return_storage_ptr__;
}

