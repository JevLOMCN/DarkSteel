// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141bca1e0

EAutomationTestFlags __thiscall FLocItemTest::GetTestFlags(FLocItemTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bca1f0

bool __thiscall FLocItemTest::IsStressTest(FLocItemTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bca200

uint __thiscall FLocItemTest::GetRequiredDeviceNum(FLocItemTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bca210

FString * __thiscall
FLocItemTest::GetTestSourceFileName(FLocItemTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Internationalization\\ManifestTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bca240

int __thiscall FLocItemTest::GetTestSourceFileLine(FLocItemTest *this)

{
  return 0xc4;
}

// GetTests @ 141bca250

/* WARNING: Removing unreachable block (ram,0x000141bca3ce) */

void __thiscall
FLocItemTest::GetTests
          (FLocItemTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar1 = &this->PrettyNameDotNotation;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar1)
  ;
  pFVar5 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = local_18;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar5 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 141bca3f0

bool __thiscall FLocItemTest::RunTest(FLocItemTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bca420

FString * __thiscall
FLocItemTest::GetBeautifiedTestName(FLocItemTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FLocItemTest @ 141be49c0

FLocItemTest * __thiscall FLocItemTest::FLocItemTest(FLocItemTest *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EAutomationTestFlags EVar3;
  FString *pFVar4;
  FAutomationTestFramework *this_00;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,false);
  this->_padding_ = (longlong)&___7FLocItemTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[EditorContext][ClientContext][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::Internationalization LocItem");
  pFVar4 = ::FString::Replace(pFVar4,&local_18,L"::",L".",IgnoreCase);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrettyNameDotNotation).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->PrettyNameDotNotation).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar3 = this->TestFlags;
  if ((EVar3 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext)) == None
     ) {
    EVar3 = EVar3 | (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
    this->TestFlags = EVar3;
  }
  if ((EVar3 & (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      None) {
    this->TestFlags = EVar3 | EngineFilter;
  }
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_18,"[EditorContext][ClientContext][SmokeFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,lVar5 * 2);
  }
  FAutomationTestFramework::RegisterAutomationTestTags(this_00,&local_28,&local_18,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// TestBody @ 141c1c220

void __thiscall FLocItemTest::TestBody(FLocItemTest *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FLocMetadataObject *pFVar6;
  FString *pFVar7;
  FAutomationTestFramework *pFVar8;
  FLocMetadataObject *pFVar9;
  TRawPtrProxy<FLocMetadataObject> local_res18;
  TRawPtrProxy<FLocMetadataObject> local_res20;
  FLocItem local_648;
  FLocItem local_628;
  FLocItem local_608;
  FLocItem local_5e8;
  TSharedPtr<FLocMetadataObject,1> local_5c8;
  FString local_5b8;
  FString local_5a8;
  TSharedPtr<FLocMetadataObject,1> local_598;
  FLocItem local_588;
  TSharedPtr<FLocMetadataObject,1> local_568;
  TSharedPtr<FLocMetadataObject,1> local_558;
  FLocItem local_548;
  FLocItem local_528;
  FLocItem local_508;
  TRawPtrProxy<FLocMetadataObject> local_4e8;
  TRawPtrProxy<FLocMetadataObject> local_4e0;
  TRawPtrProxy<FLocMetadataObject> local_4d8;
  TRawPtrProxy<FLocMetadataObject> local_4d0;
  TRawPtrProxy<FLocMetadataObject> local_4c8;
  TRawPtrProxy<FLocMetadataObject> local_4c0;
  TRawPtrProxy<FLocMetadataObject> local_4b8;
  TRawPtrProxy<FLocMetadataObject> local_4b0;
  TSharedPtr<FLocMetadataObject,1> local_4a8;
  FLocItem local_498;
  FLocItem local_478;
  FLocItem local_458;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  TSharedPtr<FLocMetadataObject,1> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pFVar6 = ::operator_new(0x50);
  pFVar9 = (FLocMetadataObject *)0x0;
  local_res18.Object = pFVar9;
  if (pFVar6 != (FLocMetadataObject *)0x0) {
    *(undefined8 *)&(pFVar6->Values).field_0x10 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x18 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x38 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x48 = 0;
    *(undefined8 *)&pFVar6->Values = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar6->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar6->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar6->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar6->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x40 = 0;
    local_res18.Object = pFVar6;
  }
  TSharedPtr<FLocMetadataObject,1>::TSharedPtr<FLocMetadataObject,1><FLocMetadataObject>
            (&local_5c8,&local_res18);
  pFVar6 = ::operator_new(0x50);
  local_res20.Object = pFVar9;
  if (pFVar6 != (FLocMetadataObject *)0x0) {
    *(undefined8 *)&(pFVar6->Values).field_0x10 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x18 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x38 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x48 = 0;
    *(undefined8 *)&pFVar6->Values = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar6->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar6->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar6->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar6->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x40 = 0;
    local_res20.Object = pFVar6;
  }
  TSharedPtr<FLocMetadataObject,1>::TSharedPtr<FLocMetadataObject,1><FLocMetadataObject>
            (&local_598,&local_res20);
  pFVar6 = ::operator_new(0x50);
  local_4b0.Object = pFVar9;
  if (pFVar6 != (FLocMetadataObject *)0x0) {
    *(undefined8 *)&(pFVar6->Values).field_0x10 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x18 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x38 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x48 = 0;
    *(undefined8 *)&pFVar6->Values = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar6->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar6->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar6->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar6->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x40 = 0;
    local_4b0.Object = pFVar6;
  }
  TSharedPtr<FLocMetadataObject,1>::TSharedPtr<FLocMetadataObject,1><FLocMetadataObject>
            (&local_4a8,&local_4b0);
  pFVar6 = ::operator_new(0x50);
  local_4e8.Object = pFVar9;
  if (pFVar6 != (FLocMetadataObject *)0x0) {
    *(undefined8 *)&(pFVar6->Values).field_0x10 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x18 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x38 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x48 = 0;
    *(undefined8 *)&pFVar6->Values = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar6->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar6->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar6->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar6->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x40 = 0;
    local_4e8.Object = pFVar6;
  }
  TSharedPtr<FLocMetadataObject,1>::TSharedPtr<FLocMetadataObject,1><FLocMetadataObject>
            (&local_98,&local_4e8);
  pFVar6 = ::operator_new(0x50);
  local_4e0.Object = pFVar9;
  if (pFVar6 != (FLocMetadataObject *)0x0) {
    *(undefined8 *)&(pFVar6->Values).field_0x10 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x18 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x38 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x48 = 0;
    *(undefined8 *)&pFVar6->Values = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar6->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar6->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar6->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar6->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x40 = 0;
    local_4e0.Object = pFVar6;
  }
  TSharedPtr<FLocMetadataObject,1>::TSharedPtr<FLocMetadataObject,1><FLocMetadataObject>
            (&local_558,&local_4e0);
  pFVar6 = ::operator_new(0x50);
  local_4d8.Object = pFVar9;
  if (pFVar6 != (FLocMetadataObject *)0x0) {
    *(undefined8 *)&(pFVar6->Values).field_0x10 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x18 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x38 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x48 = 0;
    *(undefined8 *)&pFVar6->Values = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar6->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar6->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar6->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar6->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x40 = 0;
    local_4d8.Object = pFVar6;
  }
  TSharedPtr<FLocMetadataObject,1>::TSharedPtr<FLocMetadataObject,1><FLocMetadataObject>
            (&local_568,&local_4d8);
  if ((local_5c8.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FString::FString(&local_138,L"Masculine");
  ::FString::FString(&local_188,L"Gender");
  FLocMetadataObject::SetStringField(local_5c8.Object,&local_188,&local_138);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if ((local_5c8.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FString::FString(&local_118,L"Singular");
  ::FString::FString(&local_128,L"Plurality");
  FLocMetadataObject::SetStringField(local_5c8.Object,&local_128,&local_118);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if ((local_5c8.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FString::FString(&local_f8,L"Masculine");
  ::FString::FString(&local_108,L"TargetGender");
  FLocMetadataObject::SetStringField(local_5c8.Object,&local_108,&local_f8);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if ((local_5c8.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FString::FString(&local_d8,L"Singular");
  ::FString::FString(&local_e8,L"TargetPlurality");
  FLocMetadataObject::SetStringField(local_5c8.Object,&local_e8,&local_d8);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if ((local_598.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FString::FString(&local_b8,L"Masculine");
  ::FString::FString(&local_c8,L"Gender");
  FLocMetadataObject::SetStringField(local_598.Object,&local_c8,&local_b8);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if ((local_598.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FString::FString(&local_438,L"Singular");
  ::FString::FString(&local_a8,L"Plurality");
  FLocMetadataObject::SetStringField(local_598.Object,&local_a8,&local_438);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.Data.AllocatorInstance.Data);
  }
  if ((local_598.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FString::FString(&local_418,L"Feminine");
  ::FString::FString(&local_428,L"TargetGender");
  FLocMetadataObject::SetStringField(local_598.Object,&local_428,&local_418);
  if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.Data.AllocatorInstance.Data);
  }
  if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_418.Data.AllocatorInstance.Data);
  }
  if ((local_598.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FString::FString(&local_3f8,L"Singular");
  ::FString::FString(&local_408,L"TargetPlurality");
  FLocMetadataObject::SetStringField(local_598.Object,&local_408,&local_3f8);
  if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data.AllocatorInstance.Data);
  }
  if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
  }
  if ((local_558.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FString::FString(&local_3e8,L"*IsMature");
  FLocMetadataObject::SetBoolField(local_558.Object,&local_3e8,false);
  if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
  }
  if ((local_568.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FString::FString(&local_3d8,L"*IsMature");
  FLocMetadataObject::SetBoolField(local_568.Object,&local_3d8,true);
  if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
  }
  if ((local_4a8.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FString::FString(&local_3b8,L"Go big or go home!");
  ::FString::FString(&local_3c8,L"VoiceActorDirection");
  FLocMetadataObject::SetStringField(local_4a8.Object,&local_3c8,&local_3b8);
  if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
  }
  if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FString::FString(&local_58,L"TextA");
  local_648.Text.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_648.Text.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  local_648.Text.Data.ArrayMax = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  local_648.MetadataObj.Object = (FLocMetadataObject *)0x0;
  local_648.MetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar1 = (pFVar7->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar6 = ::operator_new(0x50);
  local_4d0.Object = pFVar9;
  if (pFVar6 != (FLocMetadataObject *)0x0) {
    if ((local_558.Object == (FLocMetadataObject *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_4d0.Object = FLocMetadataObject::FLocMetadataObject(pFVar6,local_558.Object);
  }
  TSharedPtr<FLocMetadataObject,1>::operator=<FLocMetadataObject>(&local_648.MetadataObj,&local_4d0)
  ;
  pFVar7 = ::FString::FString(&local_48,L"TextB");
  local_508.Text.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_508.Text.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  local_508.Text.Data.ArrayMax = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  local_508.MetadataObj.Object = (FLocMetadataObject *)0x0;
  local_508.MetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar1 = (pFVar7->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar6 = ::operator_new(0x50);
  local_4c8.Object = pFVar9;
  if (pFVar6 != (FLocMetadataObject *)0x0) {
    if ((local_568.Object == (FLocMetadataObject *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_4c8.Object = FLocMetadataObject::FLocMetadataObject(pFVar6,local_568.Object);
  }
  TSharedPtr<FLocMetadataObject,1>::operator=<FLocMetadataObject>(&local_508.MetadataObj,&local_4c8)
  ;
  FLocItem::FLocItem(&local_548,&local_648);
  if (local_548.MetadataObj.Object == local_648.MetadataObj.Object) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_3a8,L"FLocItem MetadataObj and its Clone are not unique objects.");
    (*pcVar3)(pFVar2,&local_3a8,0);
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
    }
  }
  if (local_548.Text.Data.ArrayNum == local_648.Text.Data.ArrayNum) {
    if (1 < local_548.Text.Data.ArrayNum) {
      iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_548.Text.Data.AllocatorInstance.Data,
                         (wchar_t *)local_648.Text.Data.AllocatorInstance.Data);
      bVar4 = iVar5 == 0;
      goto LAB_141c1cc5b;
    }
  }
  else {
    bVar4 = local_548.Text.Data.ArrayNum + local_648.Text.Data.ArrayNum == 1;
LAB_141c1cc5b:
    if (!bVar4) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar2 = pFVar8->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_398,L"LocItemAClone.Text == LocItemA.Text");
      (*pcVar3)(pFVar2,&local_398,0);
      if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_398.Data.AllocatorInstance.Data);
      }
    }
  }
  if ((local_548.MetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((local_648.MetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = FLocMetadataObject::operator==(local_548.MetadataObj.Object,local_648.MetadataObj.Object);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_388,L"LocItemAClone.MetadataObj == LocItemA.MetadataObj");
    (*pcVar3)(pFVar2,&local_388,0);
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = FLocItem::operator==(&local_548,&local_648);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_378,L"LocItemAClone == LocItemA");
    (*pcVar3)(pFVar2,&local_378,0);
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = FLocItem::operator<(&local_548,&local_648);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_368,L"LocItemAClone < LocItemA");
    (*pcVar3)(pFVar2,&local_368,0);
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_548.MetadataObj.SharedReferenceCount.ReferenceController);
  if (local_548.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_548.Text.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FString::FString(&local_38,L"New");
  local_608.Text.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_608.Text.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  local_608.Text.Data.ArrayMax = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  local_608.MetadataObj.Object = (FLocMetadataObject *)0x0;
  local_608.MetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar1 = (pFVar7->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FLocItem::operator=(&local_608,&local_648);
  if (local_608.MetadataObj.Object == local_648.MetadataObj.Object) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_358,L"FLocItem MetadataObj and its Clone are not unique objects.");
    (*pcVar3)(pFVar2,&local_358,0);
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
  }
  if (local_608.Text.Data.ArrayNum == local_648.Text.Data.ArrayNum) {
    if (local_608.Text.Data.ArrayNum < 2) goto LAB_141c1cf47;
    iVar5 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)local_608.Text.Data.AllocatorInstance.Data,
                       (wchar_t *)local_648.Text.Data.AllocatorInstance.Data);
    bVar4 = iVar5 == 0;
  }
  else {
    bVar4 = local_608.Text.Data.ArrayNum + local_648.Text.Data.ArrayNum == 1;
  }
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_348,L"LocItemAClone.Text == LocItemA.Text");
    (*pcVar3)(pFVar2,&local_348,0);
    if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.Data.AllocatorInstance.Data);
    }
  }
LAB_141c1cf47:
  if ((local_608.MetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = local_608.MetadataObj.Object;
  if ((local_648.MetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = FLocMetadataObject::operator==(pFVar6,local_648.MetadataObj.Object);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_338,L"LocItemAClone.MetadataObj == LocItemA.MetadataObj");
    (*pcVar3)(pFVar2,&local_338,0);
    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = FLocItem::operator==(&local_608,&local_648);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_328,L"LocItemAClone == LocItemA");
    (*pcVar3)(pFVar2,&local_328,0);
    if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = FLocItem::operator<(&local_608,&local_648);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_318,L"LocItemAClone < LocItemA");
    (*pcVar3)(pFVar2,&local_318,0);
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = FLocItem::operator<(&local_648,&local_608);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_308,L"LocItemA < LocItemAClone");
    (*pcVar3)(pFVar2,&local_308,0);
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_608.MetadataObj.SharedReferenceCount.ReferenceController);
  if (local_608.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_608.Text.Data.AllocatorInstance.Data);
  }
  FLocItem::FLocItem(&local_5e8,&local_648);
  bVar4 = FLocItem::operator==(&local_5e8,&local_648);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,L"LocItemAClone == LocItemA");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  FLocItem::FLocItem(&local_478,&local_648);
  if ((local_5e8.MetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FString::FString(&local_2d8,L"NewNonCompareValue");
  ::FString::FString(&local_2e8,L"*NewNonCompare");
  FLocMetadataObject::SetStringField(local_5e8.MetadataObj.Object,&local_2e8,&local_2d8);
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  bVar4 = FLocItem::operator==(&local_5e8,&local_478);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2c8,L"LocItemAClone != LocItemAClone2");
    (*pcVar3)(pFVar2,&local_2c8,0);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_478.MetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FString::FString(&local_2a8,L"NewNonCompareValue2");
  ::FString::FString(&local_2b8,L"*NewNonCompare");
  FLocMetadataObject::SetStringField(local_478.MetadataObj.Object,&local_2b8,&local_2a8);
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  bVar4 = FLocItem::operator==(&local_5e8,&local_478);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_298,L"LocItemAClone == LocItemAClone2");
    (*pcVar3)(pFVar2,&local_298,0);
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
  }
  FLocItem::operator=(&local_5e8,&local_648);
  ::FString::ConcatFC(&local_5b8,&local_5e8.Text,L"New");
  if (local_5e8.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e8.Text.Data.AllocatorInstance.Data);
  }
  local_5e8.Text.Data.AllocatorInstance.Data = local_5b8.Data.AllocatorInstance.Data;
  local_5e8.Text.Data.ArrayNum = local_5b8.Data.ArrayNum;
  local_5e8.Text.Data.ArrayMax = local_5b8.Data.ArrayMax;
  local_5b8.Data.ArrayNum = 0;
  local_5b8.Data.ArrayMax = 0;
  local_5b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar4 = FLocItem::operator==(&local_5e8,&local_648);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_288,L"LocItemAClone != LocItemA");
    (*pcVar3)(pFVar2,&local_288,0);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = ::FString::FString(&local_88,L"TestText");
  local_458.Text.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_458.Text.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  local_458.Text.Data.ArrayMax = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  local_458.MetadataObj.Object = (FLocMetadataObject *)0x0;
  local_458.MetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar1 = (pFVar7->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar7 = ::FString::FString(&local_78,L"TestText");
  local_498.Text.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_498.Text.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  local_498.Text.Data.ArrayMax = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  local_498.MetadataObj.Object = (FLocMetadataObject *)0x0;
  local_498.MetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar1 = (pFVar7->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar6 = ::operator_new(0x50);
  local_4c0.Object = pFVar9;
  if (pFVar6 != (FLocMetadataObject *)0x0) {
    *(undefined8 *)&(pFVar6->Values).field_0x10 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x18 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x38 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x48 = 0;
    *(undefined8 *)&pFVar6->Values = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar6->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar6->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar6->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar6->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x40 = 0;
    local_4c0.Object = pFVar6;
  }
  TSharedPtr<FLocMetadataObject,1>::operator=<FLocMetadataObject>(&local_498.MetadataObj,&local_4c0)
  ;
  bVar4 = FLocItem::operator==(&local_458,&local_498);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_278,L"LocItemEmptyA == LocItemEmptyB");
    (*pcVar3)(pFVar2,&local_278,0);
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_498.MetadataObj.SharedReferenceCount.ReferenceController);
  if (local_498.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.Text.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_458.MetadataObj.SharedReferenceCount.ReferenceController);
  if (local_458.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Text.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_478.MetadataObj.SharedReferenceCount.ReferenceController);
  if (local_478.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.Text.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5e8.MetadataObj.SharedReferenceCount.ReferenceController);
  if (local_5e8.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e8.Text.Data.AllocatorInstance.Data);
  }
  bVar4 = FLocItem::operator<(&local_648,&local_508);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_268,L"LocItemA < LocItemB");
    (*pcVar3)(pFVar2,&local_268,0);
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = FLocItem::operator<(&local_508,&local_648);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_258,L"LocItemB < LocItemA");
    (*pcVar3)(pFVar2,&local_258,0);
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
  }
  FLocItem::FLocItem(&local_628,&local_648);
  bVar4 = FLocItem::operator<(&local_648,&local_628);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_248,L"LocItemA < LocItemAClone");
    (*pcVar3)(pFVar2,&local_248,0);
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
  }
  ::FString::ConcatFC(&local_5a8,&local_628.Text,L"A");
  if (local_628.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_628.Text.Data.AllocatorInstance.Data);
  }
  local_628.Text.Data.AllocatorInstance.Data = local_5a8.Data.AllocatorInstance.Data;
  local_628.Text.Data.ArrayNum = local_5a8.Data.ArrayNum;
  local_628.Text.Data.ArrayMax = local_5a8.Data.ArrayMax;
  local_5a8.Data.ArrayNum = 0;
  local_5a8.Data.ArrayMax = 0;
  local_5a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar4 = FLocItem::operator<(&local_628,&local_648);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_238,L"LocItemAClone < LocItemA");
    (*pcVar3)(pFVar2,&local_238,0);
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
  }
  FLocItem::operator=(&local_628,&local_648);
  if ((local_628.MetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = local_628.MetadataObj.Object;
  ::FString::FString(&local_218,L"ANewValue");
  ::FString::FString(&local_228,L"ANewKey");
  FLocMetadataObject::SetStringField(pFVar6,&local_228,&local_218);
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  bVar4 = FLocItem::operator<(&local_628,&local_648);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_208,L"LocItemAClone < LocItemA");
    (*pcVar3)(pFVar2,&local_208,0);
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
  }
  FLocItem::operator=(&local_628,&local_648);
  if ((local_628.MetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = local_628.MetadataObj.Object;
  ::FString::FString(&local_1f8,L"*IsMature");
  FLocMetadataObject::RemoveField(pFVar6,&local_1f8);
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  bVar4 = FLocItem::operator<(&local_628,&local_648);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_1e8,L"LocItemAClone < LocItemA");
    (*pcVar3)(pFVar2,&local_1e8,0);
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = FLocItem::operator<(&local_648,&local_628);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"LocItemA < LocItemAClone");
    (*pcVar3)(pFVar2,&local_1d8,0);
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  FLocItem::operator=(&local_628,&local_648);
  if ((local_628.MetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FString::FString(&local_1c8,L"*IsMature");
  FLocMetadataObject::SetBoolField(local_628.MetadataObj.Object,&local_1c8,true);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  bVar4 = FLocItem::operator<(&local_628,&local_648);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_1b8,L"LocItemAClone < LocItemA");
    (*pcVar3)(pFVar2,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = ::FString::FString(&local_68,L"SameText");
  local_528.Text.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_528.Text.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  local_528.Text.Data.ArrayMax = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  local_528.MetadataObj.Object = (FLocMetadataObject *)0x0;
  local_528.MetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar1 = (pFVar7->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar7 = ::FString::FString(&local_28,L"SameText");
  local_588.Text.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_588.Text.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  local_588.Text.Data.ArrayMax = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  local_588.MetadataObj.Object = (FLocMetadataObject *)0x0;
  local_588.MetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar1 = (pFVar7->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  bVar4 = FLocItem::operator<(&local_528,&local_588);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_1a8,L"LocItemEmptyA < LocItemEmptyB");
    (*pcVar3)(pFVar2,&local_1a8,0);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = ::operator_new(0x50);
  if (pFVar6 != (FLocMetadataObject *)0x0) {
    *(undefined8 *)&(pFVar6->Values).field_0x10 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x18 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x38 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x48 = 0;
    *(undefined8 *)&pFVar6->Values = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar6->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar6->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar6->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar6->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar6->Values).field_0x40 = 0;
    pFVar9 = pFVar6;
  }
  local_4b8.Object = pFVar9;
  TSharedPtr<FLocMetadataObject,1>::operator=<FLocMetadataObject>(&local_588.MetadataObj,&local_4b8)
  ;
  bVar4 = FLocItem::operator<(&local_528,&local_588);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_198,L"LocItemEmptyA < LocItemEmptyB");
    (*pcVar3)(pFVar2,&local_198,0);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = FLocItem::operator<(&local_588,&local_528);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_148,L"LocItemEmptyB < LocItemEmptyA");
    (*pcVar3)(pFVar2,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  if ((local_588.MetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar9 = local_588.MetadataObj.Object;
  ::FString::FString(&local_168,L"AMetadataValue");
  ::FString::FString(&local_178,L"AMetadataKey");
  FLocMetadataObject::SetStringField(pFVar9,&local_178,&local_168);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  bVar4 = FLocItem::operator<(&local_528,&local_588);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_158,L"LocItemEmptyA < LocItemEmptyB");
    (*pcVar3)(pFVar2,&local_158,0);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_588.MetadataObj.SharedReferenceCount.ReferenceController);
  if (local_588.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.Text.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_528.MetadataObj.SharedReferenceCount.ReferenceController);
  if (local_528.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_528.Text.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_628.MetadataObj.SharedReferenceCount.ReferenceController);
  if (local_628.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_628.Text.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_508.MetadataObj.SharedReferenceCount.ReferenceController);
  if (local_508.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.Text.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_648.MetadataObj.SharedReferenceCount.ReferenceController);
  if (local_648.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Text.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_568.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_558.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_598.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5c8.SharedReferenceCount.ReferenceController);
  return;
}

