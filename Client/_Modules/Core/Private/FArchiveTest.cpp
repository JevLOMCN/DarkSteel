// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141bc7540

EAutomationTestFlags __thiscall FArchiveTest::GetTestFlags(FArchiveTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bc7550

bool __thiscall FArchiveTest::IsStressTest(FArchiveTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bc7560

uint __thiscall FArchiveTest::GetRequiredDeviceNum(FArchiveTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bc7570

FString * __thiscall
FArchiveTest::GetTestSourceFileName(FArchiveTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Internationalization\\ArchiveTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bc75a0

int __thiscall FArchiveTest::GetTestSourceFileLine(FArchiveTest *this)

{
  return 0xf;
}

// GetTests @ 141bc75b0

/* WARNING: Removing unreachable block (ram,0x000141bc772e) */

void __thiscall
FArchiveTest::GetTests
          (FArchiveTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bc7750

bool __thiscall FArchiveTest::RunTest(FArchiveTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bc7780

FString * __thiscall
FArchiveTest::GetBeautifiedTestName(FArchiveTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FArchiveTest @ 141be1cc0

FArchiveTest * __thiscall FArchiveTest::FArchiveTest(FArchiveTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FArchiveTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[EditorContext][ClientContext][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::Internationalization Archive");
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

// TestBody @ 141c0d0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall FArchiveTest::TestBody(FArchiveTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FLocMetadataObject *pFVar8;
  FString *pFVar9;
  FLocMetadataObject *pFVar10;
  FAutomationTestFramework *pFVar11;
  TSharedPtr<FArchiveEntry,1> *pTVar12;
  TSharedPtr<FLocMetadataObject,1> *pTVar13;
  FArchiveEntry *pFVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  wchar_t *pwVar17;
  undefined8 uVar18;
  uint uVar19;
  FLocMetadataObject *pFVar20;
  undefined1 *puVar21;
  undefined1 auStackY_df8 [32];
  FString local_db8;
  TSharedPtr<FArchiveEntry,1> local_da8;
  FString local_d98;
  TSharedPtr<FLocMetadataObject,1> local_d88;
  TSharedPtr<FArchiveEntry,1> local_d78;
  TSharedPtr<FArchiveEntry,1> local_d68;
  FLocItem local_d58;
  TSharedPtr<FLocMetadataObject,1> local_d38;
  FLocKey local_d28;
  FLocKey local_d10;
  FLocKey local_cf8;
  FLocKey local_ce0;
  FLocKey local_cc8;
  FLocKey local_cb0;
  FString local_c98;
  FLocItem local_c88;
  FLocItem local_c68;
  TSharedPtr<FArchiveEntry,1> local_c48;
  TRawPtrProxy<FLocMetadataObject> local_c38;
  TRawPtrProxy<FLocMetadataObject> local_c30;
  TRawPtrProxy<FLocMetadataObject> local_c28;
  TRawPtrProxy<FLocMetadataObject> local_c20;
  TRawPtrProxy<FLocMetadataObject> local_c18;
  TRawPtrProxy<FLocMetadataObject> local_c10;
  TRawPtrProxy<FLocMetadataObject> local_c08;
  TRawPtrProxy<FLocMetadataObject> local_c00;
  TRawPtrProxy<FLocMetadataObject> local_bf8;
  TSharedPtr<FArchiveEntry,1> local_bf0;
  TSharedPtr<FLocMetadataObject,1> local_be0;
  FLocKey local_bd0;
  FLocKey local_bb8;
  FLocKey local_ba0;
  FLocKey local_b88;
  FLocKey local_b70;
  FLocKey local_b58;
  FLocKey local_b40;
  FLocKey local_b28;
  FLocKey local_b10;
  FLocKey local_af8;
  FLocKey local_ae0;
  FLocKey local_ac8;
  FLocKey local_ab0;
  FLocKey local_a98;
  FLocKey local_a80;
  FLocKey local_a68;
  FLocKey local_a50;
  FLocKey local_a38;
  FLocKey local_a20;
  FLocKey local_a08;
  FLocKey local_9f0;
  FLocKey local_9d8;
  FLocKey local_9c0;
  FLocKey local_9a8;
  undefined1 local_990 [12];
  uint local_984;
  longlong local_980;
  uint local_978;
  int local_974;
  undefined1 local_968 [12];
  uint local_95c;
  longlong local_958;
  uint local_950;
  int local_94c;
  FString local_940;
  FString local_930;
  FString local_920;
  FString local_910;
  FString local_900;
  FString local_8f0;
  FString local_8e0;
  FString local_8d0;
  FString local_8c0;
  FString local_8b0;
  FString local_8a0;
  FString local_890;
  FString local_880;
  FString local_870;
  FString local_860;
  FString local_850;
  FString local_840;
  FString local_830;
  FString local_820;
  FString local_810;
  FString local_800;
  FString local_7f0;
  FString local_7e0;
  FString local_7d0;
  FString local_7c0;
  FString local_7b0;
  FString local_7a0;
  FString local_790;
  FString local_780;
  FString local_770;
  FString local_760;
  FString local_750;
  FString local_740;
  FString local_730;
  FString local_720;
  FString local_710;
  FString local_700;
  FString local_6f0;
  FString local_6e0;
  FString local_6d0;
  FString local_6c0;
  TSharedPtr<FLocMetadataObject,1> local_6b0;
  FString local_6a0;
  FString local_690;
  FString local_680;
  FString local_670;
  FString local_660;
  FString local_650;
  FString local_640;
  FString local_630;
  FString local_620;
  FString local_610;
  FString local_600;
  uint local_5f0;
  FString local_5e8;
  uint local_5d8;
  FString local_5d0;
  uint local_5c0;
  FString local_5b8;
  uint local_5a8;
  FString local_5a0;
  uint local_590;
  TSharedPtr<FLocMetadataObject,1> local_588;
  TSharedPtr<FLocMetadataObject,1> local_578;
  TSharedPtr<FArchiveEntry,1> local_568;
  FString local_558;
  TSharedPtr<FLocMetadataObject,1> local_548;
  TSharedPtr<FLocMetadataObject,1> local_538;
  TSharedPtr<FArchiveEntry,1> local_528;
  TSharedPtr<FLocMetadataObject,1> local_518;
  TSharedPtr<FLocMetadataObject,1> local_508;
  TSharedPtr<FLocMetadataObject,1> local_4f8;
  TSharedPtr<FLocMetadataObject,1> local_4e8;
  TSharedPtr<FLocMetadataObject,1> local_4d8;
  TSharedPtr<FLocMetadataObject,1> local_4c8;
  TSharedPtr<FLocMetadataObject,1> local_4b8;
  TSharedPtr<FArchiveEntry,1> local_4a8;
  TSharedPtr<FLocMetadataObject,1> local_498;
  TSharedPtr<FArchiveEntry,1> local_488;
  TSharedPtr<FLocMetadataObject,1> local_478;
  TSharedPtr<FArchiveEntry,1> local_468;
  TSharedPtr<FLocMetadataObject,1> local_458;
  FLocKey local_448;
  FLocKey local_430;
  FLocKey local_418;
  FLocKey local_400;
  FString local_3e8;
  TSharedPtr<FLocMetadataObject,1> local_3d8;
  TSharedPtr<FLocMetadataObject,1> local_3c8;
  TSharedPtr<FLocMetadataObject,1> local_3b8;
  FString local_3a8;
  undefined1 local_398 [8];
  undefined1 local_390 [32];
  void *local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  void *local_350;
  undefined4 local_348;
  undefined1 local_340 [32];
  void *local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  void *local_300;
  undefined4 local_2f8;
  undefined1 local_2e8 [8];
  undefined1 local_2e0 [32];
  void *local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  void *local_2a0;
  undefined4 local_298;
  undefined1 local_290 [32];
  void *local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  void *local_250;
  undefined4 local_248;
  undefined1 local_238 [8];
  undefined1 local_230 [64];
  void *local_1f0;
  undefined4 local_1e8;
  undefined1 local_1e0 [64];
  void *local_1a0;
  undefined4 local_198;
  undefined1 local_188 [8];
  undefined1 local_180 [64];
  void *local_140;
  undefined4 local_138;
  undefined1 local_130 [64];
  void *local_f0;
  undefined4 local_e8;
  FInternationalizationArchive local_d8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_df8;
  pFVar8 = ::operator_new(0x50);
  pFVar20 = (FLocMetadataObject *)0x0;
  local_bf8.Object = pFVar20;
  if (pFVar8 != (FLocMetadataObject *)0x0) {
    *(undefined8 *)&(pFVar8->Values).field_0x10 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x18 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x38 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x48 = 0;
    *(undefined8 *)&pFVar8->Values = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar8->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar8->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar8->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar8->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x40 = 0;
    local_bf8.Object = pFVar8;
  }
  TSharedPtr<FLocMetadataObject,1>::TSharedPtr<FLocMetadataObject,1><FLocMetadataObject>
            (&local_d88,&local_bf8);
  pFVar8 = ::operator_new(0x50);
  local_c38.Object = pFVar20;
  if (pFVar8 != (FLocMetadataObject *)0x0) {
    *(undefined8 *)&(pFVar8->Values).field_0x10 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x18 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x38 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x48 = 0;
    *(undefined8 *)&pFVar8->Values = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar8->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar8->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar8->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar8->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x40 = 0;
    local_c38.Object = pFVar8;
  }
  TSharedPtr<FLocMetadataObject,1>::TSharedPtr<FLocMetadataObject,1><FLocMetadataObject>
            (&local_d38,&local_c38);
  pFVar8 = ::operator_new(0x50);
  local_c30.Object = pFVar20;
  if (pFVar8 != (FLocMetadataObject *)0x0) {
    *(undefined8 *)&(pFVar8->Values).field_0x10 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x18 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x38 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x48 = 0;
    *(undefined8 *)&pFVar8->Values = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar8->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar8->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar8->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar8->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x40 = 0;
    local_c30.Object = pFVar8;
  }
  TSharedPtr<FLocMetadataObject,1>::TSharedPtr<FLocMetadataObject,1><FLocMetadataObject>
            (&local_be0,&local_c30);
  pFVar8 = ::operator_new(0x50);
  local_c28.Object = pFVar20;
  if (pFVar8 != (FLocMetadataObject *)0x0) {
    *(undefined8 *)&(pFVar8->Values).field_0x10 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x18 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x38 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x48 = 0;
    *(undefined8 *)&pFVar8->Values = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar8->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar8->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar8->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar8->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x40 = 0;
    local_c28.Object = pFVar8;
  }
  TSharedPtr<FLocMetadataObject,1>::TSharedPtr<FLocMetadataObject,1><FLocMetadataObject>
            (&local_6b0,&local_c28);
  pFVar8 = TSharedPtr<FLocMetadataObject,1>::operator->(&local_d88);
  ::FString::FString(&local_620,L"Masculine");
  ::FString::FString(&local_6d0,L"Gender");
  FLocMetadataObject::SetStringField(pFVar8,&local_6d0,&local_620);
  if (local_6d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6d0.Data.AllocatorInstance.Data);
  }
  if (local_620.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_620.Data.AllocatorInstance.Data);
  }
  pFVar8 = TSharedPtr<FLocMetadataObject,1>::operator->(&local_d88);
  ::FString::FString(&local_930,L"Singular");
  ::FString::FString(&local_940,L"Plurality");
  FLocMetadataObject::SetStringField(pFVar8,&local_940,&local_930);
  if (local_940.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_940.Data.AllocatorInstance.Data);
  }
  if (local_930.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_930.Data.AllocatorInstance.Data);
  }
  pFVar8 = TSharedPtr<FLocMetadataObject,1>::operator->(&local_d88);
  ::FString::FString(&local_910,L"Masculine");
  ::FString::FString(&local_920,L"TargetGender");
  FLocMetadataObject::SetStringField(pFVar8,&local_920,&local_910);
  if (local_920.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_920.Data.AllocatorInstance.Data);
  }
  if (local_910.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_910.Data.AllocatorInstance.Data);
  }
  pFVar8 = TSharedPtr<FLocMetadataObject,1>::operator->(&local_d88);
  ::FString::FString(&local_8f0,L"Singular");
  ::FString::FString(&local_900,L"TargetPlurality");
  FLocMetadataObject::SetStringField(pFVar8,&local_900,&local_8f0);
  if (local_900.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_900.Data.AllocatorInstance.Data);
  }
  if (local_8f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8f0.Data.AllocatorInstance.Data);
  }
  pFVar8 = TSharedPtr<FLocMetadataObject,1>::operator->(&local_d38);
  ::FString::FString(&local_8d0,L"Masculine");
  ::FString::FString(&local_8e0,L"Gender");
  FLocMetadataObject::SetStringField(pFVar8,&local_8e0,&local_8d0);
  if (local_8e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e0.Data.AllocatorInstance.Data);
  }
  if (local_8d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8d0.Data.AllocatorInstance.Data);
  }
  pFVar8 = TSharedPtr<FLocMetadataObject,1>::operator->(&local_d38);
  ::FString::FString(&local_8b0,L"Singular");
  ::FString::FString(&local_8c0,L"Plurality");
  FLocMetadataObject::SetStringField(pFVar8,&local_8c0,&local_8b0);
  if (local_8c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c0.Data.AllocatorInstance.Data);
  }
  if (local_8b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b0.Data.AllocatorInstance.Data);
  }
  pFVar8 = TSharedPtr<FLocMetadataObject,1>::operator->(&local_d38);
  ::FString::FString(&local_890,L"Feminine");
  ::FString::FString(&local_8a0,L"TargetGender");
  FLocMetadataObject::SetStringField(pFVar8,&local_8a0,&local_890);
  if (local_8a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a0.Data.AllocatorInstance.Data);
  }
  if (local_890.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_890.Data.AllocatorInstance.Data);
  }
  pFVar8 = TSharedPtr<FLocMetadataObject,1>::operator->(&local_d38);
  ::FString::FString(&local_870,L"Singular");
  ::FString::FString(&local_880,L"TargetPlurality");
  FLocMetadataObject::SetStringField(pFVar8,&local_880,&local_870);
  if (local_880.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_880.Data.AllocatorInstance.Data);
  }
  if (local_870.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_870.Data.AllocatorInstance.Data);
  }
  pFVar8 = TSharedPtr<FLocMetadataObject,1>::operator->(&local_be0);
  ::FString::FString(&local_860,L"*IsMature");
  FLocMetadataObject::SetBoolField(pFVar8,&local_860,false);
  if (local_860.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_860.Data.AllocatorInstance.Data);
  }
  pFVar8 = TSharedPtr<FLocMetadataObject,1>::operator->(&local_6b0);
  ::FString::FString(&local_850,L"*IsMature");
  FLocMetadataObject::SetBoolField(pFVar8,&local_850,true);
  if (local_850.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_850.Data.AllocatorInstance.Data);
  }
  pFVar9 = ::FString::FString(&local_3e8,L"TextA");
  FLocItem::FLocItem(&local_d58,pFVar9);
  pFVar8 = ::operator_new(0x50);
  local_c20.Object = pFVar20;
  if (pFVar8 != (FLocMetadataObject *)0x0) {
    pFVar10 = TSharedPtr<FLocMetadataObject,1>::operator*<FLocMetadataObject>(&local_be0);
    local_c20.Object = FLocMetadataObject::FLocMetadataObject(pFVar8,pFVar10);
  }
  TSharedPtr<FLocMetadataObject,1>::operator=<FLocMetadataObject>(&local_d58.MetadataObj,&local_c20)
  ;
  FLocItem::FLocItem(&local_c88,&local_d58);
  ::FString::operator=(&local_c88.Text,L"TranslatedTextA");
  ::FString::FString(&local_db8,L"TestNamespace");
  ::FString::FString(&local_d98,L"TextA");
  FInternationalizationArchive::FInternationalizationArchive(&local_d8);
  local_4f8.Object = (FLocMetadataObject *)0x0;
  local_4f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  ::FString::FString(&local_ba0.Str,&local_d98);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_ba0.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_ba0.Str.Data.AllocatorInstance.Data;
  }
  local_ba0.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  ::FString::FString(&local_bb8.Str,&local_db8);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_bb8.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_bb8.Str.Data.AllocatorInstance.Data;
  }
  local_bb8.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  FInternationalizationArchive::AddEntry
            (&local_d8,&local_bb8,&local_ba0,&local_d58,&local_c88,&local_4f8,true);
  if (local_bb8.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bb8.Str.Data.AllocatorInstance.Data);
  }
  if (local_ba0.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ba0.Str.Data.AllocatorInstance.Data);
  }
  local_498.Object = (FLocMetadataObject *)0x0;
  local_498.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  ::FString::FString(&local_b70.Str,&local_d98);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_b70.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_b70.Str.Data.AllocatorInstance.Data;
  }
  local_b70.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  ::FString::FString(&local_b88.Str,&local_db8);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_b88.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_b88.Str.Data.AllocatorInstance.Data;
  }
  local_b88.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  bVar5 = FInternationalizationArchive::AddEntry
                    (&local_d8,&local_b88,&local_b70,&local_d58,&local_c88,&local_498,false);
  if (local_b88.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b88.Str.Data.AllocatorInstance.Data);
  }
  if (local_b70.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b70.Str.Data.AllocatorInstance.Data);
  }
  if (!bVar5) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_840,L"AddEntry result = true");
    (*pcVar2)(pFVar1,&local_840,0);
    if (local_840.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_840.Data.AllocatorInstance.Data);
    }
  }
  FInternationalizationArchive::GetEntriesBySourceTextIterator
            (&local_d8,(TConstIterator *)local_968);
  pFVar8 = pFVar20;
  if (local_94c < *(int *)(local_958 + 0x18)) {
    do {
      local_950 = local_950 & ~local_95c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_968 + 8));
      uVar19 = (int)pFVar8 + 1;
      pFVar8 = (FLocMetadataObject *)(ulonglong)uVar19;
    } while (local_94c < *(int *)(local_958 + 0x18));
    if (uVar19 != 1) goto LAB_141c0d983;
  }
  else {
LAB_141c0d983:
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_830,L"EntryCount == 1");
    (*pcVar2)(pFVar1,&local_830,0);
    if (local_830.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_830.Data.AllocatorInstance.Data);
    }
  }
  local_4e8.Object = (FLocMetadataObject *)0x0;
  local_4e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  ::FString::FString(&local_b40.Str,&local_d98);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_b40.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_b40.Str.Data.AllocatorInstance.Data;
  }
  local_b40.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  ::FString::FString(&local_b58.Str,&local_db8);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_b58.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_b58.Str.Data.AllocatorInstance.Data;
  }
  local_b58.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  FInternationalizationArchive::FindEntryByKey
            (&local_d8,&local_bf0,&local_b58,&local_b40,&local_4e8);
  if (local_b58.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b58.Str.Data.AllocatorInstance.Data);
  }
  if (local_b40.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b40.Str.Data.AllocatorInstance.Data);
  }
  if (local_bf0.Object == (FArchiveEntry *)0x0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_820,L"FArchiveEntry could not find entry using FindEntryByKey.");
    (*pcVar2)(pFVar1,&local_820,0);
