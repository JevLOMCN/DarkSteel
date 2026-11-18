// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147156340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Observers::FEntityCreation_Batched::InstantTest(FEntityCreation_Batched *this)

{
  EMassObservedOperationFlags EVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  FMassEntityManager *this_00;
  TNotNull<UMassProcessor_*> *pTVar5;
  TNotNull<UScriptStruct_const_*> *pTVar6;
  UScriptStruct *pUVar7;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> *pTVar8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar9;
  FCreationContext *this_01;
  longlong lVar10;
  undefined1 *puVar11;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *pTVar12;
  undefined1 *puVar13;
  undefined1 auStackY_2e8 [32];
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_288;
  TNotNull<UMassProcessor_*> *local_278;
  UMassProcessor *local_270;
  UScriptStruct *local_268;
  TNotNull<UScriptStruct_const_*> *local_260;
  UScriptStruct *local_258;
  TNotNull<UMassProcessor_*> local_250;
  UScriptStruct *local_248;
  FMassObserverManager *local_240;
  FMassEntityManager *local_238;
  FMassEntityManager *local_230;
  FMassEntityManager *local_228;
  FCreationContext *local_220;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_218;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *local_210;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *local_208;
  FMassEntityManager *local_200;
  FAutomationTestBase *local_1f8;
  FAutomationTestBase *local_1f0;
  FMassEntityManager *local_1e8;
  FMassEntityManager *local_1e0;
  FCreationContext *local_1d8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_1d0;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *local_1c8;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *local_1c0;
  FMassEntityManager *local_1b8;
  FAutomationTestBase *local_1b0;
  FAutomationTestBase *local_1a8;
  FAutomationTestBase *local_1a0;
  undefined4 local_198;
  FString local_190;
  TNotNull<UScriptStruct_const_*> local_180;
  TNotNull<UMassProcessor_*> local_178;
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [24];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_138;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_e8;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> local_d8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_c8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_b8;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> local_a8;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> local_88;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> local_68;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_198 = 6;
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_240 = FMassEntityManager::GetObserverManager(this_00);
  local_278 = &local_178;
  pTVar5 = TNotNull<UMassProcessor_*>::TNotNull<UMassProcessor_*><UMassTestProcessorBase_*_&>
                     (local_278,(UMassTestProcessorBase **)&this->field_0xa0);
  local_270 = pTVar5->Val;
  EVar1 = this->field_0xa8;
  local_260 = &local_180;
  local_250.Val = local_270;
  local_268 = FTestTag_A::StaticStruct();
  pTVar6 = TNotNull<UScriptStruct_const_*>::TNotNull<UScriptStruct_const_*><UScriptStruct_*>
                     (local_260,&local_268);
  local_258 = pTVar6->Val;
  local_248 = local_258;
  FMassObserverManager::AddObserverInstance
            (local_240,(TNotNull<UScriptStruct_const_*>)local_258,EVar1,local_250);
  local_238 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_238,&local_288,(FMassArchetypeHandle *)&this->field_0x60,6,
             (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0xb0);
  local_200 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pTVar12 = &local_a8;
  for (lVar10 = 0x20; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)pTVar12 = 0;
    pTVar12 = (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
              &pTVar12->field_0x1;
  }
  local_210 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
              TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                        (&local_a8);
  pUVar7 = FTestTag_A::StaticStruct();
  local_208 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
              TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                        (&local_68,pUVar7);
  local_218 = &local_c8;
  local_220 = TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::operator->(&local_288);
  local_230 = *(FMassEntityManager **)&this->field_0x28;
  local_228 = local_230;
  pTVar8 = ObserverManager::FCreationContext::GetEntityCollections(local_220,&local_128,local_230);
  pTVar9 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
           TArrayView<FMassArchetypeEntityCollection_const_,int><TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>,TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>_>
                     (local_218,pTVar8);
  puVar11 = local_170;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar11 = *(undefined1 *)&pTVar9->DataPtr;
    pTVar9 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar9->DataPtr + 1);
    puVar11 = puVar11 + 1;
  }
  puVar11 = local_170;
  puVar13 = local_160;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
  }
  puVar11 = local_160;
  puVar13 = local_150;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
  }
  puVar11 = local_150;
  pTVar9 = &local_138;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)&pTVar9->DataPtr = *puVar11;
    puVar11 = puVar11 + 1;
    pTVar9 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar9->DataPtr + 1);
  }
  FMassEntityManager::BatchChangeTagsForEntities(local_200,&local_138,local_208,local_210);
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_128);
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
  ~TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>(&local_68);
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
  ~TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>(&local_a8);
  local_1f8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  bVar4 = FAutomationTestBase::TestTrue
                    (local_1f8,L"The tag observer is not expected to run yet",
                     *(int *)&this->field_0x98 == 0);
  if (bVar4) {
    local_1f0 = FAITestBase::GetTestRunner((FAITestBase *)this);
    this_01 = TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::operator->(&local_288);
    bVar4 = ObserverManager::FCreationContext::DebugAreEntityCollectionsUpToDate(this_01);
    bVar4 = FAutomationTestBase::TestFalse
                      (local_1f0,
                       L"CreationContext\'s entity collection should be invalidated at this moment",
                       bVar4);
    if (bVar4) {
      local_1b8 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      pTVar12 = &local_88;
      for (lVar10 = 0x20; lVar10 != 0; lVar10 = lVar10 + -1) {
        *(undefined1 *)pTVar12 = 0;
        pTVar12 = (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
                  &pTVar12->field_0x1;
      }
      local_1c8 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
                  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                            (&local_88);
      pUVar7 = FTestTag_A::StaticStruct();
      local_1c0 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
                  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                            (&local_48,pUVar7);
      local_1d0 = &local_b8;
      local_1d8 = TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::operator->(&local_288);
      local_1e8 = *(FMassEntityManager **)&this->field_0x28;
      local_1e0 = local_1e8;
      pTVar8 = ObserverManager::FCreationContext::GetEntityCollections
                         (local_1d8,&local_d8,local_1e8);
      pTVar9 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
               TArrayView<FMassArchetypeEntityCollection_const_,int><TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>,TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>_>
                         (local_1d0,pTVar8);
      puVar11 = local_118;
      for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar11 = *(undefined1 *)&pTVar9->DataPtr;
        pTVar9 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
                 ((longlong)&pTVar9->DataPtr + 1);
        puVar11 = puVar11 + 1;
      }
      puVar11 = local_118;
      puVar13 = local_108;
      for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      }
      puVar11 = local_108;
      puVar13 = local_f8;
      for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      }
      puVar11 = local_f8;
      pTVar9 = &local_e8;
      for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
        *(undefined1 *)&pTVar9->DataPtr = *puVar11;
        puVar11 = puVar11 + 1;
        pTVar9 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
                 ((longlong)&pTVar9->DataPtr + 1);
      }
      FMassEntityManager::BatchChangeTagsForEntities(local_1b8,&local_e8,local_1c0,local_1c8);
      TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_d8);
      TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
      ~TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>(&local_48);
      TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
      ~TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>(&local_88);
      local_1b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      bVar4 = FAutomationTestBase::TestTrue
                        (local_1b0,L"The tag observer is still not expected to run",
                         *(int *)&this->field_0x98 == 0);
      if (bVar4) {
        TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
        ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_288);
        local_1a8 = FAITestBase::GetTestRunner((FAITestBase *)this);
        bVar4 = FAutomationTestBase::TestTrue
                          (local_1a8,
                           L"The tag observer is expected to run just after FEntityCreationContext\'s destruction"
                           ,0 < *(int *)&this->field_0x98);
        if (bVar4) {
          local_1a0 = FAITestBase::GetTestRunner((FAITestBase *)this);
          iVar2 = *(int *)&this->field_0xb8;
          iVar3 = *(int *)&this->field_0x98;
          ::FString::FString(&local_190,
                             L"The tag observer is expected to process every entity just once");
          bVar4 = FTestHelpers::TestEqual<int,int>(&local_190,iVar3,iVar2,local_1a0);
          ::FString::~FString(&local_190);
          if (bVar4) {
            bVar4 = true;
          }
          else {
            AITestSuite::ConditionallyBreakOnTestFail();
            bVar4 = false;
          }
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          bVar4 = false;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
        ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_288);
        bVar4 = false;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
      ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_288);
      bVar4 = false;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
    ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_288);
    bVar4 = false;
  }
  return bVar4;
}

