// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14712a840

/* WARNING: Removing unreachable block (ram,0x00014712be79) */
/* WARNING: Removing unreachable block (ram,0x00014712b6d1) */
/* WARNING: Removing unreachable block (ram,0x00014712aad4) */
/* WARNING: Removing unreachable block (ram,0x00014712adfb) */
/* WARNING: Removing unreachable block (ram,0x00014712c3e7) */

bool __thiscall
FMassArchetypeEntityCollectionTest::FArchetypeEntityCollection_CreateWithInvalidDuplicates::
InstantTest(FArchetypeEntityCollection_CreateWithInvalidDuplicates *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<FMassEntityHandle_const_,int> *pTVar4;
  FArchetypeEntityRange *pFVar5;
  longlong lVar6;
  FMassEntityHandle *pFVar7;
  TArrayView<FMassEntityHandle_const_,int> *pTVar8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_908;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_8f8;
  char local_8e8;
  undefined1 local_8e7;
  char local_8e6;
  undefined1 local_8e5;
  char local_8e4;
  undefined1 local_8e3;
  char local_8e2;
  undefined1 local_8e1;
  char local_8e0;
  undefined1 local_8df;
  char local_8de;
  undefined1 local_8dd;
  undefined4 local_8dc;
  int local_8d8;
  uint local_8d4;
  undefined4 local_8d0;
  int local_8cc;
  int local_8c8;
  uint local_8c4;
  uint local_8c0;
  uint local_8bc;
  uint local_8b8;
  undefined4 local_8b4;
  int local_8b0;
  int local_8ac;
  int local_8a8;
  uint local_8a4;
  undefined4 local_8a0;
  int local_89c;
  int local_898;
  uint local_894;
  undefined4 local_890;
  int local_88c;
  uint local_888;
  uint local_884;
  uint local_880;
  int local_87c;
  uint local_878;
  FMassEntityHandle *local_870;
  FMassEntityHandle *local_868;
  FMassEntityHandle *local_860;
  FMassEntityHandle *local_858;
  FMassEntityHandle *local_850;
  FMassEntityHandle *local_848;
  FMassEntityHandle *local_840;
  FMassEntityHandle *local_838;
  FMassEntityHandle *local_830;
  FMassEntityHandle *local_828;
  int local_820;
  int local_81c;
  int local_818;
  int local_814;
  int local_810;
  int local_80c;
  int local_808;
  ulonglong *local_800;
  undefined8 *local_7f8;
  longlong *local_7f0;
  longlong *local_7e8;
  int local_7e0;
  longlong *local_7d8;
  int local_7d0;
  int local_7cc;
  int local_7c8;
  int local_7c4;
  int local_7c0;
  int local_7bc;
  int local_7b8;
  int local_7b4;
  FMassEntityHandle local_7b0;
  FMassEntityHandle *local_7a8;
  FMassEntityHandle *local_7a0;
  FMassEntityHandle *local_798;
  FMassEntityHandle *local_790;
  FMassEntityHandle *local_788;
  FMassEntityHandle *local_780;
  undefined4 local_778;
  undefined4 local_774;
  FMassEntityHandle *local_770;
  FMassEntityHandle *local_768;
  FMassEntityHandle *local_760;
  longlong local_758;
  longlong local_750;
  FMassEntityHandle *local_748;
  FMassEntityHandle *local_740;
  FScriptContainerElement *local_738;
  FMassEntityHandle *local_730;
  undefined4 local_728;
  undefined4 local_724;
  FMassEntityHandle *local_720;
  FMassEntityHandle *local_718;
  FMassEntityHandle *local_710;
  FMassEntityHandle *local_708;
  FMassEntityHandle *local_700;
  FMassEntityHandle *local_6f8;
  FMassEntityHandle *local_6f0;
  FMassEntityHandle *local_6e8;
  FMassEntityHandle *local_6e0;
  undefined4 local_6d8;
  undefined4 local_6d4;
  FMassEntityHandle *local_6d0;
  FMassEntityHandle *local_6c8;
  FMassEntityHandle *local_6c0;
  longlong local_6b8;
  longlong local_6b0;
  FMassEntityHandle *local_6a8;
  FMassEntityHandle *local_6a0;
  FScriptContainerElement *local_698;
  FMassEntityHandle *local_690;
  undefined4 local_688;
  undefined4 local_684;
  FMassEntityHandle *local_680;
  FMassEntityHandle *local_678;
  FMassEntityHandle *local_670;
  FMassEntityHandle *local_668;
  FMassEntityHandle *local_660;
  FMassEntityHandle *local_658;
  FMassEntityHandle *local_650;
  FMassEntityHandle *local_648;
  FMassEntityHandle *local_640;
  undefined4 local_638;
  undefined4 local_634;
  FMassEntityHandle *local_630;
  FMassEntityHandle *local_628;
  FMassEntityHandle *local_620;
  longlong local_618;
  longlong local_610;
  FMassEntityHandle *local_608;
  FMassEntityHandle *local_600;
  FScriptContainerElement *local_5f8;
  FMassEntityHandle *local_5f0;
  FMassEntityHandle local_5e8;
  FMassEntityHandle *local_5e0;
  FMassEntityHandle *local_5d8;
  FMassEntityHandle *local_5d0;
  FMassEntityHandle *local_5c8;
  FMassEntityHandle *local_5c0;
  FMassEntityHandle *local_5b8;
  undefined4 local_5b0;
  undefined4 local_5ac;
  FMassEntityHandle *local_5a8;
  FMassEntityHandle *local_5a0;
  FMassEntityHandle *local_598;
  longlong local_590;
  longlong local_588;
  FMassEntityHandle *local_580;
  FMassEntityHandle *local_578;
  FScriptContainerElement *local_570;
  FMassEntityHandle *local_568;
  TArrayView<FMassEntityHandle_const_,int> *local_560;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *local_558;
  FAutomationTestBase *local_550;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *local_548;
  FAutomationTestBase *local_540;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *local_538;
  FAutomationTestBase *local_530;
  undefined4 local_528;
  undefined4 local_524;
  longlong local_520;
  longlong local_518;
  FMassEntityHandle *local_510;
  FMassEntityHandle *local_508;
  FMassEntityHandle *local_500;
  FMassEntityHandle *local_4f8;
  FMassEntityHandle *local_4f0;
  FMassEntityHandle *local_4e8;
  FMassEntityHandle *local_4e0;
  undefined4 local_4d8;
  undefined4 local_4d4;
  FMassEntityHandle *local_4d0;
  FMassEntityHandle *local_4c8;
  FMassEntityHandle *local_4c0;
  longlong local_4b8;
  longlong local_4b0;
  FMassEntityHandle *local_4a8;
  FMassEntityHandle *local_4a0;
  FScriptContainerElement *local_498;
  FMassEntityHandle *local_490;
  FMassEntityHandle local_488;
  FMassEntityHandle *local_480;
  FMassEntityHandle *local_478;
  FMassEntityHandle *local_470;
  FMassEntityHandle *local_468;
  FMassEntityHandle *local_460;
  FMassEntityHandle *local_458;
  undefined4 local_450;
  undefined4 local_44c;
  FMassEntityHandle *local_448;
  FMassEntityHandle *local_440;
  FMassEntityHandle *local_438;
  longlong local_430;
  longlong local_428;
  FMassEntityHandle *local_420;
  FMassEntityHandle *local_418;
  FScriptContainerElement *local_410;
  FMassEntityHandle *local_408;
  FMassEntityHandle local_400;
  FMassEntityHandle *local_3f8;
  FMassEntityHandle *local_3f0;
  FMassEntityHandle *local_3e8;
  FMassEntityHandle *local_3e0;
  FMassEntityHandle *local_3d8;
  FMassEntityHandle *local_3d0;
  undefined4 local_3c8;
  undefined4 local_3c4;
  FMassEntityHandle *local_3c0;
  FMassEntityHandle *local_3b8;
  FMassEntityHandle *local_3b0;
  longlong local_3a8;
  longlong local_3a0;
  FMassEntityHandle *local_398;
  FMassEntityHandle *local_390;
  FScriptContainerElement *local_388;
  FMassEntityHandle *local_380;
  undefined4 local_378;
  undefined4 local_374;
  longlong local_370;
  longlong local_368;
  FMassEntityHandle *local_360;
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
  FMassEntityHandle local_2d8;
  FMassEntityHandle *local_2d0;
  FMassEntityHandle *local_2c8;
  FMassEntityHandle *local_2c0;
  FMassEntityHandle *local_2b8;
  FMassEntityHandle *local_2b0;
  FMassEntityHandle *local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  FMassEntityHandle *local_298;
  FMassEntityHandle *local_290;
  FMassEntityHandle *local_288;
  longlong local_280;
  longlong local_278;
  FMassEntityHandle *local_270;
  FMassEntityHandle *local_268;
  FScriptContainerElement *local_260;
  FMassEntityHandle *local_258;
  undefined4 local_250;
  undefined4 local_24c;
  longlong local_248;
  longlong local_240;
  FMassEntityHandle *local_238;
  FMassEntityHandle *local_230;
  FMassEntityHandle *local_228;
  FMassEntityHandle *local_220;
  FMassEntityHandle *local_218;
  FMassEntityHandle *local_210;
  FMassEntityHandle *local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  FMassEntityHandle *local_1f8;
  FMassEntityHandle *local_1f0;
  FMassEntityHandle *local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  FMassEntityHandle *local_1d0;
  FMassEntityHandle *local_1c8;
  FScriptContainerElement *local_1c0;
  FMassEntityHandle *local_1b8;
  TArrayView<FMassEntityHandle_const_,int> *local_1b0;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *local_1a8;
  FAutomationTestBase *local_1a0;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *local_198;
  FAutomationTestBase *local_190;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *local_188;
  FAutomationTestBase *local_180;
  int local_178;
  int local_174;
  FMassArchetypeEntityCollection local_170;
  FMassArchetypeEntityCollection local_148;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  TArrayView<FMassEntityHandle_const_,int> local_b8;
  TArrayView<FMassEntityHandle_const_,int> local_a8;
  TArrayView<FMassEntityHandle_const_,int> local_98;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_88;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_78;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_68;
  TArrayView<FMassEntityHandle_const_,int> local_58;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_48;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_38;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_28;
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_8f8.AllocatorInstance);
  local_8f8.ArrayNum = 0;
  local_8f8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_8f8.AllocatorInstance);
  pFVar7 = &local_7b0;
  for (lVar6 = 8; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pFVar7->Index = 0;
    pFVar7 = (FMassEntityHandle *)((longlong)&pFVar7->Index + 1);
  }
  local_848 = FMassEntityHandle::FMassEntityHandle(&local_7b0);
  local_7a8 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
  local_7a0 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
  local_798 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
  if (local_8f8.AllocatorInstance.Data <= local_848) {
    local_790 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
    local_788 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
    local_780 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
    if (local_848 <
        (FMassEntityHandle *)(local_8f8.AllocatorInstance.Data + (longlong)local_8f8.ArrayMax * 8))
    {
      local_778 = 0;
      local_774 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_758 = (longlong)local_8f8.ArrayNum;
      local_750 = (longlong)local_8f8.ArrayMax;
      local_770 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
      local_768 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
      local_760 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
      local_748 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
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
  if (local_8f8.ArrayNum == local_8f8.ArrayMax) {
    local_8f8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_8f8.AllocatorInstance,&local_8f8.ArrayMax);
  }
  local_87c = local_8f8.ArrayNum;
  local_740 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
  local_738 = local_8f8.AllocatorInstance.Data + (longlong)local_8f8.ArrayNum * 8;
  local_8f8.ArrayNum = local_8f8.ArrayNum + 1;
  local_730 = ::operator_new(8,local_738);
  *local_730 = *local_848;
  local_178 = local_87c;
  local_800 = (ulonglong *)&this->field_0x90;
  local_8dc = 1;
  local_878 = (uint)(0 < *(int *)&this->field_0x98);
  if (local_878 == 0) {
    local_728 = 0;
    local_724 = 0;
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
  local_840 = (FMassEntityHandle *)*local_800;
  local_708 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
  local_700 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
  local_6f8 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
  local_720 = local_840;
  local_718 = local_840;
  local_710 = local_840;
  if (local_8f8.AllocatorInstance.Data <= local_840) {
    local_6f0 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
    local_6e8 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
    local_6e0 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
    if (local_840 <
        (FMassEntityHandle *)(local_8f8.AllocatorInstance.Data + (longlong)local_8f8.ArrayMax * 8))
    {
      local_6d8 = 0;
      local_6d4 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_6b8 = (longlong)local_8f8.ArrayNum;
      local_6b0 = (longlong)local_8f8.ArrayMax;
      local_6d0 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
      local_6c8 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
      local_6c0 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
      local_6a8 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
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
  if (local_8f8.ArrayNum == local_8f8.ArrayMax) {
    local_8f8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_8f8.AllocatorInstance,&local_8f8.ArrayMax);
  }
  local_8d8 = local_8f8.ArrayNum;
  local_6a0 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
  local_698 = local_8f8.AllocatorInstance.Data + (longlong)local_8f8.ArrayNum * 8;
  local_8f8.ArrayNum = local_8f8.ArrayNum + 1;
  local_690 = ::operator_new(8,local_698);
  *local_690 = *local_840;
  local_174 = local_8d8;
  local_7f8 = (undefined8 *)&this->field_0x90;
  local_8d0 = 1;
  local_8d4 = (uint)(0 < *(int *)&this->field_0x98);
  if (local_8d4 == 0) {
    local_688 = 0;
    local_684 = 0;
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
  local_838 = (FMassEntityHandle *)*local_7f8;
  local_668 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
  local_660 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
  local_658 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
  local_680 = local_838;
  local_678 = local_838;
  local_670 = local_838;
  if (local_8f8.AllocatorInstance.Data <= local_838) {
    local_650 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
    local_648 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
    local_640 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
    if (local_838 <
        (FMassEntityHandle *)(local_8f8.AllocatorInstance.Data + (longlong)local_8f8.ArrayMax * 8))
    {
      local_638 = 0;
      local_634 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_618 = (longlong)local_8f8.ArrayNum;
      local_610 = (longlong)local_8f8.ArrayMax;
      local_630 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
      local_628 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
      local_620 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
      local_608 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
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
  if (local_8f8.ArrayNum == local_8f8.ArrayMax) {
    local_8f8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_8f8.AllocatorInstance,&local_8f8.ArrayMax);
  }
  local_8cc = local_8f8.ArrayNum;
  local_600 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
  local_5f8 = local_8f8.AllocatorInstance.Data + (longlong)local_8f8.ArrayNum * 8;
  local_8f8.ArrayNum = local_8f8.ArrayNum + 1;
  local_5f0 = ::operator_new(8,local_5f8);
  *local_5f0 = *local_838;
  local_7d0 = local_8cc;
  pFVar7 = &local_5e8;
  for (lVar6 = 8; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pFVar7->Index = 0;
    pFVar7 = (FMassEntityHandle *)((longlong)&pFVar7->Index + 1);
  }
  local_830 = FMassEntityHandle::FMassEntityHandle(&local_5e8);
  local_5e0 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
  local_5d8 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
  local_5d0 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
  if (local_8f8.AllocatorInstance.Data <= local_830) {
    local_5c8 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
    local_5c0 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
    local_5b8 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
    if (local_830 <
        (FMassEntityHandle *)(local_8f8.AllocatorInstance.Data + (longlong)local_8f8.ArrayMax * 8))
    {
      local_5b0 = 0;
      local_5ac = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_590 = (longlong)local_8f8.ArrayNum;
      local_588 = (longlong)local_8f8.ArrayMax;
      local_5a8 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
      local_5a0 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
      local_598 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
      local_580 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
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
  if (local_8f8.ArrayNum == local_8f8.ArrayMax) {
    local_8f8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_8f8.AllocatorInstance,&local_8f8.ArrayMax);
  }
  local_8c8 = local_8f8.ArrayNum;
  local_578 = (FMassEntityHandle *)local_8f8.AllocatorInstance.Data;
  local_570 = local_8f8.AllocatorInstance.Data + (longlong)local_8f8.ArrayNum * 8;
  local_8f8.ArrayNum = local_8f8.ArrayNum + 1;
  local_568 = ::operator_new(8,local_570);
  *local_568 = *local_830;
  local_7cc = local_8c8;
  local_560 = &local_98;
  pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_560,&local_8f8);
  pTVar8 = &local_b8;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pTVar8->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    pTVar8 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar8->DataPtr + 1);
  }
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
            (&local_170,(FMassArchetypeHandle *)&this->field_0x50,&local_b8,FoldDuplicates);
  local_550 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_558 = FMassArchetypeEntityCollection::GetRanges(&local_170,&local_88);
  local_808 = local_558->ArrayNum;
  local_7e0 = local_808;
  ::FString::FString(&local_120,L"We expect only a single resulting range");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_120,local_7e0,1,local_550);
  local_8e8 = !bVar2;
  local_8c4 = (uint)(byte)local_8e8;
  ::FString::~FString(&local_120);
  if (local_8e8 == '\0') {
    local_540 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_548 = FMassArchetypeEntityCollection::GetRanges(&local_170,&local_78);
    pFVar5 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
             operator[](local_548,0);
    local_820 = pFVar5->SubchunkStart;
    ::FString::FString(&local_110,L"We expect only a single entity in the resulting range");
    bVar2 = FTestHelpers::TestEqual<int,int>(&local_110,local_820,0,local_540);
    local_8e6 = !bVar2;
    local_8c0 = (uint)(byte)local_8e6;
    ::FString::~FString(&local_110);
    if (local_8e6 == '\0') {
      local_530 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_538 = FMassArchetypeEntityCollection::GetRanges(&local_170,&local_68);
      pFVar5 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
               operator[](local_538,0);
      local_81c = pFVar5->Length;
      ::FString::FString(&local_100,L"We expect only a single entity in the resulting range");
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_100,local_81c,1,local_530);
      local_8e4 = !bVar2;
      local_8bc = (uint)(byte)local_8e4;
      ::FString::~FString(&local_100);
      if (local_8e4 == '\0') {
        FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_170);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_8f8);
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                  (&local_908.AllocatorInstance);
        local_908.ArrayNum = 0;
        local_908.ArrayMax =
             TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                       (&local_908.AllocatorInstance);
        local_7f0 = (longlong *)&this->field_0x90;
        local_8b4 = 1;
        local_8b8 = (uint)(4 < *(int *)&this->field_0x98);
        if (local_8b8 == 0) {
          local_528 = 0;
          local_524 = 0;
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
        local_520 = *local_7f0;
        local_828 = (FMassEntityHandle *)(local_520 + 0x20);
        local_508 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        local_500 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        local_4f8 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        local_518 = local_520;
        local_510 = local_828;
        if (local_908.AllocatorInstance.Data <= local_828) {
          local_4f0 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
          local_4e8 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
          local_4e0 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
          if (local_828 <
              (FMassEntityHandle *)
              (local_908.AllocatorInstance.Data + (longlong)local_908.ArrayMax * 8)) {
            local_4d8 = 0;
            local_4d4 = 0;
            UE::Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            local_4b8 = (longlong)local_908.ArrayNum;
            local_4b0 = (longlong)local_908.ArrayMax;
            local_4d0 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
            local_4c8 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
            local_4c0 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
            local_4a8 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
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
        if (local_908.ArrayNum == local_908.ArrayMax) {
          local_908.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_908.AllocatorInstance,&local_908.ArrayMax);
        }
        local_8b0 = local_908.ArrayNum;
        local_4a0 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        local_498 = local_908.AllocatorInstance.Data + (longlong)local_908.ArrayNum * 8;
        local_908.ArrayNum = local_908.ArrayNum + 1;
        local_490 = ::operator_new(8,local_498);
        *local_490 = *local_828;
        local_7c8 = local_8b0;
        pFVar7 = &local_488;
        for (lVar6 = 8; lVar6 != 0; lVar6 = lVar6 + -1) {
          *(undefined1 *)&pFVar7->Index = 0;
          pFVar7 = (FMassEntityHandle *)((longlong)&pFVar7->Index + 1);
        }
        local_870 = FMassEntityHandle::FMassEntityHandle(&local_488);
        local_480 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        local_478 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        local_470 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        if (local_908.AllocatorInstance.Data <= local_870) {
          local_468 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
          local_460 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
          local_458 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
          if (local_870 <
              (FMassEntityHandle *)
              (local_908.AllocatorInstance.Data + (longlong)local_908.ArrayMax * 8)) {
            local_450 = 0;
            local_44c = 0;
            UE::Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            local_430 = (longlong)local_908.ArrayNum;
            local_428 = (longlong)local_908.ArrayMax;
            local_448 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
            local_440 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
            local_438 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
            local_420 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
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
        if (local_908.ArrayNum == local_908.ArrayMax) {
          local_908.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_908.AllocatorInstance,&local_908.ArrayMax);
        }
        local_8ac = local_908.ArrayNum;
        local_418 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        local_410 = local_908.AllocatorInstance.Data + (longlong)local_908.ArrayNum * 8;
        local_908.ArrayNum = local_908.ArrayNum + 1;
        local_408 = ::operator_new(8,local_410);
        *local_408 = *local_870;
        local_7c4 = local_8ac;
        pFVar7 = &local_400;
        for (lVar6 = 8; lVar6 != 0; lVar6 = lVar6 + -1) {
          *(undefined1 *)&pFVar7->Index = 0;
          pFVar7 = (FMassEntityHandle *)((longlong)&pFVar7->Index + 1);
        }
        local_868 = FMassEntityHandle::FMassEntityHandle(&local_400);
        local_3f8 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        local_3f0 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        local_3e8 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        if (local_908.AllocatorInstance.Data <= local_868) {
          local_3e0 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
          local_3d8 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
          local_3d0 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
          if (local_868 <
              (FMassEntityHandle *)
              (local_908.AllocatorInstance.Data + (longlong)local_908.ArrayMax * 8)) {
            local_3c8 = 0;
            local_3c4 = 0;
            UE::Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            local_3a8 = (longlong)local_908.ArrayNum;
            local_3a0 = (longlong)local_908.ArrayMax;
            local_3c0 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
            local_3b8 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
            local_3b0 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
            local_398 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
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
        if (local_908.ArrayNum == local_908.ArrayMax) {
          local_908.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_908.AllocatorInstance,&local_908.ArrayMax);
        }
        local_8a8 = local_908.ArrayNum;
        local_390 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        local_388 = local_908.AllocatorInstance.Data + (longlong)local_908.ArrayNum * 8;
        local_908.ArrayNum = local_908.ArrayNum + 1;
        local_380 = ::operator_new(8,local_388);
        *local_380 = *local_868;
        local_7c0 = local_8a8;
        local_7e8 = (longlong *)&this->field_0x90;
        local_8a0 = 1;
        local_8a4 = (uint)(3 < *(int *)&this->field_0x98);
        if (local_8a4 == 0) {
          local_378 = 0;
          local_374 = 0;
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
        local_370 = *local_7e8;
        local_850 = (FMassEntityHandle *)(local_370 + 0x18);
        local_358 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        local_350 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        local_348 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        local_368 = local_370;
        local_360 = local_850;
        if (local_908.AllocatorInstance.Data <= local_850) {
          local_340 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
          local_338 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
          local_330 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
          if (local_850 <
              (FMassEntityHandle *)
              (local_908.AllocatorInstance.Data + (longlong)local_908.ArrayMax * 8)) {
            local_328 = 0;
            local_324 = 0;
            UE::Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            local_308 = (longlong)local_908.ArrayNum;
            local_300 = (longlong)local_908.ArrayMax;
            local_320 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
            local_318 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
            local_310 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
            local_2f8 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
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
        if (local_908.ArrayNum == local_908.ArrayMax) {
          local_908.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_908.AllocatorInstance,&local_908.ArrayMax);
        }
        local_89c = local_908.ArrayNum;
        local_2f0 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        local_2e8 = local_908.AllocatorInstance.Data + (longlong)local_908.ArrayNum * 8;
        local_908.ArrayNum = local_908.ArrayNum + 1;
        local_2e0 = ::operator_new(8,local_2e8);
        *local_2e0 = *local_850;
        local_7bc = local_89c;
        pFVar7 = &local_2d8;
        for (lVar6 = 8; lVar6 != 0; lVar6 = lVar6 + -1) {
          *(undefined1 *)&pFVar7->Index = 0;
          pFVar7 = (FMassEntityHandle *)((longlong)&pFVar7->Index + 1);
        }
        local_860 = FMassEntityHandle::FMassEntityHandle(&local_2d8);
        local_2d0 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        local_2c8 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        local_2c0 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        if (local_908.AllocatorInstance.Data <= local_860) {
          local_2b8 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
          local_2b0 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
          local_2a8 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
          if (local_860 <
              (FMassEntityHandle *)
              (local_908.AllocatorInstance.Data + (longlong)local_908.ArrayMax * 8)) {
            local_2a0 = 0;
            local_29c = 0;
            UE::Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            local_280 = (longlong)local_908.ArrayNum;
            local_278 = (longlong)local_908.ArrayMax;
            local_298 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
            local_290 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
            local_288 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
            local_270 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
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
        if (local_908.ArrayNum == local_908.ArrayMax) {
          local_908.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_908.AllocatorInstance,&local_908.ArrayMax);
        }
        local_898 = local_908.ArrayNum;
        local_268 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        local_260 = local_908.AllocatorInstance.Data + (longlong)local_908.ArrayNum * 8;
        local_908.ArrayNum = local_908.ArrayNum + 1;
        local_258 = ::operator_new(8,local_260);
        *local_258 = *local_860;
        local_7b8 = local_898;
        local_7d8 = (longlong *)&this->field_0x90;
        local_890 = 1;
        local_894 = (uint)(1 < *(int *)&this->field_0x98);
        if (local_894 == 0) {
          local_250 = 0;
          local_24c = 0;
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
        local_248 = *local_7d8;
        local_858 = (FMassEntityHandle *)(local_248 + 8);
        local_230 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        local_228 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        local_220 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        local_240 = local_248;
        local_238 = local_858;
        if (local_908.AllocatorInstance.Data <= local_858) {
          local_218 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
          local_210 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
          local_208 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
          if (local_858 <
              (FMassEntityHandle *)
              (local_908.AllocatorInstance.Data + (longlong)local_908.ArrayMax * 8)) {
            local_200 = 0;
            local_1fc = 0;
            UE::Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            local_1e0 = (longlong)local_908.ArrayNum;
            local_1d8 = (longlong)local_908.ArrayMax;
            local_1f8 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
            local_1f0 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
            local_1e8 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
            local_1d0 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
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
        if (local_908.ArrayNum == local_908.ArrayMax) {
          local_908.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_908.AllocatorInstance,&local_908.ArrayMax);
        }
        local_88c = local_908.ArrayNum;
        local_1c8 = (FMassEntityHandle *)local_908.AllocatorInstance.Data;
        local_1c0 = local_908.AllocatorInstance.Data + (longlong)local_908.ArrayNum * 8;
        local_908.ArrayNum = local_908.ArrayNum + 1;
        local_1b8 = ::operator_new(8,local_1c0);
        *local_1b8 = *local_858;
        local_7b4 = local_88c;
        local_1b0 = &local_58;
        pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
                 TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                           (local_1b0,&local_908);
        pTVar8 = &local_a8;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *(undefined1 *)&pTVar8->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
          pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
          pTVar8 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar8->DataPtr + 1);
        }
        FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
                  (&local_148,(FMassArchetypeHandle *)&this->field_0x50,&local_a8,FoldDuplicates);
        local_1a0 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_1a8 = FMassArchetypeEntityCollection::GetRanges(&local_148,&local_48);
        local_818 = local_1a8->ArrayNum;
        local_814 = local_818;
        ::FString::FString(&local_f0,L"We expect two resulting range");
        bVar2 = FTestHelpers::TestEqual<int,int>(&local_f0,local_814,2,local_1a0);
        local_8e2 = !bVar2;
        local_888 = (uint)(byte)local_8e2;
        ::FString::~FString(&local_f0);
        if (local_8e2 == '\0') {
          local_190 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_198 = FMassArchetypeEntityCollection::GetRanges(&local_148,&local_38);
          pFVar5 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
                   operator[](local_198,0);
          local_810 = pFVar5->Length;
          ::FString::FString(&local_e0,L"We expect the first range to consist of a single entity");
          bVar2 = FTestHelpers::TestEqual<int,int>(&local_e0,local_810,1,local_190);
          local_8e0 = !bVar2;
          local_884 = (uint)(byte)local_8e0;
          ::FString::~FString(&local_e0);
          if (local_8e0 == '\0') {
            local_180 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_188 = FMassArchetypeEntityCollection::GetRanges(&local_148,&local_28);
            pFVar5 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
                     operator[](local_188,1);
            local_80c = pFVar5->Length;
            ::FString::FString(&local_d0,L"We expect the second range to consist of a two entities")
            ;
            bVar2 = FTestHelpers::TestEqual<int,int>(&local_d0,local_80c,2,local_180);
            local_8de = !bVar2;
            local_880 = (uint)(byte)local_8de;
            ::FString::~FString(&local_d0);
            if (local_8de == '\0') {
              FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_148);
              TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
              ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_908);
              local_8e7 = 1;
            }
            else {
              UE::AITestSuite::ConditionallyBreakOnTestFail();
              local_8dd = 0;
              FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_148);
              TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
              ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_908);
              local_8e7 = local_8dd;
            }
          }
          else {
            UE::AITestSuite::ConditionallyBreakOnTestFail();
            local_8df = 0;
            FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_148);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_908);
            local_8e7 = local_8df;
          }
        }
        else {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          local_8e1 = 0;
          FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_148);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_908);
          local_8e7 = local_8e1;
        }
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        local_8e3 = 0;
        FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_170);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_8f8);
        local_8e7 = local_8e3;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_8e5 = 0;
      FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_170);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_8f8);
      local_8e7 = local_8e5;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    local_8e7 = 0;
    FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_170);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_8f8);
  }
  return (bool)local_8e7;
}

