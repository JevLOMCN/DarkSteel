// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 8

// GetTestFlags @ 144474af0

EAutomationTestFlags __thiscall
FSetStructInnerObjectTest::GetTestFlags(FSetStructInnerObjectTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 144474b00

bool __thiscall FSetStructInnerObjectTest::IsStressTest(FSetStructInnerObjectTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 144474b10

uint __thiscall FSetStructInnerObjectTest::GetRequiredDeviceNum(FSetStructInnerObjectTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 144474b20

FString * __thiscall
FSetStructInnerObjectTest::GetTestSourceFileName
          (FSetStructInnerObjectTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Private\\Tests\\PropertyPathHelpersTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 144474b50

int __thiscall FSetStructInnerObjectTest::GetTestSourceFileLine(FSetStructInnerObjectTest *this)

{
  return 0x24d;
}

// GetTests @ 144474be0

/* WARNING: Removing unreachable block (ram,0x000144474ccd) */
/* WARNING: Removing unreachable block (ram,0x000144474d98) */

void __thiscall
FSetStructInnerObjectTest::GetTests
          (FSetStructInnerObjectTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.PropertyPath.SetStructInnerObjectTest");
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

// RunTest @ 144474dc0

bool __thiscall FSetStructInnerObjectTest::RunTest(FSetStructInnerObjectTest *this,FString *param_1)

{
  UPropertyPathTestObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  FPropertyPathTestStruct *this_00;
  FString *pFVar4;
  byte bVar5;
  byte bVar6;
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
  pUVar1 = ((local_138[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr;
  this_00 = FPropertyPathTestStruct::FPropertyPathTestStruct(&local_68,&local_1f8);
  pUVar1->bSetterCalled = true;
  FPropertyPathTestStruct::operator=(&pUVar1->Struct,this_00);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(this_00);
  pFVar4 = ::FString::FString(&local_218,"InnerObject.Struct");
  PropertyPathHelpers::SetPropertyValue<FPropertyPathTestStruct>
            ((UObject *)local_208[0].DebugPtr,pFVar4,&local_1f8);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  bVar3 = FPropertyPathTestStruct::operator==
                    (&(((local_208[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr)->Struct,
                     &local_1f8);
  if (bVar3) {
    bVar6 = 1;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  bVar3 = UPropertyPathTestObject::operator==(local_208[0].DebugPtr,local_138[0].DebugPtr);
  if (bVar3) {
    bVar5 = 1;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  bVar6 = bVar6 & bVar5;
  if ((((local_208[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr)->bSetterCalled != true) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  if ((((local_208[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr)->bGetterCalled == false) {
    bVar5 = 1;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  bVar5 = bVar5 & bVar6;
  if ((local_208[0].DebugPtr)->bSetterCalled != false) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  if ((local_208[0].DebugPtr)->bGetterCalled == false) {
    bVar6 = 1;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  pUVar1 = ((local_208[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr;
  pUVar1->bSetterCalled = false;
  pUVar1->bGetterCalled = false;
  (local_208[0].DebugPtr)->bSetterCalled = false;
  (local_208[0].DebugPtr)->bGetterCalled = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_128);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_198);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1f8);
  return (bool)(bVar6 & bVar5);
}

// GetBeautifiedTestName @ 1444750e0

FString * __thiscall
FSetStructInnerObjectTest::GetBeautifiedTestName
          (FSetStructInnerObjectTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.PropertyPath.SetStructInnerObjectTest");
  return __return_storage_ptr__;
}

