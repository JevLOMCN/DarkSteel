// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147124c40

/* WARNING: Removing unreachable block (ram,0x000147126957) */
/* WARNING: Removing unreachable block (ram,0x0001471262ef) */
/* WARNING: Removing unreachable block (ram,0x000147125c87) */
/* WARNING: Removing unreachable block (ram,0x00014712561f) */
/* WARNING: Removing unreachable block (ram,0x000147124fc0) */
/* WARNING: Removing unreachable block (ram,0x000147124c9b) */
/* WARNING: Removing unreachable block (ram,0x0001471252eb) */
/* WARNING: Removing unreachable block (ram,0x000147125953) */
/* WARNING: Removing unreachable block (ram,0x000147125fbb) */
/* WARNING: Removing unreachable block (ram,0x000147126623) */
/* WARNING: Removing unreachable block (ram,0x000147126c8b) */

bool __thiscall
FMassArchetypeEntityCollectionTest::FArchetypeEntityCollection_CreateBasic::InstantTest
          (FArchetypeEntityCollection_CreateBasic *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<FMassEntityHandle_const_,int> *pTVar4;
  FArchetypeEntityRange *pFVar5;
  longlong lVar6;
  TArrayView<FMassEntityHandle_const_,int> *pTVar7;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_a18;
  char local_a08;
  undefined1 local_a07;
  char local_a06;
  undefined1 local_a05;
  char local_a04;
  undefined1 local_a03;
  char local_a02;
  undefined1 local_a01;
  char local_a00;
  undefined1 local_9ff;
  char local_9fe;
  undefined1 local_9fd;
  char local_9fc;
  undefined1 local_9fb;
  char local_9fa;
  undefined1 local_9f9;
  char local_9f8;
  undefined1 local_9f7;
  undefined1 local_9f6;
  undefined4 local_9f4;
  int local_9f0;
  uint local_9ec;
  undefined4 local_9e8;
  int local_9e4;
  uint local_9e0;
  undefined4 local_9dc;
  int local_9d8;
  uint local_9d4;
  undefined4 local_9d0;
  int local_9cc;
  uint local_9c8;
  undefined4 local_9c4;
  int local_9c0;
  uint local_9bc;
  undefined4 local_9b8;
  int local_9b4;
  uint local_9b0;
  undefined4 local_9ac;
  int local_9a8;
  uint local_9a4;
  undefined4 local_9a0;
  int local_99c;
  uint local_998;
  undefined4 local_994;
  int local_990;
  uint local_98c;
  undefined4 local_988;
  int local_984;
  uint local_980;
  undefined4 local_97c;
  int local_978;
  uint local_974;
  uint local_970;
  uint local_96c;
  uint local_968;
  uint local_964;
  uint local_960;
  uint local_95c;
  uint local_958;
  uint local_954;
  uint local_950;
  FScriptContainerElement *local_948;
  FScriptContainerElement *local_940;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_938;
  FScriptContainerElement *local_928;
  FScriptContainerElement *local_920;
  FScriptContainerElement *local_918;
  FScriptContainerElement *local_910;
  FScriptContainerElement *local_908;
  FScriptContainerElement *local_900;
  FScriptContainerElement *local_8f8;
  FScriptContainerElement *local_8f0;
  FScriptContainerElement *local_8e8;
  longlong *local_8e0;
  longlong *local_8d8;
  longlong *local_8d0;
  longlong *local_8c8;
  longlong *local_8c0;
  longlong *local_8b8;
  longlong *local_8b0;
  longlong *local_8a8;
  int local_8a0;
  int local_89c;
  int local_898;
  int local_894;
  int local_890;
  int local_88c;
  int local_888;
  int local_884;
  int local_880;
  longlong *local_878;
  longlong *local_870;
  int local_868;
  longlong *local_860;
  FMassArchetypeEntityCollection local_858;
  int local_830;
  int local_82c;
  int local_828;
  int local_824;
  int local_820;
  int local_81c;
  int local_818;
  int local_814;
  undefined4 local_810;
  undefined4 local_80c;
  longlong local_808;
  longlong local_800;
  FScriptContainerElement *local_7f8;
  FScriptContainerElement *local_7f0;
  FScriptContainerElement *local_7e8;
  FScriptContainerElement *local_7e0;
  FScriptContainerElement *local_7d8;
  FScriptContainerElement *local_7d0;
  FScriptContainerElement *local_7c8;
  undefined4 local_7c0;
  undefined4 local_7bc;
  FScriptContainerElement *local_7b8;
  FScriptContainerElement *local_7b0;
  FScriptContainerElement *local_7a8;
  longlong local_7a0;
  longlong local_798;
  FScriptContainerElement *local_790;
  FScriptContainerElement *local_788;
  FScriptContainerElement *local_780;
  undefined8 *local_778;
  undefined4 local_770;
  undefined4 local_76c;
  longlong local_768;
  longlong local_760;
  FScriptContainerElement *local_758;
  FScriptContainerElement *local_750;
  FScriptContainerElement *local_748;
  FScriptContainerElement *local_740;
  FScriptContainerElement *local_738;
  FScriptContainerElement *local_730;
  FScriptContainerElement *local_728;
  undefined4 local_720;
  undefined4 local_71c;
  FScriptContainerElement *local_718;
  FScriptContainerElement *local_710;
  FScriptContainerElement *local_708;
  longlong local_700;
  longlong local_6f8;
  FScriptContainerElement *local_6f0;
  FScriptContainerElement *local_6e8;
  FScriptContainerElement *local_6e0;
  undefined8 *local_6d8;
  undefined4 local_6d0;
  undefined4 local_6cc;
  longlong local_6c8;
  longlong local_6c0;
  FScriptContainerElement *local_6b8;
  FScriptContainerElement *local_6b0;
  FScriptContainerElement *local_6a8;
  FScriptContainerElement *local_6a0;
  FScriptContainerElement *local_698;
  FScriptContainerElement *local_690;
  FScriptContainerElement *local_688;
  undefined4 local_680;
  undefined4 local_67c;
  FScriptContainerElement *local_678;
  FScriptContainerElement *local_670;
  FScriptContainerElement *local_668;
  longlong local_660;
  longlong local_658;
  FScriptContainerElement *local_650;
  FScriptContainerElement *local_648;
  FScriptContainerElement *local_640;
  undefined8 *local_638;
  undefined4 local_630;
  undefined4 local_62c;
  longlong local_628;
  longlong local_620;
  FScriptContainerElement *local_618;
  FScriptContainerElement *local_610;
  FScriptContainerElement *local_608;
  FScriptContainerElement *local_600;
  FScriptContainerElement *local_5f8;
  FScriptContainerElement *local_5f0;
  FScriptContainerElement *local_5e8;
  undefined4 local_5e0;
  undefined4 local_5dc;
  FScriptContainerElement *local_5d8;
  FScriptContainerElement *local_5d0;
  FScriptContainerElement *local_5c8;
  longlong local_5c0;
  longlong local_5b8;
  FScriptContainerElement *local_5b0;
  FScriptContainerElement *local_5a8;
  FScriptContainerElement *local_5a0;
  undefined8 *local_598;
  undefined4 local_590;
  undefined4 local_58c;
  longlong local_588;
  longlong local_580;
  FScriptContainerElement *local_578;
  FScriptContainerElement *local_570;
  FScriptContainerElement *local_568;
  FScriptContainerElement *local_560;
  FScriptContainerElement *local_558;
  FScriptContainerElement *local_550;
  FScriptContainerElement *local_548;
  undefined4 local_540;
  undefined4 local_53c;
  FScriptContainerElement *local_538;
  FScriptContainerElement *local_530;
  FScriptContainerElement *local_528;
  longlong local_520;
  longlong local_518;
  FScriptContainerElement *local_510;
  FScriptContainerElement *local_508;
  FScriptContainerElement *local_500;
  undefined8 *local_4f8;
  undefined4 local_4f0;
  undefined4 local_4ec;
  longlong local_4e8;
  longlong local_4e0;
  FScriptContainerElement *local_4d8;
  FScriptContainerElement *local_4d0;
  FScriptContainerElement *local_4c8;
  FScriptContainerElement *local_4c0;
  FScriptContainerElement *local_4b8;
  FScriptContainerElement *local_4b0;
  FScriptContainerElement *local_4a8;
  undefined4 local_4a0;
  undefined4 local_49c;
  FScriptContainerElement *local_498;
  FScriptContainerElement *local_490;
  FScriptContainerElement *local_488;
  longlong local_480;
  longlong local_478;
  FScriptContainerElement *local_470;
  FScriptContainerElement *local_468;
  FScriptContainerElement *local_460;
  undefined8 *local_458;
  undefined4 local_450;
  undefined4 local_44c;
  longlong local_448;
  longlong local_440;
  FScriptContainerElement *local_438;
  FScriptContainerElement *local_430;
  FScriptContainerElement *local_428;
  FScriptContainerElement *local_420;
  FScriptContainerElement *local_418;
  FScriptContainerElement *local_410;
  FScriptContainerElement *local_408;
  undefined4 local_400;
  undefined4 local_3fc;
  FScriptContainerElement *local_3f8;
  FScriptContainerElement *local_3f0;
  FScriptContainerElement *local_3e8;
  longlong local_3e0;
  longlong local_3d8;
  FScriptContainerElement *local_3d0;
  FScriptContainerElement *local_3c8;
  FScriptContainerElement *local_3c0;
  undefined8 *local_3b8;
  undefined4 local_3b0;
  undefined4 local_3ac;
  longlong local_3a8;
  longlong local_3a0;
  FScriptContainerElement *local_398;
  FScriptContainerElement *local_390;
  FScriptContainerElement *local_388;
  FScriptContainerElement *local_380;
  FScriptContainerElement *local_378;
  FScriptContainerElement *local_370;
  FScriptContainerElement *local_368;
  undefined4 local_360;
  undefined4 local_35c;
  FScriptContainerElement *local_358;
  FScriptContainerElement *local_350;
  FScriptContainerElement *local_348;
  longlong local_340;
  longlong local_338;
  FScriptContainerElement *local_330;
  int local_328;
  FScriptContainerElement *local_320;
  undefined8 *local_318;
  undefined4 local_310;
  undefined4 local_30c;
  longlong local_308;
  longlong local_300;
  FScriptContainerElement *local_2f8;
  FScriptContainerElement *local_2f0;
  FScriptContainerElement *local_2e8;
  FScriptContainerElement *local_2e0;
  FScriptContainerElement *local_2d8;
  FScriptContainerElement *local_2d0;
  FScriptContainerElement *local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  FScriptContainerElement *local_2b8;
  FScriptContainerElement *local_2b0;
  FScriptContainerElement *local_2a8;
  longlong local_2a0;
  longlong local_298;
  FScriptContainerElement *local_290;
  FScriptContainerElement *local_288;
  FScriptContainerElement *local_280;
  undefined8 *local_278;
  undefined4 local_270;
  undefined4 local_26c;
  longlong local_268;
  longlong local_260;
  FScriptContainerElement *local_258;
  FScriptContainerElement *local_250;
  FScriptContainerElement *local_248;
  FScriptContainerElement *local_240;
  FScriptContainerElement *local_238;
  FScriptContainerElement *local_230;
  FScriptContainerElement *local_228;
  undefined4 local_220;
  undefined4 local_21c;
  FScriptContainerElement *local_218;
  FScriptContainerElement *local_210;
  FScriptContainerElement *local_208;
  longlong local_200;
  longlong local_1f8;
  FScriptContainerElement *local_1f0;
  FScriptContainerElement *local_1e8;
  FScriptContainerElement *local_1e0;
  undefined8 *local_1d8;
  FScriptContainerElement *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  FScriptContainerElement *local_1b8;
  FScriptContainerElement *local_1b0;
  FScriptContainerElement *local_1a8;
  FScriptContainerElement *local_1a0;
  FScriptContainerElement *local_198;
  FScriptContainerElement *local_190;
  FScriptContainerElement *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  FScriptContainerElement *local_178;
  FScriptContainerElement *local_170;
  FScriptContainerElement *local_168;
  longlong local_160;
  longlong local_158;
  FScriptContainerElement *local_150;
  FScriptContainerElement *local_148;
  FScriptContainerElement *local_140;
  undefined8 *local_138;
  TArrayView<FMassEntityHandle_const_,int> *local_130;
  FAutomationTestBase *local_128;
  FAutomationTestBase *local_120;
  FAutomationTestBase *local_118;
  FAutomationTestBase *local_110;
  FAutomationTestBase *local_108;
  FAutomationTestBase *local_100;
  FAutomationTestBase *local_f8;
  FAutomationTestBase *local_f0;
  FAutomationTestBase *local_e8;
  int local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  TArrayView<FMassEntityHandle_const_,int> local_38;
  TArrayView<FMassEntityHandle_const_,int> local_28;
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_a18.AllocatorInstance);
  local_a18.ArrayNum = 0;
  local_a18.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_a18.AllocatorInstance);
  local_860 = (longlong *)&this->field_0x90;
  local_9f4 = 1;
  local_950 = (uint)(99 < *(int *)&this->field_0x98);
  if (local_950 == 0) {
    local_810 = 0;
    local_80c = 0;
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
  local_808 = *local_860;
  local_940 = (FScriptContainerElement *)(local_808 + 0x318);
  local_7f0 = local_a18.AllocatorInstance.Data;
  local_7e8 = local_a18.AllocatorInstance.Data;
  local_7e0 = local_a18.AllocatorInstance.Data;
  local_800 = local_808;
  local_7f8 = local_940;
  if (local_a18.AllocatorInstance.Data <= local_940) {
    local_7d8 = local_a18.AllocatorInstance.Data;
    local_7d0 = local_a18.AllocatorInstance.Data;
    local_7c8 = local_a18.AllocatorInstance.Data;
    if (local_940 < local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayMax * 8) {
      local_7c0 = 0;
      local_7bc = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_7a0 = (longlong)local_a18.ArrayNum;
      local_798 = (longlong)local_a18.ArrayMax;
      local_7b8 = local_a18.AllocatorInstance.Data;
      local_7b0 = local_a18.AllocatorInstance.Data;
      local_7a8 = local_a18.AllocatorInstance.Data;
      local_790 = local_a18.AllocatorInstance.Data;
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
  if (local_a18.ArrayNum == local_a18.ArrayMax) {
    local_a18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_a18.AllocatorInstance,&local_a18.ArrayMax);
  }
  local_9f0 = local_a18.ArrayNum;
  local_788 = local_a18.AllocatorInstance.Data;
  local_780 = local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayNum * 8;
  local_a18.ArrayNum = local_a18.ArrayNum + 1;
  local_778 = ::operator_new(8,local_780);
  *local_778 = *(undefined8 *)local_940;
  local_328 = local_9f0;
  local_878 = (longlong *)&this->field_0x90;
  local_9e8 = 1;
  local_9ec = (uint)(0x61 < *(int *)&this->field_0x98);
  if (local_9ec == 0) {
    local_770 = 0;
    local_76c = 0;
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
  local_768 = *local_878;
  local_948 = (FScriptContainerElement *)(local_768 + 0x308);
  local_750 = local_a18.AllocatorInstance.Data;
  local_748 = local_a18.AllocatorInstance.Data;
  local_740 = local_a18.AllocatorInstance.Data;
  local_760 = local_768;
  local_758 = local_948;
  if (local_a18.AllocatorInstance.Data <= local_948) {
    local_738 = local_a18.AllocatorInstance.Data;
    local_730 = local_a18.AllocatorInstance.Data;
    local_728 = local_a18.AllocatorInstance.Data;
    if (local_948 < local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayMax * 8) {
      local_720 = 0;
      local_71c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_700 = (longlong)local_a18.ArrayNum;
      local_6f8 = (longlong)local_a18.ArrayMax;
      local_718 = local_a18.AllocatorInstance.Data;
      local_710 = local_a18.AllocatorInstance.Data;
      local_708 = local_a18.AllocatorInstance.Data;
      local_6f0 = local_a18.AllocatorInstance.Data;
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
  if (local_a18.ArrayNum == local_a18.ArrayMax) {
    local_a18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_a18.AllocatorInstance,&local_a18.ArrayMax);
  }
  local_9e4 = local_a18.ArrayNum;
  local_6e8 = local_a18.AllocatorInstance.Data;
  local_6e0 = local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayNum * 8;
  local_a18.ArrayNum = local_a18.ArrayNum + 1;
  local_6d8 = ::operator_new(8,local_6e0);
  *local_6d8 = *(undefined8 *)local_948;
  local_e0 = local_9e4;
  local_870 = (longlong *)&this->field_0x90;
  local_9dc = 1;
  local_9e0 = (uint)(0x62 < *(int *)&this->field_0x98);
  if (local_9e0 == 0) {
    local_6d0 = 0;
    local_6cc = 0;
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
  local_6c8 = *local_870;
  local_928 = (FScriptContainerElement *)(local_6c8 + 0x310);
  local_6b0 = local_a18.AllocatorInstance.Data;
  local_6a8 = local_a18.AllocatorInstance.Data;
  local_6a0 = local_a18.AllocatorInstance.Data;
  local_6c0 = local_6c8;
  local_6b8 = local_928;
  if (local_a18.AllocatorInstance.Data <= local_928) {
    local_698 = local_a18.AllocatorInstance.Data;
    local_690 = local_a18.AllocatorInstance.Data;
    local_688 = local_a18.AllocatorInstance.Data;
    if (local_928 < local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayMax * 8) {
      local_680 = 0;
      local_67c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_660 = (longlong)local_a18.ArrayNum;
      local_658 = (longlong)local_a18.ArrayMax;
      local_678 = local_a18.AllocatorInstance.Data;
      local_670 = local_a18.AllocatorInstance.Data;
      local_668 = local_a18.AllocatorInstance.Data;
      local_650 = local_a18.AllocatorInstance.Data;
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
  if (local_a18.ArrayNum == local_a18.ArrayMax) {
    local_a18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_a18.AllocatorInstance,&local_a18.ArrayMax);
  }
  local_9d8 = local_a18.ArrayNum;
  local_648 = local_a18.AllocatorInstance.Data;
  local_640 = local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayNum * 8;
  local_a18.ArrayNum = local_a18.ArrayNum + 1;
  local_638 = ::operator_new(8,local_640);
  *local_638 = *(undefined8 *)local_928;
  local_dc = local_9d8;
  local_8e0 = (longlong *)&this->field_0x90;
  local_9d0 = 1;
  local_9d4 = (uint)(0x14 < *(int *)&this->field_0x98);
  if (local_9d4 == 0) {
    local_630 = 0;
    local_62c = 0;
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
  local_628 = *local_8e0;
  local_920 = (FScriptContainerElement *)(local_628 + 0xa0);
  local_610 = local_a18.AllocatorInstance.Data;
  local_608 = local_a18.AllocatorInstance.Data;
  local_600 = local_a18.AllocatorInstance.Data;
  local_620 = local_628;
  local_618 = local_920;
  if (local_a18.AllocatorInstance.Data <= local_920) {
    local_5f8 = local_a18.AllocatorInstance.Data;
    local_5f0 = local_a18.AllocatorInstance.Data;
    local_5e8 = local_a18.AllocatorInstance.Data;
    if (local_920 < local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayMax * 8) {
      local_5e0 = 0;
      local_5dc = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_5c0 = (longlong)local_a18.ArrayNum;
      local_5b8 = (longlong)local_a18.ArrayMax;
      local_5d8 = local_a18.AllocatorInstance.Data;
      local_5d0 = local_a18.AllocatorInstance.Data;
      local_5c8 = local_a18.AllocatorInstance.Data;
      local_5b0 = local_a18.AllocatorInstance.Data;
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
  if (local_a18.ArrayNum == local_a18.ArrayMax) {
    local_a18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_a18.AllocatorInstance,&local_a18.ArrayMax);
  }
  local_9cc = local_a18.ArrayNum;
  local_5a8 = local_a18.AllocatorInstance.Data;
  local_5a0 = local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayNum * 8;
  local_a18.ArrayNum = local_a18.ArrayNum + 1;
  local_598 = ::operator_new(8,local_5a0);
  *local_598 = *(undefined8 *)local_920;
  local_830 = local_9cc;
  local_8d8 = (longlong *)&this->field_0x90;
  local_9c4 = 1;
  local_9c8 = (uint)(0x16 < *(int *)&this->field_0x98);
  if (local_9c8 == 0) {
    local_590 = 0;
    local_58c = 0;
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
  local_588 = *local_8d8;
  local_918 = (FScriptContainerElement *)(local_588 + 0xb0);
  local_570 = local_a18.AllocatorInstance.Data;
  local_568 = local_a18.AllocatorInstance.Data;
  local_560 = local_a18.AllocatorInstance.Data;
  local_580 = local_588;
  local_578 = local_918;
  if (local_a18.AllocatorInstance.Data <= local_918) {
    local_558 = local_a18.AllocatorInstance.Data;
    local_550 = local_a18.AllocatorInstance.Data;
    local_548 = local_a18.AllocatorInstance.Data;
    if (local_918 < local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayMax * 8) {
      local_540 = 0;
      local_53c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_520 = (longlong)local_a18.ArrayNum;
      local_518 = (longlong)local_a18.ArrayMax;
      local_538 = local_a18.AllocatorInstance.Data;
      local_530 = local_a18.AllocatorInstance.Data;
      local_528 = local_a18.AllocatorInstance.Data;
      local_510 = local_a18.AllocatorInstance.Data;
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
  if (local_a18.ArrayNum == local_a18.ArrayMax) {
    local_a18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_a18.AllocatorInstance,&local_a18.ArrayMax);
  }
  local_9c0 = local_a18.ArrayNum;
  local_508 = local_a18.AllocatorInstance.Data;
  local_500 = local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayNum * 8;
  local_a18.ArrayNum = local_a18.ArrayNum + 1;
  local_4f8 = ::operator_new(8,local_500);
  *local_4f8 = *(undefined8 *)local_918;
  local_82c = local_9c0;
  local_8d0 = (longlong *)&this->field_0x90;
  local_9b8 = 1;
  local_9bc = (uint)(0x15 < *(int *)&this->field_0x98);
  if (local_9bc == 0) {
    local_4f0 = 0;
    local_4ec = 0;
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
  local_4e8 = *local_8d0;
  local_910 = (FScriptContainerElement *)(local_4e8 + 0xa8);
  local_4d0 = local_a18.AllocatorInstance.Data;
  local_4c8 = local_a18.AllocatorInstance.Data;
  local_4c0 = local_a18.AllocatorInstance.Data;
  local_4e0 = local_4e8;
  local_4d8 = local_910;
  if (local_a18.AllocatorInstance.Data <= local_910) {
    local_4b8 = local_a18.AllocatorInstance.Data;
    local_4b0 = local_a18.AllocatorInstance.Data;
    local_4a8 = local_a18.AllocatorInstance.Data;
    if (local_910 < local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayMax * 8) {
      local_4a0 = 0;
      local_49c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_480 = (longlong)local_a18.ArrayNum;
      local_478 = (longlong)local_a18.ArrayMax;
      local_498 = local_a18.AllocatorInstance.Data;
      local_490 = local_a18.AllocatorInstance.Data;
      local_488 = local_a18.AllocatorInstance.Data;
      local_470 = local_a18.AllocatorInstance.Data;
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
  if (local_a18.ArrayNum == local_a18.ArrayMax) {
    local_a18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_a18.AllocatorInstance,&local_a18.ArrayMax);
  }
  local_9b4 = local_a18.ArrayNum;
  local_468 = local_a18.AllocatorInstance.Data;
  local_460 = local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayNum * 8;
  local_a18.ArrayNum = local_a18.ArrayNum + 1;
  local_458 = ::operator_new(8,local_460);
  *local_458 = *(undefined8 *)local_910;
  local_828 = local_9b4;
  local_8c8 = (longlong *)&this->field_0x90;
  local_9ac = 1;
  local_9b0 = (uint)(0x12 < *(int *)&this->field_0x98);
  if (local_9b0 == 0) {
    local_450 = 0;
    local_44c = 0;
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
  local_448 = *local_8c8;
  local_908 = (FScriptContainerElement *)(local_448 + 0x90);
  local_430 = local_a18.AllocatorInstance.Data;
  local_428 = local_a18.AllocatorInstance.Data;
  local_420 = local_a18.AllocatorInstance.Data;
  local_440 = local_448;
  local_438 = local_908;
  if (local_a18.AllocatorInstance.Data <= local_908) {
    local_418 = local_a18.AllocatorInstance.Data;
    local_410 = local_a18.AllocatorInstance.Data;
    local_408 = local_a18.AllocatorInstance.Data;
    if (local_908 < local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayMax * 8) {
      local_400 = 0;
      local_3fc = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_3e0 = (longlong)local_a18.ArrayNum;
      local_3d8 = (longlong)local_a18.ArrayMax;
      local_3f8 = local_a18.AllocatorInstance.Data;
      local_3f0 = local_a18.AllocatorInstance.Data;
      local_3e8 = local_a18.AllocatorInstance.Data;
      local_3d0 = local_a18.AllocatorInstance.Data;
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
  if (local_a18.ArrayNum == local_a18.ArrayMax) {
    local_a18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_a18.AllocatorInstance,&local_a18.ArrayMax);
  }
  local_9a8 = local_a18.ArrayNum;
  local_3c8 = local_a18.AllocatorInstance.Data;
  local_3c0 = local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayNum * 8;
  local_a18.ArrayNum = local_a18.ArrayNum + 1;
  local_3b8 = ::operator_new(8,local_3c0);
  *local_3b8 = *(undefined8 *)local_908;
  local_824 = local_9a8;
  local_8c0 = (longlong *)&this->field_0x90;
  local_9a0 = 1;
  local_9a4 = (uint)(10 < *(int *)&this->field_0x98);
  if (local_9a4 == 0) {
    local_3b0 = 0;
    local_3ac = 0;
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
  local_3a8 = *local_8c0;
  local_900 = (FScriptContainerElement *)(local_3a8 + 0x50);
  local_390 = local_a18.AllocatorInstance.Data;
  local_388 = local_a18.AllocatorInstance.Data;
  local_380 = local_a18.AllocatorInstance.Data;
  local_3a0 = local_3a8;
  local_398 = local_900;
  if (local_a18.AllocatorInstance.Data <= local_900) {
    local_378 = local_a18.AllocatorInstance.Data;
    local_370 = local_a18.AllocatorInstance.Data;
    local_368 = local_a18.AllocatorInstance.Data;
    if (local_900 < local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayMax * 8) {
      local_360 = 0;
      local_35c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_340 = (longlong)local_a18.ArrayNum;
      local_338 = (longlong)local_a18.ArrayMax;
      local_358 = local_a18.AllocatorInstance.Data;
      local_350 = local_a18.AllocatorInstance.Data;
      local_348 = local_a18.AllocatorInstance.Data;
      local_330 = local_a18.AllocatorInstance.Data;
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
  if (local_a18.ArrayNum == local_a18.ArrayMax) {
    local_a18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_a18.AllocatorInstance,&local_a18.ArrayMax);
  }
  local_99c = local_a18.ArrayNum;
  local_1d0 = local_a18.AllocatorInstance.Data;
  local_320 = local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayNum * 8;
  local_a18.ArrayNum = local_a18.ArrayNum + 1;
  local_318 = ::operator_new(8,local_320);
  *local_318 = *(undefined8 *)local_900;
  local_820 = local_99c;
  local_8b8 = (longlong *)&this->field_0x90;
  local_994 = 1;
  local_998 = (uint)(0xd < *(int *)&this->field_0x98);
  if (local_998 == 0) {
    local_310 = 0;
    local_30c = 0;
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
  local_308 = *local_8b8;
  local_8f8 = (FScriptContainerElement *)(local_308 + 0x68);
  local_2f0 = local_a18.AllocatorInstance.Data;
  local_2e8 = local_a18.AllocatorInstance.Data;
  local_2e0 = local_a18.AllocatorInstance.Data;
  local_300 = local_308;
  local_2f8 = local_8f8;
  if (local_a18.AllocatorInstance.Data <= local_8f8) {
    local_2d8 = local_a18.AllocatorInstance.Data;
    local_2d0 = local_a18.AllocatorInstance.Data;
    local_2c8 = local_a18.AllocatorInstance.Data;
    if (local_8f8 < local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayMax * 8) {
      local_2c0 = 0;
      local_2bc = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_2a0 = (longlong)local_a18.ArrayNum;
      local_298 = (longlong)local_a18.ArrayMax;
      local_2b8 = local_a18.AllocatorInstance.Data;
      local_2b0 = local_a18.AllocatorInstance.Data;
      local_2a8 = local_a18.AllocatorInstance.Data;
      local_290 = local_a18.AllocatorInstance.Data;
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
  if (local_a18.ArrayNum == local_a18.ArrayMax) {
    local_a18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_a18.AllocatorInstance,&local_a18.ArrayMax);
  }
  local_990 = local_a18.ArrayNum;
  local_288 = local_a18.AllocatorInstance.Data;
  local_280 = local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayNum * 8;
  local_a18.ArrayNum = local_a18.ArrayNum + 1;
  local_278 = ::operator_new(8,local_280);
  *local_278 = *(undefined8 *)local_8f8;
  local_81c = local_990;
  local_8b0 = (longlong *)&this->field_0x90;
  local_988 = 1;
  local_98c = (uint)(0xb < *(int *)&this->field_0x98);
  if (local_98c == 0) {
    local_270 = 0;
    local_26c = 0;
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
  local_268 = *local_8b0;
  local_8f0 = (FScriptContainerElement *)(local_268 + 0x58);
  local_250 = local_a18.AllocatorInstance.Data;
  local_248 = local_a18.AllocatorInstance.Data;
  local_240 = local_a18.AllocatorInstance.Data;
  local_260 = local_268;
  local_258 = local_8f0;
  if (local_a18.AllocatorInstance.Data <= local_8f0) {
    local_238 = local_a18.AllocatorInstance.Data;
    local_230 = local_a18.AllocatorInstance.Data;
    local_228 = local_a18.AllocatorInstance.Data;
    if (local_8f0 < local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayMax * 8) {
      local_220 = 0;
      local_21c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_200 = (longlong)local_a18.ArrayNum;
      local_1f8 = (longlong)local_a18.ArrayMax;
      local_218 = local_a18.AllocatorInstance.Data;
      local_210 = local_a18.AllocatorInstance.Data;
      local_208 = local_a18.AllocatorInstance.Data;
      local_1f0 = local_a18.AllocatorInstance.Data;
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
  if (local_a18.ArrayNum == local_a18.ArrayMax) {
    local_a18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_a18.AllocatorInstance,&local_a18.ArrayMax);
  }
  local_984 = local_a18.ArrayNum;
  local_1e8 = local_a18.AllocatorInstance.Data;
  local_1e0 = local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayNum * 8;
  local_a18.ArrayNum = local_a18.ArrayNum + 1;
  local_1d8 = ::operator_new(8,local_1e0);
  *local_1d8 = *(undefined8 *)local_8f0;
  local_818 = local_984;
  local_8a8 = (longlong *)&this->field_0x90;
  local_97c = 1;
  local_980 = (uint)(0xc < *(int *)&this->field_0x98);
  if (local_980 == 0) {
    local_d8 = 0;
    local_d4 = 0;
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
  local_1c8 = *local_8a8;
  local_8e8 = (FScriptContainerElement *)(local_1c8 + 0x60);
  local_1b0 = local_a18.AllocatorInstance.Data;
  local_1a8 = local_a18.AllocatorInstance.Data;
  local_1a0 = local_a18.AllocatorInstance.Data;
  local_1c0 = local_1c8;
  local_1b8 = local_8e8;
  if (local_a18.AllocatorInstance.Data <= local_8e8) {
    local_198 = local_a18.AllocatorInstance.Data;
    local_190 = local_a18.AllocatorInstance.Data;
    local_188 = local_a18.AllocatorInstance.Data;
    if (local_8e8 < local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayMax * 8) {
      local_180 = 0;
      local_17c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_160 = (longlong)local_a18.ArrayNum;
      local_158 = (longlong)local_a18.ArrayMax;
      local_178 = local_a18.AllocatorInstance.Data;
      local_170 = local_a18.AllocatorInstance.Data;
      local_168 = local_a18.AllocatorInstance.Data;
      local_150 = local_a18.AllocatorInstance.Data;
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
  if (local_a18.ArrayNum == local_a18.ArrayMax) {
    local_a18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_a18.AllocatorInstance,&local_a18.ArrayMax);
  }
  local_978 = local_a18.ArrayNum;
  local_148 = local_a18.AllocatorInstance.Data;
  local_140 = local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayNum * 8;
  local_a18.ArrayNum = local_a18.ArrayNum + 1;
  local_138 = ::operator_new(8,local_140);
  *local_138 = *(undefined8 *)local_8e8;
  local_814 = local_978;
  local_130 = &local_28;
  pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_130,&local_a18);
  pTVar7 = &local_38;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    pTVar7 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar7->DataPtr + 1);
  }
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
            (&local_858,(FMassArchetypeHandle *)&this->field_0x50,&local_38,NoDuplicates);
  FMassArchetypeEntityCollection::GetRanges(&local_858,&local_938);
  local_128 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_868 = local_938.ArrayNum;
  local_8a0 = local_938.ArrayNum;
  ::FString::FString(&local_50,"The predicted sub-chunk count should match");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_50,local_8a0,4,local_128);
  local_a08 = !bVar2;
  local_974 = (uint)(byte)local_a08;
  ::FString::~FString(&local_50);
  if (local_a08 == '\0') {
    local_120 = FAITestBase::GetTestRunner((FAITestBase *)this);
    pFVar5 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
             operator[](&local_938,0);
    local_89c = pFVar5->SubchunkStart;
    ::FString::FString(&local_d0,"The [10-13] chunk should be first and start at 10");
    bVar2 = FTestHelpers::TestEqual<int,int>(&local_d0,local_89c,10,local_120);
    local_a06 = !bVar2;
    local_970 = (uint)(byte)local_a06;
    ::FString::~FString(&local_d0);
    if (local_a06 == '\0') {
      local_118 = FAITestBase::GetTestRunner((FAITestBase *)this);
      pFVar5 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
               operator[](&local_938,0);
      local_898 = pFVar5->Length;
      ::FString::FString(&local_c0,"The [10-13] chunk should be first and have a length of 4");
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_c0,local_898,4,local_118);
      local_a04 = !bVar2;
      local_96c = (uint)(byte)local_a04;
      ::FString::~FString(&local_c0);
      if (local_a04 == '\0') {
        local_110 = FAITestBase::GetTestRunner((FAITestBase *)this);
        pFVar5 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
                 operator[](&local_938,1);
        local_894 = pFVar5->SubchunkStart;
        ::FString::FString(&local_b0,"The [18] chunk should be second and start at 18");
        bVar2 = FTestHelpers::TestEqual<int,int>(&local_b0,local_894,0x12,local_110);
        local_a02 = !bVar2;
        local_968 = (uint)(byte)local_a02;
        ::FString::~FString(&local_b0);
        if (local_a02 == '\0') {
          local_108 = FAITestBase::GetTestRunner((FAITestBase *)this);
          pFVar5 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
                   operator[](&local_938,1);
          local_890 = pFVar5->Length;
          ::FString::FString(&local_a0,"The [18] chunk should be second and have a length of 1");
          bVar2 = FTestHelpers::TestEqual<int,int>(&local_a0,local_890,1,local_108);
          local_a00 = !bVar2;
          local_964 = (uint)(byte)local_a00;
          ::FString::~FString(&local_a0);
          if (local_a00 == '\0') {
            local_100 = FAITestBase::GetTestRunner((FAITestBase *)this);
            pFVar5 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
                     operator[](&local_938,2);
            local_88c = pFVar5->SubchunkStart;
            ::FString::FString(&local_90,"The [20-22] chunk should be third and start at 20");
            bVar2 = FTestHelpers::TestEqual<int,int>(&local_90,local_88c,0x14,local_100);
            local_9fe = !bVar2;
            local_960 = (uint)(byte)local_9fe;
            ::FString::~FString(&local_90);
            if (local_9fe == '\0') {
              local_f8 = FAITestBase::GetTestRunner((FAITestBase *)this);
              pFVar5 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>
                       ::operator[](&local_938,2);
              local_888 = pFVar5->Length;
              ::FString::FString(&local_80,
                                 "The [20-22] chunk should be third and have a length of 3");
              bVar2 = FTestHelpers::TestEqual<int,int>(&local_80,local_888,3,local_f8);
              local_9fc = !bVar2;
              local_95c = (uint)(byte)local_9fc;
              ::FString::~FString(&local_80);
              if (local_9fc == '\0') {
                local_f0 = FAITestBase::GetTestRunner((FAITestBase *)this);
                pFVar5 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>
                         ::operator[](&local_938,3);
                local_884 = pFVar5->SubchunkStart;
                ::FString::FString(&local_70,"The [97-99] chunk should be third and start at 97");
                bVar2 = FTestHelpers::TestEqual<int,int>(&local_70,local_884,0x61,local_f0);
                local_9fa = !bVar2;
                local_958 = (uint)(byte)local_9fa;
                ::FString::~FString(&local_70);
                if (local_9fa == '\0') {
                  local_e8 = FAITestBase::GetTestRunner((FAITestBase *)this);
                  pFVar5 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>
                           ::operator[](&local_938,3);
                  local_880 = pFVar5->Length;
                  ::FString::FString(&local_60,
                                     "The [97-99] chunk should be third and have a length of 3");
                  bVar2 = FTestHelpers::TestEqual<int,int>(&local_60,local_880,3,local_e8);
                  local_9f8 = !bVar2;
                  local_954 = (uint)(byte)local_9f8;
                  ::FString::~FString(&local_60);
                  if (local_9f8 == '\0') {
                    local_9f6 = 1;
                    FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_858);
                    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_a18);
                    local_a07 = local_9f6;
                  }
                  else {
                    UE::AITestSuite::ConditionallyBreakOnTestFail();
                    local_9f7 = 0;
                    FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_858);
                    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_a18);
                    local_a07 = local_9f7;
                  }
                }
                else {
                  UE::AITestSuite::ConditionallyBreakOnTestFail();
                  local_9f9 = 0;
                  FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_858);
                  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_a18);
                  local_a07 = local_9f9;
                }
              }
              else {
                UE::AITestSuite::ConditionallyBreakOnTestFail();
                local_9fb = 0;
                FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_858);
                TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_a18);
                local_a07 = local_9fb;
              }
            }
            else {
              UE::AITestSuite::ConditionallyBreakOnTestFail();
              local_9fd = 0;
              FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_858);
              TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
              ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_a18);
              local_a07 = local_9fd;
            }
          }
          else {
            UE::AITestSuite::ConditionallyBreakOnTestFail();
            local_9ff = 0;
            FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_858);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_a18);
            local_a07 = local_9ff;
          }
        }
        else {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          local_a01 = 0;
          FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_858);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_a18);
          local_a07 = local_a01;
        }
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        local_a03 = 0;
        FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_858);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_a18);
        local_a07 = local_a03;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_a05 = 0;
      FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_858);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_a18);
      local_a07 = local_a05;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    local_a07 = 0;
    FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_858);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_a18);
  }
  return (bool)local_a07;
}