LAB_141c0db21:
    if (local_820.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_820.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar14 = TSharedPtr<FArchiveEntry,1>::operator->(&local_bf0);
    if (pFVar14->bIsOptional != true) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar1 = pFVar11->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_810,L"FoundEntry->Namespace == Namespace");
      (*pcVar2)(pFVar1,&local_810,0);
      local_820.Data.AllocatorInstance.Data = local_810.Data.AllocatorInstance.Data;
      goto LAB_141c0db21;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_bf0.SharedReferenceCount.ReferenceController);
  FInternationalizationArchive::~FInternationalizationArchive(&local_d8);
  uVar4 = _UNK_150631d98;
  uVar18 = ___xmm_00000000ffffffff0000008000000000;
  local_4d8.Object = local_d88.Object;
  local_4d8.SharedReferenceCount.ReferenceController =
       local_d88.SharedReferenceCount.ReferenceController;
  local_238[0] = AddedKeys;
  local_230._0_8_ = 0;
  local_230._8_8_ = 0;
  local_230._32_8_ = 0;
  local_230._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_230._48_8_ = _UNK_150631d98;
  local_1f0 = (void *)0x0;
  local_1e8 = 0;
  local_1e0._0_8_ = 0;
  local_1e0._8_8_ = 0;
  local_1e0._32_8_ = 0;
  local_1e0._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_1e0._48_8_ = _UNK_150631d98;
  local_1a0 = (void *)0x0;
  local_198 = 0;
  if (local_d88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_b10.Str,&local_d98);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_b10.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_b10.Str.Data.AllocatorInstance.Data;
  }
  local_b10.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  ::FString::FString(&local_b28.Str,&local_db8);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_b28.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_b28.Str.Data.AllocatorInstance.Data;
  }
  local_b28.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  FInternationalizationArchive::AddEntry
            ((FInternationalizationArchive *)local_238,&local_b28,&local_b10,&local_d58,&local_c88,
             &local_4d8,false);
  if (local_b28.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b28.Str.Data.AllocatorInstance.Data);
  }
  if (local_b10.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b10.Str.Data.AllocatorInstance.Data);
  }
  local_4c8.Object = local_d88.Object;
  local_4c8.SharedReferenceCount.ReferenceController =
       local_d88.SharedReferenceCount.ReferenceController;
  if (local_d88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_ae0.Str,&local_d98);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_ae0.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_ae0.Str.Data.AllocatorInstance.Data;
  }
  local_ae0.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  ::FString::FString(&local_af8.Str,&local_db8);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_af8.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_af8.Str.Data.AllocatorInstance.Data;
  }
  local_af8.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  FInternationalizationArchive::FindEntryByKey
            ((FInternationalizationArchive *)local_238,&local_da8,&local_af8,&local_ae0,&local_4c8);
  if (local_af8.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_af8.Str.Data.AllocatorInstance.Data);
  }
  if (local_ae0.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ae0.Str.Data.AllocatorInstance.Data);
  }
  if (local_da8.Object == (FArchiveEntry *)0x0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_800,L"FArchiveEntry could not find entry using FindEntryByKey.");
    (*pcVar2)(pFVar1,&local_800,0);
