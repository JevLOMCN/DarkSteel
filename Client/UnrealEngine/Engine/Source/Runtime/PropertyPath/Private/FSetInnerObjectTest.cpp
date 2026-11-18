// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 8

// GetTestFlags @ 1444713b0

EAutomationTestFlags __thiscall FSetInnerObjectTest::GetTestFlags(FSetInnerObjectTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1444713c0

bool __thiscall FSetInnerObjectTest::IsStressTest(FSetInnerObjectTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1444713d0

uint __thiscall FSetInnerObjectTest::GetRequiredDeviceNum(FSetInnerObjectTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1444713e0

FString * __thiscall
FSetInnerObjectTest::GetTestSourceFileName
          (FSetInnerObjectTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Private\\Tests\\PropertyPathHelpersTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 144471410

int __thiscall FSetInnerObjectTest::GetTestSourceFileLine(FSetInnerObjectTest *this)

{
  return 0x127;
}

// GetTests @ 144471420

/* WARNING: Removing unreachable block (ram,0x00014447150d) */
/* WARNING: Removing unreachable block (ram,0x0001444715d8) */

void __thiscall
FSetInnerObjectTest::GetTests
          (FSetInnerObjectTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.PropertyPath.SetInnerObjectTest");
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

// RunTest @ 144471600

bool __thiscall FSetInnerObjectTest::RunTest(FSetInnerObjectTest *this,FString *param_1)

{
  code *pcVar1;
  TObjectPtr<UPropertyPathTestObject>_u_0 TVar2;
  bool bVar3;
  byte bVar4;
  FString *pFVar5;
  byte bVar6;
  FString local_1b8;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_1a8;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_1a0;
  FPropertyPathTestStruct local_198;
  FPropertyPathTestStruct local_138;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_d8;
  UPropertyPathTestObject *local_d0;
  FPropertyPathTestStruct local_c8;
  FPropertyPathTestStruct local_68;
  
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_1a8.ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_d8.ObjectPtr);
  TVar2 = local_d8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_d0 != (UPropertyPathTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_d0);
  }
  ((TVar2.DebugPtr)->InnerObject).field0_0x0.DebugPtr = local_d0;
  pFVar5 = ::FString::FString(&local_1b8,"InnerObject");
  PropertyPathHelpers::SetPropertyValue<TObjectPtr<UPropertyPathTestObject>_>
            ((UObject *)local_1a8.DebugPtr,pFVar5,
             (TObjectPtr<UPropertyPathTestObject> *)&local_1a0.ObjectPtr);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if (((local_1a8.DebugPtr)->InnerObject).field0_0x0.DebugPtr == local_1a0.DebugPtr) {
    bVar6 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1b8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  bVar3 = UPropertyPathTestObject::operator==(local_1a8.DebugPtr,local_d8.DebugPtr);
  if (bVar3) {
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
  bVar6 = bVar6 & bVar4;
  if ((local_1a8.DebugPtr)->bSetterCalled != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1b8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  if ((local_1a8.DebugPtr)->bGetterCalled == false) {
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
  *(bool *)((longlong)local_1a8 + 0x178) = false;
  *(bool *)((longlong)local_1a8 + 0x179) = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_68);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_138);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_198);
  return (bool)(bVar4 & bVar6);
}

// GetBeautifiedTestName @ 144471830

FString * __thiscall
FSetInnerObjectTest::GetBeautifiedTestName
          (FSetInnerObjectTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.PropertyPath.SetInnerObjectTest");
  return __return_storage_ptr__;
}

