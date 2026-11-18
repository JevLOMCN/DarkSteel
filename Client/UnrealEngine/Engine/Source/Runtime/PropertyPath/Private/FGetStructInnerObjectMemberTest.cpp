// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 8

// GetTestFlags @ 144478b20

EAutomationTestFlags __thiscall
FGetStructInnerObjectMemberTest::GetTestFlags(FGetStructInnerObjectMemberTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 144478b30

bool __thiscall FGetStructInnerObjectMemberTest::IsStressTest(FGetStructInnerObjectMemberTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 144478b40

uint __thiscall
FGetStructInnerObjectMemberTest::GetRequiredDeviceNum(FGetStructInnerObjectMemberTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 144478b50

FString * __thiscall
FGetStructInnerObjectMemberTest::GetTestSourceFileName
          (FGetStructInnerObjectMemberTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Private\\Tests\\PropertyPathHelpersTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 144478b80

int __thiscall
FGetStructInnerObjectMemberTest::GetTestSourceFileLine(FGetStructInnerObjectMemberTest *this)

{
  return 0x385;
}

// GetTests @ 144478b90

/* WARNING: Removing unreachable block (ram,0x000144478c7d) */
/* WARNING: Removing unreachable block (ram,0x000144478d48) */

void __thiscall
FGetStructInnerObjectMemberTest::GetTests
          (FGetStructInnerObjectMemberTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.PropertyPath.GetStructInnerObjectMemberTest");
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

// RunTest @ 144478d70

bool __thiscall
FGetStructInnerObjectMemberTest::RunTest(FGetStructInnerObjectMemberTest *this,FString *param_1)

{
  code *pcVar1;
  UPropertyPathTestObject *pUVar2;
  TObjectPtr<UPropertyPathTestObject>_u_0 TVar3;
  bool bVar4;
  FString *pFVar5;
  byte bVar6;
  byte bVar7;
  FString local_218;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_208;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_200;
  FPropertyPathTestStruct local_1f8;
  FPropertyPathTestStruct local_198;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_138;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_130;
  FPropertyPathTestStruct local_128;
  FPropertyPathTestStruct local_c8;
  FPropertyPathTestStruct local_68;
  
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_208.ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_138.ObjectPtr);
  (local_138.DebugPtr)->bGetterCalled = true;
  FPropertyPathTestStruct::FPropertyPathTestStruct(&local_68,&(local_138.DebugPtr)->Struct);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_68.InnerObject.field0_0x0.DebugPtr != (TObjectPtr<UPropertyPathTestObject>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_68.InnerObject.field0_0x0);
  }
  local_130 = local_68.InnerObject.field0_0x0;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_68);
  pFVar5 = ::FString::FString(&local_218,"Struct.InnerObject");
  PropertyPathHelpers::GetPropertyValue<TObjectPtr<UPropertyPathTestObject>_>
            ((UObject *)local_208.DebugPtr,pFVar5,
             (TObjectPtr<UPropertyPathTestObject> *)&local_200.ObjectPtr);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  bVar4 = UPropertyPathTestObject::operator==
                    (local_200.DebugPtr,
                     ((local_208.DebugPtr)->Struct).InnerObject.field0_0x0.DebugPtr);
  if (bVar4) {
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
  bVar4 = UPropertyPathTestObject::operator==(local_130.DebugPtr,local_200.DebugPtr);
  if (bVar4) {
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
  if ((local_208.DebugPtr)->bSetterCalled != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  if ((local_208.DebugPtr)->bGetterCalled == true) {
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
  (local_208.DebugPtr)->bSetterCalled = false;
  (local_208.DebugPtr)->bGetterCalled = false;
  bVar7 = bVar7 & bVar6;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_128);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_198);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1f8);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_208.ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_138.ObjectPtr);
  TVar3 = local_138;
  (local_138.DebugPtr)->bGetterCalled = true;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = ((local_138.DebugPtr)->StructRef).InnerObject.field0_0x0.DebugPtr,
     pUVar2 != (UPropertyPathTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  local_130 = ((TVar3.DebugPtr)->StructRef).InnerObject.field0_0x0;
  pFVar5 = ::FString::FString(&local_218,"StructRef.InnerObject");
  PropertyPathHelpers::GetPropertyValue<TObjectPtr<UPropertyPathTestObject>_>
            ((UObject *)local_208.DebugPtr,pFVar5,
             (TObjectPtr<UPropertyPathTestObject> *)&local_200.ObjectPtr);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  bVar4 = UPropertyPathTestObject::operator==
                    (local_200.DebugPtr,
                     ((local_208.DebugPtr)->StructRef).InnerObject.field0_0x0.DebugPtr);
  if (!bVar4) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  bVar4 = UPropertyPathTestObject::operator==(local_130.DebugPtr,local_200.DebugPtr);
  if (bVar4) {
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
  if ((local_208.DebugPtr)->bSetterCalled != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  if ((local_208.DebugPtr)->bGetterCalled == true) {
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
  (local_208.DebugPtr)->bSetterCalled = false;
  (local_208.DebugPtr)->bGetterCalled = false;
  bVar7 = bVar7 & bVar6;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_128);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_198);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1f8);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_208.ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_138.ObjectPtr);
  (local_138.DebugPtr)->bGetterCalled = true;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = ((local_138.DebugPtr)->StructConstRef).InnerObject.field0_0x0.DebugPtr,
     pUVar2 != (UPropertyPathTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  local_130 = ((local_138.DebugPtr)->StructConstRef).InnerObject.field0_0x0;
  pFVar5 = ::FString::FString(&local_218,"StructConstRef.InnerObject");
  PropertyPathHelpers::GetPropertyValue<TObjectPtr<UPropertyPathTestObject>_>
            ((UObject *)local_208.DebugPtr,pFVar5,
             (TObjectPtr<UPropertyPathTestObject> *)&local_200.ObjectPtr);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  bVar4 = UPropertyPathTestObject::operator==
                    (local_200.DebugPtr,
                     ((local_208.DebugPtr)->StructConstRef).InnerObject.field0_0x0.DebugPtr);
  if (!bVar4) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  bVar4 = UPropertyPathTestObject::operator==(local_130.DebugPtr,local_200.DebugPtr);
  if (bVar4) {
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
  if ((local_208.DebugPtr)->bSetterCalled != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  if ((local_208.DebugPtr)->bGetterCalled == true) {
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
  *(bool *)((longlong)local_208 + 0x178) = false;
  *(bool *)((longlong)local_208 + 0x179) = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_128);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_198);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1f8);
  return (bool)(bVar7 & bVar6);
}

// GetBeautifiedTestName @ 1444793d0

FString * __thiscall
FGetStructInnerObjectMemberTest::GetBeautifiedTestName
          (FGetStructInnerObjectMemberTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.PropertyPath.GetStructInnerObjectMemberTest");
  return __return_storage_ptr__;
}

