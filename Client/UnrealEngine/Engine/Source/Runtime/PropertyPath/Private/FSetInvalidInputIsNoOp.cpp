// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 8

// GetTestFlags @ 14446eff0

EAutomationTestFlags __thiscall FSetInvalidInputIsNoOp::GetTestFlags(FSetInvalidInputIsNoOp *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14446f000

bool __thiscall FSetInvalidInputIsNoOp::IsStressTest(FSetInvalidInputIsNoOp *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14446f010

uint __thiscall FSetInvalidInputIsNoOp::GetRequiredDeviceNum(FSetInvalidInputIsNoOp *this)

{
  return 1;
}

// GetTestSourceFileName @ 14446f020

FString * __thiscall
FSetInvalidInputIsNoOp::GetTestSourceFileName
          (FSetInvalidInputIsNoOp *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Private\\Tests\\PropertyPathHelpersTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14446f050

int __thiscall FSetInvalidInputIsNoOp::GetTestSourceFileLine(FSetInvalidInputIsNoOp *this)

{
  return 100;
}

// GetTests @ 14446f060

/* WARNING: Removing unreachable block (ram,0x00014446f14d) */
/* WARNING: Removing unreachable block (ram,0x00014446f218) */

void __thiscall
FSetInvalidInputIsNoOp::GetTests
          (FSetInvalidInputIsNoOp *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.PropertyPath.SetInvalidInputIsNoOp");
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

// RunTest @ 14446f240

bool __thiscall FSetInvalidInputIsNoOp::RunTest(FSetInvalidInputIsNoOp *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  byte bVar4;
  byte bVar5;
  int local_res18 [4];
  FString local_f8;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_e8 [2];
  FPropertyPathTestStruct local_d8;
  FPropertyPathTestStruct local_78;
  
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_e8[0].ObjectPtr);
  pFVar3 = ::FString::FString(&local_f8,"Bool");
  PropertyPathHelpers::SetPropertyValue<FPropertyPathTestStruct>
            ((UObject *)local_e8[0].DebugPtr,pFVar3,&local_d8);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if ((local_e8[0].DebugPtr)->Bool == false) {
    bVar4 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_f8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    bVar4 = 0;
  }
  if ((local_e8[0].DebugPtr)->bSetterCalled == false) {
    bVar5 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_f8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  bVar4 = bVar4 & bVar5;
  if ((local_e8[0].DebugPtr)->bGetterCalled != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_f8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    bVar4 = 0;
  }
  (local_e8[0].DebugPtr)->bSetterCalled = false;
  (local_e8[0].DebugPtr)->bGetterCalled = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_78);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_d8);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_e8[0].ObjectPtr);
  pFVar3 = ::FString::FString(&local_f8,"Integer");
  PropertyPathHelpers::SetPropertyValue<FPropertyPathTestStruct>
            ((UObject *)local_e8[0].DebugPtr,pFVar3,&local_d8);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  bVar2 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Integer Invalid Input Set No Op",
                     (local_e8[0].DebugPtr)->Integer,0);
  bVar4 = bVar2 & bVar4;
  if ((local_e8[0].DebugPtr)->bSetterCalled != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_f8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    bVar4 = 0;
  }
  if ((local_e8[0].DebugPtr)->bGetterCalled == false) {
    bVar5 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_f8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  (local_e8[0].DebugPtr)->bSetterCalled = false;
  (local_e8[0].DebugPtr)->bGetterCalled = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_78);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_d8);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_e8[0].ObjectPtr);
  pFVar3 = ::FString::FString(&local_f8,"Float");
  PropertyPathHelpers::SetPropertyValue<FPropertyPathTestStruct>
            ((UObject *)local_e8[0].DebugPtr,pFVar3,&local_d8);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  bVar2 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Float Invalid Input Set No Op",
                     (local_e8[0].DebugPtr)->Float,0.0,__real_38d1b717);
  bVar4 = bVar2 & bVar5 & bVar4;
  if ((local_e8[0].DebugPtr)->bSetterCalled != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_f8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    bVar4 = 0;
  }
  if ((local_e8[0].DebugPtr)->bGetterCalled == false) {
    bVar5 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_f8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  (local_e8[0].DebugPtr)->bSetterCalled = false;
  (local_e8[0].DebugPtr)->bGetterCalled = false;
  bVar5 = bVar5 & bVar4;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_78);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_d8);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_e8[0].ObjectPtr);
  local_res18[0] = 1;
  pFVar3 = ::FString::FString(&local_f8,"Struct");
  PropertyPathHelpers::SetPropertyValue<int>((UObject *)local_e8[0].DebugPtr,pFVar3,local_res18);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  bVar2 = FPropertyPathTestStruct::operator==(&(local_e8[0].DebugPtr)->Struct,&local_78);
  if (!bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_f8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  if ((local_e8[0].DebugPtr)->bSetterCalled == false) {
    bVar4 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_f8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    bVar4 = 0;
  }
  bVar2 = (bool)(bVar4 & bVar5);
  if ((local_e8[0].DebugPtr)->bGetterCalled != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_f8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  *(bool *)((longlong)local_e8[0] + 0x178) = false;
  *(bool *)((longlong)local_e8[0] + 0x179) = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_78);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_d8);
  return bVar2;
}

// GetBeautifiedTestName @ 14446f770

FString * __thiscall
FSetInvalidInputIsNoOp::GetBeautifiedTestName
          (FSetInvalidInputIsNoOp *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.PropertyPath.SetInvalidInputIsNoOp");
  return __return_storage_ptr__;
}

