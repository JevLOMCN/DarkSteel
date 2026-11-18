// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 8

// GetTestFlags @ 144479440

EAutomationTestFlags __thiscall
FGetInnerStructMemberTest::GetTestFlags(FGetInnerStructMemberTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 144479450

bool __thiscall FGetInnerStructMemberTest::IsStressTest(FGetInnerStructMemberTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 144479460

uint __thiscall FGetInnerStructMemberTest::GetRequiredDeviceNum(FGetInnerStructMemberTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 144479470

FString * __thiscall
FGetInnerStructMemberTest::GetTestSourceFileName
          (FGetInnerStructMemberTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Private\\Tests\\PropertyPathHelpersTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1444794a0

int __thiscall FGetInnerStructMemberTest::GetTestSourceFileLine(FGetInnerStructMemberTest *this)

{
  return 0x3b7;
}

// GetTests @ 1444794b0

/* WARNING: Removing unreachable block (ram,0x00014447959d) */
/* WARNING: Removing unreachable block (ram,0x000144479668) */

void __thiscall
FGetInnerStructMemberTest::GetTests
          (FGetInnerStructMemberTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.PropertyPath.GetInnerStructMemberTest");
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

// RunTest @ 144479690

bool __thiscall FGetInnerStructMemberTest::RunTest(FGetInnerStructMemberTest *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  FString *pFVar4;
  byte bVar5;
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
  (local_d8[0].DebugPtr)->bGetterCalled = true;
  FPropertyPathTestStruct::FPropertyPathTestStruct(&local_138,&(local_d8[0].DebugPtr)->Struct);
  local_c8.Float = local_138.InnerStruct.Float;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_138);
  pFVar4 = ::FString::FString(&local_218,"Struct.InnerStruct.Float");
  PropertyPathHelpers::GetPropertyValue<float>
            ((UObject *)local_208[0].DebugPtr,pFVar4,&local_1f8.Float);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  bVar2 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Inner Struct Member Get",
                     local_198.InnerStruct.Float,local_1f8.Float,__real_38d1b717);
  bVar3 = FPropertyPathTestStruct::operator==(&local_c8,&local_1f8);
  if (!bVar3) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  if ((local_208[0].DebugPtr)->bSetterCalled == false) {
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
  bVar2 = (bool)(bVar2 & bVar5);
  if ((local_208[0].DebugPtr)->bGetterCalled != true) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  *(bool *)((longlong)local_208[0] + 0x178) = false;
  *(bool *)((longlong)local_208[0] + 0x179) = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_68);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_198);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1f8);
  return bVar2;
}

// GetBeautifiedTestName @ 1444798b0

FString * __thiscall
FGetInnerStructMemberTest::GetBeautifiedTestName
          (FGetInnerStructMemberTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.PropertyPath.GetInnerStructMemberTest");
  return __return_storage_ptr__;
}

