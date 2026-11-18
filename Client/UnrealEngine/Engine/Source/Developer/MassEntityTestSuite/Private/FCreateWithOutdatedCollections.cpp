// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 147100450

void __thiscall
`UE::Mass::Test::EntityCollection::FCreateWithOutdatedCollections::InstantTest'::__l9::<lambda_1>::
operator()(void *this)

{
  int iVar1;
  int iVar2;
  FAutomationTestBase *this_00;
  FAutomationTestExecutionInfo local_78;
  
  UE::AITestSuite::TestsInProgress = UE::AITestSuite::TestsInProgress + -1;
  FAutomationTestExecutionInfo::FAutomationTestExecutionInfo(&local_78);
  this_00 = FAITestBase::GetTestRunner(*(FAITestBase **)this);
  FAutomationTestBase::GetExecutionInfo(this_00,&local_78);
  iVar1 = FAutomationTestExecutionInfo::GetWarningTotal(&local_78);
  iVar2 = FAutomationTestExecutionInfo::GetWarningTotal(&local_78);
  if (0 < iVar1 + iVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
  }
  FAutomationTestExecutionInfo::~FAutomationTestExecutionInfo(&local_78);
  return;
}

// InstantTest @ 147150260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::EntityCollection::FCreateWithOutdatedCollections::InstantTest
          (FCreateWithOutdatedCollections *this)

{
  bool bVar1;
  TArrayView<FMassEntityHandle_const_,int> *pTVar2;
  UScriptStruct *pUVar3;
  TArrayView<FMassArchetypeEntityCollection,int> *pTVar4;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar5;
  longlong lVar6;
  undefined1 *puVar7;
  TArrayView<FMassEntityHandle_const_,int> *pTVar8;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *pTVar9;
  undefined1 *puVar10;
  undefined1 auStack_248 [32];
  bool local_228;
  char local_227;
  undefined1 local_226;
  bool local_225;
  char local_224;
  undefined1 local_223;
  bool local_222;
  char local_221;
  undefined1 local_220;
  undefined1 local_21f;
  FScopeGuardSyntaxSupport local_21e [2];
  uint local_21c;
  uint local_218;
  uint local_214;
  <lambda_1> local_210;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_208;
  TArrayView<FMassEntityHandle_const_,int> *local_1f8;
  TArrayView<FMassEntityHandle_const_,int> *local_1f0;
  FAutomationTestBase *local_1e8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_1e0;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *local_1d8;
  FMassEntityManager *local_1d0;
  FAutomationTestBase *local_1c8;
  FString *local_1c0;
  FString *local_1b8;
  FAutomationTestBase *local_1b0;
  FCreateWithOutdatedCollections *local_1a8;
  FCreateWithOutdatedCollections **local_1a0;
  FAutomationTestBase *local_198;
  undefined4 local_190;
  FMassArchetypeEntityCollection local_188;
  FString local_160;
  FString local_150;
  FString local_140;
  TArrayView<FMassEntityHandle_const_,int> local_128;
  TArrayView<FMassEntityHandle_const_,int> local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_e8;
  FEntityCollection local_d8;
  TArrayView<FMassEntityHandle_const_,int> local_b0;
  TArrayView<FMassEntityHandle_const_,int> local_a0;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_90;
  FString local_80;
  TArrayView<FMassArchetypeEntityCollection,int> local_70;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> local_60;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_248;
  local_190 = 10;
  local_1f8 = &local_b0;
  pTVar2 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_1f8,
                      (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0x90);
  pTVar8 = &local_128;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pTVar8->DataPtr = *(undefined1 *)&pTVar2->DataPtr;
    pTVar2 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar2->DataPtr + 1);
    pTVar8 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar8->DataPtr + 1);
  }
  FEntityCollectionTestBase::GetArraySubset
            ((FEntityCollectionTestBase *)this,&local_208,&local_128,10);
  local_1f0 = &local_a0;
  pTVar2 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_1f0,&local_208);
  pTVar8 = &local_118;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pTVar8->DataPtr = *(undefined1 *)&pTVar2->DataPtr;
    pTVar2 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar2->DataPtr + 1);
    pTVar8 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar8->DataPtr + 1);
  }
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
            (&local_188,(FMassArchetypeHandle *)&this->field_0x50,&local_118,NoDuplicates);
  local_1e8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_228 = FMassArchetypeEntityCollection::IsUpToDate(&local_188);
  ::FString::FString(&local_160,"Initially the created archetype collection is up to date");
  bVar1 = FAutomationTestBase::TestTrue(local_1e8,&local_160,local_228);
  local_227 = !bVar1;
  local_21c = (uint)(byte)local_227;
  ::FString::~FString(&local_160);
  if (local_227 == '\0') {
    local_1d0 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    pTVar9 = &local_60;
    for (lVar6 = 0x20; lVar6 != 0; lVar6 = lVar6 + -1) {
      *(undefined1 *)pTVar9 = 0;
      pTVar9 = (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                *)&pTVar9->field_0x1;
    }
    TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
    TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              (&local_60);
    pUVar3 = FTestFragment_Int::StaticStruct();
    local_1d8 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                ::
                TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                          (&local_40,pUVar3);
    local_1e0 = &local_90;
    pTVar4 = MakeArrayView<FMassArchetypeEntityCollection>(&local_70,&local_188,1);
    pTVar5 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
             TArrayView<FMassArchetypeEntityCollection_const_,int><TArrayView<FMassArchetypeEntityCollection,int>,TArrayView<FMassArchetypeEntityCollection,int>_>
                       (local_1e0,pTVar4);
    puVar7 = local_108;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = *(undefined1 *)&pTVar5->DataPtr;
      pTVar5 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
               ((longlong)&pTVar5->DataPtr + 1);
      puVar7 = puVar7 + 1;
    }
    puVar7 = local_108;
    puVar10 = local_f8;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar7 = local_f8;
    pTVar5 = &local_e8;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *(undefined1 *)&pTVar5->DataPtr = *puVar7;
      puVar7 = puVar7 + 1;
      pTVar5 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
               ((longlong)&pTVar5->DataPtr + 1);
    }
    FMassEntityManager::BatchChangeFragmentCompositionForEntities
              (local_1d0,&local_e8,local_1d8,&local_60);
    TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
    ~TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              (&local_40);
    TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
    ~TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              (&local_60);
    local_1c8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_225 = FMassArchetypeEntityCollection::IsUpToDate(&local_188);
    ::FString::FString(&local_150,
                       "(NOT) After entities are moved to another archetype the InitialCollection is up to date"
                      );
    bVar1 = FAutomationTestBase::TestFalse(local_1c8,&local_150,local_225);
    local_224 = !bVar1;
    local_218 = (uint)(byte)local_224;
    ::FString::~FString(&local_150);
    if (local_224 == '\0') {
      local_1b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_1c0 = &local_80;
      local_1b8 = ::FString::FString(local_1c0,"The entity collection is out of date");
      FAutomationTestBase::AddExpectedErrorPlain(local_1b0,local_1b8,Contains,1);
      local_1a0 = &local_1a8;
      local_1a8 = this;
      ScopeExitSupport::FScopeGuardSyntaxSupport::
      operator+<_UE::Mass::Test::EntityCollection::FCreateWithOutdatedCollections::InstantTest_::__l9::<lambda_1>_>
                (local_21e,&local_210);
      AITestSuite::TestsInProgress = AITestSuite::TestsInProgress + 1;
      FEntityCollection::FEntityCollection(&local_d8,&local_188);
      local_198 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_222 = FEntityCollection::IsEmpty(&local_d8);
      ::FString::FString(&local_140,"The EntityCollection is still empty");
      bVar1 = FAutomationTestBase::TestTrue(local_198,&local_140,local_222);
      local_221 = !bVar1;
      local_214 = (uint)(byte)local_221;
      ::FString::~FString(&local_140);
      if (local_221 == '\0') {
        FEntityCollection::~FEntityCollection(&local_d8);
        ScopeExitSupport::
        TScopeGuard<`UE::Mass::Test::EntityCollection::FCreateWithOutdatedCollections::InstantTest'::__l9::<lambda_1>_>
        ::
        ~TScopeGuard<_UE::Mass::Test::EntityCollection::FCreateWithOutdatedCollections::InstantTest_::__l9::<lambda_1>_>
                  (&local_210);
        local_21f = 1;
        FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_188);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_208);
        local_226 = local_21f;
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        local_220 = 0;
        FEntityCollection::~FEntityCollection(&local_d8);
        ScopeExitSupport::
        TScopeGuard<`UE::Mass::Test::EntityCollection::FCreateWithOutdatedCollections::InstantTest'::__l9::<lambda_1>_>
        ::
        ~TScopeGuard<_UE::Mass::Test::EntityCollection::FCreateWithOutdatedCollections::InstantTest_::__l9::<lambda_1>_>
                  (&local_210);
        FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_188);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_208);
        local_226 = local_220;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_223 = 0;
      FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_188);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_208);
      local_226 = local_223;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_226 = 0;
    FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_188);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_208);
  }
  return (bool)local_226;
}

