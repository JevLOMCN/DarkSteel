// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 8

// GetTestFlags @ 144477df0

EAutomationTestFlags __thiscall FGetInnerObjectTest::GetTestFlags(FGetInnerObjectTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 144477e00

bool __thiscall FGetInnerObjectTest::IsStressTest(FGetInnerObjectTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 144477e10

uint __thiscall FGetInnerObjectTest::GetRequiredDeviceNum(FGetInnerObjectTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 144477e20

FString * __thiscall
FGetInnerObjectTest::GetTestSourceFileName
          (FGetInnerObjectTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Private\\Tests\\PropertyPathHelpersTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 144477e50

int __thiscall FGetInnerObjectTest::GetTestSourceFileLine(FGetInnerObjectTest *this)

{
  return 0x33e;
}

// GetTests @ 144477e60

/* WARNING: Removing unreachable block (ram,0x000144477f4d) */
/* WARNING: Removing unreachable block (ram,0x000144478018) */

void __thiscall
FGetInnerObjectTest::GetTests
          (FGetInnerObjectTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.PropertyPath.GetInnerObjectTest");
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

// RunTest @ 144478040

bool __thiscall FGetInnerObjectTest::RunTest(FGetInnerObjectTest *this,FString *param_1)

{
  UPropertyPathTestObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  byte bVar5;
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
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = ((local_d8.DebugPtr)->InnerObject).field0_0x0.DebugPtr,
     pUVar1 != (UPropertyPathTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_d0 = ((local_d8.DebugPtr)->InnerObject).field0_0x0.DebugPtr;
  pFVar4 = ::FString::FString(&local_1b8,"InnerObject");
  PropertyPathHelpers::GetPropertyValue<TObjectPtr<UPropertyPathTestObject>_>
            ((UObject *)local_1a8.DebugPtr,pFVar4,
             (TObjectPtr<UPropertyPathTestObject> *)&local_1a0.ObjectPtr);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if (((local_1a8.DebugPtr)->InnerObject).field0_0x0.DebugPtr == local_1a0.DebugPtr) {
    bVar6 = 1;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1b8,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  bVar3 = UPropertyPathTestObject::operator==(local_d0,local_1a0.DebugPtr);
  if (bVar3) {
    bVar5 = 1;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1b8,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  bVar5 = bVar5 & bVar6;
  if ((local_1a8.DebugPtr)->bSetterCalled != false) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1b8,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  if ((local_1a8.DebugPtr)->bGetterCalled == false) {
    bVar6 = 1;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1b8,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  *(bool *)((longlong)local_1a8 + 0x178) = false;
  *(bool *)((longlong)local_1a8 + 0x179) = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_68);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_138);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_198);
  return (bool)(bVar6 & bVar5);
}

// GetBeautifiedTestName @ 144478280

FString * __thiscall
FGetInnerObjectTest::GetBeautifiedTestName
          (FGetInnerObjectTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.PropertyPath.GetInnerObjectTest");
  return __return_storage_ptr__;
}

