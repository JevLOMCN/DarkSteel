// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 8

// GetTestFlags @ 1444718a0

EAutomationTestFlags __thiscall FSetStructDataTest::GetTestFlags(FSetStructDataTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1444718b0

bool __thiscall FSetStructDataTest::IsStressTest(FSetStructDataTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1444718c0

uint __thiscall FSetStructDataTest::GetRequiredDeviceNum(FSetStructDataTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1444718d0

FString * __thiscall
FSetStructDataTest::GetTestSourceFileName(FSetStructDataTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Private\\Tests\\PropertyPathHelpersTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 144471900

int __thiscall FSetStructDataTest::GetTestSourceFileLine(FSetStructDataTest *this)

{
  return 0x13c;
}

// GetTests @ 144471910

/* WARNING: Removing unreachable block (ram,0x0001444719fd) */
/* WARNING: Removing unreachable block (ram,0x000144471ac8) */

void __thiscall
FSetStructDataTest::GetTests
          (FSetStructDataTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.PropertyPath.SetStructDataTest");
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

// RunTest @ 144471af0

bool __thiscall FSetStructDataTest::RunTest(FSetStructDataTest *this,FString *param_1)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  TObjectPtr<UPropertyPathTestObject>_u_0 TVar3;
  bool bVar4;
  FPropertyPathTestStruct *pFVar5;
  UPackage *pUVar6;
  FString *pFVar7;
  byte bVar8;
  byte bVar9;
  FPropertyStructView local_228;
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
  TVar3 = local_138[0];
  pFVar5 = FPropertyPathTestStruct::FPropertyPathTestStruct(&local_68,&local_1f8);
  (TVar3.DebugPtr)->bSetterCalled = true;
  FPropertyPathTestStruct::operator=(&(TVar3.DebugPtr)->Struct,pFVar5);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(pFVar5);
  if (Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_PropertyPath();
    Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathTestStruct,(UObject *)pUVar6,
                         L"PropertyPathTestStruct");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton;
  pFVar7 = ::FString::FString(&local_218,"Struct");
  local_228.Memory = (uchar *)&local_1f8;
  local_228.ScriptStruct = pUVar2;
  PropertyPathHelpers::SetPropertyValue<PropertyPathHelpersInternal::FPropertyStructView>
            ((UObject *)local_208[0].DebugPtr,pFVar7,&local_228);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  bVar4 = FPropertyPathTestStruct::operator==(&(local_208[0].DebugPtr)->Struct,&local_1f8);
  if (bVar4) {
    bVar8 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.ScriptStruct != (UScriptStruct *)0x0) {
      FMemory::Free(local_228.ScriptStruct);
    }
    bVar8 = 0;
  }
  bVar4 = UPropertyPathTestObject::operator==(local_208[0].DebugPtr,local_138[0].DebugPtr);
  if (bVar4) {
    bVar9 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.ScriptStruct != (UScriptStruct *)0x0) {
      FMemory::Free(local_228.ScriptStruct);
    }
    bVar9 = 0;
  }
  bVar8 = bVar8 & bVar9;
  if ((local_208[0].DebugPtr)->bSetterCalled != true) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.ScriptStruct != (UScriptStruct *)0x0) {
      FMemory::Free(local_228.ScriptStruct);
    }
    bVar8 = 0;
  }
  if ((local_208[0].DebugPtr)->bGetterCalled == false) {
    bVar9 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.ScriptStruct != (UScriptStruct *)0x0) {
      FMemory::Free(local_228.ScriptStruct);
    }
    bVar9 = 0;
  }
  (local_208[0].DebugPtr)->bSetterCalled = false;
  (local_208[0].DebugPtr)->bGetterCalled = false;
  bVar9 = bVar9 & bVar8;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_128);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_198);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1f8);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_208[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_138[0].ObjectPtr);
  TVar3 = local_138[0];
  pFVar5 = FPropertyPathTestStruct::FPropertyPathTestStruct(&local_68,&local_1f8);
  (TVar3.DebugPtr)->bSetterCalled = true;
  FPropertyPathTestStruct::operator=(&(TVar3.DebugPtr)->StructRef,pFVar5);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(pFVar5);
  if (Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_PropertyPath();
    Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathTestStruct,(UObject *)pUVar6,
                         L"PropertyPathTestStruct");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton;
  pFVar7 = ::FString::FString(&local_218,"StructRef");
  local_228.Memory = (uchar *)&local_1f8;
  local_228.ScriptStruct = pUVar2;
  PropertyPathHelpers::SetPropertyValue<PropertyPathHelpersInternal::FPropertyStructView>
            ((UObject *)local_208[0].DebugPtr,pFVar7,&local_228);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  bVar4 = FPropertyPathTestStruct::operator==(&(local_208[0].DebugPtr)->StructRef,&local_1f8);
  if (!bVar4) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.ScriptStruct != (UScriptStruct *)0x0) {
      FMemory::Free(local_228.ScriptStruct);
    }
    bVar9 = 0;
  }
  bVar4 = UPropertyPathTestObject::operator==(local_208[0].DebugPtr,local_138[0].DebugPtr);
  if (bVar4) {
    bVar8 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.ScriptStruct != (UScriptStruct *)0x0) {
      FMemory::Free(local_228.ScriptStruct);
    }
    bVar8 = 0;
  }
  bVar8 = bVar8 & bVar9;
  if ((local_208[0].DebugPtr)->bSetterCalled != true) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.ScriptStruct != (UScriptStruct *)0x0) {
      FMemory::Free(local_228.ScriptStruct);
    }
    bVar8 = 0;
  }
  if ((local_208[0].DebugPtr)->bGetterCalled == false) {
    bVar9 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.ScriptStruct != (UScriptStruct *)0x0) {
      FMemory::Free(local_228.ScriptStruct);
    }
    bVar9 = 0;
  }
  (local_208[0].DebugPtr)->bSetterCalled = false;
  (local_208[0].DebugPtr)->bGetterCalled = false;
  bVar9 = bVar9 & bVar8;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_128);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_198);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1f8);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_208[0].ObjectPtr);
  FPropertyPathTestBed::FPropertyPathTestBed((FPropertyPathTestBed *)&local_138[0].ObjectPtr);
  TVar3 = local_138[0];
  pFVar5 = FPropertyPathTestStruct::FPropertyPathTestStruct(&local_68,&local_1f8);
  (TVar3.DebugPtr)->bSetterCalled = true;
  FPropertyPathTestStruct::operator=(&(TVar3.DebugPtr)->StructConstRef,pFVar5);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(pFVar5);
  if (Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_PropertyPath();
    Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathTestStruct,(UObject *)pUVar6,
                         L"PropertyPathTestStruct");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton;
  pFVar7 = ::FString::FString(&local_218,"StructConstRef");
  local_228.Memory = (uchar *)&local_1f8;
  local_228.ScriptStruct = pUVar2;
  PropertyPathHelpers::SetPropertyValue<PropertyPathHelpersInternal::FPropertyStructView>
            ((UObject *)local_208[0].DebugPtr,pFVar7,&local_228);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  bVar4 = FPropertyPathTestStruct::operator==(&(local_208[0].DebugPtr)->StructConstRef,&local_1f8);
  if (!bVar4) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.ScriptStruct != (UScriptStruct *)0x0) {
      FMemory::Free(local_228.ScriptStruct);
    }
    bVar9 = 0;
  }
  bVar4 = UPropertyPathTestObject::operator==(local_208[0].DebugPtr,local_138[0].DebugPtr);
  if (bVar4) {
    bVar8 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.ScriptStruct != (UScriptStruct *)0x0) {
      FMemory::Free(local_228.ScriptStruct);
    }
    bVar8 = 0;
  }
  bVar8 = bVar8 & bVar9;
  if ((local_208[0].DebugPtr)->bSetterCalled != true) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.ScriptStruct != (UScriptStruct *)0x0) {
      FMemory::Free(local_228.ScriptStruct);
    }
    bVar8 = 0;
  }
  if ((local_208[0].DebugPtr)->bGetterCalled == false) {
    bVar9 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_228,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_228,0);
    if (local_228.ScriptStruct != (UScriptStruct *)0x0) {
      FMemory::Free(local_228.ScriptStruct);
    }
    bVar9 = 0;
  }
  *(bool *)((longlong)local_208[0] + 0x178) = false;
  *(bool *)((longlong)local_208[0] + 0x179) = false;
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_c8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_128);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_198);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_1f8);
  return (bool)(bVar9 & bVar8);
}

// GetBeautifiedTestName @ 144472200

FString * __thiscall
FSetStructDataTest::GetBeautifiedTestName(FSetStructDataTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.PropertyPath.SetStructDataTest");
  return __return_storage_ptr__;
}

