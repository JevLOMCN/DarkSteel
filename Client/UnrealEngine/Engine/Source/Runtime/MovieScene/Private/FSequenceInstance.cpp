// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 52

// FSequenceInstance @ 146119e10

/* WARNING: Enum "Type": Some values do not have unique names */

FSequenceInstance * __thiscall
UE::MovieScene::FSequenceInstance::FSequenceInstance
          (FSequenceInstance *this,FSequenceInstance *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  byte bVar2;
  TMap<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
  *pTVar3;
  
  (this->Ledger).OneShotEntities.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Ledger).OneShotEntities.AllocatorInstance.Data =
       (param_1->Ledger).OneShotEntities.AllocatorInstance.Data;
  (param_1->Ledger).OneShotEntities.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Ledger).OneShotEntities.ArrayNum = (param_1->Ledger).OneShotEntities.ArrayNum;
  (this->Ledger).OneShotEntities.ArrayMax = (param_1->Ledger).OneShotEntities.ArrayMax;
  pTVar3 = &(this->Ledger).ImportedEntities;
  (param_1->Ledger).OneShotEntities.ArrayNum = 0;
  (param_1->Ledger).OneShotEntities.ArrayMax = 0;
  *(undefined8 *)&pTVar3->field_0x0 = 0;
  *(undefined8 *)&(this->Ledger).ImportedEntities.field_0x8 = 0;
  *(undefined8 *)&(this->Ledger).ImportedEntities.field_0x20 = 0;
  *(undefined4 *)&(this->Ledger).ImportedEntities.field_0x28 = 0;
  *(undefined4 *)&(this->Ledger).ImportedEntities.field_0x2c = 0x80;
  *(undefined4 *)&(this->Ledger).ImportedEntities.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Ledger).ImportedEntities.field_0x34 = 0;
  *(undefined8 *)&(this->Ledger).ImportedEntities.field_0x40 = 0;
  *(undefined4 *)&(this->Ledger).ImportedEntities.field_0x48 = 0;
  TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
              *)pTVar3,
             (TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
              *)&(param_1->Ledger).ImportedEntities);
  (this->Ledger).bInvalidated = (param_1->Ledger).bInvalidated;
  FMovieSceneContext::FMovieSceneContext(&this->Context,&param_1->Context);
  (this->RootSequenceName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootSequenceName).Data.AllocatorInstance.Data =
       (param_1->RootSequenceName).Data.AllocatorInstance.Data;
  (param_1->RootSequenceName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootSequenceName).Data.ArrayNum = (param_1->RootSequenceName).Data.ArrayNum;
  (this->RootSequenceName).Data.ArrayMax = (param_1->RootSequenceName).Data.ArrayMax;
  (param_1->RootSequenceName).Data.ArrayNum = 0;
  (param_1->RootSequenceName).Data.ArrayMax = 0;
  (this->LegacyEvaluator).Ptr = (param_1->LegacyEvaluator).Ptr;
  (param_1->LegacyEvaluator).Ptr = (FMovieSceneTrackEvaluator *)0x0;
  (this->LegacyPlayer).Ptr = (param_1->LegacyPlayer).Ptr;
  (param_1->LegacyPlayer).Ptr = (FMovieSceneLegacyPlayer *)0x0;
  (this->SequenceUpdater).Ptr = (param_1->SequenceUpdater).Ptr;
  (param_1->SequenceUpdater).Ptr = (ISequenceUpdater *)0x0;
  (this->VolatilityManager).Ptr = (param_1->VolatilityManager).Ptr;
  (param_1->VolatilityManager).Ptr = (FCompiledDataVolatilityManager *)0x0;
  (this->SharedPlaybackState).Object = (param_1->SharedPlaybackState).Object;
  pTVar1 = (param_1->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  (this->SharedPlaybackState).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->SequenceID).Value = (param_1->SequenceID).Value;
  (this->RootOverrideSequenceID).Value = (param_1->RootOverrideSequenceID).Value;
  this->UpdateFlags = param_1->UpdateFlags;
  this->InstanceHandle = param_1->InstanceHandle;
  this->ParentInstanceHandle = param_1->ParentInstanceHandle;
  this->RootInstanceHandle = param_1->RootInstanceHandle;
  bVar2 = (this->bInitialized ^ param_1->bInitialized) & 1U ^ this->field_0x13e;
  this->field_0x13e = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x13e) & 2 ^ bVar2;
  this->field_0x13e = bVar2;
  this->field_0x13e = (bVar2 ^ param_1->field_0x13e) & 4 ^ bVar2;
  return this;
}

// FSequenceInstance @ 146119ff0

/* WARNING: Enum "Type": Some values do not have unique names */

FSequenceInstance * __thiscall
UE::MovieScene::FSequenceInstance::FSequenceInstance
          (FSequenceInstance *this,TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_1)

{
  FString *pFVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  UObject *this_00;
  FString *pFVar6;
  FString local_18;
  
  (this->Ledger).OneShotEntities.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Ledger).OneShotEntities.ArrayNum = 0;
  (this->Ledger).OneShotEntities.ArrayMax = 0;
  *(undefined8 *)&(this->Ledger).ImportedEntities = 0;
  *(undefined8 *)&(this->Ledger).ImportedEntities.field_0x8 = 0;
  *(undefined8 *)&(this->Ledger).ImportedEntities.field_0x20 = 0;
  *(undefined4 *)&(this->Ledger).ImportedEntities.field_0x28 = 0;
  *(undefined4 *)&(this->Ledger).ImportedEntities.field_0x2c = 0x80;
  *(undefined4 *)&(this->Ledger).ImportedEntities.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Ledger).ImportedEntities.field_0x34 = 0;
  *(undefined8 *)&(this->Ledger).ImportedEntities.field_0x40 = 0;
  *(undefined4 *)&(this->Ledger).ImportedEntities.field_0x48 = 0;
  FMovieSceneContext::FMovieSceneContext(&this->Context);
  (this->LegacyEvaluator).Ptr = (FMovieSceneTrackEvaluator *)0x0;
  pFVar1 = &this->RootSequenceName;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootSequenceName).Data.ArrayNum = 0;
  (this->RootSequenceName).Data.ArrayMax = 0;
  (this->LegacyPlayer).Ptr = (FMovieSceneLegacyPlayer *)0x0;
  (this->SequenceUpdater).Ptr = (ISequenceUpdater *)0x0;
  (this->VolatilityManager).Ptr = (FCompiledDataVolatilityManager *)0x0;
  (this->SharedPlaybackState).Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedPlaybackState).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->SequenceID = 0;
  this->RootOverrideSequenceID = 0;
  this->InstanceHandle = *(FInstanceHandle *)&param_1->Object->RootInstanceHandle;
  (this->ParentInstanceHandle).InstanceID = 0xffff;
  (this->ParentInstanceHandle).InstanceSerial = 0;
  this->RootInstanceHandle = param_1->Object->RootInstanceHandle;
  this->UpdateFlags = None;
  puVar3 = &this->field_0x13e;
  this->bInitialized = false;
  this->bHasEverUpdated = false;
  this->bFinished = true;
  this_00 = FWeakObjectPtr::Get(&(param_1->Object->WeakRootSequence).WeakPtr);
  pFVar6 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
  if (pFVar1 != pFVar6) {
    pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RootSequenceName).Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (this->RootSequenceName).Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// FSequenceInstance @ 14611a160

/* WARNING: Enum "Type": Some values do not have unique names */

FSequenceInstance * __thiscall
UE::MovieScene::FSequenceInstance::FSequenceInstance
          (FSequenceInstance *this,TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_1,
          FInstanceHandle param_2,FInstanceHandle param_3,FMovieSceneSequenceID param_4)

