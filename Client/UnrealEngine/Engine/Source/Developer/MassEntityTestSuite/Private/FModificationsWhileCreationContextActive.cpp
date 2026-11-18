// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147170920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Observers::FModificationsWhileCreationContextActive::InstantTest
          (FModificationsWhileCreationContextActive *this)

{
  EMassObservedOperationFlags EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FMassEntityManager *pFVar6;
  TArrayView<FMassEntityHandle_const_,int> *pTVar7;
  TNotNull<UMassProcessor_*> *pTVar8;
  TNotNull<UScriptStruct_const_*> *pTVar9;
  UScriptStruct *pUVar10;
  TArrayView<FMassArchetypeEntityCollection,int> *pTVar11;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar12;
  longlong lVar13;
  undefined1 *puVar14;
  TArrayView<FMassEntityHandle_const_,int> *pTVar15;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *pTVar16;
  undefined1 *puVar17;
  undefined1 auStackY_258 [32];
  UScriptStruct *local_1e0;
  TNotNull<UScriptStruct_const_*> *local_1d8;
  UScriptStruct *local_1d0;
  TNotNull<UMassProcessor_*> local_1c8;
  UScriptStruct *local_1c0;
  FMassObserverManager *local_1b8;
  FMassEntityManager *local_1b0;
  FMassEntityManager *local_1a8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_1a0;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *local_198;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *local_190;
  FMassEntityManager *local_188;
  FAutomationTestBase *local_180;
  FAutomationTestBase *local_178;
  FAutomationTestBase *local_170;
  TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> local_168;
  FString local_158;
  FMassArchetypeEntityCollection local_148;
  TNotNull<UMassProcessor_*> local_120;
  TNotNull<UScriptStruct_const_*> local_118 [2];
  TArrayView<FMassEntityHandle_const_,int> local_108;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_b8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_a8;
  TArrayView<FMassEntityHandle_const_,int> local_98;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_88;
  TArrayView<FMassArchetypeEntityCollection,int> local_78;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> local_68;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_258;
  pFVar6 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (pFVar6,&local_b8,(FMassArchetypeHandle *)&this->field_0x60,3,
             (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0xb0);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_b8);
  pTVar7 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (&local_98,
                      (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0xb0);
  pTVar15 = &local_108;
  for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
    *(undefined1 *)&pTVar15->DataPtr = *(undefined1 *)&pTVar7->DataPtr;
    pTVar7 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar7->DataPtr + 1);
    pTVar15 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar15->DataPtr + 1);
  }
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
            (&local_148,(FMassArchetypeHandle *)&this->field_0x60,&local_108,NoDuplicates);
  pFVar6 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_1b8 = FMassEntityManager::GetObserverManager(pFVar6);
  pTVar8 = TNotNull<UMassProcessor_*>::TNotNull<UMassProcessor_*><UMassTestProcessorBase_*_&>
                     (&local_120,(UMassTestProcessorBase **)&this->field_0xa0);
  local_1c8.Val = pTVar8->Val;
  EVar1 = this->field_0xa8;
  local_1d8 = local_118;
  local_1e0 = FTestTag_A::StaticStruct();
  pTVar9 = TNotNull<UScriptStruct_const_*>::TNotNull<UScriptStruct_const_*><UScriptStruct_*>
                     (local_1d8,&local_1e0);
  local_1d0 = pTVar9->Val;
  local_1c0 = local_1d0;
  FMassObserverManager::AddObserverInstance
            (local_1b8,(TNotNull<UScriptStruct_const_*>)local_1d0,EVar1,local_1c8);
  local_1b0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::GetOrMakeObserversLock(local_1b0,&local_168);
  local_1a8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_1a8,&local_f8,(FMassArchetypeHandle *)&this->field_0x60,5,
             (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0xb0);
  if ((*(int *)&this->field_0xb8 != 8) &&
     (bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3735009534624660772>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassObserverTest.cpp"
                         ,0x2dc,
                         "EntitiesInt.Num() == EntitiesToSpawnInFirstBatch + EntitiesToSpawnInSecondBatch"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_f8);
  local_188 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pTVar16 = &local_68;
  for (lVar13 = 0x20; lVar13 != 0; lVar13 = lVar13 + -1) {
    *(undefined1 *)pTVar16 = 0;
    pTVar16 = (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
              &pTVar16->field_0x1;
  }
  local_198 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
              TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                        (&local_68);
  pUVar10 = FTestTag_A::StaticStruct();
  local_190 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
              TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                        (&local_48,pUVar10);
  local_1a0 = &local_88;
  pTVar11 = MakeArrayView<FMassArchetypeEntityCollection>(&local_78,&local_148,1);
  pTVar12 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
            TArrayView<FMassArchetypeEntityCollection_const_,int><TArrayView<FMassArchetypeEntityCollection,int>,TArrayView<FMassArchetypeEntityCollection,int>_>
                      (local_1a0,pTVar11);
  puVar14 = local_e8;
  for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar14 = *(undefined1 *)&pTVar12->DataPtr;
    pTVar12 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
              ((longlong)&pTVar12->DataPtr + 1);
    puVar14 = puVar14 + 1;
  }
  puVar14 = local_e8;
  puVar17 = local_d8;
  for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar17 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar17 = puVar17 + 1;
  }
  puVar14 = local_d8;
  puVar17 = local_c8;
  for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar17 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar17 = puVar17 + 1;
  }
  puVar14 = local_c8;
  pTVar12 = &local_a8;
  for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
    *(undefined1 *)&pTVar12->DataPtr = *puVar14;
    puVar14 = puVar14 + 1;
    pTVar12 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
              ((longlong)&pTVar12->DataPtr + 1);
  }
  FMassEntityManager::BatchChangeTagsForEntities(local_188,&local_a8,local_190,local_198);
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
  ~TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>(&local_48);
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
  ~TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>(&local_68);
  local_180 = FAITestBase::GetTestRunner((FAITestBase *)this);
  bVar4 = FAutomationTestBase::TestTrue
                    (local_180,L"The tag observer is not expected to run yet",
                     *(int *)&this->field_0x98 == 0);
  if (bVar4) {
    TSharedRef<UE::Mass::ObserverManager::FObserverLock,1>::
    ~TSharedRef<UE::Mass::ObserverManager::FObserverLock,1>(&local_168);
    local_178 = FAITestBase::GetTestRunner((FAITestBase *)this);
    bVar4 = FAutomationTestBase::TestTrue
                      (local_178,
                       L"The tag observer is expected to run just after FEntityCreationContext\'s destruction"
                       ,0 < *(int *)&this->field_0x98);
    if (bVar4) {
      local_170 = FAITestBase::GetTestRunner((FAITestBase *)this);
      iVar2 = *(int *)&this->field_0x98;
      ::FString::FString(&local_158,
                         L"The tag observer is expected to process only the original entities, that had a tag added to them"
                        );
      bVar4 = FTestHelpers::TestEqual<int,int>(&local_158,iVar2,3,local_170);
      ::FString::~FString(&local_158);
      if (bVar4) {
        FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_148);
        bVar4 = true;
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_148);
        bVar4 = false;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_148);
      bVar4 = false;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    TSharedRef<UE::Mass::ObserverManager::FObserverLock,1>::
    ~TSharedRef<UE::Mass::ObserverManager::FObserverLock,1>(&local_168);
    FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_148);
    bVar4 = false;
  }
  return bVar4;
}

