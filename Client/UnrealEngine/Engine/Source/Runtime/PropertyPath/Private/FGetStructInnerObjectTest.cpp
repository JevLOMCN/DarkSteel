// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 8

// GetTestFlags @ 14447a930

EAutomationTestFlags __thiscall
FGetStructInnerObjectTest::GetTestFlags(FGetStructInnerObjectTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14447a940

bool __thiscall FGetStructInnerObjectTest::IsStressTest(FGetStructInnerObjectTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14447a950

uint __thiscall FGetStructInnerObjectTest::GetRequiredDeviceNum(FGetStructInnerObjectTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14447a960

FString * __thiscall
FGetStructInnerObjectTest::GetTestSourceFileName
          (FGetStructInnerObjectTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Private\\Tests\\PropertyPathHelpersTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14447a990

int __thiscall FGetStructInnerObjectTest::GetTestSourceFileLine(FGetStructInnerObjectTest *this)

{
  return 0x41d;
}

// GetTests @ 14447a9a0

/* WARNING: Removing unreachable block (ram,0x00014447aa8d) */
/* WARNING: Removing unreachable block (ram,0x00014447ab58) */

void __thiscall
FGetStructInnerObjectTest::GetTests
          (FGetStructInnerObjectTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.PropertyPath.GetStructInnerObjectTest");
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

// RunTest @ 14447ab80

bool __thiscall FGetStructInnerObjectTest::RunTest(FGetStructInnerObjectTest *this,FString *param_1)

{
  UPropertyPathTestObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  byte bVar5;
  byte bVar6;
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
  pUVar1 = ((local_1a8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr;
  pUVar1->bGetterCalled = true;
  FPropertyPathTestStruct::FPropertyPathTestStruct(&local_208,&pUVar1->Struct);
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
  pFVar4 = ::FString::FString(&local_218,"InnerObject.Struct");
  PropertyPathHelpers::GetPropertyValue<FPropertyPathTestStruct>
            ((UObject *)local_d8[0].DebugPtr,pFVar4,&local_c8);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  bVar3 = FPropertyPathTestStruct::operator==(&local_68,&local_c8);
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
  bVar3 = FPropertyPathTestStruct::operator==(&local_198,&local_c8);
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
  bVar5 = bVar5 & bVar6;
  if ((((local_d8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr)->bSetterCalled != false) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar5 = 0;
  }
  if ((((local_d8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr)->bGetterCalled == true) {
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
  bVar6 = bVar6 & bVar5;
  if ((local_d8[0].DebugPtr)->bSetterCalled != false) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar6 = 0;
  }
  if ((local_d8[0].DebugPtr)->bGetterCalled == false) {
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
  pUVar1 = ((local_d8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr;
  pUVar1->bSetterCalled = false;
  pUVar1->bGetterCalled = false;
  (local_d8[0].DebugPtr)->bSetterCalled = false;
  (local_d8[0].DebugPtr)->bGetterCalled = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_138);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_198);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_68);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  return (bool)(bVar5 & bVar6);
}

// GetBeautifiedTestName @ 14447af30

FString * __thiscall
FGetStructInnerObjectTest::GetBeautifiedTestName
          (FGetStructInnerObjectTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.PropertyPath.GetStructInnerObjectTest");
  return __return_storage_ptr__;
}

