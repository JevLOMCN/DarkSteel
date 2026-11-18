// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 8

// GetTestFlags @ 14447a3a0

EAutomationTestFlags __thiscall
FGetStringInnerObjectTest::GetTestFlags(FGetStringInnerObjectTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14447a3b0

bool __thiscall FGetStringInnerObjectTest::IsStressTest(FGetStringInnerObjectTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14447a3c0

uint __thiscall FGetStringInnerObjectTest::GetRequiredDeviceNum(FGetStringInnerObjectTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14447a3d0

FString * __thiscall
FGetStringInnerObjectTest::GetTestSourceFileName
          (FGetStringInnerObjectTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Private\\Tests\\PropertyPathHelpersTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14447a400

int __thiscall FGetStringInnerObjectTest::GetTestSourceFileLine(FGetStringInnerObjectTest *this)

{
  return 0x405;
}

// GetTests @ 14447a410

/* WARNING: Removing unreachable block (ram,0x00014447a4fd) */
/* WARNING: Removing unreachable block (ram,0x00014447a5c8) */

void __thiscall
FGetStringInnerObjectTest::GetTests
          (FGetStringInnerObjectTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.PropertyPath.GetStringInnerObjectTest");
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

// RunTest @ 14447a5f0

bool __thiscall FGetStringInnerObjectTest::RunTest(FGetStringInnerObjectTest *this,FString *param_1)

{
  int iVar1;
  UPropertyPathTestObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FString *pFVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  FString local_1b8;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_1a8 [2];
  FPropertyPathTestStruct local_198;
  FPropertyPathTestStruct local_138;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_d8 [2];
  FPropertyPathTestStruct local_c8;
  FPropertyPathTestStruct local_68;
  
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_1a8[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_d8[0].ObjectPtr);
  pUVar2 = ((local_d8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr;
  iVar1 = (pUVar2->String).Data.ArrayNum;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  ::FString::AssignRange
            (&local_c8.String,(wchar_t *)(pUVar2->String).Data.AllocatorInstance.Data,iVar9);
  pFVar6 = ::FString::FString(&local_1b8,"InnerObject.String");
  PropertyPathHelpers::GetPropertyValue<FString>
            ((UObject *)local_1a8[0].DebugPtr,pFVar6,&local_198.String);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_198.String.Data.ArrayNum != 0) {
    FVar11.Data = local_198.String.Data.AllocatorInstance.Data;
  }
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_138.String.Data.ArrayNum != 0) {
    FVar10.Data = local_138.String.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Inner Object String Get",(wchar_t *)FVar10.Data,
                     (wchar_t *)FVar11.Data);
  bVar5 = FPropertyPathTestStruct::operator==(&local_c8,&local_198);
  if (!bVar5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1b8,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    bVar4 = false;
  }
  if ((((local_1a8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr)->bSetterCalled == false) {
    bVar8 = 1;
  }
  else {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1b8,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    bVar8 = 0;
  }
  bVar8 = bVar8 & bVar4;
  if ((((local_1a8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr)->bGetterCalled != false) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1b8,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    bVar8 = 0;
  }
  if ((local_1a8[0].DebugPtr)->bSetterCalled == false) {
    bVar7 = 1;
  }
  else {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1b8,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  bVar4 = (bool)(bVar7 & bVar8);
  if ((local_1a8[0].DebugPtr)->bGetterCalled != false) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1b8,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    bVar4 = false;
  }
  pUVar2 = ((local_1a8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr;
  pUVar2->bSetterCalled = false;
  pUVar2->bGetterCalled = false;
  (local_1a8[0].DebugPtr)->bSetterCalled = false;
  (local_1a8[0].DebugPtr)->bGetterCalled = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_68);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_138);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_198);
  return bVar4;
}

// GetBeautifiedTestName @ 14447a8c0

FString * __thiscall
FGetStringInnerObjectTest::GetBeautifiedTestName
          (FGetStringInnerObjectTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.PropertyPath.GetStringInnerObjectTest");
  return __return_storage_ptr__;
}

