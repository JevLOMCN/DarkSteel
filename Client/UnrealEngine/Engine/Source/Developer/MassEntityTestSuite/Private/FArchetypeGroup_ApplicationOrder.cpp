// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147133a10

/* WARNING: Removing unreachable block (ram,0x000147133bb2) */
/* WARNING: Removing unreachable block (ram,0x000147133db5) */
/* WARNING: Removing unreachable block (ram,0x000147133fb9) */
/* WARNING: Removing unreachable block (ram,0x0001471341c3) */
/* WARNING: Removing unreachable block (ram,0x0001471343bc) */
/* WARNING: Removing unreachable block (ram,0x0001471344dd) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::FArchetypeGroup_ApplicationOrder::InstantTest
          (FArchetypeGroup_ApplicationOrder *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName *pFVar4;
  TArrayView<FMassEntityHandle,int> *pTVar5;
  TArrayView<FMassEntityHandle_const_,int> *pTVar6;
  FArchetypeGroupID *pFVar7;
  FArchetypeGroupHandle *pFVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_450;
  uint local_440;
  uint local_43c;
  undefined4 local_438;
  uint local_434;
  undefined4 local_430;
  uint local_42c;
  undefined4 local_428;
  FArchetypeGroupType local_424;
  uint local_420;
  undefined4 local_41c;
  FArchetypeGroupType local_418;
  uint local_414;
  undefined4 local_410;
  uint local_40c;
  undefined4 local_408;
  uint local_404;
  uint local_400;
  uint local_3fc;
  uint local_3f8;
  uint local_3f4;
  uint local_3f0;
  uint local_3ec;
  uint local_3e8;
  uint local_3e4;
  FArchetypeGroupID local_3e0;
  FArchetypeGroupID local_3dc;
  FArchetypeGroupID local_3d8 [2];
  FName *local_3d0;
  FName local_3c8;
  FMassEntityManager *local_3c0;
  FName *local_3b8;
  FName local_3b0;
  FMassEntityManager *local_3a8;
  FMassEntityManager *local_3a0;
  undefined4 local_398;
  undefined4 local_394;
  FMassEntityHandle *local_390;
  FMassEntityHandle *local_388;
  FMassEntityHandle *local_380;
  TArrayView<FMassEntityHandle_const_,int> *local_378;
  FArchetypeGroupID *local_370;
  FArchetypeGroupHandle local_368;
  FArchetypeGroupHandle local_360;
  FMassEntityManager *local_358;
  undefined4 local_350;
  undefined4 local_34c;
  FMassEntityHandle *local_348;
  FMassEntityHandle *local_340;
  FMassEntityHandle *local_338;
  TArrayView<FMassEntityHandle_const_,int> *local_330;
  FArchetypeGroupID *local_328;
  FArchetypeGroupHandle local_320;
  FArchetypeGroupHandle local_318;
  FMassEntityManager *local_310;
  undefined4 local_308;
  undefined4 local_304;
  FMassEntityHandle *local_300;
  FMassEntityHandle *local_2f8;
  FMassEntityHandle *local_2f0;
  TArrayView<FMassEntityHandle_const_,int> *local_2e8;
  FArchetypeGroupID *local_2e0;
  FArchetypeGroupHandle local_2d8;
  FArchetypeGroupHandle local_2d0;
  FMassEntityManager *local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  FMassEntityHandle *local_2b8;
  FMassEntityHandle *local_2b0;
  FMassEntityHandle *local_2a8;
  TArrayView<FMassEntityHandle_const_,int> *local_2a0;
  FArchetypeGroupID *local_298;
  FArchetypeGroupHandle local_290;
  FArchetypeGroupHandle local_288;
  FMassEntityManager *local_280;
  undefined4 local_278;
  undefined4 local_274;
  FMassEntityHandle *local_270;
  FMassEntityHandle *local_268;
  FMassEntityHandle *local_260;
  FMassEntityHandle local_258;
  FMassEntityManager *local_250;
  undefined4 local_248;
  undefined4 local_244;
  FMassEntityHandle *local_240;
  FMassEntityHandle *local_238;
  FMassEntityHandle *local_230;
  FMassEntityHandle local_228;
  FMassEntityManager *local_220;
  FMassArchetypeHandle *local_218;
  FMassArchetypeHandle *local_210;
  FAutomationTestBase *local_208;
  FMassArchetypeHandle *local_200;
  FMassArchetypeHandle *local_1f8;
  FArchetypeGroupID local_1f0 [2];
  FMassArchetypeHandle local_1e8;
  FMassArchetypeHandle local_1d8;
  FString local_1c8;
  FArchetypeGroupHandle local_1b8;
  FArchetypeGroupHandle local_1b0;
  FArchetypeGroupHandle local_1a8;
  FName local_1a0;
  FName local_198;
  FArchetypeGroupHandle local_190;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_188;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  TArrayView<FMassEntityHandle_const_,int> local_158;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  TArrayView<FMassEntityHandle_const_,int> local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  TArrayView<FMassEntityHandle_const_,int> local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  TArrayView<FMassEntityHandle_const_,int> local_c8;
  TArrayView<FMassEntityHandle_const_,int> local_b8;
  TArrayView<FMassEntityHandle,int> local_a8;
  TArrayView<FMassEntityHandle_const_,int> local_98;
  TArrayView<FMassEntityHandle,int> local_88;
  TArrayView<FMassEntityHandle_const_,int> local_78;
  TArrayView<FMassEntityHandle,int> local_68;
  TArrayView<FMassEntityHandle_const_,int> local_58;
  TArrayView<FMassEntityHandle,int> local_48;
  FMassArchetypeHandle local_38;
  FMassArchetypeHandle local_28;
  
  local_440 = 0x68d;
  local_3c0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_3d0 = &local_1a0;
  pFVar4 = ::FName::FName(local_3d0,L"TestGroup1");
  local_3c8 = *pFVar4;
  FMassEntityManager::FindOrAddArchetypeGroupType(local_3c0,(FName)&local_418);
  local_3a8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_3b8 = &local_198;
  pFVar4 = ::FName::FName(local_3b8,L"TestGroup2");
  local_3b0 = *pFVar4;
  FMassEntityManager::FindOrAddArchetypeGroupType(local_3a8,(FName)&local_424);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_450.AllocatorInstance);
  local_450.ArrayNum = 0;
  local_450.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_450.AllocatorInstance);
  local_3a0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_3a0,&local_188,(FMassArchetypeHandle *)&this->field_0x60,2,&local_450);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_188);
  local_358 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_378 = &local_b8;
  local_438 = 1;
  local_43c = (uint)(0 < local_450.ArrayNum);
  if (local_43c == 0) {
    local_398 = 0;
    local_394 = 0;
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
  local_390 = (FMassEntityHandle *)local_450.AllocatorInstance.Data;
  local_388 = (FMassEntityHandle *)local_450.AllocatorInstance.Data;
  local_380 = (FMassEntityHandle *)local_450.AllocatorInstance.Data;
  pTVar5 = MakeArrayView<FMassEntityHandle>
                     (&local_a8,(FMassEntityHandle *)local_450.AllocatorInstance.Data,1);
  pTVar6 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
                     (local_378,pTVar5);
  puVar10 = local_178;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *(undefined1 *)&pTVar6->DataPtr;
    pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
    puVar10 = puVar10 + 1;
  }
  puVar10 = local_178;
  puVar11 = local_168;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  local_370 = local_1f0;
  pFVar7 = FArchetypeGroupID::FArchetypeGroupID(local_370,local_440);
  local_400 = pFVar7->ID;
  local_3fc = local_418.Identifier;
  pFVar8 = FArchetypeGroupHandle::FArchetypeGroupHandle
                     (&local_190,local_418,(FArchetypeGroupID)local_400);
  local_368 = *pFVar8;
  puVar10 = local_168;
  pTVar6 = &local_158;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pTVar6->DataPtr = *puVar10;
    puVar10 = puVar10 + 1;
    pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
  }
  local_360 = local_368;
  FMassEntityManager::BatchGroupEntities(local_358,local_368,&local_158);
  local_310 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_330 = &local_98;
  local_430 = 1;
  local_434 = (uint)(0 < local_450.ArrayNum);
  if (local_434 == 0) {
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
  local_348 = (FMassEntityHandle *)local_450.AllocatorInstance.Data;
  local_340 = (FMassEntityHandle *)local_450.AllocatorInstance.Data;
  local_338 = (FMassEntityHandle *)local_450.AllocatorInstance.Data;
  pTVar5 = MakeArrayView<FMassEntityHandle>
                     (&local_88,(FMassEntityHandle *)local_450.AllocatorInstance.Data,1);
  pTVar6 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
                     (local_330,pTVar5);
  puVar10 = local_148;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *(undefined1 *)&pTVar6->DataPtr;
    pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
    puVar10 = puVar10 + 1;
  }
  puVar10 = local_148;
  puVar11 = local_138;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  local_328 = &local_3e0;
  pFVar7 = FArchetypeGroupID::FArchetypeGroupID(local_328,local_440);
  local_3f8 = pFVar7->ID;
  local_3f4 = local_424.Identifier;
  pFVar8 = FArchetypeGroupHandle::FArchetypeGroupHandle
                     (&local_1b8,local_424,(FArchetypeGroupID)local_3f8);
  local_320 = *pFVar8;
  puVar10 = local_138;
  pTVar6 = &local_128;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pTVar6->DataPtr = *puVar10;
    puVar10 = puVar10 + 1;
    pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
  }
  local_318 = local_320;
  FMassEntityManager::BatchGroupEntities(local_310,local_320,&local_128);
  local_2c8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_2e8 = &local_78;
  local_428 = 1;
  local_42c = (uint)(1 < local_450.ArrayNum);
  if (local_42c == 0) {
    local_308 = 0;
    local_304 = 0;
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
  local_300 = (FMassEntityHandle *)local_450.AllocatorInstance.Data;
  local_2f8 = (FMassEntityHandle *)local_450.AllocatorInstance.Data;
  local_2f0 = (FMassEntityHandle *)(local_450.AllocatorInstance.Data + 8);
  pTVar5 = MakeArrayView<FMassEntityHandle>(&local_68,local_2f0,1);
  pTVar6 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
                     (local_2e8,pTVar5);
  puVar10 = local_118;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *(undefined1 *)&pTVar6->DataPtr;
    pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
    puVar10 = puVar10 + 1;
  }
  puVar10 = local_118;
  puVar11 = local_108;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  local_2e0 = &local_3dc;
  pFVar7 = FArchetypeGroupID::FArchetypeGroupID(local_2e0,local_440);
  local_3f0 = pFVar7->ID;
  local_3ec = local_424.Identifier;
  pFVar8 = FArchetypeGroupHandle::FArchetypeGroupHandle
                     (&local_1b0,local_424,(FArchetypeGroupID)local_3f0);
  local_2d8 = *pFVar8;
  puVar10 = local_108;
  pTVar6 = &local_f8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pTVar6->DataPtr = *puVar10;
    puVar10 = puVar10 + 1;
    pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
  }
  local_2d0 = local_2d8;
  FMassEntityManager::BatchGroupEntities(local_2c8,local_2d8,&local_f8);
  local_280 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_2a0 = &local_58;
  local_41c = 1;
  local_420 = (uint)(1 < local_450.ArrayNum);
  if (local_420 == 0) {
    local_2c0 = 0;
    local_2bc = 0;
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
  local_2b8 = (FMassEntityHandle *)local_450.AllocatorInstance.Data;
  local_2b0 = (FMassEntityHandle *)local_450.AllocatorInstance.Data;
  local_2a8 = (FMassEntityHandle *)(local_450.AllocatorInstance.Data + 8);
  pTVar5 = MakeArrayView<FMassEntityHandle>(&local_48,local_2a8,1);
  pTVar6 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
                     (local_2a0,pTVar5);
  puVar10 = local_e8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *(undefined1 *)&pTVar6->DataPtr;
    pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
    puVar10 = puVar10 + 1;
  }
  puVar10 = local_e8;
  puVar11 = local_d8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  local_298 = local_3d8;
  pFVar7 = FArchetypeGroupID::FArchetypeGroupID(local_298,local_440);
  local_3e8 = pFVar7->ID;
  local_3e4 = local_418.Identifier;
  pFVar8 = FArchetypeGroupHandle::FArchetypeGroupHandle
                     (&local_1a8,local_418,(FArchetypeGroupID)local_3e8);
  local_290 = *pFVar8;
  puVar10 = local_d8;
  pTVar6 = &local_c8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pTVar6->DataPtr = *puVar10;
    puVar10 = puVar10 + 1;
    pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
  }
  local_288 = local_290;
  FMassEntityManager::BatchGroupEntities(local_280,local_290,&local_c8);
  local_250 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_410 = 1;
  local_414 = (uint)(0 < local_450.ArrayNum);
  if (local_414 == 0) {
    local_278 = 0;
    local_274 = 0;
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
  local_270 = (FMassEntityHandle *)local_450.AllocatorInstance.Data;
  local_268 = (FMassEntityHandle *)local_450.AllocatorInstance.Data;
  local_260 = (FMassEntityHandle *)local_450.AllocatorInstance.Data;
  local_258 = *(FMassEntityHandle *)local_450.AllocatorInstance.Data;
  FMassEntityManager::GetArchetypeForEntity(local_250,&local_1d8,local_258);
  local_220 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_408 = 1;
  local_40c = (uint)(1 < local_450.ArrayNum);
  if (local_40c == 0) {
    local_248 = 0;
    local_244 = 0;
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
  local_240 = (FMassEntityHandle *)local_450.AllocatorInstance.Data;
  local_238 = (FMassEntityHandle *)local_450.AllocatorInstance.Data;
  local_230 = (FMassEntityHandle *)(local_450.AllocatorInstance.Data + 8);
  local_228 = *local_230;
  FMassEntityManager::GetArchetypeForEntity(local_220,&local_1e8,local_228);
  local_208 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_218 = &local_38;
  local_200 = FMassArchetypeHandle::FMassArchetypeHandle(local_218,&local_1e8);
  local_210 = &local_28;
  local_1f8 = FMassArchetypeHandle::FMassArchetypeHandle(local_210,&local_1d8);
  ::FString::FString(&local_1c8,"Final archetype target is independent of order of entity grouping")
  ;
  bVar2 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                    (&local_1c8,local_1f8,local_200,local_208);
  local_404 = (uint)!bVar2;
  ::FString::~FString(&local_1c8);
  bVar2 = bVar2;
  if (bVar2) {
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_1e8);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_1d8);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_450);
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_1e8);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_1d8);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_450);
  }
  return bVar2;
}

