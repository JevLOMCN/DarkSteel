// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// GetTestFlags @ 1422c4450

EAutomationTestFlags __thiscall
UE::FPropertyPathNameTreeTest::GetTestFlags(FPropertyPathNameTreeTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 1422c4460

bool __thiscall UE::FPropertyPathNameTreeTest::IsStressTest(FPropertyPathNameTreeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1422c4470

uint __thiscall UE::FPropertyPathNameTreeTest::GetRequiredDeviceNum(FPropertyPathNameTreeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1422c4480

FString * __thiscall
UE::FPropertyPathNameTreeTest::GetTestSourceFileName
          (FPropertyPathNameTreeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Tests\\UObject\\PropertyPathNameTreeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1422c44b0

int __thiscall UE::FPropertyPathNameTreeTest::GetTestSourceFileLine(FPropertyPathNameTreeTest *this)

{
  return 0xc;
}

// GetTests @ 1422c44c0

/* WARNING: Removing unreachable block (ram,0x0001422c463e) */

void __thiscall
UE::FPropertyPathNameTreeTest::GetTests
          (FPropertyPathNameTreeTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = Core::Private::
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
    iVar4 = Core::Private::
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

// RunTest @ 1422c4660

bool __thiscall
UE::FPropertyPathNameTreeTest::RunTest(FPropertyPathNameTreeTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 1422c4690

FString * __thiscall
UE::FPropertyPathNameTreeTest::GetBeautifiedTestName
          (FPropertyPathNameTreeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPropertyPathNameTreeTest @ 1422cdd10

FPropertyPathNameTreeTest * __thiscall
UE::FPropertyPathNameTreeTest::FPropertyPathNameTreeTest
          (FPropertyPathNameTreeTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPropertyPathNameTreeTest_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][UObject][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"CoreUObject::PropertyPathNameTree");
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
  ::FString::FString(&local_18,"[Core][UObject][SmokeFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// TestBody @ 1422f2800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::FPropertyPathNameTreeTest::TestBody(FPropertyPathNameTreeTest *this,FString *param_1)

{
  FName FVar1;
  FName FVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  ulonglong uVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FPropertyTypeName FVar10;
  FPropertyTypeName FVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  bool bVar13;
  FNameEntryId FVar14;
  int iVar15;
  uint uVar16;
  FNameEntryId FVar17;
  FName *pFVar18;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  FAutomationTestFramework *pFVar19;
  FNode FVar20;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  longlong *plVar21;
  longlong *plVar22;
  FNameEntryId FVar23;
  longlong lVar24;
  FPropertyPathNameTree *pFVar25;
  undefined8 *puVar26;
  undefined1 auStackY_dc8 [32];
  FPropertyTypeName local_d98 [2];
  ForAnyElementType local_d90;
  undefined8 local_d88;
  FPropertyTypeName local_d80;
  FPropertyTypeName local_d7c;
  ForAnyElementType local_d78;
  undefined8 local_d70;
  ForAnyElementType local_d68;
  undefined8 local_d60;
  TArray<UE::FPropertyPathName::FSegment,TSizedDefaultAllocator<32>_> local_d58;
  TArray<UE::FPropertyPathName::FSegment,TSizedDefaultAllocator<32>_> local_d48;
  TArray<UE::FPropertyPathName::FSegment,TSizedDefaultAllocator<32>_> local_d38;
  TArray<UE::FPropertyPathName::FSegment,TSizedDefaultAllocator<32>_> local_d28;
  ForAnyElementType local_d18;
  undefined8 local_d10;
  ForAnyElementType local_d08;
  undefined8 local_d00;
  ForAnyElementType local_cf8;
  undefined8 local_cf0;
  ForAnyElementType local_ce8;
  undefined8 local_ce0;
  ForAnyElementType local_cd8;
  undefined8 local_cd0;
  ForAnyElementType local_cc8;
  undefined8 local_cc0;
  longlong *local_cb8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_cb0;
  ForAnyElementType local_c90;
  undefined8 local_c88;
  FPropertyTypeName local_c80;
  FPropertyTypeName local_c7c;
  FPropertyTypeName local_c78;
  FPropertyTypeName local_c74;
  FPropertyTypeName local_c70 [2];
  longlong *local_c68 [2];
  TBitArray<FDefaultBitArrayAllocator> *local_c58;
  int local_c4c;
  longlong *local_c40 [2];
  TBitArray<FDefaultBitArrayAllocator> *local_c30;
  int local_c24;
  longlong *local_c18;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c10;
  longlong *local_bf0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_be8;
  undefined4 local_bc8;
  undefined4 uStack_bc4;
  int local_bc0;
  uint local_bb8;
  undefined4 uStack_bb4;
  int local_bb0;
  uint local_ba8;
  undefined4 uStack_ba4;
  int local_ba0;
  undefined4 local_b98;
  undefined4 uStack_b94;
  int local_b90;
  uint local_b88;
  undefined4 uStack_b84;
  int local_b80;
  uint local_b78;
  undefined4 uStack_b74;
  int local_b70;
  longlong *local_b68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b60;
  uint local_b40;
  undefined4 uStack_b3c;
  uint local_b38;
  undefined4 uStack_b34;
  uint local_b30;
  undefined4 uStack_b2c;
  undefined1 local_b28 [8];
  undefined1 local_b20 [8];
  FPropertyPathName local_b18;
  longlong *local_b08 [2];
  TBitArray<FDefaultBitArrayAllocator> *local_af8;
  int local_aec;
  longlong *local_ae0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_ad8;
  uint local_ab8;
  undefined4 uStack_ab4;
  int local_ab0;
  uint local_aa8;
  undefined4 uStack_aa4;
  int local_aa0;
  uint local_a98;
  undefined4 uStack_a94;
  int local_a90;
  uint local_a88;
  undefined4 uStack_a84;
  int local_a80;
  uint local_a78;
  undefined4 uStack_a74;
  int local_a70;
  uint local_a68;
  undefined4 uStack_a64;
  undefined4 local_a60;
  uint local_a58;
  undefined4 uStack_a54;
  undefined4 local_a50;
  uint local_a48;
  undefined4 uStack_a44;
  int local_a40;
  longlong *local_a38;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a30;
  longlong *local_a10;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a08;
  FName local_9e8;
  undefined4 local_9e0;
  undefined4 local_9dc;
  FName local_9d8;
  undefined4 local_9d0;
  undefined4 local_9cc;
  undefined1 local_9c8 [4];
  undefined1 local_9c4 [4];
  undefined1 local_9c0 [4];
  undefined1 local_9bc [4];
  undefined1 local_9b8 [4];
  undefined1 local_9b4 [4];
  undefined1 local_9b0 [8];
  FString local_9a8;
  FString local_998;
  FString local_988;
  FString local_978;
  FString local_968;
  FString local_958;
  FString local_948;
  FString local_938;
  FString local_928;
  FString local_918;
  FString local_908;
  FString local_8f8;
  FString local_8e8;
  FString local_8d8;
  FString local_8c8;
  FString local_8b8;
  FString local_8a8;
  FString local_898;
  FString local_888;
  FString local_878;
  FString local_868;
  FString local_858;
  FString local_848;
  FString local_838;
  FString local_828;
  FString local_818;
  FString local_808;
  FString local_7f8;
  FString local_7e8;
  FString local_7d8;
  FString local_7c8;
  FString local_7b8;
  FString local_7a8;
  FString local_798;
  FString local_788;
  FString local_778;
  FString local_768;
  FString local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  FString local_6a8;
  FString local_698;
  FString local_688;
  FString local_678;
  FString local_668;
  FString local_658;
  FString local_648;
  FString local_638;
  FString local_628;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FName local_478;
  undefined1 local_470 [16];
  undefined1 local_460 [16];
  undefined1 local_450 [16];
  undefined1 local_440 [16];
  undefined1 local_430 [16];
  undefined1 local_420 [16];
  undefined1 local_410 [16];
  undefined1 local_400 [16];
  undefined1 local_3f0 [16];
  FName local_3e0;
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [32];
  void *local_368;
  undefined4 local_360;
  uint local_35c;
  undefined4 local_358;
  int local_354;
  void *local_348;
  undefined4 local_340;
  undefined1 local_338 [32];
  void *local_318;
  undefined4 local_310;
  uint local_30c;
  undefined4 local_308;
  undefined4 local_304;
  void *local_2f8;
  undefined4 local_2f0;
  undefined1 local_2e8 [32];
  void *local_2c8;
  undefined4 local_2c0;
  uint local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  void *local_2a8;
  undefined4 local_2a0;
  undefined1 local_298 [32];
  void *local_278;
  undefined4 local_270;
  uint local_26c;
  undefined4 local_268;
  undefined4 local_264;
  void *local_258;
  undefined4 local_250;
  undefined1 local_248 [64];
  void *local_208;
  undefined4 local_200;
  undefined1 local_1f8 [64];
  void *local_1b8;
  undefined4 local_1b0;
  undefined1 local_1a8 [64];
  void *local_168;
  undefined4 local_160;
  undefined1 local_158 [64];
  void *local_118;
  undefined4 local_110;
  FPropertyTypeNameBuilder local_108;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_dc8;
  pFVar18 = ::FName::FName(&local_478,5,L"Count",FNAME_Add);
  FVar1 = *pFVar18;
  pFVar18 = ::FName::FName(&local_3e0,4,L"Size",FNAME_Add);
  FVar2 = *pFVar18;
  local_108.Nodes.AllocatorInstance.SecondaryData = (ForElementType<UE::FPropertyTypeNameNode>)0x0;
  local_108.Nodes.ArrayNum = 0;
  local_108.Nodes.ArrayMax = 10;
  local_108.OuterNodeIndex.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_108.OuterNodeIndex.ArrayNum = 0;
  local_108.OuterNodeIndex.ArrayMax = 10;
  local_108.ActiveIndex = -1;
  FVar14 = FNameEntryId::FromValidEName((EName)local_9b0);
  uStack_b34 = 0;
  local_b38 = *(uint *)CONCAT44(extraout_var,FVar14.Value);
  FVar7.Number = 0;
  FVar7.ComparisonIndex.Value = local_b38;
  FPropertyTypeNameBuilder::AddName(&local_108,FVar7);
  FPropertyTypeNameBuilder::Build(&local_108);
  FPropertyTypeNameBuilder::Reset(&local_108);
  FVar14 = FNameEntryId::FromValidEName((EName)local_9b4);
  uStack_b2c = 0;
  local_b30 = *(uint *)CONCAT44(extraout_var_00,FVar14.Value);
  FVar8.Number = 0;
  FVar8.ComparisonIndex.Value = local_b30;
  FPropertyTypeNameBuilder::AddName(&local_108,FVar8);
  FPropertyTypeNameBuilder::Build(&local_108);
  FPropertyTypeNameBuilder::Reset(&local_108);
  FVar14 = FNameEntryId::FromValidEName((EName)local_9b8);
  uStack_b3c = 0;
  local_b40 = *(uint *)CONCAT44(extraout_var_01,FVar14.Value);
  FVar6.Number = 0;
  FVar6.ComparisonIndex.Value = local_b40;
  FPropertyTypeNameBuilder::AddName(&local_108,FVar6);
  FPropertyTypeNameBuilder::BeginParameters(&local_108);
  FVar14 = FNameEntryId::FromValidEName((EName)local_9bc);
  local_b18.Segments.ArrayMax = 0;
  local_b18.Segments.ArrayNum = *(uint *)CONCAT44(extraout_var_02,FVar14.Value);
  FVar9.Number = 0;
  FVar9.ComparisonIndex.Value = local_b18.Segments.ArrayNum;
  FPropertyTypeNameBuilder::AddName(&local_108,FVar9);
  FPropertyTypeNameBuilder::EndParameters(&local_108);
  FPropertyTypeNameBuilder::Build(&local_108);
  pFVar19 = FAutomationTestFramework::Get();
  pFVar3 = pFVar19->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&local_868,L"Empty");
  (*pcVar4)(pFVar3,&local_868,0);
  if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_868.Data.AllocatorInstance.Data);
  }
  FVar14 = FVar1.ComparisonIndex.Value;
  local_388._0_8_ = (FScriptContainerElement *)0x0;
  local_388._8_8_ = 0;
  local_368 = (void *)0x0;
  local_360 = 0;
  local_35c = 0x80;
  local_358 = 0xffffffff;
  local_354 = 0;
  local_348 = (void *)0x0;
  local_340 = 0;
  local_c90.Data = (FScriptContainerElement *)0x0;
  local_c88 = 0;
  local_9e0 = 0;
  local_9dc = 0xffffffff;
  uStack_a64 = 0;
  local_a60 = 0;
  local_a68 = FVar14.Value;
  local_9e8 = FVar1;
  iVar15 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,&local_c90,(int *)((longlong)&local_c88 + 4));
  local_c88 = CONCAT44(local_c88._4_4_,iVar15 + 1);
  *(ulonglong *)(local_c90.Data + (longlong)iVar15 * 0xc) = CONCAT44(uStack_a64,local_a68);
  *(undefined4 *)(local_c90.Data + (longlong)iVar15 * 0xc + 8) = 0;
  FPropertyPathNameTree::Add
            ((FPropertyPathNameTree *)local_388,(FPropertyPathName *)local_470,(int)&local_c90);
  if (local_388._8_4_ == local_354) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar3 = pFVar19->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_858,L"Condition expected to return false but returned true");
    (*pcVar4)(pFVar3,&local_858,0);
    if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_858.Data.AllocatorInstance.Data);
    }
  }
  FPropertyPathNameTree::Empty((FPropertyPathNameTree *)local_388);
  if (local_388._8_4_ != local_354) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar3 = pFVar19->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_848,L"Condition failed");
    (*pcVar4)(pFVar3,&local_848,0);
    if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_848.Data.AllocatorInstance.Data);
    }
  }
  if (local_c90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c90.Data);
  }
  local_340 = 0;
  if (local_348 != (void *)0x0) {
    FMemory::Free(local_348);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_388,0,local_388._8_4_);
  iVar15 = SUB84(local_388._8_8_,4);
  local_388._8_8_ = local_388._8_8_ & 0xffffffff00000000;
  if (iVar15 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,0,(ForAnyElementType *)local_388,0,(int *)(local_388 + 0xc));
  }
  local_358 = 0xffffffff;
  local_354 = 0;
  local_360 = 0;
  if (0x80 < local_35c) {
    local_35c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_388 + 0x10),0);
  }
  if (local_368 != (void *)0x0) {
    FMemory::Free(local_368);
  }
  if ((FScriptContainerElement *)local_388._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_388._0_8_);
  }
  pFVar19 = FAutomationTestFramework::Get();
  pFVar3 = pFVar19->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&local_838,L"Name");
  (*pcVar4)(pFVar3,&local_838,0);
  if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_838.Data.AllocatorInstance.Data);
  }
  local_cc8.Data = (FScriptContainerElement *)0x0;
  local_cc0 = 0;
  local_9d0 = 0;
  local_9cc = 0xffffffff;
  uStack_a54 = 0;
  local_a50 = 0;
  local_a58 = FVar14.Value;
  local_9d8 = FVar1;
  iVar15 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,&local_cc8,(int *)((longlong)&local_cc0 + 4));
  local_cc0 = CONCAT44(local_cc0._4_4_,iVar15 + 1);
  *(ulonglong *)(local_cc8.Data + (longlong)iVar15 * 0xc) = CONCAT44(uStack_a54,local_a58);
  *(undefined4 *)(local_cc8.Data + (longlong)iVar15 * 0xc + 8) = 0;
  local_298._0_8_ = (FScriptContainerElement *)0x0;
  local_298._8_8_ = 0;
  local_278 = (void *)0x0;
  local_270 = 0;
  local_26c = 0x80;
  local_268 = 0xffffffff;
  local_264 = 0;
  local_258 = (void *)0x0;
  local_250 = 0;
  iVar15 = (int)&local_cc8;
  FPropertyPathNameTree::Add
            ((FPropertyPathNameTree *)local_298,(FPropertyPathName *)(local_470 + 8),iVar15);
  FPropertyPathNameTree::Find((FPropertyPathNameTree *)local_298,&local_b18,iVar15);
  if (local_b18.Segments.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar3 = pFVar19->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_828,L"Condition failed");
    (*pcVar4)(pFVar3,&local_828,0);
    if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_828.Data.AllocatorInstance.Data);
    }
    if (local_b18.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    goto LAB_1422f2e09;
  }
  else {
LAB_1422f2e09:
    if (*(longlong *)local_b18.Segments.AllocatorInstance.Data != 0) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_818,L"Condition expected to return false but returned true");
      (*pcVar4)(pFVar3,&local_818,0);
      if (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_818.Data.AllocatorInstance.Data);
      }
    }
  }
  FPropertyPathNameTree::CreateConstIterator
            ((FPropertyPathNameTree *)local_298,(FConstIterator *)local_c68);
  FPropertyPathNameTree::CreateConstIterator
            ((FPropertyPathNameTree *)local_298,(FConstIterator *)&local_a38);
  iVar15 = local_a30.CurrentBitIndex;
  pTVar12 = local_a30.Array;
  plVar22 = local_a38;
  lVar24 = (longlong)local_a30.CurrentBitIndex;
  if (((local_c4c != local_a30.CurrentBitIndex) || (local_c58 != local_a30.Array)) ||
     (local_c68[0] != local_a38)) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar3 = pFVar19->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_808,L"Condition failed");
    (*pcVar4)(pFVar3,&local_808,0);
    if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_808.Data.AllocatorInstance.Data);
    }
  }
  if (((local_c4c != iVar15) || (local_c58 != pTVar12)) || (local_c68[0] != plVar22)) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar3 = pFVar19->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_7f8,L"Condition expected to return false but returned true");
    (*pcVar4)(pFVar3,&local_7f8,0);
    if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
    }
  }
  if (iVar15 < pTVar12->NumBits) {
    lVar24 = lVar24 * 0x98;
    if (*(FName *)(lVar24 + *plVar22) != FVar1) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_7e8,L"Condition failed");
      (*pcVar4)(pFVar3,&local_7e8,0);
      if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
      }
    }
    if (*(int *)(*plVar22 + 8 + lVar24) != 0) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_7d8,L"Condition failed");
      (*pcVar4)(pFVar3,&local_7d8,0);
      if (local_7d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7d8.Data.AllocatorInstance.Data);
      }
    }
    if (*plVar22 + 0x10 + lVar24 == 0) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_998,L"Condition failed");
      (*pcVar4)(pFVar3,&local_998,0);
      if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_998.Data.AllocatorInstance.Data);
      }
    }
    plVar21 = (longlong *)(*plVar22 + 0x10 + lVar24);
    if ((plVar21 != (longlong *)0x0) && (*plVar21 != 0)) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_7b8,L"Condition expected to return false but returned true");
      (*pcVar4)(pFVar3,&local_7b8,0);
      if (local_7b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
      }
    }
    lVar24 = *plVar22 + 0x10 + lVar24;
    if (((lVar24 != 0) && (*(longlong *)(lVar24 + 0x1c) != 0)) && (lVar24 != -8)) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_7a8,L"Condition expected to return false but returned true");
      (*pcVar4)(pFVar3,&local_7a8,0);
      if (local_7a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7a8.Data.AllocatorInstance.Data);
      }
    }
    local_a30.UnvisitedBitMask = local_a30.UnvisitedBitMask & ~local_a30._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a30);
    if (local_a30.CurrentBitIndex < (local_a30.Array)->NumBits) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_798,L"Condition expected to return false but returned true");
      (*pcVar4)(pFVar3,&local_798,0);
      if (local_798.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_798.Data.AllocatorInstance.Data);
      }
    }
    if (local_c4c == local_a30.CurrentBitIndex) {
      if ((local_c58 == local_a30.Array) && (local_c68[0] == local_a38)) {
        pFVar19 = FAutomationTestFramework::Get();
        pFVar3 = pFVar19->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&local_788,L"Condition expected to return false but returned true");
        (*pcVar4)(pFVar3,&local_788,0);
        if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_788.Data.AllocatorInstance.Data);
        }
      }
      if (((local_c4c == local_a30.CurrentBitIndex) && (local_c58 == local_a30.Array)) &&
         (local_c68[0] == local_a38)) {
        pFVar19 = FAutomationTestFramework::Get();
        pFVar3 = pFVar19->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&local_778,L"Condition failed");
        (*pcVar4)(pFVar3,&local_778,0);
        if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_778.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  local_250 = 0;
  if (local_258 != (void *)0x0) {
    FMemory::Free(local_258);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_298,0,local_298._8_4_);
  iVar15 = SUB84(local_298._8_8_,4);
  local_298._8_8_ = local_298._8_8_ & 0xffffffff00000000;
  if (iVar15 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,0,(ForAnyElementType *)local_298,0,(int *)(local_298 + 0xc));
  }
  local_268 = 0xffffffff;
  local_264 = 0;
  local_270 = 0;
  if (0x80 < local_26c) {
    local_26c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_298 + 0x10),0);
  }
  if (local_278 != (void *)0x0) {
    FMemory::Free(local_278);
  }
  if ((FScriptContainerElement *)local_298._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_298._0_8_);
  }
  if (local_cc8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cc8.Data);
  }
  pFVar19 = FAutomationTestFramework::Get();
  pFVar3 = pFVar19->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&local_768,L"NameType");
  (*pcVar4)(pFVar3,&local_768,0);
  if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_768.Data.AllocatorInstance.Data);
  }
  FVar10.Index = local_d98[0].Index;
  local_a40 = local_d98[0].Index;
  local_cd8.Data = (FScriptContainerElement *)0x0;
  local_cd0 = 0;
  uStack_a44 = 0;
  local_a48 = FVar14.Value;
  iVar15 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,&local_cd8,(int *)((longlong)&local_cd0 + 4));
  local_cd0 = CONCAT44(local_cd0._4_4_,iVar15 + 1);
  *(ulonglong *)(local_cd8.Data + (longlong)iVar15 * 0xc) = CONCAT44(uStack_a44,local_a48);
  *(int *)(local_cd8.Data + (longlong)iVar15 * 0xc + 8) = FVar10.Index;
  local_158._0_8_ = 0;
  local_158._8_8_ = 0;
  local_158._32_8_ = 0;
  local_158._40_4_ = 0;
  local_158._44_4_ = 0x80;
  local_158._48_4_ = 0xffffffff;
  local_158._52_4_ = 0;
  local_118 = (void *)0x0;
  local_110 = 0;
  FPropertyPathNameTree::Add
            ((FPropertyPathNameTree *)local_158,(FPropertyPathName *)local_460,(int)&local_cd8);
  FPropertyPathNameTree::Find
            ((FPropertyPathNameTree *)local_158,(FPropertyPathName *)local_b20,(int)&local_cd8);
  if (local_b20 == (undefined1  [8])0x0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar3 = pFVar19->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_758,L"Condition failed");
    (*pcVar4)(pFVar3,&local_758,0);
    if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_758.Data.AllocatorInstance.Data);
    }
    if (local_b20 != (undefined1  [8])0x0) goto LAB_1422f3492;
  }
  else {
LAB_1422f3492:
    if (*(longlong *)local_b20 != 0) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_748,L"Condition expected to return false but returned true");
      (*pcVar4)(pFVar3,&local_748,0);
      if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_748.Data.AllocatorInstance.Data);
      }
    }
  }
  FPropertyPathNameTree::CreateConstIterator
            ((FPropertyPathNameTree *)local_158,(FConstIterator *)local_c40);
  FPropertyPathNameTree::CreateConstIterator
            ((FPropertyPathNameTree *)local_158,(FConstIterator *)&local_a10);
  iVar15 = local_a08.CurrentBitIndex;
  pTVar12 = local_a08.Array;
  plVar22 = local_a10;
  lVar24 = (longlong)local_a08.CurrentBitIndex;
  if (((local_c24 != local_a08.CurrentBitIndex) || (local_c30 != local_a08.Array)) ||
     (local_c40[0] != local_a10)) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar3 = pFVar19->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_738,L"Condition failed");
    (*pcVar4)(pFVar3,&local_738,0);
    if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_738.Data.AllocatorInstance.Data);
    }
  }
  if (((local_c24 != iVar15) || (local_c30 != pTVar12)) || (local_c40[0] != plVar22)) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar3 = pFVar19->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_728,L"Condition expected to return false but returned true");
    (*pcVar4)(pFVar3,&local_728,0);
    if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_728.Data.AllocatorInstance.Data);
    }
  }
  if (iVar15 < pTVar12->NumBits) {
    lVar24 = lVar24 * 0x98;
    if (*(FName *)(lVar24 + *plVar22) != FVar1) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_718,L"Condition failed");
      (*pcVar4)(pFVar3,&local_718,0);
      if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_718.Data.AllocatorInstance.Data);
      }
    }
    local_c80.Index = *(int *)(*plVar22 + 8 + lVar24);
    bVar13 = UE::operator==(&local_c80,local_d98);
    if (!bVar13) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_708,L"Condition failed");
      (*pcVar4)(pFVar3,&local_708,0);
      if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_708.Data.AllocatorInstance.Data);
      }
    }
    if (*plVar22 + 0x10 + lVar24 == 0) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_6f8,L"Condition failed");
      (*pcVar4)(pFVar3,&local_6f8,0);
      if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
      }
    }
    plVar22 = (longlong *)(*plVar22 + 0x10 + lVar24);
    if ((plVar22 != (longlong *)0x0) && (*plVar22 != 0)) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_6e8,L"Condition expected to return false but returned true");
      (*pcVar4)(pFVar3,&local_6e8,0);
      if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
      }
    }
    local_a08.UnvisitedBitMask = local_a08.UnvisitedBitMask & ~local_a08._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a08);
    if (local_a08.CurrentBitIndex < (local_a08.Array)->NumBits) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_6d8,L"Condition expected to return false but returned true");
      (*pcVar4)(pFVar3,&local_6d8,0);
      if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
      }
    }
    if (local_c24 == local_a08.CurrentBitIndex) {
      if ((local_c30 == local_a08.Array) && (local_c40[0] == local_a10)) {
        pFVar19 = FAutomationTestFramework::Get();
        pFVar3 = pFVar19->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&local_6c8,L"Condition expected to return false but returned true");
        (*pcVar4)(pFVar3,&local_6c8,0);
        if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
        }
      }
      if (((local_c24 == local_a08.CurrentBitIndex) && (local_c30 == local_a08.Array)) &&
         (local_c40[0] == local_a10)) {
        pFVar19 = FAutomationTestFramework::Get();
        pFVar3 = pFVar19->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&local_6b8,L"Condition failed");
        (*pcVar4)(pFVar3,&local_6b8,0);
        if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  local_110 = 0;
  if (local_118 != (void *)0x0) {
    FMemory::Free(local_118);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_158);
  if (local_cd8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cd8.Data);
  }
  pFVar19 = FAutomationTestFramework::Get();
  pFVar3 = pFVar19->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&local_6a8,L"NameTypeIndex");
  (*pcVar4)(pFVar3,&local_6a8,0);
  if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
  }
  FVar10.Index = local_d98[0].Index;
  local_ab0 = local_d98[0].Index;
  local_d90.Data = (FScriptContainerElement *)0x0;
  local_d88 = 0;
  uStack_ab4 = 8;
  local_ab8 = FVar14.Value;
  iVar15 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,&local_d90,(int *)((longlong)&local_d88 + 4));
  local_d88 = CONCAT44(local_d88._4_4_,iVar15 + 1);
  *(ulonglong *)(local_d90.Data + (longlong)iVar15 * 0xc) = CONCAT44(uStack_ab4,local_ab8);
  *(int *)(local_d90.Data + (longlong)iVar15 * 0xc + 8) = FVar10.Index;
  local_1f8._0_8_ = 0;
  local_1f8._8_8_ = 0;
  local_1f8._32_8_ = 0;
  local_1f8._40_4_ = 0;
  local_1f8._44_4_ = 0x80;
  local_1f8._48_4_ = 0xffffffff;
  local_1f8._52_4_ = 0;
  local_1b8 = (void *)0x0;
  local_1b0 = 0;
  FPropertyPathNameTree::Add
            ((FPropertyPathNameTree *)local_1f8,(FPropertyPathName *)(local_460 + 8),(int)&local_d90
            );
  FVar20 = FPropertyPathNameTree::Find
                     ((FPropertyPathNameTree *)local_1f8,(FPropertyPathName *)local_450,
                      (int)&local_d90);
  if (*(longlong *)FVar20 == 0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar3 = pFVar19->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_698,L"Condition failed");
    (*pcVar4)(pFVar3,&local_698,0);
    if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_698.Data.AllocatorInstance.Data);
    }
  }
  if ((int)local_d88 != 0) {
    uVar16 = 0;
    if ((int)((int)local_d88 - 1U) < (int)local_d88) {
      uVar16 = ~((int)local_d88 - 1U) >> 0x1f;
    }
    if (uVar16 == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(undefined4 *)(local_d90.Data + (longlong)((int)local_d88 + -1) * 0xc + 4) = 6;
  }
  FVar20 = FPropertyPathNameTree::Find
                     ((FPropertyPathNameTree *)local_1f8,(FPropertyPathName *)(local_450 + 8),
                      (int)&local_d90);
  if (*(longlong *)FVar20 == 0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar3 = pFVar19->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_688,L"Condition failed");
    (*pcVar4)(pFVar3,&local_688,0);
    if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_688.Data.AllocatorInstance.Data);
    }
  }
  if ((int)local_d88 != 0) {
    uVar16 = 0;
    if ((int)((int)local_d88 - 1U) < (int)local_d88) {
      uVar16 = ~((int)local_d88 - 1U) >> 0x1f;
    }
    if (uVar16 == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(undefined4 *)(local_d90.Data + (longlong)((int)local_d88 + -1) * 0xc + 4) = 4;
  }
  FPropertyPathNameTree::Add
            ((FPropertyPathNameTree *)local_1f8,(FPropertyPathName *)local_440,(int)&local_d90);
  if ((int)local_d88 != 0) {
    uVar16 = 0;
    if ((int)((int)local_d88 - 1U) < (int)local_d88) {
      uVar16 = ~((int)local_d88 - 1U) >> 0x1f;
    }
    if (uVar16 == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(undefined4 *)(local_d90.Data + (longlong)((int)local_d88 + -1) * 0xc + 4) = 0;
  }
  FVar20 = FPropertyPathNameTree::Find
                     ((FPropertyPathNameTree *)local_1f8,(FPropertyPathName *)(local_440 + 8),
                      (int)&local_d90);
  if (*(longlong **)FVar20 == (longlong *)0x0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar3 = pFVar19->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_678,L"Condition failed");
    (*pcVar4)(pFVar3,&local_678,0);
LAB_1422f3cbc:
    if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_678.Data.AllocatorInstance.Data);
    }
  }
  else if (**(longlong **)FVar20 != 0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar3 = pFVar19->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_668,L"Condition expected to return false but returned true");
    (*pcVar4)(pFVar3,&local_668,0);
    local_678.Data.AllocatorInstance.Data = local_668.Data.AllocatorInstance.Data;
    goto LAB_1422f3cbc;
  }
  FPropertyPathNameTree::CreateConstIterator
            ((FPropertyPathNameTree *)local_1f8,(FConstIterator *)local_b08);
  FPropertyPathNameTree::CreateConstIterator
            ((FPropertyPathNameTree *)local_1f8,(FConstIterator *)&local_b68);
  iVar15 = local_b60.CurrentBitIndex;
  plVar22 = local_b68;
  lVar24 = (longlong)local_b60.CurrentBitIndex;
  if (((local_aec != local_b60.CurrentBitIndex) || (local_af8 != local_b60.Array)) ||
     (local_b08[0] != local_b68)) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar3 = pFVar19->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_658,L"Condition failed");
    (*pcVar4)(pFVar3,&local_658,0);
    if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.Data.AllocatorInstance.Data);
    }
  }
  if (((local_aec != iVar15) || (local_af8 != local_b60.Array)) || (local_b08[0] != plVar22)) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar3 = pFVar19->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_648,L"Condition expected to return false but returned true");
    (*pcVar4)(pFVar3,&local_648,0);
    if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_648.Data.AllocatorInstance.Data);
    }
  }
  if (iVar15 < (local_b60.Array)->NumBits) {
    lVar24 = lVar24 * 0x98;
    if (*(FName *)(lVar24 + *plVar22) != FVar1) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_638,L"Condition failed");
      (*pcVar4)(pFVar3,&local_638,0);
      if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_638.Data.AllocatorInstance.Data);
      }
    }
    local_c7c.Index = *(int *)(lVar24 + 8 + *plVar22);
    bVar13 = UE::operator==(&local_c7c,local_d98);
    if (!bVar13) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_628,L"Condition failed");
      (*pcVar4)(pFVar3,&local_628,0);
      if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_628.Data.AllocatorInstance.Data);
      }
    }
    if (*plVar22 + 0x10 + lVar24 == 0) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_618,L"Condition failed");
      (*pcVar4)(pFVar3,&local_618,0);
      if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_618.Data.AllocatorInstance.Data);
      }
    }
    plVar22 = (longlong *)(*plVar22 + 0x10 + lVar24);
    if ((plVar22 != (longlong *)0x0) && (*plVar22 != 0)) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_608,L"Condition expected to return false but returned true");
      (*pcVar4)(pFVar3,&local_608,0);
      if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_608.Data.AllocatorInstance.Data);
      }
    }
    local_b60.UnvisitedBitMask = local_b60.UnvisitedBitMask & ~local_b60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b60);
    if (local_b60.CurrentBitIndex < (local_b60.Array)->NumBits) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_5f8,L"Condition expected to return false but returned true");
      (*pcVar4)(pFVar3,&local_5f8,0);
      if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
      }
    }
    if (((local_aec == local_b60.CurrentBitIndex) && (local_af8 == local_b60.Array)) &&
       (local_b08[0] == local_b68)) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_5e8,L"Condition expected to return false but returned true");
      (*pcVar4)(pFVar3,&local_5e8,0);
      if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
      }
    }
    if (((local_aec == local_b60.CurrentBitIndex) && (local_af8 == local_b60.Array)) &&
       (local_b08[0] == local_b68)) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_5d8,L"Condition failed");
      (*pcVar4)(pFVar3,&local_5d8,0);
      if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar25 = (FPropertyPathNameTree *)0x0;
  local_1b0 = 0;
  if (local_1b8 != (void *)0x0) {
    FMemory::Free(local_1b8);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1f8);
  if (local_d90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d90.Data);
  }
  pFVar19 = FAutomationTestFramework::Get();
  pFVar3 = pFVar19->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&local_5c8,L"SameNameDiffType");
  (*pcVar4)(pFVar3,&local_5c8,0);
  if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
  }
  FVar10.Index = local_d98[0].Index;
  local_a80 = local_d98[0].Index;
  local_d08.Data = (FScriptContainerElement *)0x0;
  local_d00 = 0;
  uStack_a84 = 0;
  local_a88 = FVar14.Value;
  iVar15 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,&local_d08,(int *)((longlong)&local_d00 + 4));
  FVar11.Index = local_d80.Index;
  uStack_a94 = 0;
  local_d00 = CONCAT44(local_d00._4_4_,iVar15 + 1);
  *(ulonglong *)(local_d08.Data + (longlong)iVar15 * 0xc) = CONCAT44(uStack_a84,local_a88);
  *(int *)(local_d08.Data + (longlong)iVar15 * 0xc + 8) = FVar10.Index;
  local_a90 = local_d80.Index;
  local_cf8.Data = (FScriptContainerElement *)0x0;
  local_cf0 = 0;
  local_a98 = FVar14.Value;
  iVar15 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,&local_cf8,(int *)((longlong)&local_cf0 + 4));
  local_cf0 = CONCAT44(local_cf0._4_4_,iVar15 + 1);
  *(ulonglong *)(local_cf8.Data + (longlong)iVar15 * 0xc) = CONCAT44(uStack_a94,local_a98);
  *(int *)(local_cf8.Data + (longlong)iVar15 * 0xc + 8) = FVar11.Index;
  local_338._0_8_ = (FScriptContainerElement *)0x0;
  local_338._8_8_ = 0;
  local_318 = (void *)0x0;
  local_310 = 0;
  local_30c = 0x80;
  local_308 = 0xffffffff;
  local_304 = 0;
  local_2f8 = (void *)0x0;
  local_2f0 = 0;
  FPropertyPathNameTree::Add
            ((FPropertyPathNameTree *)local_338,(FPropertyPathName *)local_430,(int)&local_d08);
  FPropertyPathNameTree::Add
            ((FPropertyPathNameTree *)local_338,(FPropertyPathName *)(local_430 + 8),(int)&local_cf8
            );
  FVar20 = FPropertyPathNameTree::Find
                     ((FPropertyPathNameTree *)local_338,(FPropertyPathName *)local_420,
                      (int)&local_d08);
  if (*(longlong *)FVar20 == 0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar3 = pFVar19->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_5b8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_5b8,0);
    if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
    }
  }
  FVar20 = FPropertyPathNameTree::Find
                     ((FPropertyPathNameTree *)local_338,(FPropertyPathName *)(local_420 + 8),
                      (int)&local_cf8);
  if (*(longlong *)FVar20 == 0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar3 = pFVar19->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_5a8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_5a8,0);
    if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
    }
  }
  FPropertyPathNameTree::CreateConstIterator
            ((FPropertyPathNameTree *)local_338,(FConstIterator *)&local_c18);
  plVar22 = local_c18;
  if (local_c10.CurrentBitIndex < (local_c10.Array)->NumBits) {
    lVar24 = (longlong)local_c10.CurrentBitIndex * 0x98;
    local_c78.Index = *(int *)(lVar24 + 8 + *local_c18);
    bVar13 = UE::operator==(&local_c78,local_d98);
    if (!bVar13) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_598,L"Condition failed");
      (*pcVar4)(pFVar3,&local_598,0);
      if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_598.Data.AllocatorInstance.Data);
      }
    }
    if (*plVar22 + 0x10 + lVar24 == 0) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_588,L"Condition failed");
      (*pcVar4)(pFVar3,&local_588,0);
      if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_588.Data.AllocatorInstance.Data);
      }
    }
    plVar22 = (longlong *)(*plVar22 + 0x10 + lVar24);
    if ((plVar22 != (longlong *)0x0) && (*plVar22 != 0)) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_578,L"Condition expected to return false but returned true");
      (*pcVar4)(pFVar3,&local_578,0);
      if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_578.Data.AllocatorInstance.Data);
      }
    }
    local_c10.UnvisitedBitMask = local_c10.UnvisitedBitMask & ~local_c10._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c10);
    if (local_c10.CurrentBitIndex < (local_c10.Array)->NumBits) {
      lVar24 = (longlong)local_c10.CurrentBitIndex * 0x98;
      local_c74.Index = *(int *)(lVar24 + 8 + *local_c18);
      bVar13 = UE::operator==(&local_c74,&local_d80);
      if (!bVar13) {
        pFVar19 = FAutomationTestFramework::Get();
        pFVar3 = pFVar19->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&local_568,L"Condition failed");
        (*pcVar4)(pFVar3,&local_568,0);
        if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_568.Data.AllocatorInstance.Data);
        }
      }
      if (*local_c18 + 0x10 + lVar24 == 0) {
        pFVar19 = FAutomationTestFramework::Get();
        pFVar3 = pFVar19->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&local_558,L"Condition failed");
        (*pcVar4)(pFVar3,&local_558,0);
        if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_558.Data.AllocatorInstance.Data);
        }
      }
      plVar22 = (longlong *)(*local_c18 + 0x10 + lVar24);
      if ((plVar22 != (longlong *)0x0) && (*plVar22 != 0)) {
        pFVar19 = FAutomationTestFramework::Get();
        pFVar3 = pFVar19->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&local_548,L"Condition expected to return false but returned true");
        (*pcVar4)(pFVar3,&local_548,0);
        if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_548.Data.AllocatorInstance.Data);
        }
      }
      local_c10.UnvisitedBitMask = local_c10.UnvisitedBitMask & ~local_c10._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c10);
      if (local_c10.CurrentBitIndex < (local_c10.Array)->NumBits) {
        pFVar19 = FAutomationTestFramework::Get();
        pFVar3 = pFVar19->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&local_538,L"Condition expected to return false but returned true");
        (*pcVar4)(pFVar3,&local_538,0);
        if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_538.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  local_2f0 = 0;
  if (local_2f8 != (void *)0x0) {
    FMemory::Free(local_2f8);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_338,0,local_338._8_4_);
  iVar15 = SUB84(local_338._8_8_,4);
  local_338._8_8_ = local_338._8_8_ & 0xffffffff00000000;
  if (iVar15 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,0,(ForAnyElementType *)local_338,0,(int *)(local_338 + 0xc));
  }
  local_308 = 0xffffffff;
  local_304 = 0;
  local_310 = 0;
  if (0x80 < local_30c) {
    local_30c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_338 + 0x10),0);
  }
  if (local_318 != (void *)0x0) {
    FMemory::Free(local_318);
  }
  if ((FScriptContainerElement *)local_338._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_338._0_8_);
  }
  if (local_cf8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cf8.Data);
  }
  if (local_d08.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d08.Data);
  }
  pFVar19 = FAutomationTestFramework::Get();
  pFVar3 = pFVar19->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&local_528,L"DiffNameSameType");
  (*pcVar4)(pFVar3,&local_528,0);
  if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_528.Data.AllocatorInstance.Data);
  }
  FVar10.Index = local_d98[0].Index;
  local_a70 = local_d98[0].Index;
  local_ce8.Data = (FScriptContainerElement *)0x0;
  local_ce0 = 0;
  uStack_a74 = 0;
  local_a78 = FVar14.Value;
  iVar15 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,&local_ce8,(int *)((longlong)&local_ce0 + 4));
  FVar11.Index = local_d98[0].Index;
  FVar23 = FVar2.ComparisonIndex.Value;
  uStack_aa4 = 0;
  local_ce0 = CONCAT44(local_ce0._4_4_,iVar15 + 1);
  *(ulonglong *)(local_ce8.Data + (longlong)iVar15 * 0xc) = CONCAT44(uStack_a74,local_a78);
  *(int *)(local_ce8.Data + (longlong)iVar15 * 0xc + 8) = FVar10.Index;
  local_aa0 = local_d98[0].Index;
  local_d18.Data = (FScriptContainerElement *)0x0;
  local_d10 = 0;
  local_aa8 = FVar23.Value;
  iVar15 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,&local_d18,(int *)((longlong)&local_d10 + 4));
  local_d10 = CONCAT44(local_d10._4_4_,iVar15 + 1);
  *(ulonglong *)(local_d18.Data + (longlong)iVar15 * 0xc) = CONCAT44(uStack_aa4,local_aa8);
  *(int *)(local_d18.Data + (longlong)iVar15 * 0xc + 8) = FVar11.Index;
  local_2e8._0_8_ = (FScriptContainerElement *)0x0;
  local_2e8._8_8_ = 0;
  local_2c8 = (void *)0x0;
  local_2c0 = 0;
  local_2bc = 0x80;
  local_2b8 = 0xffffffff;
  local_2b4 = 0;
  local_2a8 = (void *)0x0;
  local_2a0 = 0;
  FPropertyPathNameTree::Add
            ((FPropertyPathNameTree *)local_2e8,(FPropertyPathName *)local_410,(int)&local_ce8);
  FPropertyPathNameTree::Add
            ((FPropertyPathNameTree *)local_2e8,(FPropertyPathName *)(local_410 + 8),(int)&local_d18
            );
  FVar20 = FPropertyPathNameTree::Find
                     ((FPropertyPathNameTree *)local_2e8,(FPropertyPathName *)local_400,
                      (int)&local_ce8);
  if (*(longlong *)FVar20 == 0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar3 = pFVar19->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_518,L"Condition failed");
    (*pcVar4)(pFVar3,&local_518,0);
    if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_518.Data.AllocatorInstance.Data);
    }
  }
  FVar20 = FPropertyPathNameTree::Find
                     ((FPropertyPathNameTree *)local_2e8,(FPropertyPathName *)(local_400 + 8),
                      (int)&local_d18);
  if (*(longlong *)FVar20 == 0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar3 = pFVar19->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_508,L"Condition failed");
    (*pcVar4)(pFVar3,&local_508,0);
    if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_508.Data.AllocatorInstance.Data);
    }
  }
  FPropertyPathNameTree::CreateConstIterator
            ((FPropertyPathNameTree *)local_2e8,(FConstIterator *)&local_bf0);
  plVar22 = local_bf0;
  if (local_be8.CurrentBitIndex < (local_be8.Array)->NumBits) {
    lVar24 = (longlong)local_be8.CurrentBitIndex * 0x98;
    if (*(FName *)(lVar24 + *local_bf0) != FVar1) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_4f8,L"Condition failed");
      (*pcVar4)(pFVar3,&local_4f8,0);
      if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
      }
    }
    if (*plVar22 + 0x10 + lVar24 == 0) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_4e8,L"Condition failed");
      (*pcVar4)(pFVar3,&local_4e8,0);
      if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
      }
    }
    plVar22 = (longlong *)(*plVar22 + 0x10 + lVar24);
    if ((plVar22 != (longlong *)0x0) && (*plVar22 != 0)) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_4d8,L"Condition expected to return false but returned true");
      (*pcVar4)(pFVar3,&local_4d8,0);
      if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
      }
    }
    local_be8.UnvisitedBitMask = local_be8.UnvisitedBitMask & ~local_be8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_be8);
    if (local_be8.CurrentBitIndex < (local_be8.Array)->NumBits) {
      lVar24 = (longlong)local_be8.CurrentBitIndex * 0x98;
      if (*(FName *)(lVar24 + *local_bf0) != FVar2) {
        pFVar19 = FAutomationTestFramework::Get();
        pFVar3 = pFVar19->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&local_4c8,L"Condition failed");
        (*pcVar4)(pFVar3,&local_4c8,0);
        if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
        }
      }
      if (*local_bf0 + 0x10 + lVar24 == 0) {
        pFVar19 = FAutomationTestFramework::Get();
        pFVar3 = pFVar19->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&local_4b8,L"Condition failed");
        (*pcVar4)(pFVar3,&local_4b8,0);
        if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
        }
      }
      plVar22 = (longlong *)(*local_bf0 + 0x10 + lVar24);
      if ((plVar22 != (longlong *)0x0) && (*plVar22 != 0)) {
        pFVar19 = FAutomationTestFramework::Get();
        pFVar3 = pFVar19->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&local_4a8,L"Condition expected to return false but returned true");
        (*pcVar4)(pFVar3,&local_4a8,0);
        if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
        }
      }
      local_be8.UnvisitedBitMask = local_be8.UnvisitedBitMask & ~local_be8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_be8);
      if (local_be8.CurrentBitIndex < (local_be8.Array)->NumBits) {
        pFVar19 = FAutomationTestFramework::Get();
        pFVar3 = pFVar19->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&local_498,L"Condition expected to return false but returned true");
        (*pcVar4)(pFVar3,&local_498,0);
        if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_498.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  local_2a0 = 0;
  if (local_2a8 != (void *)0x0) {
    FMemory::Free(local_2a8);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_2e8,0,local_2e8._8_4_);
  iVar15 = SUB84(local_2e8._8_8_,4);
  local_2e8._8_8_ = local_2e8._8_8_ & 0xffffffff00000000;
  if (iVar15 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,0,(ForAnyElementType *)local_2e8,0,(int *)(local_2e8 + 0xc));
  }
  local_2b8 = 0xffffffff;
  local_2b4 = 0;
  local_2c0 = 0;
  if (0x80 < local_2bc) {
    local_2bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_2e8 + 0x10),0);
  }
  if (local_2c8 != (void *)0x0) {
    FMemory::Free(local_2c8);
  }
  if ((FScriptContainerElement *)local_2e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2e8._0_8_);
  }
  if (local_d18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d18.Data);
  }
  if (local_ce8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ce8.Data);
  }
  pFVar19 = FAutomationTestFramework::Get();
  pFVar3 = pFVar19->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&local_488,L"Tree");
  (*pcVar4)(pFVar3,&local_488,0);
  if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data.AllocatorInstance.Data);
  }
  local_d78.Data = (FScriptContainerElement *)0x0;
  local_d70 = 0;
  FVar17 = FNameEntryId::FromValidEName((EName)local_9c0);
  uStack_bc4 = 0;
  local_bc8 = *(undefined4 *)CONCAT44(extraout_var_03,FVar17.Value);
  local_bc0 = local_d7c.Index;
  iVar15 = (int)local_d70;
  if ((int)local_d70 == local_d70._4_4_) {
    iVar15 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&local_d78,(int *)((longlong)&local_d70 + 4));
  }
  local_d70 = CONCAT44(local_d70._4_4_,iVar15 + 1);
  *(ulonglong *)&local_d78.Data[(longlong)iVar15 * 0xc].field_0x0 = CONCAT44(uStack_bc4,local_bc8);
  *(int *)(local_d78.Data + (longlong)iVar15 * 0xc + 8) = local_bc0;
  local_d58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<UE::FPropertyPathName::FSegment,TSizedDefaultAllocator<32>_>::
  CopyToEmpty<UE::FPropertyPathName::FSegment,int>
            (&local_d58,(FSegment *)local_d78.Data,iVar15 + 1,0);
  uStack_bb4 = 0;
  local_bb0 = local_d98[0].Index;
  local_bb8 = FVar14.Value;
  if (local_d58.ArrayNum == local_d58.ArrayMax) {
    local_d58.ArrayNum =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x40c,&local_d58.AllocatorInstance,&local_d58.ArrayMax);
  }
  *(ulonglong *)(local_d58.AllocatorInstance.Data + (longlong)local_d58.ArrayNum * 0xc) =
       CONCAT44(uStack_bb4,local_bb8);
  *(int *)(local_d58.AllocatorInstance.Data + (longlong)local_d58.ArrayNum * 0xc + 8) = local_bb0;
  local_d48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d58.ArrayNum = local_d58.ArrayNum + 1;
  TArray<UE::FPropertyPathName::FSegment,TSizedDefaultAllocator<32>_>::
  CopyToEmpty<UE::FPropertyPathName::FSegment,int>
            (&local_d48,(FSegment *)local_d78.Data,(int)local_d70,0);
  uStack_ba4 = 0;
  local_ba0 = local_d80.Index;
  local_ba8 = FVar23.Value;
  if (local_d48.ArrayNum == local_d48.ArrayMax) {
    local_d48.ArrayNum =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x40c,&local_d48.AllocatorInstance,&local_d48.ArrayMax);
  }
  *(ulonglong *)(local_d48.AllocatorInstance.Data + (longlong)local_d48.ArrayNum * 0xc) =
       CONCAT44(uStack_ba4,local_ba8);
  *(int *)(local_d48.AllocatorInstance.Data + (longlong)local_d48.ArrayNum * 0xc + 8) = local_ba0;
  local_248._0_8_ = 0;
  local_248._8_8_ = 0;
  local_248._32_8_ = 0;
  local_248._40_4_ = 0;
  local_248._44_4_ = 0x80;
  local_248._48_4_ = 0xffffffff;
  local_248._52_4_ = 0;
  local_208 = (void *)0x0;
  local_200 = 0;
  local_d48.ArrayNum = local_d48.ArrayNum + 1;
  FPropertyPathNameTree::Add
            ((FPropertyPathNameTree *)local_248,(FPropertyPathName *)local_3f0,(int)&local_d58);
  FPropertyPathNameTree::Add
            ((FPropertyPathNameTree *)local_248,(FPropertyPathName *)(local_3f0 + 8),(int)&local_d48
            );
  FVar20 = FPropertyPathNameTree::Find
                     ((FPropertyPathNameTree *)local_248,(FPropertyPathName *)(local_398 + 8),
                      (int)&local_d78);
  if (*(longlong *)FVar20 == 0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar3 = pFVar19->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_9a8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_9a8,0);
    if (local_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9a8.Data.AllocatorInstance.Data);
    }
  }
  FVar20 = FPropertyPathNameTree::Find
                     ((FPropertyPathNameTree *)local_248,(FPropertyPathName *)local_398,
                      (int)&local_d58);
  if (*(longlong *)FVar20 == 0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar3 = pFVar19->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_988,L"Condition failed");
    (*pcVar4)(pFVar3,&local_988,0);
    if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_988.Data.AllocatorInstance.Data);
    }
  }
  FVar20 = FPropertyPathNameTree::Find
                     ((FPropertyPathNameTree *)local_248,(FPropertyPathName *)(local_3a8 + 8),
                      (int)&local_d48);
  if (*(longlong *)FVar20 == 0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar3 = pFVar19->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_978,L"Condition failed");
    (*pcVar4)(pFVar3,&local_978,0);
    if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_978.Data.AllocatorInstance.Data);
    }
  }
  FPropertyPathNameTree::CreateConstIterator
            ((FPropertyPathNameTree *)local_248,(FConstIterator *)&local_ae0);
  if (local_ad8.CurrentBitIndex < (local_ad8.Array)->NumBits) {
    uVar5 = *(ulonglong *)((longlong)local_ad8.CurrentBitIndex * 0x98 + *local_ae0);
    FVar17 = FNameEntryId::FromValidEName((EName)local_9c4);
    if (uVar5 != *(uint *)CONCAT44(extraout_var_04,FVar17.Value)) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_968,L"Condition failed");
      (*pcVar4)(pFVar3,&local_968,0);
      if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_968.Data.AllocatorInstance.Data);
      }
    }
    local_c70[0].Index = *(int *)((longlong)local_ad8.CurrentBitIndex * 0x98 + 8 + *local_ae0);
    bVar13 = UE::operator==(local_c70,&local_d7c);
    if (!bVar13) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_958,L"Condition failed");
      (*pcVar4)(pFVar3,&local_958,0);
      if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_958.Data.AllocatorInstance.Data);
      }
    }
    puVar26 = (undefined8 *)(*local_ae0 + 0x10 + (longlong)local_ad8.CurrentBitIndex * 0x98);
    if (puVar26 != (undefined8 *)0x0) {
      pFVar25 = (FPropertyPathNameTree *)*puVar26;
    }
    local_ad8.UnvisitedBitMask = local_ad8.UnvisitedBitMask & ~local_ad8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_ad8);
    if (local_ad8.CurrentBitIndex < (local_ad8.Array)->NumBits) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_948,L"Condition expected to return false but returned true");
      (*pcVar4)(pFVar3,&local_948,0);
      if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_948.Data.AllocatorInstance.Data);
      }
    }
    if (pFVar25 != (FPropertyPathNameTree *)0x0) {
      FPropertyPathNameTree::CreateConstIterator(pFVar25,(FConstIterator *)&local_cb8);
      if (local_cb0.CurrentBitIndex < (local_cb0.Array)->NumBits) {
        if (*(FName *)((longlong)local_cb0.CurrentBitIndex * 0x98 + *local_cb8) != FVar1) {
          pFVar19 = FAutomationTestFramework::Get();
          pFVar3 = pFVar19->CurrentTest;
          pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
          ::FString::FString(&local_938,L"Condition failed");
          (*pcVar4)(pFVar3,&local_938,0);
          if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_938.Data.AllocatorInstance.Data);
          }
        }
        if (*local_cb8 + 0x10 + (longlong)local_cb0.CurrentBitIndex * 0x98 == 0) {
          pFVar19 = FAutomationTestFramework::Get();
          pFVar3 = pFVar19->CurrentTest;
          pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
          ::FString::FString(&local_928,L"Condition failed");
          (*pcVar4)(pFVar3,&local_928,0);
          if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_928.Data.AllocatorInstance.Data);
          }
        }
        plVar22 = (longlong *)(*local_cb8 + 0x10 + (longlong)local_cb0.CurrentBitIndex * 0x98);
        if ((plVar22 != (longlong *)0x0) && (*plVar22 != 0)) {
          pFVar19 = FAutomationTestFramework::Get();
          pFVar3 = pFVar19->CurrentTest;
          pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
          ::FString::FString(&local_918,L"Condition expected to return false but returned true");
          (*pcVar4)(pFVar3,&local_918,0);
          if (local_918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_918.Data.AllocatorInstance.Data);
          }
        }
        local_cb0.UnvisitedBitMask = local_cb0.UnvisitedBitMask & ~local_cb0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_cb0);
        if (local_cb0.CurrentBitIndex < (local_cb0.Array)->NumBits) {
          if (*(FName *)((longlong)local_cb0.CurrentBitIndex * 0x98 + *local_cb8) != FVar2) {
            pFVar19 = FAutomationTestFramework::Get();
            pFVar3 = pFVar19->CurrentTest;
            pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
            ::FString::FString(&local_908,L"Condition failed");
            (*pcVar4)(pFVar3,&local_908,0);
            if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_908.Data.AllocatorInstance.Data);
            }
          }
          if (*local_cb8 + 0x10 + (longlong)local_cb0.CurrentBitIndex * 0x98 == 0) {
            pFVar19 = FAutomationTestFramework::Get();
            pFVar3 = pFVar19->CurrentTest;
            pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
            ::FString::FString(&local_8f8,L"Condition failed");
            (*pcVar4)(pFVar3,&local_8f8,0);
            if (local_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
            }
          }
          plVar22 = (longlong *)(*local_cb8 + 0x10 + (longlong)local_cb0.CurrentBitIndex * 0x98);
          if ((plVar22 != (longlong *)0x0) && (*plVar22 != 0)) {
            pFVar19 = FAutomationTestFramework::Get();
            pFVar3 = pFVar19->CurrentTest;
            pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
            ::FString::FString(&local_8e8,L"Condition expected to return false but returned true");
            (*pcVar4)(pFVar3,&local_8e8,0);
            if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
            }
          }
          local_cb0.UnvisitedBitMask = local_cb0.UnvisitedBitMask & ~local_cb0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_cb0);
          if (local_cb0.CurrentBitIndex < (local_cb0.Array)->NumBits) {
            pFVar19 = FAutomationTestFramework::Get();
            pFVar3 = pFVar19->CurrentTest;
            pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
            ::FString::FString(&local_8d8,L"Condition expected to return false but returned true");
            (*pcVar4)(pFVar3,&local_8d8,0);
            if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
            }
          }
        }
      }
    }
  }
  FPropertyPathNameTree::Find
            ((FPropertyPathNameTree *)local_248,(FPropertyPathName *)local_b28,(int)&local_d78);
  if (local_b28 == (undefined1  [8])0x0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar3 = pFVar19->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_8c8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_8c8,0);
    if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
    }
    if (local_b28 == (undefined1  [8])0x0) goto LAB_1422f561c;
  }
  pFVar25 = *(FPropertyPathNameTree **)local_b28;
  if (pFVar25 != (FPropertyPathNameTree *)0x0) {
    FVar20 = FPropertyPathNameTree::Find(pFVar25,(FPropertyPathName *)local_3a8,(int)&local_d58);
    if (*(longlong *)FVar20 == 0) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_8b8,L"Condition failed");
      (*pcVar4)(pFVar3,&local_8b8,0);
      if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
      }
    }
    FVar20 = FPropertyPathNameTree::Find
                       (pFVar25,(FPropertyPathName *)(local_3b8 + 8),(int)&local_d48);
    if (*(longlong *)FVar20 == 0) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_7c8,L"Condition failed");
      (*pcVar4)(pFVar3,&local_7c8,0);
      if (local_7c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_1422f561c:
  FVar20 = FPropertyPathNameTree::Find
                     ((FPropertyPathNameTree *)local_248,(FPropertyPathName *)local_3b8,
                      (int)&local_d58);
  if (*(longlong *)FVar20 != 0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar3 = pFVar19->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_8a8,L"Condition expected to return false but returned true");
    (*pcVar4)(pFVar3,&local_8a8,0);
    if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
    }
  }
  local_200 = 0;
  if (local_208 != (void *)0x0) {
    FMemory::Free(local_208);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_248);
  if (local_d48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d48.AllocatorInstance.Data);
  }
  if (local_d58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d58.AllocatorInstance.Data);
  }
  if ((FSegment *)local_d78.Data != (FSegment *)0x0) {
    FMemory::Free(local_d78.Data);
  }
  pFVar19 = FAutomationTestFramework::Get();
  pFVar3 = pFVar19->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&local_898,L"Remove");
  (*pcVar4)(pFVar3,&local_898,0);
  if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_898.Data.AllocatorInstance.Data);
  }
  local_d68.Data = (FScriptContainerElement *)0x0;
  local_d60 = 0;
  FVar17 = FNameEntryId::FromValidEName((EName)local_9c8);
  uStack_b94 = 0;
  local_b98 = *(undefined4 *)CONCAT44(extraout_var_05,FVar17.Value);
  local_b90 = local_d7c.Index;
  iVar15 = (int)local_d60;
  if ((int)local_d60 == local_d60._4_4_) {
    iVar15 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&local_d68,(int *)((longlong)&local_d60 + 4));
  }
  local_d60 = CONCAT44(local_d60._4_4_,iVar15 + 1);
  *(ulonglong *)&local_d68.Data[(longlong)iVar15 * 0xc].field_0x0 = CONCAT44(uStack_b94,local_b98);
  *(int *)(local_d68.Data + (longlong)iVar15 * 0xc + 8) = local_b90;
  local_d28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<UE::FPropertyPathName::FSegment,TSizedDefaultAllocator<32>_>::
  CopyToEmpty<UE::FPropertyPathName::FSegment,int>
            (&local_d28,(FSegment *)local_d68.Data,iVar15 + 1,0);
  uStack_b84 = 0;
  local_b80 = local_d98[0].Index;
  local_b88 = FVar14.Value;
  if (local_d28.ArrayNum == local_d28.ArrayMax) {
    local_d28.ArrayNum =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x40c,&local_d28.AllocatorInstance,&local_d28.ArrayMax);
  }
  *(ulonglong *)(local_d28.AllocatorInstance.Data + (longlong)local_d28.ArrayNum * 0xc) =
       CONCAT44(uStack_b84,local_b88);
  *(int *)(local_d28.AllocatorInstance.Data + (longlong)local_d28.ArrayNum * 0xc + 8) = local_b80;
  local_d38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d28.ArrayNum = local_d28.ArrayNum + 1;
  TArray<UE::FPropertyPathName::FSegment,TSizedDefaultAllocator<32>_>::
  CopyToEmpty<UE::FPropertyPathName::FSegment,int>
            (&local_d38,(FSegment *)local_d68.Data,(int)local_d60,0);
  uStack_b74 = 0;
  local_b70 = local_d80.Index;
  local_b78 = FVar23.Value;
  if (local_d38.ArrayNum == local_d38.ArrayMax) {
    local_d38.ArrayNum =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x40c,&local_d38.AllocatorInstance,&local_d38.ArrayMax);
  }
  *(ulonglong *)(local_d38.AllocatorInstance.Data + (longlong)local_d38.ArrayNum * 0xc) =
       CONCAT44(uStack_b74,local_b78);
  *(int *)(local_d38.AllocatorInstance.Data + (longlong)local_d38.ArrayNum * 0xc + 8) = local_b70;
  local_1a8._0_8_ = 0;
  local_1a8._8_8_ = 0;
  local_1a8._32_8_ = 0;
  local_1a8._40_4_ = 0;
  local_1a8._44_4_ = 0x80;
  local_1a8._48_4_ = 0xffffffff;
  local_1a8._52_4_ = 0;
  local_168 = (void *)0x0;
  local_160 = 0;
  local_d38.ArrayNum = local_d38.ArrayNum + 1;
  FPropertyPathNameTree::Add
            ((FPropertyPathNameTree *)local_1a8,(FPropertyPathName *)(local_3c8 + 8),(int)&local_d28
            );
  FPropertyPathNameTree::Add
            ((FPropertyPathNameTree *)local_1a8,(FPropertyPathName *)local_3c8,(int)&local_d38);
  bVar13 = FPropertyPathNameTree::Remove
                     ((FPropertyPathNameTree *)local_1a8,(FPropertyPathName *)&local_d28,0);
  if (bVar13) {
    FVar20 = FPropertyPathNameTree::Find
                       ((FPropertyPathNameTree *)local_1a8,(FPropertyPathName *)(local_3d8 + 8),
                        (int)&local_d68);
    if (*(longlong *)FVar20 == 0) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_888,L"Condition failed");
      (*pcVar4)(pFVar3,&local_888);
      if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_888.Data.AllocatorInstance.Data);
      }
    }
    bVar13 = FPropertyPathNameTree::Remove
                       ((FPropertyPathNameTree *)local_1a8,(FPropertyPathName *)&local_d38,0);
    if ((bVar13) &&
       (FVar20 = FPropertyPathNameTree::Find
                           ((FPropertyPathNameTree *)local_1a8,(FPropertyPathName *)local_3d8,
                            (int)&local_d68), *(longlong *)FVar20 != 0)) {
      pFVar19 = FAutomationTestFramework::Get();
      pFVar3 = pFVar19->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_878,L"Condition expected to return false but returned true");
      (*pcVar4)(pFVar3,&local_878,0);
      if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_878.Data.AllocatorInstance.Data);
      }
    }
  }
  local_160 = 0;
  if (local_168 != (void *)0x0) {
    FMemory::Free(local_168);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1a8);
  if (local_d38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d38.AllocatorInstance.Data);
  }
  if (local_d28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d28.AllocatorInstance.Data);
  }
  if ((FSegment *)local_d68.Data != (FSegment *)0x0) {
    FMemory::Free(local_d68.Data);
  }
  if (local_108.OuterNodeIndex.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_108.OuterNodeIndex.AllocatorInstance.SecondaryData);
  }
  if (local_108.Nodes.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
    FMemory::Free((void *)local_108.Nodes.AllocatorInstance.SecondaryData);
  }
  return;
}

