// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147135d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::FArchetypeGroup_NewArchetype::InstantTest(FArchetypeGroup_NewArchetype *this)

{
  bool bVar1;
  FName *pFVar2;
  TArrayView<FMassEntityHandle_const_,int> *pTVar3;
  FArchetypeGroupID *pFVar4;
  FArchetypeGroupHandle *pFVar5;
  longlong lVar6;
  undefined1 *puVar7;
  FMassArchetypeSharedFragmentValues *pFVar8;
  undefined1 *puVar9;
  undefined1 auStack_4c8 [32];
  char local_4a8;
  undefined1 local_4a7;
  char local_4a6;
  undefined1 local_4a5;
  char local_4a4;
  undefined1 local_4a3;
  char local_4a2;
  undefined1 local_4a1;
  undefined1 local_4a0;
  uint local_49c;
  FArchetypeGroupType local_498;
  FMassArchetypeHandle local_490;
  uint local_480;
  uint local_47c;
  FMassArchetypeHandle local_478;
  uint local_468;
  uint local_464;
  uint local_460;
  uint local_45c;
  uint local_458;
  uint local_454;
  uint local_450;
  uint local_44c;
  FMassArchetypeHandle local_448;
  FMassArchetypeHandle local_438;
  FArchetypeGroupID local_428 [2];
  FName *local_420;
  FName local_418;
  FMassEntityManager *local_410;
  FMassEntityManager *local_408;
  FArchetypeGroupID *local_400;
  FArchetypeGroupHandle local_3f8;
  FArchetypeGroupHandle local_3f0;
  FMassEntityManager *local_3e8;
  FMassEntityHandle local_3e0;
  FMassEntityManager *local_3d8;
  FMassArchetypeHandle *local_3d0;
  FMassArchetypeHandle *local_3c8;
  FAutomationTestBase *local_3c0;
  FMassArchetypeHandle *local_3b8;
  FMassArchetypeHandle *local_3b0;
  FArchetypeGroupID *local_3a8;
  FArchetypeGroupHandle local_3a0;
  FArchetypeGroupHandle local_398;
  FMassEntityManager *local_390;
  FMassEntityHandle local_388;
  FMassEntityManager *local_380;
  FMassArchetypeHandle *local_378;
  FMassArchetypeHandle *local_370;
  FAutomationTestBase *local_368;
  FMassArchetypeHandle *local_360;
  FMassArchetypeHandle *local_358;
  FArchetypeGroupID *local_350;
  FArchetypeGroupHandle local_348;
  FArchetypeGroupHandle local_340;
  FMassEntityManager *local_338;
  FMassEntityHandle local_330;
  FMassEntityManager *local_328;
  FMassArchetypeHandle *local_320;
  FMassArchetypeHandle *local_318;
  FAutomationTestBase *local_310;
  FMassArchetypeHandle *local_308;
  FMassArchetypeHandle *local_300;
  FArchetypeGroupID *local_2f8;
  FArchetypeGroupHandle local_2f0;
  FArchetypeGroupHandle local_2e8;
  FMassEntityManager *local_2e0;
  FMassEntityHandle local_2d8;
  FMassEntityManager *local_2d0;
  FMassArchetypeHandle *local_2c8;
  FMassArchetypeHandle *local_2c0;
  FAutomationTestBase *local_2b8;
  FMassArchetypeHandle *local_2b0;
  FMassArchetypeHandle *local_2a8;
  FArchetypeGroupID local_2a0;
  FArchetypeGroupID local_29c;
  FArchetypeGroupID local_298 [2];
  FMassArchetypeHandle local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FArchetypeGroupHandle local_240;
  FName local_238;
  FArchetypeGroupHandle local_230;
  FArchetypeGroupHandle local_228;
  FArchetypeGroupHandle local_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  TArrayView<FMassEntityHandle_const_,int> local_1f8;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  TArrayView<FMassEntityHandle_const_,int> local_1c8;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  TArrayView<FMassEntityHandle_const_,int> local_198;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  TArrayView<FMassEntityHandle_const_,int> local_168;
  TArrayView<FMassEntityHandle_const_,int> local_158;
  FMassArchetypeHandle local_148;
  FMassArchetypeHandle local_138;
  TArrayView<FMassEntityHandle_const_,int> local_128;
  FMassArchetypeHandle local_118;
  FMassArchetypeHandle local_108;
  TArrayView<FMassEntityHandle_const_,int> local_f8;
  FMassArchetypeHandle local_e8;
  FMassArchetypeHandle local_d8;
  TArrayView<FMassEntityHandle_const_,int> local_c8;
  FMassArchetypeHandle local_b8;
  FMassArchetypeHandle local_a8;
  FMassArchetypeSharedFragmentValues local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_4c8;
  local_49c = 0x68d;
  local_410 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_420 = &local_238;
  pFVar2 = ::FName::FName(local_420,L"TestGroup");
  local_418 = *pFVar2;
  FMassEntityManager::FindOrAddArchetypeGroupType(local_410,(FName)&local_498);
  local_408 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar8 = &local_98;
  for (lVar6 = 0x68; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pFVar8->HashCache = 0;
    pFVar8 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar8->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_98);
  FMassEntityManager::CreateEntity
            (local_408,&local_490,(FMassArchetypeSharedFragmentValues *)&this->field_0x60);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_98);
  local_3e8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pTVar3 = MakeArrayView<FMassEntityHandle_const_>(&local_158,(FMassEntityHandle *)&local_490,1);
  puVar7 = local_218;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *(undefined1 *)&pTVar3->DataPtr;
    pTVar3 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar3->DataPtr + 1);
    puVar7 = puVar7 + 1;
  }
  puVar7 = local_218;
  puVar9 = local_208;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  local_400 = &local_2a0;
  pFVar4 = FArchetypeGroupID::FArchetypeGroupID(local_400,local_49c);
  local_468 = pFVar4->ID;
  local_464 = local_498.Identifier;
  pFVar5 = FArchetypeGroupHandle::FArchetypeGroupHandle
                     (&local_230,local_498,(FArchetypeGroupID)local_468);
  local_3f8 = *pFVar5;
  puVar7 = local_208;
  pTVar3 = &local_1f8;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pTVar3->DataPtr = *puVar7;
    puVar7 = puVar7 + 1;
    pTVar3 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar3->DataPtr + 1);
  }
  local_3f0 = local_3f8;
  FMassEntityManager::BatchGroupEntities(local_3e8,local_3f8,&local_1f8);
  local_3d8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_3e0 = (FMassEntityHandle)local_490.DataPtr.Object;
  FMassEntityManager::GetArchetypeForEntity
            (local_3d8,&local_478,(FMassEntityHandle)local_490.DataPtr.Object);
  local_3c0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_3d0 = &local_148;
  local_3b8 = FMassArchetypeHandle::FMassArchetypeHandle
                        (local_3d0,(FMassArchetypeHandle *)&this->field_0x60);
  local_3c8 = &local_138;
  local_3b0 = FMassArchetypeHandle::FMassArchetypeHandle(local_3c8,&local_478);
  ::FString::FString(&local_270,"Adding an entity to a group of any type makes it change archetypes"
                    );
  bVar1 = FTestHelpers::TestNotEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                    (&local_270,local_3b0,local_3b8,local_3c0);
  local_4a8 = !bVar1;
  local_490.DataPtr.SharedReferenceCount.ReferenceController._0_4_ = (uint)(byte)local_4a8;
  ::FString::~FString(&local_270);
  if (local_4a8 == '\0') {
    local_390 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    pTVar3 = MakeArrayView<FMassEntityHandle_const_>(&local_128,(FMassEntityHandle *)&local_490,1);
    puVar7 = local_1e8;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = *(undefined1 *)&pTVar3->DataPtr;
      pTVar3 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar3->DataPtr + 1);
      puVar7 = puVar7 + 1;
    }
    puVar7 = local_1e8;
    puVar9 = local_1d8;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    local_3a8 = &local_29c;
    pFVar4 = FArchetypeGroupID::FArchetypeGroupID(local_3a8,local_49c + 1);
    local_460 = pFVar4->ID;
    local_45c = local_498.Identifier;
    pFVar5 = FArchetypeGroupHandle::FArchetypeGroupHandle
                       (&local_228,local_498,(FArchetypeGroupID)local_460);
    local_3a0 = *pFVar5;
    puVar7 = local_1d8;
    pTVar3 = &local_1c8;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *(undefined1 *)&pTVar3->DataPtr = *puVar7;
      puVar7 = puVar7 + 1;
      pTVar3 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar3->DataPtr + 1);
    }
    local_398 = local_3a0;
    FMassEntityManager::BatchGroupEntities(local_390,local_3a0,&local_1c8);
    local_380 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_388 = (FMassEntityHandle)local_490.DataPtr.Object;
    FMassEntityManager::GetArchetypeForEntity
              (local_380,&local_448,(FMassEntityHandle)local_490.DataPtr.Object);
    local_368 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_378 = &local_118;
    local_360 = FMassArchetypeHandle::FMassArchetypeHandle(local_378,&local_448);
    local_370 = &local_108;
    local_358 = FMassArchetypeHandle::FMassArchetypeHandle(local_370,&local_478);
    ::FString::FString(&local_260,
                       "Switching an entity to a different instance of the given group type makes it change archetypes"
                      );
    bVar1 = FTestHelpers::TestNotEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                      (&local_260,local_358,local_360,local_368);
    local_4a6 = !bVar1;
    local_490.DataPtr.SharedReferenceCount.ReferenceController._4_4_ = (uint)(byte)local_4a6;
    ::FString::~FString(&local_260);
    if (local_4a6 == '\0') {
      local_338 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      pTVar3 = MakeArrayView<FMassEntityHandle_const_>(&local_f8,(FMassEntityHandle *)&local_490,1);
      puVar7 = local_1b8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *(undefined1 *)&pTVar3->DataPtr;
        pTVar3 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar3->DataPtr + 1);
        puVar7 = puVar7 + 1;
      }
      puVar7 = local_1b8;
      puVar9 = local_1a8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      local_350 = local_298;
      pFVar4 = FArchetypeGroupID::FArchetypeGroupID(local_350,local_49c);
      local_458 = pFVar4->ID;
      local_454 = local_498.Identifier;
      pFVar5 = FArchetypeGroupHandle::FArchetypeGroupHandle
                         (&local_220,local_498,(FArchetypeGroupID)local_458);
      local_348 = *pFVar5;
      puVar7 = local_1a8;
      pTVar3 = &local_198;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *(undefined1 *)&pTVar3->DataPtr = *puVar7;
        puVar7 = puVar7 + 1;
        pTVar3 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar3->DataPtr + 1);
      }
      local_340 = local_348;
      FMassEntityManager::BatchGroupEntities(local_338,local_348,&local_198);
      local_328 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_330 = (FMassEntityHandle)local_490.DataPtr.Object;
      FMassEntityManager::GetArchetypeForEntity
                (local_328,&local_438,(FMassEntityHandle)local_490.DataPtr.Object);
      local_310 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_320 = &local_e8;
      local_308 = FMassArchetypeHandle::FMassArchetypeHandle(local_320,&local_438);
      local_318 = &local_d8;
      local_300 = FMassArchetypeHandle::FMassArchetypeHandle(local_318,&local_478);
      ::FString::FString(&local_250,
                         "Switching an entity to back to the original group instance makes it change archetypes back to the previous one"
                        );
      bVar1 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                        (&local_250,local_300,local_308,local_310);
      local_4a4 = !bVar1;
      local_480 = (uint)(byte)local_4a4;
      ::FString::~FString(&local_250);
      if (local_4a4 == '\0') {
        local_2e0 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        pTVar3 = MakeArrayView<FMassEntityHandle_const_>
                           (&local_c8,(FMassEntityHandle *)&local_490,1);
        puVar7 = local_188;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *(undefined1 *)&pTVar3->DataPtr;
          pTVar3 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar3->DataPtr + 1);
          puVar7 = puVar7 + 1;
        }
        puVar7 = local_188;
        puVar9 = local_178;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        local_2f8 = local_428;
        pFVar4 = FArchetypeGroupID::FArchetypeGroupID(local_2f8,local_49c);
        local_450 = pFVar4->ID;
        local_44c = local_498.Identifier;
        pFVar5 = FArchetypeGroupHandle::FArchetypeGroupHandle
                           (&local_240,local_498,(FArchetypeGroupID)local_450);
        local_2f0 = *pFVar5;
        puVar7 = local_178;
        pTVar3 = &local_168;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *(undefined1 *)&pTVar3->DataPtr = *puVar7;
          puVar7 = puVar7 + 1;
          pTVar3 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar3->DataPtr + 1);
        }
        local_2e8 = local_2f0;
        FMassEntityManager::BatchGroupEntities(local_2e0,local_2f0,&local_168);
        local_2d0 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_2d8 = (FMassEntityHandle)local_490.DataPtr.Object;
        FMassEntityManager::GetArchetypeForEntity
                  (local_2d0,&local_290,(FMassEntityHandle)local_490.DataPtr.Object);
        local_2b8 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_2c8 = &local_b8;
        local_2b0 = FMassArchetypeHandle::FMassArchetypeHandle(local_2c8,&local_290);
        local_2c0 = &local_a8;
        local_2a8 = FMassArchetypeHandle::FMassArchetypeHandle(local_2c0,&local_478);
        ::FString::FString(&local_280,
                           "Attempting to add an entity to a group it\'s already in results in noop"
                          );
        bVar1 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                          (&local_280,local_2a8,local_2b0,local_2b8);
        local_4a2 = !bVar1;
        local_47c = (uint)(byte)local_4a2;
        ::FString::~FString(&local_280);
        if (local_4a2 == '\0') {
          local_4a0 = 1;
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_290);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_438);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_448);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_478);
          local_4a7 = local_4a0;
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          local_4a1 = 0;
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_290);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_438);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_448);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_478);
          local_4a7 = local_4a1;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        local_4a3 = 0;
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_438);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_448);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_478);
        local_4a7 = local_4a3;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_4a5 = 0;
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_448);
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_478);
      local_4a7 = local_4a5;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_4a7 = 0;
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_478);
  }
  return (bool)local_4a7;
}

