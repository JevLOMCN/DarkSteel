// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141bc9c60

EAutomationTestFlags __thiscall FLocContextTest::GetTestFlags(FLocContextTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bc9c70

bool __thiscall FLocContextTest::IsStressTest(FLocContextTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bc9c80

uint __thiscall FLocContextTest::GetRequiredDeviceNum(FLocContextTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bc9c90

FString * __thiscall
FLocContextTest::GetTestSourceFileName(FLocContextTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Internationalization\\ManifestTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bc9cc0

int __thiscall FLocContextTest::GetTestSourceFileLine(FLocContextTest *this)

{
  return 0x12;
}

// GetTests @ 141bc9cd0

/* WARNING: Removing unreachable block (ram,0x000141bc9e4e) */

void __thiscall
FLocContextTest::GetTests
          (FLocContextTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bc9e70

bool __thiscall FLocContextTest::RunTest(FLocContextTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bc9ea0

FString * __thiscall
FLocContextTest::GetBeautifiedTestName(FLocContextTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FLocContextTest @ 141be47a0

FLocContextTest * __thiscall
FLocContextTest::FLocContextTest(FLocContextTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FLocContextTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[EditorContext][ClientContext][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::Internationalization Context");
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

// TestBody @ 141c19cf0

void __thiscall FLocContextTest::TestBody(FLocContextTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FLocMetadataObject *pFVar7;
  FAutomationTestFramework *pFVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  TRawPtrProxy<FLocMetadataObject> local_res18;
  TRawPtrProxy<FLocMetadataObject> local_res20;
  FManifestContext local_978;
  TSharedPtr<FLocMetadataObject,1> local_918;
  TSharedPtr<FLocMetadataObject,1> local_908;
  FString local_8f8;
  FString local_8e8;
  FString local_8d8;
  uint local_8c8;
  FString local_8c0;
  uint local_8b0;
  FString local_8a8;
  FManifestContext local_898;
  TSharedPtr<FLocMetadataObject,1> local_838;
  FString local_828;
  uint local_818;
  TSharedPtr<FLocMetadataObject,1> local_810;
  FManifestContext local_7f8;
  FManifestContext local_798;
  FManifestContext local_738;
  TRawPtrProxy<FLocMetadataObject> local_6d8;
  TRawPtrProxy<FLocMetadataObject> local_6d0;
  TRawPtrProxy<FLocMetadataObject> local_6c8;
  TRawPtrProxy<FLocMetadataObject> local_6c0;
  TRawPtrProxy<FLocMetadataObject> local_6b8;
  TRawPtrProxy<FLocMetadataObject> local_6b0;
  TRawPtrProxy<FLocMetadataObject> local_6a8;
  TRawPtrProxy<FLocMetadataObject> local_6a0;
  TRawPtrProxy<FLocMetadataObject> local_698;
  TRawPtrProxy<FLocMetadataObject> local_690;
  TRawPtrProxy<FLocMetadataObject> local_688;
  undefined8 local_680;
  FSharedReferencer<1> local_678;
  TSharedPtr<FLocMetadataObject,1> local_670;
  TSharedPtr<FLocMetadataObject,1> local_660;
  FManifestContext local_648;
  FManifestContext local_5e8;
  FManifestContext local_588;
  FManifestContext local_528;
  FManifestContext local_4c8;
  FString local_468;
  FString local_458;
  FString local_448;
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
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar6 = ::operator_new(0x50);
  pFVar9 = (FScriptContainerElement *)0x0;
  local_res18.Object = (FLocMetadataObject *)pFVar9;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    *(undefined8 *)(pFVar6 + 0x10) = 0;
    *(undefined8 *)(pFVar6 + 0x18) = 0;
    *(undefined8 *)(pFVar6 + 0x38) = 0;
    *(undefined8 *)(pFVar6 + 0x48) = 0;
    *(undefined8 *)pFVar6 = 0;
    *(undefined8 *)(pFVar6 + 8) = 0;
    *(undefined8 *)(pFVar6 + 0x20) = 0;
    *(undefined4 *)(pFVar6 + 0x28) = 0;
    *(undefined4 *)(pFVar6 + 0x2c) = 0x80;
    *(undefined4 *)(pFVar6 + 0x30) = 0xffffffff;
    *(undefined4 *)(pFVar6 + 0x34) = 0;
    *(undefined8 *)(pFVar6 + 0x40) = 0;
    local_res18.Object = (FLocMetadataObject *)pFVar6;
  }
  TSharedPtr<FLocMetadataObject,1>::TSharedPtr<FLocMetadataObject,1><FLocMetadataObject>
            (&local_918,&local_res18);
  pFVar6 = ::operator_new(0x50);
  local_res20.Object = (FLocMetadataObject *)pFVar9;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    *(undefined8 *)(pFVar6 + 0x10) = 0;
    *(undefined8 *)(pFVar6 + 0x18) = 0;
    *(undefined8 *)(pFVar6 + 0x38) = 0;
    *(undefined8 *)(pFVar6 + 0x48) = 0;
    *(undefined8 *)pFVar6 = 0;
    *(undefined8 *)(pFVar6 + 8) = 0;
    *(undefined8 *)(pFVar6 + 0x20) = 0;
    *(undefined4 *)(pFVar6 + 0x28) = 0;
    *(undefined4 *)(pFVar6 + 0x2c) = 0x80;
    *(undefined4 *)(pFVar6 + 0x30) = 0xffffffff;
    *(undefined4 *)(pFVar6 + 0x34) = 0;
    *(undefined8 *)(pFVar6 + 0x40) = 0;
    local_res20.Object = (FLocMetadataObject *)pFVar6;
  }
  TSharedPtr<FLocMetadataObject,1>::TSharedPtr<FLocMetadataObject,1><FLocMetadataObject>
            (&local_908,&local_res20);
  pFVar6 = ::operator_new(0x50);
  local_688.Object = (FLocMetadataObject *)pFVar9;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    *(undefined8 *)(pFVar6 + 0x10) = 0;
    *(undefined8 *)(pFVar6 + 0x18) = 0;
    *(undefined8 *)(pFVar6 + 0x38) = 0;
    *(undefined8 *)(pFVar6 + 0x48) = 0;
    *(undefined8 *)pFVar6 = 0;
    *(undefined8 *)(pFVar6 + 8) = 0;
    *(undefined8 *)(pFVar6 + 0x20) = 0;
    *(undefined4 *)(pFVar6 + 0x28) = 0;
    *(undefined4 *)(pFVar6 + 0x2c) = 0x80;
    *(undefined4 *)(pFVar6 + 0x30) = 0xffffffff;
    *(undefined4 *)(pFVar6 + 0x34) = 0;
    *(undefined8 *)(pFVar6 + 0x40) = 0;
    local_688.Object = (FLocMetadataObject *)pFVar6;
  }
  TSharedPtr<FLocMetadataObject,1>::TSharedPtr<FLocMetadataObject,1><FLocMetadataObject>
            (&local_810,&local_688);
  pFVar6 = ::operator_new(0x50);
  local_6d8.Object = (FLocMetadataObject *)pFVar9;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    *(undefined8 *)(pFVar6 + 0x10) = 0;
    *(undefined8 *)(pFVar6 + 0x18) = 0;
    *(undefined8 *)(pFVar6 + 0x38) = 0;
    *(undefined8 *)(pFVar6 + 0x48) = 0;
    *(undefined8 *)pFVar6 = 0;
    *(undefined8 *)(pFVar6 + 8) = 0;
    *(undefined8 *)(pFVar6 + 0x20) = 0;
    *(undefined4 *)(pFVar6 + 0x28) = 0;
    *(undefined4 *)(pFVar6 + 0x2c) = 0x80;
    *(undefined4 *)(pFVar6 + 0x30) = 0xffffffff;
    *(undefined4 *)(pFVar6 + 0x34) = 0;
    *(undefined8 *)(pFVar6 + 0x40) = 0;
    local_6d8.Object = (FLocMetadataObject *)pFVar6;
  }
  TSharedPtr<FLocMetadataObject,1>::TSharedPtr<FLocMetadataObject,1><FLocMetadataObject>
            (&local_838,&local_6d8);
  pFVar6 = ::operator_new(0x50);
  local_6d0.Object = (FLocMetadataObject *)pFVar9;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    *(undefined8 *)(pFVar6 + 0x10) = 0;
    *(undefined8 *)(pFVar6 + 0x18) = 0;
    *(undefined8 *)(pFVar6 + 0x38) = 0;
    *(undefined8 *)(pFVar6 + 0x48) = 0;
    *(undefined8 *)pFVar6 = 0;
    *(undefined8 *)(pFVar6 + 8) = 0;
    *(undefined8 *)(pFVar6 + 0x20) = 0;
    *(undefined4 *)(pFVar6 + 0x28) = 0;
    *(undefined4 *)(pFVar6 + 0x2c) = 0x80;
    *(undefined4 *)(pFVar6 + 0x30) = 0xffffffff;
    *(undefined4 *)(pFVar6 + 0x34) = 0;
    *(undefined8 *)(pFVar6 + 0x40) = 0;
    local_6d0.Object = (FLocMetadataObject *)pFVar6;
  }
  TSharedPtr<FLocMetadataObject,1>::TSharedPtr<FLocMetadataObject,1><FLocMetadataObject>
            (&local_660,&local_6d0);
  pFVar6 = ::operator_new(0x50);
  local_6c8.Object = (FLocMetadataObject *)pFVar9;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    *(undefined8 *)(pFVar6 + 0x10) = 0;
    *(undefined8 *)(pFVar6 + 0x18) = 0;
    *(undefined8 *)(pFVar6 + 0x38) = 0;
    *(undefined8 *)(pFVar6 + 0x48) = 0;
    *(undefined8 *)pFVar6 = 0;
    *(undefined8 *)(pFVar6 + 8) = 0;
    *(undefined8 *)(pFVar6 + 0x20) = 0;
    *(undefined4 *)(pFVar6 + 0x28) = 0;
    *(undefined4 *)(pFVar6 + 0x2c) = 0x80;
    *(undefined4 *)(pFVar6 + 0x30) = 0xffffffff;
    *(undefined4 *)(pFVar6 + 0x34) = 0;
    *(undefined8 *)(pFVar6 + 0x40) = 0;
    local_6c8.Object = (FLocMetadataObject *)pFVar6;
  }
  TSharedPtr<FLocMetadataObject,1>::TSharedPtr<FLocMetadataObject,1><FLocMetadataObject>
            (&local_670,&local_6c8);
  if ((local_918.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::FString(&local_458,L"Masculine");
  ::FString::FString(&local_468,L"Gender");
  FLocMetadataObject::SetStringField(local_918.Object,&local_468,&local_458);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data.AllocatorInstance.Data);
  }
  if ((local_918.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::FString(&local_438,L"Singular");
  ::FString::FString(&local_448,L"Plurality");
  FLocMetadataObject::SetStringField(local_918.Object,&local_448,&local_438);
  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.Data.AllocatorInstance.Data);
  }
  if ((local_918.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::FString(&local_418,L"Masculine");
  ::FString::FString(&local_428,L"TargetGender");
  FLocMetadataObject::SetStringField(local_918.Object,&local_428,&local_418);
  if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.Data.AllocatorInstance.Data);
  }
  if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_418.Data.AllocatorInstance.Data);
  }
  if ((local_918.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::FString(&local_3f8,L"Singular");
  ::FString::FString(&local_408,L"TargetPlurality");
  FLocMetadataObject::SetStringField(local_918.Object,&local_408,&local_3f8);
  if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data.AllocatorInstance.Data);
  }
  if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
  }
  if ((local_908.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::FString(&local_3d8,L"Masculine");
  ::FString::FString(&local_3e8,L"Gender");
  FLocMetadataObject::SetStringField(local_908.Object,&local_3e8,&local_3d8);
  if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
  }
  if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
  }
  if ((local_908.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::FString(&local_3b8,L"Singular");
  ::FString::FString(&local_3c8,L"Plurality");
  FLocMetadataObject::SetStringField(local_908.Object,&local_3c8,&local_3b8);
  if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
  }
  if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
  }
  if ((local_908.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::FString(&local_398,L"Feminine");
  ::FString::FString(&local_3a8,L"TargetGender");
  FLocMetadataObject::SetStringField(local_908.Object,&local_3a8,&local_398);
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data.AllocatorInstance.Data);
  }
  if ((local_908.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::FString(&local_378,L"Singular");
  ::FString::FString(&local_388,L"TargetPlurality");
  FLocMetadataObject::SetStringField(local_908.Object,&local_388,&local_378);
  if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_388.Data.AllocatorInstance.Data);
  }
  if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.Data.AllocatorInstance.Data);
  }
  if ((local_660.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::FString(&local_368,L"*IsMature");
  FLocMetadataObject::SetBoolField(local_660.Object,&local_368,false);
  if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Data.AllocatorInstance.Data);
  }
  if ((local_670.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::FString(&local_358,L"*IsMature");
  FLocMetadataObject::SetBoolField(local_670.Object,&local_358,true);
  if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.Data.AllocatorInstance.Data);
  }
  if ((local_810.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::FString(&local_338,L"Go big or go home!");
  ::FString::FString(&local_348,L"VoiceActorDirection");
  FLocMetadataObject::SetStringField(local_810.Object,&local_348,&local_338);
  if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Data.AllocatorInstance.Data);
  }
  if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data.AllocatorInstance.Data);
  }
  local_978.Key.Str.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_978.SourceLocation.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_978.SourceLocation.Data.ArrayNum = 0;
  local_978.SourceLocation.Data.ArrayMax = 0;
  local_978.PlatformName.ComparisonIndex.Value = 0;
  local_978.PlatformName.Number = 0;
  local_978.bIsOptional = false;
  local_978.InfoMetadataObj.Object = (FLocMetadataObject *)0x0;
  local_978.InfoMetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_978.KeyMetadataObj.Object = (FLocMetadataObject *)0x0;
  local_978.KeyMetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  ::FString::FString(&local_8c0,L"KeyA");
  FVar11.Data = local_8c0.Data.AllocatorInstance.Data;
  local_978.Key.Str.Data.ArrayNum = local_8c0.Data.ArrayNum;
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_8c0.Data.ArrayNum != 0) {
    FVar10.Data = local_8c0.Data.AllocatorInstance.Data;
  }
  local_8b0 = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar10.Data,0);
  local_978.Key.Hash = local_8b0;
  if (local_978.Key.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_978.Key.Str.Data.AllocatorInstance.Data);
    FVar11.Data = local_8c0.Data.AllocatorInstance.Data;
    local_978.Key.Str.Data.ArrayNum = local_8c0.Data.ArrayNum;
    local_978.Key.Hash = local_8b0;
  }
  local_8c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_978.Key.Str.Data.ArrayMax = local_8c0.Data.ArrayMax;
  local_8c0.Data.ArrayNum = 0;
  local_8c0.Data.ArrayMax = 0;
  local_8b0 = 0;
  local_978.Key.Str.Data.AllocatorInstance.Data = FVar11.Data;
  ::FString::operator=(&local_978.SourceLocation,L"SourceLocationA");
  pFVar7 = ::operator_new(0x50);
  local_6c0.Object = (FLocMetadataObject *)pFVar9;
  if (pFVar7 != (FLocMetadataObject *)0x0) {
    if ((local_810.Object == (FLocMetadataObject *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_6c0.Object = FLocMetadataObject::FLocMetadataObject(pFVar7,local_810.Object);
  }
  TSharedPtr<FLocMetadataObject,1>::operator=<FLocMetadataObject>
            (&local_978.InfoMetadataObj,&local_6c0);
  pFVar7 = ::operator_new(0x50);
  local_6b8.Object = (FLocMetadataObject *)pFVar9;
  if (pFVar7 != (FLocMetadataObject *)0x0) {
    if ((local_918.Object == (FLocMetadataObject *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_6b8.Object = FLocMetadataObject::FLocMetadataObject(pFVar7,local_918.Object);
  }
  TSharedPtr<FLocMetadataObject,1>::operator=<FLocMetadataObject>
            (&local_978.KeyMetadataObj,&local_6b8);
  local_798.Key.Str.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_798.SourceLocation.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_798.SourceLocation.Data.ArrayNum = 0;
  local_798.SourceLocation.Data.ArrayMax = 0;
  local_798.PlatformName.ComparisonIndex.Value = 0;
  local_798.PlatformName.Number = 0;
  local_798.bIsOptional = false;
  local_798.InfoMetadataObj.Object = (FLocMetadataObject *)0x0;
  local_798.InfoMetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_798.KeyMetadataObj.Object = (FLocMetadataObject *)0x0;
  local_798.KeyMetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  ::FString::FString(&local_8d8,L"KeyB");
  FVar11.Data = local_8d8.Data.AllocatorInstance.Data;
  local_798.Key.Str.Data.ArrayNum = local_8d8.Data.ArrayNum;
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_8d8.Data.ArrayNum != 0) {
    FVar10.Data = local_8d8.Data.AllocatorInstance.Data;
  }
  local_8c8 = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar10.Data,0);
  local_798.Key.Hash = local_8c8;
  if (local_798.Key.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_798.Key.Str.Data.AllocatorInstance.Data);
    FVar11.Data = local_8d8.Data.AllocatorInstance.Data;
    local_798.Key.Str.Data.ArrayNum = local_8d8.Data.ArrayNum;
    local_798.Key.Hash = local_8c8;
  }
  local_8d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_798.Key.Str.Data.ArrayMax = local_8d8.Data.ArrayMax;
  local_8d8.Data.ArrayNum = 0;
  local_8d8.Data.ArrayMax = 0;
  local_8c8 = 0;
  local_798.Key.Str.Data.AllocatorInstance.Data = FVar11.Data;
  ::FString::operator=(&local_798.SourceLocation,L"SourceLocationB");
  pFVar7 = ::operator_new(0x50);
  local_6b0.Object = (FLocMetadataObject *)pFVar9;
  if (pFVar7 != (FLocMetadataObject *)0x0) {
    if ((local_838.Object == (FLocMetadataObject *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_6b0.Object = FLocMetadataObject::FLocMetadataObject(pFVar7,local_838.Object);
  }
  TSharedPtr<FLocMetadataObject,1>::operator=<FLocMetadataObject>
            (&local_798.InfoMetadataObj,&local_6b0);
  pFVar7 = ::operator_new(0x50);
  local_6a8.Object = (FLocMetadataObject *)pFVar9;
  if (pFVar7 != (FLocMetadataObject *)0x0) {
    if ((local_908.Object == (FLocMetadataObject *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_6a8.Object = FLocMetadataObject::FLocMetadataObject(pFVar7,local_908.Object);
  }
  TSharedPtr<FLocMetadataObject,1>::operator=<FLocMetadataObject>
            (&local_798.KeyMetadataObj,&local_6a8);
  FManifestContext::FManifestContext(&local_588,&local_978);
  if (local_588.InfoMetadataObj.Object == local_978.InfoMetadataObj.Object) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,
                       L"FManifestContext InfoMetadataObj and its Clone are not unique objects.");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (local_588.KeyMetadataObj.Object == local_978.KeyMetadataObj.Object) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_78,
                       L"FManifestContext KeyMetadataObj and its Clone are not unique objects.");
    (*pcVar2)(pFVar1,&local_78,0);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (local_588.Key.Hash == local_978.Key.Hash) {
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_978.Key.Str.Data.ArrayNum != 0) {
      FVar11.Data = local_978.Key.Str.Data.AllocatorInstance.Data;
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_588.Key.Str.Data.ArrayNum != 0) {
      FVar10.Data = local_588.Key.Str.Data.AllocatorInstance.Data;
    }
    iVar5 = wcscmp((wchar_t *)FVar10.Data,(wchar_t *)FVar11.Data);
    if (iVar5 != 0) goto LAB_141c1a979;
  }
  else {
LAB_141c1a979:
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_88,L"ContextAClone.Key == ContextA.Key");
    (*pcVar2)(pFVar1,&local_88,0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  if (local_588.SourceLocation.Data.ArrayNum == local_978.SourceLocation.Data.ArrayNum) {
    if (1 < local_588.SourceLocation.Data.ArrayNum) {
      iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_588.SourceLocation.Data.AllocatorInstance.Data,
                         (wchar_t *)local_978.SourceLocation.Data.AllocatorInstance.Data);
      bVar4 = iVar5 == 0;
      goto LAB_141c1a9ed;
    }
  }
  else {
    bVar4 = local_588.SourceLocation.Data.ArrayNum + local_978.SourceLocation.Data.ArrayNum == 1;
LAB_141c1a9ed:
    if (!bVar4) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar1 = pFVar8->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_98,L"ContextAClone.SourceLocation == ContextA.SourceLocation");
      (*pcVar2)(pFVar1,&local_98,0);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_588.bIsOptional != local_978.bIsOptional) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_a8,L"ContextAClone.bIsOptional == ContextA.bIsOptional");
    (*pcVar2)(pFVar1,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_588.InfoMetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_978.InfoMetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = FLocMetadataObject::operator==
                    (local_588.InfoMetadataObj.Object,local_978.InfoMetadataObj.Object);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_b8,L"ContextAClone.InfoMetadataObj == ContextA.InfoMetadataObj");
    (*pcVar2)(pFVar1,&local_b8,0);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_588.KeyMetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_978.KeyMetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = FLocMetadataObject::operator==
                    (local_588.KeyMetadataObj.Object,local_978.KeyMetadataObj.Object);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"ContextAClone.KeyMetadataObj == ContextA.KeyMetadataObj");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = FManifestContext::operator==(&local_588,&local_978);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_d8,L"ContextAClone == ContextA");
    (*pcVar2)(pFVar1,&local_d8,0);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = FManifestContext::operator<(&local_588,&local_978);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_e8,L"ContextAClone < ContextA");
    (*pcVar2)(pFVar1,&local_e8,0);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_588.KeyMetadataObj.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_588.InfoMetadataObj.SharedReferenceCount.ReferenceController);
  if (local_588.SourceLocation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.SourceLocation.Data.AllocatorInstance.Data);
  }
  if (local_588.Key.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.Key.Str.Data.AllocatorInstance.Data);
  }
  FManifestContext::FManifestContext(&local_528,&local_978);
  if (local_528.InfoMetadataObj.Object == local_978.InfoMetadataObj.Object) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1b8,
                       L"FManifestContext InfoMetadataObj and its Clone are not unique objects.");
    (*pcVar2)(pFVar1,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
  }
  if (local_528.KeyMetadataObj.Object == local_978.KeyMetadataObj.Object) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,
                       L"FManifestContext KeyMetadataObj and its Clone are not unique objects.");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_528.Key.Hash == local_978.Key.Hash) {
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_978.Key.Str.Data.ArrayNum != 0) {
      FVar11.Data = local_978.Key.Str.Data.AllocatorInstance.Data;
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_528.Key.Str.Data.ArrayNum != 0) {
      FVar10.Data = local_528.Key.Str.Data.AllocatorInstance.Data;
    }
    iVar5 = wcscmp((wchar_t *)FVar10.Data,(wchar_t *)FVar11.Data);
    if (iVar5 != 0) goto LAB_141c1adeb;
  }
  else {
LAB_141c1adeb:
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"ContextAClone.Key == ContextA.Key");
    (*pcVar2)(pFVar1,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_528.SourceLocation.Data.ArrayNum == local_978.SourceLocation.Data.ArrayNum) {
    if (local_528.SourceLocation.Data.ArrayNum < 2) goto LAB_141c1aeac;
    iVar5 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)local_528.SourceLocation.Data.AllocatorInstance.Data,
                       (wchar_t *)local_978.SourceLocation.Data.AllocatorInstance.Data);
    bVar4 = iVar5 == 0;
  }
  else {
    bVar4 = local_528.SourceLocation.Data.ArrayNum + local_978.SourceLocation.Data.ArrayNum == 1;
  }
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_48,L"ContextAClone.SourceLocation == ContextA.SourceLocation");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
LAB_141c1aeac:
  if (local_528.bIsOptional != local_978.bIsOptional) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_328,L"ContextAClone.bIsOptional == ContextA.bIsOptional");
    (*pcVar2)(pFVar1,&local_328,0);
    if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.Data.AllocatorInstance.Data);
    }
  }
  if ((local_528.InfoMetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_978.InfoMetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = FLocMetadataObject::operator==
                    (local_528.InfoMetadataObj.Object,local_978.InfoMetadataObj.Object);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_318,L"ContextAClone.InfoMetadataObj == ContextA.InfoMetadataObj");
    (*pcVar2)(pFVar1,&local_318,0);
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
  }
  if ((local_528.KeyMetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_978.KeyMetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = FLocMetadataObject::operator==
                    (local_528.KeyMetadataObj.Object,local_978.KeyMetadataObj.Object);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_308,L"ContextAClone.KeyMetadataObj == ContextA.KeyMetadataObj");
    (*pcVar2)(pFVar1,&local_308,0);
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = FManifestContext::operator==(&local_528,&local_978);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_2f8,L"ContextAClone == ContextA");
    (*pcVar2)(pFVar1,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = FManifestContext::operator<(&local_528,&local_978);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_2e8,L"ContextAClone < ContextA");
    (*pcVar2)(pFVar1,&local_2e8,0);
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_528.KeyMetadataObj.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_528.InfoMetadataObj.SharedReferenceCount.ReferenceController);
  if (local_528.SourceLocation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_528.SourceLocation.Data.AllocatorInstance.Data);
  }
  if (local_528.Key.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_528.Key.Str.Data.AllocatorInstance.Data);
  }
  FManifestContext::FManifestContext(&local_898,&local_978);
  bVar4 = FManifestContext::operator==(&local_898,&local_978);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_2d8,L"ContextAClone == ContextA");
    (*pcVar2)(pFVar1,&local_2d8,0);
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
  }
  ::FString::ConcatFC(&local_8a8,&local_978.SourceLocation,L"New");
  if (local_898.SourceLocation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_898.SourceLocation.Data.AllocatorInstance.Data);
  }
  local_898.bIsOptional = local_978.bIsOptional == false;
  local_898.SourceLocation.Data.AllocatorInstance.Data = local_8a8.Data.AllocatorInstance.Data;
  local_898.SourceLocation.Data.ArrayNum = local_8a8.Data.ArrayNum;
  local_898.SourceLocation.Data.ArrayMax = local_8a8.Data.ArrayMax;
  local_8a8.Data.ArrayNum = 0;
  local_8a8.Data.ArrayMax = 0;
  local_8a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_678.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_898.InfoMetadataObj.Object = (FLocMetadataObject *)0x0;
  local_680 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_898.InfoMetadataObj.SharedReferenceCount,&local_678);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_678.ReferenceController);
  pFVar7 = ::operator_new(0x50);
  local_6a0.Object = (FLocMetadataObject *)pFVar9;
  if (pFVar7 != (FLocMetadataObject *)0x0) {
    if ((local_838.Object == (FLocMetadataObject *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_6a0.Object = FLocMetadataObject::FLocMetadataObject(pFVar7,local_838.Object);
  }
  TSharedPtr<FLocMetadataObject,1>::operator=<FLocMetadataObject>
            (&local_898.InfoMetadataObj,&local_6a0);
  bVar4 = FManifestContext::operator==(&local_898,&local_978);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_2c8,L"ContextAClone == ContextA");
    (*pcVar2)(pFVar1,&local_2c8,0);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
  }
  ::FString::ConcatFC(&local_8f8,(FString *)&local_898,L"New");
  FVar11.Data = local_8f8.Data.AllocatorInstance.Data;
  iVar5 = local_8f8.Data.ArrayNum;
  iVar3 = local_8f8.Data.ArrayMax;
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_8f8.Data.ArrayNum != 0) {
    FVar10.Data = local_8f8.Data.AllocatorInstance.Data;
  }
  local_8f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8f8.Data.ArrayNum = 0;
  local_8f8.Data.ArrayMax = 0;
  local_898.Key.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar10.Data,0);
  FVar10.Data = pFVar9;
  if (local_898.Key.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_898.Key.Str.Data.AllocatorInstance.Data);
    FVar10.Data = local_8f8.Data.AllocatorInstance.Data;
  }
  local_898.Key.Str.Data.AllocatorInstance.Data = FVar11.Data;
  local_898.Key.Str.Data.ArrayNum = iVar5;
  local_898.Key.Str.Data.ArrayMax = iVar3;
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  bVar4 = FManifestContext::operator==(&local_898,&local_978);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_2b8,L"ContextAClone != ContextA");
    (*pcVar2)(pFVar1,&local_2b8,0);
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
  }
  FManifestContext::operator=(&local_898,&local_978);
  if ((local_898.KeyMetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar7 = local_898.KeyMetadataObj.Object;
  ::FString::FString(&local_298,L"Plural");
  ::FString::FString(&local_2a8,L"TargetPlurality");
  FLocMetadataObject::SetStringField(pFVar7,&local_2a8,&local_298);
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  bVar4 = FManifestContext::operator==(&local_898,&local_978);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_288,L"ContextAClone != ContextA");
    (*pcVar2)(pFVar1,&local_288,0);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  FManifestContext::operator=(&local_898,&local_978);
  if ((local_898.KeyMetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar7 = local_898.KeyMetadataObj.Object;
  ::FString::FString(&local_268,L"NewFieldValue");
  ::FString::FString(&local_278,L"NewField");
  FLocMetadataObject::SetStringField(pFVar7,&local_278,&local_268);
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  bVar4 = FManifestContext::operator==(&local_898,&local_978);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_258,L"ContextAClone != ContextA");
    (*pcVar2)(pFVar1,&local_258,0);
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
  }
  FManifestContext::operator=(&local_898,&local_978);
  if ((local_898.KeyMetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::FString(&local_248,L"TargetPlurality");
  FLocMetadataObject::RemoveField(local_898.KeyMetadataObj.Object,&local_248);
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  bVar4 = FManifestContext::operator==(&local_898,&local_978);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_238,L"ContextAClone != ContextA");
    (*pcVar2)(pFVar1,&local_238,0);
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
  }
  local_4c8.Key.Str.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4c8.SourceLocation.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4c8.SourceLocation.Data.ArrayNum = 0;
  local_4c8.SourceLocation.Data.ArrayMax = 0;
  local_5e8.SourceLocation.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5e8.SourceLocation.Data.ArrayNum = 0;
  local_5e8.SourceLocation.Data.ArrayMax = 0;
  local_4c8.Key.Str.Data.ArrayNum = 0;
  local_4c8.Key.Str.Data.ArrayMax = 0;
  local_4c8.Key.Hash = 0;
  local_4c8.PlatformName.ComparisonIndex.Value = 0;
  local_4c8.PlatformName.Number = 0;
  local_4c8.bIsOptional = false;
  local_4c8.InfoMetadataObj.Object = (FLocMetadataObject *)0x0;
  local_4c8.InfoMetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_4c8.KeyMetadataObj.Object = (FLocMetadataObject *)0x0;
  local_4c8.KeyMetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_5e8.Key.Str.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5e8.Key.Str.Data.ArrayNum = 0;
  local_5e8.Key.Str.Data.ArrayMax = 0;
  local_5e8.Key.Hash = 0;
  local_5e8.PlatformName.ComparisonIndex.Value = 0;
  local_5e8.PlatformName.Number = 0;
  local_5e8.bIsOptional = false;
  local_5e8.InfoMetadataObj.Object = (FLocMetadataObject *)0x0;
  local_5e8.InfoMetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_5e8.KeyMetadataObj.Object = (FLocMetadataObject *)0x0;
  local_5e8.KeyMetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar6 = ::operator_new(0x50);
  local_698.Object = (FLocMetadataObject *)pFVar9;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    *(undefined8 *)(pFVar6 + 0x10) = 0;
    *(undefined8 *)(pFVar6 + 0x18) = 0;
    *(undefined8 *)(pFVar6 + 0x38) = 0;
    *(undefined8 *)(pFVar6 + 0x48) = 0;
    *(undefined8 *)pFVar6 = 0;
    *(undefined8 *)(pFVar6 + 8) = 0;
    *(undefined8 *)(pFVar6 + 0x20) = 0;
    *(undefined4 *)(pFVar6 + 0x28) = 0;
    *(undefined4 *)(pFVar6 + 0x2c) = 0x80;
    *(undefined4 *)(pFVar6 + 0x30) = 0xffffffff;
    *(undefined4 *)(pFVar6 + 0x34) = 0;
    *(undefined8 *)(pFVar6 + 0x40) = 0;
    local_698.Object = (FLocMetadataObject *)pFVar6;
  }
  TSharedPtr<FLocMetadataObject,1>::operator=<FLocMetadataObject>
            (&local_5e8.KeyMetadataObj,&local_698);
  bVar4 = FManifestContext::operator==(&local_4c8,&local_5e8);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_228,L"ContextEmptyA == ContextEmptyB");
    (*pcVar2)(pFVar1,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5e8.KeyMetadataObj.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5e8.InfoMetadataObj.SharedReferenceCount.ReferenceController);
  if (local_5e8.SourceLocation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e8.SourceLocation.Data.AllocatorInstance.Data);
  }
  if (local_5e8.Key.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e8.Key.Str.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4c8.KeyMetadataObj.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4c8.InfoMetadataObj.SharedReferenceCount.ReferenceController);
  if (local_4c8.SourceLocation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.SourceLocation.Data.AllocatorInstance.Data);
  }
  if (local_4c8.Key.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.Key.Str.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_898.KeyMetadataObj.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_898.InfoMetadataObj.SharedReferenceCount.ReferenceController);
  if (local_898.SourceLocation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_898.SourceLocation.Data.AllocatorInstance.Data);
  }
  if (local_898.Key.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_898.Key.Str.Data.AllocatorInstance.Data);
  }
  bVar4 = FManifestContext::operator<(&local_978,&local_798);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_218,L"ContextA < ContextB");
    (*pcVar2)(pFVar1,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
  }
  FManifestContext::FManifestContext(&local_738,&local_978);
  bVar4 = FManifestContext::operator<(&local_978,&local_738);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_208,L"ContextA < ContextAClone");
    (*pcVar2)(pFVar1,&local_208,0);
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
  }
  ::FString::ConcatFC(&local_8e8,(FString *)&local_738,L"A");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_8e8.Data.ArrayNum != 0) {
    FVar11.Data = local_8e8.Data.AllocatorInstance.Data;
  }
  local_828.Data.ArrayNum = local_8e8.Data.ArrayNum;
  local_828.Data.AllocatorInstance.Data = local_8e8.Data.AllocatorInstance.Data;
  local_8e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_828.Data.ArrayMax = local_8e8.Data.ArrayMax;
  local_8e8.Data.ArrayNum = 0;
  local_8e8.Data.ArrayMax = 0;
  local_818 = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar11.Data,0);
  ::FString::operator=((FString *)&local_738,&local_828);
  local_738.Key.Hash = local_818;
  local_818 = 0;
  if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_828.Data.AllocatorInstance.Data);
  }
  if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
  }
  FManifestContext::operator=(&local_738,&local_978);
  if ((local_738.KeyMetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar7 = local_738.KeyMetadataObj.Object;
  ::FString::FString(&local_1e8,L"ANewValue");
  ::FString::FString(&local_1f8,L"ANewKey");
  FLocMetadataObject::SetStringField(pFVar7,&local_1f8,&local_1e8);
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  bVar4 = FManifestContext::operator<(&local_738,&local_978);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"ContextAClone < ContextA");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  FManifestContext::operator=(&local_738,&local_978);
  if ((local_738.KeyMetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar7 = local_738.KeyMetadataObj.Object;
  ::FString::FString(&local_38,L"ZNewValue");
  ::FString::FString(&local_1c8,L"ZNewKey");
  FLocMetadataObject::SetStringField(pFVar7,&local_1c8,&local_38);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FManifestContext::operator=(&local_738,&local_978);
  if ((local_738.KeyMetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar7 = local_738.KeyMetadataObj.Object;
  ::FString::FString(&local_1a8,L"TargetPlurality");
  FLocMetadataObject::RemoveField(pFVar7,&local_1a8);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  bVar4 = FManifestContext::operator<(&local_738,&local_978);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_198,L"ContextAClone < ContextA");
    (*pcVar2)(pFVar1,&local_198,0);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  FManifestContext::operator=(&local_738,&local_978);
  if ((local_738.KeyMetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::FString(&local_178,L"A");
  ::FString::FString(&local_188,L"TargetPlurality");
  FLocMetadataObject::SetStringField(local_738.KeyMetadataObj.Object,&local_188,&local_178);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  bVar4 = FManifestContext::operator<(&local_738,&local_978);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_168,L"ContextAClone < ContextA");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  local_648.Key.Str.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_648.SourceLocation.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_648.SourceLocation.Data.ArrayNum = 0;
  local_648.SourceLocation.Data.ArrayMax = 0;
  local_7f8.SourceLocation.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7f8.SourceLocation.Data.ArrayNum = 0;
  local_7f8.SourceLocation.Data.ArrayMax = 0;
  local_648.Key.Str.Data.ArrayNum = 0;
  local_648.Key.Str.Data.ArrayMax = 0;
  local_648.Key.Hash = 0;
  local_648.PlatformName.ComparisonIndex.Value = 0;
  local_648.PlatformName.Number = 0;
  local_648.bIsOptional = false;
  local_648.InfoMetadataObj.Object = (FLocMetadataObject *)0x0;
  local_648.InfoMetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_648.KeyMetadataObj.Object = (FLocMetadataObject *)0x0;
  local_648.KeyMetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_7f8.Key.Str.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7f8.Key.Str.Data.ArrayNum = 0;
  local_7f8.Key.Str.Data.ArrayMax = 0;
  local_7f8.Key.Hash = 0;
  local_7f8.PlatformName.ComparisonIndex.Value = 0;
  local_7f8.PlatformName.Number = 0;
  local_7f8.bIsOptional = false;
  local_7f8.InfoMetadataObj.Object = (FLocMetadataObject *)0x0;
  local_7f8.InfoMetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_7f8.KeyMetadataObj.Object = (FLocMetadataObject *)0x0;
  local_7f8.KeyMetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  bVar4 = FManifestContext::operator<(&local_648,&local_7f8);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_158,L"ContextEmptyA < ContextEmptyB");
    (*pcVar2)(pFVar1,&local_158,0);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = ::operator_new(0x50);
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    *(undefined8 *)(pFVar6 + 0x10) = 0;
    *(undefined8 *)(pFVar6 + 0x18) = 0;
    *(undefined8 *)(pFVar6 + 0x38) = 0;
    *(undefined8 *)(pFVar6 + 0x48) = 0;
    *(undefined8 *)pFVar6 = 0;
    *(undefined8 *)(pFVar6 + 8) = 0;
    *(undefined8 *)(pFVar6 + 0x20) = 0;
    *(undefined4 *)(pFVar6 + 0x28) = 0;
    *(undefined4 *)(pFVar6 + 0x2c) = 0x80;
    *(undefined4 *)(pFVar6 + 0x30) = 0xffffffff;
    *(undefined4 *)(pFVar6 + 0x34) = 0;
    *(undefined8 *)(pFVar6 + 0x40) = 0;
    pFVar9 = pFVar6;
  }
  local_690.Object = (FLocMetadataObject *)pFVar9;
  TSharedPtr<FLocMetadataObject,1>::operator=<FLocMetadataObject>
            (&local_7f8.KeyMetadataObj,&local_690);
  bVar4 = FManifestContext::operator<(&local_648,&local_7f8);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_148,L"ContextEmptyA < ContextEmptyB");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = FManifestContext::operator<(&local_7f8,&local_648);
  if (bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_138,L"ContextEmptyB < ContextEmptyA");
    (*pcVar2)(pFVar1,&local_138,0);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
  }
  if ((local_7f8.KeyMetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar7 = local_7f8.KeyMetadataObj.Object;
  ::FString::FString(&local_118,L"AMetadataValue");
  ::FString::FString(&local_128,L"AMetadataKey");
  FLocMetadataObject::SetStringField(pFVar7,&local_128,&local_118);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  bVar4 = FManifestContext::operator<(&local_648,&local_7f8);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_108,L"ContextEmptyA < ContextEmptyB");
    (*pcVar2)(pFVar1,&local_108,0);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7f8.KeyMetadataObj.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7f8.InfoMetadataObj.SharedReferenceCount.ReferenceController);
  if (local_7f8.SourceLocation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7f8.SourceLocation.Data.AllocatorInstance.Data);
  }
  if (local_7f8.Key.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7f8.Key.Str.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_648.KeyMetadataObj.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_648.InfoMetadataObj.SharedReferenceCount.ReferenceController);
  if (local_648.SourceLocation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.SourceLocation.Data.AllocatorInstance.Data);
  }
  if (local_648.Key.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Key.Str.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_738.KeyMetadataObj.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_738.InfoMetadataObj.SharedReferenceCount.ReferenceController);
  if (local_738.SourceLocation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_738.SourceLocation.Data.AllocatorInstance.Data);
  }
  if (local_738.Key.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_738.Key.Str.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_798.KeyMetadataObj.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_798.InfoMetadataObj.SharedReferenceCount.ReferenceController);
  if (local_798.SourceLocation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_798.SourceLocation.Data.AllocatorInstance.Data);
  }
  if (local_798.Key.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_798.Key.Str.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_978.KeyMetadataObj.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_978.InfoMetadataObj.SharedReferenceCount.ReferenceController);
  if (local_978.SourceLocation.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_978.SourceLocation.Data.AllocatorInstance.Data);
  }
  if (local_978.Key.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_978.Key.Str.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_670.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_660.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_838.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_810.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_908.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_918.SharedReferenceCount.ReferenceController);
  return;
}

