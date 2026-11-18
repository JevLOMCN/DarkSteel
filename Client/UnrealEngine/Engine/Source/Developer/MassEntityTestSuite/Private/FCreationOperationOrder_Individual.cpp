// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// BuildScenario @ 147118e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147119516) */
/* WARNING: Removing unreachable block (ram,0x000147119c75) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Test::Observers::FCreationOperationOrder_Individual::BuildScenario
          (FCreationOperationOrder_Individual *this,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  FMassArchetypeSharedFragmentValues *pFVar5;
  undefined1 auStack_588 [32];
  FMassEntityHandle local_568;
  FScriptContainerElement *local_560;
  longlong local_558;
  longlong local_550;
  undefined8 local_548;
  int local_538;
  int local_534;
  uint local_530;
  undefined4 local_52c;
  int local_528;
  int local_524;
  uint local_520;
  undefined4 local_51c;
  FMassEntityHandle local_518;
  FMassEntityHandle local_510;
  FMassEntityHandle local_508;
  FMassEntityHandle local_500;
  int local_4f8;
  int local_4f4;
  int local_4f0;
  int local_4ec;
  FMassEntityManager *local_4e8;
  FMassEntityManager *local_4e0;
  FMassEntityManager *local_4d8;
  FMassEntityHandle local_4d0;
  FMassEntityHandle local_4c8;
  FMassEntityHandle local_4c0;
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
  FMassEntityManager *local_450;
  FMassEntityHandle local_448;
  FMassEntityHandle local_440;
  FMassEntityHandle local_438;
  FScriptContainerElement *local_430;
  FScriptContainerElement *local_428;
  FScriptContainerElement *local_420;
  undefined4 local_418;
  undefined4 local_414;
  FScriptContainerElement *local_410;
  FScriptContainerElement *local_408;
  FScriptContainerElement *local_400;
  longlong local_3f8;
  longlong local_3f0;
  FScriptContainerElement *local_3e8;
  FScriptContainerElement *local_3e0;
  FScriptContainerElement *local_3d8;
  undefined8 *local_3d0;
  undefined4 local_3c8;
  undefined4 local_3c4;
  FMassEntityHandle *local_3c0;
  FMassEntityHandle *local_3b8;
  FMassEntityHandle *local_3b0;
  FMassEntityHandle local_3a8;
  UScriptStruct *local_3a0;
  FMassEntityHandle local_398;
  FMassEntityManager *local_390;
  FMassEntityManager *local_388;
  FMassEntityManager *local_380;
  FMassEntityHandle local_378;
  FMassEntityHandle local_370;
  FMassEntityHandle local_368;
  FScriptContainerElement *local_360;
  FScriptContainerElement *local_358;
  FScriptContainerElement *local_350;
  undefined4 local_348;
  undefined4 local_344;
  FScriptContainerElement *local_340;
  FScriptContainerElement *local_338;
  FScriptContainerElement *local_330;
  longlong local_328;
  longlong local_320;
  FScriptContainerElement *local_318;
  FScriptContainerElement *local_310;
  FScriptContainerElement *local_308;
  undefined8 *local_300;
  FMassEntityManager *local_2f8;
  FMassEntityHandle local_2f0;
  FMassEntityHandle local_2e8;
  FMassEntityHandle local_2e0;
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
  FScriptContainerElement *local_268;
  FScriptContainerElement *local_260;
  FMassEntityHandle *local_258;
  FMassEntityHandle local_250;
  UScriptStruct *local_248;
  FMassEntityHandle local_240;
  FMassEntityManager *local_238;
  undefined1 local_230 [16];
  undefined1 local_220 [16];
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_210;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_200;
  TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> local_1f0;
  FMassArchetypeSharedFragmentValues local_1d8;
  FMassArchetypeSharedFragmentValues local_168;
  FMassArchetypeSharedFragmentValues local_f8;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_588;
  local_4e8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::GetOrMakeObserversLock(local_4e8,&local_1f0);
  local_4e0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::GetOrMakeCreationContext(local_4e0,&local_210);
  local_4d8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar5 = &local_1d8;
  for (lVar4 = 0x68; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)&pFVar5->HashCache = 0;
    pFVar5 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar5->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_1d8);
  local_518 = FMassEntityManager::CreateEntity
                        (local_4d8,(FMassArchetypeHandle *)local_230,
                         (FMassArchetypeSharedFragmentValues *)&this->field_0x50);
  local_4d0 = (FMassEntityHandle)(param_2->AllocatorInstance).Data;
  local_4c8 = local_4d0;
  local_4c0 = local_4d0;
  if (((ulonglong)local_4d0 <= (ulonglong)local_518) &&
     (local_4b8 = (param_2->AllocatorInstance).Data, local_4b0 = local_4b8, local_4a8 = local_4b8,
     (ulonglong)local_518 < (ulonglong)((longlong)local_4b8 + (longlong)param_2->ArrayMax * 8))) {
    local_4a0 = 0;
    local_49c = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_550 = (longlong)param_2->ArrayNum;
    local_558 = (longlong)param_2->ArrayMax;
    local_560 = (param_2->AllocatorInstance).Data;
    local_548 = 8;
    local_568 = local_518;
    local_498 = local_560;
    local_490 = local_560;
    local_488 = local_560;
    local_480 = local_550;
    local_478 = local_558;
    local_470 = local_560;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2->ArrayNum == param_2->ArrayMax) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    param_2->ArrayNum = iVar3;
  }
  local_538 = param_2->ArrayNum;
  param_2->ArrayNum = param_2->ArrayNum + 1;
  local_468 = (param_2->AllocatorInstance).Data;
  local_460 = local_468 + (longlong)local_538 * 8;
  local_458 = ::operator_new(8,local_460);
  *local_458 = *(undefined8 *)local_518;
  local_4f8 = local_538;
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_1d8);
  local_450 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar5 = &local_168;
  for (lVar4 = 0x68; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)&pFVar5->HashCache = 0;
    pFVar5 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar5->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_168);
  local_510 = FMassEntityManager::CreateEntity
                        (local_450,(FMassArchetypeHandle *)(local_230 + 8),
                         (FMassArchetypeSharedFragmentValues *)&this->field_0x50);
  local_448 = (FMassEntityHandle)(param_2->AllocatorInstance).Data;
  local_440 = local_448;
  local_438 = local_448;
  if (((ulonglong)local_448 <= (ulonglong)local_510) &&
     (local_430 = (param_2->AllocatorInstance).Data, local_428 = local_430, local_420 = local_430,
     (ulonglong)local_510 < (ulonglong)((longlong)local_430 + (longlong)param_2->ArrayMax * 8))) {
    local_418 = 0;
    local_414 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_550 = (longlong)param_2->ArrayNum;
    local_558 = (longlong)param_2->ArrayMax;
    local_560 = (param_2->AllocatorInstance).Data;
    local_548 = 8;
    local_568 = local_510;
    local_410 = local_560;
    local_408 = local_560;
    local_400 = local_560;
    local_3f8 = local_550;
    local_3f0 = local_558;
    local_3e8 = local_560;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2->ArrayNum == param_2->ArrayMax) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    param_2->ArrayNum = iVar3;
  }
  local_534 = param_2->ArrayNum;
  param_2->ArrayNum = param_2->ArrayNum + 1;
  local_3e0 = (param_2->AllocatorInstance).Data;
  local_3d8 = local_3e0 + (longlong)local_534 * 8;
  local_3d0 = ::operator_new(8,local_3d8);
  *local_3d0 = *(undefined8 *)local_510;
  local_4f4 = local_534;
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_168);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_210);
  local_390 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_3a0 = FTestFragment_Float::StaticStruct();
  local_52c = 1;
  local_530 = (uint)(0 < param_1->ArrayNum);
  if (local_530 == 0) {
    local_3c8 = 0;
    local_3c4 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_560 = (FScriptContainerElement *)(longlong)param_1->ArrayNum;
    local_568.Index = 0;
    local_568.SerialNumber = 0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_3c0 = (FMassEntityHandle *)(param_1->AllocatorInstance).Data;
  local_3a8 = *local_3c0;
  local_3b8 = local_3c0;
  local_3b0 = local_3c0;
  local_398 = local_3a8;
  FMassEntityManager::AddFragmentToEntity(local_390,local_3a8,local_3a0);
  local_388 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::GetOrMakeCreationContext(local_388,&local_200);
  local_380 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar5 = &local_f8;
  for (lVar4 = 0x68; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)&pFVar5->HashCache = 0;
    pFVar5 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar5->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_f8);
  local_508 = FMassEntityManager::CreateEntity
                        (local_380,(FMassArchetypeHandle *)local_220,
                         (FMassArchetypeSharedFragmentValues *)&this->field_0x50);
  local_378 = (FMassEntityHandle)(param_2->AllocatorInstance).Data;
  local_370 = local_378;
  local_368 = local_378;
  if (((ulonglong)local_378 <= (ulonglong)local_508) &&
     (local_360 = (param_2->AllocatorInstance).Data, local_358 = local_360, local_350 = local_360,
     (ulonglong)local_508 < (ulonglong)((longlong)local_360 + (longlong)param_2->ArrayMax * 8))) {
    local_348 = 0;
    local_344 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_550 = (longlong)param_2->ArrayNum;
    local_558 = (longlong)param_2->ArrayMax;
    local_560 = (param_2->AllocatorInstance).Data;
    local_548 = 8;
    local_568 = local_508;
    local_340 = local_560;
    local_338 = local_560;
    local_330 = local_560;
    local_328 = local_550;
    local_320 = local_558;
    local_318 = local_560;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2->ArrayNum == param_2->ArrayMax) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    param_2->ArrayNum = iVar3;
  }
  local_528 = param_2->ArrayNum;
  param_2->ArrayNum = param_2->ArrayNum + 1;
  local_310 = (param_2->AllocatorInstance).Data;
  local_308 = local_310 + (longlong)local_528 * 8;
  local_300 = ::operator_new(8,local_308);
  *local_300 = *(undefined8 *)local_508;
  local_4f0 = local_528;
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_f8);
  local_2f8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar5 = &local_88;
  for (lVar4 = 0x68; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)&pFVar5->HashCache = 0;
    pFVar5 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar5->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
  local_500 = FMassEntityManager::CreateEntity
                        (local_2f8,(FMassArchetypeHandle *)(local_220 + 8),
                         (FMassArchetypeSharedFragmentValues *)&this->field_0x50);
  local_2f0 = (FMassEntityHandle)(param_2->AllocatorInstance).Data;
  local_2e8 = local_2f0;
  local_2e0 = local_2f0;
  if (((ulonglong)local_2f0 <= (ulonglong)local_500) &&
     (local_2d8 = (param_2->AllocatorInstance).Data, local_2d0 = local_2d8, local_2c8 = local_2d8,
     (ulonglong)local_500 < (ulonglong)((longlong)local_2d8 + (longlong)param_2->ArrayMax * 8))) {
    local_2c0 = 0;
    local_2bc = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_550 = (longlong)param_2->ArrayNum;
    local_558 = (longlong)param_2->ArrayMax;
    local_560 = (param_2->AllocatorInstance).Data;
    local_548 = 8;
    local_568 = local_500;
    local_2b8 = local_560;
    local_2b0 = local_560;
    local_2a8 = local_560;
    local_2a0 = local_550;
    local_298 = local_558;
    local_290 = local_560;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2->ArrayNum == param_2->ArrayMax) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    param_2->ArrayNum = iVar3;
  }
  local_524 = param_2->ArrayNum;
  param_2->ArrayNum = param_2->ArrayNum + 1;
  local_288 = (param_2->AllocatorInstance).Data;
  local_280 = local_288 + (longlong)local_524 * 8;
  local_278 = ::operator_new(8,local_280);
  *local_278 = *(undefined8 *)local_500;
  local_4ec = local_524;
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_200);
  local_238 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_248 = FTestFragment_Float::StaticStruct();
  local_51c = 1;
  local_520 = (uint)(1 < param_1->ArrayNum);
  if (local_520 == 0) {
    local_270 = 0;
    local_26c = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_560 = (FScriptContainerElement *)(longlong)param_1->ArrayNum;
    local_568.Index = 1;
    local_568.SerialNumber = 0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_268 = (param_1->AllocatorInstance).Data;
  local_258 = (FMassEntityHandle *)(local_268 + 8);
  local_250 = *local_258;
  local_260 = local_268;
  local_240 = local_250;
  FMassEntityManager::AddFragmentToEntity(local_238,local_250,local_248);
  TSharedRef<UE::Mass::ObserverManager::FObserverLock,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FObserverLock,1>(&local_1f0);
  return;
}

