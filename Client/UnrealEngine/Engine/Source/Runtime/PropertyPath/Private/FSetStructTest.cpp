// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 8

// GetTestFlags @ 144470a60

EAutomationTestFlags __thiscall FSetStructTest::GetTestFlags(FSetStructTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 144470a70

bool __thiscall FSetStructTest::IsStressTest(FSetStructTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 144470a80

uint __thiscall FSetStructTest::GetRequiredDeviceNum(FSetStructTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 144470a90

FString * __thiscall
FSetStructTest::GetTestSourceFileName(FSetStructTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Private\\Tests\\PropertyPathHelpersTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 144470ac0

int __thiscall FSetStructTest::GetTestSourceFileLine(FSetStructTest *this)

{
  return 0xf8;
}

// GetTests @ 144470ad0

/* WARNING: Removing unreachable block (ram,0x000144470bbd) */
/* WARNING: Removing unreachable block (ram,0x000144470c88) */

void __thiscall
FSetStructTest::GetTests
          (FSetStructTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.PropertyPath.SetStructTest");
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

// RunTest @ 144470cb0

bool __thiscall FSetStructTest::RunTest(FSetStructTest *this,FString *param_1)

{
  code *pcVar1;
  TObjectPtr<UPropertyPathTestObject>_u_0 TVar2;
  bool bVar3;
  FPropertyPathTestStruct *pFVar4;
  FString *pFVar5;
  byte bVar6;
  byte bVar7;
  FString local_218;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_208 [2];
  FPropertyPathTestStruct local_1f8;
  FPropertyPathTestStruct local_198;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_138 [2];
  FPropertyPathTestStruct local_128;
  FPropertyPathTestStruct local_c8;
  FPropertyPathTestStruct local_68;
  
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_208[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_138[0].ObjectPtr);
  TVar2 = local_138[0];
  pFVar4 = FPropertyPathTestStruct::FPropertyPathTestStruct(&local_68,&local_1f8);
  (TVar2.DebugPtr)->bSetterCalled = true;
  FPropertyPathTestStruct::operator=(&(TVar2.DebugPtr)->Struct,pFVar4);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(pFVar4);
  pFVar5 = ::FString::FString(&local_218,"Struct");
  PropertyPathHelpers::SetPropertyValue<FPropertyPathTestStruct>
            ((UObject *)local_208[0].DebugPtr,pFVar5,&local_1f8);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  bVar3 = FPropertyPathTestStruct::operator==(&(local_208[0].DebugPtr)->Struct,&local_1f8);
  if (bVar3) {
    bVar6 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  bVar3 = UPropertyPathTestObject::operator==(local_208[0].DebugPtr,local_138[0].DebugPtr);
  if (bVar3) {
    bVar7 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  bVar6 = bVar6 & bVar7;
  if ((local_208[0].DebugPtr)->bSetterCalled != true) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  if ((local_208[0].DebugPtr)->bGetterCalled == false) {
    bVar7 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  (local_208[0].DebugPtr)->bSetterCalled = false;
  (local_208[0].DebugPtr)->bGetterCalled = false;
  bVar7 = bVar7 & bVar6;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_128);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_198);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1f8);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_208[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_138[0].ObjectPtr);
  TVar2 = local_138[0];
  pFVar4 = FPropertyPathTestStruct::FPropertyPathTestStruct(&local_68,&local_1f8);
  (TVar2.DebugPtr)->bSetterCalled = true;
  FPropertyPathTestStruct::operator=(&(TVar2.DebugPtr)->StructRef,pFVar4);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(pFVar4);
  pFVar5 = ::FString::FString(&local_218,"StructRef");
  PropertyPathHelpers::SetPropertyValue<FPropertyPathTestStruct>
            ((UObject *)local_208[0].DebugPtr,pFVar5,&local_1f8);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  bVar3 = FPropertyPathTestStruct::operator==(&(local_208[0].DebugPtr)->StructRef,&local_1f8);
  if (!bVar3) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  bVar3 = UPropertyPathTestObject::operator==(local_208[0].DebugPtr,local_138[0].DebugPtr);
  if (bVar3) {
    bVar6 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  bVar6 = bVar6 & bVar7;
  if ((local_208[0].DebugPtr)->bSetterCalled != true) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  if ((local_208[0].DebugPtr)->bGetterCalled == false) {
    bVar7 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  (local_208[0].DebugPtr)->bSetterCalled = false;
  (local_208[0].DebugPtr)->bGetterCalled = false;
  bVar7 = bVar7 & bVar6;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_128);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_198);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1f8);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_208[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_138[0].ObjectPtr);
  TVar2 = local_138[0];
  pFVar4 = FPropertyPathTestStruct::FPropertyPathTestStruct(&local_68,&local_1f8);
  (TVar2.DebugPtr)->bSetterCalled = true;
  FPropertyPathTestStruct::operator=(&(TVar2.DebugPtr)->StructConstRef,pFVar4);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(pFVar4);
  pFVar5 = ::FString::FString(&local_218,"StructConstRef");
  PropertyPathHelpers::SetPropertyValue<FPropertyPathTestStruct>
            ((UObject *)local_208[0].DebugPtr,pFVar5,&local_1f8);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  bVar3 = FPropertyPathTestStruct::operator==(&(local_208[0].DebugPtr)->StructConstRef,&local_1f8);
  if (!bVar3) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  bVar3 = UPropertyPathTestObject::operator==(local_208[0].DebugPtr,local_138[0].DebugPtr);
  if (bVar3) {
    bVar6 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  bVar6 = bVar6 & bVar7;
  if ((local_208[0].DebugPtr)->bSetterCalled != true) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  if ((local_208[0].DebugPtr)->bGetterCalled == false) {
    bVar7 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  *(bool *)((longlong)local_208[0] + 0x178) = false;
  *(bool *)((longlong)local_208[0] + 0x179) = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_128);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_198);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1f8);
  return (bool)(bVar7 & bVar6);
}

// GetBeautifiedTestName @ 144471300

FString * __thiscall
FSetStructTest::GetBeautifiedTestName(FSetStructTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.PropertyPath.SetStructTest");
  return __return_storage_ptr__;
}

