// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14714ec20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014714ecd7) */
/* WARNING: Removing unreachable block (ram,0x00014714f0db) */
/* WARNING: Removing unreachable block (ram,0x00014714f3a0) */
/* WARNING: Removing unreachable block (ram,0x00014714f894) */
/* WARNING: Removing unreachable block (ram,0x00014714fa93) */
/* WARNING: Removing unreachable block (ram,0x00014714fb8e) */
/* WARNING: Removing unreachable block (ram,0x00014714fec7) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::EntityCollection::FCreateWithHandleArrays::InstantTest
          (FCreateWithHandleArrays *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<FMassEntityHandle,int> *pTVar4;
  initializer_list<TArrayView<FMassEntityHandle_const_,int>_> *piVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  initializer_list<TArrayView<FMassEntityHandle_const_,int>_> *piVar9;
  TArrayView<FMassEntityHandle_const_,int> *pTVar10;
  undefined1 auStack_568 [32];
  longlong local_548;
  longlong local_540;
  bool local_538;
  bool local_537;
  bool local_536;
  char local_535;
  undefined1 local_534;
  bool local_533;
  char local_532;
  undefined1 local_531;
  char local_530;
  undefined1 local_52f;
  char local_52e;
  undefined1 local_52d;
  char local_52c;
  undefined1 local_52b;
  bool local_52a;
  char local_529;
  undefined1 local_528;
  bool local_527;
  char local_526;
  undefined1 local_525;
  char local_524;
  undefined1 local_523;
  char local_522;
  undefined1 local_521;
  char local_520;
  undefined1 local_51f;
  char local_51e;
  undefined1 local_51d;
  undefined1 local_51c;
  TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_> local_518;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_508;
  int local_4f8;
  int local_4f0;
  int local_4e8;
  uint local_4e4;
  uint local_4e0;
  uint local_4dc;
  uint local_4d8;
  uint local_4d4;
  undefined4 local_4d0;
  uint local_4cc;
  uint local_4c8;
  uint local_4c4;
  undefined4 local_4c0;
  uint local_4bc;
  uint local_4b8;
  uint local_4b4;
  uint local_4b0;
  uint local_4ac;
  undefined4 local_4a8;
  uint local_4a4;
  uint local_4a0;
  undefined4 local_49c;
  uint local_498;
  undefined4 local_494;
  uint local_490;
  uint local_48c;
  uint local_488;
  undefined4 local_484;
  uint local_480;
  uint local_47c;
  uint local_478;
  undefined4 local_474;
  FEntityCollection local_470;
  int local_448;
  int local_444;
  int local_440;
  int local_43c;
  int local_438;
  int local_434;
  int local_430;
  int local_42c;
  int local_428;
  int local_424;
  int local_420;
  int local_41c;
  int local_418;
  int local_414;
  int local_410;
  int local_40c;
  int local_408;
  int local_404;
  int local_400;
  int local_3fc;
  int local_3f8;
  int local_3f4;
  int local_3f0;
  int local_3ec;
  int local_3e8;
  int local_3e4;
  int local_3e0;
  FMassEntityHandle *local_3d8;
  FMassEntityHandle *local_3d0;
  undefined4 local_3c8;
  undefined4 local_3c4;
  FMassEntityHandle *local_3c0;
  FMassEntityHandle *local_3b8;
  FMassEntityHandle *local_3b0;
  undefined4 local_3a8;
  undefined4 local_3a4;
  FMassEntityHandle *local_3a0;
  FMassEntityHandle *local_398;
  FMassEntityHandle *local_390;
  FMassEntityHandle *local_388;
  undefined4 local_380;
  undefined4 local_37c;
  FScriptContainerElement *local_378;
  FScriptContainerElement *local_370;
  FScriptContainerElement *local_368;
  FAutomationTestBase *local_360;
  FAutomationTestBase *local_358;
  undefined4 local_350;
  undefined4 local_34c;
  FScriptContainerElement *local_348;
  FScriptContainerElement *local_340;
  FScriptContainerElement *local_338;
  TArrayView<FMassEntityHandle_const_,int> *local_330;
  FAutomationTestBase *local_328;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_320;
  FAutomationTestBase *local_318;
  FMassEntityManager *local_310;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_308;
  FAutomationTestBase *local_300;
  FAutomationTestBase *local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  FScriptContainerElement *local_2e8;
  FScriptContainerElement *local_2e0;
  FScriptContainerElement *local_2d8;
  FAutomationTestBase *local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  FScriptContainerElement *local_2c0;
  FScriptContainerElement *local_2b8;
  FScriptContainerElement *local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  FScriptContainerElement *local_2a0;
  FScriptContainerElement *local_298;
  FScriptContainerElement *local_290;
  TArrayView<FMassEntityHandle_const_,int> *local_288;
  FAutomationTestBase *local_280;
  FMassEntityManager *local_278;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_270;
  FAutomationTestBase *local_268;
  undefined4 local_260;
  undefined4 local_25c;
  FScriptContainerElement *local_258;
  FScriptContainerElement *local_250;
  FScriptContainerElement *local_248;
  TArrayView<FMassEntityHandle_const_,int> *local_240;
  FAutomationTestBase *local_238;
  FMassEntityManager *local_230;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_228;
  FAutomationTestBase *local_220;
  undefined4 local_218;
  undefined4 local_214;
  FMassEntityHandle *local_210;
  FMassEntityHandle *local_208;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  initializer_list<TArrayView<FMassEntityHandle_const_,int>_> local_148;
  TArrayView<FMassEntityHandle_const_,int> local_138;
  TArrayView<FMassEntityHandle_const_,int> local_128;
  TArrayView<FMassEntityHandle_const_,int> local_118;
  TArrayView<FMassEntityHandle,int> local_108;
  TArrayView<FMassEntityHandle,int> local_f8;
  TArrayView<FMassEntityHandle,int> local_e8;
  initializer_list<TArrayView<FMassEntityHandle_const_,int>_> local_d8;
  TArrayView<FMassEntityHandle_const_,int> local_c8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_b8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_a8;
  TArrayView<FMassEntityHandle_const_,int> local_98;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_88;
  TArrayView<FMassEntityHandle_const_,int> local_78;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_68;
  TArrayView<FMassEntityHandle_const_,int> local_58;
  TArrayView<FMassEntityHandle_const_,int> local_48;
  TArrayView<FMassEntityHandle_const_,int> local_38;
  TArrayView<FMassEntityHandle_const_,int> local_28;
  
  local_28._8_8_ = __security_cookie.value ^ (ulonglong)auStack_568;
  FEntityCollection::FEntityCollection(&local_470);
  FEntityCollectionTestBase::CreateEntitySubset((FEntityCollectionTestBase *)this,&local_508,0x32);
  local_3e8 = local_508.ArrayNum;
  if ((local_508.ArrayNum < 5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EntitiesSubSet.Num() >= 5",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassEntityCollectionTest.cpp"
                         ,0xa8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_3e4 = local_508.ArrayNum;
  local_448 = local_508.ArrayNum / 2;
  local_474 = 1;
  local_478 = (uint)(0 < local_508.ArrayNum);
  if (local_478 == 0) {
    local_218 = 0;
    local_214 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_540 = (longlong)local_508.ArrayNum;
    local_548 = 0;
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
  local_210 = (FMassEntityHandle *)local_508.AllocatorInstance.Data;
  local_208 = (FMassEntityHandle *)local_508.AllocatorInstance.Data;
  local_3d8 = (FMassEntityHandle *)local_508.AllocatorInstance.Data;
  local_3d0 = (FMassEntityHandle *)local_508.AllocatorInstance.Data;
  pTVar4 = MakeArrayView<FMassEntityHandle>
                     (&local_108,(FMassEntityHandle *)local_508.AllocatorInstance.Data,local_448);
  TArrayView<FMassEntityHandle_const_,int>::
  TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
            (&local_58,pTVar4);
  local_444 = local_508.ArrayNum;
  local_4f8 = local_508.ArrayNum / 2;
  local_4e0 = (uint)(-1 < local_4f8);
  local_4e4 = (uint)(local_4f8 < local_508.ArrayNum);
  if (-1 >= local_4f8 || local_4f8 >= local_508.ArrayNum) {
    local_3c8 = 0;
    local_3c4 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_540 = (longlong)local_508.ArrayNum;
    local_548 = (longlong)local_4f8;
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
  local_3c0 = (FMassEntityHandle *)local_508.AllocatorInstance.Data;
  local_3b8 = (FMassEntityHandle *)local_508.AllocatorInstance.Data;
  local_3b0 = (FMassEntityHandle *)(local_508.AllocatorInstance.Data + (longlong)local_4f8 * 8);
  pTVar4 = MakeArrayView<FMassEntityHandle>(&local_f8,local_3b0,2);
  TArrayView<FMassEntityHandle_const_,int>::
  TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
            (&local_48,pTVar4);
  local_440 = local_508.ArrayNum;
  local_438 = local_508.ArrayNum / 2 + -2;
  local_43c = local_508.ArrayNum;
  local_4f0 = local_508.ArrayNum / 2 + 2;
  local_4d8 = (uint)(-1 < local_4f0);
  local_4dc = (uint)(local_4f0 < local_508.ArrayNum);
  if (-1 >= local_4f0 || local_4f0 >= local_508.ArrayNum) {
    local_3a8 = 0;
    local_3a4 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_540 = (longlong)local_508.ArrayNum;
    local_548 = (longlong)local_4f0;
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
  local_3a0 = (FMassEntityHandle *)local_508.AllocatorInstance.Data;
  local_398 = (FMassEntityHandle *)local_508.AllocatorInstance.Data;
  local_390 = (FMassEntityHandle *)(local_508.AllocatorInstance.Data + (longlong)local_4f0 * 8);
  local_388 = local_390;
  pTVar4 = MakeArrayView<FMassEntityHandle>(&local_e8,local_390,local_438);
  TArrayView<FMassEntityHandle_const_,int>::
  TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
            (&local_38,pTVar4);
  piVar5 = std::initializer_list<TArrayView<FMassEntityHandle_const_,int>_>::
           initializer_list<TArrayView<FMassEntityHandle_const_,int>_>
                     (&local_d8,&local_58,&local_28);
  piVar9 = &local_148;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&piVar9->_First = *(undefined1 *)&piVar5->_First;
    piVar5 = (initializer_list<TArrayView<FMassEntityHandle_const_,int>_> *)
             ((longlong)&piVar5->_First + 1);
    piVar9 = (initializer_list<TArrayView<FMassEntityHandle_const_,int>_> *)
             ((longlong)&piVar9->_First + 1);
  }
  TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>::
  TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>
            (&local_518,&local_148);
  local_4d0 = 1;
  local_4d4 = (uint)(0 < local_518.ArrayNum);
  if (local_4d4 == 0) {
    local_380 = 0;
    local_37c = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_540 = (longlong)local_518.ArrayNum;
    local_548 = 0;
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
  local_378 = local_518.AllocatorInstance.Data;
  local_370 = local_518.AllocatorInstance.Data;
  local_368 = local_518.AllocatorInstance.Data;
  FVar7.Data = local_518.AllocatorInstance.Data;
  pTVar10 = &local_138;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(FScriptContainerElement *)&pTVar10->DataPtr = *FVar7.Data;
    FVar7.Data = FVar7.Data + 1;
    pTVar10 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar10->DataPtr + 1);
  }
  FEntityCollection::AppendHandles(&local_470,&local_138);
  local_360 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_536 = FEntityCollection::IsEmpty(&local_470);
  ::FString::FString(&local_160,"(NOT) Collection is empty");
  bVar2 = FAutomationTestBase::TestFalse(local_360,&local_160,local_536);
  local_535 = !bVar2;
  local_4cc = (uint)(byte)local_535;
  ::FString::~FString(&local_160);
  if (local_535 == '\0') {
    local_358 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_533 = FEntityCollection::IsUpToDate(&local_470);
    ::FString::FString(&local_200,"(NOT) Collection is up-to-date");
    bVar2 = FAutomationTestBase::TestFalse(local_358,&local_200,local_533);
    local_532 = !bVar2;
    local_4c8 = (uint)(byte)local_532;
    ::FString::~FString(&local_200);
    if (local_532 == '\0') {
      local_328 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_4c0 = 1;
      local_4c4 = (uint)(0 < local_518.ArrayNum);
      if (local_4c4 == 0) {
        local_350 = 0;
        local_34c = 0;
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_540 = (longlong)local_518.ArrayNum;
        local_548 = 0;
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
      local_348 = local_518.AllocatorInstance.Data;
      local_340 = local_518.AllocatorInstance.Data;
      local_338 = local_518.AllocatorInstance.Data;
      local_430 = *(int *)(local_518.AllocatorInstance.Data + 8);
      local_40c = local_430;
      local_330 = FEntityCollection::GetEntityHandlesView(&local_470,&local_c8);
      local_434 = local_330->ArrayNum;
      local_42c = local_434;
      ::FString::FString(&local_1f0,"Collection\'s number of entity handles from first slice");
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_1f0,local_42c,local_430,local_328);
      local_530 = !bVar2;
      local_4bc = (uint)(byte)local_530;
      ::FString::~FString(&local_1f0);
      if (local_530 == '\0') {
        local_318 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_320 = FEntityCollection::GetCachedPerArchetypeCollections(&local_470,&local_b8);
        local_428 = local_320->ArrayNum;
        local_424 = local_428;
        ::FString::FString(&local_1e0,"Collection\'s number of cached archetype collections");
        bVar2 = FTestHelpers::TestEqual<int,int>(&local_1e0,local_424,0,local_318);
        local_52e = !bVar2;
        local_4b8 = (uint)(byte)local_52e;
        ::FString::~FString(&local_1e0);
        if (local_52e == '\0') {
          local_310 = *(FMassEntityManager **)&this->field_0x28;
          local_308 = FEntityCollection::GetUpToDatePerArchetypeCollections
                                (&local_470,&local_a8,local_310);
          local_4e8 = local_308->ArrayNum;
          local_420 = local_4e8;
          local_300 = FAITestBase::GetTestRunner((FAITestBase *)this);
          if ((local_4e8 < 1) || (3 < local_4e8)) {
            local_538 = false;
          }
          else {
            local_538 = true;
          }
          ::FString::FString(&local_1d0,
                             "Collection\'s number of updated archetype collections from first slice"
                            );
          bVar2 = FAutomationTestBase::TestTrue(local_300,&local_1d0,local_538);
          local_52c = !bVar2;
          local_4b4 = (uint)(byte)local_52c;
          ::FString::~FString(&local_1d0);
          if (local_52c == '\0') {
            local_2f8 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_52a = FEntityCollection::IsUpToDate(&local_470);
            ::FString::FString(&local_1c0,
                               "Collection is up-to-date after updating archetype collections");
            bVar2 = FAutomationTestBase::TestTrue(local_2f8,&local_1c0,local_52a);
            local_529 = !bVar2;
            local_4b0 = (uint)(byte)local_529;
            ::FString::~FString(&local_1c0);
            if (local_529 == '\0') {
              local_4a8 = 1;
              local_4ac = (uint)(1 < local_518.ArrayNum);
              if (local_4ac == 0) {
                local_2f0 = 0;
                local_2ec = 0;
                Core::Private::FormatStringSan::
                AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
                local_540 = (longlong)local_518.ArrayNum;
                local_548 = 1;
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
              local_2e8 = local_518.AllocatorInstance.Data;
              local_2e0 = local_518.AllocatorInstance.Data;
              local_2d8 = local_518.AllocatorInstance.Data + 0x10;
              pFVar8 = local_2d8;
              pTVar10 = &local_128;
              for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
                *(FScriptContainerElement *)&pTVar10->DataPtr = *pFVar8;
                pFVar8 = pFVar8 + 1;
                pTVar10 = (TArrayView<FMassEntityHandle_const_,int> *)
                          ((longlong)&pTVar10->DataPtr + 1);
              }
              FEntityCollection::AppendHandles(&local_470,&local_128);
              local_2d0 = FAITestBase::GetTestRunner((FAITestBase *)this);
              local_527 = FEntityCollection::IsUpToDate(&local_470);
              ::FString::FString(&local_1b0,"(NOT) Two-slice collection is up-to-date");
              bVar2 = FAutomationTestBase::TestFalse(local_2d0,&local_1b0,local_527);
              local_526 = !bVar2;
              local_4a4 = (uint)(byte)local_526;
              ::FString::~FString(&local_1b0);
              if (local_526 == '\0') {
                local_280 = FAITestBase::GetTestRunner((FAITestBase *)this);
                local_49c = 1;
                local_4a0 = (uint)(0 < local_518.ArrayNum);
                if (local_4a0 == 0) {
                  local_2c8 = 0;
                  local_2c4 = 0;
                  Core::Private::FormatStringSan::
                  AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
                  local_540 = (longlong)local_518.ArrayNum;
                  local_548 = 0;
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
                local_2c0 = local_518.AllocatorInstance.Data;
                local_2b8 = local_518.AllocatorInstance.Data;
                local_2b0 = local_518.AllocatorInstance.Data;
                local_418 = *(int *)(local_518.AllocatorInstance.Data + 8);
                local_494 = 1;
                local_498 = (uint)(1 < local_518.ArrayNum);
                if (local_498 == 0) {
                  local_2a8 = 0;
                  local_2a4 = 0;
                  Core::Private::FormatStringSan::
                  AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
                  local_540 = (longlong)local_518.ArrayNum;
                  local_548 = 1;
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
                local_2a0 = local_518.AllocatorInstance.Data;
                local_298 = local_518.AllocatorInstance.Data;
                local_290 = local_518.AllocatorInstance.Data + 0x10;
                local_41c = *(int *)(local_518.AllocatorInstance.Data + 0x18);
                local_410 = local_418 + local_41c;
                local_288 = FEntityCollection::GetEntityHandlesView(&local_470,&local_98);
                local_414 = local_288->ArrayNum;
                local_3e0 = local_414;
                ::FString::FString(&local_1a0,"Two-slice collection\'s number of entities");
                bVar2 = FTestHelpers::TestEqual<int,int>(&local_1a0,local_3e0,local_410,local_280);
                local_524 = !bVar2;
                local_490 = (uint)(byte)local_524;
                ::FString::~FString(&local_1a0);
                if (local_524 == '\0') {
                  local_278 = *(FMassEntityManager **)&this->field_0x28;
                  local_270 = FEntityCollection::GetUpToDatePerArchetypeCollections
                                        (&local_470,&local_88,local_278);
                  local_408 = local_270->ArrayNum;
                  local_404 = local_408;
                  local_268 = FAITestBase::GetTestRunner((FAITestBase *)this);
                  local_537 = local_4e8 <= local_404;
                  ::FString::FString(&local_190,
                                     "Collection\'s number of updated archetype collections from two slices"
                                    );
                  bVar2 = FAutomationTestBase::TestTrue(local_268,&local_190,local_537);
                  local_522 = !bVar2;
                  local_48c = (uint)(byte)local_522;
                  ::FString::~FString(&local_190);
                  if (local_522 == '\0') {
                    local_484 = 1;
                    local_488 = (uint)(2 < local_518.ArrayNum);
                    if (local_488 == 0) {
                      local_260 = 0;
                      local_25c = 0;
                      Core::Private::FormatStringSan::
                      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
                      local_540 = (longlong)local_518.ArrayNum;
                      local_548 = 2;
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
                    local_258 = local_518.AllocatorInstance.Data;
                    local_250 = local_518.AllocatorInstance.Data;
                    local_248 = local_518.AllocatorInstance.Data + 0x20;
                    pFVar8 = local_248;
                    pTVar10 = &local_118;
                    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
                      *(FScriptContainerElement *)&pTVar10->DataPtr = *pFVar8;
                      pFVar8 = pFVar8 + 1;
                      pTVar10 = (TArrayView<FMassEntityHandle_const_,int> *)
                                ((longlong)&pTVar10->DataPtr + 1);
                    }
                    FEntityCollection::AppendHandles(&local_470,&local_118);
                    local_238 = FAITestBase::GetTestRunner((FAITestBase *)this);
                    local_400 = local_508.ArrayNum;
                    local_3f8 = local_508.ArrayNum;
                    local_240 = FEntityCollection::GetEntityHandlesView(&local_470,&local_78);
                    local_3fc = local_240->ArrayNum;
                    local_3f4 = local_3fc;
                    ::FString::FString(&local_180,"Two-slice collection\'s number of entities");
                    bVar2 = FTestHelpers::TestEqual<int,int>
                                      (&local_180,local_3f4,local_3f8,local_238);
                    local_520 = !bVar2;
                    local_480 = (uint)(byte)local_520;
                    ::FString::~FString(&local_180);
                    if (local_520 == '\0') {
                      local_230 = *(FMassEntityManager **)&this->field_0x28;
                      local_228 = FEntityCollection::GetUpToDatePerArchetypeCollections
                                            (&local_470,&local_68,local_230);
                      local_3f0 = local_228->ArrayNum;
                      local_3ec = local_3f0;
                      local_220 = FAITestBase::GetTestRunner((FAITestBase *)this);
                      ::FString::FString(&local_170,
                                         "Collection\'s number of updated archetype collections from all entities"
                                        );
                      bVar2 = FTestHelpers::TestEqual<int,int>(&local_170,local_3ec,3,local_220);
                      local_51e = !bVar2;
                      local_47c = (uint)(byte)local_51e;
                      ::FString::~FString(&local_170);
                      if (local_51e == '\0') {
                        local_51c = 1;
                        TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>
                        ::
                        ~TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>
                                  (&local_518);
                        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_508);
                        FEntityCollection::~FEntityCollection(&local_470);
                        local_534 = local_51c;
                      }
                      else {
                        AITestSuite::ConditionallyBreakOnTestFail();
                        local_51d = 0;
                        TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>
                        ::
                        ~TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>
                                  (&local_518);
                        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_508);
                        FEntityCollection::~FEntityCollection(&local_470);
                        local_534 = local_51d;
                      }
                    }
                    else {
                      AITestSuite::ConditionallyBreakOnTestFail();
                      local_51f = 0;
                      TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>::
                      ~TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>
                                (&local_518);
                      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_508);
                      FEntityCollection::~FEntityCollection(&local_470);
                      local_534 = local_51f;
                    }
                  }
                  else {
                    AITestSuite::ConditionallyBreakOnTestFail();
                    local_521 = 0;
                    TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>::
                    ~TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>
                              (&local_518);
                    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_508);
                    FEntityCollection::~FEntityCollection(&local_470);
                    local_534 = local_521;
                  }
                }
                else {
                  AITestSuite::ConditionallyBreakOnTestFail();
                  local_523 = 0;
                  TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>::
                  ~TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>
                            (&local_518);
                  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_508);
                  FEntityCollection::~FEntityCollection(&local_470);
                  local_534 = local_523;
                }
              }
              else {
                AITestSuite::ConditionallyBreakOnTestFail();
                local_525 = 0;
                TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>::
                ~TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>
                          (&local_518);
                TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_508);
                FEntityCollection::~FEntityCollection(&local_470);
                local_534 = local_525;
              }
            }
            else {
              AITestSuite::ConditionallyBreakOnTestFail();
              local_528 = 0;
              TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>::
              ~TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>
                        (&local_518);
              TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
              ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_508);
              FEntityCollection::~FEntityCollection(&local_470);
              local_534 = local_528;
            }
          }
          else {
            AITestSuite::ConditionallyBreakOnTestFail();
            local_52b = 0;
            TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>::
            ~TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>
                      (&local_518);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_508);
            FEntityCollection::~FEntityCollection(&local_470);
            local_534 = local_52b;
          }
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          local_52d = 0;
          TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>::
          ~TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>(&local_518);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_508);
          FEntityCollection::~FEntityCollection(&local_470);
          local_534 = local_52d;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        local_52f = 0;
        TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>::
        ~TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>(&local_518);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_508);
        FEntityCollection::~FEntityCollection(&local_470);
        local_534 = local_52f;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_531 = 0;
      TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>::
      ~TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>(&local_518);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_508);
      FEntityCollection::~FEntityCollection(&local_470);
      local_534 = local_531;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_534 = 0;
    TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>::
    ~TArray<TArrayView<FMassEntityHandle_const_,int>,TSizedDefaultAllocator<32>_>(&local_518);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_508);
    FEntityCollection::~FEntityCollection(&local_470);
  }
  return (bool)local_534;
}