{
  undefined1 *puVar1;
  FRootInstanceHandle FVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  (this->Ledger).OneShotEntities.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Ledger).OneShotEntities.ArrayNum = 0;
  (this->Ledger).OneShotEntities.ArrayMax = 0;
  *(undefined8 *)&(this->Ledger).ImportedEntities = 0;
  *(undefined8 *)&(this->Ledger).ImportedEntities.field_0x8 = 0;
  *(undefined8 *)&(this->Ledger).ImportedEntities.field_0x20 = 0;
  *(undefined4 *)&(this->Ledger).ImportedEntities.field_0x28 = 0;
  *(undefined4 *)&(this->Ledger).ImportedEntities.field_0x2c = 0x80;
  *(undefined4 *)&(this->Ledger).ImportedEntities.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Ledger).ImportedEntities.field_0x34 = 0;
  *(undefined8 *)&(this->Ledger).ImportedEntities.field_0x40 = 0;
  *(undefined4 *)&(this->Ledger).ImportedEntities.field_0x48 = 0;
  FMovieSceneContext::FMovieSceneContext(&this->Context);
  (this->RootSequenceName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootSequenceName).Data.ArrayNum = 0;
  (this->RootSequenceName).Data.ArrayMax = 0;
  (this->LegacyEvaluator).Ptr = (FMovieSceneTrackEvaluator *)0x0;
  (this->LegacyPlayer).Ptr = (FMovieSceneLegacyPlayer *)0x0;
  (this->SequenceUpdater).Ptr = (ISequenceUpdater *)0x0;
  (this->VolatilityManager).Ptr = (FCompiledDataVolatilityManager *)0x0;
  (this->SharedPlaybackState).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedPlaybackState).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->SequenceID).Value = param_4.Value;
  (this->RootOverrideSequenceID).Value = 0xffffffff;
  this->InstanceHandle = param_2;
  this->ParentInstanceHandle = param_3;
  FVar2 = param_1->Object->RootInstanceHandle;
  this->bInitialized = false;
  this->bHasEverUpdated = false;
  this->bFinished = false;
  this->RootInstanceHandle = FVar2;
  this->UpdateFlags = None;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FSequenceInstance @ 14611e1e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FSequenceInstance::~FSequenceInstance(FSequenceInstance *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FCompiledDataVolatilityManager *pFVar4;
  ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_> FVar5;
  ISequenceUpdater *pIVar6;
  FMovieSceneLegacyPlayer *pFVar7;
  FMovieSceneTrackEvaluator *pFVar8;
  FScriptContainerElement *pFVar9;
  void *pvVar10;
  bool bVar11;
  atomic<int> local_res8 [2];
  atomic<int> *local_res10;
  
  pTVar3 = (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  local_res8[0] = (atomic<int>)0x0;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    local_res8[0] = pTVar3->SharedReferenceCount;
  }
  if (((SUB42(this->RootInstanceHandle,0) == (this->InstanceHandle).InstanceID) &&
      (SUB42(this->RootInstanceHandle,2) == (this->InstanceHandle).InstanceSerial)) &&
     (local_res8[0] != (atomic<int>)0x1)) {
    local_res10 = local_res8;
    bVar11 = `UE::MovieScene::FSequenceInstance::~FSequenceInstance'::__l3::<lambda_1>::operator()
                       (&local_res10);
    if (!bVar11) {
      ((this->SharedPlaybackState).Object)->bDebugBreakOnDestroy = true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedPlaybackState).SharedReferenceCount.ReferenceController);
  pFVar4 = (this->VolatilityManager).Ptr;
  if (pFVar4 != (FCompiledDataVolatilityManager *)0x0) {
    FVar5 = (pFVar4->CachedCompilationSignatures).Pairs.AllocatorInstance.SecondaryData;
    if (FVar5 != (ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    pTVar3 = (pFVar4->WeakSharedPlaybackState).WeakReferenceCount.ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
    ::operator_delete(pFVar4,0x160);
  }
  pIVar6 = (this->SequenceUpdater).Ptr;
  if (pIVar6 != (ISequenceUpdater *)0x0) {
    (**(code **)*pIVar6)(pIVar6,1);
  }
  pFVar7 = (this->LegacyPlayer).Ptr;
  if (pFVar7 != (FMovieSceneLegacyPlayer *)0x0) {
    (**(code **)(pFVar7->_padding_ + 0x10))(pFVar7,1);
  }
  pFVar8 = (this->LegacyEvaluator).Ptr;
  if (pFVar8 != (FMovieSceneTrackEvaluator *)0x0) {
    (**(code **)pFVar8->_padding_)(pFVar8,1);
  }
  pFVar9 = (this->RootSequenceName).Data.AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&(this->Context).RootToSequenceWarpCounter);
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)
             (this->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
             (this->Context).RootToSequenceTransform.NestedTransforms.ArrayNum);
  pFVar9 = (this->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  *(undefined4 *)&(this->Ledger).ImportedEntities.field_0x48 = 0;
  pvVar10 = *(void **)&(this->Ledger).ImportedEntities.field_0x40;
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Ledger).ImportedEntities);
  pFVar9 = (this->Ledger).OneShotEntities.AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  return;
}

// operator= @ 14611f1f0

/* WARNING: Enum "Type": Some values do not have unique names */

FSequenceInstance * __thiscall
UE::MovieScene::FSequenceInstance::operator=(FSequenceInstance *this,FSequenceInstance *param_1)

{
  TMap<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
  *pTVar1;
  TMap<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
  *pTVar2;
  FString *pFVar3;
  FString *pFVar4;
  TUniquePtr<FMovieSceneTrackEvaluator,TDefaultDelete<FMovieSceneTrackEvaluator>_> *pTVar5;
  TUniquePtr<FMovieSceneTrackEvaluator,TDefaultDelete<FMovieSceneTrackEvaluator>_> *pTVar6;
  TUniquePtr<FMovieSceneLegacyPlayer,TDefaultDelete<FMovieSceneLegacyPlayer>_> *pTVar7;
  TUniquePtr<FMovieSceneLegacyPlayer,TDefaultDelete<FMovieSceneLegacyPlayer>_> *pTVar8;
  TUniquePtr<UE::MovieScene::ISequenceUpdater,TDefaultDelete<UE::MovieScene::ISequenceUpdater>_>
  *pTVar9;
  TUniquePtr<UE::MovieScene::ISequenceUpdater,TDefaultDelete<UE::MovieScene::ISequenceUpdater>_>
  *pTVar10;
  FScriptContainerElement *pFVar11;
  FMovieSceneTrackEvaluator *pFVar12;
  FMovieSceneLegacyPlayer *pFVar13;
  ISequenceUpdater *pIVar14;
  TReferenceControllerBase<1> *pTVar15;
  FSharedPlaybackState *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  byte bVar18;
  
  if (this != param_1) {
    pFVar11 = (this->Ledger).OneShotEntities.AllocatorInstance.Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (this->Ledger).OneShotEntities.AllocatorInstance.Data =
         (param_1->Ledger).OneShotEntities.AllocatorInstance.Data;
    (param_1->Ledger).OneShotEntities.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Ledger).OneShotEntities.ArrayNum = (param_1->Ledger).OneShotEntities.ArrayNum;
    (this->Ledger).OneShotEntities.ArrayMax = (param_1->Ledger).OneShotEntities.ArrayMax;
    (param_1->Ledger).OneShotEntities.ArrayNum = 0;
    (param_1->Ledger).OneShotEntities.ArrayMax = 0;
  }
  pTVar1 = &(param_1->Ledger).ImportedEntities;
  pTVar2 = &(this->Ledger).ImportedEntities;
  if (pTVar2 != pTVar1) {
    TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
                *)pTVar2,
               (TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
                *)pTVar1);
  }
  (this->Ledger).bInvalidated = (param_1->Ledger).bInvalidated;
  FMovieSceneContext::operator=(&this->Context,&param_1->Context);
  pFVar3 = &param_1->RootSequenceName;
  pFVar4 = &this->RootSequenceName;
  if (pFVar4 != pFVar3) {
    pFVar11 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pFVar4->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RootSequenceName).Data.ArrayNum = (param_1->RootSequenceName).Data.ArrayNum;
    (this->RootSequenceName).Data.ArrayMax = (param_1->RootSequenceName).Data.ArrayMax;
    (param_1->RootSequenceName).Data.ArrayNum = 0;
    (param_1->RootSequenceName).Data.ArrayMax = 0;
  }
  pTVar5 = &param_1->LegacyEvaluator;
  pTVar6 = &this->LegacyEvaluator;
  if (pTVar6 != pTVar5) {
    pFVar12 = pTVar6->Ptr;
    pTVar6->Ptr = pTVar5->Ptr;
    pTVar5->Ptr = (FMovieSceneTrackEvaluator *)0x0;
    if (pFVar12 != (FMovieSceneTrackEvaluator *)0x0) {
      (**(code **)pFVar12->_padding_)(pFVar12,1);
    }
  }
  pTVar7 = &param_1->LegacyPlayer;
  pTVar8 = &this->LegacyPlayer;
  if (pTVar8 != pTVar7) {
    pFVar13 = pTVar8->Ptr;
    pTVar8->Ptr = pTVar7->Ptr;
    pTVar7->Ptr = (FMovieSceneLegacyPlayer *)0x0;
    if (pFVar13 != (FMovieSceneLegacyPlayer *)0x0) {
      (**(code **)(pFVar13->_padding_ + 0x10))(pFVar13,1);
    }
  }
  pTVar9 = &param_1->SequenceUpdater;
  pTVar10 = &this->SequenceUpdater;
  if (pTVar10 != pTVar9) {
    pIVar14 = pTVar10->Ptr;
    pTVar10->Ptr = pTVar9->Ptr;
    pTVar9->Ptr = (ISequenceUpdater *)0x0;
    if (pIVar14 != (ISequenceUpdater *)0x0) {
      (**(code **)*pIVar14)(pIVar14,1);
    }
  }
  TUniquePtr<UE::MovieScene::FCompiledDataVolatilityManager,TDefaultDelete<UE::MovieScene::FCompiledDataVolatilityManager>_>
  ::operator=(&this->VolatilityManager,&param_1->VolatilityManager);
  pTVar15 = (param_1->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  pFVar16 = (this->SharedPlaybackState).Object;
  pTVar17 = (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  (this->SharedPlaybackState).Object = (param_1->SharedPlaybackState).Object;
  (this->SharedPlaybackState).SharedReferenceCount.ReferenceController = pTVar15;
  (param_1->SharedPlaybackState).Object = pFVar16;
  (param_1->SharedPlaybackState).SharedReferenceCount.ReferenceController = pTVar17;
  (this->SequenceID).Value = (param_1->SequenceID).Value;
  (this->RootOverrideSequenceID).Value = (param_1->RootOverrideSequenceID).Value;
  this->UpdateFlags = param_1->UpdateFlags;
  this->InstanceHandle = param_1->InstanceHandle;
  this->ParentInstanceHandle = param_1->ParentInstanceHandle;
  this->RootInstanceHandle = param_1->RootInstanceHandle;
  bVar18 = (this->bInitialized ^ param_1->bInitialized) & 1U ^ this->field_0x13e;
  this->field_0x13e = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0x13e) & 2 ^ bVar18;
  this->field_0x13e = bVar18;
  this->field_0x13e = (bVar18 ^ param_1->field_0x13e) & 4 ^ bVar18;
  return this;
}

// CanFinishImmediately @ 1461259b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FSequenceInstance::CanFinishImmediately
          (FSequenceInstance *this,UMovieSceneEntitySystemLinker *param_1)

{
  ISequenceUpdater *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FSharedPlaybackState *pFStack_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  if ((this->SequenceUpdater).Ptr == (ISequenceUpdater *)0x0) {
    return true;
  }
  if ((SUB42(this->RootInstanceHandle,0) != (this->InstanceHandle).InstanceID) ||
     (SUB42(this->RootInstanceHandle,2) != (this->InstanceHandle).InstanceSerial)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RootInstanceHandle == InstanceHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSequenceInstance.cpp"
                       ,0x161,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pIVar1 = (this->SequenceUpdater).Ptr;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x28);
  pFStack_18 = (this->SharedPlaybackState).Object;
  pTStack_10 = (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar4 = (*pcVar2)(pIVar1,&pFStack_18);
  return (bool)uVar4;
}

// CanFinishImmediately @ 1461259c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UE::MovieScene::FSequenceInstance::CanFinishImmediately(FSequenceInstance *this)

{
  ISequenceUpdater *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FSharedPlaybackState *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if ((this->SequenceUpdater).Ptr == (ISequenceUpdater *)0x0) {
    return true;
  }
  if ((SUB42(this->RootInstanceHandle,0) != (this->InstanceHandle).InstanceID) ||
     (SUB42(this->RootInstanceHandle,2) != (this->InstanceHandle).InstanceSerial)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RootInstanceHandle == InstanceHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSequenceInstance.cpp"
                       ,0x161,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pIVar1 = (this->SequenceUpdater).Ptr;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x28);
  local_18 = (this->SharedPlaybackState).Object;
  local_10 = (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar4 = (*pcVar2)(pIVar1,&local_18);
  return (bool)uVar4;
}

// ConditionalRecompile @ 146128c40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FSequenceInstance::ConditionalRecompile
          (FSequenceInstance *this,UMovieSceneEntitySystemLinker *param_1)

{
  FCompiledDataVolatilityManager *this_00;
  bool bVar1;
  undefined1 local_res8 [32];
  
  if (!this->bInitialized) {
    `UE::MovieScene::FSequenceInstance::ConditionalRecompile'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  this_00 = (this->VolatilityManager).Ptr;
  if (this_00 != (FCompiledDataVolatilityManager *)0x0) {
    bVar1 = FCompiledDataVolatilityManager::ConditionalRecompile(this_00);
    if (bVar1) {
      InvalidateCachedData(this,DataChanged);
      return true;
    }
  }
  return false;
}

// ConditionalRecompile @ 146128ca0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UE::MovieScene::FSequenceInstance::ConditionalRecompile(FSequenceInstance *this)

{
  FCompiledDataVolatilityManager *this_00;
  bool bVar1;
  undefined1 local_res8 [32];
  
  if (!this->bInitialized) {
    `UE::MovieScene::FSequenceInstance::ConditionalRecompile'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  this_00 = (this->VolatilityManager).Ptr;
  if (this_00 != (FCompiledDataVolatilityManager *)0x0) {
    bVar1 = FCompiledDataVolatilityManager::ConditionalRecompile(this_00);
    if (bVar1) {
      InvalidateCachedData(this,DataChanged);
      return true;
    }
  }
  return false;
}

// DestroyImmediately @ 14612c110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceInstance::DestroyImmediately
          (FSequenceInstance *this,UMovieSceneEntitySystemLinker *param_1)

{
  ISequenceUpdater *pIVar1;
  code *pcVar2;
  bool bVar3;
  UMovieSceneEntitySystemLinker *pUVar4;
  FSharedPlaybackState *pFStack_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  pUVar4 = (UMovieSceneEntitySystemLinker *)
           FWeakObjectPtr::Get(&(((this->SharedPlaybackState).Object)->WeakLinker).WeakPtr);
  if (*(int *)&(this->Ledger).ImportedEntities.field_0x8 !=
      *(int *)&(this->Ledger).ImportedEntities.field_0x34) {
    if (pUVar4 == (UMovieSceneEntitySystemLinker *)0x0) {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2712505300371373602>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSequenceInstance.cpp"
                         ,0x1de,"Linker");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      if (5 < (byte)LogMovieSceneECS._0_1_) {
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
      }
      FEntityLedger::UnlinkEverything(&this->Ledger,pUVar4,CleanGarbage);
    }
  }
  pIVar1 = (this->SequenceUpdater).Ptr;
  if (pIVar1 != (ISequenceUpdater *)0x0) {
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x40);
    pFStack_18 = (this->SharedPlaybackState).Object;
    pTStack_10 = (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
    if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar2)(pIVar1,&pFStack_18);
  }
  return;
}

// DestroyImmediately @ 14612c120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FSequenceInstance::DestroyImmediately(FSequenceInstance *this)

{
  ISequenceUpdater *pIVar1;
  code *pcVar2;
  bool bVar3;
  UMovieSceneEntitySystemLinker *pUVar4;
  FSharedPlaybackState *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pUVar4 = (UMovieSceneEntitySystemLinker *)
           FWeakObjectPtr::Get(&(((this->SharedPlaybackState).Object)->WeakLinker).WeakPtr);
  if (*(int *)&(this->Ledger).ImportedEntities.field_0x8 !=
      *(int *)&(this->Ledger).ImportedEntities.field_0x34) {
    if (pUVar4 == (UMovieSceneEntitySystemLinker *)0x0) {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2712505300371373602>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSequenceInstance.cpp"
                         ,0x1de,"Linker");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      if (5 < (byte)LogMovieSceneECS._0_1_) {
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
      }
      FEntityLedger::UnlinkEverything(&this->Ledger,pUVar4,CleanGarbage);
    }
  }
  pIVar1 = (this->SequenceUpdater).Ptr;
  if (pIVar1 != (ISequenceUpdater *)0x0) {
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x40);
    local_18 = (this->SharedPlaybackState).Object;
    local_10 = (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar2)(pIVar1,&local_18);
  }
  return;
}

// DissectContext @ 14612cf20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceInstance::DissectContext
          (FSequenceInstance *this,FMovieSceneContext *param_1,
          TArray<TRange<FFrameTime>,TSizedDefaultAllocator<32>_> *param_2)

{
  ISequenceUpdater *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  FSharedPlaybackState *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if (!this->bInitialized) {
    local_res8[0] = 0;
    `UE::MovieScene::FSequenceInstance::DissectContext'::__l2::<lambda_1>::operator()(local_res8);
  }
  if ((this->UpdateFlags & NeedsDissection) != None) {
    if ((this->SequenceID).Value != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SequenceID == MovieSceneSequenceID::Root",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSequenceInstance.cpp"
                         ,0x137,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pIVar1 = (this->SequenceUpdater).Ptr;
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x10);
    local_18 = (this->SharedPlaybackState).Object;
    local_10 = (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar2)(pIVar1,&local_18,param_1,param_2);
  }
  return;
}

// DissectContext @ 14612cfe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceInstance::DissectContext
          (FSequenceInstance *this,UMovieSceneEntitySystemLinker *param_1,
          FMovieSceneContext *param_2,
          TArray<TRange<FFrameTime>,TSizedDefaultAllocator<32>_> *param_3)

{
  DissectContext(this,param_2,param_3);
  return;
}

// EvaluateCondition @ 14612f8d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FSequenceInstance::EvaluateCondition
          (FSequenceInstance *this,FGuid *param_1,FMovieSceneSequenceID *param_2,
          UMovieSceneCondition *param_3,UObject *param_4)

{
  atomic<int> *paVar1;
  ISequenceUpdater *pIVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined1 uVar5;
  
  pIVar2 = (this->SequenceUpdater).Ptr;
  if (pIVar2 != (ISequenceUpdater *)0x0) {
    pcVar3 = *(code **)((longlong)*pIVar2 + 0x60);
    pTVar4 = (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->SharedReferenceCount;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    uVar5 = (*pcVar3)(pIVar2);
    return (bool)uVar5;
  }
  return true;
}

// FindEntities @ 1461314d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceInstance::FindEntities
          (FSequenceInstance *this,UObject *param_1,
          TArray<UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>_> *param_2)

{
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  if ((GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    GC::MarkAsReachable(param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  FEntityLedger::FindImportedEntities
            (&this->Ledger,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_res8,param_2);
  return;
}

// FindEntity @ 146131560

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::FSequenceInstance::FindEntity(FSequenceInstance *this,UObject *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 in_register_00000084;
  UObject *pUVar3;
  uint in_R9D;
  undefined8 local_res8;
  FMovieSceneEvaluationFieldEntityKey local_18;
  
  pUVar3 = (UObject *)CONCAT44(in_register_00000084,param_2);
  if ((GC::GIsIncrementalReachabilityPending) && (pUVar3 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar3);
  }
  local_18.EntityOwner.WeakPtr.ObjectIndex = 0;
  local_18.EntityOwner.WeakPtr.ObjectSerialNumber = 0;
  local_res8 = pUVar3;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_18,(FObjectPtr)&local_res8);
  iVar1 = TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMovieSceneEvaluationFieldEntityKey>
                    ((TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
                      *)&(this->Ledger).ImportedEntities,
                     local_18.EntityOwner.WeakPtr.ObjectSerialNumber ^
                     local_18.EntityOwner.WeakPtr.ObjectIndex ^ in_R9D,&local_18);
  if ((iVar1 == -1) ||
     (lVar2 = (longlong)iVar1 * 0x1c + *(longlong *)&(this->Ledger).ImportedEntities, lVar2 == 0)) {
    *(undefined2 *)param_1 = 0xffff;
  }
  else {
    local_res8._4_2_ = (undefined2)((ulonglong)*(undefined8 *)(lVar2 + 0xc) >> 0x20);
    *(undefined2 *)param_1 = local_res8._4_2_;
  }
  return (FMovieSceneEntityID)(ushort)param_1;
}

// FindSubInstance @ 146132050

/* WARNING: Enum "Type": Some values do not have unique names */

FInstanceHandle __thiscall
UE::MovieScene::FSequenceInstance::FindSubInstance
          (FSequenceInstance *this,FMovieSceneSequenceID param_1)

{
  ISequenceUpdater *pIVar1;
  undefined4 *puVar2;
  undefined4 in_register_00000014;
  undefined1 local_res8 [32];
  
  pIVar1 = (this->SequenceUpdater).Ptr;
  if (pIVar1 != (ISequenceUpdater *)0x0) {
    puVar2 = (undefined4 *)(**(code **)((longlong)*pIVar1 + 0x58))(pIVar1,local_res8);
    *(undefined4 *)CONCAT44(in_register_00000014,param_1.Value) = *puVar2;
    return (FInstanceHandle)param_1.Value;
  }
  *(undefined4 *)CONCAT44(in_register_00000014,param_1.Value) = 0xffff;
  return (FInstanceHandle)param_1.Value;
}

// Finish @ 1461324b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceInstance::Finish
          (FSequenceInstance *this,UMovieSceneEntitySystemLinker *param_1)

{
  TMap<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
  *pTVar1;
  atomic<int> *paVar2;
  ulong64 *puVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FMovieSceneTrackEvaluator *this_00;
  code *pcVar6;
  bool bVar7;
  UMovieSceneEntitySystemLinker *pUVar8;
  IMovieScenePlayer *pIVar9;
  FMovieSceneSpawnRegister *this_01;
  int iVar10;
  int iVar11;
  undefined1 auStackY_118 [32];
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> TStack_d8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> TStack_c8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> TStack_b8;
  FRestoreStateParams FStack_a8;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  void *pvStack_68;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ForElementType<FSetElementId> FStack_50;
  int iStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (((SUB42(this->RootInstanceHandle,0) != (this->InstanceHandle).InstanceID) ||
      (SUB42(this->RootInstanceHandle,2) != (this->InstanceHandle).InstanceSerial)) ||
     (this->bHasEverUpdated)) {
    pUVar8 = (UMovieSceneEntitySystemLinker *)
             FWeakObjectPtr::Get(&(((this->SharedPlaybackState).Object)->WeakLinker).WeakPtr);
    puVar3 = &(pUVar8->EntityManager).SystemSerialNumber;
    *puVar3 = *puVar3 + 1;
    this->bFinished = true;
    FEntityLedger::UnlinkEverything(&this->Ledger,pUVar8,Normal);
    uStack_5c = 0x80;
    auStack_98._0_8_ = (FScriptContainerElement *)0x0;
    FStack_50.InlineData[0] = '\0';
    FStack_50.InlineData[1] = '\0';
    FStack_50.InlineData[2] = '\0';
    FStack_50.InlineData[3] = '\0';
    FStack_50._padding_ = 0;
    uStack_3c._0_4_ = 0;
    uStack_3c._4_1_ = false;
    uStack_3c._5_3_ = 0;
    uStack_34 = 0;
    auStack_88._16_8_ = 0;
    uStack_70 = 0;
    auStack_98._8_4_ = 0;
    auStack_98._12_4_ = 0;
    auStack_88._0_8_ = (FScriptContainerElement *)0x0;
    auStack_88._8_8_ = 0;
    pvStack_68 = (void *)0x0;
    uStack_60 = 0;
    uStack_58 = 0xffffffff;
    uStack_54 = 0;
    FStack_50.SecondaryData = (ForElementType<FSetElementId>)0x0;
    iStack_40 = 0;
    if (this != (FSequenceInstance *)auStack_98) {
      pFVar4 = (this->Ledger).OneShotEntities.AllocatorInstance.Data;
      iVar10 = 0;
      iVar11 = 0;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
        iVar10 = auStack_98._8_4_;
        iVar11 = auStack_98._12_4_;
      }
      (this->Ledger).OneShotEntities.AllocatorInstance.Data =
           (FScriptContainerElement *)auStack_98._0_8_;
      (this->Ledger).OneShotEntities.ArrayNum = iVar10;
      (this->Ledger).OneShotEntities.ArrayMax = iVar11;
    }
    auStack_98._8_4_ = 0;
    auStack_98._12_4_ = 0;
    auStack_98._0_8_ = (FScriptContainerElement *)0x0;
    pTVar1 = &(this->Ledger).ImportedEntities;
    if (pTVar1 != (TMap<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
                   *)auStack_88) {
      TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
                  *)pTVar1,
                 (TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
                  *)auStack_88);
    }
    (this->Ledger).bInvalidated = uStack_3c._4_1_;
    iStack_40 = 0;
    if (FStack_50.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FStack_50.SecondaryData);
    }
    iVar10 = SUB84(auStack_88._8_8_,4);
    auStack_88._8_8_ = auStack_88._8_8_ & 0xffffffff00000000;
    if (iVar10 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,0,(ForAnyElementType *)auStack_88,0,(int *)(auStack_88 + 0xc));
    }
    uStack_58 = 0xffffffff;
    uStack_54 = 0;
    uStack_60 = 0;
    if (0x80 < uStack_5c) {
      uStack_5c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_88 + 0x10),0);
    }
    if (pvStack_68 != (void *)0x0) {
      FMemory::Free(pvStack_68);
    }
    if ((FScriptContainerElement *)auStack_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)auStack_88._0_8_);
    }
    if ((FScriptContainerElement *)auStack_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)auStack_98._0_8_);
    }
    if ((this->SequenceUpdater).Ptr != (ISequenceUpdater *)0x0) {
      if (((SUB42(this->RootInstanceHandle,0) != (this->InstanceHandle).InstanceID) ||
          (SUB42(this->RootInstanceHandle,2) != (this->InstanceHandle).InstanceSerial)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("RootInstanceHandle == InstanceHandle",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSequenceInstance.cpp"
                             ,0x179,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = *(code **)((longlong)*(this->SequenceUpdater).Ptr + 0x30);
      pTVar5 = (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar5->SharedReferenceCount;
        *paVar2 = (atomic<int>)((int)*paVar2 + 1);
        UNLOCK();
      }
      (*pcVar6)();
    }
    TStack_d8.Object = (this->SharedPlaybackState).Object;
    TStack_d8.SharedReferenceCount.ReferenceController =
         (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
    if (TStack_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pIVar9 = FPlayerIndexPlaybackCapability::GetPlayer(&TStack_d8);
    this_00 = (this->LegacyEvaluator).Ptr;
    if (this_00 != (FMovieSceneTrackEvaluator *)0x0) {
      if (pIVar9 == (IMovieScenePlayer *)0x0) {
        bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2712505300371373698>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSequenceInstance.cpp"
                           ,0x17e,"Player");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        FMovieSceneTrackEvaluator::Finish(this_00,pIVar9);
      }
    }
    if ((SUB42(this->RootInstanceHandle,0) == (this->InstanceHandle).InstanceID) &&
       (SUB42(this->RootInstanceHandle,2) == (this->InstanceHandle).InstanceSerial)) {
      this_01 = FSharedPlaybackState::FindCapability<FMovieSceneSpawnRegister>
                          ((this->SharedPlaybackState).Object);
      if (this_01 != (FMovieSceneSpawnRegister *)0x0) {
        TStack_c8.Object = (this->SharedPlaybackState).Object;
        TStack_c8.SharedReferenceCount.ReferenceController =
             (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
        if (TStack_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (TStack_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(TStack_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        FMovieSceneSpawnRegister::ForgetExternallyOwnedSpawnedObjects(this_01,&TStack_c8);
        TStack_b8.Object = (this->SharedPlaybackState).Object;
        TStack_b8.SharedReferenceCount.ReferenceController =
             (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
        if (TStack_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (TStack_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(TStack_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        FMovieSceneSpawnRegister::CleanUp(this_01,&TStack_b8);
      }
      if ((pIVar9 != (IMovieScenePlayer *)0x0) &&
         (bVar7 = FMovieScenePreAnimatedState::IsCapturingGlobalPreAnimatedState
                            (&pIVar9->PreAnimatedState), bVar7)) {
        FStack_a8.TerminalInstanceHandle = *(FInstanceHandle *)&this->RootInstanceHandle;
        FStack_a8.Linker = pUVar8;
        FPreAnimatedStateExtension::RestoreGlobalState(&pUVar8->PreAnimatedState,&FStack_a8);
      }
    }
  }
  return;
}

// Finish @ 1461324c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FSequenceInstance::Finish(FSequenceInstance *this)

{
  TMap<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
  *pTVar1;
  atomic<int> *paVar2;
  ulong64 *puVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FMovieSceneTrackEvaluator *this_00;
  code *pcVar6;
  bool bVar7;
  UMovieSceneEntitySystemLinker *pUVar8;
  IMovieScenePlayer *pIVar9;
  FMovieSceneSpawnRegister *this_01;
  int iVar10;
  int iVar11;
  undefined1 auStackY_118 [32];
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_d8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_c8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_b8;
  FRestoreStateParams local_a8;
  undefined1 local_98 [16];
  undefined1 local_88 [24];
  undefined8 uStack_70;
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_50;
  int local_40;
  undefined8 local_3c;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (((SUB42(this->RootInstanceHandle,0) != (this->InstanceHandle).InstanceID) ||
      (SUB42(this->RootInstanceHandle,2) != (this->InstanceHandle).InstanceSerial)) ||
     (this->bHasEverUpdated)) {
    pUVar8 = (UMovieSceneEntitySystemLinker *)
             FWeakObjectPtr::Get(&(((this->SharedPlaybackState).Object)->WeakLinker).WeakPtr);
    puVar3 = &(pUVar8->EntityManager).SystemSerialNumber;
    *puVar3 = *puVar3 + 1;
    this->bFinished = true;
    FEntityLedger::UnlinkEverything(&this->Ledger,pUVar8,Normal);
    local_5c = 0x80;
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_50.InlineData[0] = '\0';
    local_50.InlineData[1] = '\0';
    local_50.InlineData[2] = '\0';
    local_50.InlineData[3] = '\0';
    local_50._padding_ = 0;
    local_3c._0_4_ = 0;
    local_3c._4_1_ = false;
    local_3c._5_3_ = 0;
    local_34 = 0;
    local_88._16_8_ = 0;
    uStack_70 = 0;
    local_98._8_4_ = 0;
    local_98._12_4_ = 0;
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_8_ = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_50.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    if (this != (FSequenceInstance *)local_98) {
      pFVar4 = (this->Ledger).OneShotEntities.AllocatorInstance.Data;
      iVar10 = 0;
      iVar11 = 0;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
        iVar10 = local_98._8_4_;
        iVar11 = local_98._12_4_;
      }
      (this->Ledger).OneShotEntities.AllocatorInstance.Data =
           (FScriptContainerElement *)local_98._0_8_;
      (this->Ledger).OneShotEntities.ArrayNum = iVar10;
      (this->Ledger).OneShotEntities.ArrayMax = iVar11;
    }
    local_98._8_4_ = 0;
    local_98._12_4_ = 0;
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    pTVar1 = &(this->Ledger).ImportedEntities;
    if (pTVar1 != (TMap<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
                   *)local_88) {
      TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
                  *)pTVar1,
                 (TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
                  *)local_88);
    }
    (this->Ledger).bInvalidated = local_3c._4_1_;
    local_40 = 0;
    if (local_50.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_50.SecondaryData);
    }
    iVar10 = SUB84(local_88._8_8_,4);
    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
    if (iVar10 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
    }
    local_58 = 0xffffffff;
    local_54 = 0;
    local_60 = 0;
    if (0x80 < local_5c) {
      local_5c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
    if ((this->SequenceUpdater).Ptr != (ISequenceUpdater *)0x0) {
      if (((SUB42(this->RootInstanceHandle,0) != (this->InstanceHandle).InstanceID) ||
          (SUB42(this->RootInstanceHandle,2) != (this->InstanceHandle).InstanceSerial)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("RootInstanceHandle == InstanceHandle",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSequenceInstance.cpp"
                             ,0x179,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = *(code **)((longlong)*(this->SequenceUpdater).Ptr + 0x30);
      pTVar5 = (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar5->SharedReferenceCount;
        *paVar2 = (atomic<int>)((int)*paVar2 + 1);
        UNLOCK();
      }
      (*pcVar6)();
    }
    local_d8.Object = (this->SharedPlaybackState).Object;
    local_d8.SharedReferenceCount.ReferenceController =
         (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
    if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pIVar9 = FPlayerIndexPlaybackCapability::GetPlayer(&local_d8);
    this_00 = (this->LegacyEvaluator).Ptr;
    if (this_00 != (FMovieSceneTrackEvaluator *)0x0) {
      if (pIVar9 == (IMovieScenePlayer *)0x0) {
        bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2712505300371373698>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSequenceInstance.cpp"
                           ,0x17e,"Player");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        FMovieSceneTrackEvaluator::Finish(this_00,pIVar9);
      }
    }
    if ((SUB42(this->RootInstanceHandle,0) == (this->InstanceHandle).InstanceID) &&
       (SUB42(this->RootInstanceHandle,2) == (this->InstanceHandle).InstanceSerial)) {
      this_01 = FSharedPlaybackState::FindCapability<FMovieSceneSpawnRegister>
                          ((this->SharedPlaybackState).Object);
      if (this_01 != (FMovieSceneSpawnRegister *)0x0) {
        local_c8.Object = (this->SharedPlaybackState).Object;
        local_c8.SharedReferenceCount.ReferenceController =
             (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
        if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FMovieSceneSpawnRegister::ForgetExternallyOwnedSpawnedObjects(this_01,&local_c8);
        local_b8.Object = (this->SharedPlaybackState).Object;
        local_b8.SharedReferenceCount.ReferenceController =
             (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
        if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FMovieSceneSpawnRegister::CleanUp(this_01,&local_b8);
      }
      if ((pIVar9 != (IMovieScenePlayer *)0x0) &&
         (bVar7 = FMovieScenePreAnimatedState::IsCapturingGlobalPreAnimatedState
                            (&pIVar9->PreAnimatedState), bVar7)) {
        local_a8.TerminalInstanceHandle = *(FInstanceHandle *)&this->RootInstanceHandle;
        local_a8.Linker = pUVar8;
        FPreAnimatedStateExtension::RestoreGlobalState(&pUVar8->PreAnimatedState,&local_a8);
      }
    }
  }
  return;
}

// GetPlayer @ 14613bf60

/* WARNING: Enum "Type": Some values do not have unique names */

IMovieScenePlayer * __thiscall UE::MovieScene::FSequenceInstance::GetPlayer(FSequenceInstance *this)

{
  IMovieScenePlayer *pIVar1;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_18;
  
  local_18.Object = (this->SharedPlaybackState).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pIVar1 = FPlayerIndexPlaybackCapability::GetPlayer(&local_18);
  return pIVar1;
}

// GetPlayerIndex @ 14613bfa0

/* WARNING: Enum "Type": Some values do not have unique names */

ushort __thiscall UE::MovieScene::FSequenceInstance::GetPlayerIndex(FSequenceInstance *this)

{
  ushort uVar1;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_18;
  
  local_18.Object = (this->SharedPlaybackState).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar1 = FPlayerIndexPlaybackCapability::GetPlayerIndex(&local_18);
  return uVar1;
}

// GetSubSequencePath @ 14613cbb0

/* WARNING: Enum "Type": Some values do not have unique names */

FSubSequencePath * __thiscall
UE::MovieScene::FSequenceInstance::GetSubSequencePath
          (FSequenceInstance *this,FSubSequencePath *__return_storage_ptr__)

{
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_18;
  
  local_18.Object = (this->SharedPlaybackState).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSubSequencePath::FSubSequencePath
            (__return_storage_ptr__,(FMovieSceneSequenceID)(this->SequenceID).Value,&local_18);
  return __return_storage_ptr__;
}

// Initialize @ 14613e7e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FSequenceInstance::Initialize(FSequenceInstance *this)

{
  undefined1 local_res8 [32];
  
  if (this->bInitialized) {
    `UE::MovieScene::FSequenceInstance::Initialize'::__l2::<lambda_1>::operator()(local_res8);
  }
  this->bInitialized = true;
  InvalidateCachedData(this,All);
  return;
}

// InitializeLegacyEvaluator @ 14613efa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceInstance::InitializeLegacyEvaluator(FSequenceInstance *this)

{
  TUniquePtr<FMovieSceneLegacyPlayer,TDefaultDelete<FMovieSceneLegacyPlayer>_> *pTVar1;
  FMovieSceneCompiledDataID FVar2;
  UMovieSceneCompiledDataManager *this_00;
  FSharedPlaybackState *pFVar3;
  FMovieSceneTrackEvaluator *pFVar4;
  code *pcVar5;
  bool bVar6;
  FMovieSceneCompiledDataEntry *this_01;
  IMovieScenePlayer *pIVar7;
  UObject *pUVar8;
  longlong lVar9;
  FMovieSceneLegacyPlayer *pFVar10;
  FMovieSceneTrackEvaluator *pFVar11;
  UMovieSceneSequence *pUVar12;
  FMovieSceneTrackEvaluator *pFVar13;
  undefined8 *puVar14;
  ushort *puVar15;
  TUniquePtr<FMovieSceneTrackEvaluator,TDefaultDelete<FMovieSceneTrackEvaluator>_> *pTVar16;
  longlong *plVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ushort local_108;
  ushort local_106;
  ushort local_104 [2];
  byte local_100;
  FMovieSceneCompiledDataEntry *local_f8;
  FString local_f0;
  FString local_e0;
  FName local_d0;
  FName local_c8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_c0;
  FPlaybackCapabilityPtr local_b0;
  FSharedPlaybackState *local_a0;
  TReferenceControllerBase<1> *local_98;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_90;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_80;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_70;
  longlong local_60;
  longlong local_58 [3];
  
  this_00 = (((this->SharedPlaybackState).Object)->CompiledDataManager).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending) && (this_00 != (UMovieSceneCompiledDataManager *)0x0))
  {
    GC::MarkAsReachable((UObject *)this_00);
  }
  FVar2.Value = (((this->SharedPlaybackState).Object)->RootCompiledDataID).Value;
  this_01 = UMovieSceneCompiledDataManager::GetEntryRef(this_00,FVar2);
  local_f8 = this_01;
  if ((this_01->AccumulatedMask & EvaluationTemplate) == None) {
    if ((this->LegacyEvaluator).Ptr == (FMovieSceneTrackEvaluator *)0x0) {
      return;
    }
    local_70.Object = (this->SharedPlaybackState).Object;
    local_70.SharedReferenceCount.ReferenceController =
         (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
    if (local_70.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pIVar7 = FPlayerIndexPlaybackCapability::GetPlayer(&local_70);
    if ((pIVar7 != (IMovieScenePlayer *)0x0) ||
       (bVar6 = `UE::MovieScene::FSequenceInstance::InitializeLegacyEvaluator'::__l67::<lambda_2>::
                operator()(local_res20), bVar6)) {
      FMovieSceneTrackEvaluator::Finish((this->LegacyEvaluator).Ptr,pIVar7);
      pFVar13 = (this->LegacyEvaluator).Ptr;
      (this->LegacyEvaluator).Ptr = (FMovieSceneTrackEvaluator *)0x0;
      if (pFVar13 != (FMovieSceneTrackEvaluator *)0x0) {
        (**(code **)pFVar13->_padding_)(pFVar13,1);
      }
    }
    this->UpdateFlags = this->UpdateFlags & ~HasLegacyTemplates;
    return;
  }
  local_c0.Object = (this->SharedPlaybackState).Object;
  local_c0.SharedReferenceCount.ReferenceController =
       (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pIVar7 = FPlayerIndexPlaybackCapability::GetPlayer(&local_c0);
  pFVar13 = (FMovieSceneTrackEvaluator *)0x0;
  if (pIVar7 != (IMovieScenePlayer *)0x0) goto LAB_14613f383;
  pFVar3 = (this->SharedPlaybackState).Object;
  bVar6 = IsInGameThread();
  if (!bVar6) {
    local_res8[0] = 0;
    `UE::MovieScene::FSharedPlaybackState::
    FindCapability<UE::MovieScene::ILegacyPlayerProviderPlaybackCapability>'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  ILegacyPlayerProviderPlaybackCapability::GetPlaybackCapabilityID();
  FPlaybackCapabilitiesImpl::FindCapability
            ((FPlaybackCapabilitiesImpl *)&pFVar3->Capabilities,&local_b0,1 << (local_100 & 0x1f));
  if (local_b0.Ptr == (longlong *)0x0) {
LAB_14613f0cc:
    if (4 < (byte)LogMovieScene._0_1_) {
      pUVar8 = FWeakObjectPtr::Get(&(((this->SharedPlaybackState).Object)->WeakRootSequence).WeakPtr
                                  );
      if (pUVar8 == (UObject *)0x0) {
        ::FString::FString(&local_e0,L"None");
      }
      else {
        local_c8.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
        local_c8.Number = *(uint *)&pUVar8->field_0x1c;
        ::FName::ToString(&local_c8,&local_e0);
      }
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
    }
    local_90.Object = (this->SharedPlaybackState).Object;
    local_90.SharedReferenceCount.ReferenceController =
         (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
    if (local_90.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pIVar7 = FPlayerIndexPlaybackCapability::GetPlayer(&local_90);
    if (pIVar7 == (IMovieScenePlayer *)0x0) {
      pFVar10 = ::operator_new(0x220);
      pFVar11 = pFVar13;
      if (pFVar10 != (FMovieSceneLegacyPlayer *)0x0) {
        local_80.Object = (this->SharedPlaybackState).Object;
        local_80.SharedReferenceCount.ReferenceController =
             (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
        if (local_80.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar11 = (FMovieSceneTrackEvaluator *)
                  FMovieSceneLegacyPlayer::FMovieSceneLegacyPlayer(pFVar10,&local_80);
      }
      pTVar1 = &this->LegacyPlayer;
      if (pTVar1 == (TUniquePtr<FMovieSceneLegacyPlayer,TDefaultDelete<FMovieSceneLegacyPlayer>_> *)
                    &local_60) {
        if (pFVar11 != (FMovieSceneTrackEvaluator *)0x0) {
          lVar9 = pFVar11->_padding_;
          goto LAB_14613f2c6;
        }
      }
      else {
        pFVar4 = (FMovieSceneTrackEvaluator *)pTVar1->Ptr;
        pTVar1->Ptr = (FMovieSceneLegacyPlayer *)pFVar11;
        if (pFVar4 != (FMovieSceneTrackEvaluator *)0x0) {
          lVar9 = pFVar4->_padding_;
          pFVar11 = pFVar4;
LAB_14613f2c6:
          (**(code **)(lVar9 + 0x10))(pFVar11,1);
        }
      }
      pFVar3 = (this->SharedPlaybackState).Object;
      local_106 = (ushort)pTVar1->Ptr->_padding_;
      bVar6 = IsInGameThread();
      if (!bVar6) {
        local_res10[0] = 0;
        `UE::MovieScene::FSharedPlaybackState::
        AddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>'::__l2::
        <lambda_1>::operator()(local_res10);
      }
      FPlaybackCapabilities::
      AddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>
                (&pFVar3->Capabilities,&local_106);
    }
    pFVar10 = (this->LegacyPlayer).Ptr;
    if (pFVar10 == (FMovieSceneLegacyPlayer *)0x0) {
      bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2712505300371373906>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSequenceInstance.cpp"
                         ,0xae,"Player");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar6 = `UE::MovieScene::FSequenceInstance::InitializeLegacyEvaluator'::__l57::<lambda_1>::
              operator()(local_res18);
      this_01 = local_f8;
      if (!bVar6) {
        return;
      }
      goto LAB_14613f383;
    }
    local_104[0] = (ushort)pFVar10->_padding_;
    puVar15 = local_104;
  }
  else {
    plVar17 = local_b0.Ptr;
    if (local_b0.StorageMode != Inline) {
      if ((local_b0.StorageMode != RawPointer) && (local_b0.StorageMode != SharedPointer)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x30,L"Unexpected playback capability storage mode");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        goto LAB_14613f0cc;
      }
      plVar17 = *(longlong **)local_b0.Ptr;
    }
    if (plVar17 == (longlong *)0x0) goto LAB_14613f0cc;
    if (4 < (byte)LogMovieScene._0_1_) {
      pUVar8 = FWeakObjectPtr::Get(&(((this->SharedPlaybackState).Object)->WeakRootSequence).WeakPtr
                                  );
      if (pUVar8 == (UObject *)0x0) {
        ::FString::FString(&local_f0,L"None");
      }
      else {
        local_d0.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
        local_d0.Number = *(uint *)&pUVar8->field_0x1c;
        ::FName::ToString(&local_d0,&local_f0);
      }
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
    }
    pcVar5 = *(code **)(*plVar17 + 8);
    local_a0 = (this->SharedPlaybackState).Object;
    local_98 = (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
    if (local_98 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_98->SharedReferenceCount = (atomic<int>)((int)local_98->SharedReferenceCount + 1);
      UNLOCK();
    }
    lVar9 = (*pcVar5)(plVar17);
    if (lVar9 == 0) goto LAB_14613f0cc;
    local_108 = *(ushort *)(lVar9 + 0x1e8);
    puVar15 = &local_108;
  }
  FSharedPlaybackState::
  SetOrAddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>
            ((this->SharedPlaybackState).Object,puVar15);
  this_01 = local_f8;
LAB_14613f383:
  this->UpdateFlags = this->UpdateFlags | HasLegacyTemplates;
  pTVar16 = &this->LegacyEvaluator;
  if (pTVar16->Ptr == (FMovieSceneTrackEvaluator *)0x0) {
    pUVar12 = FMovieSceneCompiledDataEntry::GetSequence(this_01);
    pFVar11 = ::operator_new(0x388);
    if (pFVar11 != (FMovieSceneTrackEvaluator *)0x0) {
      pFVar13 = FMovieSceneTrackEvaluator::FMovieSceneTrackEvaluator(pFVar11,pUVar12,FVar2,this_00);
    }
    if (pTVar16 ==
        (TUniquePtr<FMovieSceneTrackEvaluator,TDefaultDelete<FMovieSceneTrackEvaluator>_> *)local_58
       ) {
      if (pFVar13 == (FMovieSceneTrackEvaluator *)0x0) {
        return;
      }
      puVar14 = (undefined8 *)pFVar13->_padding_;
    }
    else {
      pFVar11 = pTVar16->Ptr;
      pTVar16->Ptr = pFVar13;
      if (pFVar11 == (FMovieSceneTrackEvaluator *)0x0) {
        return;
      }
      puVar14 = (undefined8 *)pFVar11->_padding_;
      pFVar13 = pFVar11;
    }
    (*(code *)*puVar14)(pFVar13,1);
  }
  return;
}

// InitializeLegacyPlayer @ 14613f4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FSequenceInstance::InitializeLegacyPlayer(FSequenceInstance *this)

{
  TUniquePtr<FMovieSceneLegacyPlayer,TDefaultDelete<FMovieSceneLegacyPlayer>_> *pTVar1;
  FMovieSceneLegacyPlayer *pFVar2;
  FSharedPlaybackState *pFVar3;
  bool bVar4;
  IMovieScenePlayer *pIVar5;
  FMovieSceneLegacyPlayer *pFVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  ushort local_res10 [4];
  longlong local_28;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_20;
  
  local_20.Object = (this->SharedPlaybackState).Object;
  local_20.SharedReferenceCount.ReferenceController =
       (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  if (local_20.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_20.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pIVar5 = FPlayerIndexPlaybackCapability::GetPlayer(&local_20);
  if (pIVar5 != (IMovieScenePlayer *)0x0) {
    return;
  }
  pFVar6 = ::operator_new(0x220);
  if (pFVar6 == (FMovieSceneLegacyPlayer *)0x0) {
    pFVar6 = (FMovieSceneLegacyPlayer *)0x0;
  }
  else {
    local_20.Object = (this->SharedPlaybackState).Object;
    local_20.SharedReferenceCount.ReferenceController =
         (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
    if (local_20.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_20.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar6 = FMovieSceneLegacyPlayer::FMovieSceneLegacyPlayer
                       (pFVar6,(TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)&local_20);
  }
  pTVar1 = &this->LegacyPlayer;
  if (pTVar1 == (TUniquePtr<FMovieSceneLegacyPlayer,TDefaultDelete<FMovieSceneLegacyPlayer>_> *)
                &local_28) {
    if (pFVar6 == (FMovieSceneLegacyPlayer *)0x0) goto LAB_14613f55a;
    lVar7 = pFVar6->_padding_;
  }
  else {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar6;
    if (pFVar2 == (FMovieSceneLegacyPlayer *)0x0) goto LAB_14613f55a;
    lVar7 = pFVar2->_padding_;
    pFVar6 = pFVar2;
  }
  (**(code **)(lVar7 + 0x10))(pFVar6,1);
LAB_14613f55a:
  pFVar3 = (this->SharedPlaybackState).Object;
  local_res10[0] = (ushort)pTVar1->Ptr->_padding_;
  bVar4 = IsInGameThread();
  if (!bVar4) {
    `UE::MovieScene::FSharedPlaybackState::
    AddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>'::__l2::<lambda_1>
    ::operator()(local_res8);
  }
  FPlaybackCapabilities::
  AddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>
            (&pFVar3->Capabilities,local_res10);
  return;
}

// InvalidateCachedData @ 1461403c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceInstance::InvalidateCachedData
          (FSequenceInstance *this,UMovieSceneEntitySystemLinker *param_1)

{
  InvalidateCachedData(this,All);
  return;
}

// InvalidateCachedData @ 1461403d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceInstance::InvalidateCachedData
          (FSequenceInstance *this,ESequenceInstanceInvalidationType param_1)

{
  int *piVar1;
  TUniquePtr<UE::MovieScene::ISequenceUpdater,TDefaultDelete<UE::MovieScene::ISequenceUpdater>_>
  *pTVar2;
  int iVar3;
  FSharedPlaybackState *pFVar4;
  FWeakObjectPtr FVar5;
  longlong *plVar6;
  ISequenceUpdater *pIVar7;
  code *pcVar8;
  FMovieSceneTrackEvaluator *this_00;
  bool bVar9;
  FMovieSceneCompiledDataID FVar10;
  UMovieSceneCompiledDataManager *this_01;
  undefined4 extraout_var;
  FMovieSceneEvaluationState *this_02;
  UMovieSceneEntitySystemLinker *pUVar11;
  UMovieSceneSequence *pUVar12;
  TUniquePtr<UE::MovieScene::FCompiledDataVolatilityManager,TDefaultDelete<UE::MovieScene::FCompiledDataVolatilityManager>_>
  TVar13;
  FMovieSceneSequenceHierarchy *pFVar14;
  FSequenceUpdater_Flat *this_03;
  FSequenceUpdater_Hierarchical *pFVar15;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_res8;
  UMovieSceneSequence *local_res18;
  TUniquePtr<UE::MovieScene::ISequenceUpdater,TDefaultDelete<UE::MovieScene::ISequenceUpdater>_>
  local_58;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_50;
  
  local_res8.SharedReferenceCount.ReferenceController._0_1_ = param_1;
  if (!this->bInitialized) {
    `UE::MovieScene::FSequenceInstance::InvalidateCachedData'::__l2::<lambda_1>::operator()
              (&local_res8);
  }
  local_res18 = (UMovieSceneSequence *)
                FWeakObjectPtr::Get(&(((this->SharedPlaybackState).Object)->WeakRootSequence).
                                     WeakPtr);
  if ((local_res18 == (UMovieSceneSequence *)0x0) &&
     (bVar9 = `UE::MovieScene::FSequenceInstance::InvalidateCachedData'::__l3::<lambda_2>::
              operator()(&local_res8), !bVar9)) {
    return;
  }
  this_01 = (((this->SharedPlaybackState).Object)->CompiledDataManager).field0_0x0.DebugPtr;
  if (GC::GIsIncrementalReachabilityPending == false) {
    if (this_01 == (UMovieSceneCompiledDataManager *)0x0) goto LAB_146140451;
  }
  else if (this_01 == (UMovieSceneCompiledDataManager *)0x0) {
LAB_146140451:
    local_res8.Object = (FSharedPlaybackState *)&local_res18;
    bVar9 = `UE::MovieScene::FSequenceInstance::InvalidateCachedData'::__l6::<lambda_3>::operator()
                      (&local_res8);
    if (!bVar9) {
      this_01 = UMovieSceneCompiledDataManager::GetPrecompiledData();
    }
  }
  else {
    GC::MarkAsReachable((UObject *)this_01);
  }
  FVar10.Value = (((this->SharedPlaybackState).Object)->RootCompiledDataID).Value;
  if (FVar10.Value == -1) {
    local_res8.Object = (FSharedPlaybackState *)&local_res18;
    bVar9 = `UE::MovieScene::FSequenceInstance::InvalidateCachedData'::__l9::<lambda_4>::operator()
                      (&local_res8);
    if (!bVar9) {
      FVar10 = UMovieSceneCompiledDataManager::GetDataID(this_01,(UMovieSceneSequence *)&local_res8)
      ;
      FVar10.Value = *(int *)CONCAT44(extraout_var,FVar10.Value);
    }
  }
  bVar9 = UMovieSceneCompiledDataManager::ValidateEntry(this_01,FVar10,local_res18);
  if (!bVar9) {
    local_res8.Object = (FSharedPlaybackState *)&local_res18;
    bVar9 = `UE::MovieScene::FSequenceInstance::InvalidateCachedData'::__l12::<lambda_5>::operator()
                      (&local_res8);
    if (!bVar9) {
      return;
    }
  }
  pFVar4 = (this->SharedPlaybackState).Object;
  (this->Ledger).bInvalidated = true;
  this->UpdateFlags = None;
  this_02 = FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>(pFVar4);
  pFVar4 = (this->SharedPlaybackState).Object;
  if ((this->SequenceID).Value != 0) {
    pUVar12 = FSharedPlaybackState::GetSequence(pFVar4,&this->SequenceID);
    if (pUVar12 == (UMovieSceneSequence *)0x0) {
      return;
    }
    if (this_02 == (FMovieSceneEvaluationState *)0x0) {
      return;
    }
    local_50.Object = (this->SharedPlaybackState).Object;
    local_50.SharedReferenceCount.ReferenceController =
         (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
    if (local_50.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FMovieSceneEvaluationState::AssignSequence(this_02,&this->SequenceID,pUVar12,&local_50);
    return;
  }
  pUVar11 = (UMovieSceneEntitySystemLinker *)FWeakObjectPtr::Get(&(pFVar4->WeakLinker).WeakPtr);
  FPlaybackCapabilities::InvalidateCachedData(&pFVar4->Capabilities,pUVar11);
  if (this_02 != (FMovieSceneEvaluationState *)0x0) {
    local_50.Object = (this->SharedPlaybackState).Object;
    local_50.SharedReferenceCount.ReferenceController =
         (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
    if (local_50.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar12 = (UMovieSceneSequence *)
              FWeakObjectPtr::Get(&(((this->SharedPlaybackState).Object)->WeakRootSequence).WeakPtr)
    ;
    FMovieSceneEvaluationState::AssignSequence(this_02,&this->SequenceID,pUVar12,&local_50);
  }
  if ((this->VolatilityManager).Ptr == (FCompiledDataVolatilityManager *)0x0) {
    local_50.Object = (this->SharedPlaybackState).Object;
    local_50.SharedReferenceCount.ReferenceController =
         (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
    if (local_50.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TVar13 = FCompiledDataVolatilityManager::Construct(&local_res8);
    TUniquePtr<UE::MovieScene::FCompiledDataVolatilityManager,TDefaultDelete<UE::MovieScene::FCompiledDataVolatilityManager>_>
    ::operator=(&this->VolatilityManager,
                (TUniquePtr<UE::MovieScene::FCompiledDataVolatilityManager,TDefaultDelete<UE::MovieScene::FCompiledDataVolatilityManager>_>
                 *)TVar13.Ptr);
    pFVar4 = local_res8.Object;
    if (local_res8.Object != (FSharedPlaybackState *)0x0) {
      FVar5 = local_res8.Object[2].PreAnimatedState.WeakLinker.WeakPtr;
      if (FVar5 != (FWeakObjectPtr)0x0) {
        FMemory::Free((void *)FVar5);
      }
      plVar6 = (longlong *)pFVar4->_padding_;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      ::operator_delete(pFVar4,0x160);
    }
  }
  pTVar2 = &this->SequenceUpdater;
  pFVar14 = UMovieSceneCompiledDataManager::FindHierarchy(this_01,FVar10);
  pIVar7 = pTVar2->Ptr;
  if (pIVar7 != (ISequenceUpdater *)0x0) {
    if (pFVar14 != (FMovieSceneSequenceHierarchy *)0x0) {
      (**(code **)((longlong)*pIVar7 + 0x50))(pIVar7,&local_58);
      if ((local_58.Ptr != (ISequenceUpdater *)0x0) && (pTVar2 != &local_58)) {
        pIVar7 = pTVar2->Ptr;
        pTVar2->Ptr = local_58.Ptr;
        local_58.Ptr = (ISequenceUpdater *)0x0;
        if (pIVar7 != (ISequenceUpdater *)0x0) {
          (**(code **)*pIVar7)(pIVar7,1);
        }
      }
      if (local_58.Ptr != (ISequenceUpdater *)0x0) {
        (**(code **)*local_58.Ptr)(local_58.Ptr,1);
      }
    }
    goto LAB_1461406da;
  }
  if (pFVar14 == (FMovieSceneSequenceHierarchy *)0x0) {
    this_03 = ::operator_new(0xd0);
    if (this_03 == (FSequenceUpdater_Flat *)0x0) {
LAB_146140657:
      pFVar15 = (FSequenceUpdater_Hierarchical *)0x0;
    }
    else {
      pFVar15 = (FSequenceUpdater_Hierarchical *)
                FSequenceUpdater_Flat::FSequenceUpdater_Flat(this_03,FVar10);
    }
  }
  else {
    pFVar15 = ::operator_new(0x198);
    if (pFVar15 == (FSequenceUpdater_Hierarchical *)0x0) goto LAB_146140657;
    pFVar15 = FSequenceUpdater_Hierarchical::FSequenceUpdater_Hierarchical(pFVar15,FVar10);
  }
  pIVar7 = pTVar2->Ptr;
  pTVar2->Ptr = (ISequenceUpdater *)pFVar15;
  if (pIVar7 != (ISequenceUpdater *)0x0) {
    (**(code **)*pIVar7)(pIVar7,1);
  }
LAB_1461406da:
  pIVar7 = (this->SequenceUpdater).Ptr;
  pcVar8 = *(code **)((longlong)*pIVar7 + 0x38);
  local_50.Object = (this->SharedPlaybackState).Object;
  local_50.SharedReferenceCount.ReferenceController =
       (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  if (local_50.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar8)(pIVar7,&local_50,
            (ESequenceInstanceInvalidationType)local_res8.SharedReferenceCount.ReferenceController);
  pIVar7 = (this->SequenceUpdater).Ptr;
  pcVar8 = *(code **)((longlong)*pIVar7 + 8);
  local_50.Object = (this->SharedPlaybackState).Object;
  local_50.SharedReferenceCount.ReferenceController =
       (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  if (local_50.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar8)(pIVar7,&local_50,&this->UpdateFlags);
  this_00 = (this->LegacyEvaluator).Ptr;
  if (this_00 != (FMovieSceneTrackEvaluator *)0x0) {
    FMovieSceneTrackEvaluator::InvalidateCachedData(this_00);
  }
  InitializeLegacyEvaluator(this);
  return;
}

// OverrideRootSequence @ 146148e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceInstance::OverrideRootSequence
          (FSequenceInstance *this,UMovieSceneEntitySystemLinker *param_1,
          FMovieSceneSequenceID param_2)

{
  ISequenceUpdater *pIVar1;
  code *pcVar2;
  bool bVar3;
  FSharedPlaybackState *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if ((this->SequenceUpdater).Ptr == (ISequenceUpdater *)0x0) {
    (this->RootOverrideSequenceID).Value = param_2.Value;
    return;
  }
  if ((SUB42(this->RootInstanceHandle,0) != (this->InstanceHandle).InstanceID) ||
     (SUB42(this->RootInstanceHandle,2) != (this->InstanceHandle).InstanceSerial)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RootInstanceHandle == InstanceHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSequenceInstance.cpp"
                       ,0x1ee,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->SequenceUpdater).Ptr;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x48);
  local_18 = (this->SharedPlaybackState).Object;
  local_10 = (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar2)(pIVar1,&local_18,param_2.Value);
  (this->RootOverrideSequenceID).Value = param_2.Value;
  return;
}

// OverrideRootSequence @ 146148f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceInstance::OverrideRootSequence
          (FSequenceInstance *this,FMovieSceneSequenceID param_1)

{
  ISequenceUpdater *pIVar1;
  code *pcVar2;
  bool bVar3;
  FSharedPlaybackState *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if ((this->SequenceUpdater).Ptr == (ISequenceUpdater *)0x0) {
    (this->RootOverrideSequenceID).Value = param_1.Value;
    return;
  }
  if ((SUB42(this->RootInstanceHandle,0) != (this->InstanceHandle).InstanceID) ||
     (SUB42(this->RootInstanceHandle,2) != (this->InstanceHandle).InstanceSerial)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RootInstanceHandle == InstanceHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSequenceInstance.cpp"
                       ,0x1ee,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->SequenceUpdater).Ptr;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x48);
  local_18 = (this->SharedPlaybackState).Object;
  local_10 = (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar2)(pIVar1,&local_18,param_1.Value);
  (this->RootOverrideSequenceID).Value = param_1.Value;
  return;
}

// PostEvaluation @ 146149740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceInstance::PostEvaluation
          (FSequenceInstance *this,UMovieSceneEntitySystemLinker *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FMovieSceneCompiledDataID FVar5;
  IMovieScenePlayer *pIVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_SequenceInstancePostUpdate> FVar8;
  FMovieSceneRootEvaluationTemplateInstance *pFVar9;
  UMovieSceneCompiledDataManager *pUVar10;
  undefined4 extraout_var;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FNameEntryId FVar14;
  LARGE_INTEGER LStackX_8;
  FName FStackX_10;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> TStack_38;
  
  if (SUB42(this->RootInstanceHandle,0) != (this->InstanceHandle).InstanceID) {
    return;
  }
  if (SUB42(this->RootInstanceHandle,2) != (this->InstanceHandle).InstanceSerial) {
    return;
  }
  if ((this->UpdateFlags & NeedsPostEvaluation) == None) {
    return;
  }
  TStack_38.Object = (this->SharedPlaybackState).Object;
  TStack_38.SharedReferenceCount.ReferenceController =
       (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  if (TStack_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pIVar6 = FPlayerIndexPlaybackCapability::GetPlayer(&TStack_38);
  if (pIVar6 == (IMovieScenePlayer *)0x0) {
    return;
  }
  FVar14.Value = 0;
  FVar8 = StatPtr_MovieSceneEval_SequenceInstancePostUpdate;
  if (StatPtr_MovieSceneEval_SequenceInstancePostUpdate ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_SequenceInstancePostUpdate>)0x0) {
    pFVar7 = ::FName::FName(&FStackX_10,"MovieSceneEval_SequenceInstancePostUpdate");
    FVar8 = (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_SequenceInstancePostUpdate>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_MovieSceneEval_SequenceInstancePostUpdate,*pFVar7,
                       L"[External] Sequence Instance Post-Update","STATGROUP_MovieSceneEval",
                       "STATCAT_Advanced",L"Movie Scene Evaluation",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar13 = *(FName *)FVar8;
  bVar2 = false;
  bVar4 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_8.s.LowPart = FVar12.Value;
        LStackX_8.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSequenceInstance.cpp"
                   ,0x1bd);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_8.s.LowPart = FVar12.Value;
      LStackX_8.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar3 = true;
      FVar14.Value = FVar12.Value;
      goto LAB_146149932;
    }
  }
  bVar3 = false;
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
LAB_146149932:
  if (((this->VolatilityManager).Ptr == (FCompiledDataVolatilityManager *)0x0) ||
     ((this->LegacyEvaluator).Ptr == (FMovieSceneTrackEvaluator *)0x0)) {
    (**(code **)(pIVar6->_padding_ + 0xb0))(pIVar6,&this->Context);
  }
  else {
    pFVar9 = (FMovieSceneRootEvaluationTemplateInstance *)
             (**(code **)(pIVar6->_padding_ + 0x18))(pIVar6);
    pUVar10 = FMovieSceneRootEvaluationTemplateInstance::GetCompiledDataManager(pFVar9);
    pFVar9 = (FMovieSceneRootEvaluationTemplateInstance *)
             (**(code **)(pIVar6->_padding_ + 0x18))(pIVar6);
    FVar5 = FMovieSceneRootEvaluationTemplateInstance::GetCompiledDataID(pFVar9);
    FVar5.Value = *(int *)CONCAT44(extraout_var,FVar5.Value);
    (**(code **)(pIVar6->_padding_ + 0xb0))(pIVar6,&this->Context);
    if (pUVar10 != (UMovieSceneCompiledDataManager *)0x0) {
      PurgeStaleTrackTemplates(pUVar10,FVar5);
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      TStack_38.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           (CONCAT44(FVar13.Number,FVar14.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&LStackX_8);
      TStack_38.Object = (FSharedPlaybackState *)(ulonglong)LStackX_8.s.LowPart;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&TStack_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// PostEvaluation @ 146149750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FSequenceInstance::PostEvaluation(FSequenceInstance *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FMovieSceneCompiledDataID FVar5;
  IMovieScenePlayer *pIVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_SequenceInstancePostUpdate> FVar8;
  FMovieSceneRootEvaluationTemplateInstance *pFVar9;
  UMovieSceneCompiledDataManager *pUVar10;
  undefined4 extraout_var;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FNameEntryId FVar14;
  LARGE_INTEGER local_res8;
  FName local_res10;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_38;
  
  if (SUB42(this->RootInstanceHandle,0) != (this->InstanceHandle).InstanceID) {
    return;
  }
  if (SUB42(this->RootInstanceHandle,2) != (this->InstanceHandle).InstanceSerial) {
    return;
  }
  if ((this->UpdateFlags & NeedsPostEvaluation) == None) {
    return;
  }
  local_38.Object = (this->SharedPlaybackState).Object;
  local_38.SharedReferenceCount.ReferenceController =
       (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pIVar6 = FPlayerIndexPlaybackCapability::GetPlayer(&local_38);
  if (pIVar6 == (IMovieScenePlayer *)0x0) {
    return;
  }
  FVar14.Value = 0;
  FVar8 = StatPtr_MovieSceneEval_SequenceInstancePostUpdate;
  if (StatPtr_MovieSceneEval_SequenceInstancePostUpdate ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_SequenceInstancePostUpdate>)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"MovieSceneEval_SequenceInstancePostUpdate");
    FVar8 = (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_SequenceInstancePostUpdate>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_MovieSceneEval_SequenceInstancePostUpdate,*pFVar7,
                       L"[External] Sequence Instance Post-Update","STATGROUP_MovieSceneEval",
                       "STATCAT_Advanced",L"Movie Scene Evaluation",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar13 = *(FName *)FVar8;
  bVar2 = false;
  bVar4 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSequenceInstance.cpp"
                   ,0x1bd);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar12.Value;
      local_res8.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar3 = true;
      FVar14.Value = FVar12.Value;
      goto LAB_146149932;
    }
  }
  bVar3 = false;
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
LAB_146149932:
  if (((this->VolatilityManager).Ptr == (FCompiledDataVolatilityManager *)0x0) ||
     ((this->LegacyEvaluator).Ptr == (FMovieSceneTrackEvaluator *)0x0)) {
    (**(code **)(pIVar6->_padding_ + 0xb0))(pIVar6,&this->Context);
  }
  else {
    pFVar9 = (FMovieSceneRootEvaluationTemplateInstance *)
             (**(code **)(pIVar6->_padding_ + 0x18))(pIVar6);
    pUVar10 = FMovieSceneRootEvaluationTemplateInstance::GetCompiledDataManager(pFVar9);
    pFVar9 = (FMovieSceneRootEvaluationTemplateInstance *)
             (**(code **)(pIVar6->_padding_ + 0x18))(pIVar6);
    FVar5 = FMovieSceneRootEvaluationTemplateInstance::GetCompiledDataID(pFVar9);
    FVar5.Value = *(int *)CONCAT44(extraout_var,FVar5.Value);
    (**(code **)(pIVar6->_padding_ + 0xb0))(pIVar6,&this->Context);
    if (pUVar10 != (UMovieSceneCompiledDataManager *)0x0) {
      PurgeStaleTrackTemplates(pUVar10,FVar5);
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           (CONCAT44(FVar13.Number,FVar14.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res8);
      local_38.Object = (FSharedPlaybackState *)(ulonglong)local_res8.s.LowPart;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// PreEvaluation @ 146149ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceInstance::PreEvaluation
          (FSequenceInstance *this,UMovieSceneEntitySystemLinker *param_1)

{
  IMovieScenePlayer *pIVar1;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> TStack_18;
  
  if ((this->UpdateFlags & NeedsPreEvaluation) != None) {
    if ((SUB42(this->RootInstanceHandle,0) == (this->InstanceHandle).InstanceID) &&
       (SUB42(this->RootInstanceHandle,2) == (this->InstanceHandle).InstanceSerial)) {
      TStack_18.Object = (this->SharedPlaybackState).Object;
      TStack_18.SharedReferenceCount.ReferenceController =
           (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
      if (TStack_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pIVar1 = FPlayerIndexPlaybackCapability::GetPlayer(&TStack_18);
      if (pIVar1 != (IMovieScenePlayer *)0x0) {
        (**(code **)(pIVar1->_padding_ + 0xa8))(pIVar1,&this->Context);
      }
    }
  }
  return;
}

// PreEvaluation @ 146149cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FSequenceInstance::PreEvaluation(FSequenceInstance *this)

{
  IMovieScenePlayer *pIVar1;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_18;
  
  if ((this->UpdateFlags & NeedsPreEvaluation) != None) {
    if ((SUB42(this->RootInstanceHandle,0) == (this->InstanceHandle).InstanceID) &&
       (SUB42(this->RootInstanceHandle,2) == (this->InstanceHandle).InstanceSerial)) {
      local_18.Object = (this->SharedPlaybackState).Object;
      local_18.SharedReferenceCount.ReferenceController =
           (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pIVar1 = FPlayerIndexPlaybackCapability::GetPlayer(&local_18);
      if (pIVar1 != (IMovieScenePlayer *)0x0) {
        (**(code **)(pIVar1->_padding_ + 0xa8))(pIVar1,&this->Context);
      }
    }
  }
  return;
}

// RunLegacyTrackTemplates @ 1461531d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FSequenceInstance::RunLegacyTrackTemplates(FSequenceInstance *this)

{
  FMovieSceneSequenceID FVar1;
  FMovieSceneTrackEvaluator *this_00;
  IMovieScenePlayer *pIVar2;
  FMovieSceneContext *pFVar3;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_98;
  FMovieSceneContext local_88;
  
  if ((this->LegacyEvaluator).Ptr != (FMovieSceneTrackEvaluator *)0x0) {
    local_98.Object = (this->SharedPlaybackState).Object;
    local_98.SharedReferenceCount.ReferenceController =
         (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pIVar2 = FPlayerIndexPlaybackCapability::GetPlayer(&local_98);
    if (pIVar2 != (IMovieScenePlayer *)0x0) {
      this_00 = (this->LegacyEvaluator).Ptr;
      if (this->bFinished) {
        FMovieSceneTrackEvaluator::Finish(this_00,pIVar2);
      }
      else {
        FVar1.Value = (this->RootOverrideSequenceID).Value;
        pFVar3 = FMovieSceneContext::FMovieSceneContext(&local_88,&this->Context);
        FMovieSceneTrackEvaluator::Evaluate(this_00,pFVar3,pIVar2,FVar1);
      }
    }
  }
  return;
}

// Start @ 146155450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceInstance::Start(FSequenceInstance *this,FMovieSceneContext *param_1)

{
  ISequenceUpdater *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  FSharedPlaybackState *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if (!this->bInitialized) {
    local_res8[0] = 0;
    `UE::MovieScene::FSequenceInstance::Start'::__l2::<lambda_1>::operator()(local_res8);
  }
  if ((this->SequenceID).Value != 0) {
    local_res18[0] = 0;
    `UE::MovieScene::FSequenceInstance::Start'::__l2::<lambda_2>::operator()(local_res18);
  }
  this->bFinished = false;
  this->bHasEverUpdated = true;
  if ((SUB42(this->RootInstanceHandle,0) != (this->InstanceHandle).InstanceID) ||
     (SUB42(this->RootInstanceHandle,2) != (this->InstanceHandle).InstanceSerial)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RootInstanceHandle == InstanceHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSequenceInstance.cpp"
                       ,0x144,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->SequenceUpdater).Ptr;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x18);
  local_18 = (this->SharedPlaybackState).Object;
  local_10 = (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar2)(pIVar1,&local_18,param_1);
  return;
}

// Start @ 146155530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceInstance::Start
          (FSequenceInstance *this,UMovieSceneEntitySystemLinker *param_1,
          FMovieSceneContext *param_2)

{
  Start(this,param_2);
  return;
}

// Update @ 14615c370

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceInstance::Update(FSequenceInstance *this,FMovieSceneContext *param_1)

{
  int *piVar1;
  ISequenceUpdater *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_SequenceInstanceUpdate> FVar9;
  UObject *pUVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  LARGE_INTEGER local_88;
  FName local_80;
  FName local_78;
  byte local_70;
  FName local_68;
  FStatMessage local_58;
  FSharedPlaybackState *local_48;
  TReferenceControllerBase<1> *local_40;
  
  FVar9 = StatPtr_MovieSceneEval_SequenceInstanceUpdate;
  if (StatPtr_MovieSceneEval_SequenceInstanceUpdate ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_SequenceInstanceUpdate>)0x0) {
    pFVar8 = ::FName::FName(&local_80,"MovieSceneEval_SequenceInstanceUpdate");
    FVar9 = (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_SequenceInstanceUpdate>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_SequenceInstanceUpdate,
                       *pFVar8,L"Sequence Instance Update","STATGROUP_MovieSceneEval",
                       "STATCAT_Advanced",L"Movie Scene Evaluation",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar13 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar12.Value;
        local_res20.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSequenceInstance.cpp"
                   ,0x14b);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar12.Value;
      uStackX_c = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      goto LAB_14615c4ab;
    }
  }
  bVar5 = false;
  FVar13 = local_68;
LAB_14615c4ab:
  pUVar10 = FWeakObjectPtr::Get(&(((this->SharedPlaybackState).Object)->WeakRootSequence).WeakPtr);
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_78,(UObjectBaseUtility *)pUVar10);
  if (!this->bInitialized) {
    local_res8 = local_res8 & 0xffffff00;
    `UE::MovieScene::FSequenceInstance::Update'::__l2::<lambda_1>::operator()(&local_res8);
  }
  this->bHasEverUpdated = true;
  if (this->bFinished) {
    Start(this,param_1);
  }
  if ((SUB42(this->RootInstanceHandle,0) != (this->InstanceHandle).InstanceID) ||
     (SUB42(this->RootInstanceHandle,2) != (this->InstanceHandle).InstanceSerial)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("RootInstanceHandle == InstanceHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSequenceInstance.cpp"
                       ,0x157,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FMovieSceneContext::operator=(&this->Context,param_1);
  pIVar2 = (this->SequenceUpdater).Ptr;
  pcVar3 = *(code **)((longlong)*pIVar2 + 0x20);
  local_48 = (this->SharedPlaybackState).Object;
  local_40 = (this->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  if (local_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar3)(pIVar2,&local_48);
  if ((local_70 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_70 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_70 & 4) != 0) {
    FThreadStats::AddMessage(local_78,CycleScopeEnd);
  }
  local_70 = 0;
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_58);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Update @ 14615c6a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceInstance::Update
          (FSequenceInstance *this,UMovieSceneEntitySystemLinker *param_1,
          FMovieSceneContext *param_2)

{
  Update(this,param_2);
  return;
}

// operator() @ 1504e3ca0

bool __thiscall
`UE::MovieScene::FSequenceInstance::ConditionalRecompile'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2712505300371373789>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2712505300371373789>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e3ce0

bool __thiscall
`UE::MovieScene::FSequenceInstance::DissectContext'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2712505300371373773>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2712505300371373773>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e3da0

bool __thiscall
`UE::MovieScene::FSequenceInstance::Initialize'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2712505300371373966>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2712505300371373966>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e3de0

bool __thiscall
`UE::MovieScene::FSequenceInstance::InvalidateCachedData'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2712505300371373867>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2712505300371373867>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e3e60

bool __thiscall `UE::MovieScene::FSequenceInstance::Start'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2712505300371373762>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2712505300371373762>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e3ea0

bool __thiscall
`UE::MovieScene::FSequenceInstance::Update'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2712505300371373746>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2712505300371373746>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e3f20

bool __thiscall
`UE::MovieScene::FSequenceInstance::~FSequenceInstance'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_2712505300371373954>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2712505300371373954>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e4880

bool __thiscall
`UE::MovieScene::FSequenceInstance::InitializeLegacyEvaluator'::__l57::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2712505300371373901>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2712505300371373901>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e4940

bool __thiscall `UE::MovieScene::FSequenceInstance::Start'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2712505300371373761>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2712505300371373761>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e49c0

bool __thiscall
`UE::MovieScene::FSequenceInstance::InvalidateCachedData'::__l3::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2712505300371373864>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2712505300371373864>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e4a80

bool __thiscall
`UE::MovieScene::FSequenceInstance::InitializeLegacyEvaluator'::__l67::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2712505300371373888>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2712505300371373888>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e4b00

bool __thiscall
`UE::MovieScene::FSequenceInstance::InvalidateCachedData'::__l6::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2712505300371373855>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2712505300371373855>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504e4b6d;
    }
  }
  bVar2 = false;
LAB_1504e4b6d:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504e4be0

bool __thiscall
`UE::MovieScene::FSequenceInstance::InvalidateCachedData'::__l9::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2712505300371373846>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2712505300371373846>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504e4c4d;
    }
  }
  bVar2 = false;
LAB_1504e4c4d:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504e4c80

bool __thiscall
`UE::MovieScene::FSequenceInstance::InvalidateCachedData'::__l12::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2712505300371373838>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2712505300371373838>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504e4ced;
    }
  }
  bVar2 = false;
LAB_1504e4ced:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

