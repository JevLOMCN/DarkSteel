// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 8

// GetTestFlags @ 144472bd0

EAutomationTestFlags __thiscall
FSetStructInnerObjectMemberTest::GetTestFlags(FSetStructInnerObjectMemberTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 144472be0

bool __thiscall FSetStructInnerObjectMemberTest::IsStressTest(FSetStructInnerObjectMemberTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 144472bf0

uint __thiscall
FSetStructInnerObjectMemberTest::GetRequiredDeviceNum(FSetStructInnerObjectMemberTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 144472c00

FString * __thiscall
FSetStructInnerObjectMemberTest::GetTestSourceFileName
          (FSetStructInnerObjectMemberTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Private\\Tests\\PropertyPathHelpersTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 144472c30

int __thiscall
FSetStructInnerObjectMemberTest::GetTestSourceFileLine(FSetStructInnerObjectMemberTest *this)

{
  return 0x1a9;
}

// GetTests @ 144472c40

/* WARNING: Removing unreachable block (ram,0x000144472d2d) */
/* WARNING: Removing unreachable block (ram,0x000144472df8) */

void __thiscall
FSetStructInnerObjectMemberTest::GetTests
          (FSetStructInnerObjectMemberTest *this,
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
  
  ::FString::FString(&local_18,"System.PropertyPath.SetStructInnerObjectMemberTest");
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

// RunTest @ 144472e20

bool __thiscall
FSetStructInnerObjectMemberTest::RunTest(FSetStructInnerObjectMemberTest *this,FString *param_1)

{
  code *pcVar1;
  TObjectPtr<UPropertyPathTestObject>_u_0 TVar2;
  TObjectPtr<UPropertyPathTestObject>_u_0 TVar3;
  bool bVar4;
  FPropertyPathTestStruct *pFVar5;
  FString *pFVar6;
  byte bVar7;
  byte bVar8;
  FString local_228;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_218;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_210;
  FPropertyPathTestStruct local_208;
  FPropertyPathTestStruct local_1a8;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_148;
  UPropertyPathTestObject *local_140;
  FPropertyPathTestStruct local_138;
  FPropertyPathTestStruct local_d8;
  FPropertyPathTestStruct local_78;
  
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_218.ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_148.ObjectPtr);
  TVar2 = local_148;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_140 != (UPropertyPathTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  TVar3 = local_148;
  ((TVar2.DebugPtr)->Struct).InnerObject.field0_0x0.DebugPtr = local_140;
  pFVar5 = FPropertyPathTestStruct::FPropertyPathTestStruct(&local_78,&(local_148.DebugPtr)->Struct)
  ;
  (TVar3.DebugPtr)->bSetterCalled = true;
  FPropertyPathTestStruct::operator=(&(TVar3.DebugPtr)->Struct,pFVar5);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(pFVar5);
  pFVar6 = ::FString::FString(&local_228,"Struct.InnerObject");
  PropertyPathHelpers::SetPropertyValue<TObjectPtr<UPropertyPathTestObject>_>
            ((UObject *)local_218.DebugPtr,pFVar6,
             (TObjectPtr<UPropertyPathTestObject> *)&local_210.ObjectPtr);
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if (((local_218.DebugPtr)->Struct).InnerObject.field0_0x0.DebugPtr == local_210.DebugPtr) {
    bVar8 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    bVar8 = 0;
  }
  bVar4 = UPropertyPathTestObject::operator==(local_218.DebugPtr,local_148.DebugPtr);
  if (bVar4) {
    bVar7 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  bVar8 = bVar8 & bVar7;
  if ((local_218.DebugPtr)->bSetterCalled != true) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    bVar8 = 0;
  }
  if ((local_218.DebugPtr)->bGetterCalled == true) {
    bVar7 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  bVar8 = bVar8 & bVar7;
  (local_218.DebugPtr)->bSetterCalled = false;
  (local_218.DebugPtr)->bGetterCalled = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_d8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_138);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1a8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_208);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_218.ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_148.ObjectPtr);
  TVar2 = local_148;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_140 != (UPropertyPathTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  TVar3 = local_148;
  ((TVar2.DebugPtr)->StructRef).InnerObject.field0_0x0.DebugPtr = local_140;
  pFVar5 = FPropertyPathTestStruct::FPropertyPathTestStruct
                     (&local_78,&(local_148.DebugPtr)->StructRef);
  (TVar3.DebugPtr)->bSetterCalled = true;
  FPropertyPathTestStruct::operator=(&(TVar3.DebugPtr)->StructRef,pFVar5);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(pFVar5);
  pFVar6 = ::FString::FString(&local_228,"StructRef.InnerObject");
  PropertyPathHelpers::SetPropertyValue<TObjectPtr<UPropertyPathTestObject>_>
            ((UObject *)local_218.DebugPtr,pFVar6,
             (TObjectPtr<UPropertyPathTestObject> *)&local_210.ObjectPtr);
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if (((local_218.DebugPtr)->StructRef).InnerObject.field0_0x0.DebugPtr != local_210.DebugPtr) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    bVar8 = 0;
  }
  bVar4 = UPropertyPathTestObject::operator==(local_218.DebugPtr,local_148.DebugPtr);
  if (bVar4) {
    bVar7 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  bVar7 = bVar7 & bVar8;
  if ((local_218.DebugPtr)->bSetterCalled != true) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  if ((local_218.DebugPtr)->bGetterCalled == true) {
    bVar8 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    bVar8 = 0;
  }
  (local_218.DebugPtr)->bSetterCalled = false;
  (local_218.DebugPtr)->bGetterCalled = false;
  bVar8 = bVar8 & bVar7;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_d8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_138);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1a8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_208);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_218.ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_148.ObjectPtr);
  TVar2 = local_148;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_140 != (UPropertyPathTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  TVar3 = local_148;
  ((TVar2.DebugPtr)->StructConstRef).InnerObject.field0_0x0.DebugPtr = local_140;
  pFVar5 = FPropertyPathTestStruct::FPropertyPathTestStruct
                     (&local_78,&(local_148.DebugPtr)->StructConstRef);
  (TVar3.DebugPtr)->bSetterCalled = true;
  FPropertyPathTestStruct::operator=(&(TVar3.DebugPtr)->StructConstRef,pFVar5);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(pFVar5);
  pFVar6 = ::FString::FString(&local_228,"StructConstRef.InnerObject");
  PropertyPathHelpers::SetPropertyValue<TObjectPtr<UPropertyPathTestObject>_>
            ((UObject *)local_218.DebugPtr,pFVar6,
             (TObjectPtr<UPropertyPathTestObject> *)&local_210.ObjectPtr);
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if (((local_218.DebugPtr)->StructConstRef).InnerObject.field0_0x0.DebugPtr != local_210.DebugPtr)
  {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    bVar8 = 0;
  }
  bVar4 = UPropertyPathTestObject::operator==(local_218.DebugPtr,local_148.DebugPtr);
  if (bVar4) {
    bVar7 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  bVar7 = bVar7 & bVar8;
  if ((local_218.DebugPtr)->bSetterCalled != true) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  if ((local_218.DebugPtr)->bGetterCalled == true) {
    bVar8 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    bVar8 = 0;
  }
  *(bool *)((longlong)local_218 + 0x178) = false;
  *(bool *)((longlong)local_218 + 0x179) = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_d8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_138);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1a8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_208);
  return (bool)(bVar8 & bVar7);
}

// GetBeautifiedTestName @ 1444734d0

FString * __thiscall
FSetStructInnerObjectMemberTest::GetBeautifiedTestName
          (FSetStructInnerObjectMemberTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.PropertyPath.SetStructInnerObjectMemberTest");
  return __return_storage_ptr__;
}

