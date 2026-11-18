// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147132630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147132a0a) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassArchetypeEntityCollectionTest::FArchetypeEntityCollection_ZeroLength_BatchSetFragmentValues::
InstantTest(FArchetypeEntityCollection_ZeroLength_BatchSetFragmentValues *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FMassArchetypeEntityCollection *pFVar5;
  UScriptStruct *pUVar6;
  TArrayView<FMassArchetypeEntityCollectionWithPayload,int> *pTVar7;
  TArrayView<FMassArchetypeEntityCollectionWithPayload_const_,int> *pTVar8;
  longlong lVar9;
  undefined1 *puVar10;
  FMassArchetypeSharedFragmentValues *pFVar11;
  undefined1 auStackY_378 [32];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_338;
  FMassArchetypeHandle local_328;
  uint local_318;
  uint local_314;
  undefined4 local_310;
  uint local_30c;
  uint local_308;
  uint local_304;
  int local_300;
  int local_2fc;
  int local_2f8;
  int local_2f4;
  FMassArchetypeHandle local_2f0;
  FMassArchetypeHandle local_2e0;
  FMassArchetypeData *local_2d0;
  FMassArchetypeData *local_2c8;
  FAutomationTestBase *local_2c0;
  TArrayView<FMassArchetypeEntityCollectionWithPayload_const_,int> *local_2b8;
  FMassEntityManager *local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  FMassEntityHandle *local_2a0;
  FMassEntityHandle *local_298;
  FMassEntityHandle *local_290;
  FMassEntityHandle local_288;
  FMassEntityManager *local_280;
  FMassArchetypeHandle *local_278;
  FMassArchetypeHandle *local_270;
  FAutomationTestBase *local_268;
  FMassArchetypeHandle *local_260;
  FMassArchetypeHandle *local_258;
  FMassArchetypeHandle *local_250;
  FMassArchetypeHandle *local_248;
  FAutomationTestBase *local_240;
  FMassArchetypeHandle *local_238;
  FMassArchetypeHandle *local_230;
  FMassEntityManager *local_228;
  FAutomationTestBase *local_220;
  undefined4 local_218;
  FMassArchetypeData *local_210;
  FMassArchetypeData *local_208;
  FMassEntityManager *local_200;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_1b8;
  undefined1 local_1a8 [16];
  TArrayView<FMassArchetypeEntityCollectionWithPayload_const_,int> local_198;
  FMassArchetypeEntityCollectionWithPayload local_188;
  TArrayView<FMassArchetypeEntityCollectionWithPayload_const_,int> local_148;
  TArrayView<FMassArchetypeEntityCollectionWithPayload,int> local_138;
  FMassArchetypeHandle local_128;
  FMassArchetypeHandle local_118;
  FMassArchetypeHandle local_108;
  FMassArchetypeHandle local_f8;
  FMassArchetypeEntityCollection local_e8;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> local_c0;
  FMassArchetypeSharedFragmentValues local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_378;
  FMassArchetypeHandle::FMassArchetypeHandle(&local_328,(FMassArchetypeHandle *)&this->field_0x50);
  bVar2 = FMassArchetypeHandle::IsValid(&local_328);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x1ff,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_210 = local_328.DataPtr.Object;
  local_208 = local_328.DataPtr.Object;
  local_300 = FMassArchetypeData::GetNumEntitiesPerChunk(local_328.DataPtr.Object);
  local_218 = 3;
  iVar4 = local_300 * 3;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_338.AllocatorInstance);
  local_338.ArrayNum = 0;
  local_338.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_338.AllocatorInstance);
  local_200 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar11 = &local_98;
  for (lVar9 = 0x68; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pFVar11->HashCache = 0;
    pFVar11 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar11->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_98);
  FMassEntityManager::BatchCreateEntities
            (local_200,&local_1b8,&local_328,&local_98,iVar4,&local_338);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_1b8);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_98);
  local_2c0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  bVar2 = FMassArchetypeHandle::IsValid(&local_328);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x1ff,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_2d0 = local_328.DataPtr.Object;
  local_2c8 = local_328.DataPtr.Object;
  local_2fc = FMassArchetypeData::GetNumEntities(local_328.DataPtr.Object);
  ::FString::FString(&local_1f8,"Entity creation generated expected number of entities");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_1f8,iVar4,local_2fc,local_2c0);
  local_318 = (uint)!bVar2;
  ::FString::~FString(&local_1f8);
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_338);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_328);
    bVar2 = false;
  }
  else {
    local_2f8 = local_338.ArrayNum;
    if ((iVar4 != local_338.ArrayNum) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EntityCount == Entities.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassChunkCollectionTest.cpp"
                           ,0x1f5,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pFVar5 = FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
                       (&local_e8,&local_328,GatherAll);
    FMassArchetypeEntityCollectionWithPayload::FMassArchetypeEntityCollectionWithPayload
              (&local_188,pFVar5);
    FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_e8);
    pUVar6 = FTestFragment_Int::StaticStruct();
    TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
    TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              (&local_c0,pUVar6);
    local_2b0 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_2b8 = &local_148;
    pTVar7 = MakeArrayView<FMassArchetypeEntityCollectionWithPayload>(&local_138,&local_188,1);
    pTVar8 = TArrayView<FMassArchetypeEntityCollectionWithPayload_const_,int>::
             TArrayView<FMassArchetypeEntityCollectionWithPayload_const_,int><TArrayView<FMassArchetypeEntityCollectionWithPayload,int>,TArrayView<FMassArchetypeEntityCollectionWithPayload,int>_>
                       (local_2b8,pTVar7);
    puVar10 = local_1a8;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar10 = *(undefined1 *)&pTVar8->DataPtr;
      pTVar8 = (TArrayView<FMassArchetypeEntityCollectionWithPayload_const_,int> *)
               ((longlong)&pTVar8->DataPtr + 1);
      puVar10 = puVar10 + 1;
    }
    puVar10 = local_1a8;
    pTVar8 = &local_198;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *(undefined1 *)&pTVar8->DataPtr = *puVar10;
      puVar10 = puVar10 + 1;
      pTVar8 = (TArrayView<FMassArchetypeEntityCollectionWithPayload_const_,int> *)
               ((longlong)&pTVar8->DataPtr + 1);
    }
    FMassEntityManager::BatchAddFragmentInstancesForEntities(local_2b0,&local_198,&local_c0);
    local_280 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_310 = 1;
    local_314 = (uint)(0 < local_338.ArrayNum);
    if (local_314 == 0) {
      local_2a8 = 0;
      local_2a4 = 0;
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
    local_2a0 = (FMassEntityHandle *)local_338.AllocatorInstance.Data;
    local_298 = (FMassEntityHandle *)local_338.AllocatorInstance.Data;
    local_290 = (FMassEntityHandle *)local_338.AllocatorInstance.Data;
    local_288 = *(FMassEntityHandle *)local_338.AllocatorInstance.Data;
    FMassEntityManager::GetArchetypeForEntity(local_280,&local_2f0,local_288);
    local_268 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_278 = &local_128;
    local_260 = FMassArchetypeHandle::FMassArchetypeHandle(local_278,&local_328);
    local_270 = &local_118;
    local_258 = FMassArchetypeHandle::FMassArchetypeHandle(local_270,&local_2f0);
    ::FString::FString(&local_1e8,"Entities have changed their host archetype");
    bVar2 = FTestHelpers::TestNotEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                      (&local_1e8,local_258,local_260,local_268);
    local_30c = (uint)!bVar2;
    ::FString::~FString(&local_1e8);
    if (!bVar2) {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_2f0);
      TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
      ~TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                (&local_c0);
      FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_188.Entities);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_338);
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_328);
      bVar2 = false;
    }
    else {
      FMassArchetypeHandle::FMassArchetypeHandle
                (&local_2e0,(FMassArchetypeHandle *)&this->field_0x70);
      local_240 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_250 = &local_108;
      local_238 = FMassArchetypeHandle::FMassArchetypeHandle(local_250,&local_2e0);
      local_248 = &local_f8;
      local_230 = FMassArchetypeHandle::FMassArchetypeHandle(local_248,&local_2f0);
      ::FString::FString(&local_1d8,"The new archetype matches expectations");
      bVar2 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                        (&local_1d8,local_230,local_238,local_240);
      local_308 = (uint)!bVar2;
      ::FString::~FString(&local_1d8);
      if (!bVar2) {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_2e0);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_2f0);
        TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
        ~TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                  (&local_c0);
        FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_188.Entities);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_338);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_328);
        bVar2 = false;
      }
      else {
        local_220 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_228 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_2f4 = FMassEntityManager::DebugGetArchetypeEntitiesCount(local_228,&local_2f0);
        ::FString::FString(&local_1c8,"All the entities have been moved to the expected archetype");
        bVar2 = FTestHelpers::TestEqual<int,int>(&local_1c8,local_2f4,iVar4,local_220);
        local_304 = (uint)!bVar2;
        ::FString::~FString(&local_1c8);
        if (!bVar2) {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_2e0);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_2f0);
          TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
          ~TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                    (&local_c0);
          FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_188.Entities);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_338);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_328);
          bVar2 = false;
        }
        else {
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_2e0);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_2f0);
          TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
          ~TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                    (&local_c0);
          FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_188.Entities);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_338);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_328);
          bVar2 = true;
        }
      }
    }
  }
  return bVar2;
}

