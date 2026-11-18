// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 8

// GetTestFlags @ 144477490

EAutomationTestFlags __thiscall FGetStructTest::GetTestFlags(FGetStructTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1444774a0

bool __thiscall FGetStructTest::IsStressTest(FGetStructTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1444774b0

uint __thiscall FGetStructTest::GetRequiredDeviceNum(FGetStructTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1444774c0

FString * __thiscall
FGetStructTest::GetTestSourceFileName(FGetStructTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Private\\Tests\\PropertyPathHelpersTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1444774f0

int __thiscall FGetStructTest::GetTestSourceFileLine(FGetStructTest *this)

{
  return 0x30f;
}

// GetTests @ 144477500

/* WARNING: Removing unreachable block (ram,0x0001444775ed) */
/* WARNING: Removing unreachable block (ram,0x0001444776b8) */

void __thiscall
FGetStructTest::GetTests
          (FGetStructTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.PropertyPath.GetStructTest");
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

// RunTest @ 1444776e0

bool __thiscall FGetStructTest::RunTest(FGetStructTest *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  byte bVar4;
  byte bVar5;
  FString local_218;
  FPropertyPathTestStruct local_208;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_1a8 [2];
  FPropertyPathTestStruct local_198;
  FPropertyPathTestStruct local_138;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_d8 [2];
  FPropertyPathTestStruct local_c8;
  FPropertyPathTestStruct local_68;
  
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_d8[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_1a8[0].ObjectPtr);
  (local_1a8[0].DebugPtr)->bGetterCalled = true;
  FPropertyPathTestStruct::FPropertyPathTestStruct(&local_208,&(local_1a8[0].DebugPtr)->Struct);
  local_198.Bool = local_208.Bool;
  local_198.Integer = local_208.Integer;
  local_198.EnumOne.Value = local_208.EnumOne.Value;
  local_198.EnumTwo.Value = local_208.EnumTwo.Value;
  local_198.EnumThree.Value = local_208.EnumThree.Value;
  local_198.EnumFour.Value = local_208.EnumFour.Value;
  ::FString::operator=(&local_198.String,&local_208.String);
  local_198.InnerStruct.Bool = local_208.InnerStruct.Bool;
  local_198.InnerStruct.EnumOne.Value = local_208.InnerStruct.EnumOne.Value;
  local_198.InnerStruct.EnumTwo.Value = local_208.InnerStruct.EnumTwo.Value;
  local_198.InnerStruct.EnumThree.Value = local_208.InnerStruct.EnumThree.Value;
  local_198.InnerStruct.EnumFour.Value = local_208.InnerStruct.EnumFour.Value;
  local_198.InnerStruct.Integer = local_208.InnerStruct.Integer;
  local_198.Float = local_208.Float;
  local_198.InnerStruct.Float = local_208.InnerStruct.Float;
  ::FString::operator=(&local_198.InnerStruct.String,&local_208.InnerStruct.String);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_208.InnerObject.field0_0x0.DebugPtr != (TObjectPtr<UPropertyPathTestObject>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_208.InnerObject.field0_0x0);
  }
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_208);
  pFVar3 = ::FString::FString(&local_218,"Struct");
  PropertyPathHelpers::GetPropertyValue<FPropertyPathTestStruct>
            ((UObject *)local_d8[0].DebugPtr,pFVar3,&local_c8);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  bVar2 = FPropertyPathTestStruct::operator==(&local_68,&local_c8);
  if (bVar2) {
    bVar5 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  bVar2 = FPropertyPathTestStruct::operator==(&local_198,&local_c8);
  if (bVar2) {
    bVar4 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar4 = 0;
  }
  bVar4 = bVar4 & bVar5;
  if ((local_d8[0].DebugPtr)->bSetterCalled != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar4 = 0;
  }
  if ((local_d8[0].DebugPtr)->bGetterCalled == true) {
    bVar5 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  (local_d8[0].DebugPtr)->bSetterCalled = false;
  (local_d8[0].DebugPtr)->bGetterCalled = false;
  bVar5 = bVar5 & bVar4;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_138);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_198);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_68);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_d8[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_1a8[0].ObjectPtr);
  (local_1a8[0].DebugPtr)->bGetterCalled = true;
  FPropertyPathTestStruct::operator=(&local_198,&(local_1a8[0].DebugPtr)->StructRef);
  pFVar3 = ::FString::FString(&local_218,"StructRef");
  PropertyPathHelpers::GetPropertyValue<FPropertyPathTestStruct>
            ((UObject *)local_d8[0].DebugPtr,pFVar3,&local_c8);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  bVar2 = FPropertyPathTestStruct::operator==(&local_68,&local_c8);
  if (!bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  bVar2 = FPropertyPathTestStruct::operator==(&local_198,&local_c8);
  if (bVar2) {
    bVar4 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar4 = 0;
  }
  bVar4 = bVar4 & bVar5;
  if ((local_d8[0].DebugPtr)->bSetterCalled != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar4 = 0;
  }
  if ((local_d8[0].DebugPtr)->bGetterCalled == true) {
    bVar5 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  (local_d8[0].DebugPtr)->bSetterCalled = false;
  (local_d8[0].DebugPtr)->bGetterCalled = false;
  bVar5 = bVar5 & bVar4;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_138);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_198);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_68);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_d8[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_1a8[0].ObjectPtr);
  (local_1a8[0].DebugPtr)->bGetterCalled = true;
  FPropertyPathTestStruct::operator=(&local_198,&(local_1a8[0].DebugPtr)->StructConstRef);
  pFVar3 = ::FString::FString(&local_218,"StructConstRef");
  PropertyPathHelpers::GetPropertyValue<FPropertyPathTestStruct>
            ((UObject *)local_d8[0].DebugPtr,pFVar3,&local_c8);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  bVar2 = FPropertyPathTestStruct::operator==(&local_68,&local_c8);
  if (!bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  bVar2 = FPropertyPathTestStruct::operator==(&local_198,&local_c8);
  if (bVar2) {
    bVar4 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar4 = 0;
  }
  bVar4 = bVar4 & bVar5;
  if ((local_d8[0].DebugPtr)->bSetterCalled != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar4 = 0;
  }
  if ((local_d8[0].DebugPtr)->bGetterCalled == true) {
    bVar5 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  *(bool *)((longlong)local_d8[0] + 0x178) = false;
  *(bool *)((longlong)local_d8[0] + 0x179) = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_138);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_198);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_68);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  return (bool)(bVar5 & bVar4);
}

// GetBeautifiedTestName @ 144477d80

FString * __thiscall
FGetStructTest::GetBeautifiedTestName(FGetStructTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.PropertyPath.GetStructTest");
  return __return_storage_ptr__;
}

