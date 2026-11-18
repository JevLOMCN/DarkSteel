// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147128a10

/* WARNING: Removing unreachable block (ram,0x0001471296f3) */
/* WARNING: Removing unreachable block (ram,0x000147129091) */
/* WARNING: Removing unreachable block (ram,0x000147128a6a) */
/* WARNING: Removing unreachable block (ram,0x000147128d7c) */
/* WARNING: Removing unreachable block (ram,0x0001471293bf) */
/* WARNING: Removing unreachable block (ram,0x000147129a27) */

bool __thiscall
FMassArchetypeEntityCollectionTest::FArchetypeEntityCollection_CreateWithDuplicates::InstantTest
          (FArchetypeEntityCollection_CreateWithDuplicates *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<FMassEntityHandle_const_,int> *pTVar4;
  FArchetypeEntityRange *pFVar5;
  longlong lVar6;
  TArrayView<FMassEntityHandle_const_,int> *pTVar7;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_568;
  undefined1 local_558;
  char local_557;
  undefined1 local_556;
  undefined1 local_555;
  char local_554;
  uint local_550;
  undefined4 local_54c;
  int local_548;
  uint local_544;
  undefined4 local_540;
  int local_53c;
  uint local_538;
  undefined4 local_534;
  int local_530;
  uint local_52c;
  undefined4 local_528;
  int local_524;
  uint local_520;
  undefined4 local_51c;
  int local_518;
  undefined4 local_514;
  int local_510;
  uint local_50c;
  uint local_508;
  uint local_504;
  FScriptContainerElement *local_500;
  FScriptContainerElement *local_4f8;
  FScriptContainerElement *local_4f0;
  FScriptContainerElement *local_4e8;
  FScriptContainerElement *local_4e0;
  FScriptContainerElement *local_4d8;
  int local_4d0;
  int local_4cc;
  ulonglong *local_4c8;
  undefined8 *local_4c0;
  undefined8 *local_4b8;
  longlong *local_4b0;
  longlong *local_4a8;
  longlong *local_4a0;
  int local_498;
  int local_494;
  int local_490;
  int local_48c;
  int local_488;
  int local_484;
  undefined4 local_480;
  undefined4 local_47c;
  FScriptContainerElement *local_478;
  FScriptContainerElement *local_470;
  FScriptContainerElement *local_468;
  FScriptContainerElement *local_460;
  FScriptContainerElement *local_458;
  FScriptContainerElement *local_450;
  FScriptContainerElement *local_448;
  FScriptContainerElement *local_440;
  FScriptContainerElement *local_438;
  undefined4 local_430;
  undefined4 local_42c;
  FScriptContainerElement *local_428;
  FScriptContainerElement *local_420;
  FScriptContainerElement *local_418;
  longlong local_410;
  longlong local_408;
  FScriptContainerElement *local_400;
  FScriptContainerElement *local_3f8;
  FScriptContainerElement *local_3f0;
  undefined8 *local_3e8;
  undefined4 local_3e0;
  undefined4 local_3dc;
  FScriptContainerElement *local_3d8;
  FScriptContainerElement *local_3d0;
  FScriptContainerElement *local_3c8;
  FScriptContainerElement *local_3c0;
  FScriptContainerElement *local_3b8;
  FScriptContainerElement *local_3b0;
  FScriptContainerElement *local_3a8;
  FScriptContainerElement *local_3a0;
  FScriptContainerElement *local_398;
  undefined4 local_390;
  undefined4 local_38c;
  FScriptContainerElement *local_388;
  FScriptContainerElement *local_380;
  FScriptContainerElement *local_378;
  longlong local_370;
  longlong local_368;
  FScriptContainerElement *local_360;
  FScriptContainerElement *local_358;
  FScriptContainerElement *local_350;
  undefined8 *local_348;
  undefined4 local_340;
  undefined4 local_33c;
  FScriptContainerElement *local_338;
  FScriptContainerElement *local_330;
  FScriptContainerElement *local_328;
  FScriptContainerElement *local_320;
  FScriptContainerElement *local_318;
  FScriptContainerElement *local_310;
  FScriptContainerElement *local_308;
  FScriptContainerElement *local_300;
  FScriptContainerElement *local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  FScriptContainerElement *local_2e8;
  FScriptContainerElement *local_2e0;
  FScriptContainerElement *local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  FScriptContainerElement *local_2c0;
  FScriptContainerElement *local_2b8;
  FScriptContainerElement *local_2b0;
  undefined8 *local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  longlong local_298;
  longlong local_290;
  FScriptContainerElement *local_288;
  FScriptContainerElement *local_280;
  FScriptContainerElement *local_278;
  FScriptContainerElement *local_270;
  FScriptContainerElement *local_268;
  FScriptContainerElement *local_260;
  FScriptContainerElement *local_258;
  undefined4 local_250;
  undefined4 local_24c;
  FScriptContainerElement *local_248;
  FScriptContainerElement *local_240;
  FScriptContainerElement *local_238;
  longlong local_230;
  longlong local_228;
  FScriptContainerElement *local_220;
  FScriptContainerElement *local_218;
  FScriptContainerElement *local_210;
  undefined8 *local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  longlong local_1f8;
  longlong local_1f0;
  FScriptContainerElement *local_1e8;
  FScriptContainerElement *local_1e0;
  FScriptContainerElement *local_1d8;
  FScriptContainerElement *local_1d0;
  FScriptContainerElement *local_1c8;
  FScriptContainerElement *local_1c0;
  FScriptContainerElement *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  FScriptContainerElement *local_1a8;
  FScriptContainerElement *local_1a0;
  FScriptContainerElement *local_198;
  longlong local_190;
  longlong local_188;
  FScriptContainerElement *local_180;
  FScriptContainerElement *local_178;
  FScriptContainerElement *local_170;
  undefined8 *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong local_158;
  longlong local_150;
  FScriptContainerElement *local_148;
  FScriptContainerElement *local_140;
  FScriptContainerElement *local_138;
  FScriptContainerElement *local_130;
  FScriptContainerElement *local_128;
  FScriptContainerElement *local_120;
  FScriptContainerElement *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  FScriptContainerElement *local_108;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  longlong local_f0;
  longlong local_e8;
  FScriptContainerElement *local_e0;
  FScriptContainerElement *local_d8;
  FScriptContainerElement *local_d0;
  undefined8 *local_c8;
  TArrayView<FMassEntityHandle_const_,int> *local_c0;
  FAutomationTestBase *local_b8;
  FAutomationTestBase *local_b0;
  int local_a8;
  FString local_a0;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_90;
  FString local_80;
  TArrayView<FMassEntityHandle_const_,int> local_68;
  FMassArchetypeEntityCollection local_58;
  TArrayView<FMassEntityHandle_const_,int> local_30 [2];
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_568.AllocatorInstance);
  local_568.ArrayNum = 0;
  local_568.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_568.AllocatorInstance);
  local_4c8 = (ulonglong *)&this->field_0x90;
  local_54c = 1;
  local_550 = (uint)(0 < *(int *)&this->field_0x98);
  if (local_550 == 0) {
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
  local_500 = (FScriptContainerElement *)*local_4c8;
  local_460 = local_568.AllocatorInstance.Data;
  local_458 = local_568.AllocatorInstance.Data;
  local_450 = local_568.AllocatorInstance.Data;
  local_478 = local_500;
  local_470 = local_500;
  local_468 = local_500;
  if (local_568.AllocatorInstance.Data <= local_500) {
    local_448 = local_568.AllocatorInstance.Data;
    local_440 = local_568.AllocatorInstance.Data;
    local_438 = local_568.AllocatorInstance.Data;
    if (local_500 < local_568.AllocatorInstance.Data + (longlong)local_568.ArrayMax * 8) {
      local_430 = 0;
      local_42c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_410 = (longlong)local_568.ArrayNum;
      local_408 = (longlong)local_568.ArrayMax;
      local_428 = local_568.AllocatorInstance.Data;
      local_420 = local_568.AllocatorInstance.Data;
      local_418 = local_568.AllocatorInstance.Data;
      local_400 = local_568.AllocatorInstance.Data;
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
  if (local_568.ArrayNum == local_568.ArrayMax) {
    local_568.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_568.AllocatorInstance,&local_568.ArrayMax);
  }
  local_548 = local_568.ArrayNum;
  local_3f8 = local_568.AllocatorInstance.Data;
  local_3f0 = local_568.AllocatorInstance.Data + (longlong)local_568.ArrayNum * 8;
  local_568.ArrayNum = local_568.ArrayNum + 1;
  local_3e8 = ::operator_new(8,local_3f0);
  *local_3e8 = *(undefined8 *)local_500;
  local_a8 = local_548;
  local_4c0 = (undefined8 *)&this->field_0x90;
  local_540 = 1;
  local_544 = (uint)(0 < *(int *)&this->field_0x98);
  if (local_544 == 0) {
    local_3e0 = 0;
    local_3dc = 0;
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
  local_4f8 = (FScriptContainerElement *)*local_4c0;
  local_3c0 = local_568.AllocatorInstance.Data;
  local_3b8 = local_568.AllocatorInstance.Data;
  local_3b0 = local_568.AllocatorInstance.Data;
  local_3d8 = local_4f8;
  local_3d0 = local_4f8;
  local_3c8 = local_4f8;
  if (local_568.AllocatorInstance.Data <= local_4f8) {
    local_3a8 = local_568.AllocatorInstance.Data;
    local_3a0 = local_568.AllocatorInstance.Data;
    local_398 = local_568.AllocatorInstance.Data;
    if (local_4f8 < local_568.AllocatorInstance.Data + (longlong)local_568.ArrayMax * 8) {
      local_390 = 0;
      local_38c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_370 = (longlong)local_568.ArrayNum;
      local_368 = (longlong)local_568.ArrayMax;
      local_388 = local_568.AllocatorInstance.Data;
      local_380 = local_568.AllocatorInstance.Data;
      local_378 = local_568.AllocatorInstance.Data;
      local_360 = local_568.AllocatorInstance.Data;
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
  if (local_568.ArrayNum == local_568.ArrayMax) {
    local_568.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_568.AllocatorInstance,&local_568.ArrayMax);
  }
  local_53c = local_568.ArrayNum;
  local_358 = local_568.AllocatorInstance.Data;
  local_350 = local_568.AllocatorInstance.Data + (longlong)local_568.ArrayNum * 8;
  local_568.ArrayNum = local_568.ArrayNum + 1;
  local_348 = ::operator_new(8,local_350);
  *local_348 = *(undefined8 *)local_4f8;
  local_494 = local_53c;
  local_4b8 = (undefined8 *)&this->field_0x90;
  local_534 = 1;
  local_538 = (uint)(0 < *(int *)&this->field_0x98);
  if (local_538 == 0) {
    local_340 = 0;
    local_33c = 0;
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
  local_4f0 = (FScriptContainerElement *)*local_4b8;
  local_320 = local_568.AllocatorInstance.Data;
  local_318 = local_568.AllocatorInstance.Data;
  local_310 = local_568.AllocatorInstance.Data;
  local_338 = local_4f0;
  local_330 = local_4f0;
  local_328 = local_4f0;
  if (local_568.AllocatorInstance.Data <= local_4f0) {
    local_308 = local_568.AllocatorInstance.Data;
    local_300 = local_568.AllocatorInstance.Data;
    local_2f8 = local_568.AllocatorInstance.Data;
    if (local_4f0 < local_568.AllocatorInstance.Data + (longlong)local_568.ArrayMax * 8) {
      local_2f0 = 0;
      local_2ec = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_2d0 = (longlong)local_568.ArrayNum;
      local_2c8 = (longlong)local_568.ArrayMax;
      local_2e8 = local_568.AllocatorInstance.Data;
      local_2e0 = local_568.AllocatorInstance.Data;
      local_2d8 = local_568.AllocatorInstance.Data;
      local_2c0 = local_568.AllocatorInstance.Data;
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
  if (local_568.ArrayNum == local_568.ArrayMax) {
    local_568.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_568.AllocatorInstance,&local_568.ArrayMax);
  }
  local_530 = local_568.ArrayNum;
  local_2b8 = local_568.AllocatorInstance.Data;
  local_2b0 = local_568.AllocatorInstance.Data + (longlong)local_568.ArrayNum * 8;
  local_568.ArrayNum = local_568.ArrayNum + 1;
  local_2a8 = ::operator_new(8,local_2b0);
  *local_2a8 = *(undefined8 *)local_4f0;
  local_490 = local_530;
  local_4b0 = (longlong *)&this->field_0x90;
  local_528 = 1;
  local_52c = (uint)(1 < *(int *)&this->field_0x98);
  if (local_52c == 0) {
    local_2a0 = 0;
    local_29c = 0;
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
  local_298 = *local_4b0;
  local_4e8 = (FScriptContainerElement *)(local_298 + 8);
  local_280 = local_568.AllocatorInstance.Data;
  local_278 = local_568.AllocatorInstance.Data;
  local_270 = local_568.AllocatorInstance.Data;
  local_290 = local_298;
  local_288 = local_4e8;
  if (local_568.AllocatorInstance.Data <= local_4e8) {
    local_268 = local_568.AllocatorInstance.Data;
    local_260 = local_568.AllocatorInstance.Data;
    local_258 = local_568.AllocatorInstance.Data;
    if (local_4e8 < local_568.AllocatorInstance.Data + (longlong)local_568.ArrayMax * 8) {
      local_250 = 0;
      local_24c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_230 = (longlong)local_568.ArrayNum;
      local_228 = (longlong)local_568.ArrayMax;
      local_248 = local_568.AllocatorInstance.Data;
      local_240 = local_568.AllocatorInstance.Data;
      local_238 = local_568.AllocatorInstance.Data;
      local_220 = local_568.AllocatorInstance.Data;
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
  if (local_568.ArrayNum == local_568.ArrayMax) {
    local_568.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_568.AllocatorInstance,&local_568.ArrayMax);
  }
  local_524 = local_568.ArrayNum;
  local_218 = local_568.AllocatorInstance.Data;
  local_210 = local_568.AllocatorInstance.Data + (longlong)local_568.ArrayNum * 8;
  local_568.ArrayNum = local_568.ArrayNum + 1;
  local_208 = ::operator_new(8,local_210);
  *local_208 = *(undefined8 *)local_4e8;
  local_48c = local_524;
  local_4a8 = (longlong *)&this->field_0x90;
  local_51c = 1;
  local_520 = (uint)(2 < *(int *)&this->field_0x98);
  if (local_520 == 0) {
    local_200 = 0;
    local_1fc = 0;
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
  local_1f8 = *local_4a8;
  local_4e0 = (FScriptContainerElement *)(local_1f8 + 0x10);
  local_1e0 = local_568.AllocatorInstance.Data;
  local_1d8 = local_568.AllocatorInstance.Data;
  local_1d0 = local_568.AllocatorInstance.Data;
  local_1f0 = local_1f8;
  local_1e8 = local_4e0;
  if (local_568.AllocatorInstance.Data <= local_4e0) {
    local_1c8 = local_568.AllocatorInstance.Data;
    local_1c0 = local_568.AllocatorInstance.Data;
    local_1b8 = local_568.AllocatorInstance.Data;
    if (local_4e0 < local_568.AllocatorInstance.Data + (longlong)local_568.ArrayMax * 8) {
      local_1b0 = 0;
      local_1ac = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_190 = (longlong)local_568.ArrayNum;
      local_188 = (longlong)local_568.ArrayMax;
      local_1a8 = local_568.AllocatorInstance.Data;
      local_1a0 = local_568.AllocatorInstance.Data;
      local_198 = local_568.AllocatorInstance.Data;
      local_180 = local_568.AllocatorInstance.Data;
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
  if (local_568.ArrayNum == local_568.ArrayMax) {
    local_568.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_568.AllocatorInstance,&local_568.ArrayMax);
  }
  local_518 = local_568.ArrayNum;
  local_178 = local_568.AllocatorInstance.Data;
  local_170 = local_568.AllocatorInstance.Data + (longlong)local_568.ArrayNum * 8;
  local_568.ArrayNum = local_568.ArrayNum + 1;
  local_168 = ::operator_new(8,local_170);
  *local_168 = *(undefined8 *)local_4e0;
  local_488 = local_518;
  local_4a0 = (longlong *)&this->field_0x90;
  local_514 = 1;
  local_504 = (uint)(2 < *(int *)&this->field_0x98);
  if (local_504 == 0) {
    local_160 = 0;
    local_15c = 0;
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
  local_158 = *local_4a0;
  local_4d8 = (FScriptContainerElement *)(local_158 + 0x10);
  local_140 = local_568.AllocatorInstance.Data;
  local_138 = local_568.AllocatorInstance.Data;
  local_130 = local_568.AllocatorInstance.Data;
  local_150 = local_158;
  local_148 = local_4d8;
  if (local_568.AllocatorInstance.Data <= local_4d8) {
    local_128 = local_568.AllocatorInstance.Data;
    local_120 = local_568.AllocatorInstance.Data;
    local_118 = local_568.AllocatorInstance.Data;
    if (local_4d8 < local_568.AllocatorInstance.Data + (longlong)local_568.ArrayMax * 8) {
      local_110 = 0;
      local_10c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_f0 = (longlong)local_568.ArrayNum;
      local_e8 = (longlong)local_568.ArrayMax;
      local_108 = local_568.AllocatorInstance.Data;
      local_100 = local_568.AllocatorInstance.Data;
      local_f8 = local_568.AllocatorInstance.Data;
      local_e0 = local_568.AllocatorInstance.Data;
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
  if (local_568.ArrayNum == local_568.ArrayMax) {
    local_568.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_568.AllocatorInstance,&local_568.ArrayMax);
  }
  local_510 = local_568.ArrayNum;
  local_d8 = local_568.AllocatorInstance.Data;
  local_d0 = local_568.AllocatorInstance.Data + (longlong)local_568.ArrayNum * 8;
  local_568.ArrayNum = local_568.ArrayNum + 1;
  local_c8 = ::operator_new(8,local_d0);
  *local_c8 = *(undefined8 *)local_4d8;
  local_484 = local_510;
  local_c0 = local_30;
  pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_c0,&local_568);
  pTVar7 = &local_68;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    pTVar7 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar7->DataPtr + 1);
  }
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
            (&local_58,(FMassArchetypeHandle *)&this->field_0x50,&local_68,FoldDuplicates);
  FMassArchetypeEntityCollection::GetRanges(&local_58,&local_90);
  local_b8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_498 = local_90.ArrayNum;
  local_4d0 = local_90.ArrayNum;
  ::FString::FString(&local_a0,"The result should have a single subchunk");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_a0,local_4d0,1,local_b8);
  local_554 = !bVar2;
  local_50c = (uint)(byte)local_554;
  ::FString::~FString(&local_a0);
  if (local_554 == '\0') {
    local_b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
    pFVar5 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
             operator[](&local_90,0);
    local_4cc = pFVar5->Length;
    ::FString::FString(&local_80,"The resulting subchunk should be of length 3");
    bVar2 = FTestHelpers::TestEqual<int,int>(&local_80,local_4cc,3,local_b0);
    local_557 = !bVar2;
    local_508 = (uint)(byte)local_557;
    ::FString::~FString(&local_80);
    if (local_557 == '\0') {
      local_555 = 1;
      FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_58);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_568);
      local_558 = local_555;
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_556 = 0;
      FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_58);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_568);
      local_558 = local_556;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    local_558 = 0;
    FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_58);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_568);
  }
  return (bool)local_558;
}