LAB_141c0e101:
    if (local_800.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_800.Data.AllocatorInstance.Data);
    }
  }
  else {
    if ((local_da8.Object == (FArchiveEntry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar14 = local_da8.Object;
    ::FString::FString(&local_600,&local_db8);
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_600.Data.ArrayNum != 0) {
      FVar16.Data = local_600.Data.AllocatorInstance.Data;
    }
    local_5f0 = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
    if ((pFVar14->Namespace).Hash == local_5f0) {
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_600.Data.ArrayNum != 0) {
        FVar16.Data = local_600.Data.AllocatorInstance.Data;
      }
      if ((pFVar14->Namespace).Str.Data.ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar14->Namespace).Str.Data.AllocatorInstance.Data;
      }
      iVar7 = wcscmp(pwVar17,(wchar_t *)FVar16.Data);
      if (iVar7 != 0) goto LAB_141c0de51;
      bVar5 = false;
    }
    else {
LAB_141c0de51:
      bVar5 = true;
    }
    if (local_600.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_600.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar1 = pFVar11->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_7f0,L"FoundEntry->Namespace == Namespace");
      (*pcVar2)(pFVar1,&local_7f0,0);
      if (local_7f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7f0.Data.AllocatorInstance.Data);
      }
    }
    if ((local_da8.Object == (FArchiveEntry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar5 = FLocItem::operator==(&(local_da8.Object)->Source,&local_d58);
    if (!bVar5) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar1 = pFVar11->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_630,L"FoundEntry->Source == Source");
      (*pcVar2)(pFVar1,&local_630,0);
      if (local_630.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_630.Data.AllocatorInstance.Data);
      }
    }
    if ((local_da8.Object == (FArchiveEntry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar5 = FLocItem::operator==(&(local_da8.Object)->Translation,&local_c88);
    if (!bVar5) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar1 = pFVar11->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_640,L"FoundEntry->Translation == Translation");
      (*pcVar2)(pFVar1,&local_640,0);
      if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_640.Data.AllocatorInstance.Data);
      }
    }
    if ((local_da8.Object == (FArchiveEntry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar8 = local_d88.Object;
    if (((local_da8.Object)->KeyMetadataObj).Object == local_d88.Object) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar1 = pFVar11->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_650,L"FArchiveEntry KeyMetadataObj is not a unique object.");
      (*pcVar2)(pFVar1,&local_650,0);
      if (local_650.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_650.Data.AllocatorInstance.Data);
      }
    }
    if ((local_da8.Object == (FArchiveEntry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar10 = TSharedPtr<FLocMetadataObject,1>::operator*<FLocMetadataObject>
                        (&(local_da8.Object)->KeyMetadataObj);
    if ((pFVar8 == (FLocMetadataObject *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar5 = FLocMetadataObject::operator==(pFVar10,pFVar8);
    if (!bVar5) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar1 = pFVar11->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_7e0,L"FoundEntry->KeyMetadataObj == KeyMetadataA");
      (*pcVar2)(pFVar1,&local_7e0,0);
      local_800.Data.AllocatorInstance.Data = local_7e0.Data.AllocatorInstance.Data;
      goto LAB_141c0e101;
    }
  }
  local_4b8.Object = (FLocMetadataObject *)0x0;
  local_4b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  ::FString::FString(&local_ab0.Str,&local_d98);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_ab0.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_ab0.Str.Data.AllocatorInstance.Data;
  }
  local_ab0.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  ::FString::FString(&local_ac8.Str,&local_db8);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_ac8.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_ac8.Str.Data.AllocatorInstance.Data;
  }
  local_ac8.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  pTVar12 = FInternationalizationArchive::FindEntryByKey
                      ((FInternationalizationArchive *)local_238,&local_4a8,&local_ac8,&local_ab0,
                       &local_4b8);
  if (&local_da8 != pTVar12) {
    local_da8.Object = pTVar12->Object;
    pTVar12->Object = (FArchiveEntry *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_da8.SharedReferenceCount,&pTVar12->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4a8.SharedReferenceCount.ReferenceController);
  if (local_ac8.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ac8.Str.Data.AllocatorInstance.Data);
  }
  if (local_ab0.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ab0.Str.Data.AllocatorInstance.Data);
  }
  if (local_da8.Object != (FArchiveEntry *)0x0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_660,L"!FoundEntry.IsValid()");
    (*pcVar2)(pFVar1,&local_660,0);
    if (local_660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_660.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = ::operator_new(0x50);
  local_c18.Object = pFVar20;
  if (pFVar8 != (FLocMetadataObject *)0x0) {
    *(undefined8 *)&(pFVar8->Values).field_0x10 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x18 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x38 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x48 = 0;
    *(undefined8 *)&pFVar8->Values = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar8->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar8->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar8->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar8->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x40 = 0;
    local_c18.Object = pFVar8;
  }
  pTVar13 = TSharedPtr<FLocMetadataObject,1>::TSharedPtr<FLocMetadataObject,1><FLocMetadataObject>
                      (&local_3d8,&local_c18);
  FLocKey::FLocKey(&local_430,&local_d98);
  FLocKey::FLocKey(&local_448,&local_db8);
  pTVar12 = FInternationalizationArchive::FindEntryByKey
                      ((FInternationalizationArchive *)local_238,&local_488,&local_448,&local_430,
                       pTVar13);
  TSharedPtr<FArchiveEntry,1>::operator=(&local_da8,pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_488.SharedReferenceCount.ReferenceController);
  if (local_448.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Str.Data.AllocatorInstance.Data);
  }
  if (local_430.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_430.Str.Data.AllocatorInstance.Data);
  }
  if (local_da8.Object != (FArchiveEntry *)0x0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_610,L"!FoundEntry.IsValid()");
    (*pcVar2)(pFVar1,&local_610,0);
    if (local_610.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_610.Data.AllocatorInstance.Data);
    }
  }
  local_478.Object = local_d38.Object;
  local_478.SharedReferenceCount.ReferenceController =
       local_d38.SharedReferenceCount.ReferenceController;
  if (local_d38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_a80.Str,&local_d98);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_a80.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_a80.Str.Data.AllocatorInstance.Data;
  }
  local_a80.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  ::FString::FString(&local_a98.Str,&local_db8);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_a98.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_a98.Str.Data.AllocatorInstance.Data;
  }
  local_a98.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  pTVar12 = FInternationalizationArchive::FindEntryByKey
                      ((FInternationalizationArchive *)local_238,&local_468,&local_a98,&local_a80,
                       &local_478);
  if (&local_da8 != pTVar12) {
    local_da8.Object = pTVar12->Object;
    pTVar12->Object = (FArchiveEntry *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_da8.SharedReferenceCount,&pTVar12->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_468.SharedReferenceCount.ReferenceController);
  if (local_a98.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a98.Str.Data.AllocatorInstance.Data);
  }
  if (local_a80.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a80.Str.Data.AllocatorInstance.Data);
  }
  if (local_da8.Object != (FArchiveEntry *)0x0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_680,L"!FoundEntry.IsValid()");
    (*pcVar2)(pFVar1,&local_680,0);
    if (local_680.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_680.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_da8.SharedReferenceCount.ReferenceController);
  local_198 = 0;
  if (local_1a0 != (void *)0x0) {
    FMemory::Free(local_1a0);
  }
  TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1e0);
  local_1e8 = 0;
  if (local_1f0 != (void *)0x0) {
    FMemory::Free(local_1f0);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_230);
  local_2e8[0] = AddedKeys;
  local_2e0._0_8_ = (FScriptContainerElement *)0x0;
  local_2e0._8_8_ = 0;
  local_2c0 = (void *)0x0;
  local_2b8 = uVar18;
  uStack_2b0 = uVar4;
  local_2a0 = (void *)0x0;
  local_298 = 0;
  local_290._0_8_ = (FScriptContainerElement *)0x0;
  local_290._8_8_ = 0;
  local_270 = (void *)0x0;
  local_268 = uVar18;
  uStack_260 = uVar4;
  local_250 = (void *)0x0;
  local_248 = 0;
  pFVar8 = ::operator_new(0x50);
  local_c10.Object = pFVar20;
  if (pFVar8 != (FLocMetadataObject *)0x0) {
    *(undefined8 *)&(pFVar8->Values).field_0x10 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x18 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x38 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x48 = 0;
    *(undefined8 *)&pFVar8->Values = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar8->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar8->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar8->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar8->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x40 = 0;
    local_c10.Object = pFVar8;
  }
  pTVar13 = TSharedPtr<FLocMetadataObject,1>::TSharedPtr<FLocMetadataObject,1><FLocMetadataObject>
                      (&local_3c8,&local_c10);
  FVar16.Data = local_d98.Data.AllocatorInstance.Data;
  iVar7 = local_d98.Data.ArrayNum;
  local_cc8.Str.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_cc8.Str.Data.ArrayNum = iVar7;
  if (iVar7 == 0) {
    local_cc8.Str.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,0,(ForAnyElementType *)&local_cc8,iVar7,&local_cc8.Str.Data.ArrayMax);
    memcpy(local_cc8.Str.Data.AllocatorInstance.Data,FVar16.Data,(longlong)iVar7 * 2);
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_cc8.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_cc8.Str.Data.AllocatorInstance.Data;
  }
  local_cc8.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  FVar16.Data = local_db8.Data.AllocatorInstance.Data;
  iVar7 = local_db8.Data.ArrayNum;
  local_cb0.Str.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_cb0.Str.Data.ArrayNum = iVar7;
  if (iVar7 == 0) {
    local_cb0.Str.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,0,(ForAnyElementType *)&local_cb0,iVar7,&local_cb0.Str.Data.ArrayMax);
    memcpy(local_cb0.Str.Data.AllocatorInstance.Data,FVar16.Data,(longlong)iVar7 * 2);
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_cb0.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_cb0.Str.Data.AllocatorInstance.Data;
  }
  local_cb0.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  FInternationalizationArchive::AddEntry
            ((FInternationalizationArchive *)local_2e8,&local_cb0,&local_cc8,&local_d58,&local_c88,
             pTVar13,false);
  if (local_cb0.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cb0.Str.Data.AllocatorInstance.Data);
  }
  if (local_cc8.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cc8.Str.Data.AllocatorInstance.Data);
  }
  FVar16.Data = local_d98.Data.AllocatorInstance.Data;
  iVar7 = local_d98.Data.ArrayNum;
  local_cf8.Str.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_458.Object = (FLocMetadataObject *)0x0;
  local_458.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_cf8.Str.Data.ArrayNum = iVar7;
  if (iVar7 == 0) {
    local_cf8.Str.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,0,(ForAnyElementType *)&local_cf8,iVar7,&local_cf8.Str.Data.ArrayMax);
    memcpy(local_cf8.Str.Data.AllocatorInstance.Data,FVar16.Data,(longlong)iVar7 * 2);
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_cf8.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_cf8.Str.Data.AllocatorInstance.Data;
  }
  local_cf8.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  FVar16.Data = local_db8.Data.AllocatorInstance.Data;
  iVar7 = local_db8.Data.ArrayNum;
  local_ce0.Str.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ce0.Str.Data.ArrayNum = iVar7;
  if (iVar7 == 0) {
    local_ce0.Str.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,0,(ForAnyElementType *)&local_ce0,iVar7,&local_ce0.Str.Data.ArrayMax);
    memcpy(local_ce0.Str.Data.AllocatorInstance.Data,FVar16.Data,(longlong)iVar7 * 2);
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_ce0.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_ce0.Str.Data.AllocatorInstance.Data;
  }
  local_ce0.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  FInternationalizationArchive::FindEntryByKey
            ((FInternationalizationArchive *)local_2e8,&local_c48,&local_ce0,&local_cf8,&local_458);
  if (local_ce0.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ce0.Str.Data.AllocatorInstance.Data);
  }
  if (local_cf8.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cf8.Str.Data.AllocatorInstance.Data);
  }
  if (local_c48.Object == (FArchiveEntry *)0x0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_690,L"FArchiveEntry could not find entry using FindEntryByKey.");
    (*pcVar2)(pFVar1,&local_690,0);
