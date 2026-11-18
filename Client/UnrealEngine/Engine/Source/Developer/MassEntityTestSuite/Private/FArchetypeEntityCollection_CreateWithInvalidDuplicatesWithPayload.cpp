// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1470ff450

void __thiscall
`FMassArchetypeEntityCollectionTest::
FArchetypeEntityCollection_CreateWithInvalidDuplicatesWithPayload::InstantTest'::__l3::<lambda_1>::
operator()(void *this)

{
  int iVar1;
  int iVar2;
  FAutomationTestBase *this_00;
  FAutomationTestExecutionInfo local_78;
  
  UE::AITestSuite::TestsInProgress = UE::AITestSuite::TestsInProgress + -1;
  FAutomationTestExecutionInfo::FAutomationTestExecutionInfo(&local_78);
  this_00 = FAITestBase::GetTestRunner(*(FAITestBase **)this);
  FAutomationTestBase::GetExecutionInfo(this_00,&local_78);
  iVar1 = FAutomationTestExecutionInfo::GetWarningTotal(&local_78);
  iVar2 = FAutomationTestExecutionInfo::GetWarningTotal(&local_78);
  if (0 < iVar1 + iVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
  }
  FAutomationTestExecutionInfo::~FAutomationTestExecutionInfo(&local_78);
  return;
}

// InstantTest @ 14712ca50

/* WARNING: Removing unreachable block (ram,0x00014712cf36) */
/* WARNING: Removing unreachable block (ram,0x00014712d489) */
/* WARNING: Removing unreachable block (ram,0x00014712e175) */
/* WARNING: Removing unreachable block (ram,0x00014712e37d) */
/* WARNING: Removing unreachable block (ram,0x00014712e57b) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassArchetypeEntityCollectionTest::
FArchetypeEntityCollection_CreateWithInvalidDuplicatesWithPayload::InstantTest
          (FArchetypeEntityCollection_CreateWithInvalidDuplicatesWithPayload *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<FStructArrayView,int> *pTVar4;
  FMassGenericPayloadView *pFVar5;
  TArrayView<FMassEntityHandle_const_,int> *pTVar6;
  FArchetypeEntityRange *pFVar7;
  longlong lVar8;
  undefined1 *puVar9;
  FMassEntityHandle *pFVar10;
  TArrayView<FStructArrayView,int> *pTVar11;
  undefined1 *puVar12;
  TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_> local_7d8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_7c8;
  char local_7b8;
  undefined1 local_7b7;
  char local_7b6;
  undefined1 local_7b5;
  char local_7b4;
  undefined1 local_7b3;
  char local_7b2;
  undefined1 local_7b1;
  undefined1 local_7b0;
  TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_> local_7a8;
  FScopeGuardSyntaxSupport local_798 [4];
  undefined4 local_794;
  int local_790;
  int local_78c;
  uint local_788;
  undefined4 local_784;
  int local_780;
  int local_77c;
  int local_778;
  int local_774;
  uint local_770;
  uint local_76c;
  undefined4 local_768;
  uint local_764;
  uint local_760;
  undefined4 local_75c;
  uint local_758;
  uint local_754;
  undefined4 local_750;
  uint local_74c;
  int local_748;
  int local_744;
  uint local_740;
  FMassEntityHandle *local_738;
  FScriptContainerElement *local_730;
  FMassEntityHandle *local_728;
  FScriptContainerElement *local_720;
  FMassEntityHandle *local_718;
  FScriptContainerElement *local_710;
  FMassEntityHandle *local_708;
  FScriptContainerElement *local_700;
  int local_6f8;
  int local_6f4;
  int local_6f0;
  int local_6ec;
  undefined8 *local_6e8;
  int local_6e0;
  int local_6dc;
  ulonglong *local_6d8;
  int local_6d0;
  FTestFragment_Int local_6cc;
  int local_6c8;
  int local_6c4;
  FTestFragment_Int local_6c0;
  int local_6bc;
  int local_6b8;
  FTestFragment_Int local_6b4;
  int local_6b0;
  FMassEntityHandle local_6a8;
  FMassEntityHandle *local_6a0;
  FMassEntityHandle *local_698;
  FMassEntityHandle *local_690;
  FMassEntityHandle *local_688;
  FMassEntityHandle *local_680;
  FMassEntityHandle *local_678;
  undefined4 local_670;
  undefined4 local_66c;
  FMassEntityHandle *local_668;
  FMassEntityHandle *local_660;
  FMassEntityHandle *local_658;
  longlong local_650;
  longlong local_648;
  FMassEntityHandle *local_640;
  FMassEntityHandle *local_638;
  FScriptContainerElement *local_630;
  FMassEntityHandle *local_628;
  FScriptContainerElement *local_620;
  FScriptContainerElement *local_618;
  FScriptContainerElement *local_610;
  FScriptContainerElement *local_608;
  FScriptContainerElement *local_600;
  FScriptContainerElement *local_5f8;
  undefined4 local_5f0;
  undefined4 local_5ec;
  FScriptContainerElement *local_5e8;
  FScriptContainerElement *local_5e0;
  FScriptContainerElement *local_5d8;
  longlong local_5d0;
  longlong local_5c8;
  FScriptContainerElement *local_5c0;
  FScriptContainerElement *local_5b8;
  FScriptContainerElement *local_5b0;
  int *local_5a8;
  undefined4 local_5a0;
  undefined4 local_59c;
  FMassEntityHandle *local_598;
  FMassEntityHandle *local_590;
  FMassEntityHandle *local_588;
  FMassEntityHandle *local_580;
  FMassEntityHandle *local_578;
  FMassEntityHandle *local_570;
  FMassEntityHandle *local_568;
  FMassEntityHandle *local_560;
  FMassEntityHandle *local_558;
  undefined4 local_550;
  undefined4 local_54c;
  FMassEntityHandle *local_548;
  FMassEntityHandle *local_540;
  FMassEntityHandle *local_538;
  longlong local_530;
  longlong local_528;
  FMassEntityHandle *local_520;
  FMassEntityHandle *local_518;
  FScriptContainerElement *local_510;
  FMassEntityHandle *local_508;
  FScriptContainerElement *local_500;
  FScriptContainerElement *local_4f8;
  FScriptContainerElement *local_4f0;
  FScriptContainerElement *local_4e8;
  FScriptContainerElement *local_4e0;
  FScriptContainerElement *local_4d8;
  undefined4 local_4d0;
  undefined4 local_4cc;
  FScriptContainerElement *local_4c8;
  FScriptContainerElement *local_4c0;
  FScriptContainerElement *local_4b8;
  longlong local_4b0;
  longlong local_4a8;
  FScriptContainerElement *local_4a0;
  FScriptContainerElement *local_498;
  FScriptContainerElement *local_490;
  int *local_488;
  undefined4 local_480;
  undefined4 local_47c;
  FMassEntityHandle *local_478;
  FMassEntityHandle *local_470;
  FMassEntityHandle *local_468;
  FMassEntityHandle *local_460;
  FMassEntityHandle *local_458;
  FMassEntityHandle *local_450;
  FMassEntityHandle *local_448;
  FMassEntityHandle *local_440;
  FMassEntityHandle *local_438;
  undefined4 local_430;
  undefined4 local_42c;
  FMassEntityHandle *local_428;
  FMassEntityHandle *local_420;
  FMassEntityHandle *local_418;
  longlong local_410;
  longlong local_408;
  FMassEntityHandle *local_400;
  FMassEntityHandle *local_3f8;
  FScriptContainerElement *local_3f0;
  FMassEntityHandle *local_3e8;
  FScriptContainerElement *local_3e0;
  FScriptContainerElement *local_3d8;
  FScriptContainerElement *local_3d0;
  FScriptContainerElement *local_3c8;
  FScriptContainerElement *local_3c0;
  FScriptContainerElement *local_3b8;
  undefined4 local_3b0;
  undefined4 local_3ac;
  FScriptContainerElement *local_3a8;
  FScriptContainerElement *local_3a0;
  FScriptContainerElement *local_398;
  longlong local_390;
  longlong local_388;
  FScriptContainerElement *local_380;
  FScriptContainerElement *local_378;
  FScriptContainerElement *local_370;
  int *local_368;
  FMassEntityHandle local_360;
  FMassEntityHandle *local_358;
  FMassEntityHandle *local_350;
  FMassEntityHandle *local_348;
  FMassEntityHandle *local_340;
  FMassEntityHandle *local_338;
  FMassEntityHandle *local_330;
  undefined4 local_328;
  undefined4 local_324;
  FMassEntityHandle *local_320;
  FMassEntityHandle *local_318;
  FMassEntityHandle *local_310;
  longlong local_308;
  longlong local_300;
  FMassEntityHandle *local_2f8;
  FMassEntityHandle *local_2f0;
  FScriptContainerElement *local_2e8;
  FMassEntityHandle *local_2e0;
  FScriptContainerElement *local_2d8;
  FScriptContainerElement *local_2d0;
  FScriptContainerElement *local_2c8;
  FScriptContainerElement *local_2c0;
  FScriptContainerElement *local_2b8;
  FScriptContainerElement *local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  FScriptContainerElement *local_2a0;
  FScriptContainerElement *local_298;
  FScriptContainerElement *local_290;
  longlong local_288;
  longlong local_280;
  FScriptContainerElement *local_278;
  FScriptContainerElement *local_270;
  FScriptContainerElement *local_268;
  int *local_260;
  FString *local_258;
  FString *local_250;
  FAutomationTestBase *local_248;
  FArchetypeEntityCollection_CreateWithInvalidDuplicatesWithPayload *local_240;
  FArchetypeEntityCollection_CreateWithInvalidDuplicatesWithPayload **local_238;
  TArrayView<FMassEntityHandle_const_,int> *local_230;
  FMassEntityManager *local_228;
  <lambda_1> local_220;
  FAutomationTestBase *local_218;
  undefined4 local_210;
  undefined4 local_20c;
  FMassArchetypeEntityCollectionWithPayload *local_208;
  FMassArchetypeEntityCollectionWithPayload *local_200;
  FMassArchetypeEntityCollectionWithPayload *local_1f8;
  FMassArchetypeEntityCollection *local_1f0;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *local_1e8;
  FAutomationTestBase *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  FMassArchetypeEntityCollectionWithPayload *local_1d0;
  FMassArchetypeEntityCollectionWithPayload *local_1c8;
  FMassArchetypeEntityCollectionWithPayload *local_1c0;
  FMassArchetypeEntityCollection *local_1b8;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *local_1b0;
  FAutomationTestBase *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  FMassArchetypeEntityCollectionWithPayload *local_198;
  FMassArchetypeEntityCollectionWithPayload *local_190;
  FMassArchetypeEntityCollectionWithPayload *local_188;
  FMassArchetypeEntityCollection *local_180;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *local_178;
  FAutomationTestBase *local_170;
  int local_168;
  FTestFragment_Int local_164;
  int local_160;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  TArrayView<FStructArrayView,int> local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  FMassGenericPayloadView local_c8;
  TArrayView<FMassEntityHandle_const_,int> local_b8;
  FStructArrayView local_a8;
  FString local_90;
  TArrayView<FStructArrayView,int> local_80;
  FMassGenericPayloadView local_70;
  TArrayView<FMassEntityHandle_const_,int> local_60;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_50;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_40;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_30 [2];
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_7c8.AllocatorInstance);
  local_7c8.ArrayNum = 0;
  local_7c8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_7c8.AllocatorInstance);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_7d8.AllocatorInstance);
  local_7d8.ArrayNum = 0;
  local_7d8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_7d8.AllocatorInstance);
  pFVar10 = &local_6a8;
  for (lVar8 = 8; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pFVar10->Index = 0;
    pFVar10 = (FMassEntityHandle *)((longlong)&pFVar10->Index + 1);
  }
  local_738 = FMassEntityHandle::FMassEntityHandle(&local_6a8);
  local_6a0 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
  local_698 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
  local_690 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
  if (local_7c8.AllocatorInstance.Data <= local_738) {
    local_688 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
    local_680 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
    local_678 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
    if (local_738 <
        (FMassEntityHandle *)(local_7c8.AllocatorInstance.Data + (longlong)local_7c8.ArrayMax * 8))
    {
      local_670 = 0;
      local_66c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_650 = (longlong)local_7c8.ArrayNum;
      local_648 = (longlong)local_7c8.ArrayMax;
      local_668 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
      local_660 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
      local_658 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
      local_640 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if (local_7c8.ArrayNum == local_7c8.ArrayMax) {
    local_7c8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_7c8.AllocatorInstance,&local_7c8.ArrayMax);
  }
  local_748 = local_7c8.ArrayNum;
  local_638 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
  local_630 = local_7c8.AllocatorInstance.Data + (longlong)local_7c8.ArrayNum * 8;
  local_7c8.ArrayNum = local_7c8.ArrayNum + 1;
  local_628 = ::operator_new(8,local_630);
  *local_628 = *local_738;
  local_168 = local_748;
  local_730 = (FScriptContainerElement *)FTestFragment_Int::FTestFragment_Int(&local_164,2);
  local_620 = local_7d8.AllocatorInstance.Data;
  local_618 = local_7d8.AllocatorInstance.Data;
  local_610 = local_7d8.AllocatorInstance.Data;
  if (local_7d8.AllocatorInstance.Data <= local_730) {
    local_608 = local_7d8.AllocatorInstance.Data;
    local_600 = local_7d8.AllocatorInstance.Data;
    local_5f8 = local_7d8.AllocatorInstance.Data;
    if (local_730 < local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayMax * 4) {
      local_5f0 = 0;
      local_5ec = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_5d0 = (longlong)local_7d8.ArrayNum;
      local_5c8 = (longlong)local_7d8.ArrayMax;
      local_5e8 = local_7d8.AllocatorInstance.Data;
      local_5e0 = local_7d8.AllocatorInstance.Data;
      local_5d8 = local_7d8.AllocatorInstance.Data;
      local_5c0 = local_7d8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if (local_7d8.ArrayNum == local_7d8.ArrayMax) {
    local_7d8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&local_7d8.AllocatorInstance,&local_7d8.ArrayMax);
  }
  local_744 = local_7d8.ArrayNum;
  local_5b8 = local_7d8.AllocatorInstance.Data;
  local_5b0 = local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayNum * 4;
  local_7d8.ArrayNum = local_7d8.ArrayNum + 1;
  local_5a8 = ::operator_new(4,local_5b0);
  *local_5a8 = *(int *)local_730;
  local_160 = local_744;
  local_6d8 = (ulonglong *)&this->field_0x90;
  local_794 = 1;
  local_740 = (uint)(0 < *(int *)&this->field_0x98);
  if (local_740 == 0) {
    local_5a0 = 0;
    local_59c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_728 = (FMassEntityHandle *)*local_6d8;
  local_580 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
  local_578 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
  local_570 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
  local_598 = local_728;
  local_590 = local_728;
  local_588 = local_728;
  if (local_7c8.AllocatorInstance.Data <= local_728) {
    local_568 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
    local_560 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
    local_558 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
    if (local_728 <
        (FMassEntityHandle *)(local_7c8.AllocatorInstance.Data + (longlong)local_7c8.ArrayMax * 8))
    {
      local_550 = 0;
      local_54c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_530 = (longlong)local_7c8.ArrayNum;
      local_528 = (longlong)local_7c8.ArrayMax;
      local_548 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
      local_540 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
      local_538 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
      local_520 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if (local_7c8.ArrayNum == local_7c8.ArrayMax) {
    local_7c8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_7c8.AllocatorInstance,&local_7c8.ArrayMax);
  }
  local_790 = local_7c8.ArrayNum;
  local_518 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
  local_510 = local_7c8.AllocatorInstance.Data + (longlong)local_7c8.ArrayNum * 8;
  local_7c8.ArrayNum = local_7c8.ArrayNum + 1;
  local_508 = ::operator_new(8,local_510);
  *local_508 = *local_728;
  local_6d0 = local_790;
  local_720 = (FScriptContainerElement *)FTestFragment_Int::FTestFragment_Int(&local_6cc,0);
  local_500 = local_7d8.AllocatorInstance.Data;
  local_4f8 = local_7d8.AllocatorInstance.Data;
  local_4f0 = local_7d8.AllocatorInstance.Data;
  if (local_7d8.AllocatorInstance.Data <= local_720) {
    local_4e8 = local_7d8.AllocatorInstance.Data;
    local_4e0 = local_7d8.AllocatorInstance.Data;
    local_4d8 = local_7d8.AllocatorInstance.Data;
    if (local_720 < local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayMax * 4) {
      local_4d0 = 0;
      local_4cc = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_4b0 = (longlong)local_7d8.ArrayNum;
      local_4a8 = (longlong)local_7d8.ArrayMax;
      local_4c8 = local_7d8.AllocatorInstance.Data;
      local_4c0 = local_7d8.AllocatorInstance.Data;
      local_4b8 = local_7d8.AllocatorInstance.Data;
      local_4a0 = local_7d8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if (local_7d8.ArrayNum == local_7d8.ArrayMax) {
    local_7d8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&local_7d8.AllocatorInstance,&local_7d8.ArrayMax);
  }
  local_78c = local_7d8.ArrayNum;
  local_498 = local_7d8.AllocatorInstance.Data;
  local_490 = local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayNum * 4;
  local_7d8.ArrayNum = local_7d8.ArrayNum + 1;
  local_488 = ::operator_new(4,local_490);
  *local_488 = *(int *)local_720;
  local_6c8 = local_78c;
  local_6e8 = (undefined8 *)&this->field_0x90;
  local_784 = 1;
  local_788 = (uint)(0 < *(int *)&this->field_0x98);
  if (local_788 == 0) {
    local_480 = 0;
    local_47c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_718 = (FMassEntityHandle *)*local_6e8;
  local_460 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
  local_458 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
  local_450 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
  local_478 = local_718;
  local_470 = local_718;
  local_468 = local_718;
  if (local_7c8.AllocatorInstance.Data <= local_718) {
    local_448 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
    local_440 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
    local_438 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
    if (local_718 <
        (FMassEntityHandle *)(local_7c8.AllocatorInstance.Data + (longlong)local_7c8.ArrayMax * 8))
    {
      local_430 = 0;
      local_42c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_410 = (longlong)local_7c8.ArrayNum;
      local_408 = (longlong)local_7c8.ArrayMax;
      local_428 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
      local_420 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
      local_418 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
      local_400 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if (local_7c8.ArrayNum == local_7c8.ArrayMax) {
    local_7c8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_7c8.AllocatorInstance,&local_7c8.ArrayMax);
  }
  local_780 = local_7c8.ArrayNum;
  local_3f8 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
  local_3f0 = local_7c8.AllocatorInstance.Data + (longlong)local_7c8.ArrayNum * 8;
  local_7c8.ArrayNum = local_7c8.ArrayNum + 1;
  local_3e8 = ::operator_new(8,local_3f0);
  *local_3e8 = *local_718;
  local_6c4 = local_780;
  local_710 = (FScriptContainerElement *)FTestFragment_Int::FTestFragment_Int(&local_6c0,1);
  local_3e0 = local_7d8.AllocatorInstance.Data;
  local_3d8 = local_7d8.AllocatorInstance.Data;
  local_3d0 = local_7d8.AllocatorInstance.Data;
  if (local_7d8.AllocatorInstance.Data <= local_710) {
    local_3c8 = local_7d8.AllocatorInstance.Data;
    local_3c0 = local_7d8.AllocatorInstance.Data;
    local_3b8 = local_7d8.AllocatorInstance.Data;
    if (local_710 < local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayMax * 4) {
      local_3b0 = 0;
      local_3ac = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_390 = (longlong)local_7d8.ArrayNum;
      local_388 = (longlong)local_7d8.ArrayMax;
      local_3a8 = local_7d8.AllocatorInstance.Data;
      local_3a0 = local_7d8.AllocatorInstance.Data;
      local_398 = local_7d8.AllocatorInstance.Data;
      local_380 = local_7d8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if (local_7d8.ArrayNum == local_7d8.ArrayMax) {
    local_7d8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&local_7d8.AllocatorInstance,&local_7d8.ArrayMax);
  }
  local_77c = local_7d8.ArrayNum;
  local_378 = local_7d8.AllocatorInstance.Data;
  local_370 = local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayNum * 4;
  local_7d8.ArrayNum = local_7d8.ArrayNum + 1;
  local_368 = ::operator_new(4,local_370);
  *local_368 = *(int *)local_710;
  local_6bc = local_77c;
  pFVar10 = &local_360;
  for (lVar8 = 8; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pFVar10->Index = 0;
    pFVar10 = (FMassEntityHandle *)((longlong)&pFVar10->Index + 1);
  }
  local_708 = FMassEntityHandle::FMassEntityHandle(&local_360);
  local_358 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
  local_350 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
  local_348 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
  if (local_7c8.AllocatorInstance.Data <= local_708) {
    local_340 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
    local_338 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
    local_330 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
    if (local_708 <
        (FMassEntityHandle *)(local_7c8.AllocatorInstance.Data + (longlong)local_7c8.ArrayMax * 8))
    {
      local_328 = 0;
      local_324 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_308 = (longlong)local_7c8.ArrayNum;
      local_300 = (longlong)local_7c8.ArrayMax;
      local_320 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
      local_318 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
      local_310 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
      local_2f8 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if (local_7c8.ArrayNum == local_7c8.ArrayMax) {
    local_7c8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_7c8.AllocatorInstance,&local_7c8.ArrayMax);
  }
  local_778 = local_7c8.ArrayNum;
  local_2f0 = (FMassEntityHandle *)local_7c8.AllocatorInstance.Data;
  local_2e8 = local_7c8.AllocatorInstance.Data + (longlong)local_7c8.ArrayNum * 8;
  local_7c8.ArrayNum = local_7c8.ArrayNum + 1;
  local_2e0 = ::operator_new(8,local_2e8);
  *local_2e0 = *local_708;
  local_6b8 = local_778;
  local_700 = (FScriptContainerElement *)FTestFragment_Int::FTestFragment_Int(&local_6b4,3);
  local_2d8 = local_7d8.AllocatorInstance.Data;
  local_2d0 = local_7d8.AllocatorInstance.Data;
  local_2c8 = local_7d8.AllocatorInstance.Data;
  if (local_7d8.AllocatorInstance.Data <= local_700) {
    local_2c0 = local_7d8.AllocatorInstance.Data;
    local_2b8 = local_7d8.AllocatorInstance.Data;
    local_2b0 = local_7d8.AllocatorInstance.Data;
    if (local_700 < local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayMax * 4) {
      local_2a8 = 0;
      local_2a4 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_288 = (longlong)local_7d8.ArrayNum;
      local_280 = (longlong)local_7d8.ArrayMax;
      local_2a0 = local_7d8.AllocatorInstance.Data;
      local_298 = local_7d8.AllocatorInstance.Data;
      local_290 = local_7d8.AllocatorInstance.Data;
      local_278 = local_7d8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if (local_7d8.ArrayNum == local_7d8.ArrayMax) {
    local_7d8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&local_7d8.AllocatorInstance,&local_7d8.ArrayMax);
  }
  local_774 = local_7d8.ArrayNum;
  local_270 = local_7d8.AllocatorInstance.Data;
  local_268 = local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayNum * 4;
  local_7d8.ArrayNum = local_7d8.ArrayNum + 1;
  local_260 = ::operator_new(4,local_268);
  *local_260 = *(int *)local_700;
  local_6b0 = local_774;
  FStructArrayView::FStructArrayView<FTestFragment_Int>(&local_a8,&local_7d8);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_7a8.AllocatorInstance);
  local_7a8.ArrayNum = 0;
  local_7a8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_7a8.AllocatorInstance);
  local_248 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_258 = &local_90;
  local_250 = ::FString::FString(local_258,"Invalid entity handle passed in");
  FAutomationTestBase::AddExpectedErrorPlain(local_248,local_250,Contains,2);
  local_238 = &local_240;
  local_240 = this;
  ScopeExitSupport::FScopeGuardSyntaxSupport::
  operator+<_FMassArchetypeEntityCollectionTest::FArchetypeEntityCollection_CreateWithInvalidDuplicatesWithPayload::InstantTest_::__l3::<lambda_1>_>
            (local_798,&local_220);
  UE::AITestSuite::TestsInProgress = UE::AITestSuite::TestsInProgress + 1;
  pTVar4 = MakeArrayView<FStructArrayView>(&local_80,&local_a8,1);
  pTVar11 = &local_118;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar11->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FStructArrayView,int> *)((longlong)&pTVar4->DataPtr + 1);
    pTVar11 = (TArrayView<FStructArrayView,int> *)((longlong)&pTVar11->DataPtr + 1);
  }
  pFVar5 = FMassGenericPayloadView::FMassGenericPayloadView(&local_70,&local_118);
  puVar9 = local_108;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&(pFVar5->Content).DataPtr;
    pFVar5 = (FMassGenericPayloadView *)((longlong)&(pFVar5->Content).DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_108;
  puVar12 = local_e8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar12 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar12 = puVar12 + 1;
  }
  local_230 = &local_60;
  pTVar6 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_230,&local_7c8);
  puVar9 = local_f8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar6->DataPtr;
    pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_f8;
  puVar12 = local_d8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar12 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar12 = puVar12 + 1;
  }
  local_228 = TSharedPtr<FMassEntityManager,1>::operator*<FMassEntityManager>
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  puVar9 = local_e8;
  pFVar5 = &local_c8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&(pFVar5->Content).DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pFVar5 = (FMassGenericPayloadView *)((longlong)&(pFVar5->Content).DataPtr + 1);
  }
  puVar9 = local_d8;
  pTVar6 = &local_b8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar6->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
  }
  FMassArchetypeEntityCollectionWithPayload::CreateEntityRangesWithPayload
            (local_228,&local_b8,FoldDuplicates,&local_c8,&local_7a8);
  ScopeExitSupport::
  TScopeGuard<`FMassArchetypeEntityCollectionTest::FArchetypeEntityCollection_CreateWithInvalidDuplicatesWithPayload::InstantTest'::__l3::<lambda_1>_>
  ::
  ~TScopeGuard<_FMassArchetypeEntityCollectionTest::FArchetypeEntityCollection_CreateWithInvalidDuplicatesWithPayload::InstantTest_::__l3::<lambda_1>_>
            (&local_220);
  local_218 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_6ec = local_7a8.ArrayNum;
  local_6e0 = local_7a8.ArrayNum;
  ::FString::FString(&local_158,L"We expect only a single result");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_158,local_6e0,1,local_218);
  local_7b8 = !bVar2;
  local_770 = (uint)(byte)local_7b8;
  ::FString::~FString(&local_158);
  if (local_7b8 == '\0') {
    local_1e0 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_768 = 1;
    local_76c = (uint)(0 < local_7a8.ArrayNum);
    if (local_76c == 0) {
      local_210 = 0;
      local_20c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    local_208 = (FMassArchetypeEntityCollectionWithPayload *)local_7a8.AllocatorInstance.Data;
    local_200 = (FMassArchetypeEntityCollectionWithPayload *)local_7a8.AllocatorInstance.Data;
    local_1f8 = (FMassArchetypeEntityCollectionWithPayload *)local_7a8.AllocatorInstance.Data;
    local_1f0 = FMassArchetypeEntityCollectionWithPayload::GetEntityCollection
                          ((FMassArchetypeEntityCollectionWithPayload *)
                           local_7a8.AllocatorInstance.Data);
    local_1e8 = FMassArchetypeEntityCollection::GetRanges(local_1f0,&local_50);
    local_6f8 = local_1e8->ArrayNum;
    local_6dc = local_6f8;
    ::FString::FString(&local_148,L"We expect only a single resulting range");
    bVar2 = FTestHelpers::TestEqual<int,int>(&local_148,local_6f8,1,local_1e0);
    local_7b6 = !bVar2;
    local_764 = (uint)(byte)local_7b6;
    ::FString::~FString(&local_148);
    if (local_7b6 == '\0') {
      local_1a8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_75c = 1;
      local_760 = (uint)(0 < local_7a8.ArrayNum);
      if (local_760 == 0) {
        local_1d8 = 0;
        local_1d4 = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      local_1d0 = (FMassArchetypeEntityCollectionWithPayload *)local_7a8.AllocatorInstance.Data;
      local_1c8 = (FMassArchetypeEntityCollectionWithPayload *)local_7a8.AllocatorInstance.Data;
      local_1c0 = (FMassArchetypeEntityCollectionWithPayload *)local_7a8.AllocatorInstance.Data;
      local_1b8 = FMassArchetypeEntityCollectionWithPayload::GetEntityCollection
                            ((FMassArchetypeEntityCollectionWithPayload *)
                             local_7a8.AllocatorInstance.Data);
      local_1b0 = FMassArchetypeEntityCollection::GetRanges(local_1b8,&local_40);
      pFVar7 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
               operator[](local_1b0,0);
      local_6f4 = pFVar7->SubchunkStart;
      ::FString::FString(&local_138,L"We expect only a single entity in the resulting range");
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_138,local_6f4,0,local_1a8);
      local_7b4 = !bVar2;
      local_758 = (uint)(byte)local_7b4;
      ::FString::~FString(&local_138);
      if (local_7b4 == '\0') {
        local_170 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_750 = 1;
        local_754 = (uint)(0 < local_7a8.ArrayNum);
        if (local_754 == 0) {
          local_1a0 = 0;
          local_19c = 0;
          UE::Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        local_198 = (FMassArchetypeEntityCollectionWithPayload *)local_7a8.AllocatorInstance.Data;
        local_190 = (FMassArchetypeEntityCollectionWithPayload *)local_7a8.AllocatorInstance.Data;
        local_188 = (FMassArchetypeEntityCollectionWithPayload *)local_7a8.AllocatorInstance.Data;
        local_180 = FMassArchetypeEntityCollectionWithPayload::GetEntityCollection
                              ((FMassArchetypeEntityCollectionWithPayload *)
                               local_7a8.AllocatorInstance.Data);
        local_178 = FMassArchetypeEntityCollection::GetRanges(local_180,local_30);
        pFVar7 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
                 operator[](local_178,0);
        local_6f0 = pFVar7->Length;
        ::FString::FString(&local_128,L"We expect only a single entity in the resulting range");
        bVar2 = FTestHelpers::TestEqual<int,int>(&local_128,local_6f0,1,local_170);
        local_7b2 = !bVar2;
        local_74c = (uint)(byte)local_7b2;
        ::FString::~FString(&local_128);
        if (local_7b2 == '\0') {
          local_7b0 = 1;
          TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>(&local_7a8)
          ;
          TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>::
          ~TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>(&local_7d8);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_7c8);
          local_7b7 = local_7b0;
        }
        else {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          local_7b1 = 0;
          TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>(&local_7a8)
          ;
          TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>::
          ~TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>(&local_7d8);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_7c8);
          local_7b7 = local_7b1;
        }
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        local_7b3 = 0;
        TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>(&local_7a8);
        TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>::
        ~TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>(&local_7d8);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_7c8);
        local_7b7 = local_7b3;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_7b5 = 0;
      TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>(&local_7a8);
      TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>::
      ~TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>(&local_7d8);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_7c8);
      local_7b7 = local_7b5;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    local_7b7 = 0;
    TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>(&local_7a8);
    TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>::
    ~TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>(&local_7d8);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_7c8);
  }
  return (bool)local_7b7;
}

