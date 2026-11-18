// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1470fbb90

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassArchetypeEntityCollectionTest::FArchetypeEntityCollection_ZeroLength_Execute::InstantTest'::
__l2::<lambda_1>::operator()(void *this,FMassExecutionContext *param_1)

{
  int iVar1;
  
  iVar1 = FMassExecutionContext::GetNumEntities(param_1);
  **(int **)this = **(int **)this + iVar1;
  return;
}

// InstantTest @ 147133490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
FMassArchetypeEntityCollectionTest::FArchetypeEntityCollection_ZeroLength_Execute::InstantTest
          (FArchetypeEntityCollection_ZeroLength_Execute *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TSharedPtr<FMassEntityManager,1> *pTVar5;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar6;
  TArrayView<UMassProcessor_*,int> *pTVar7;
  TArrayView<UMassProcessor_*_const,int> *pTVar8;
  longlong lVar9;
  undefined1 *puVar10;
  FMassArchetypeSharedFragmentValues *pFVar11;
  undefined1 auStackY_878 [32];
  int local_838;
  uint local_834;
  FMassArchetypeHandle local_830;
  int local_820;
  int local_81c;
  int local_818;
  UMassTestProcessorBase *local_810;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_808;
  FMassArchetypeData *local_7f8;
  FMassArchetypeData *local_7f0;
  FMassArchetypeData *local_7e8;
  FMassArchetypeData *local_7e0;
  FAutomationTestBase *local_7d8;
  TSharedPtr<FMassEntityManager,1> *local_7d0;
  FMassEntityManager *local_7c8;
  <lambda_1> *local_7c0;
  FMassEntityQuery *local_7b8;
  TArrayView<UMassProcessor_*_const,int> *local_7b0;
  FAutomationTestBase *local_7a8;
  <lambda_1> local_7a0;
  undefined4 local_798;
  FString local_790;
  FString local_780;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_770;
  undefined1 local_760 [16];
  undefined1 local_750 [24];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_738;
  TArrayView<UMassProcessor_*_const,int> local_728;
  FMassArchetypeEntityCollection local_718;
  TSharedPtr<FMassEntityManager,1> local_6f0;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_6e0;
  TArrayView<UMassProcessor_*_const,int> local_6d0;
  TArrayView<UMassProcessor_*,int> local_6c0;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_6a8;
  FMassArchetypeSharedFragmentValues local_678;
  FProcessingContext local_608;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_878;
  FMassArchetypeHandle::FMassArchetypeHandle(&local_830,(FMassArchetypeHandle *)&this->field_0x50);
  bVar2 = FMassArchetypeHandle::IsValid(&local_830);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x1ff,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_7f8 = local_830.DataPtr.Object;
  local_7f0 = local_830.DataPtr.Object;
  local_820 = FMassArchetypeData::GetNumEntitiesPerChunk(local_830.DataPtr.Object);
  local_798 = 3;
  iVar4 = local_820 * 3;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_808.AllocatorInstance);
  local_808.ArrayNum = 0;
  local_808.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_808.AllocatorInstance);
  local_7c8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar11 = &local_678;
  for (lVar9 = 0x68; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pFVar11->HashCache = 0;
    pFVar11 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar11->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_678);
  FMassEntityManager::BatchCreateEntities
            (local_7c8,&local_770,&local_830,&local_678,iVar4,&local_808);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_770);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_678);
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection(&local_718,&local_830,GatherAll);
  local_7d8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  bVar2 = FMassArchetypeHandle::IsValid(&local_830);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x1ff,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_7e8 = local_830.DataPtr.Object;
  local_7e0 = local_830.DataPtr.Object;
  local_81c = FMassArchetypeData::GetNumEntities(local_830.DataPtr.Object);
  ::FString::FString(&local_790,"Entity creation generated expected number of entities");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_790,iVar4,local_81c,local_7d8);
  ::FString::~FString(&local_790);
  if (bVar2) {
    local_838 = 0;
    local_7d0 = &local_6f0;
    pTVar5 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                       (local_7d0,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_810 = NewTestProcessor<UMassTestProcessorBase>(pTVar5);
    local_7a0.ProcessedEntitiesCount = &local_838;
    local_7c0 = &local_7a0;
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    TFunction<void___cdecl(FMassExecutionContext_&)><_FMassArchetypeEntityCollectionTest::FArchetypeEntityCollection_ZeroLength_Execute::InstantTest_::__l2::<lambda_1>_>
              (&local_6a8,local_7c0);
    TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
              (&local_810->ForEachEntityChunkExecutionFunction,&local_6a8);
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_6a8);
    local_7b8 = &local_810->EntityQuery;
    FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
              ((FMassFragmentRequirements *)local_7b8,ReadOnly,All);
    UE::Mass::FProcessingContext::FProcessingContext
              (&local_608,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,0.0,true);
    pTVar6 = MakeConstArrayView<FMassArchetypeEntityCollection>(&local_6e0,&local_718,1);
    puVar10 = local_760;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar10 = *(undefined1 *)&pTVar6->DataPtr;
      pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
               ((longlong)&pTVar6->DataPtr + 1);
      puVar10 = puVar10 + 1;
    }
    local_7b0 = &local_6d0;
    pTVar7 = MakeArrayView<UMassProcessor_*>(&local_6c0,(UMassProcessor **)&local_810,1);
    pTVar8 = TArrayView<UMassProcessor_*_const,int>::
             TArrayView<UMassProcessor_*_const,int><TArrayView<UMassProcessor_*,int>,TArrayView<UMassProcessor_*,int>_>
                       (local_7b0,pTVar7);
    puVar10 = local_750;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar10 = *(undefined1 *)&pTVar8->DataPtr;
      pTVar8 = (TArrayView<UMassProcessor_*_const,int> *)((longlong)&pTVar8->DataPtr + 1);
      puVar10 = puVar10 + 1;
    }
    puVar10 = local_760;
    pTVar6 = &local_738;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *(undefined1 *)&pTVar6->DataPtr = *puVar10;
      puVar10 = puVar10 + 1;
      pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
               ((longlong)&pTVar6->DataPtr + 1);
    }
    puVar10 = local_750;
    pTVar8 = &local_728;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *(undefined1 *)&pTVar8->DataPtr = *puVar10;
      puVar10 = puVar10 + 1;
      pTVar8 = (TArrayView<UMassProcessor_*_const,int> *)((longlong)&pTVar8->DataPtr + 1);
    }
    UE::Mass::Executor::RunProcessorsView(&local_728,&local_608,&local_738);
    local_7a8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_818 = local_838;
    ::FString::FString(&local_780,"Number of entities processed matches expectations");
    bVar2 = FTestHelpers::TestEqual<int,int>(&local_780,local_818,iVar4,local_7a8);
    local_834 = (uint)!bVar2;
    ::FString::~FString(&local_780);
    if (!bVar2) {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      UE::Mass::FProcessingContext::~FProcessingContext(&local_608);
      FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_718);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_808);
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_830);
      bVar2 = false;
    }
    else {
      UE::Mass::FProcessingContext::~FProcessingContext(&local_608);
      FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_718);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_808);
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_830);
      bVar2 = true;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_718);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_808);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_830);
    bVar2 = false;
  }
  return bVar2;
}

