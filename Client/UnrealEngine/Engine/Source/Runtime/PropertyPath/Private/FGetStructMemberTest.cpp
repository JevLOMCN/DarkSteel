// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 8

// GetTestFlags @ 1444782f0

EAutomationTestFlags __thiscall FGetStructMemberTest::GetTestFlags(FGetStructMemberTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 144478300

bool __thiscall FGetStructMemberTest::IsStressTest(FGetStructMemberTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 144478310

uint __thiscall FGetStructMemberTest::GetRequiredDeviceNum(FGetStructMemberTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 144478320

FString * __thiscall
FGetStructMemberTest::GetTestSourceFileName
          (FGetStructMemberTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Private\\Tests\\PropertyPathHelpersTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 144478350

int __thiscall FGetStructMemberTest::GetTestSourceFileLine(FGetStructMemberTest *this)

{
  return 0x353;
}

// GetTests @ 144478360

/* WARNING: Removing unreachable block (ram,0x00014447844d) */
/* WARNING: Removing unreachable block (ram,0x000144478518) */

void __thiscall
FGetStructMemberTest::GetTests
          (FGetStructMemberTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.PropertyPath.GetStructMemberTest");
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

// RunTest @ 144478540

bool __thiscall FGetStructMemberTest::RunTest(FGetStructMemberTest *this,FString *param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  FString *pFVar5;
  byte bVar6;
  byte bVar7;
  FString local_228;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_218 [2];
  FPropertyPathTestStruct local_208;
  FPropertyPathTestStruct local_1a8;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_148 [2];
  FPropertyPathTestStruct local_138;
  FPropertyPathTestStruct local_d8;
  FPropertyPathTestStruct local_78;
  
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_218[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_148[0].ObjectPtr);
  (local_148[0].DebugPtr)->bGetterCalled = true;
  FPropertyPathTestStruct::FPropertyPathTestStruct(&local_78,&(local_148[0].DebugPtr)->Struct);
  local_138.Float = local_78.Float;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_78);
  pFVar5 = ::FString::FString(&local_228,"Struct.Float");
  PropertyPathHelpers::GetPropertyValue<float>
            ((UObject *)local_218[0].DebugPtr,pFVar5,&local_208.Float);
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  fVar2 = __real_38d1b717;
  bVar3 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Struct Member Get",local_1a8.Float,
                     local_208.Float,__real_38d1b717);
  bVar4 = FPropertyPathTestStruct::operator==(&local_138,&local_208);
  if (!bVar4) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  if ((local_218[0].DebugPtr)->bSetterCalled == false) {
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
  bVar7 = bVar3 & bVar7;
  if ((local_218[0].DebugPtr)->bGetterCalled != true) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  (local_218[0].DebugPtr)->bSetterCalled = false;
  (local_218[0].DebugPtr)->bGetterCalled = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_d8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_138);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1a8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_208);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_218[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_148[0].ObjectPtr);
  (local_148[0].DebugPtr)->bGetterCalled = true;
  local_138.Float = ((local_148[0].DebugPtr)->StructRef).Float;
  pFVar5 = ::FString::FString(&local_228,"StructRef.Float");
  PropertyPathHelpers::GetPropertyValue<float>
            ((UObject *)local_218[0].DebugPtr,pFVar5,&local_208.Float);
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  bVar3 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Struct Ref Member Get",local_1a8.Float,
                     local_208.Float,fVar2);
  bVar7 = bVar3 & bVar7;
  bVar3 = FPropertyPathTestStruct::operator==(&local_138,&local_208);
  if (!bVar3) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  if ((local_218[0].DebugPtr)->bSetterCalled == false) {
    bVar6 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  bVar6 = bVar6 & bVar7;
  if ((local_218[0].DebugPtr)->bGetterCalled != true) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  (local_218[0].DebugPtr)->bSetterCalled = false;
  (local_218[0].DebugPtr)->bGetterCalled = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_d8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_138);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1a8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_208);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_218[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_148[0].ObjectPtr);
  (local_148[0].DebugPtr)->bGetterCalled = true;
  local_138.Float = ((local_148[0].DebugPtr)->StructConstRef).Float;
  pFVar5 = ::FString::FString(&local_228,"StructConstRef.Float");
  PropertyPathHelpers::GetPropertyValue<float>
            ((UObject *)local_218[0].DebugPtr,pFVar5,&local_208.Float);
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  bVar3 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Struct Const Ref Member Get",local_1a8.Float,
                     local_208.Float,fVar2);
  bVar6 = bVar3 & bVar6;
  bVar3 = FPropertyPathTestStruct::operator==(&local_138,&local_208);
  if (!bVar3) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  if ((local_218[0].DebugPtr)->bSetterCalled == false) {
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
  bVar3 = (bool)(bVar7 & bVar6);
  if ((local_218[0].DebugPtr)->bGetterCalled != true) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  *(bool *)((longlong)local_218[0] + 0x178) = false;
  *(bool *)((longlong)local_218[0] + 0x179) = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_d8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_138);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1a8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_208);
  return bVar3;
}

// GetBeautifiedTestName @ 144478ab0

FString * __thiscall
FGetStructMemberTest::GetBeautifiedTestName
          (FGetStructMemberTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.PropertyPath.GetStructMemberTest");
  return __return_storage_ptr__;
}

