// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14713b160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014713d0a7) */
/* WARNING: Removing unreachable block (ram,0x00014713ce47) */
/* WARNING: Removing unreachable block (ram,0x00014713cc2b) */
/* WARNING: Removing unreachable block (ram,0x00014713c881) */
/* WARNING: Removing unreachable block (ram,0x00014713b267) */
/* WARNING: Removing unreachable block (ram,0x00014713b37d) */
/* WARNING: Removing unreachable block (ram,0x00014713b51a) */
/* WARNING: Removing unreachable block (ram,0x00014713b635) */
/* WARNING: Removing unreachable block (ram,0x00014713b7d0) */
/* WARNING: Removing unreachable block (ram,0x00014713b900) */
/* WARNING: Removing unreachable block (ram,0x00014713ba36) */
/* WARNING: Removing unreachable block (ram,0x00014713bcd5) */
/* WARNING: Removing unreachable block (ram,0x00014713bdf3) */
/* WARNING: Removing unreachable block (ram,0x00014713c022) */
/* WARNING: Removing unreachable block (ram,0x00014713c2cf) */
/* WARNING: Removing unreachable block (ram,0x00014713c534) */
/* WARNING: Removing unreachable block (ram,0x00014713c64d) */
/* WARNING: Removing unreachable block (ram,0x00014713d2b5) */
/* WARNING: Removing unreachable block (ram,0x00014713d664) */
/* WARNING: Removing unreachable block (ram,0x00014713d87b) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

bool __thiscall UE::Mass::Test::Relations::FChainHierarchy::InstantTest(FChainHierarchy *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FArchetypeGroupID FVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined1 auStackY_918 [32];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_8e8;
  bool local_8d8;
  bool local_8d7;
  bool local_8d6;
  undefined1 local_8d5;
  char local_8d4;
  undefined1 local_8d3;
  undefined1 local_8d2;
  bool local_8d1;
  char local_8d0;
  undefined1 local_8cf;
  char local_8ce;
  undefined1 local_8cd;
  char local_8cc;
  undefined1 local_8cb;
  char local_8ca;
  undefined1 local_8c9;
  bool local_8c8;
  char local_8c7;
  undefined1 local_8c6;
  char local_8c5;
  undefined1 local_8c4;
  char local_8c3;
  undefined1 local_8c2;
  char local_8c1;
  undefined1 local_8c0;
  bool local_8bf;
  char local_8be;
  undefined1 local_8bd;
  char local_8bc;
  undefined1 local_8bb;
  undefined1 local_8ba;
  char local_8b9;
  int local_8b8;
  int local_8b0;
  int local_8a8;
  FMassArchetypeHandle local_8a0;
  uint local_890;
  undefined4 local_88c;
  uint local_888;
  undefined4 local_884;
  uint local_880;
  undefined4 local_87c;
  uint local_878;
  undefined4 local_874;
  uint local_870;
  undefined4 local_86c;
  uint local_868;
  undefined4 local_864;
  uint local_860;
  uint local_85c;
  undefined4 local_858;
  uint local_854;
  undefined4 local_850;
  uint local_84c;
  uint local_848;
  undefined4 local_844;
  uint local_840;
  uint local_83c;
  uint local_838;
  undefined4 local_834;
  uint local_830;
  uint local_82c;
  undefined4 local_828;
  uint local_824;
  undefined4 local_820;
  uint local_81c;
  uint local_818;
  undefined4 local_814;
  uint local_810;
  uint local_80c;
  uint local_808;
  uint local_804;
  undefined4 local_800;
  uint local_7fc;
  uint local_7f8;
  undefined4 local_7f4;
  uint local_7f0;
  uint local_7ec;
  undefined4 local_7e8;
  uint local_7e4;
  uint local_7e0;
  undefined4 local_7dc;
  uint local_7d8;
  uint local_7d4;
  uint local_7d0;
  uint local_7cc;
  undefined4 local_7c8;
  uint local_7c4;
  uint local_7c0;
  undefined4 local_7bc;
  uint local_7b8;
  uint local_7b4;
  undefined4 local_7b0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_7a8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_798;
  uint local_788;
  uint local_784;
  FArchetypeGroupID local_780;
  int local_77c;
  undefined4 local_778;
  undefined4 local_774;
  uint local_770;
  uint local_76c;
  FArchetypeGroupID local_768;
  int local_764;
  undefined4 local_760;
  undefined4 local_75c;
  uint local_758;
  uint local_754;
  FArchetypeGroupID local_750;
  undefined4 local_74c;
  undefined4 local_748;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_740;
  undefined4 local_72c;
  undefined4 local_724;
  FMassEntityManager *local_718;
  undefined4 local_710;
  undefined4 local_70c;
  FMassEntityHandle *local_708;
  FMassEntityHandle *local_700;
  FMassEntityHandle *local_6f8;
  FMassEntityHandle local_6f0;
  FMassEntityHandle local_6e8;
  undefined4 local_6e0;
  undefined4 local_6dc;
  FMassEntityHandle *local_6d8;
  FMassEntityHandle *local_6d0;
  FMassEntityHandle *local_6c8;
  FMassEntityHandle local_6c0;
  FMassEntityHandle local_6b8;
  FMassEntityHandle local_6b0;
  FMassEntityHandle local_6a8;
  FMassEntityHandle local_6a0;
  FMassEntityHandle local_698;
  FMassEntityHandle local_690;
  FRelationManager *local_688;
  undefined4 local_680;
  undefined4 local_67c;
  FMassEntityHandle *local_678;
  FMassEntityHandle *local_670;
  FMassEntityHandle *local_668;
  FMassEntityHandle local_660;
  FMassEntityHandle local_658;
  undefined4 local_650;
  undefined4 local_64c;
  FMassEntityHandle *local_648;
  FMassEntityHandle *local_640;
  FMassEntityHandle *local_638;
  FMassEntityHandle local_630;
  FMassEntityHandle local_628;
  FMassEntityHandle local_620;
  FMassEntityHandle local_618;
  FMassEntityHandle local_610;
  FMassEntityHandle local_608;
  FMassEntityHandle local_600;
  FRelationManager *local_5f8;
  undefined4 local_5f0;
  undefined4 local_5ec;
  FMassEntityHandle *local_5e8;
  FMassEntityHandle *local_5e0;
  FMassEntityHandle *local_5d8;
  FMassEntityHandle local_5d0;
  FMassEntityManager *local_5c8;
  undefined4 local_5c0;
  undefined4 local_5bc;
  FMassEntityHandle *local_5b8;
  FMassEntityHandle *local_5b0;
  FMassEntityHandle *local_5a8;
  FMassEntityHandle local_5a0;
  FMassEntityManager *local_598;
  undefined4 local_590;
  undefined4 local_58c;
  FMassEntityHandle *local_588;
  FMassEntityHandle *local_580;
  FMassEntityHandle *local_578;
  FMassEntityHandle local_570;
  FMassEntityManager *local_568;
  FMassArchetypeHandle *local_560;
  FMassArchetypeHandle *local_558;
  FAutomationTestBase *local_550;
  FMassArchetypeHandle *local_548;
  FMassArchetypeHandle *local_540;
  undefined4 local_538;
  undefined4 local_534;
  FMassEntityHandle *local_530;
  FMassEntityHandle *local_528;
  FMassEntityHandle *local_520;
  undefined4 local_518;
  undefined4 local_514;
  FMassEntityHandle *local_510;
  FMassEntityHandle *local_508;
  FMassEntityHandle *local_500;
  FMassEntityHandle local_4f8;
  FMassEntityHandle local_4f0;
  FMassEntityHandle local_4e8;
  FMassEntityHandle local_4e0;
  FMassEntityHandle local_4d8;
  FMassEntityHandle local_4d0;
  FAutomationTestBase *local_4c8;
  FMassEntityHandle local_4c0;
  FMassEntityHandle local_4b8;
  undefined4 local_4b0;
  undefined4 local_4ac;
  FMassEntityHandle *local_4a8;
  FMassEntityHandle *local_4a0;
  FMassEntityHandle *local_498;
  FMassEntityHandle local_490;
  FObjectKey local_488;
  FMassEntityHandle local_480;
  FObjectKey local_478;
  FRelationManager *local_470;
  FAutomationTestBase *local_468;
  undefined4 local_460;
  undefined4 local_45c;
  FMassEntityHandle *local_458;
  FMassEntityHandle *local_450;
  FMassEntityHandle *local_448;
  FMassEntityHandle local_440;
  FMassEntityHandle local_438;
  FMassEntityManager *local_430;
  FArchetypeGroupHandle local_428;
  FAutomationTestBase *local_420;
  undefined4 local_418;
  undefined4 local_414;
  FMassEntityHandle *local_410;
  FMassEntityHandle *local_408;
  FMassEntityHandle *local_400;
  undefined4 local_3f8;
  undefined4 local_3f4;
  FMassEntityHandle *local_3f0;
  FMassEntityHandle *local_3e8;
  FMassEntityHandle *local_3e0;
  FMassEntityHandle local_3d8;
  FMassEntityHandle local_3d0;
  FMassEntityHandle local_3c8;
  FMassEntityHandle local_3c0;
  FMassEntityHandle local_3b8;
  FMassEntityHandle local_3b0;
  FAutomationTestBase *local_3a8;
  FMassEntityHandle local_3a0;
  FMassEntityHandle local_398;
  undefined4 local_390;
  undefined4 local_38c;
  FMassEntityHandle *local_388;
  FMassEntityHandle *local_380;
  FMassEntityHandle *local_378;
  FMassEntityHandle local_370;
  FObjectKey local_368;
  FMassEntityHandle local_360;
  FObjectKey local_358;
  FRelationManager *local_350;
  FAutomationTestBase *local_348;
  undefined4 local_340;
  undefined4 local_33c;
  FScriptContainerElement *local_338;
  FScriptContainerElement *local_330;
  longlong local_328;
  FScriptContainerElement *local_320;
  FMassEntityHandle *local_318;
  undefined4 local_310;
  undefined4 local_30c;
  FMassEntityHandle *local_308;
  FMassEntityHandle *local_300;
  FMassEntityHandle *local_2f8;
  FMassEntityHandle local_2f0;
  FMassEntityHandle *local_2e8;
  FAutomationTestBase *local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  FMassEntityHandle *local_2d0;
  FMassEntityHandle *local_2c8;
  FMassEntityHandle *local_2c0;
  FMassEntityHandle local_2b8;
  FMassEntityHandle local_2b0;
  FMassEntityManager *local_2a8;
  FArchetypeGroupHandle local_2a0;
  FAutomationTestBase *local_298;
  undefined4 local_290;
  undefined4 local_28c;
  FMassEntityHandle *local_288;
  FMassEntityHandle *local_280;
  FMassEntityHandle *local_278;
  FMassEntityHandle local_270;
  FAutomationTestBase *local_268;
  undefined4 local_260;
  undefined4 local_25c;
  FMassEntityHandle *local_258;
  FMassEntityHandle *local_250;
  FMassEntityHandle *local_248;
  FMassEntityHandle local_240;
  FObjectKey local_238;
  FMassEntityHandle local_230;
  FObjectKey local_228;
  FRelationManager *local_220;
  FAutomationTestBase *local_218;
  undefined4 local_210;
  undefined4 local_20c;
  FScriptContainerElement *local_208;
  FScriptContainerElement *local_200;
  longlong local_1f8;
  FScriptContainerElement *local_1f0;
  FMassEntityHandle *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  FMassEntityHandle *local_1d8;
  FMassEntityHandle *local_1d0;
  FMassEntityHandle *local_1c8;
  FMassEntityHandle local_1c0;
  FMassEntityHandle *local_1b8;
  FAutomationTestBase *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  FMassEntityHandle *local_1a0;
  FMassEntityHandle *local_198;
  FMassEntityHandle *local_190;
  FMassEntityHandle local_188;
  FMassEntityHandle local_180;
  FMassEntityManager *local_178;
  FArchetypeGroupHandle local_170;
  FAutomationTestBase *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
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
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_78;
  FMassArchetypeHandle local_68;
  FMassArchetypeHandle local_58;
  FMassArchetypeHandle local_48 [3];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_918;
  local_160 = 3;
  FMassArchetypeHandle::FMassArchetypeHandle(&local_8a0,(FMassArchetypeHandle *)&this->field_0x60);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_8e8.AllocatorInstance);
  local_8e8.ArrayNum = 0;
  local_8e8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_8e8.AllocatorInstance);
  local_718 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities(local_718,&local_78,&local_8a0,3,&local_8e8);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_78);
  local_15c = 1;
  local_158 = 0;
  local_154 = 2;
  local_688 = *(FRelationManager **)&this->field_0xa8;
  local_7b0 = 1;
  local_7b4 = (uint)(0 < local_8e8.ArrayNum);
  if (local_7b4 == 0) {
    local_710 = 0;
    local_70c = 0;
    Core::Private::FormatStringSan::
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
  local_708 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
  local_700 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
  local_6f8 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
  local_6f0 = *(FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
  local_88c = 1;
  local_890 = (uint)(1 < local_8e8.ArrayNum);
  local_6e8 = local_6f0;
  local_6a0 = local_6f0;
  if (local_890 == 0) {
    local_6e0 = 0;
    local_6dc = 0;
    Core::Private::FormatStringSan::
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
  local_6d8 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
  local_6d0 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
  local_6c8 = (FMassEntityHandle *)(local_8e8.AllocatorInstance.Data + 8);
  local_6c0 = *local_6c8;
  local_6b0.Index = *(int *)&this->field_0xa0;
  local_6b0.SerialNumber = *(int *)&this->field_0xa4;
  local_6b8 = local_6c0;
  local_6a8 = local_6b0;
  local_698 = local_6c0;
  local_690 = local_6b0;
  FRelationManager::CreateRelationInstance(local_688,(FTypeHandle)local_80,local_6b0,local_6c0);
  local_5f8 = *(FRelationManager **)&this->field_0xa8;
  local_884 = 1;
  local_888 = (uint)(2 < local_8e8.ArrayNum);
  if (local_888 == 0) {
    local_680 = 0;
    local_67c = 0;
    Core::Private::FormatStringSan::
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
  local_678 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
  local_670 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
  local_668 = (FMassEntityHandle *)(local_8e8.AllocatorInstance.Data + 0x10);
  local_660 = *local_668;
  local_87c = 1;
  local_880 = (uint)(0 < local_8e8.ArrayNum);
  local_658 = local_660;
  local_610 = local_660;
  if (local_880 == 0) {
    local_650 = 0;
    local_64c = 0;
    Core::Private::FormatStringSan::
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
  local_648 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
  local_640 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
  local_638 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
  local_630 = *(FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
  local_620.Index = *(int *)&this->field_0xa0;
  local_620.SerialNumber = *(int *)&this->field_0xa4;
  local_628 = local_630;
  local_618 = local_620;
  local_608 = local_630;
  local_600 = local_620;
  FRelationManager::CreateRelationInstance(local_5f8,(FTypeHandle)local_88,local_620,local_630);
  local_5c8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_874 = 1;
  local_878 = (uint)(0 < local_8e8.ArrayNum);
  if (local_878 == 0) {
    local_5f0 = 0;
    local_5ec = 0;
    Core::Private::FormatStringSan::
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
  local_5e8 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
  local_5e0 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
  local_5d8 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
  local_5d0 = *(FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
  FMassEntityManager::GetArchetypeForEntity(local_5c8,local_48,local_5d0);
  local_598 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_86c = 1;
  local_870 = (uint)(1 < local_8e8.ArrayNum);
  if (local_870 == 0) {
    local_5c0 = 0;
    local_5bc = 0;
    Core::Private::FormatStringSan::
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
  local_5b8 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
  local_5b0 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
  local_5a8 = (FMassEntityHandle *)(local_8e8.AllocatorInstance.Data + 8);
  local_5a0 = *local_5a8;
  FMassEntityManager::GetArchetypeForEntity(local_598,local_48 + 1,local_5a0);
  local_568 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_864 = 1;
  local_868 = (uint)(2 < local_8e8.ArrayNum);
  if (local_868 == 0) {
    local_590 = 0;
    local_58c = 0;
    Core::Private::FormatStringSan::
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
  local_588 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
  local_580 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
  local_578 = (FMassEntityHandle *)(local_8e8.AllocatorInstance.Data + 0x10);
  local_570 = *local_578;
  FMassEntityManager::GetArchetypeForEntity(local_568,local_48 + 2,local_570);
  local_8b8 = 0;
  while( true ) {
    if (2 < local_8b8) {
      local_150 = 1;
      local_858 = 1;
      local_85c = (uint)(1 < local_8e8.ArrayNum);
      if (local_85c == 0) {
        local_538 = 0;
        local_534 = 0;
        Core::Private::FormatStringSan::
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
      local_530 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
      local_528 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
      local_520 = (FMassEntityHandle *)(local_8e8.AllocatorInstance.Data + 8);
      FRelationTestBase::GetRelationObject((FRelationTestBase *)this,(FMassEntityHandle)&local_4e8);
      local_4c8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_850 = 1;
      local_854 = (uint)(0 < local_8e8.ArrayNum);
      if (local_854 == 0) {
        local_518 = 0;
        local_514 = 0;
        Core::Private::FormatStringSan::
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
      local_510 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
      local_508 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
      local_500 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
      local_4f8 = *(FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
      local_4e0 = local_4e8;
      local_4d8 = local_4e8;
      local_4d0 = local_4e8;
      local_4b8 = local_4e8;
      local_4f0 = local_4f8;
      local_4c0 = local_4f8;
      ::FString::FString(&local_138,"Leaf entity\'s Object vs Middle");
      bVar2 = FTestHelpers::TestEqual<FMassEntityHandle,FMassEntityHandle>
                        (&local_138,local_4b8,local_4c0,local_4c8);
      local_8d4 = !bVar2;
      local_84c = (uint)(byte)local_8d4;
      ::FString::~FString(&local_138);
      if (local_8d4 == '\0') {
        local_470 = *(FRelationManager **)&this->field_0xa8;
        local_844 = 1;
        local_848 = (uint)(1 < local_8e8.ArrayNum);
        if (local_848 == 0) {
          local_4b0 = 0;
          local_4ac = 0;
          Core::Private::FormatStringSan::
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
        local_4a8 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
        local_4a0 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
        local_498 = (FMassEntityHandle *)(local_8e8.AllocatorInstance.Data + 8);
        local_490 = *local_498;
        local_488.ObjectIndex = *(int *)&this->field_0xa0;
        local_488.ObjectSerialNumber = *(int *)&this->field_0xa4;
        local_480 = local_490;
        local_478 = local_488;
        FRelationManager::GetRelationSubjects(local_470,&local_740,(FTypeHandle)local_488,local_490)
        ;
        local_468 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_8d2 = local_740.ArrayNum == 0;
        local_840 = (uint)(byte)local_8d2;
        local_8d1 = (bool)local_8d2;
        ::FString::FString(&local_128,"Leaf entity\'s has no children");
        bVar2 = FAutomationTestBase::TestTrue(local_468,&local_128,local_8d1);
        local_8d0 = !bVar2;
        local_83c = (uint)(byte)local_8d0;
        ::FString::~FString(&local_128);
        if (local_8d0 == '\0') {
          local_430 = TSharedPtr<FMassEntityManager,1>::operator->
                                ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          local_74c = *(undefined4 *)(*(longlong *)&this->field_0x98 + 0x44);
          local_834 = 1;
          local_838 = (uint)(1 < local_8e8.ArrayNum);
          local_748 = local_74c;
          if (local_838 == 0) {
            local_460 = 0;
            local_45c = 0;
            Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
          }
          local_458 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
          local_450 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
          local_448 = (FMassEntityHandle *)(local_8e8.AllocatorInstance.Data + 8);
          local_440 = *local_448;
          local_438 = local_440;
          FMassEntityManager::GetGroupForEntity
                    (local_430,(FMassEntityHandle)&local_428,(FArchetypeGroupType)local_440.Index);
          local_420 = FAITestBase::GetTestRunner((FAITestBase *)this);
          FVar4 = FArchetypeGroupHandle::GetGroupID(&local_428);
          local_788 = *(uint *)CONCAT44(extraout_var,FVar4.ID);
          local_784 = local_788;
          local_780.ID = local_788;
          ::FString::FString(&local_118,"Leaf entity\'s is at expected group level");
          bVar2 = FTestHelpers::TestEqual<UE::Mass::FArchetypeGroupID,int>
                            (&local_118,local_780,2,local_420);
          local_8ce = !bVar2;
          local_830 = (uint)(byte)local_8ce;
          ::FString::~FString(&local_118);
          if (local_8ce == '\0') {
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_740);
            local_72c = 0;
            local_828 = 1;
            local_82c = (uint)(0 < local_8e8.ArrayNum);
            if (local_82c == 0) {
              local_418 = 0;
              local_414 = 0;
              Core::Private::FormatStringSan::
              AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
            }
            local_410 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
            local_408 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
            local_400 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
            FRelationTestBase::GetRelationObject
                      ((FRelationTestBase *)this,(FMassEntityHandle)&local_3c8);
            local_3a8 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_820 = 1;
            local_824 = (uint)(2 < local_8e8.ArrayNum);
            if (local_824 == 0) {
              local_3f8 = 0;
              local_3f4 = 0;
              Core::Private::FormatStringSan::
              AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
            }
            local_3f0 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
            local_3e8 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
            local_3e0 = (FMassEntityHandle *)(local_8e8.AllocatorInstance.Data + 0x10);
            local_3d8 = *local_3e0;
            local_3c0 = local_3c8;
            local_3b8 = local_3c8;
            local_3b0 = local_3c8;
            local_398 = local_3c8;
            local_3d0 = local_3d8;
            local_3a0 = local_3d8;
            ::FString::FString(&local_108,"Middle entity\'s Object vs Root");
            bVar2 = FTestHelpers::TestEqual<FMassEntityHandle,FMassEntityHandle>
                              (&local_108,local_398,local_3a0,local_3a8);
            local_8cc = !bVar2;
            local_81c = (uint)(byte)local_8cc;
            ::FString::~FString(&local_108);
            if (local_8cc == '\0') {
              local_350 = *(FRelationManager **)&this->field_0xa8;
              local_814 = 1;
              local_818 = (uint)(0 < local_8e8.ArrayNum);
              if (local_818 == 0) {
                local_390 = 0;
                local_38c = 0;
                Core::Private::FormatStringSan::
                AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
                bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar2) {
                  pcVar1 = (code *)swi(3);
                  uVar3 = (*pcVar1)();
                  return (bool)uVar3;
                }
              }
              local_388 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
              local_380 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
              local_378 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
              local_370 = *(FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
              local_368.ObjectIndex = *(int *)&this->field_0xa0;
              local_368.ObjectSerialNumber = *(int *)&this->field_0xa4;
              local_360 = local_370;
              local_358 = local_368;
              FRelationManager::GetRelationSubjects
                        (local_350,&local_7a8,(FTypeHandle)local_368,local_370);
              local_348 = FAITestBase::GetTestRunner((FAITestBase *)this);
              local_77c = local_7a8.ArrayNum;
              local_8d8 = local_7a8.ArrayNum == 1;
              ::FString::FString(&local_f8,"Middle entity\'s has a single child");
              bVar2 = FAutomationTestBase::TestTrue(local_348,&local_f8,local_8d8);
              local_8ca = !bVar2;
              local_810 = (uint)(byte)local_8ca;
              ::FString::~FString(&local_f8);
              if (local_8ca == '\0') {
                local_2e0 = FAITestBase::GetTestRunner((FAITestBase *)this);
                local_8b0 = local_7a8.ArrayNum + -1;
                local_808 = (uint)(-1 < local_8b0);
                local_80c = (uint)(local_8b0 < local_7a8.ArrayNum);
                if (-1 >= local_8b0 || local_8b0 >= local_7a8.ArrayNum) {
                  local_340 = 0;
                  local_33c = 0;
                  Core::Private::FormatStringSan::
                  AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
                  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar2) {
                    pcVar1 = (code *)swi(3);
                    uVar3 = (*pcVar1)();
                    return (bool)uVar3;
                  }
                }
                local_338 = local_7a8.AllocatorInstance.Data;
                local_330 = local_7a8.AllocatorInstance.Data;
                local_320 = local_7a8.AllocatorInstance.Data;
                local_328 = (longlong)(local_7a8.ArrayNum + -1) * 8;
                local_318 = (FMassEntityHandle *)(local_7a8.AllocatorInstance.Data + local_328);
                local_800 = 1;
                local_804 = (uint)(1 < local_8e8.ArrayNum);
                local_2e8 = local_318;
                if (local_804 == 0) {
                  local_310 = 0;
                  local_30c = 0;
                  Core::Private::FormatStringSan::
                  AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
                  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar2) {
                    pcVar1 = (code *)swi(3);
                    uVar3 = (*pcVar1)();
                    return (bool)uVar3;
                  }
                }
                local_308 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
                local_300 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
                local_2f8 = (FMassEntityHandle *)(local_8e8.AllocatorInstance.Data + 8);
                local_2f0 = *local_2f8;
                local_8c8 = FMassEntityHandle::operator==(local_2e8,local_2f0);
                ::FString::FString(&local_e8,"Middle entity\'s sole child is the leaf entity");
                bVar2 = FAutomationTestBase::TestTrue(local_2e0,&local_e8,local_8c8);
                local_8c7 = !bVar2;
                local_7fc = (uint)(byte)local_8c7;
                ::FString::~FString(&local_e8);
                if (local_8c7 == '\0') {
                  local_2a8 = TSharedPtr<FMassEntityManager,1>::operator->
                                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
                  local_778 = *(undefined4 *)(*(longlong *)&this->field_0x98 + 0x44);
                  local_7f4 = 1;
                  local_7f8 = (uint)(0 < local_8e8.ArrayNum);
                  local_774 = local_778;
                  if (local_7f8 == 0) {
                    local_2d8 = 0;
                    local_2d4 = 0;
                    Core::Private::FormatStringSan::
                    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
                    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar2) {
                      pcVar1 = (code *)swi(3);
                      uVar3 = (*pcVar1)();
                      return (bool)uVar3;
                    }
                  }
                  local_2d0 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
                  local_2c8 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
                  local_2c0 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
                  local_2b8 = *(FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
                  local_2b0 = local_2b8;
                  FMassEntityManager::GetGroupForEntity
                            (local_2a8,(FMassEntityHandle)&local_2a0,
                             (FArchetypeGroupType)local_2b8.Index);
                  local_298 = FAITestBase::GetTestRunner((FAITestBase *)this);
                  FVar4 = FArchetypeGroupHandle::GetGroupID(&local_2a0);
                  local_770 = *(uint *)CONCAT44(extraout_var_00,FVar4.ID);
                  local_76c = local_770;
                  local_768.ID = local_770;
                  ::FString::FString(&local_d8,"Leaf entity\'s is at expected group level");
                  bVar2 = FTestHelpers::TestEqual<UE::Mass::FArchetypeGroupID,int>
                                    (&local_d8,local_768,1,local_298);
                  local_8c5 = !bVar2;
                  local_7f0 = (uint)(byte)local_8c5;
                  ::FString::~FString(&local_d8);
                  if (local_8c5 == '\0') {
                    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_7a8);
                    local_724 = 2;
                    local_7e8 = 1;
                    local_7ec = (uint)(2 < local_8e8.ArrayNum);
                    if (local_7ec == 0) {
                      local_290 = 0;
                      local_28c = 0;
                      Core::Private::FormatStringSan::
                      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
                      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        );
                      if (bVar2) {
                        pcVar1 = (code *)swi(3);
                        uVar3 = (*pcVar1)();
                        return (bool)uVar3;
                      }
                    }
                    local_288 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
                    local_280 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
                    local_278 = (FMassEntityHandle *)(local_8e8.AllocatorInstance.Data + 0x10);
                    FRelationTestBase::GetRelationObject
                              ((FRelationTestBase *)this,(FMassEntityHandle)&local_270);
                    local_268 = FAITestBase::GetTestRunner((FAITestBase *)this);
                    local_8d7 = FMassEntityHandle::IsValid(&local_270);
                    local_8d7 = !local_8d7;
                    ::FString::FString(&local_c8,"Root entity has no parent");
                    bVar2 = FAutomationTestBase::TestTrue(local_268,&local_c8,local_8d7);
                    local_8c3 = !bVar2;
                    local_7e4 = (uint)(byte)local_8c3;
                    ::FString::~FString(&local_c8);
                    if (local_8c3 == '\0') {
                      local_220 = *(FRelationManager **)&this->field_0xa8;
                      local_7dc = 1;
                      local_7e0 = (uint)(2 < local_8e8.ArrayNum);
                      if (local_7e0 == 0) {
                        local_260 = 0;
                        local_25c = 0;
                        Core::Private::FormatStringSan::
                        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
                        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar2) {
                          pcVar1 = (code *)swi(3);
                          uVar3 = (*pcVar1)();
                          return (bool)uVar3;
                        }
                      }
                      local_258 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
                      local_250 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
                      local_248 = (FMassEntityHandle *)(local_8e8.AllocatorInstance.Data + 0x10);
                      local_240 = *local_248;
                      local_238.ObjectIndex = *(int *)&this->field_0xa0;
                      local_238.ObjectSerialNumber = *(int *)&this->field_0xa4;
                      local_230 = local_240;
                      local_228 = local_238;
                      FRelationManager::GetRelationSubjects
                                (local_220,&local_798,(FTypeHandle)local_238,local_240);
                      local_218 = FAITestBase::GetTestRunner((FAITestBase *)this);
                      local_764 = local_798.ArrayNum;
                      local_8d6 = local_798.ArrayNum == 1;
                      ::FString::FString(&local_b8,"Root entity\'s has a single child");
                      bVar2 = FAutomationTestBase::TestTrue(local_218,&local_b8,local_8d6);
                      local_8c1 = !bVar2;
                      local_7d8 = (uint)(byte)local_8c1;
                      ::FString::~FString(&local_b8);
                      if (local_8c1 == '\0') {
                        local_1b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
                        local_8a8 = local_798.ArrayNum + -1;
                        local_7d0 = (uint)(-1 < local_8a8);
                        local_7d4 = (uint)(local_8a8 < local_798.ArrayNum);
                        if (-1 >= local_8a8 || local_8a8 >= local_798.ArrayNum) {
                          local_210 = 0;
                          local_20c = 0;
                          Core::Private::FormatStringSan::
                          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
                          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            );
                          if (bVar2) {
                            pcVar1 = (code *)swi(3);
                            uVar3 = (*pcVar1)();
                            return (bool)uVar3;
                          }
                        }
                        local_208 = local_798.AllocatorInstance.Data;
                        local_200 = local_798.AllocatorInstance.Data;
                        local_1f0 = local_798.AllocatorInstance.Data;
                        local_1f8 = (longlong)(local_798.ArrayNum + -1) * 8;
                        local_1e8 = (FMassEntityHandle *)
                                    (local_798.AllocatorInstance.Data + local_1f8);
                        local_7c8 = 1;
                        local_7cc = (uint)(0 < local_8e8.ArrayNum);
                        local_1b8 = local_1e8;
                        if (local_7cc == 0) {
                          local_1e0 = 0;
                          local_1dc = 0;
                          Core::Private::FormatStringSan::
                          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
                          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            );
                          if (bVar2) {
                            pcVar1 = (code *)swi(3);
                            uVar3 = (*pcVar1)();
                            return (bool)uVar3;
                          }
                        }
                        local_1d8 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
                        local_1d0 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
                        local_1c8 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
                        local_1c0 = *(FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
                        local_8bf = FMassEntityHandle::operator==(local_1b8,local_1c0);
                        ::FString::FString(&local_a8,
                                           "Root entity\'s sole child is the middle entity");
                        bVar2 = FAutomationTestBase::TestTrue(local_1b0,&local_a8,local_8bf);
                        local_8be = !bVar2;
                        local_7c4 = (uint)(byte)local_8be;
                        ::FString::~FString(&local_a8);
                        if (local_8be == '\0') {
                          local_178 = TSharedPtr<FMassEntityManager,1>::operator->
                                                ((TSharedPtr<FMassEntityManager,1> *)
                                                 &this->field_0x28);
                          local_760 = *(undefined4 *)(*(longlong *)&this->field_0x98 + 0x44);
                          local_7bc = 1;
                          local_7c0 = (uint)(2 < local_8e8.ArrayNum);
                          local_75c = local_760;
                          if (local_7c0 == 0) {
                            local_1a8 = 0;
                            local_1a4 = 0;
                            Core::Private::FormatStringSan::
                            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>
                                      ();
                            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              );
                            if (bVar2) {
                              pcVar1 = (code *)swi(3);
                              uVar3 = (*pcVar1)();
                              return (bool)uVar3;
                            }
                          }
                          local_1a0 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
                          local_198 = (FMassEntityHandle *)local_8e8.AllocatorInstance.Data;
                          local_190 = (FMassEntityHandle *)(local_8e8.AllocatorInstance.Data + 0x10)
                          ;
                          local_188 = *local_190;
                          local_180 = local_188;
                          FMassEntityManager::GetGroupForEntity
                                    (local_178,(FMassEntityHandle)&local_170,
                                     (FArchetypeGroupType)local_188.Index);
                          local_168 = FAITestBase::GetTestRunner((FAITestBase *)this);
                          FVar4 = FArchetypeGroupHandle::GetGroupID(&local_170);
                          local_758 = *(uint *)CONCAT44(extraout_var_01,FVar4.ID);
                          local_754 = local_758;
                          local_750.ID = local_758;
                          ::FString::FString(&local_98,"Leaf entity\'s is at expected group level");
                          bVar2 = FTestHelpers::TestEqual<UE::Mass::FArchetypeGroupID,int>
                                            (&local_98,local_750,0,local_168);
                          local_8bc = !bVar2;
                          local_7b8 = (uint)(byte)local_8bc;
                          ::FString::~FString(&local_98);
                          if (local_8bc == '\0') {
                            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_798);
                            local_8ba = 1;
                            _vector_destructor_iterator_
                                      (local_48,0x10,3,FMassArchetypeHandle::~FMassArchetypeHandle);
                            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_8e8);
                            FMassArchetypeHandle::~FMassArchetypeHandle(&local_8a0);
                            local_8d3 = local_8ba;
                          }
                          else {
                            AITestSuite::ConditionallyBreakOnTestFail();
                            local_8bb = 0;
                            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_798);
                            _vector_destructor_iterator_
                                      (local_48,0x10,3,FMassArchetypeHandle::~FMassArchetypeHandle);
                            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_8e8);
                            FMassArchetypeHandle::~FMassArchetypeHandle(&local_8a0);
                            local_8d3 = local_8bb;
                          }
                        }
                        else {
                          AITestSuite::ConditionallyBreakOnTestFail();
                          local_8bd = 0;
                          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_798);
                          _vector_destructor_iterator_
                                    (local_48,0x10,3,FMassArchetypeHandle::~FMassArchetypeHandle);
                          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_8e8);
                          FMassArchetypeHandle::~FMassArchetypeHandle(&local_8a0);
                          local_8d3 = local_8bd;
                        }
                      }
                      else {
                        AITestSuite::ConditionallyBreakOnTestFail();
                        local_8c0 = 0;
                        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_798);
                        _vector_destructor_iterator_
                                  (local_48,0x10,3,FMassArchetypeHandle::~FMassArchetypeHandle);
                        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_8e8);
                        FMassArchetypeHandle::~FMassArchetypeHandle(&local_8a0);
                        local_8d3 = local_8c0;
                      }
                    }
                    else {
                      AITestSuite::ConditionallyBreakOnTestFail();
                      local_8c2 = 0;
                      _vector_destructor_iterator_
                                (local_48,0x10,3,FMassArchetypeHandle::~FMassArchetypeHandle);
                      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_8e8);
                      FMassArchetypeHandle::~FMassArchetypeHandle(&local_8a0);
                      local_8d3 = local_8c2;
                    }
                  }
                  else {
                    AITestSuite::ConditionallyBreakOnTestFail();
                    local_8c4 = 0;
                    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_7a8);
                    _vector_destructor_iterator_
                              (local_48,0x10,3,FMassArchetypeHandle::~FMassArchetypeHandle);
                    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_8e8);
                    FMassArchetypeHandle::~FMassArchetypeHandle(&local_8a0);
                    local_8d3 = local_8c4;
                  }
                }
                else {
                  AITestSuite::ConditionallyBreakOnTestFail();
                  local_8c6 = 0;
                  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_7a8);
                  _vector_destructor_iterator_
                            (local_48,0x10,3,FMassArchetypeHandle::~FMassArchetypeHandle);
                  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_8e8);
                  FMassArchetypeHandle::~FMassArchetypeHandle(&local_8a0);
                  local_8d3 = local_8c6;
                }
              }
              else {
                AITestSuite::ConditionallyBreakOnTestFail();
                local_8c9 = 0;
                TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_7a8);
                _vector_destructor_iterator_
                          (local_48,0x10,3,FMassArchetypeHandle::~FMassArchetypeHandle);
                TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_8e8);
                FMassArchetypeHandle::~FMassArchetypeHandle(&local_8a0);
                local_8d3 = local_8c9;
              }
            }
            else {
              AITestSuite::ConditionallyBreakOnTestFail();
              local_8cb = 0;
              _vector_destructor_iterator_
                        (local_48,0x10,3,FMassArchetypeHandle::~FMassArchetypeHandle);
              TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
              ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_8e8);
              FMassArchetypeHandle::~FMassArchetypeHandle(&local_8a0);
              local_8d3 = local_8cb;
            }
          }
          else {
            AITestSuite::ConditionallyBreakOnTestFail();
            local_8cd = 0;
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_740);
            _vector_destructor_iterator_
                      (local_48,0x10,3,FMassArchetypeHandle::~FMassArchetypeHandle);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_8e8);
            FMassArchetypeHandle::~FMassArchetypeHandle(&local_8a0);
            local_8d3 = local_8cd;
          }
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          local_8cf = 0;
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_740);
          _vector_destructor_iterator_(local_48,0x10,3,FMassArchetypeHandle::~FMassArchetypeHandle);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_8e8);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_8a0);
          local_8d3 = local_8cf;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        local_8d3 = 0;
        _vector_destructor_iterator_(local_48,0x10,3,FMassArchetypeHandle::~FMassArchetypeHandle);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_8e8);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_8a0);
      }
      return (bool)local_8d3;
    }
    local_550 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_560 = &local_68;
    local_548 = FMassArchetypeHandle::FMassArchetypeHandle(local_560,local_48 + (local_8b8 + 1) % 3)
    ;
    local_558 = &local_58;
    local_540 = FMassArchetypeHandle::FMassArchetypeHandle(local_558,local_48 + local_8b8);
    ::FString::FString(&local_148,"Each pair of archetypes");
    bVar2 = FTestHelpers::TestNotEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                      (&local_148,local_540,local_548,local_550);
    local_8b9 = !bVar2;
    local_860 = (uint)(byte)local_8b9;
    ::FString::~FString(&local_148);
    if (local_8b9 != '\0') break;
    local_8b8 = local_8b8 + 1;
  }
  AITestSuite::ConditionallyBreakOnTestFail();
  local_8d5 = 0;
  _vector_destructor_iterator_(local_48,0x10,3,FMassArchetypeHandle::~FMassArchetypeHandle);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_8e8);
  FMassArchetypeHandle::~FMassArchetypeHandle(&local_8a0);
  return (bool)local_8d5;
}

