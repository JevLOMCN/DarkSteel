// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147169050

/* WARNING: Removing unreachable block (ram,0x00014716a260) */
/* WARNING: Removing unreachable block (ram,0x000147169fff) */
/* WARNING: Removing unreachable block (ram,0x000147169e23) */
/* WARNING: Removing unreachable block (ram,0x000147169bbd) */
/* WARNING: Removing unreachable block (ram,0x0001471699a4) */
/* WARNING: Removing unreachable block (ram,0x000147169793) */
/* WARNING: Removing unreachable block (ram,0x000147169675) */
/* WARNING: Removing unreachable block (ram,0x0001471694ed) */
/* WARNING: Removing unreachable block (ram,0x0001471693e0) */
/* WARNING: Removing unreachable block (ram,0x000147169255) */
/* WARNING: Removing unreachable block (ram,0x000147169148) */
/* WARNING: Removing unreachable block (ram,0x00014716a443) */
/* WARNING: Removing unreachable block (ram,0x00014716a7d7) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Relations::FHierarchyTrivialReparenting::InstantTest
          (FHierarchyTrivialReparenting *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_5a8;
  bool local_598;
  char local_597;
  undefined1 local_596;
  char local_595;
  undefined1 local_594;
  undefined1 local_593;
  bool local_592;
  char local_591;
  undefined1 local_590;
  bool local_58f;
  char local_58e;
  undefined1 local_58d;
  undefined1 local_58c;
  bool local_58b;
  char local_58a;
  undefined1 local_589;
  bool local_588;
  char local_587;
  undefined1 local_586;
  char local_585;
  undefined1 local_584;
  bool local_583;
  char local_582;
  undefined1 local_581;
  undefined1 local_580;
  int local_578;
  undefined4 local_570;
  uint local_56c;
  undefined4 local_568;
  uint local_564;
  undefined4 local_560;
  uint local_55c;
  undefined4 local_558;
  uint local_554;
  undefined4 local_550;
  uint local_54c;
  undefined4 local_548;
  uint local_544;
  uint local_540;
  undefined4 local_53c;
  uint local_538;
  uint local_534;
  undefined4 local_530;
  uint local_52c;
  uint local_528;
  uint local_524;
  undefined4 local_520;
  uint local_51c;
  uint local_518;
  undefined4 local_514;
  uint local_510;
  uint local_50c;
  uint local_508;
  undefined4 local_504;
  uint local_500;
  uint local_4fc;
  undefined4 local_4f8;
  uint local_4f4;
  uint local_4f0;
  uint local_4ec;
  uint local_4e8;
  undefined4 local_4e4;
  uint local_4e0;
  uint local_4dc;
  FMassArchetypeHandle local_4d8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_4c8;
  int local_4b8;
  FMassEntityHandle local_4b0;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined4 local_49c;
  FMassEntityManager *local_498;
  undefined4 local_490;
  undefined4 local_48c;
  FMassEntityHandle *local_488;
  FMassEntityHandle *local_480;
  FMassEntityHandle *local_478;
  FMassEntityHandle local_470;
  FMassEntityHandle local_468;
  undefined4 local_460;
  undefined4 local_45c;
  FMassEntityHandle *local_458;
  FMassEntityHandle *local_450;
  FMassEntityHandle *local_448;
  FMassEntityHandle local_440;
  FMassEntityHandle local_438;
  FMassEntityHandle local_430;
  FMassEntityHandle local_428;
  FMassEntityHandle local_420;
  FMassEntityHandle local_418;
  FMassEntityHandle local_410;
  FRelationManager *local_408;
  undefined4 local_400;
  undefined4 local_3fc;
  FMassEntityHandle *local_3f8;
  FMassEntityHandle *local_3f0;
  FMassEntityHandle *local_3e8;
  FMassEntityHandle local_3e0;
  FMassEntityHandle local_3d8;
  undefined4 local_3d0;
  undefined4 local_3cc;
  FMassEntityHandle *local_3c8;
  FMassEntityHandle *local_3c0;
  FMassEntityHandle *local_3b8;
  FMassEntityHandle local_3b0;
  FMassEntityHandle local_3a8;
  FMassEntityHandle local_3a0;
  FMassEntityHandle local_398;
  FMassEntityHandle local_390;
  FMassEntityHandle local_388;
  FMassEntityHandle local_380;
  FRelationManager *local_378;
  undefined4 local_370;
  undefined4 local_36c;
  FMassEntityHandle *local_368;
  FMassEntityHandle *local_360;
  FMassEntityHandle *local_358;
  undefined4 local_350;
  undefined4 local_34c;
  FMassEntityHandle *local_348;
  FMassEntityHandle *local_340;
  FMassEntityHandle *local_338;
  FMassEntityHandle local_330;
  FMassEntityHandle local_328;
  FMassEntityHandle local_320;
  FMassEntityHandle local_318;
  FMassEntityHandle local_310;
  FAutomationTestBase *local_308;
  FMassEntityHandle local_300;
  FMassEntityHandle local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  FMassEntityHandle *local_2e8;
  FMassEntityHandle *local_2e0;
  FMassEntityHandle *local_2d8;
  FMassEntityHandle local_2d0;
  FMassEntityHandle local_2c8;
  FMassEntityHandle local_2c0;
  FMassEntityHandle local_2b8;
  FMassEntityHandle local_2b0;
  FAutomationTestBase *local_2a8;
  FMassEntityHandle local_2a0;
  FMassEntityHandle local_298;
  undefined4 local_290;
  undefined4 local_28c;
  FMassEntityHandle *local_288;
  FMassEntityHandle *local_280;
  FMassEntityHandle *local_278;
  FMassEntityHandle local_270;
  FObjectKey local_268;
  FMassEntityHandle local_260;
  FObjectKey local_258;
  FRelationManager *local_250;
  FAutomationTestBase *local_248;
  undefined4 local_240;
  undefined4 local_23c;
  FMassEntityHandle *local_238;
  FMassEntityHandle *local_230;
  FMassEntityHandle *local_228;
  FMassEntityHandle local_220;
  FAutomationTestBase *local_218;
  undefined4 local_210;
  undefined4 local_20c;
  FMassEntityHandle *local_208;
  FMassEntityHandle *local_200;
  FMassEntityHandle *local_1f8;
  FMassEntityHandle local_1f0;
  FObjectKey local_1e8;
  FMassEntityHandle local_1e0;
  FObjectKey local_1d8;
  FRelationManager *local_1d0;
  FAutomationTestBase *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  FMassEntityHandle *local_1b8;
  FMassEntityHandle *local_1b0;
  FMassEntityHandle *local_1a8;
  FMassEntityHandle local_1a0;
  FAutomationTestBase *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  FMassEntityHandle *local_188;
  FMassEntityHandle *local_180;
  FMassEntityHandle *local_178;
  FMassEntityHandle local_170;
  FObjectKey local_168;
  FMassEntityHandle local_160;
  FObjectKey local_158;
  FRelationManager *local_150;
  FAutomationTestBase *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  FScriptContainerElement *local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  FScriptContainerElement *local_120;
  FMassEntityHandle *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  FMassEntityHandle *local_108;
  FMassEntityHandle *local_100;
  FMassEntityHandle *local_f8;
  FMassEntityHandle local_f0;
  FMassEntityHandle *local_e8;
  FAutomationTestBase *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_c8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_18;
  
  local_d8 = 3;
  FMassArchetypeHandle::FMassArchetypeHandle(&local_4d8,(FMassArchetypeHandle *)&this->field_0x60);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_5a8.AllocatorInstance);
  local_5a8.ArrayNum = 0;
  local_5a8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_5a8.AllocatorInstance);
  local_498 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities(local_498,&local_18,&local_4d8,3,&local_5a8);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_18);
  local_d4 = 1;
  local_d0 = 0;
  local_4a8 = 2;
  local_408 = *(FRelationManager **)&this->field_0xa8;
  local_570 = 1;
  local_4dc = (uint)(0 < local_5a8.ArrayNum);
  if (local_4dc == 0) {
    local_490 = 0;
    local_48c = 0;
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
  local_488 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
  local_480 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
  local_478 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
  local_470 = *(FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
  local_568 = 1;
  local_56c = (uint)(1 < local_5a8.ArrayNum);
  local_468 = local_470;
  local_420 = local_470;
  if (local_56c == 0) {
    local_460 = 0;
    local_45c = 0;
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
  local_458 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
  local_450 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
  local_448 = (FMassEntityHandle *)(local_5a8.AllocatorInstance.Data + 8);
  local_440 = *local_448;
  local_430.Index = *(int *)&this->field_0xa0;
  local_430.SerialNumber = *(int *)&this->field_0xa4;
  local_438 = local_440;
  local_428 = local_430;
  local_418 = local_440;
  local_410 = local_430;
  FRelationManager::CreateRelationInstance(local_408,(FTypeHandle)local_20,local_430,local_440);
  local_378 = *(FRelationManager **)&this->field_0xa8;
  local_560 = 1;
  local_564 = (uint)(2 < local_5a8.ArrayNum);
  if (local_564 == 0) {
    local_400 = 0;
    local_3fc = 0;
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
  local_3f8 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
  local_3f0 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
  local_3e8 = (FMassEntityHandle *)(local_5a8.AllocatorInstance.Data + 0x10);
  local_3e0 = *local_3e8;
  local_558 = 1;
  local_55c = (uint)(1 < local_5a8.ArrayNum);
  local_3d8 = local_3e0;
  local_390 = local_3e0;
  if (local_55c == 0) {
    local_3d0 = 0;
    local_3cc = 0;
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
  local_3c8 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
  local_3c0 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
  local_3b8 = (FMassEntityHandle *)(local_5a8.AllocatorInstance.Data + 8);
  local_3b0 = *local_3b8;
  local_3a0.Index = *(int *)&this->field_0xa0;
  local_3a0.SerialNumber = *(int *)&this->field_0xa4;
  local_3a8 = local_3b0;
  local_398 = local_3a0;
  local_388 = local_3b0;
  local_380 = local_3a0;
  FRelationManager::CreateRelationInstance(local_378,(FTypeHandle)local_28,local_3a0,local_3b0);
  local_4a4 = 1;
  local_550 = 1;
  local_554 = (uint)(1 < local_5a8.ArrayNum);
  if (local_554 == 0) {
    local_370 = 0;
    local_36c = 0;
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
  local_368 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
  local_360 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
  local_358 = (FMassEntityHandle *)(local_5a8.AllocatorInstance.Data + 8);
  FRelationTestBase::GetRelationObject((FRelationTestBase *)this,(FMassEntityHandle)&local_4b0);
  local_308 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_548 = 1;
  local_54c = (uint)(0 < local_5a8.ArrayNum);
  if (local_54c == 0) {
    local_350 = 0;
    local_34c = 0;
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
  local_348 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
  local_340 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
  local_338 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
  local_330 = *(FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
  local_320 = local_4b0;
  local_318 = local_4b0;
  local_310 = local_4b0;
  local_2f8 = local_4b0;
  local_328 = local_330;
  local_300 = local_330;
  ::FString::FString(&local_a8,"Leaf entity\'s Object vs Original Parent");
  bVar2 = FTestHelpers::TestNotEqual<FMassEntityHandle,FMassEntityHandle>
                    (&local_a8,local_2f8,local_300,local_308);
  local_597 = !bVar2;
  local_544 = (uint)(byte)local_597;
  ::FString::~FString(&local_a8);
  if (local_597 == '\0') {
    local_2a8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_53c = 1;
    local_540 = (uint)(2 < local_5a8.ArrayNum);
    if (local_540 == 0) {
      local_2f0 = 0;
      local_2ec = 0;
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
    local_2e8 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
    local_2e0 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
    local_2d8 = (FMassEntityHandle *)(local_5a8.AllocatorInstance.Data + 0x10);
    local_2d0 = *local_2d8;
    local_2c0 = local_4b0;
    local_2b8 = local_4b0;
    local_2b0 = local_4b0;
    local_298 = local_4b0;
    local_2c8 = local_2d0;
    local_2a0 = local_2d0;
    ::FString::FString(&local_98,"Leaf entity\'s Object vs Final Parent");
    bVar2 = FTestHelpers::TestEqual<FMassEntityHandle,FMassEntityHandle>
                      (&local_98,local_298,local_2a0,local_2a8);
    local_595 = !bVar2;
    local_538 = (uint)(byte)local_595;
    ::FString::~FString(&local_98);
    if (local_595 == '\0') {
      local_250 = *(FRelationManager **)&this->field_0xa8;
      local_530 = 1;
      local_534 = (uint)(1 < local_5a8.ArrayNum);
      if (local_534 == 0) {
        local_290 = 0;
        local_28c = 0;
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
      local_288 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
      local_280 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
      local_278 = (FMassEntityHandle *)(local_5a8.AllocatorInstance.Data + 8);
      local_270 = *local_278;
      local_268.ObjectIndex = *(int *)&this->field_0xa0;
      local_268.ObjectSerialNumber = *(int *)&this->field_0xa4;
      local_260 = local_270;
      local_258 = local_268;
      FRelationManager::GetRelationSubjects(local_250,&local_c8,(FTypeHandle)local_268,local_270);
      local_248 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_593 = local_c8.ArrayNum == 0;
      local_52c = (uint)(byte)local_593;
      local_592 = (bool)local_593;
      ::FString::FString(&local_88,"Leaf entity\'s has no children");
      bVar2 = FAutomationTestBase::TestTrue(local_248,&local_88,local_592);
      local_591 = !bVar2;
      local_528 = (uint)(byte)local_591;
      ::FString::~FString(&local_88);
      if (local_591 == '\0') {
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_c8);
        local_4a0 = 0;
        local_520 = 1;
        local_524 = (uint)(0 < local_5a8.ArrayNum);
        if (local_524 == 0) {
          local_240 = 0;
          local_23c = 0;
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
        local_238 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
        local_230 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
        local_228 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
        FRelationTestBase::GetRelationObject
                  ((FRelationTestBase *)this,(FMassEntityHandle)&local_220);
        local_218 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_58f = FMassEntityHandle::IsValid(&local_220);
        ::FString::FString(&local_78,"Original Parent has a parent");
        bVar2 = FAutomationTestBase::TestFalse(local_218,&local_78,local_58f);
        local_58e = !bVar2;
        local_51c = (uint)(byte)local_58e;
        ::FString::~FString(&local_78);
        if (local_58e == '\0') {
          local_1d0 = *(FRelationManager **)&this->field_0xa8;
          local_514 = 1;
          local_518 = (uint)(0 < local_5a8.ArrayNum);
          if (local_518 == 0) {
            local_210 = 0;
            local_20c = 0;
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
          local_208 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
          local_200 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
          local_1f8 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
          local_1f0 = *(FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
          local_1e8.ObjectIndex = *(int *)&this->field_0xa0;
          local_1e8.ObjectSerialNumber = *(int *)&this->field_0xa4;
          local_1e0 = local_1f0;
          local_1d8 = local_1e8;
          FRelationManager::GetRelationSubjects
                    (local_1d0,&local_b8,(FTypeHandle)local_1e8,local_1f0);
          local_1c8 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_58c = local_b8.ArrayNum == 0;
          local_510 = (uint)(byte)local_58c;
          local_58b = (bool)local_58c;
          ::FString::FString(&local_68,"Original Parent has no children");
          bVar2 = FAutomationTestBase::TestTrue(local_1c8,&local_68,local_58b);
          local_58a = !bVar2;
          local_50c = (uint)(byte)local_58a;
          ::FString::~FString(&local_68);
          if (local_58a == '\0') {
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_b8);
            local_49c = 2;
            local_504 = 1;
            local_508 = (uint)(2 < local_5a8.ArrayNum);
            if (local_508 == 0) {
              local_1c0 = 0;
              local_1bc = 0;
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
            local_1b8 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
            local_1b0 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
            local_1a8 = (FMassEntityHandle *)(local_5a8.AllocatorInstance.Data + 0x10);
            FRelationTestBase::GetRelationObject
                      ((FRelationTestBase *)this,(FMassEntityHandle)&local_1a0);
            local_198 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_588 = FMassEntityHandle::IsValid(&local_1a0);
            ::FString::FString(&local_58,"Final Parent has a parent");
            bVar2 = FAutomationTestBase::TestFalse(local_198,&local_58,local_588);
            local_587 = !bVar2;
            local_500 = (uint)(byte)local_587;
            ::FString::~FString(&local_58);
            if (local_587 == '\0') {
              local_150 = *(FRelationManager **)&this->field_0xa8;
              local_4f8 = 1;
              local_4fc = (uint)(2 < local_5a8.ArrayNum);
              if (local_4fc == 0) {
                local_190 = 0;
                local_18c = 0;
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
              local_188 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
              local_180 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
              local_178 = (FMassEntityHandle *)(local_5a8.AllocatorInstance.Data + 0x10);
              local_170 = *local_178;
              local_168.ObjectIndex = *(int *)&this->field_0xa0;
              local_168.ObjectSerialNumber = *(int *)&this->field_0xa4;
              local_160 = local_170;
              local_158 = local_168;
              FRelationManager::GetRelationSubjects
                        (local_150,&local_4c8,(FTypeHandle)local_168,local_170);
              local_148 = FAITestBase::GetTestRunner((FAITestBase *)this);
              local_4b8 = local_4c8.ArrayNum;
              local_598 = local_4c8.ArrayNum == 1;
              ::FString::FString(&local_48,"Final Parent has one child");
              bVar2 = FAutomationTestBase::TestTrue(local_148,&local_48,local_598);
              local_585 = !bVar2;
              local_4f4 = (uint)(byte)local_585;
              ::FString::~FString(&local_48);
              if (local_585 == '\0') {
                local_e0 = FAITestBase::GetTestRunner((FAITestBase *)this);
                local_578 = local_4c8.ArrayNum + -1;
                local_4ec = (uint)(-1 < local_578);
                local_4f0 = (uint)(local_578 < local_4c8.ArrayNum);
                if (-1 >= local_578 || local_578 >= local_4c8.ArrayNum) {
                  local_140 = 0;
                  local_13c = 0;
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
                local_138 = local_4c8.AllocatorInstance.Data;
                local_130 = local_4c8.AllocatorInstance.Data;
                local_120 = local_4c8.AllocatorInstance.Data;
                local_128 = (longlong)(local_4c8.ArrayNum + -1) * 8;
                local_118 = (FMassEntityHandle *)(local_4c8.AllocatorInstance.Data + local_128);
                local_4e4 = 1;
                local_4e8 = (uint)(1 < local_5a8.ArrayNum);
                local_e8 = local_118;
                if (local_4e8 == 0) {
                  local_110 = 0;
                  local_10c = 0;
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
                local_108 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
                local_100 = (FMassEntityHandle *)local_5a8.AllocatorInstance.Data;
                local_f8 = (FMassEntityHandle *)(local_5a8.AllocatorInstance.Data + 8);
                local_f0 = *local_f8;
                local_583 = FMassEntityHandle::operator==(local_e8,local_f0);
                ::FString::FString(&local_38,"Final Parent\'s sole child is the Leaf entity");
                bVar2 = FAutomationTestBase::TestTrue(local_e0,&local_38,local_583);
                local_582 = !bVar2;
                local_4e0 = (uint)(byte)local_582;
                ::FString::~FString(&local_38);
                if (local_582 == '\0') {
                  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_4c8);
                  local_580 = 1;
                  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_5a8);
                  FMassArchetypeHandle::~FMassArchetypeHandle(&local_4d8);
                  local_596 = local_580;
                }
                else {
                  AITestSuite::ConditionallyBreakOnTestFail();
                  local_581 = 0;
                  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_4c8);
                  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_5a8);
                  FMassArchetypeHandle::~FMassArchetypeHandle(&local_4d8);
                  local_596 = local_581;
                }
              }
              else {
                AITestSuite::ConditionallyBreakOnTestFail();
                local_584 = 0;
                TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_4c8);
                TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_5a8);
                FMassArchetypeHandle::~FMassArchetypeHandle(&local_4d8);
                local_596 = local_584;
              }
            }
            else {
              AITestSuite::ConditionallyBreakOnTestFail();
              local_586 = 0;
              TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
              ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_5a8);
              FMassArchetypeHandle::~FMassArchetypeHandle(&local_4d8);
              local_596 = local_586;
            }
          }
          else {
            AITestSuite::ConditionallyBreakOnTestFail();
            local_589 = 0;
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_b8);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_5a8);
            FMassArchetypeHandle::~FMassArchetypeHandle(&local_4d8);
            local_596 = local_589;
          }
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          local_58d = 0;
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_5a8);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_4d8);
          local_596 = local_58d;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        local_590 = 0;
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_c8);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_5a8);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_4d8);
        local_596 = local_590;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_594 = 0;
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_5a8);
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_4d8);
      local_596 = local_594;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_596 = 0;
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_5a8);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_4d8);
  }
  return (bool)local_596;
}

