// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 8

// GetTestFlags @ 14446e620

EAutomationTestFlags __thiscall FSetPrimitivesTest::GetTestFlags(FSetPrimitivesTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14446e630

bool __thiscall FSetPrimitivesTest::IsStressTest(FSetPrimitivesTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14446e640

uint __thiscall FSetPrimitivesTest::GetRequiredDeviceNum(FSetPrimitivesTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14446e650

FString * __thiscall
FSetPrimitivesTest::GetTestSourceFileName(FSetPrimitivesTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Private\\Tests\\PropertyPathHelpersTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14446e680

int __thiscall FSetPrimitivesTest::GetTestSourceFileLine(FSetPrimitivesTest *this)

{
  return 0x35;
}

// GetTests @ 14446e690

/* WARNING: Removing unreachable block (ram,0x00014446e77d) */
/* WARNING: Removing unreachable block (ram,0x00014446e848) */

void __thiscall
FSetPrimitivesTest::GetTests
          (FSetPrimitivesTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.PropertyPath.SetPrimitivesTest");
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

// RunTest @ 14446e870

bool __thiscall FSetPrimitivesTest::RunTest(FSetPrimitivesTest *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  byte bVar4;
  byte bVar5;
  float local_res18 [2];
  FString local_1b8;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_1a8 [2];
  FPropertyPathTestStruct local_198;
  FPropertyPathTestStruct local_138;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_d8 [2];
  FPropertyPathTestStruct local_c8;
  FPropertyPathTestStruct local_68;
  
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_1a8[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_d8[0].ObjectPtr);
  local_res18[0] = (float)CONCAT31(local_res18[0]._1_3_,1);
  (local_d8[0].DebugPtr)->Bool = true;
  pFVar3 = ::FString::FString(&local_1b8,"Bool");
  PropertyPathHelpers::SetPropertyValue<bool>
            ((UObject *)local_1a8[0].DebugPtr,pFVar3,(bool *)local_res18);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if ((local_1a8[0].DebugPtr)->Bool == true) {
    bVar5 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1b8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  bVar2 = UPropertyPathTestObject::operator==(local_1a8[0].DebugPtr,local_d8[0].DebugPtr);
  if (bVar2) {
    bVar4 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1b8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    bVar4 = 0;
  }
  bVar5 = bVar5 & bVar4;
  if ((local_1a8[0].DebugPtr)->bSetterCalled != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1b8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  if ((local_1a8[0].DebugPtr)->bGetterCalled == false) {
    bVar4 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1b8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    bVar4 = 0;
  }
  (local_1a8[0].DebugPtr)->bSetterCalled = false;
  (local_1a8[0].DebugPtr)->bGetterCalled = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_68);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_138);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_198);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_1a8[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_d8[0].ObjectPtr);
  local_res18[0] = 1.4013e-45;
  (local_d8[0].DebugPtr)->Integer = 1;
  pFVar3 = ::FString::FString(&local_1b8,"Integer");
  PropertyPathHelpers::SetPropertyValue<int>
            ((UObject *)local_1a8[0].DebugPtr,pFVar3,(int *)local_res18);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  bVar2 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Primitive Integer Set",
                     (local_1a8[0].DebugPtr)->Integer,1);
  bVar5 = bVar2 & bVar4 & bVar5;
  bVar2 = UPropertyPathTestObject::operator==(local_1a8[0].DebugPtr,local_d8[0].DebugPtr);
  if (!bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1b8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  if ((local_1a8[0].DebugPtr)->bSetterCalled == false) {
    bVar4 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1b8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    bVar4 = 0;
  }
  bVar4 = bVar4 & bVar5;
  if ((local_1a8[0].DebugPtr)->bGetterCalled != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1b8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    bVar4 = 0;
  }
  (local_1a8[0].DebugPtr)->bSetterCalled = false;
  (local_1a8[0].DebugPtr)->bGetterCalled = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_68);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_138);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_198);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_1a8[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_d8[0].ObjectPtr);
  local_res18[0] = 1.5;
  (local_d8[0].DebugPtr)->bSetterCalled = true;
  (local_d8[0].DebugPtr)->Float = 1.5;
  pFVar3 = ::FString::FString(&local_1b8,"Float");
  PropertyPathHelpers::SetPropertyValue<float>((UObject *)local_1a8[0].DebugPtr,pFVar3,local_res18);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  bVar2 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Primitive Float Set",
                     (local_1a8[0].DebugPtr)->Float,__real_3fc00000,__real_38d1b717);
  bVar4 = bVar2 & bVar4;
  bVar2 = UPropertyPathTestObject::operator==(local_1a8[0].DebugPtr,local_d8[0].DebugPtr);
  if (!bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1b8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    bVar4 = 0;
  }
  if ((local_1a8[0].DebugPtr)->bSetterCalled == true) {
    bVar5 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1b8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  bVar2 = (bool)(bVar5 & bVar4);
  if ((local_1a8[0].DebugPtr)->bGetterCalled != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1b8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  *(bool *)((longlong)local_1a8[0] + 0x178) = false;
  *(bool *)((longlong)local_1a8[0] + 0x179) = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_68);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_138);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_198);
  return bVar2;
}

// GetBeautifiedTestName @ 14446ede0

FString * __thiscall
FSetPrimitivesTest::GetBeautifiedTestName(FSetPrimitivesTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.PropertyPath.SetPrimitivesTest");
  return __return_storage_ptr__;
}

