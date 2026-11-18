// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 8

// GetTestFlags @ 1444722b0

EAutomationTestFlags __thiscall FSetStructMemberTest::GetTestFlags(FSetStructMemberTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1444722c0

bool __thiscall FSetStructMemberTest::IsStressTest(FSetStructMemberTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1444722d0

uint __thiscall FSetStructMemberTest::GetRequiredDeviceNum(FSetStructMemberTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1444722e0

FString * __thiscall
FSetStructMemberTest::GetTestSourceFileName
          (FSetStructMemberTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Private\\Tests\\PropertyPathHelpersTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 144472310

int __thiscall FSetStructMemberTest::GetTestSourceFileLine(FSetStructMemberTest *this)

{
  return 0x16e;
}

// GetTests @ 144472320

/* WARNING: Removing unreachable block (ram,0x00014447240d) */
/* WARNING: Removing unreachable block (ram,0x0001444724d8) */

void __thiscall
FSetStructMemberTest::GetTests
          (FSetStructMemberTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.PropertyPath.SetStructMemberTest");
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

// RunTest @ 144472500

bool __thiscall FSetStructMemberTest::RunTest(FSetStructMemberTest *this,FString *param_1)

{
  code *pcVar1;
  float fVar2;
  TObjectPtr<UPropertyPathTestObject>_u_0 TVar3;
  bool bVar4;
  bool bVar5;
  FPropertyPathTestStruct *pFVar6;
  FString *pFVar7;
  byte bVar8;
  byte bVar9;
  float local_res18 [2];
  FString local_238;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_228 [2];
  FPropertyPathTestStruct local_218;
  FPropertyPathTestStruct local_1b8;
  TObjectPtr<UPropertyPathTestObject>_u_0 local_158 [2];
  FPropertyPathTestStruct local_148;
  FPropertyPathTestStruct local_e8;
  FPropertyPathTestStruct local_88;
  
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_228[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_158[0].ObjectPtr);
  TVar3 = local_158[0];
  ((local_158[0].DebugPtr)->Struct).Float = 1.5;
  pFVar6 = FPropertyPathTestStruct::FPropertyPathTestStruct
                     (&local_88,&(local_158[0].DebugPtr)->Struct);
  (TVar3.DebugPtr)->bSetterCalled = true;
  FPropertyPathTestStruct::operator=(&(TVar3.DebugPtr)->Struct,pFVar6);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(pFVar6);
  local_res18[0] = 1.5;
  pFVar7 = ::FString::FString(&local_238,"Struct.Float");
  PropertyPathHelpers::SetPropertyValue<float>((UObject *)local_228[0].DebugPtr,pFVar7,local_res18);
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  fVar2 = __real_38d1b717;
  bVar4 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Struct Member Set",
                     ((local_228[0].DebugPtr)->Struct).Float,__real_3fc00000,__real_38d1b717);
  bVar5 = UPropertyPathTestObject::operator==(local_228[0].DebugPtr,local_158[0].DebugPtr);
  if (!bVar5) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_238,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_238,0);
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    bVar4 = false;
  }
  if ((local_228[0].DebugPtr)->bSetterCalled == true) {
    bVar8 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_238,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_238,0);
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    bVar8 = 0;
  }
  bVar8 = bVar8 & bVar4;
  if ((local_228[0].DebugPtr)->bGetterCalled != true) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_238,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_238,0);
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    bVar8 = 0;
  }
  (local_228[0].DebugPtr)->bSetterCalled = false;
  (local_228[0].DebugPtr)->bGetterCalled = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_e8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_148);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1b8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_218);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_228[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_158[0].ObjectPtr);
  TVar3 = local_158[0];
  ((local_158[0].DebugPtr)->StructRef).Float = 1.5;
  pFVar6 = FPropertyPathTestStruct::FPropertyPathTestStruct
                     (&local_88,&(local_158[0].DebugPtr)->StructRef);
  (TVar3.DebugPtr)->bSetterCalled = true;
  FPropertyPathTestStruct::operator=(&(TVar3.DebugPtr)->StructRef,pFVar6);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(pFVar6);
  local_res18[0] = 1.5;
  pFVar7 = ::FString::FString(&local_238,"StructRef.Float");
  PropertyPathHelpers::SetPropertyValue<float>((UObject *)local_228[0].DebugPtr,pFVar7,local_res18);
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  bVar4 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Struct Ref Member Set",
                     ((local_228[0].DebugPtr)->StructRef).Float,__real_3fc00000,fVar2);
  bVar8 = bVar4 & bVar8;
  bVar4 = UPropertyPathTestObject::operator==(local_228[0].DebugPtr,local_158[0].DebugPtr);
  if (!bVar4) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_238,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_238,0);
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    bVar8 = 0;
  }
  if ((local_228[0].DebugPtr)->bSetterCalled == true) {
    bVar9 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_238,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_238,0);
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    bVar9 = 0;
  }
  bVar9 = bVar9 & bVar8;
  if ((local_228[0].DebugPtr)->bGetterCalled != true) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_238,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_238,0);
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    bVar9 = 0;
  }
  (local_228[0].DebugPtr)->bSetterCalled = false;
  (local_228[0].DebugPtr)->bGetterCalled = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_e8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_148);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1b8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_218);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_228[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_158[0].ObjectPtr);
  TVar3 = local_158[0];
  ((local_158[0].DebugPtr)->StructConstRef).Float = 1.5;
  pFVar6 = FPropertyPathTestStruct::FPropertyPathTestStruct
                     (&local_88,&(local_158[0].DebugPtr)->StructConstRef);
  (TVar3.DebugPtr)->bSetterCalled = true;
  FPropertyPathTestStruct::operator=(&(TVar3.DebugPtr)->StructConstRef,pFVar6);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(pFVar6);
  local_res18[0] = 1.5;
  pFVar7 = ::FString::FString(&local_238,"StructConstRef.Float");
  PropertyPathHelpers::SetPropertyValue<float>((UObject *)local_228[0].DebugPtr,pFVar7,local_res18);
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  bVar4 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Struct Const Ref Member Set",
                     ((local_228[0].DebugPtr)->StructConstRef).Float,__real_3fc00000,fVar2);
  bVar9 = bVar4 & bVar9;
  bVar4 = UPropertyPathTestObject::operator==(local_228[0].DebugPtr,local_158[0].DebugPtr);
  if (!bVar4) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_238,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_238,0);
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    bVar9 = 0;
  }
  if ((local_228[0].DebugPtr)->bSetterCalled == true) {
    bVar8 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_238,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_238,0);
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    bVar8 = 0;
  }
  bVar4 = (bool)(bVar8 & bVar9);
  if ((local_228[0].DebugPtr)->bGetterCalled != true) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_238,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_238,0);
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    bVar4 = false;
  }
  *(bool *)((longlong)local_228[0] + 0x178) = false;
  *(bool *)((longlong)local_228[0] + 0x179) = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_e8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_148);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1b8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_218);
  return bVar4;
}

// GetBeautifiedTestName @ 144472b20

FString * __thiscall
FSetStructMemberTest::GetBeautifiedTestName
          (FSetStructMemberTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.PropertyPath.SetStructMemberTest");
  return __return_storage_ptr__;
}