LAB_141c0e9e1:
    if (local_690.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_690.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar14 = TSharedPtr<FArchiveEntry,1>::operator->(&local_c48);
    ::FString::FString(&local_5e8,&local_db8);
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_5e8.Data.ArrayNum != 0) {
      FVar16.Data = local_5e8.Data.AllocatorInstance.Data;
    }
    local_5d8 = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
    if ((pFVar14->Namespace).Hash == local_5d8) {
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_5e8.Data.ArrayNum != 0) {
        FVar16.Data = local_5e8.Data.AllocatorInstance.Data;
      }
      if ((pFVar14->Namespace).Str.Data.ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar14->Namespace).Str.Data.AllocatorInstance.Data;
      }
      iVar7 = wcscmp(pwVar17,(wchar_t *)FVar16.Data);
      if (iVar7 != 0) goto LAB_141c0e92d;
      bVar5 = false;
    }
    else {
LAB_141c0e92d:
      bVar5 = true;
    }
    if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar1 = pFVar11->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_6a0,L"FoundEntry->Namespace == Namespace");
      (*pcVar2)(pFVar1,&local_6a0,0);
      if (local_6a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
      }
    }
    pFVar14 = TSharedPtr<FArchiveEntry,1>::operator->(&local_c48);
    bVar5 = FLocItem::operator==(&pFVar14->Source,&local_d58);
    if (!bVar5) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar1 = pFVar11->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_6e0,L"FoundEntry->Source == Source");
      (*pcVar2)(pFVar1,&local_6e0,0);
      local_690.Data.AllocatorInstance.Data = local_6e0.Data.AllocatorInstance.Data;
      goto LAB_141c0e9e1;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c48.SharedReferenceCount.ReferenceController);
  local_248 = 0;
  if (local_250 != (void *)0x0) {
    FMemory::Free(local_250);
  }
  TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_290,0,local_290._8_4_);
  bVar5 = local_290._12_4_ != 0;
  local_290._8_8_ = (ulonglong)(uint)local_290._12_4_ << 0x20;
  if (bVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)local_290,0,(int *)(local_290 + 0xc));
  }
  uVar19 = local_268._4_4_;
  uStack_260 = 0xffffffff;
  local_268 = (ulonglong)local_268._4_4_ << 0x20;
  if (0x80 < uVar19) {
    local_268 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_290 + 0x10),0);
  }
  if (local_270 != (void *)0x0) {
    FMemory::Free(local_270);
  }
  if ((FScriptContainerElement *)local_290._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_290._0_8_);
  }
  local_298 = 0;
  if (local_2a0 != (void *)0x0) {
    FMemory::Free(local_2a0);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_2e0,0,local_2e0._8_4_);
  bVar5 = local_2e0._12_4_ != 0;
  local_2e0._8_8_ = (ulonglong)(uint)local_2e0._12_4_ << 0x20;
  if (bVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_2e0,0,(int *)(local_2e0 + 0xc));
  }
  uVar19 = local_2b8._4_4_;
  uStack_2b0 = 0xffffffff;
  local_2b8 = (ulonglong)local_2b8._4_4_ << 0x20;
  if (0x80 < uVar19) {
    local_2b8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_2e0 + 0x10),0);
  }
  if (local_2c0 != (void *)0x0) {
    FMemory::Free(local_2c0);
  }
  if ((FScriptContainerElement *)local_2e0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2e0._0_8_);
  }
  local_398[0] = AddedKeys;
  local_390._0_8_ = (FScriptContainerElement *)0x0;
  local_390._8_8_ = 0;
  local_548.Object = (FLocMetadataObject *)0x0;
  local_548.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_370 = (void *)0x0;
  local_368 = uVar18;
  uStack_360 = uVar4;
  local_350 = (void *)0x0;
  local_348 = 0;
  local_340._0_8_ = (FScriptContainerElement *)0x0;
  local_340._8_8_ = 0;
  local_320 = (void *)0x0;
  local_318 = uVar18;
  uStack_310 = uVar4;
  local_300 = (void *)0x0;
  local_2f8 = 0;
  ::FString::FString(&local_bd0.Str,&local_d98);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_bd0.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_bd0.Str.Data.AllocatorInstance.Data;
  }
  local_bd0.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  ::FString::FString(&local_a68.Str,&local_db8);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_a68.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_a68.Str.Data.AllocatorInstance.Data;
  }
  local_a68.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  FInternationalizationArchive::AddEntry
            ((FInternationalizationArchive *)local_398,&local_a68,&local_bd0,&local_d58,&local_c88,
             &local_548,false);
  if (local_a68.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a68.Str.Data.AllocatorInstance.Data);
  }
  if (local_bd0.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bd0.Str.Data.AllocatorInstance.Data);
  }
  local_538.Object = (FLocMetadataObject *)0x0;
  local_538.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  ::FString::FString(&local_a38.Str,&local_d98);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_a38.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_a38.Str.Data.AllocatorInstance.Data;
  }
  local_a38.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  ::FString::FString(&local_a50.Str,&local_db8);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_a50.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_a50.Str.Data.AllocatorInstance.Data;
  }
  local_a50.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  FInternationalizationArchive::FindEntryByKey
            ((FInternationalizationArchive *)local_398,&local_d78,&local_a50,&local_a38,&local_538);
  if (local_a50.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a50.Str.Data.AllocatorInstance.Data);
  }
  if (local_a38.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a38.Str.Data.AllocatorInstance.Data);
  }
  if (local_d78.Object == (FArchiveEntry *)0x0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_7d0,L"FArchiveEntry could not find entry using FindEntryByKey.");
    (*pcVar2)(pFVar1,&local_7d0,0);
