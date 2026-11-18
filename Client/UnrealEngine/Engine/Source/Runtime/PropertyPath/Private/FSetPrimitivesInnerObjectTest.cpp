// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 8

// GetTestFlags @ 144473a30

EAutomationTestFlags __thiscall
FSetPrimitivesInnerObjectTest::GetTestFlags(FSetPrimitivesInnerObjectTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 144473a40

bool __thiscall FSetPrimitivesInnerObjectTest::IsStressTest(FSetPrimitivesInnerObjectTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 144473a50

uint __thiscall
FSetPrimitivesInnerObjectTest::GetRequiredDeviceNum(FSetPrimitivesInnerObjectTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 144473a60

FString * __thiscall
FSetPrimitivesInnerObjectTest::GetTestSourceFileName
          (FSetPrimitivesInnerObjectTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Private\\Tests\\PropertyPathHelpersTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 144473a90

int __thiscall
FSetPrimitivesInnerObjectTest::GetTestSourceFileLine(FSetPrimitivesInnerObjectTest *this)

{
  return 0x1fd;
}

// GetTests @ 144473aa0

/* WARNING: Removing unreachable block (ram,0x000144473b8d) */
/* WARNING: Removing unreachable block (ram,0x000144473c58) */

void __thiscall
FSetPrimitivesInnerObjectTest::GetTests
          (FSetPrimitivesInnerObjectTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.PropertyPath.SetPrimitivesInnerObjectTest");
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

// RunTest @ 144473c80

bool __thiscall
FSetPrimitivesInnerObjectTest::RunTest(FSetPrimitivesInnerObjectTest *this,FString *param_1)

{
  code *pcVar1;
  UPropertyPathTestObject *pUVar2;
  bool bVar3;
  FString *pFVar4;
  byte bVar5;
  byte bVar6;
  float local_res18 [4];
  FString local_1c8;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_1b8 [2];
  FPropertyPathTestStruct local_1a8;
  FPropertyPathTestStruct local_148;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_e8 [2];
  FPropertyPathTestStruct local_d8;
  FPropertyPathTestStruct local_78;
  
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_1b8[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_e8[0].ObjectPtr);
  local_res18[0] = (float)CONCAT31(local_res18[0]._1_3_,1);
  (((local_e8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr)->Bool = true;
  pFVar4 = ::FString::FString(&local_1c8,"InnerObject.Bool");
  PropertyPathHelpers::SetPropertyValue<bool>
            ((UObject *)local_1b8[0].DebugPtr,pFVar4,(bool *)local_res18);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  if ((((local_1b8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr)->Bool == true) {
    bVar5 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  bVar3 = UPropertyPathTestObject::operator==(local_1b8[0].DebugPtr,local_e8[0].DebugPtr);
  if (bVar3) {
    bVar6 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  bVar5 = bVar5 & bVar6;
  if ((((local_1b8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr)->bSetterCalled != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  if ((((local_1b8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr)->bGetterCalled == false) {
    bVar6 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  bVar5 = bVar5 & bVar6;
  if ((local_1b8[0].DebugPtr)->bSetterCalled != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  if ((local_1b8[0].DebugPtr)->bGetterCalled == false) {
    bVar6 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  pUVar2 = ((local_1b8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr;
  pUVar2->bSetterCalled = false;
  pUVar2->bGetterCalled = false;
  (local_1b8[0].DebugPtr)->bSetterCalled = false;
  (local_1b8[0].DebugPtr)->bGetterCalled = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_78);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_d8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_148);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1a8);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_1b8[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_e8[0].ObjectPtr);
  local_res18[0] = 1.4013e-45;
  (((local_e8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr)->Integer = 1;
  pFVar4 = ::FString::FString(&local_1c8,"InnerObject.Integer");
  PropertyPathHelpers::SetPropertyValue<int>
            ((UObject *)local_1b8[0].DebugPtr,pFVar4,(int *)local_res18);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  bVar3 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Primitive Inner Object Integer Set",
                     (((local_1b8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr)->Integer,1);
  bVar5 = bVar3 & bVar6 & bVar5;
  bVar3 = UPropertyPathTestObject::operator==(local_1b8[0].DebugPtr,local_e8[0].DebugPtr);
  if (!bVar3) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  if ((((local_1b8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr)->bSetterCalled == false) {
    bVar6 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  bVar6 = bVar6 & bVar5;
  if ((((local_1b8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr)->bGetterCalled != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  if ((local_1b8[0].DebugPtr)->bSetterCalled == false) {
    bVar5 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  bVar5 = bVar5 & bVar6;
  if ((local_1b8[0].DebugPtr)->bGetterCalled != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  pUVar2 = ((local_1b8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr;
  pUVar2->bSetterCalled = false;
  pUVar2->bGetterCalled = false;
  (local_1b8[0].DebugPtr)->bSetterCalled = false;
  (local_1b8[0].DebugPtr)->bGetterCalled = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_78);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_d8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_148);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1a8);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_1b8[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_e8[0].ObjectPtr);
  local_res18[0] = 1.5;
  pUVar2 = ((local_e8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr;
  pUVar2->bSetterCalled = true;
  pUVar2->Float = 1.5;
  pFVar4 = ::FString::FString(&local_1c8,"InnerObject.Float");
  PropertyPathHelpers::SetPropertyValue<float>((UObject *)local_1b8[0].DebugPtr,pFVar4,local_res18);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  bVar3 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Primitive Inner Object Float Set",
                     (((local_1b8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr)->Float,
                     __real_3fc00000,__real_38d1b717);
  bVar5 = bVar3 & bVar5;
  bVar3 = UPropertyPathTestObject::operator==(local_1b8[0].DebugPtr,local_e8[0].DebugPtr);
  if (!bVar3) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  if ((((local_1b8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr)->bSetterCalled == true) {
    bVar6 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  bVar6 = bVar6 & bVar5;
  if ((((local_1b8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr)->bGetterCalled != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  if ((local_1b8[0].DebugPtr)->bSetterCalled == false) {
    bVar5 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  bVar3 = (bool)(bVar5 & bVar6);
  if ((local_1b8[0].DebugPtr)->bGetterCalled != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  pUVar2 = ((local_1b8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr;
  pUVar2->bSetterCalled = false;
  pUVar2->bGetterCalled = false;
  (local_1b8[0].DebugPtr)->bSetterCalled = false;
  (local_1b8[0].DebugPtr)->bGetterCalled = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_78);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_d8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_148);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1a8);
  return bVar3;
}

// GetBeautifiedTestName @ 144474460

FString * __thiscall
FSetPrimitivesInnerObjectTest::GetBeautifiedTestName
          (FSetPrimitivesInnerObjectTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.PropertyPath.SetPrimitivesInnerObjectTest");
  return __return_storage_ptr__;
}

