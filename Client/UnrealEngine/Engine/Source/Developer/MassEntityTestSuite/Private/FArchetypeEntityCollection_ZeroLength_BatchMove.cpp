// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147131c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014713208d) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassArchetypeEntityCollectionTest::FArchetypeEntityCollection_ZeroLength_BatchMove::InstantTest
          (FArchetypeEntityCollection_ZeroLength_BatchMove *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TArrayView<FMassArchetypeEntityCollection,int> *pTVar5;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar6;
  TArrayView<UScriptStruct_const_*,int> *pTVar7;
  TArrayView<UScriptStruct_const_*_const,int> *pTVar8;
  longlong lVar9;
  undefined1 *puVar10;
  FMassArchetypeSharedFragmentValues *pFVar11;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *pTVar12;
  undefined1 *puVar13;
  undefined1 auStackY_3f8 [32];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_3b8;
  FMassArchetypeHandle local_3a8;
  uint local_398;
  uint local_394;
  undefined4 local_390;
  uint local_38c;
  uint local_388;
  uint local_384;
  int local_380;
  int local_37c;
  int local_378;
  int local_374;
  FMassArchetypeHandle local_370;
  UScriptStruct *local_360;
  FMassArchetypeHandle local_358;
  FMassArchetypeData *local_348;
  FMassArchetypeData *local_340;
  FAutomationTestBase *local_338;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_330;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *local_328;
  FMassEntityManager *local_320;
  undefined4 local_318;
  undefined4 local_314;
  FMassEntityHandle *local_310;
  FMassEntityHandle *local_308;
  FMassEntityHandle *local_300;
  FMassEntityHandle local_2f8;
  FMassEntityManager *local_2f0;
  FMassArchetypeHandle *local_2e8;
  FMassArchetypeHandle *local_2e0;
  FAutomationTestBase *local_2d8;
  FMassArchetypeHandle *local_2d0;
  FMassArchetypeHandle *local_2c8;
  TArrayView<UScriptStruct_const_*_const,int> *local_2c0;
  FMassArchetypeHandle *local_2b8;
  FMassArchetypeHandle *local_2b0;
  FMassEntityManager *local_2a8;
  FMassArchetypeHandle *local_2a0;
  FMassArchetypeHandle *local_298;
  FAutomationTestBase *local_290;
  FMassArchetypeHandle *local_288;
  FMassArchetypeHandle *local_280;
  FMassEntityManager *local_278;
  FAutomationTestBase *local_270;
  undefined4 local_268;
  FMassArchetypeData *local_260;
  FMassArchetypeData *local_258;
  FMassEntityManager *local_250;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FMassArchetypeEntityCollection local_208;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_1e0;
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [24];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_1a8;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  TArrayView<UScriptStruct_const_*_const,int> local_178;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_168;
  TArrayView<FMassArchetypeEntityCollection,int> local_158;
  FMassArchetypeHandle local_148;
  FMassArchetypeHandle local_138;
  TArrayView<UScriptStruct_const_*_const,int> local_128;
  TArrayView<UScriptStruct_const_*,int> local_118;
  FMassArchetypeHandle local_108;
  FMassArchetypeHandle local_f8;
  FMassArchetypeHandle local_e8;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> local_d8;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> local_b8;
  FMassArchetypeSharedFragmentValues local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  FMassArchetypeHandle::FMassArchetypeHandle(&local_3a8,(FMassArchetypeHandle *)&this->field_0x50);
  bVar2 = FMassArchetypeHandle::IsValid(&local_3a8);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x1ff,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_260 = local_3a8.DataPtr.Object;
  local_258 = local_3a8.DataPtr.Object;
  local_380 = FMassArchetypeData::GetNumEntitiesPerChunk(local_3a8.DataPtr.Object);
  local_268 = 3;
  iVar4 = local_380 * 3;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_3b8.AllocatorInstance);
  local_3b8.ArrayNum = 0;
  local_3b8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_3b8.AllocatorInstance);
  local_250 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar11 = &local_98;
  for (lVar9 = 0x68; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pFVar11->HashCache = 0;
    pFVar11 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar11->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_98);
  FMassEntityManager::BatchCreateEntities
            (local_250,&local_1e0,&local_3a8,&local_98,iVar4,&local_3b8);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_1e0);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_98);
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection(&local_208,&local_3a8,GatherAll);
  local_360 = FTestTag_A::StaticStruct();
  local_338 = FAITestBase::GetTestRunner((FAITestBase *)this);
  bVar2 = FMassArchetypeHandle::IsValid(&local_3a8);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x1ff,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_348 = local_3a8.DataPtr.Object;
  local_340 = local_3a8.DataPtr.Object;
  local_37c = FMassArchetypeData::GetNumEntities(local_3a8.DataPtr.Object);
  ::FString::FString(&local_248,"Entity creation generated expected number of entities");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_248,iVar4,local_37c,local_338);
  local_398 = (uint)!bVar2;
  ::FString::~FString(&local_248);
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_208);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_3b8);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_3a8);
    bVar2 = false;
  }
  else {
    local_378 = local_3b8.ArrayNum;
    if ((iVar4 != local_3b8.ArrayNum) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EntityCount == Entities.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassChunkCollectionTest.cpp"
                           ,0x1d8,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    local_320 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    pTVar12 = &local_d8;
    for (lVar9 = 0x20; lVar9 != 0; lVar9 = lVar9 + -1) {
      *(undefined1 *)pTVar12 = 0;
      pTVar12 = (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
                &pTVar12->field_0x1;
    }
    TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
    TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>(&local_d8);
    local_328 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
                TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                          (&local_b8,local_360);
    local_330 = &local_168;
    pTVar5 = MakeArrayView<FMassArchetypeEntityCollection>(&local_158,&local_208,1);
    pTVar6 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
             TArrayView<FMassArchetypeEntityCollection_const_,int><TArrayView<FMassArchetypeEntityCollection,int>,TArrayView<FMassArchetypeEntityCollection,int>_>
                       (local_330,pTVar5);
    puVar10 = local_1d0;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar10 = *(undefined1 *)&pTVar6->DataPtr;
      pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
               ((longlong)&pTVar6->DataPtr + 1);
      puVar10 = puVar10 + 1;
    }
    puVar10 = local_1d0;
    puVar13 = local_1c0;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    puVar10 = local_1c0;
    pTVar6 = &local_1a8;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *(undefined1 *)&pTVar6->DataPtr = *puVar10;
      puVar10 = puVar10 + 1;
      pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
               ((longlong)&pTVar6->DataPtr + 1);
    }
    FMassEntityManager::BatchChangeTagsForEntities(local_320,&local_1a8,local_328,&local_d8);
    TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
    ~TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>(&local_b8);
    TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
    ~TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>(&local_d8);
    local_2f0 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_390 = 1;
    local_394 = (uint)(0 < local_3b8.ArrayNum);
    if (local_394 == 0) {
      local_318 = 0;
      local_314 = 0;
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
    local_310 = (FMassEntityHandle *)local_3b8.AllocatorInstance.Data;
    local_308 = (FMassEntityHandle *)local_3b8.AllocatorInstance.Data;
    local_300 = (FMassEntityHandle *)local_3b8.AllocatorInstance.Data;
    local_2f8 = *(FMassEntityHandle *)local_3b8.AllocatorInstance.Data;
    FMassEntityManager::GetArchetypeForEntity(local_2f0,&local_370,local_2f8);
    local_2d8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_2e8 = &local_148;
    local_2d0 = FMassArchetypeHandle::FMassArchetypeHandle(local_2e8,&local_3a8);
    local_2e0 = &local_138;
    local_2c8 = FMassArchetypeHandle::FMassArchetypeHandle(local_2e0,&local_370);
    ::FString::FString(&local_238,"Entities have changed their host archetype");
    bVar2 = FTestHelpers::TestNotEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                      (&local_238,local_2c8,local_2d0,local_2d8);
    local_38c = (uint)!bVar2;
    ::FString::~FString(&local_238);
    if (!bVar2) {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_370);
      FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_208);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_3b8);
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_3a8);
      bVar2 = false;
    }
    else {
      local_2a8 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_2c0 = &local_128;
      pTVar7 = MakeArrayView<UScriptStruct_const_*>(&local_118,&local_360,1);
      pTVar8 = TArrayView<UScriptStruct_const_*_const,int>::
               TArrayView<UScriptStruct_const_*_const,int><TArrayView<UScriptStruct_const_*,int>,TArrayView<UScriptStruct_const_*,int>_>
                         (local_2c0,pTVar7);
      puVar10 = local_198;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar10 = *(undefined1 *)&pTVar8->DataPtr;
        pTVar8 = (TArrayView<UScriptStruct_const_*_const,int> *)((longlong)&pTVar8->DataPtr + 1);
        puVar10 = puVar10 + 1;
      }
      puVar10 = local_198;
      puVar13 = local_188;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar13 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      }
      local_2b8 = &local_108;
      local_2b0 = FMassArchetypeHandle::FMassArchetypeHandle(local_2b8,&local_3a8);
      puVar10 = local_188;
      pTVar8 = &local_178;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *(undefined1 *)&pTVar8->DataPtr = *puVar10;
        puVar10 = puVar10 + 1;
        pTVar8 = (TArrayView<UScriptStruct_const_*_const,int> *)((longlong)&pTVar8->DataPtr + 1);
      }
      FMassEntityManager::CreateArchetype(local_2a8,&local_358,local_2b0,&local_178);
      local_290 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_2a0 = &local_f8;
      local_288 = FMassArchetypeHandle::FMassArchetypeHandle(local_2a0,&local_358);
      local_298 = &local_e8;
      local_280 = FMassArchetypeHandle::FMassArchetypeHandle(local_298,&local_370);
      ::FString::FString(&local_228,"The new archetype matches expectations");
      bVar2 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                        (&local_228,local_280,local_288,local_290);
      local_388 = (uint)!bVar2;
      ::FString::~FString(&local_228);
      if (!bVar2) {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_358);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_370);
        FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_208);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_3b8);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_3a8);
        bVar2 = false;
      }
      else {
        local_270 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_278 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_374 = FMassEntityManager::DebugGetArchetypeEntitiesCount(local_278,&local_370);
        ::FString::FString(&local_218,"All the entities have been moved to the expected archetype");
        bVar2 = FTestHelpers::TestEqual<int,int>(&local_218,local_374,iVar4,local_270);
        local_384 = (uint)!bVar2;
        ::FString::~FString(&local_218);
        if (!bVar2) {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_358);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_370);
          FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_208);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_3b8);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_3a8);
          bVar2 = false;
        }
        else {
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_358);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_370);
          FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_208);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_3b8);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_3a8);
          bVar2 = true;
        }
      }
    }
  }
  return bVar2;
}