LAB_141c0eed8:
    if (local_7d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7d0.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar14 = TSharedPtr<FArchiveEntry,1>::operator->(&local_d78);
    ::FString::FString(&local_5d0,&local_db8);
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_5d0.Data.ArrayNum != 0) {
      FVar16.Data = local_5d0.Data.AllocatorInstance.Data;
    }
    local_5c0 = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
    if ((pFVar14->Namespace).Hash == local_5c0) {
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_5d0.Data.ArrayNum != 0) {
        FVar16.Data = local_5d0.Data.AllocatorInstance.Data;
      }
      if ((pFVar14->Namespace).Str.Data.ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar14->Namespace).Str.Data.AllocatorInstance.Data;
      }
      iVar7 = wcscmp(pwVar17,(wchar_t *)FVar16.Data);
      if (iVar7 != 0) goto LAB_141c0ee27;
      bVar5 = false;
    }
    else {
LAB_141c0ee27:
      bVar5 = true;
    }
    if (local_5d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d0.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar1 = pFVar11->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_7c0,L"FoundEntry->Namespace == Namespace");
      (*pcVar2)(pFVar1,&local_7c0,0);
      if (local_7c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7c0.Data.AllocatorInstance.Data);
      }
    }
    pFVar14 = TSharedPtr<FArchiveEntry,1>::operator->(&local_d78);
    bVar5 = FLocItem::operator==(&pFVar14->Source,&local_d58);
    if (!bVar5) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar1 = pFVar11->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_7b0,L"FoundEntry->Source == Source");
      (*pcVar2)(pFVar1,&local_7b0,0);
      local_7d0.Data.AllocatorInstance.Data = local_7b0.Data.AllocatorInstance.Data;
      goto LAB_141c0eed8;
    }
  }
  pFVar8 = ::operator_new(0x50);
  local_c08.Object = pFVar20;
  if (pFVar8 != (FLocMetadataObject *)0x0) {
    *(undefined8 *)&(pFVar8->Values).field_0x10 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x18 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x38 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x48 = 0;
    *(undefined8 *)&pFVar8->Values = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar8->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar8->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar8->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar8->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x40 = 0;
    local_c08.Object = pFVar8;
  }
  pTVar13 = TSharedPtr<FLocMetadataObject,1>::TSharedPtr<FLocMetadataObject,1><FLocMetadataObject>
                      (&local_3b8,&local_c08);
  FLocKey::FLocKey(&local_400,&local_d98);
  FLocKey::FLocKey(&local_418,&local_db8);
  pTVar12 = FInternationalizationArchive::FindEntryByKey
                      ((FInternationalizationArchive *)local_398,&local_528,&local_418,&local_400,
                       pTVar13);
  if (&local_d78 != pTVar12) {
    local_d78.Object = pTVar12->Object;
    pTVar12->Object = (FArchiveEntry *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_d78.SharedReferenceCount,&pTVar12->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_528.SharedReferenceCount.ReferenceController);
  if (local_418.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_418.Str.Data.AllocatorInstance.Data);
  }
  if (local_400.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_400.Str.Data.AllocatorInstance.Data);
  }
  if (local_d78.Object == (FArchiveEntry *)0x0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_7a0,L"FArchiveEntry could not find entry using FindEntryByKey.");
    (*pcVar2)(pFVar1,&local_7a0,0);
