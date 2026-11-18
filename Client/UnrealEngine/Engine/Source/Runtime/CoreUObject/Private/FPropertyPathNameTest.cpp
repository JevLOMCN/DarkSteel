// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// GetTestFlags @ 1422c8530

EAutomationTestFlags __thiscall UE::FPropertyPathNameTest::GetTestFlags(FPropertyPathNameTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 1422c8540

bool __thiscall UE::FPropertyPathNameTest::IsStressTest(FPropertyPathNameTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1422c8550

uint __thiscall UE::FPropertyPathNameTest::GetRequiredDeviceNum(FPropertyPathNameTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1422c8560

FString * __thiscall
UE::FPropertyPathNameTest::GetTestSourceFileName
          (FPropertyPathNameTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Tests\\UObject\\PropertyPathNameTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1422c8590

int __thiscall UE::FPropertyPathNameTest::GetTestSourceFileLine(FPropertyPathNameTest *this)

{
  return 0xd;
}

// GetTests @ 1422c85a0

/* WARNING: Removing unreachable block (ram,0x0001422c871e) */

void __thiscall
UE::FPropertyPathNameTest::GetTests
          (FPropertyPathNameTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 1422c8740

bool __thiscall UE::FPropertyPathNameTest::RunTest(FPropertyPathNameTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 1422c8770

FString * __thiscall
UE::FPropertyPathNameTest::GetBeautifiedTestName
          (FPropertyPathNameTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPropertyPathNameTest @ 1422cdb40

FPropertyPathNameTest * __thiscall
UE::FPropertyPathNameTest::FPropertyPathNameTest(FPropertyPathNameTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPropertyPathNameTest_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][UObject][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"CoreUObject::PropertyPathName");
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

// TestBody @ 1422efd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::FPropertyPathNameTest::TestBody(FPropertyPathNameTest *this,FString *param_1)

{
  FName FVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  ulonglong uVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FPropertyTypeName FVar10;
  FPropertyTypeName FVar11;
  undefined4 uVar12;
  bool bVar13;
  FNameEntryId FVar14;
  int iVar15;
  FNameEntryId FVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  FName *pFVar22;
  undefined4 extraout_var;
  FAutomationTestFramework *pFVar23;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  FPropertyPathNameSegment *pFVar24;
  undefined4 extraout_var_03;
  longlong lVar25;
  undefined1 auStackY_d68 [32];
  ForAnyElementType local_d38;
  undefined8 local_d30;
  FPropertyTypeName local_d28 [2];
  FPropertyPathName local_d20;
  FPropertyPathName local_d10;
  FPropertyPathName local_d00;
  FPropertyPathName local_cf0;
  FPropertyPathName local_ce0;
  FPropertyPathName local_cd0;
  FPropertyPathName local_cc0;
  FPropertyPathName local_cb0;
  FPropertyPathName local_ca0;
  FPropertyPathName local_c90;
  undefined4 local_c80;
  wchar_t *local_c78;
  undefined4 uStack_c70;
  undefined4 uStack_c6c;
  FPropertyPathName local_c68;
  FPropertyPathName local_c58;
  undefined1 local_c48 [16];
  FName local_c38;
  int iStack_c30;
  undefined4 uStack_c2c;
  uint local_c28;
  undefined4 uStack_c24;
  uint local_c20;
  undefined4 uStack_c1c;
  uint local_c18;
  undefined4 uStack_c14;
  uint local_c10;
  undefined4 uStack_c0c;
  uint local_c08;
  undefined4 uStack_c04;
  uint local_c00;
  undefined4 uStack_bfc;
  int local_bf8;
  uint local_bf0;
  undefined4 uStack_bec;
  undefined4 local_be8;
  uint local_be0;
  undefined4 uStack_bdc;
  undefined4 local_bd8;
  uint local_bd0;
  undefined4 uStack_bcc;
  int local_bc8;
  uint local_bc0;
  undefined4 uStack_bbc;
  int local_bb8;
  uint local_bb0;
  undefined4 uStack_bac;
  undefined4 local_ba8;
  uint local_ba0;
  undefined4 uStack_b9c;
  int local_b98;
  uint local_b90;
  undefined4 uStack_b8c;
  int local_b88;
  uint local_b80;
  undefined4 uStack_b7c;
  int local_b78;
  FPropertyPathName local_b70;
  FName local_b60;
  undefined4 local_b58;
  undefined4 local_b54;
  FName local_b50;
  undefined4 local_b48;
  undefined4 local_b44;
  FName local_b40;
  undefined4 local_b38;
  undefined4 local_b34;
  FName local_b30;
  undefined4 local_b28;
  undefined4 local_b24;
  FName local_b20;
  undefined4 local_b18;
  undefined4 local_b14;
  FPropertyPathName local_b10;
  uint local_b00;
  undefined4 uStack_afc;
  uint local_af0;
  undefined4 uStack_aec;
  uint local_ae0;
  undefined4 uStack_adc;
  uint local_ad0;
  undefined4 uStack_acc;
  uint local_ac0;
  undefined4 uStack_abc;
  uint local_ab0;
  undefined4 uStack_aac;
  undefined1 local_aa0 [8];
  uint local_a98;
  undefined4 uStack_a94;
  ulonglong local_a88;
  FPropertyTypeName local_a80;
  int local_a7c;
  ulonglong local_a78;
  FPropertyTypeName local_a70;
  int local_a6c;
  undefined1 local_a68 [4];
  undefined1 local_a64 [4];
  undefined1 local_a60 [8];
  FString local_a58;
  FString local_a48;
  FString local_a38;
  FString local_a28;
  FString local_a18;
  FString local_a08;
  FString local_9f8;
  FString local_9e8;
  FString local_9d8;
  undefined4 local_9c8;
  undefined4 uStack_9c4;
  FString local_9b8;
  FString local_9a8;
  FString local_998;
  FString local_988;
  FString local_978;
  FString local_968;
  FString local_958;
  undefined4 local_948;
  undefined4 uStack_944;
  FString local_938;
  undefined4 local_928;
  undefined4 uStack_924;
  FString local_918;
  FString local_908;
  FString local_8f8;
  FString local_8e8;
  FString local_8d8;
  FString local_8c8;
  undefined4 local_8b8;
  undefined4 uStack_8b4;
  FString local_8a8;
  undefined4 local_898;
  undefined4 uStack_894;
  FString local_888;
  FString local_878;
  TStringView<wchar_t> local_868;
  FString local_858;
  FString local_848;
  FString local_838;
  TStringView<wchar_t> local_828;
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
  FName local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FName local_538;
  FName local_530;
  FName local_528;
  FName local_520;
  TStringView<wchar_t> local_518;
  TStringView<wchar_t> local_508;
  TStringView<wchar_t> local_4f8;
  TStringView<wchar_t> local_4e8;
  TStringView<wchar_t> local_4d8;
  FPropertyPathNameSegment local_4c8;
  TStringBuilderBase<wchar_t> local_4b8;
  wchar_t local_498 [16];
  TStringBuilderBase<wchar_t> local_478;
  wchar_t local_458 [16];
  TStringBuilderBase<wchar_t> local_438;
  wchar_t local_418 [16];
  TStringBuilderWithBuffer<wchar_t,16> local_3f8;
  FPropertyTypeNameBuilder local_3b8;
  FPropertyTypeNameBuilder local_2e8;
  FPropertyTypeNameBuilder local_218;
  TStringBuilderWithBuffer<wchar_t,128> local_148;
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStackY_d68;
  pFVar22 = ::FName::FName(&local_538,5,L"Count",FNAME_Add);
  FVar1 = *pFVar22;
  local_218.Nodes.AllocatorInstance.SecondaryData = (ForElementType<UE::FPropertyTypeNameNode>)0x0;
  local_218.Nodes.ArrayNum = 0;
  local_218.Nodes.ArrayMax = 10;
  local_218.OuterNodeIndex.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_218.OuterNodeIndex.ArrayNum = 0;
  local_218.OuterNodeIndex.ArrayMax = 10;
  local_218.ActiveIndex = -1;
  FVar14 = FNameEntryId::FromValidEName((EName)local_a60);
  uStack_c24 = 0;
  local_c28 = *(uint *)CONCAT44(extraout_var,FVar14.Value);
  FVar5.Number = 0;
  FVar5.ComparisonIndex.Value = local_c28;
  FPropertyTypeNameBuilder::AddName(&local_218,FVar5);
  FPropertyTypeNameBuilder::Build(&local_218);
  pFVar23 = FAutomationTestFramework::Get();
  pFVar2 = pFVar23->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_a18,L"Empty");
  (*pcVar3)(pFVar2,&local_a18,0,0);
  if (local_a18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a18.Data.AllocatorInstance.Data);
  }
  local_438.Base = local_418;
  iStack_c30 = 4;
  local_438.CurPos = local_418;
  local_c38 = (FName)0x1507b8c60;
  local_518._12_4_ = uStack_c2c;
  local_518.Size = 4;
  local_438.End = (wchar_t *)&local_3f8;
  local_b70.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b70.Segments.ArrayNum = 0;
  local_b70.Segments.ArrayMax = 0;
  local_438.bIsDynamic = false;
  local_438.bIsExternal = false;
  local_518.DataPtr = L" -> ";
  FPropertyPathName::ToString(&local_b70,&local_438,&local_518);
  lVar25 = (longlong)local_438.CurPos - (longlong)local_438.Base;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_438);
  if ((int)(lVar25 >> 1) != 0) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_a08,L"Condition failed");
    (*pcVar3)(pFVar2,&local_a08,0);
    if (local_a08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a08.Data.AllocatorInstance.Data);
    }
  }
  if (local_b70.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b70.Segments.AllocatorInstance.Data);
  }
  pFVar23 = FAutomationTestFramework::Get();
  pFVar2 = pFVar23->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_9f8,L"Name");
  (*pcVar3)(pFVar2,&local_9f8,0,0);
  if (local_9f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9f8.Data.AllocatorInstance.Data);
  }
  FVar14 = FVar1.ComparisonIndex.Value;
  local_ce0.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ce0.Segments.ArrayNum = 0;
  local_ce0.Segments.ArrayMax = 0;
  local_b58 = 0;
  local_b54 = 0xffffffff;
  uStack_bdc = 0;
  local_bd8 = 0;
  local_be0 = FVar14.Value;
  local_b60 = FVar1;
  iVar15 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,(ForAnyElementType *)&local_ce0,&local_ce0.Segments.ArrayMax);
  local_ce0.Segments.ArrayNum = iVar15 + 1;
  *(ulonglong *)(local_ce0.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc) =
       CONCAT44(uStack_bdc,local_be0);
  *(undefined4 *)(local_ce0.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc + 8) = 0;
  if (iVar15 + 1 == 0) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_9e8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_9e8,0);
    if (local_9e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9e8.Data.AllocatorInstance.Data);
    }
  }
  if (local_ce0.Segments.ArrayNum != 1) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_9d8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_9d8,0);
    if (local_9d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9d8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_ce0.Segments.ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_9c4 = 0;
  local_9c8 = (undefined4)*(ulonglong *)local_ce0.Segments.AllocatorInstance.Data;
  if ((FName)(*(ulonglong *)local_ce0.Segments.AllocatorInstance.Data & 0xffffffff) != FVar1) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_9b8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_9b8,0);
    if (local_9b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9b8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_ce0.Segments.ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)(local_ce0.Segments.AllocatorInstance.Data + 8) != 0) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_9a8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_9a8,0);
    if (local_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9a8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_ce0.Segments.ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((int)(*(ulonglong *)local_ce0.Segments.AllocatorInstance.Data >> 0x20) != 0) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_998,L"Condition failed");
    (*pcVar3)(pFVar2,&local_998,0);
    if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_998.Data.AllocatorInstance.Data);
    }
  }
  local_4b8.Base = local_498;
  local_c78 = L" -> ";
  local_4b8.CurPos = local_498;
  uStack_c70 = 4;
  local_508._12_4_ = uStack_c6c;
  local_508.Size = 4;
  local_4b8.End = (wchar_t *)&local_478;
  local_4b8.bIsDynamic = false;
  local_4b8.bIsExternal = false;
  local_508.DataPtr = L" -> ";
  FPropertyPathName::ToString(&local_ce0,&local_4b8,&local_508);
  if (((int)((longlong)local_4b8.CurPos - (longlong)local_4b8.Base >> 1) == 5) &&
     (iVar15 = wcsncmp(L"Count",local_4b8.Base,5), iVar15 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4b8);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4b8);
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_988,L"Condition failed");
    (*pcVar3)(pFVar2,&local_988,0);
    if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_988.Data.AllocatorInstance.Data);
    }
  }
  if (local_ce0.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ce0.Segments.AllocatorInstance.Data);
  }
  pFVar23 = FAutomationTestFramework::Get();
  pFVar2 = pFVar23->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_978,L"NameType");
  (*pcVar3)(pFVar2,&local_978,0,0);
  if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_978.Data.AllocatorInstance.Data);
  }
  FVar10.Index = local_d28[0].Index;
  local_bc8 = local_d28[0].Index;
  local_cf0.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_cf0.Segments.ArrayNum = 0;
  local_cf0.Segments.ArrayMax = 0;
  uStack_bcc = 0;
  local_bd0 = FVar14.Value;
  iVar15 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,(ForAnyElementType *)&local_cf0,&local_cf0.Segments.ArrayMax);
  local_cf0.Segments.ArrayNum = iVar15 + 1;
  *(ulonglong *)(local_cf0.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc) =
       CONCAT44(uStack_bcc,local_bd0);
  *(int *)(local_cf0.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc + 8) = FVar10.Index;
  if (iVar15 + 1 == 0) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_968,L"Condition failed");
    (*pcVar3)(pFVar2,&local_968,0);
    if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_968.Data.AllocatorInstance.Data);
    }
  }
  if (local_cf0.Segments.ArrayNum != 1) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_958,L"Condition failed");
    (*pcVar3)(pFVar2,&local_958,0);
    if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_958.Data.AllocatorInstance.Data);
    }
  }
  if ((local_cf0.Segments.ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_944 = 0;
  local_948 = (undefined4)*(ulonglong *)local_cf0.Segments.AllocatorInstance.Data;
  if ((FName)(*(ulonglong *)local_cf0.Segments.AllocatorInstance.Data & 0xffffffff) != FVar1) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_938,L"Condition failed");
    (*pcVar3)(pFVar2,&local_938,0);
    if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_938.Data.AllocatorInstance.Data);
    }
  }
  if ((local_cf0.Segments.ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_924 = 0;
  uVar4 = *(ulonglong *)local_cf0.Segments.AllocatorInstance.Data;
  local_a70.Index = *(int *)(local_cf0.Segments.AllocatorInstance.Data + 8);
  local_928 = (undefined4)uVar4;
  local_a78 = uVar4 & 0xffffffff;
  local_a6c = (int)(uVar4 >> 0x20) + -1;
  bVar13 = UE::operator==(&local_a70,local_d28);
  if (!bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_918,L"Condition failed");
    (*pcVar3)(pFVar2,&local_918,0);
    if (local_918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_918.Data.AllocatorInstance.Data);
    }
  }
  if ((local_cf0.Segments.ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((int)(*(ulonglong *)local_cf0.Segments.AllocatorInstance.Data >> 0x20) != 0) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_908,L"Condition failed");
    (*pcVar3)(pFVar2,&local_908,0);
    if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_908.Data.AllocatorInstance.Data);
    }
  }
  local_478.Base = local_458;
  local_c78 = L" -> ";
  local_478.CurPos = local_458;
  uStack_c70 = 4;
  local_4f8._12_4_ = uStack_c6c;
  local_4f8.Size = 4;
  local_478.End = (wchar_t *)&local_438;
  local_478.bIsDynamic = false;
  local_478.bIsExternal = false;
  local_4f8.DataPtr = L" -> ";
  FPropertyPathName::ToString(&local_cf0,&local_478,&local_4f8);
  if (((int)((longlong)local_478.CurPos - (longlong)local_478.Base >> 1) == 0x13) &&
     (iVar15 = wcsncmp(L"Count (IntProperty)",local_478.Base,0x13), iVar15 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_478);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_478);
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_8f8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_8f8,0);
    if (local_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_cf0.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cf0.Segments.AllocatorInstance.Data);
  }
  pFVar23 = FAutomationTestFramework::Get();
  pFVar2 = pFVar23->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_8e8,L"NameTypeIndex");
  (*pcVar3)(pFVar2,&local_8e8,0,0);
  if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
  }
  FVar10.Index = local_d28[0].Index;
  local_bb8 = local_d28[0].Index;
  local_cd0.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_cd0.Segments.ArrayNum = 0;
  local_cd0.Segments.ArrayMax = 0;
  uStack_bbc = 8;
  local_bc0 = FVar14.Value;
  iVar15 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,(ForAnyElementType *)&local_cd0,&local_cd0.Segments.ArrayMax);
  local_cd0.Segments.ArrayNum = iVar15 + 1;
  *(ulonglong *)(local_cd0.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc) =
       CONCAT44(uStack_bbc,local_bc0);
  *(int *)(local_cd0.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc + 8) = FVar10.Index;
  if (iVar15 + 1 == 0) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_8d8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_8d8,0);
    if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
    }
  }
  if (local_cd0.Segments.ArrayNum != 1) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_8c8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_8c8,0);
    if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_cd0.Segments.ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_8b4 = 0;
  local_8b8 = (undefined4)*(ulonglong *)local_cd0.Segments.AllocatorInstance.Data;
  if ((FName)(*(ulonglong *)local_cd0.Segments.AllocatorInstance.Data & 0xffffffff) != FVar1) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_8a8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_8a8,0);
    if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_cd0.Segments.ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_894 = 0;
  uVar4 = *(ulonglong *)local_cd0.Segments.AllocatorInstance.Data;
  local_a80.Index = *(int *)(local_cd0.Segments.AllocatorInstance.Data + 8);
  local_898 = (undefined4)uVar4;
  local_a88 = uVar4 & 0xffffffff;
  local_a7c = (int)(uVar4 >> 0x20) + -1;
  bVar13 = UE::operator==(&local_a80,local_d28);
  if (!bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_888,L"Condition failed");
    (*pcVar3)(pFVar2,&local_888,0);
    if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_888.Data.AllocatorInstance.Data);
    }
  }
  if ((local_cd0.Segments.ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((int)(*(ulonglong *)local_cd0.Segments.AllocatorInstance.Data >> 0x20) != 8) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_878,L"Condition failed");
    (*pcVar3)(pFVar2,&local_878,0);
    if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_878.Data.AllocatorInstance.Data);
    }
  }
  local_c78 = L" -> ";
  local_868.DataPtr = L"Count[7] (IntProperty)";
  local_3f8._padding_ = (longlong)local_3f8.StringBuffer;
  uStack_c70 = 4;
  local_4e8._12_4_ = uStack_c6c;
  local_4e8.Size = 4;
  local_3f8._padding_ = (longlong)local_3f8.StringBuffer;
  local_868.Size = 0x16;
  local_3f8._padding_ = (longlong)&local_3b8;
  local_3f8._padding_._0_2_ = 0;
  local_4e8.DataPtr = L" -> ";
  FPropertyPathName::ToString(&local_cd0,(TStringBuilderBase<wchar_t> *)&local_3f8,&local_4e8);
  bVar13 = TStringView<wchar_t>::Equals<TStringBuilderWithBuffer<wchar_t,16>_>
                     (&local_868,&local_3f8,CaseSensitive);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_3f8);
  if (!bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_858,L"Condition failed");
    (*pcVar3)(pFVar2,&local_858,0);
    if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_858.Data.AllocatorInstance.Data);
    }
  }
  if (local_cd0.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cd0.Segments.AllocatorInstance.Data);
  }
  pFVar23 = FAutomationTestFramework::Get();
  pFVar2 = pFVar23->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_848,L"MultipleSegments");
  (*pcVar3)(pFVar2,&local_848,0,0);
  if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_848.Data.AllocatorInstance.Data);
  }
  local_3b8.Nodes.AllocatorInstance.SecondaryData = (ForElementType<UE::FPropertyTypeNameNode>)0x0;
  local_3b8.Nodes.ArrayNum = 0;
  local_3b8.Nodes.ArrayMax = 10;
  local_3b8.OuterNodeIndex.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_3b8.OuterNodeIndex.ArrayNum = 0;
  local_3b8.OuterNodeIndex.ArrayMax = 10;
  local_3b8.ActiveIndex = -1;
  FVar16 = FNameEntryId::FromValidEName((EName)local_a64);
  uStack_c1c = 0;
  local_c20 = *(uint *)CONCAT44(extraout_var_00,FVar16.Value);
  FVar6.Number = 0;
  FVar6.ComparisonIndex.Value = local_c20;
  FPropertyTypeNameBuilder::AddName(&local_3b8,FVar6);
  FPropertyTypeNameBuilder::BeginParameters(&local_3b8);
  FVar16 = FNameEntryId::FromValidEName((EName)local_a68);
  uStack_c14 = 0;
  local_c18 = *(uint *)CONCAT44(extraout_var_01,FVar16.Value);
  FVar7.Number = 0;
  FVar7.ComparisonIndex.Value = local_c18;
  FPropertyTypeNameBuilder::AddName(&local_3b8,FVar7);
  FPropertyTypeNameBuilder::BeginParameters(&local_3b8);
  pFVar22 = ::FName::FName(&local_530,L"TestType");
  FPropertyTypeNameBuilder::AddName(&local_3b8,*pFVar22);
  FPropertyTypeNameBuilder::EndParameters(&local_3b8);
  FPropertyTypeNameBuilder::EndParameters(&local_3b8);
  local_2e8.Nodes.AllocatorInstance.SecondaryData = (ForElementType<UE::FPropertyTypeNameNode>)0x0;
  local_2e8.Nodes.ArrayNum = 0;
  local_2e8.Nodes.ArrayMax = 10;
  local_2e8.OuterNodeIndex.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_2e8.OuterNodeIndex.ArrayNum = 0;
  local_2e8.OuterNodeIndex.ArrayMax = 10;
  local_2e8.ActiveIndex = -1;
  FVar16 = FNameEntryId::FromValidEName((EName)local_c48);
  uStack_c0c = 0;
  local_c10 = *(uint *)CONCAT44(extraout_var_02,FVar16.Value);
  FVar8.Number = 0;
  FVar8.ComparisonIndex.Value = local_c10;
  FPropertyTypeNameBuilder::AddName(&local_2e8,FVar8);
  FPropertyTypeNameBuilder::BeginParameters(&local_2e8);
  pFVar22 = ::FName::FName(&local_528,L"IntVector");
  FPropertyTypeNameBuilder::AddName(&local_2e8,*pFVar22);
  FPropertyTypeNameBuilder::EndParameters(&local_2e8);
  local_d20.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d20.Segments.ArrayNum = 0;
  local_d20.Segments.ArrayMax = 0;
  ::FName::FName(&local_b50,L"TestArray");
  FPropertyTypeNameBuilder::Build(&local_3b8);
  local_b44 = 7;
  iVar15 = local_d20.Segments.ArrayNum;
  if (local_d20.Segments.ArrayNum == local_d20.Segments.ArrayMax) {
    iVar15 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,(ForAnyElementType *)&local_d20,&local_d20.Segments.ArrayMax);
  }
  lVar25 = (longlong)iVar15;
  *(uint *)(local_d20.Segments.AllocatorInstance.Data + lVar25 * 0xc) =
       local_b50.ComparisonIndex.Value;
  *(undefined4 *)(local_d20.Segments.AllocatorInstance.Data + lVar25 * 0xc + 4) = 8;
  *(undefined4 *)(local_d20.Segments.AllocatorInstance.Data + lVar25 * 0xc + 8) = local_b48;
  local_d20.Segments.ArrayNum = iVar15 + 1;
  ::FName::FName(&local_b40,L"Position");
  FPropertyTypeNameBuilder::Build(&local_2e8);
  local_b34 = 0xffffffff;
  if (local_d20.Segments.ArrayNum == local_d20.Segments.ArrayMax) {
    local_d20.Segments.ArrayNum =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x40c,(ForAnyElementType *)&local_d20,&local_d20.Segments.ArrayMax);
  }
  lVar25 = (longlong)local_d20.Segments.ArrayNum;
  *(uint *)(local_d20.Segments.AllocatorInstance.Data + lVar25 * 0xc) =
       local_b40.ComparisonIndex.Value;
  *(undefined4 *)(local_d20.Segments.AllocatorInstance.Data + lVar25 * 0xc + 4) = 0;
  *(undefined4 *)(local_d20.Segments.AllocatorInstance.Data + lVar25 * 0xc + 8) = local_b38;
  local_d20.Segments.ArrayNum = local_d20.Segments.ArrayNum + 1;
  ::FName::FName(&local_c38,L"X");
  FVar10.Index = local_d28[0].Index;
  local_c00 = local_c38.ComparisonIndex.Value;
  iStack_c30 = local_d28[0].Index;
  uStack_c2c = 0xffffffff;
  uStack_bfc = 0;
  local_bf8 = local_d28[0].Index;
  iVar15 = local_d20.Segments.ArrayNum;
  if (local_d20.Segments.ArrayNum == local_d20.Segments.ArrayMax) {
    iVar15 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,(ForAnyElementType *)&local_d20,&local_d20.Segments.ArrayMax);
  }
  local_d20.Segments.ArrayNum = iVar15 + 1;
  *(ulonglong *)(local_d20.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc) =
       CONCAT44(uStack_bfc,local_c00);
  *(int *)(local_d20.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc + 8) = FVar10.Index;
  if (iVar15 + 1 != 3) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_838,L"Condition failed");
    (*pcVar3)(pFVar2,&local_838,0);
    if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_838.Data.AllocatorInstance.Data);
    }
  }
  local_c78 = L" -> ";
  local_828.DataPtr =
       L"TestArray[7] (ArrayProperty(StructProperty(TestType))) -> Position (StructProperty(IntVector)) -> X (IntProperty)"
  ;
  local_148._padding_ = (longlong)local_148.StringBuffer;
  uStack_c70 = 4;
  local_4d8._12_4_ = uStack_c6c;
  local_4d8.Size = 4;
  local_148._padding_ = (longlong)local_148.StringBuffer;
  local_828.Size = 0x71;
  local_148._padding_ = (longlong)local_28;
  local_148._padding_._0_2_ = 0;
  local_4d8.DataPtr = L" -> ";
  FPropertyPathName::ToString(&local_d20,(TStringBuilderBase<wchar_t> *)&local_148,&local_4d8);
  bVar13 = TStringView<wchar_t>::Equals<TStringBuilderWithBuffer<wchar_t,128>_>
                     (&local_828,&local_148,CaseSensitive);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_148);
  if (!bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_818,L"Condition failed");
    (*pcVar3)(pFVar2,&local_818,0);
    if (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_818.Data.AllocatorInstance.Data);
    }
  }
  if (local_d20.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d20.Segments.AllocatorInstance.Data);
  }
  if (local_2e8.OuterNodeIndex.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_2e8.OuterNodeIndex.AllocatorInstance.SecondaryData);
  }
  if (local_2e8.Nodes.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
    FMemory::Free((void *)local_2e8.Nodes.AllocatorInstance.SecondaryData);
  }
  if (local_3b8.OuterNodeIndex.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_3b8.OuterNodeIndex.AllocatorInstance.SecondaryData);
  }
  if (local_3b8.Nodes.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
    FMemory::Free((void *)local_3b8.Nodes.AllocatorInstance.SecondaryData);
  }
  pFVar23 = FAutomationTestFramework::Get();
  pFVar2 = pFVar23->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_808,L"SetType/SetIndex");
  (*pcVar3)(pFVar2,&local_808,0,0);
  if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_808.Data.AllocatorInstance.Data);
  }
  local_d00.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d00.Segments.ArrayNum = 0;
  local_d00.Segments.ArrayMax = 0;
  local_b28 = 0;
  local_b24 = 0xffffffff;
  uStack_bec = 0;
  local_be8 = 0;
  local_bf0 = FVar14.Value;
  local_b30 = FVar1;
  iVar17 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,(ForAnyElementType *)&local_d00,&local_d00.Segments.ArrayMax);
  local_b18 = 0;
  iVar15 = iVar17 + 1;
  local_b14 = 0xffffffff;
  uStack_bac = 0;
  local_ba8 = 0;
  *(ulonglong *)(local_d00.Segments.AllocatorInstance.Data + (longlong)iVar17 * 0xc) =
       CONCAT44(uStack_bec,local_bf0);
  *(undefined4 *)(local_d00.Segments.AllocatorInstance.Data + (longlong)iVar17 * 0xc + 8) = 0;
  local_bb0 = FVar14.Value;
  local_b20 = FVar1;
  if (iVar15 == local_d00.Segments.ArrayMax) {
    local_d00.Segments.ArrayNum = iVar15;
    iVar15 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,(ForAnyElementType *)&local_d00,&local_d00.Segments.ArrayMax);
  }
  local_d00.Segments.ArrayNum = iVar15 + 1;
  *(ulonglong *)(local_d00.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc) =
       CONCAT44(uStack_bac,local_bb0);
  *(undefined4 *)(local_d00.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc + 8) = 0;
  FPropertyPathName::SetIndex(&local_d00,7);
  pFVar24 = FPropertyPathName::GetSegment(&local_d00,&local_4c8,0);
  if (pFVar24->Index != -1) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_7f8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_7f8,0);
    if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_d00.Segments.ArrayNum < 2) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((int)((ulonglong)*(undefined8 *)(local_d00.Segments.AllocatorInstance.Data + 0xc) >> 0x20) !=
      8) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_7e8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_7e8,0);
    if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
    }
  }
  if (local_d00.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d00.Segments.AllocatorInstance.Data);
  }
  pFVar23 = FAutomationTestFramework::Get();
  pFVar2 = pFVar23->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_7d8,L"Pop/Empty/Reset");
  (*pcVar3)(pFVar2,&local_7d8,0,0);
  if (local_7d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7d8.Data.AllocatorInstance.Data);
  }
  FVar10.Index = local_d28[0].Index;
  local_b98 = local_d28[0].Index;
  local_d38.Data = (FScriptContainerElement *)0x0;
  local_d30 = 0;
  uStack_b9c = 1;
  local_ba0 = FVar14.Value;
  iVar17 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,&local_d38,(int *)((longlong)&local_d30 + 4));
  FVar11.Index = local_d28[0].Index;
  uStack_b8c = 2;
  iVar15 = iVar17 + 1;
  *(ulonglong *)(local_d38.Data + (longlong)iVar17 * 0xc) = CONCAT44(uStack_b9c,local_ba0);
  *(int *)(local_d38.Data + (longlong)iVar17 * 0xc + 8) = FVar10.Index;
  local_b88 = local_d28[0].Index;
  local_b90 = FVar14.Value;
  if (iVar15 == local_d30._4_4_) {
    local_d30._0_4_ = iVar15;
    iVar15 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&local_d38,(int *)((longlong)&local_d30 + 4));
  }
  FVar10.Index = local_d28[0].Index;
  iVar17 = iVar15 + 1;
  uStack_b7c = 3;
  *(ulonglong *)(local_d38.Data + (longlong)iVar15 * 0xc) = CONCAT44(uStack_b8c,local_b90);
  *(int *)(local_d38.Data + (longlong)iVar15 * 0xc + 8) = FVar11.Index;
  local_b78 = local_d28[0].Index;
  local_b80 = FVar14.Value;
  if (iVar17 == local_d30._4_4_) {
    local_d30._0_4_ = iVar17;
    iVar17 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&local_d38,(int *)((longlong)&local_d30 + 4));
  }
  iVar15 = iVar17 + 1;
  local_d30 = CONCAT44(local_d30._4_4_,iVar15);
  *(ulonglong *)(local_d38.Data + (longlong)iVar17 * 0xc) = CONCAT44(uStack_b7c,local_b80);
  *(int *)(local_d38.Data + (longlong)iVar17 * 0xc + 8) = FVar10.Index;
  if (iVar15 != 3) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_7c8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_7c8,0);
    if (local_7c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
    }
    iVar15 = (int)local_d30;
  }
  if ((iVar15 < 3) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((int)((ulonglong)*(undefined8 *)(local_d38.Data + 0x18) >> 0x20) != 3) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_7b8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_7b8,0);
    if (local_7b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
    }
  }
  pFVar23 = FAutomationTestFramework::Get();
  pFVar2 = pFVar23->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_7a8,L"Pop");
  (*pcVar3)(pFVar2,&local_7a8,0,0);
  if (local_7a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7a8.Data.AllocatorInstance.Data);
  }
  if (((int)local_d30 < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar15 = ~((int)local_d30 - 1U) + (int)local_d30;
  if (iVar15 != 0) {
    memmove(local_d38.Data + (longlong)(int)((int)local_d30 - 1U) * 0xc,
            local_d38.Data + (longlong)(int)((int)local_d30 - 1U) * 0xc + 0xc,(longlong)iVar15 * 0xc
           );
  }
  iVar15 = (int)local_d30 + -1;
  local_d30 = CONCAT44(local_d30._4_4_,iVar15);
  if (iVar15 != 2) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_798,L"Condition failed");
    (*pcVar3)(pFVar2,&local_798,0);
    if (local_798.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_798.Data.AllocatorInstance.Data);
    }
  }
  if (((int)local_d30 < 2) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((int)((ulonglong)*(undefined8 *)(local_d38.Data + 0xc) >> 0x20) != 2) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_788,L"Condition failed");
    (*pcVar3)(pFVar2,&local_788,0);
    if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_788.Data.AllocatorInstance.Data);
    }
  }
  if (((int)local_d30 < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar15 = ~((int)local_d30 - 1U) + (int)local_d30;
  if (iVar15 != 0) {
    memmove(local_d38.Data + (longlong)(int)((int)local_d30 - 1U) * 0xc,
            local_d38.Data + (longlong)(int)((int)local_d30 - 1U) * 0xc + 0xc,(longlong)iVar15 * 0xc
           );
  }
  iVar15 = (int)local_d30 + -1;
  local_d30 = CONCAT44(local_d30._4_4_,iVar15);
  if (iVar15 != 1) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_778,L"Condition failed");
    (*pcVar3)(pFVar2,&local_778,0);
    if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_778.Data.AllocatorInstance.Data);
    }
  }
  if (((int)local_d30 < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((int)((ulonglong)*(undefined8 *)local_d38.Data >> 0x20) != 1) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_768,L"Condition failed");
    (*pcVar3)(pFVar2,&local_768,0);
    if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_768.Data.AllocatorInstance.Data);
    }
  }
  if (((int)local_d30 < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar15 = ~((int)local_d30 - 1U) + (int)local_d30;
  if (iVar15 != 0) {
    memmove(local_d38.Data + (longlong)(int)((int)local_d30 - 1U) * 0xc,
            local_d38.Data + (longlong)(int)((int)local_d30 - 1U) * 0xc + 0xc,(longlong)iVar15 * 0xc
           );
  }
  iVar15 = (int)local_d30 + -1;
  local_d30 = CONCAT44(local_d30._4_4_,iVar15);
  if (iVar15 != 0) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_758,L"Condition failed");
    (*pcVar3)(pFVar2,&local_758);
    if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_758.Data.AllocatorInstance.Data);
    }
  }
  if ((int)local_d30 != 0) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_748,L"Condition failed");
    (*pcVar3)(pFVar2,&local_748);
    if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_748.Data.AllocatorInstance.Data);
    }
  }
  pFVar23 = FAutomationTestFramework::Get();
  pFVar2 = pFVar23->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_738,L"Empty");
  (*pcVar3)(pFVar2,&local_738,0,0);
  if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_738.Data.AllocatorInstance.Data);
  }
  uVar4 = local_d30 >> 0x20;
  local_d30 = local_d30 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_d38,0,(int *)((longlong)&local_d30 + 4));
    if ((int)local_d30 != 0) {
      pFVar23 = FAutomationTestFramework::Get();
      pFVar2 = pFVar23->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_728,L"Condition failed");
      (*pcVar3)(pFVar2,&local_728);
      if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_728.Data.AllocatorInstance.Data);
      }
      if ((int)local_d30 != 0) {
        pFVar23 = FAutomationTestFramework::Get();
        pFVar2 = pFVar23->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_718,L"Condition failed");
        (*pcVar3)(pFVar2,&local_718);
        if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_718.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  pFVar23 = FAutomationTestFramework::Get();
  pFVar2 = pFVar23->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_708,L"Reset");
  (*pcVar3)(pFVar2,&local_708,0,0);
  if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_708.Data.AllocatorInstance.Data);
  }
  uVar4 = local_d30;
  local_d30 = local_d30 & 0xffffffff00000000;
  if ((longlong)uVar4 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_d38,0,(int *)((longlong)&local_d30 + 4));
    if ((int)local_d30 != 0) {
      pFVar23 = FAutomationTestFramework::Get();
      pFVar2 = pFVar23->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_6f8,L"Condition failed");
      (*pcVar3)(pFVar2,&local_6f8,0);
      if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
      }
      if ((int)local_d30 != 0) {
        pFVar23 = FAutomationTestFramework::Get();
        pFVar2 = pFVar23->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_6e8,L"Condition failed");
        (*pcVar3)(pFVar2,&local_6e8,0);
        if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  if (local_d38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d38.Data);
  }
  pFVar23 = FAutomationTestFramework::Get();
  pFVar2 = pFVar23->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_6d8,L"Equals+Less");
  (*pcVar3)(pFVar2,&local_6d8,0,0);
  if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
  }
  pFVar22 = ::FName::FName(&local_520,5,L"Depth",FNAME_Add);
  FVar5 = *pFVar22;
  FPropertyTypeNameBuilder::Reset(&local_218);
  FVar16 = FNameEntryId::FromValidEName((EName)local_aa0);
  uStack_c04 = 0;
  local_c08 = *(uint *)CONCAT44(extraout_var_03,FVar16.Value);
  FVar9.Number = 0;
  FVar9.ComparisonIndex.Value = local_c08;
  FPropertyTypeNameBuilder::AddName(&local_218,FVar9);
  FPropertyTypeNameBuilder::Build(&local_218);
  uVar12 = local_c80;
  local_d10.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d10.Segments.ArrayNum = 0;
  local_d10.Segments.ArrayMax = 0;
  uStack_a94 = 0;
  local_a98 = FVar14.Value;
  iVar15 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,(ForAnyElementType *)&local_d10,&local_d10.Segments.ArrayMax);
  FVar10.Index = local_d28[0].Index;
  uStack_aac = 0;
  local_d10.Segments.ArrayNum = iVar15 + 1;
  *(ulonglong *)(local_d10.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc) =
       CONCAT44(uStack_a94,local_a98);
  *(undefined4 *)(local_d10.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc + 8) = uVar12;
  local_ca0.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ca0.Segments.ArrayNum = 0;
  local_ca0.Segments.ArrayMax = 0;
  local_ab0 = FVar14.Value;
  iVar15 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,(ForAnyElementType *)&local_ca0,&local_ca0.Segments.ArrayMax);
  uStack_afc = 0;
  local_ca0.Segments.ArrayNum = iVar15 + 1;
  *(ulonglong *)(local_ca0.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc) =
       CONCAT44(uStack_aac,local_ab0);
  *(int *)(local_ca0.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc + 8) = FVar10.Index;
  local_cb0.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_cb0.Segments.ArrayNum = 0;
  local_cb0.Segments.ArrayMax = 0;
  local_b00 = FVar5.ComparisonIndex.Value.Value;
  iVar15 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,(ForAnyElementType *)&local_cb0,&local_cb0.Segments.ArrayMax);
  FVar10.Index = local_d28[0].Index;
  uStack_aec = 0;
  local_cb0.Segments.ArrayNum = iVar15 + 1;
  *(ulonglong *)(local_cb0.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc) =
       CONCAT44(uStack_afc,local_b00);
  *(undefined4 *)(local_cb0.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc + 8) =
       local_c80;
  local_cc0.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_cc0.Segments.ArrayNum = 0;
  local_cc0.Segments.ArrayMax = 0;
  local_af0 = FVar5.ComparisonIndex.Value.Value;
  iVar15 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,(ForAnyElementType *)&local_cc0,&local_cc0.Segments.ArrayMax);
  local_cc0.Segments.ArrayNum = iVar15 + 1;
  *(ulonglong *)(local_cc0.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc) =
       CONCAT44(uStack_aec,local_af0);
  *(int *)(local_cc0.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc + 8) = FVar10.Index;
  bVar13 = FPropertyPathName::operator==(&local_d10,&local_d10);
  if (!bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_6c8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_6c8,0);
    if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
    }
  }
  bVar13 = FPropertyPathName::operator==(&local_d10,&local_ca0);
  if (bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_6b8,L"Condition expected to return false but returned true");
    (*pcVar3)(pFVar2,&local_6b8,0);
    if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
    }
  }
  bVar13 = FPropertyPathName::operator==(&local_d10,&local_cb0);
  if (bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_6a8,L"Condition expected to return false but returned true");
    (*pcVar3)(pFVar2,&local_6a8,0);
    if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
    }
  }
  bVar13 = FPropertyPathName::operator==(&local_d10,&local_cc0);
  if (bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_698,L"Condition expected to return false but returned true");
    (*pcVar3)(pFVar2,&local_698,0);
    if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_698.Data.AllocatorInstance.Data);
    }
  }
  bVar13 = FPropertyPathName::operator<(&local_d10,&local_d10);
  if (bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_688,L"Condition expected to return false but returned true");
    (*pcVar3)(pFVar2,&local_688,0);
    if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_688.Data.AllocatorInstance.Data);
    }
  }
  bVar13 = FPropertyPathName::operator<(&local_d10,&local_ca0);
  if (!bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_678,L"Condition failed");
    (*pcVar3)(pFVar2,&local_678,0);
    if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_678.Data.AllocatorInstance.Data);
    }
  }
  bVar13 = FPropertyPathName::operator<(&local_d10,&local_cb0);
  if (!bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_668,L"Condition failed");
    (*pcVar3)(pFVar2,&local_668,0);
    if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_668.Data.AllocatorInstance.Data);
    }
  }
  bVar13 = FPropertyPathName::operator<(&local_d10,&local_cc0);
  if (!bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_658,L"Condition failed");
    (*pcVar3)(pFVar2,&local_658,0);
    if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.Data.AllocatorInstance.Data);
    }
  }
  bVar13 = FPropertyPathName::operator<(&local_ca0,&local_d10);
  if (bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_648,L"Condition expected to return false but returned true");
    (*pcVar3)(pFVar2,&local_648,0);
    if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_648.Data.AllocatorInstance.Data);
    }
  }
  bVar13 = FPropertyPathName::operator<(&local_ca0,&local_ca0);
  if (bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_638,L"Condition expected to return false but returned true");
    (*pcVar3)(pFVar2,&local_638,0);
    if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_638.Data.AllocatorInstance.Data);
    }
  }
  bVar13 = FPropertyPathName::operator<(&local_ca0,&local_cb0);
  if (!bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_628,L"Condition failed");
    (*pcVar3)(pFVar2,&local_628,0);
    if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_628.Data.AllocatorInstance.Data);
    }
  }
  bVar13 = FPropertyPathName::operator<(&local_ca0,&local_cc0);
  if (!bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_618,L"Condition failed");
    (*pcVar3)(pFVar2,&local_618,0);
    if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_618.Data.AllocatorInstance.Data);
    }
  }
  bVar13 = FPropertyPathName::operator<(&local_cb0,&local_d10);
  if (bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_608,L"Condition expected to return false but returned true");
    (*pcVar3)(pFVar2,&local_608,0);
    if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_608.Data.AllocatorInstance.Data);
    }
  }
  bVar13 = FPropertyPathName::operator<(&local_cb0,&local_ca0);
  if (bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_5f8,L"Condition expected to return false but returned true");
    (*pcVar3)(pFVar2,&local_5f8,0);
    if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
    }
  }
  bVar13 = FPropertyPathName::operator<(&local_cb0,&local_cb0);
  if (bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_5e8,L"Condition expected to return false but returned true");
    (*pcVar3)(pFVar2,&local_5e8,0);
    if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
    }
  }
  bVar13 = FPropertyPathName::operator<(&local_cb0,&local_cc0);
  if (!bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_5d8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_5d8,0);
    if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
    }
  }
  bVar13 = FPropertyPathName::operator<(&local_cc0,&local_d10);
  if (bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_5c8,L"Condition expected to return false but returned true");
    (*pcVar3)(pFVar2,&local_5c8,0);
    if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
    }
  }
  bVar13 = FPropertyPathName::operator<(&local_cc0,&local_ca0);
  if (bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_5b8,L"Condition expected to return false but returned true");
    (*pcVar3)(pFVar2,&local_5b8,0);
    if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
    }
  }
  bVar13 = FPropertyPathName::operator<(&local_cc0,&local_cb0);
  if (bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_5a8,L"Condition expected to return false but returned true");
    (*pcVar3)(pFVar2,&local_5a8,0);
    if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
    }
  }
  bVar13 = FPropertyPathName::operator<(&local_cc0,&local_cc0);
  if (bVar13) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_598,L"Condition expected to return false but returned true");
    (*pcVar3)(pFVar2,&local_598,0);
    if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.Data.AllocatorInstance.Data);
    }
  }
  if (local_cc0.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cc0.Segments.AllocatorInstance.Data);
  }
  if (local_cb0.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cb0.Segments.AllocatorInstance.Data);
  }
  if (local_ca0.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ca0.Segments.AllocatorInstance.Data);
  }
  if (local_d10.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d10.Segments.AllocatorInstance.Data);
  }
  pFVar23 = FAutomationTestFramework::Get();
  pFVar2 = pFVar23->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_588,L"GetTypeHash");
  (*pcVar3)(pFVar2,&local_588,0,0);
  if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.Data.AllocatorInstance.Data);
  }
  local_b10.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b10.Segments.ArrayNum = 0;
  local_b10.Segments.ArrayMax = 0;
  local_c58.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c58.Segments.ArrayNum = 0;
  local_c58.Segments.ArrayMax = 0;
  local_c68.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c68.Segments.ArrayNum = 0;
  local_c68.Segments.ArrayMax = 0;
  local_c90.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c90.Segments.ArrayNum = 0;
  local_c90.Segments.ArrayMax = 0;
  uStack_adc = 0;
  local_ae0 = FVar14.Value;
  local_578 = FVar1;
  iVar15 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,(ForAnyElementType *)&local_c58,&local_c58.Segments.ArrayMax);
  FVar10.Index = local_d28[0].Index;
  uStack_acc = 0;
  local_c58.Segments.ArrayNum = iVar15 + 1;
  *(ulonglong *)(local_c58.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc) =
       CONCAT44(uStack_adc,local_ae0);
  *(undefined4 *)(local_c58.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc + 8) = 0;
  iVar15 = local_c68.Segments.ArrayNum;
  local_ad0 = FVar14.Value;
  if (local_c68.Segments.ArrayNum == local_c68.Segments.ArrayMax) {
    iVar15 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,(ForAnyElementType *)&local_c68,&local_c68.Segments.ArrayMax);
  }
  local_c68.Segments.ArrayNum = iVar15 + 1;
  uStack_abc = 8;
  *(ulonglong *)(local_c68.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc) =
       CONCAT44(uStack_acc,local_ad0);
  *(int *)(local_c68.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc + 8) = FVar10.Index;
  iVar15 = local_c90.Segments.ArrayNum;
  local_ac0 = FVar14.Value;
  if (local_c90.Segments.ArrayNum == local_c90.Segments.ArrayMax) {
    iVar15 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,(ForAnyElementType *)&local_c90,&local_c90.Segments.ArrayMax);
  }
  local_c90.Segments.ArrayNum = iVar15 + 1;
  *(ulonglong *)(local_c90.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc) =
       CONCAT44(uStack_abc,local_ac0);
  *(int *)(local_c90.Segments.AllocatorInstance.Data + (longlong)iVar15 * 0xc + 8) =
       local_d28[0].Index;
  uVar18 = UE::GetTypeHash(&local_b10);
  uVar19 = UE::GetTypeHash(&local_c58);
  uVar20 = UE::GetTypeHash(&local_c68);
  uVar21 = UE::GetTypeHash(&local_c90);
  if (uVar18 != 0) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_568,L"Condition failed");
    (*pcVar3)(pFVar2,&local_568,0);
    if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.Data.AllocatorInstance.Data);
    }
  }
  if (uVar18 == uVar19) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_558,L"Condition failed");
    (*pcVar3)(pFVar2,&local_558,0);
    if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.Data.AllocatorInstance.Data);
    }
  }
  if (uVar18 == uVar20) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_548,L"Condition failed");
    (*pcVar3)(pFVar2,&local_548,0);
    if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.Data.AllocatorInstance.Data);
    }
  }
  if (uVar18 == uVar21) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_a58,L"Condition failed");
    (*pcVar3)(pFVar2,&local_a58,0);
    if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a58.Data.AllocatorInstance.Data);
    }
  }
  if (uVar19 == uVar20) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_a48,L"Condition failed");
    (*pcVar3)(pFVar2,&local_a48,0);
    if (local_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a48.Data.AllocatorInstance.Data);
    }
  }
  if (uVar20 == uVar21) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_a38,L"Condition failed");
    (*pcVar3)(pFVar2,&local_a38,0);
    if (local_a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a38.Data.AllocatorInstance.Data);
    }
  }
  FPropertyPathName::SetIndex(&local_c90,8);
  uVar18 = UE::GetTypeHash(&local_c90);
  if (uVar21 == uVar18) {
    pFVar23 = FAutomationTestFramework::Get();
    pFVar2 = pFVar23->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_a28,L"Condition failed");
    (*pcVar3)(pFVar2,&local_a28,0);
    if (local_a28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a28.Data.AllocatorInstance.Data);
    }
  }
  if (local_c90.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c90.Segments.AllocatorInstance.Data);
  }
  if (local_c68.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c68.Segments.AllocatorInstance.Data);
  }
  if (local_c58.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c58.Segments.AllocatorInstance.Data);
  }
  if (local_b10.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b10.Segments.AllocatorInstance.Data);
  }
  if (local_218.OuterNodeIndex.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_218.OuterNodeIndex.AllocatorInstance.SecondaryData);
  }
  if (local_218.Nodes.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
    FMemory::Free((void *)local_218.Nodes.AllocatorInstance.SecondaryData);
  }
  return;
}

