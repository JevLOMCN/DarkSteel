// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147132f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassArchetypeEntityCollectionTest::FArchetypeEntityCollection_ZeroLength_Destroy::InstantTest
          (FArchetypeEntityCollection_ZeroLength_Destroy *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  FMassArchetypeSharedFragmentValues *pFVar5;
  undefined1 auStackY_538 [32];
  FMassArchetypeHandle local_500;
  int local_4f0;
  uint local_4ec;
  uint local_4e8;
  uint local_4e4;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_4e0;
  int local_4d0;
  int local_4cc;
  int local_4c8;
  int local_4c4;
  int local_4c0;
  FMassArchetypeData *local_4b8;
  FMassEntityManager *local_4b0;
  FMassArchetypeData *local_4a8;
  FMassArchetypeData *local_4a0;
  FAutomationTestBase *local_498;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *local_490;
  FAutomationTestBase *local_488;
  FMassEntityManager *local_480;
  FMassArchetypeData *local_478;
  FMassArchetypeData *local_470;
  FAutomationTestBase *local_468;
  undefined4 local_460;
  FMassArchetypeData *local_458;
  FString local_450;
  FString local_440;
  FString local_430;
  FMassArchetypeEntityCollection local_420;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_3f8;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_3e8;
  FMassArchetypeSharedFragmentValues local_3d8;
  FMassEntityQuery local_368;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_538;
  FMassArchetypeHandle::FMassArchetypeHandle(&local_500,(FMassArchetypeHandle *)&this->field_0x50);
  bVar2 = FMassArchetypeHandle::IsValid(&local_500);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x1ff,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_458 = local_500.DataPtr.Object;
  local_4b8 = local_500.DataPtr.Object;
  local_4d0 = FMassArchetypeData::GetNumEntitiesPerChunk(local_500.DataPtr.Object);
  local_460 = 3;
  local_4f0 = local_4d0 * 3;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_4e0.AllocatorInstance);
  local_4e0.ArrayNum = 0;
  local_4e0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_4e0.AllocatorInstance);
  local_4b0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar5 = &local_3d8;
  for (lVar4 = 0x68; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)&pFVar5->HashCache = 0;
    pFVar5 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar5->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_3d8);
  FMassEntityManager::BatchCreateEntities
            (local_4b0,&local_3f8,&local_500,&local_3d8,local_4f0,&local_4e0);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_3f8);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_3d8);
  local_498 = FAITestBase::GetTestRunner((FAITestBase *)this);
  bVar2 = FMassArchetypeHandle::IsValid(&local_500);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x1ff,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_4a8 = local_500.DataPtr.Object;
  local_4a0 = local_500.DataPtr.Object;
  local_4cc = FMassArchetypeData::GetNumEntities(local_500.DataPtr.Object);
  ::FString::FString(&local_450,"Entity creation generated expected number of entities");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_450,local_4f0,local_4cc,local_498);
  local_4ec = (uint)!bVar2;
  ::FString::~FString(&local_450);
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_4e0);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_500);
    bVar2 = false;
  }
  else {
    FMassEntityQuery::FMassEntityQuery
              (&local_368,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    FMassEntityQuery::CacheArchetypes(&local_368);
    FMassArchetypeEntityCollection::FMassArchetypeEntityCollection(&local_420,&local_500,GatherAll);
    local_488 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_490 = FMassArchetypeEntityCollection::GetRanges(&local_420,&local_3e8);
    local_4c8 = local_490->ArrayNum;
    local_4c4 = local_4c8;
    ::FString::FString(&local_440,
                       "Created collection has expected number of ranges (matching number of chunks created"
                      );
    bVar2 = FTestHelpers::TestEqual<int,int>(&local_440,local_4c4,3,local_488);
    local_4e8 = (uint)!bVar2;
    ::FString::~FString(&local_440);
    if (!bVar2) {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_420);
      FMassEntityQuery::~FMassEntityQuery(&local_368);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_4e0);
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_500);
      bVar2 = false;
    }
    else {
      local_480 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      FMassEntityManager::BatchDestroyEntityChunks(local_480,&local_420);
      local_468 = FAITestBase::GetTestRunner((FAITestBase *)this);
      bVar2 = FMassArchetypeHandle::IsValid(&local_500);
      if ((!bVar2) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArchetypeHandle.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                             ,0x1ff,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      local_478 = local_500.DataPtr.Object;
      local_470 = local_500.DataPtr.Object;
      local_4c0 = FMassArchetypeData::GetNumEntities(local_500.DataPtr.Object);
      ::FString::FString(&local_430,"Entity destruction destroyed all entities");
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_430,local_4c0,0,local_468);
      local_4e4 = (uint)!bVar2;
      ::FString::~FString(&local_430);
      if (!bVar2) {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_420);
        FMassEntityQuery::~FMassEntityQuery(&local_368);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_4e0);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_500);
        bVar2 = false;
      }
      else {
        FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_420);
        FMassEntityQuery::~FMassEntityQuery(&local_368);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_4e0);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_500);
        bVar2 = true;
      }
    }
  }
  return bVar2;
}