LAB_141c0f1a5:
    if (local_7a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7a0.Data.AllocatorInstance.Data);
    }
  }
  else {
    if ((local_d78.Object == (FArchiveEntry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar14 = local_d78.Object;
    ::FString::FString(&local_5b8,&local_db8);
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_5b8.Data.ArrayNum != 0) {
      FVar16.Data = local_5b8.Data.AllocatorInstance.Data;
    }
    local_5a8 = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
    if ((pFVar14->Namespace).Hash == local_5a8) {
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_5b8.Data.ArrayNum != 0) {
        FVar16.Data = local_5b8.Data.AllocatorInstance.Data;
      }
      if ((pFVar14->Namespace).Str.Data.ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar14->Namespace).Str.Data.AllocatorInstance.Data;
      }
      iVar7 = wcscmp(pwVar17,(wchar_t *)FVar16.Data);
      if (iVar7 != 0) goto LAB_141c0f0ce;
      bVar5 = false;
    }
    else {
LAB_141c0f0ce:
      bVar5 = true;
    }
    if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar1 = pFVar11->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_790,L"FoundEntry->Namespace == Namespace");
      (*pcVar2)(pFVar1,&local_790,0);
      if (local_790.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_790.Data.AllocatorInstance.Data);
      }
    }
    if ((local_d78.Object == (FArchiveEntry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar5 = FLocItem::operator==(&(local_d78.Object)->Source,&local_d58);
    if (!bVar5) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar1 = pFVar11->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_780,L"FoundEntry->Source == Source");
      (*pcVar2)(pFVar1,&local_780,0);
      local_7a0.Data.AllocatorInstance.Data = local_780.Data.AllocatorInstance.Data;
      goto LAB_141c0f1a5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d78.SharedReferenceCount.ReferenceController);
  local_2f8 = 0;
  if (local_300 != (void *)0x0) {
    FMemory::Free(local_300);
  }
  TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_340,0,local_340._8_4_);
  bVar5 = local_340._12_4_ != 0;
  local_340._8_8_ = (ulonglong)(uint)local_340._12_4_ << 0x20;
  if (bVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)local_340,0,(int *)(local_340 + 0xc));
  }
  uVar19 = local_318._4_4_;
  uStack_310 = 0xffffffff;
  local_318 = (ulonglong)local_318._4_4_ << 0x20;
  if (0x80 < uVar19) {
    local_318 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_340 + 0x10),0);
  }
  if (local_320 != (void *)0x0) {
    FMemory::Free(local_320);
  }
  if ((FScriptContainerElement *)local_340._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_340._0_8_);
  }
  local_348 = 0;
  if (local_350 != (void *)0x0) {
    FMemory::Free(local_350);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_390,0,local_390._8_4_);
  bVar5 = local_390._12_4_ != 0;
  local_390._8_8_ = (ulonglong)(uint)local_390._12_4_ << 0x20;
  if (bVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_390,0,(int *)(local_390 + 0xc));
  }
  uVar19 = local_368._4_4_;
  uStack_360 = 0xffffffff;
  local_368 = (ulonglong)local_368._4_4_ << 0x20;
  if (0x80 < uVar19) {
    local_368 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_390 + 0x10),0);
  }
  if (local_370 != (void *)0x0) {
    FMemory::Free(local_370);
  }
  if ((FScriptContainerElement *)local_390._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_390._0_8_);
  }
  pFVar9 = ::FString::FString(&local_3a8,L"TextA");
  local_c68.Text.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
  (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c68.Text.Data.ArrayNum = (pFVar9->Data).ArrayNum;
  local_c68.Text.Data.ArrayMax = (pFVar9->Data).ArrayMax;
  (pFVar9->Data).ArrayNum = 0;
  (pFVar9->Data).ArrayMax = 0;
  local_c68.MetadataObj.Object = (FLocMetadataObject *)0x0;
  local_c68.MetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar8 = ::operator_new(0x50);
  local_c00.Object = pFVar20;
  if (pFVar8 != (FLocMetadataObject *)0x0) {
    *(undefined8 *)&(pFVar8->Values).field_0x10 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x18 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x38 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x48 = 0;
    *(undefined8 *)&pFVar8->Values = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar8->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar8->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar8->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar8->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar8->Values).field_0x40 = 0;
    local_c00.Object = pFVar8;
  }
  TSharedPtr<FLocMetadataObject,1>::operator=<FLocMetadataObject>(&local_c68.MetadataObj,&local_c00)
  ;
  if ((local_c68.MetadataObj.Object == (FLocMetadataObject *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar8 = local_c68.MetadataObj.Object;
  ::FString::FString(&local_760,L"");
  ::FString::FString(&local_770,L"*IsMature");
  FLocMetadataObject::SetStringField(pFVar8,&local_770,&local_760);
  if (local_770.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_770.Data.AllocatorInstance.Data);
  }
  if (local_760.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_760.Data.AllocatorInstance.Data);
  }
  local_188[0] = AddedKeys;
  local_180._0_8_ = 0;
  local_180._8_8_ = 0;
  local_180._32_8_ = 0;
  local_180._40_8_ = uVar18;
  local_180._48_8_ = uVar4;
  local_140 = (void *)0x0;
  local_138 = 0;
  local_130._0_8_ = 0;
  local_130._8_8_ = 0;
  local_130._32_8_ = 0;
  local_130._40_8_ = uVar18;
  local_130._48_8_ = uVar4;
  local_f0 = (void *)0x0;
  local_e8 = 0;
  local_518.Object = local_d88.Object;
  local_518.SharedReferenceCount.ReferenceController =
       local_d88.SharedReferenceCount.ReferenceController;
  if (local_d88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_a08.Str,&local_d98);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_a08.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_a08.Str.Data.AllocatorInstance.Data;
  }
  local_a08.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  ::FString::FString(&local_a20.Str,&local_db8);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_a20.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_a20.Str.Data.AllocatorInstance.Data;
  }
  local_a20.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  FInternationalizationArchive::AddEntry
            ((FInternationalizationArchive *)local_188,&local_a20,&local_a08,&local_c68,&local_c88,
             &local_518,false);
  if (local_a20.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a20.Str.Data.AllocatorInstance.Data);
  }
  if (local_a08.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a08.Str.Data.AllocatorInstance.Data);
  }
  local_508.Object = local_d88.Object;
  local_508.SharedReferenceCount.ReferenceController =
       local_d88.SharedReferenceCount.ReferenceController;
  if (local_d88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_9d8.Str,&local_d98);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_9d8.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_9d8.Str.Data.AllocatorInstance.Data;
  }
  local_9d8.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  ::FString::FString(&local_9f0.Str,&local_db8);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_9f0.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_9f0.Str.Data.AllocatorInstance.Data;
  }
  local_9f0.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  FInternationalizationArchive::FindEntryByKey
            ((FInternationalizationArchive *)local_188,&local_d68,&local_9f0,&local_9d8,&local_508);
  if (local_9f0.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9f0.Str.Data.AllocatorInstance.Data);
  }
  if (local_9d8.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9d8.Str.Data.AllocatorInstance.Data);
  }
  if (local_d68.Object == (FArchiveEntry *)0x0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_750,L"FArchiveEntry could not find entry using FindEntryByKey.");
    (*pcVar2)(pFVar1,&local_750,0);
