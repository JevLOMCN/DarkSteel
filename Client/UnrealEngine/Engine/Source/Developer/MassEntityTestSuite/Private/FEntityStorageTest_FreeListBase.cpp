// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147156fa0

/* WARNING: Removing unreachable block (ram,0x000147157fda) */
/* WARNING: Removing unreachable block (ram,0x000147157e1b) */
/* WARNING: Removing unreachable block (ram,0x000147157aa3) */
/* WARNING: Removing unreachable block (ram,0x0001471578fd) */
/* WARNING: Removing unreachable block (ram,0x00014715788a) */
/* WARNING: Removing unreachable block (ram,0x000147157023) */
/* WARNING: Removing unreachable block (ram,0x00014715719e) */
/* WARNING: Removing unreachable block (ram,0x0001471582d2) */
/* WARNING: Removing unreachable block (ram,0x00014715832f) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityStorageTest::FEntityStorageTest_FreeListBase::InstantTest
          (FEntityStorageTest_FreeListBase *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<FMassEntityHandle_const_,int> *pTVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 *puVar7;
  int local_548;
  int local_544;
  int local_540;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_530;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_520;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_510;
  uint local_500;
  uint local_4f8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_4f0;
  uint local_4e0;
  uint local_4dc;
  uint local_4d8;
  uint local_4d4;
  int local_4d0;
  uint local_4cc;
  uint local_4c8;
  uint local_4c4;
  undefined4 local_4c0;
  uint local_4bc;
  undefined4 local_4b8;
  int local_4b4;
  uint local_4b0;
  uint local_4ac;
  uint local_4a8;
  undefined4 local_4a4;
  uint local_4a0;
  undefined4 local_49c;
  uint local_498;
  uint local_494;
  uint local_490;
  uint local_48c;
  uint local_488;
  undefined4 local_484;
  uint local_480;
  uint local_47c;
  uint local_478;
  uint local_474;
  uint local_470;
  uint local_46c;
  uint local_468;
  uint local_464;
  uint local_460;
  uint local_45c;
  uint local_458;
  uint local_454;
  undefined4 local_450;
  uint local_44c;
  undefined4 local_448;
  FScriptContainerElement *local_440;
  int local_438;
  int local_434;
  int local_430;
  int local_42c;
  int local_428;
  int local_424;
  float local_420;
  int local_41c;
  int local_418;
  int local_414;
  int local_410;
  int local_40c;
  int local_408;
  int local_404;
  int local_400;
  int local_3fc;
  longlong *local_3f8;
  undefined8 *local_3f0;
  longlong *local_3e8;
  longlong *local_3e0;
  longlong *local_3d8;
  longlong *local_3d0;
  longlong *local_3c8;
  int local_3c0;
  int local_3bc;
  int local_3b8;
  int local_3b4;
  TSharedPtr<FMassEntityManager,1> *local_3b0;
  FMassEntityManager *local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  longlong local_398;
  longlong local_390;
  TSharedPtr<FMassEntityManager,1> *local_388;
  FMassEntityManager *local_380;
  undefined4 local_378;
  undefined4 local_374;
  FScriptContainerElement *local_370;
  FScriptContainerElement *local_368;
  FScriptContainerElement *local_360;
  undefined4 local_358;
  undefined4 local_354;
  FScriptContainerElement *local_350;
  FScriptContainerElement *local_348;
  FScriptContainerElement *local_340;
  FScriptContainerElement *local_338;
  FScriptContainerElement *local_330;
  FScriptContainerElement *local_328;
  FScriptContainerElement *local_320;
  FScriptContainerElement *local_318;
  FScriptContainerElement *local_310;
  undefined4 local_308;
  undefined4 local_304;
  FScriptContainerElement *local_300;
  FScriptContainerElement *local_2f8;
  FScriptContainerElement *local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  FScriptContainerElement *local_2d8;
  FScriptContainerElement *local_2d0;
  FScriptContainerElement *local_2c8;
  undefined8 *local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  longlong local_2a8;
  longlong local_2a0;
  TSharedPtr<FMassEntityManager,1> *local_298;
  TArrayView<FMassEntityHandle_const_,int> *local_290;
  FMassEntityManager *local_288;
  undefined4 local_280;
  undefined4 local_27c;
  longlong local_278;
  longlong local_270;
  TSharedPtr<FMassEntityManager,1> *local_268;
  FMassEntityManager *local_260;
  FAutomationTestBase *local_258;
  FAutomationTestBase *local_250;
  undefined4 local_248;
  undefined4 local_244;
  longlong local_240;
  longlong local_238;
  TSharedPtr<FMassEntityManager,1> *local_230;
  FMassEntityManager *local_228;
  undefined4 local_220;
  undefined4 local_21c;
  longlong local_218;
  longlong local_210;
  TSharedPtr<FMassEntityManager,1> *local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  FScriptContainerElement *local_1f8;
  FScriptContainerElement *local_1f0;
  FMassEntityHandle *local_1e8;
  FMassEntityHandle local_1e0;
  FMassEntityManager *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  longlong local_1c0;
  longlong local_1b8;
  TSharedPtr<FMassEntityManager,1> *local_1b0;
  FMassEntityManager *local_1a8;
  FAutomationTestBase *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  FScriptContainerElement *local_190;
  FScriptContainerElement *local_188;
  FScriptContainerElement *local_180;
  undefined4 local_178;
  undefined4 local_174;
  FScriptContainerElement *local_170;
  FScriptContainerElement *local_168;
  FScriptContainerElement *local_160;
  FAutomationTestBase *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  FScriptContainerElement *local_148;
  FScriptContainerElement *local_140;
  FScriptContainerElement *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  FScriptContainerElement *local_128;
  FScriptContainerElement *local_120;
  FScriptContainerElement *local_118;
  FAutomationTestBase *local_110;
  int local_108;
  undefined4 local_100;
  undefined4 local_fc;
  TSharedPtr<FMassEntityManager,1> *local_f8;
  TSharedPtr<FMassEntityManager,1> *local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [16];
  TArrayView<FMassEntityHandle_const_,int> local_88;
  TArrayView<FMassEntityHandle_const_,int> local_78;
  TArrayView<FMassEntityHandle_const_,int> local_68;
  TArrayView<FMassEntityHandle_const_,int> local_58;
  TArrayView<FMassEntityHandle_const_,int> local_48;
  TArrayView<FMassEntityHandle_const_,int> local_38;
  TArrayView<FMassEntityHandle_const_,int> local_28;
  
  local_500 = (uint)(*(int *)&this->field_0x48 * 3) / 2;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_4f0.AllocatorInstance);
  local_4f0.ArrayNum = 0;
  local_4f0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_4f0.AllocatorInstance);
  local_3f0 = (undefined8 *)&this->field_0x28;
  local_450 = 1;
  local_454 = (uint)(0 < *(int *)&this->field_0x30);
  if (local_454 == 0) {
    local_100 = 0;
    local_fc = 0;
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
  local_3b0 = (TSharedPtr<FMassEntityManager,1> *)*local_3f0;
  local_f8 = local_3b0;
  local_f0 = local_3b0;
  local_3a8 = TSharedPtr<FMassEntityManager,1>::operator->(local_3b0);
  FMassEntityManager::BatchReserveEntities(local_3a8,&local_78,local_500,&local_4f0);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_520.AllocatorInstance);
  local_520.ArrayNum = 0;
  local_520.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_520.AllocatorInstance);
  local_3e8 = (longlong *)&this->field_0x28;
  local_448 = 1;
  local_44c = (uint)(1 < *(int *)&this->field_0x30);
  if (local_44c == 0) {
    local_3a0 = 0;
    local_39c = 0;
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
  local_398 = *local_3e8;
  local_388 = (TSharedPtr<FMassEntityManager,1> *)(local_398 + 0x10);
  local_390 = local_398;
  local_380 = TSharedPtr<FMassEntityManager,1>::operator->(local_388);
  FMassEntityManager::BatchReserveEntities(local_380,&local_68,local_500,&local_520);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_530.AllocatorInstance);
  local_530.ArrayNum = 0;
  local_530.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_530.AllocatorInstance);
  local_41c = local_520.ArrayNum;
  local_4f8 = local_520.ArrayNum / 2;
  if ((int)local_4f8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_4f8);
  }
  if (local_530.ArrayMax < (int)local_4f8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_4f8,&local_530.AllocatorInstance,local_530.ArrayNum,&local_530.ArrayMax);
  }
  local_3c0 = local_520.ArrayNum;
  local_544 = local_520.ArrayNum;
  while (local_544 = local_544 + -1, -1 < local_544) {
    local_4dc = (uint)(-1 < local_544);
    local_4e0 = (uint)(local_544 < local_520.ArrayNum);
    if (-1 >= local_544 || local_544 >= local_520.ArrayNum) {
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
    local_370 = local_520.AllocatorInstance.Data;
    local_368 = local_520.AllocatorInstance.Data;
    local_360 = local_520.AllocatorInstance.Data + (longlong)local_544 * 8;
    uVar6 = (int)*(uint *)local_360 >> 0x1f;
    if ((*(uint *)local_360 & 1 ^ uVar6) != uVar6) {
      local_4d4 = (uint)(-1 < local_544);
      local_4d8 = (uint)(local_544 < local_520.ArrayNum);
      if (-1 >= local_544 || local_544 >= local_520.ArrayNum) {
        local_358 = 0;
        local_354 = 0;
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
      local_350 = local_520.AllocatorInstance.Data;
      local_348 = local_520.AllocatorInstance.Data;
      local_440 = local_520.AllocatorInstance.Data + (longlong)local_544 * 8;
      local_338 = local_530.AllocatorInstance.Data;
      local_330 = local_530.AllocatorInstance.Data;
      local_328 = local_530.AllocatorInstance.Data;
      local_340 = local_440;
      if (local_530.AllocatorInstance.Data <= local_440) {
        local_320 = local_530.AllocatorInstance.Data;
        local_318 = local_530.AllocatorInstance.Data;
        local_310 = local_530.AllocatorInstance.Data;
        if (local_440 < local_530.AllocatorInstance.Data + (longlong)local_530.ArrayMax * 8) {
          local_308 = 0;
          local_304 = 0;
          UE::Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          local_2e8 = (longlong)local_530.ArrayNum;
          local_2e0 = (longlong)local_530.ArrayMax;
          local_300 = local_530.AllocatorInstance.Data;
          local_2f8 = local_530.AllocatorInstance.Data;
          local_2f0 = local_530.AllocatorInstance.Data;
          local_2d8 = local_530.AllocatorInstance.Data;
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
      if (local_530.ArrayNum == local_530.ArrayMax) {
        local_530.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_530.AllocatorInstance,&local_530.ArrayMax);
      }
      local_4d0 = local_530.ArrayNum;
      local_2d0 = local_530.AllocatorInstance.Data;
      local_2c8 = local_530.AllocatorInstance.Data + (longlong)local_530.ArrayNum * 8;
      local_530.ArrayNum = local_530.ArrayNum + 1;
      local_2c0 = ::operator_new(8,local_2c8);
      *local_2c0 = *(undefined8 *)local_440;
      local_108 = local_4d0;
      local_4c8 = (uint)(-1 < local_544);
      local_4cc = (uint)(local_544 < local_520.ArrayNum);
      if (-1 >= local_544 || local_544 >= local_520.ArrayNum) {
        local_2b8 = 0;
        local_2b4 = 0;
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
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(&local_520,local_544);
    }
  }
  local_3bc = local_530.ArrayNum;
  local_4b4 = local_530.ArrayNum;
  local_3e0 = (longlong *)&this->field_0x28;
  local_4c0 = 1;
  local_4c4 = (uint)(1 < *(int *)&this->field_0x30);
  if (local_4c4 == 0) {
    local_2b0 = 0;
    local_2ac = 0;
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
  local_2a8 = *local_3e0;
  local_298 = (TSharedPtr<FMassEntityManager,1> *)(local_2a8 + 0x10);
  local_2a0 = local_2a8;
  local_288 = TSharedPtr<FMassEntityManager,1>::operator->(local_298);
  local_290 = &local_58;
  pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_290,&local_530);
  puVar7 = local_98;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    puVar7 = puVar7 + 1;
  }
  puVar7 = local_98;
  pTVar4 = &local_88;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pTVar4->DataPtr = *puVar7;
    puVar7 = puVar7 + 1;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
  }
  FMassEntityManager::BatchDestroyEntities(local_288,&local_88);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Reset(&local_530,0);
  local_3d8 = (longlong *)&this->field_0x28;
  local_4b8 = 1;
  local_4bc = (uint)(1 < *(int *)&this->field_0x30);
  if (local_4bc == 0) {
    local_280 = 0;
    local_27c = 0;
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
  local_278 = *local_3d8;
  local_268 = (TSharedPtr<FMassEntityManager,1> *)(local_278 + 0x10);
  local_270 = local_278;
  local_260 = TSharedPtr<FMassEntityManager,1>::operator->(local_268);
  FMassEntityManager::BatchReserveEntities(local_260,&local_48,local_4b4,&local_530);
  local_258 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_3b8 = local_530.ArrayNum;
  local_438 = local_530.ArrayNum;
  ::FString::FString(&local_e8,
                     "Reserving after removing should produce the expected number of entity handles"
                    );
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_e8,local_438,local_4b4,local_258);
  local_4b0 = (uint)!bVar2;
  ::FString::~FString(&local_e8);
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_530);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_520);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_4f0);
    bVar2 = false;
  }
  else {
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    Append<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_520,&local_530);
    local_250 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_434 = local_4f0.ArrayNum;
    local_42c = local_4f0.ArrayNum;
    local_430 = local_520.ArrayNum;
    local_428 = local_520.ArrayNum;
    ::FString::FString(&local_d8,"Entity handle arrays are expected to be of the same size");
    bVar2 = FTestHelpers::TestEqual<int,int>(&local_d8,local_428,local_42c,local_250);
    local_4ac = (uint)!bVar2;
    ::FString::~FString(&local_d8);
    if (!bVar2) {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_530);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_520);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_4f0);
      bVar2 = false;
    }
    else {
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_530);
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                (&local_510.AllocatorInstance);
      local_510.ArrayNum = 0;
      local_510.ArrayMax =
           TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                     (&local_510.AllocatorInstance);
      local_3d0 = (longlong *)&this->field_0x28;
      local_4a4 = 1;
      local_4a8 = (uint)(2 < *(int *)&this->field_0x30);
      if (local_4a8 == 0) {
        local_248 = 0;
        local_244 = 0;
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
      local_240 = *local_3d0;
      local_230 = (TSharedPtr<FMassEntityManager,1> *)(local_240 + 0x20);
      local_238 = local_240;
      local_228 = TSharedPtr<FMassEntityManager,1>::operator->(local_230);
      FMassEntityManager::BatchReserveEntities(local_228,&local_38,local_500,&local_510);
      local_424 = local_510.ArrayNum;
      local_540 = local_510.ArrayNum;
      while (local_540 = local_540 + -1, -1 < local_540) {
        local_420 = FRandomStream::GetFraction((FRandomStream *)&this->field_0x5c);
        if (__real_3fe0000000000000 <= (double)local_420) {
          local_3c8 = (longlong *)&this->field_0x28;
          local_49c = 1;
          local_4a0 = (uint)(2 < *(int *)&this->field_0x30);
          if (local_4a0 == 0) {
            local_220 = 0;
            local_21c = 0;
            UE::Core::Private::FormatStringSan::
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
          local_218 = *local_3c8;
          local_208 = (TSharedPtr<FMassEntityManager,1> *)(local_218 + 0x20);
          local_210 = local_218;
          local_1d8 = TSharedPtr<FMassEntityManager,1>::operator->(local_208);
          local_494 = (uint)(-1 < local_540);
          local_498 = (uint)(local_540 < local_510.ArrayNum);
          if (-1 >= local_540 || local_540 >= local_510.ArrayNum) {
            local_200 = 0;
            local_1fc = 0;
            UE::Core::Private::FormatStringSan::
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
          local_1f8 = local_510.AllocatorInstance.Data;
          local_1f0 = local_510.AllocatorInstance.Data;
          local_1e8 = (FMassEntityHandle *)
                      (local_510.AllocatorInstance.Data + (longlong)local_540 * 8);
          local_1e0 = *local_1e8;
          FMassEntityManager::ReleaseReservedEntity(local_1d8,local_1e0);
          local_48c = (uint)(-1 < local_540);
          local_490 = (uint)(local_540 < local_510.ArrayNum);
          if (-1 >= local_540 || local_540 >= local_510.ArrayNum) {
            local_1d0 = 0;
            local_1cc = 0;
            UE::Core::Private::FormatStringSan::
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
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (&local_510,local_540);
        }
      }
      local_3f8 = (longlong *)&this->field_0x28;
      local_484 = 1;
      local_488 = (uint)(2 < *(int *)&this->field_0x30);
      if (local_488 == 0) {
        local_1c8 = 0;
        local_1c4 = 0;
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
      local_1c0 = *local_3f8;
      local_1b0 = (TSharedPtr<FMassEntityManager,1> *)(local_1c0 + 0x20);
      local_1b8 = local_1c0;
      local_1a8 = TSharedPtr<FMassEntityManager,1>::operator->(local_1b0);
      local_3b4 = local_510.ArrayNum;
      local_418 = local_500 - local_510.ArrayNum;
      FMassEntityManager::BatchReserveEntities(local_1a8,&local_28,local_418,&local_510);
      local_1a0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_414 = local_510.ArrayNum;
      local_410 = local_510.ArrayNum;
      ::FString::FString(&local_c8,
                         "Total number of entities reserved should be back to initial number");
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_c8,local_410,local_500,local_1a0);
      local_480 = (uint)!bVar2;
      ::FString::~FString(&local_c8);
      if (!bVar2) {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_510);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_520);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_4f0);
        bVar2 = false;
      }
      else {
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Sort(&local_510);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Sort(&local_520);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Sort(&local_4f0);
        for (local_548 = 0; local_40c = local_520.ArrayNum, local_548 < local_520.ArrayNum;
            local_548 = local_548 + 1) {
          local_158 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_478 = (uint)(-1 < local_548);
          local_47c = (uint)(local_548 < local_4f0.ArrayNum);
          if (-1 >= local_548 || local_548 >= local_4f0.ArrayNum) {
            local_198 = 0;
            local_194 = 0;
            UE::Core::Private::FormatStringSan::
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
          local_190 = local_4f0.AllocatorInstance.Data;
          local_188 = local_4f0.AllocatorInstance.Data;
          local_180 = local_4f0.AllocatorInstance.Data + (longlong)local_548 * 8;
          local_408 = *(int *)local_180;
          local_470 = (uint)(-1 < local_548);
          local_474 = (uint)(local_548 < local_520.ArrayNum);
          if (-1 >= local_548 || local_548 >= local_520.ArrayNum) {
            local_178 = 0;
            local_174 = 0;
            UE::Core::Private::FormatStringSan::
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
          local_170 = local_520.AllocatorInstance.Data;
          local_168 = local_520.AllocatorInstance.Data;
          local_160 = local_520.AllocatorInstance.Data + (longlong)local_548 * 8;
          local_404 = *(int *)local_160;
          ::FString::FString(&local_b8,"All entries are expected to be equivalent A");
          bVar2 = FTestHelpers::TestEqual<int,int>(&local_b8,local_404,local_408,local_158);
          local_46c = (uint)!bVar2;
          ::FString::~FString(&local_b8);
          if (!bVar2) {
            UE::AITestSuite::ConditionallyBreakOnTestFail();
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_510);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_520);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_4f0);
            return false;
          }
          local_110 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_464 = (uint)(-1 < local_548);
          local_468 = (uint)(local_548 < local_4f0.ArrayNum);
          if (-1 >= local_548 || local_548 >= local_4f0.ArrayNum) {
            local_150 = 0;
            local_14c = 0;
            UE::Core::Private::FormatStringSan::
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
          local_148 = local_4f0.AllocatorInstance.Data;
          local_140 = local_4f0.AllocatorInstance.Data;
          local_138 = local_4f0.AllocatorInstance.Data + (longlong)local_548 * 8;
          local_400 = *(int *)local_138;
          local_45c = (uint)(-1 < local_548);
          local_460 = (uint)(local_548 < local_510.ArrayNum);
          if (-1 >= local_548 || local_548 >= local_510.ArrayNum) {
            local_130 = 0;
            local_12c = 0;
            UE::Core::Private::FormatStringSan::
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
          local_128 = local_510.AllocatorInstance.Data;
          local_120 = local_510.AllocatorInstance.Data;
          local_118 = local_510.AllocatorInstance.Data + (longlong)local_548 * 8;
          local_3fc = *(int *)local_118;
          ::FString::FString(&local_a8,"All entries are expected to be equivalent B");
          bVar2 = FTestHelpers::TestEqual<int,int>(&local_a8,local_3fc,local_400,local_110);
          local_458 = (uint)!bVar2;
          ::FString::~FString(&local_a8);
          if (!bVar2) {
            UE::AITestSuite::ConditionallyBreakOnTestFail();
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_510);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_520);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_4f0);
            return false;
          }
        }
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_510);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_520);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_4f0);
        bVar2 = true;
      }
    }
  }
  return bVar2;
}

