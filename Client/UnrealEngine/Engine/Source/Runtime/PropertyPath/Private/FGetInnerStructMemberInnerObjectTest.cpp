// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 8

// GetTestFlags @ 14447b530

EAutomationTestFlags __thiscall
FGetInnerStructMemberInnerObjectTest::GetTestFlags(FGetInnerStructMemberInnerObjectTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14447b540

bool __thiscall
FGetInnerStructMemberInnerObjectTest::IsStressTest(FGetInnerStructMemberInnerObjectTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14447b550

uint __thiscall
FGetInnerStructMemberInnerObjectTest::GetRequiredDeviceNum
          (FGetInnerStructMemberInnerObjectTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14447b560

FString * __thiscall
FGetInnerStructMemberInnerObjectTest::GetTestSourceFileName
          (FGetInnerStructMemberInnerObjectTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Private\\Tests\\PropertyPathHelpersTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14447b590

int __thiscall
FGetInnerStructMemberInnerObjectTest::GetTestSourceFileLine
          (FGetInnerStructMemberInnerObjectTest *this)

{
  return 1099;
}

// GetTests @ 14447b5a0

/* WARNING: Removing unreachable block (ram,0x00014447b68d) */
/* WARNING: Removing unreachable block (ram,0x00014447b758) */

void __thiscall
FGetInnerStructMemberInnerObjectTest::GetTests
          (FGetInnerStructMemberInnerObjectTest *this,
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
  
  ::FString::FString(&local_18,"System.PropertyPath.GetInnerStructMemberInnerObjectTest");
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

// RunTest @ 14447b780

bool __thiscall
FGetInnerStructMemberInnerObjectTest::RunTest
          (FGetInnerStructMemberInnerObjectTest *this,FString *param_1)

{
  UPropertyPathTestObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FString *pFVar5;
  byte bVar6;
  byte bVar7;
  FString local_218;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_208 [2];
  FPropertyPathTestStruct local_1f8;
  FPropertyPathTestStruct local_198;
  FPropertyPathTestStruct local_138;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_d8 [2];
  FPropertyPathTestStruct local_c8;
  FPropertyPathTestStruct local_68;
  
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_208[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_d8[0].ObjectPtr);
  pUVar1 = ((local_d8[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr;
  pUVar1->bGetterCalled = true;
  FPropertyPathTestStruct::FPropertyPathTestStruct(&local_138,&pUVar1->Struct);
  local_c8.Float = local_138.InnerStruct.Float;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_138);
  pFVar5 = ::FString::FString(&local_218,"InnerObject.Struct.InnerStruct.Float");
  PropertyPathHelpers::GetPropertyValue<float>
            ((UObject *)local_208[0].DebugPtr,pFVar5,&local_1f8.Float);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  bVar3 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Inner Object Inner Struct Member Get",
                     local_198.InnerStruct.Float,local_1f8.Float,__real_38d1b717);
  bVar4 = FPropertyPathTestStruct::operator==(&local_c8,&local_1f8);
  if (!bVar4) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  if ((((local_208[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr)->bSetterCalled == false) {
    bVar7 = 1;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  bVar7 = bVar7 & bVar3;
  if ((((local_208[0].DebugPtr)->InnerObject).field0_0x0.DebugPtr)->bGetterCalled != true) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar7 = 0;
  }
  if ((local_208[0].DebugPtr)->bSetterCalled == false) {
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
  bVar3 = (bool)(bVar6 & bVar7);
  if ((local_208[0].DebugPtr)->bGetterCalled != false) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  *(bool *)((longlong)local_208[0] + 0x178) = false;
  *(bool *)((longlong)local_208[0] + 0x179) = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_68);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_198);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1f8);
  return bVar3;
}

// GetBeautifiedTestName @ 14447ba50

FString * __thiscall
FGetInnerStructMemberInnerObjectTest::GetBeautifiedTestName
          (FGetInnerStructMemberInnerObjectTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.PropertyPath.GetInnerStructMemberInnerObjectTest");
  return __return_storage_ptr__;
}