LAB_141c0f80f:
    if (local_750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_750.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar14 = TSharedPtr<FArchiveEntry,1>::operator->(&local_d68);
    ::FString::FString(&local_5a0,&local_db8);
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_5a0.Data.ArrayNum != 0) {
      FVar16.Data = local_5a0.Data.AllocatorInstance.Data;
    }
    local_590 = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
    if ((pFVar14->Namespace).Hash == local_590) {
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_5a0.Data.ArrayNum != 0) {
        FVar16.Data = local_5a0.Data.AllocatorInstance.Data;
      }
      if ((pFVar14->Namespace).Str.Data.ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar14->Namespace).Str.Data.AllocatorInstance.Data;
      }
      iVar7 = wcscmp(pwVar17,(wchar_t *)FVar16.Data);
      if (iVar7 != 0) goto LAB_141c0f75e;
      bVar5 = false;
    }
    else {
LAB_141c0f75e:
      bVar5 = true;
    }
    if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar1 = pFVar11->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_740,L"FoundEntry->Namespace == Namespace");
      (*pcVar2)(pFVar1,&local_740,0);
      if (local_740.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_740.Data.AllocatorInstance.Data);
      }
    }
    pFVar14 = TSharedPtr<FArchiveEntry,1>::operator->(&local_d68);
    bVar5 = FLocItem::operator==(&pFVar14->Source,&local_d58);
    if (!bVar5) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar1 = pFVar11->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_730,L"FoundEntry->Source == Source");
      (*pcVar2)(pFVar1,&local_730,0);
      local_750.Data.AllocatorInstance.Data = local_730.Data.AllocatorInstance.Data;
      goto LAB_141c0f80f;
    }
  }
  local_588.Object = local_d88.Object;
  local_588.SharedReferenceCount.ReferenceController =
       local_d88.SharedReferenceCount.ReferenceController;
  if (local_d88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_9a8.Str,&local_d98);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_9a8.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_9a8.Str.Data.AllocatorInstance.Data;
  }
  local_9a8.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  ::FString::FString(&local_9c0.Str,&local_db8);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_9c0.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_9c0.Str.Data.AllocatorInstance.Data;
  }
  local_9c0.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  bVar5 = FInternationalizationArchive::AddEntry
                    ((FInternationalizationArchive *)local_188,&local_9c0,&local_9a8,&local_d58,
                     &local_c88,&local_588,false);
  if (local_9c0.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9c0.Str.Data.AllocatorInstance.Data);
  }
  if (local_9a8.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9a8.Str.Data.AllocatorInstance.Data);
  }
  if (!bVar5) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_720,L"AddEntry result = true");
    (*pcVar2)(pFVar1,&local_720,0);
    if (local_720.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_720.Data.AllocatorInstance.Data);
    }
  }
  FInternationalizationArchive::GetEntriesBySourceTextIterator
            ((FInternationalizationArchive *)local_188,(TConstIterator *)local_990);
  pFVar8 = pFVar20;
  if (local_974 < *(int *)(local_980 + 0x18)) {
    do {
      local_978 = local_978 & ~local_984;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_990 + 8));
      uVar19 = (int)pFVar8 + 1;
      pFVar8 = (FLocMetadataObject *)(ulonglong)uVar19;
    } while (local_974 < *(int *)(local_980 + 0x18));
    if (uVar19 != 1) goto LAB_141c0f9a3;
  }
  else {
LAB_141c0f9a3:
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_710,L"EntryCount == 1");
    (*pcVar2)(pFVar1,&local_710,0);
    if (local_710.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_710.Data.AllocatorInstance.Data);
    }
  }
  FVar16.Data = local_d98.Data.AllocatorInstance.Data;
  local_578.Object = local_d88.Object;
  local_578.SharedReferenceCount.ReferenceController =
       local_d88.SharedReferenceCount.ReferenceController;
  if (local_d88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d28.Str.Data.ArrayNum = local_d98.Data.ArrayNum;
  local_d28.Str.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_d98.Data.ArrayNum == 0) {
    local_d28.Str.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_d98.Data.ArrayNum,0,(ForAnyElementType *)&local_d28,local_d98.Data.ArrayNum
               ,&local_d28.Str.Data.ArrayMax);
    memcpy(local_d28.Str.Data.AllocatorInstance.Data,FVar16.Data,
           (longlong)local_d98.Data.ArrayNum * 2);
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_d28.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_d28.Str.Data.AllocatorInstance.Data;
  }
  local_d28.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  FVar16.Data = local_db8.Data.AllocatorInstance.Data;
  local_d10.Str.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d10.Str.Data.ArrayNum = local_db8.Data.ArrayNum;
  if (local_db8.Data.ArrayNum == 0) {
    local_d10.Str.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_db8.Data.ArrayNum,0,(ForAnyElementType *)&local_d10,local_db8.Data.ArrayNum
               ,&local_d10.Str.Data.ArrayMax);
    memcpy(local_d10.Str.Data.AllocatorInstance.Data,FVar16.Data,
           (longlong)local_db8.Data.ArrayNum * 2);
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_d10.Str.Data.ArrayNum != 0) {
    FVar16.Data = local_d10.Str.Data.AllocatorInstance.Data;
  }
  local_d10.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
  pTVar12 = FInternationalizationArchive::FindEntryByKey
                      ((FInternationalizationArchive *)local_188,&local_568,&local_d10,&local_d28,
                       &local_578);
  if (&local_d68 != pTVar12) {
    local_d68.Object = pTVar12->Object;
    pTVar12->Object = (FArchiveEntry *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_d68.SharedReferenceCount,&pTVar12->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_568.SharedReferenceCount.ReferenceController);
  if (local_d10.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d10.Str.Data.AllocatorInstance.Data);
  }
  if (local_d28.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d28.Str.Data.AllocatorInstance.Data);
  }
  if (local_d68.Object == (FArchiveEntry *)0x0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar1 = pFVar11->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_700,L"FArchiveEntry could not find entry using FindEntryByKey.");
    (*pcVar2)(pFVar1,&local_700,0);
  }
  else {
    if ((local_d68.Object == (FArchiveEntry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar14 = local_d68.Object;
    if ((((local_d68.Object)->Source).MetadataObj.Object == (FLocMetadataObject *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar8 = (pFVar14->Source).MetadataObj.Object;
    ::FString::FString(&local_c98,L"*IsMature");
    iVar7 = local_c98.Data.ArrayNum + -1;
    FVar16.Data = local_c98.Data.AllocatorInstance.Data;
    if (local_c98.Data.ArrayNum == 0) {
      iVar7 = 0;
      FVar16.Data = (FScriptContainerElement *)L"";
    }
    uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar16.Data);
    if (*(int *)&(pFVar8->Values).field_0x8 != *(int *)&(pFVar8->Values).field_0x34) {
      puVar21 = *(undefined1 **)&(pFVar8->Values).field_0x40;
      if (puVar21 == (undefined1 *)0x0) {
        puVar21 = &(pFVar8->Values).field_0x38;
      }
      iVar7 = *(int *)(puVar21 + (ulonglong)(*(int *)&(pFVar8->Values).field_0x48 - 1U & uVar19) * 4
                      );
      uVar18 = local_c98.Data._8_8_;
      while (iVar7 != -1) {
        lVar15 = (longlong)iVar7 * 0x28;
        iVar6 = *(int *)(*(longlong *)&pFVar8->Values + 8 + lVar15);
        if (iVar6 == (int)uVar18) {
          if (1 < iVar6) {
            iVar6 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)(*(longlong *)&pFVar8->Values + lVar15),
                               (wchar_t *)local_c98.Data.AllocatorInstance.Data);
            bVar5 = iVar6 == 0;
            uVar18 = local_c98.Data._8_8_;
            goto LAB_141c0fcae;
          }
LAB_141c0fd74:
          if (iVar7 != -1) {
            lVar15 = *(longlong *)&pFVar8->Values + lVar15;
            pFVar8 = (FLocMetadataObject *)(lVar15 + 0x10);
            if (lVar15 == 0) {
              pFVar8 = pFVar20;
            }
            if (((pFVar8 != (FLocMetadataObject *)0x0) &&
                (*(longlong **)&pFVar8->Values != (longlong *)0x0)) &&
               (iVar7 = (**(code **)(**(longlong **)&pFVar8->Values + 0x38))(), iVar7 == 2)) {
              bVar5 = true;
              goto LAB_141c0fcc8;
            }
          }
          break;
        }
        bVar5 = iVar6 + (int)uVar18 == 1;
LAB_141c0fcae:
        if (bVar5) goto LAB_141c0fd74;
        iVar7 = *(int *)(*(longlong *)&pFVar8->Values + 0x20 + lVar15);
      }
    }
    bVar5 = false;
LAB_141c0fcc8:
    if (local_c98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c98.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      if ((local_d68.Object == (FArchiveEntry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar14 = local_d68.Object;
      if ((((local_d68.Object)->Source).MetadataObj.Object == (FLocMetadataObject *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (pFVar14->Source).MetadataObj.Object;
      ::FString::FString(&local_6f0,L"*IsMature");
      pFVar9 = FLocMetadataObject::GetStringField(pFVar8,&local_558,&local_6f0);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      iVar7 = FGenericPlatformStricmp::Stricmp(pwVar17,L"");
      if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_558.Data.AllocatorInstance.Data);
      }
      if (local_6f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6f0.Data.AllocatorInstance.Data);
      }
      if (iVar7 == 0) goto LAB_141c0fe79;
      pFVar11 = FAutomationTestFramework::Get();
      pFVar1 = pFVar11->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_670,L"Metadata Type == String and Value == Empty string");
      (*pcVar2)(pFVar1,&local_670,0);
      local_700.Data.AllocatorInstance.Data = local_670.Data.AllocatorInstance.Data;
    }
    else {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar1 = pFVar11->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_6c0,
                         L"FArchiveEntry * prefixed metadata entry on source object was modified unexpectedly."
                        );
      (*pcVar2)(pFVar1,&local_6c0,0);
      local_700.Data.AllocatorInstance.Data = local_6c0.Data.AllocatorInstance.Data;
    }
  }
  if (local_700.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_700.Data.AllocatorInstance.Data);
  }
LAB_141c0fe79:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d68.SharedReferenceCount.ReferenceController);
  local_e8 = 0;
  if (local_f0 != (void *)0x0) {
    FMemory::Free(local_f0);
  }
  TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_130);
  local_138 = 0;
  if (local_140 != (void *)0x0) {
    FMemory::Free(local_140);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_180);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c68.MetadataObj.SharedReferenceCount.ReferenceController);
  if (local_c68.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c68.Text.Data.AllocatorInstance.Data);
  }
  if (local_d98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d98.Data.AllocatorInstance.Data);
  }
  if (local_db8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_db8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c88.MetadataObj.SharedReferenceCount.ReferenceController);
  if (local_c88.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c88.Text.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d58.MetadataObj.SharedReferenceCount.ReferenceController);
  if (local_d58.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d58.Text.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_be0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d88.SharedReferenceCount.ReferenceController);
  return;
}

