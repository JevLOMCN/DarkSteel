// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 27

// FMassProcessingPhaseManager @ 1471dac60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FMassProcessingPhaseManager * __thiscall
FMassProcessingPhaseManager::FMassProcessingPhaseManager
          (FMassProcessingPhaseManager *this,EProcessorExecutionFlags param_1)

{
  byte bVar1;
  atomic<TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>::FNode_*>
  aVar2;
  FDelegateHandle FVar3;
  longlong lVar4;
  TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>
  *pTVar5;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->_padding_ = (longlong)&___7FMassProcessingPhaseManager__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FTickFunction::FTickFunction((FTickFunction *)this->ProcessingPhases);
  bVar1 = *(byte *)((longlong)&this->ProcessingPhases[0]._padding_ + 2);
  this->ProcessingPhases[0]._padding_ = (longlong)&___7FMassProcessingPhase__6B_;
  this->ProcessingPhases[0].PhaseProcessor.field0_0x0.DebugPtr = (UMassCompositeProcessor *)0x0;
  this->ProcessingPhases[0].Phase = MAX;
  *(byte *)((longlong)&this->ProcessingPhases[0]._padding_ + 2) = bVar1 & 0xfb | 2;
  *(undefined8 *)&this->ProcessingPhases[0].OnPhaseStart = 0;
  *(undefined8 *)&this->ProcessingPhases[0].OnPhaseStart.field_0x8 = 0;
  *(undefined8 *)&this->ProcessingPhases[0].OnPhaseStart.field_0x10 = 0;
  *(undefined8 *)&this->ProcessingPhases[0].OnPhaseStart.field_0x18 = 2;
  *(undefined8 *)&this->ProcessingPhases[0].OnPhaseEnd = 0;
  *(undefined8 *)&this->ProcessingPhases[0].OnPhaseEnd.field_0x8 = 0;
  *(undefined8 *)&this->ProcessingPhases[0].OnPhaseEnd.field_0x10 = 0;
  *(undefined8 *)&this->ProcessingPhases[0].OnPhaseEnd.field_0x18 = 2;
  this->ProcessingPhases[0].PhaseManager = (FMassProcessingPhaseManager *)0x0;
  this->ProcessingPhases[0].bIsDuringMassProcessing = (atomic<bool>)0x0;
  this->ProcessingPhases[0].bRunInParallelMode = true;
  this->ProcessingPhases[0].SupportedTickTypes = '\x05';
  FTickFunction::FTickFunction((FTickFunction *)(this->ProcessingPhases + 1));
  this->ProcessingPhases[1]._padding_ = (longlong)&___7FMassProcessingPhase__6B_;
  this->ProcessingPhases[1].PhaseProcessor.field0_0x0.DebugPtr = (UMassCompositeProcessor *)0x0;
  this->ProcessingPhases[1].Phase = MAX;
  *(undefined8 *)&this->ProcessingPhases[1].OnPhaseStart = 0;
  *(undefined8 *)&this->ProcessingPhases[1].OnPhaseStart.field_0x8 = 0;
  *(undefined8 *)&this->ProcessingPhases[1].OnPhaseStart.field_0x10 = 0;
  *(undefined8 *)&this->ProcessingPhases[1].OnPhaseStart.field_0x18 = 2;
  *(undefined8 *)&this->ProcessingPhases[1].OnPhaseEnd = 0;
  *(undefined8 *)&this->ProcessingPhases[1].OnPhaseEnd.field_0x8 = 0;
  *(undefined8 *)&this->ProcessingPhases[1].OnPhaseEnd.field_0x10 = 0;
  *(undefined8 *)&this->ProcessingPhases[1].OnPhaseEnd.field_0x18 = 2;
  this->ProcessingPhases[1].PhaseManager = (FMassProcessingPhaseManager *)0x0;
  this->ProcessingPhases[1].bIsDuringMassProcessing = (atomic<bool>)0x0;
  this->ProcessingPhases[1].bRunInParallelMode = true;
  *(byte *)((longlong)&this->ProcessingPhases[1]._padding_ + 2) =
       *(byte *)((longlong)&this->ProcessingPhases[1]._padding_ + 2) & 0xfb | 2;
  this->ProcessingPhases[1].SupportedTickTypes = '\x05';
  FTickFunction::FTickFunction((FTickFunction *)(this->ProcessingPhases + 2));
  this->ProcessingPhases[2]._padding_ = (longlong)&___7FMassProcessingPhase__6B_;
  this->ProcessingPhases[2].PhaseProcessor.field0_0x0.DebugPtr = (UMassCompositeProcessor *)0x0;
  this->ProcessingPhases[2].Phase = MAX;
  *(undefined8 *)&this->ProcessingPhases[2].OnPhaseStart = 0;
  *(undefined8 *)&this->ProcessingPhases[2].OnPhaseStart.field_0x8 = 0;
  *(undefined8 *)&this->ProcessingPhases[2].OnPhaseStart.field_0x10 = 0;
  *(undefined8 *)&this->ProcessingPhases[2].OnPhaseStart.field_0x18 = 2;
  *(undefined8 *)&this->ProcessingPhases[2].OnPhaseEnd = 0;
  *(undefined8 *)&this->ProcessingPhases[2].OnPhaseEnd.field_0x8 = 0;
  *(undefined8 *)&this->ProcessingPhases[2].OnPhaseEnd.field_0x10 = 0;
  *(undefined8 *)&this->ProcessingPhases[2].OnPhaseEnd.field_0x18 = 2;
  this->ProcessingPhases[2].PhaseManager = (FMassProcessingPhaseManager *)0x0;
  this->ProcessingPhases[2].bIsDuringMassProcessing = (atomic<bool>)0x0;
  this->ProcessingPhases[2].bRunInParallelMode = true;
  *(byte *)((longlong)&this->ProcessingPhases[2]._padding_ + 2) =
       *(byte *)((longlong)&this->ProcessingPhases[2]._padding_ + 2) & 0xfb | 2;
  this->ProcessingPhases[2].SupportedTickTypes = '\x05';
  FTickFunction::FTickFunction((FTickFunction *)(this->ProcessingPhases + 3));
  this->ProcessingPhases[3]._padding_ = (longlong)&___7FMassProcessingPhase__6B_;
  this->ProcessingPhases[3].PhaseProcessor.field0_0x0.DebugPtr = (UMassCompositeProcessor *)0x0;
  this->ProcessingPhases[3].Phase = MAX;
  *(undefined8 *)&this->ProcessingPhases[3].OnPhaseStart = 0;
  *(undefined8 *)&this->ProcessingPhases[3].OnPhaseStart.field_0x8 = 0;
  *(undefined8 *)&this->ProcessingPhases[3].OnPhaseStart.field_0x10 = 0;
  *(undefined8 *)&this->ProcessingPhases[3].OnPhaseStart.field_0x18 = 2;
  *(undefined8 *)&this->ProcessingPhases[3].OnPhaseEnd = 0;
  *(undefined8 *)&this->ProcessingPhases[3].OnPhaseEnd.field_0x8 = 0;
  *(undefined8 *)&this->ProcessingPhases[3].OnPhaseEnd.field_0x10 = 0;
  *(undefined8 *)&this->ProcessingPhases[3].OnPhaseEnd.field_0x18 = 2;
  this->ProcessingPhases[3].PhaseManager = (FMassProcessingPhaseManager *)0x0;
  this->ProcessingPhases[3].bIsDuringMassProcessing = (atomic<bool>)0x0;
  this->ProcessingPhases[3].bRunInParallelMode = true;
  *(byte *)((longlong)&this->ProcessingPhases[3]._padding_ + 2) =
       *(byte *)((longlong)&this->ProcessingPhases[3]._padding_ + 2) & 0xfb | 2;
  this->ProcessingPhases[3].SupportedTickTypes = '\x05';
  FTickFunction::FTickFunction((FTickFunction *)(this->ProcessingPhases + 4));
  this->ProcessingPhases[4]._padding_ = (longlong)&___7FMassProcessingPhase__6B_;
  this->ProcessingPhases[4].PhaseProcessor.field0_0x0.DebugPtr = (UMassCompositeProcessor *)0x0;
  this->ProcessingPhases[4].Phase = MAX;
  *(undefined8 *)&this->ProcessingPhases[4].OnPhaseStart = 0;
  *(undefined8 *)&this->ProcessingPhases[4].OnPhaseStart.field_0x8 = 0;
  *(undefined8 *)&this->ProcessingPhases[4].OnPhaseStart.field_0x10 = 0;
  *(undefined8 *)&this->ProcessingPhases[4].OnPhaseStart.field_0x18 = 2;
  *(undefined8 *)&this->ProcessingPhases[4].OnPhaseEnd = 0;
  *(undefined8 *)&this->ProcessingPhases[4].OnPhaseEnd.field_0x8 = 0;
  *(undefined8 *)&this->ProcessingPhases[4].OnPhaseEnd.field_0x10 = 0;
  *(undefined8 *)&this->ProcessingPhases[4].OnPhaseEnd.field_0x18 = 2;
  this->ProcessingPhases[4].PhaseManager = (FMassProcessingPhaseManager *)0x0;
  this->ProcessingPhases[4].bIsDuringMassProcessing = (atomic<bool>)0x0;
  this->ProcessingPhases[4].bRunInParallelMode = true;
  *(byte *)((longlong)&this->ProcessingPhases[4]._padding_ + 2) =
       *(byte *)((longlong)&this->ProcessingPhases[4]._padding_ + 2) & 0xfb | 2;
  this->ProcessingPhases[4].SupportedTickTypes = '\x05';
  FTickFunction::FTickFunction((FTickFunction *)(this->ProcessingPhases + 5));
  this->ProcessingPhases[5]._padding_ = (longlong)&___7FMassProcessingPhase__6B_;
  this->ProcessingPhases[5].PhaseProcessor.field0_0x0.DebugPtr = (UMassCompositeProcessor *)0x0;
  this->ProcessingPhases[5].Phase = MAX;
  *(undefined8 *)&this->ProcessingPhases[5].OnPhaseStart = 0;
  *(undefined8 *)&this->ProcessingPhases[5].OnPhaseStart.field_0x8 = 0;
  *(undefined8 *)&this->ProcessingPhases[5].OnPhaseStart.field_0x10 = 0;
  *(undefined8 *)&this->ProcessingPhases[5].OnPhaseStart.field_0x18 = 2;
  *(undefined8 *)&this->ProcessingPhases[5].OnPhaseEnd = 0;
  *(undefined8 *)&this->ProcessingPhases[5].OnPhaseEnd.field_0x8 = 0;
  *(undefined8 *)&this->ProcessingPhases[5].OnPhaseEnd.field_0x10 = 0;
  *(undefined8 *)&this->ProcessingPhases[5].OnPhaseEnd.field_0x18 = 2;
  this->ProcessingPhases[5].PhaseManager = (FMassProcessingPhaseManager *)0x0;
  this->ProcessingPhases[5].bIsDuringMassProcessing = (atomic<bool>)0x0;
  this->ProcessingPhases[5].bRunInParallelMode = true;
  *(byte *)((longlong)&this->ProcessingPhases[5]._padding_ + 2) =
       *(byte *)((longlong)&this->ProcessingPhases[5]._padding_ + 2) & 0xfb | 2;
  this->ProcessingPhases[5].SupportedTickTypes = '\x05';
  this->ProcessingGraphBuildStates[0].LastResult.DependencyGraphFileName.Data.AllocatorInstance.Data
       = (FScriptContainerElement *)0x0;
  this->ProcessingGraphBuildStates[0].LastResult.DependencyGraphFileName.Data.ArrayNum = 0;
  this->ProcessingGraphBuildStates[0].LastResult.DependencyGraphFileName.Data.ArrayMax = 0;
  this->ProcessingGraphBuildStates[0].LastResult.PrunedProcessors.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingGraphBuildStates[0].LastResult.PrunedProcessors.ArrayNum = 0;
  this->ProcessingGraphBuildStates[0].LastResult.PrunedProcessors.ArrayMax = 0;
  this->ProcessingGraphBuildStates[0].LastResult.MaxSequenceLength = 0;
  this->ProcessingGraphBuildStates[0].LastResult.ArchetypeDataVersion = 0;
  this->ProcessingGraphBuildStates[0].LastResult.PrunedProcessorClasses.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingGraphBuildStates[0].LastResult.PrunedProcessorClasses.ArrayNum = 0;
  this->ProcessingGraphBuildStates[0].LastResult.PrunedProcessorClasses.ArrayMax = 0;
  this->ProcessingGraphBuildStates[0].bNewArchetypes = true;
  this->ProcessingGraphBuildStates[0].bProcessorsNeedRebuild = true;
  this->ProcessingGraphBuildStates[0].bInitialized = false;
  this->ProcessingGraphBuildStates[1].LastResult.DependencyGraphFileName.Data.AllocatorInstance.Data
       = (FScriptContainerElement *)0x0;
  this->ProcessingGraphBuildStates[1].LastResult.DependencyGraphFileName.Data.ArrayNum = 0;
  this->ProcessingGraphBuildStates[1].LastResult.DependencyGraphFileName.Data.ArrayMax = 0;
  this->ProcessingGraphBuildStates[1].LastResult.PrunedProcessors.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingGraphBuildStates[1].LastResult.PrunedProcessors.ArrayNum = 0;
  this->ProcessingGraphBuildStates[1].LastResult.PrunedProcessors.ArrayMax = 0;
  this->ProcessingGraphBuildStates[1].LastResult.MaxSequenceLength = 0;
  this->ProcessingGraphBuildStates[1].LastResult.ArchetypeDataVersion = 0;
  this->ProcessingGraphBuildStates[1].LastResult.PrunedProcessorClasses.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingGraphBuildStates[1].LastResult.PrunedProcessorClasses.ArrayNum = 0;
  this->ProcessingGraphBuildStates[1].LastResult.PrunedProcessorClasses.ArrayMax = 0;
  this->ProcessingGraphBuildStates[1].bNewArchetypes = true;
  this->ProcessingGraphBuildStates[1].bProcessorsNeedRebuild = true;
  this->ProcessingGraphBuildStates[1].bInitialized = false;
  this->ProcessingGraphBuildStates[2].LastResult.DependencyGraphFileName.Data.AllocatorInstance.Data
       = (FScriptContainerElement *)0x0;
  this->ProcessingGraphBuildStates[2].LastResult.DependencyGraphFileName.Data.ArrayNum = 0;
  this->ProcessingGraphBuildStates[2].LastResult.DependencyGraphFileName.Data.ArrayMax = 0;
  this->ProcessingGraphBuildStates[2].LastResult.PrunedProcessors.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingGraphBuildStates[2].LastResult.PrunedProcessors.ArrayNum = 0;
  this->ProcessingGraphBuildStates[2].LastResult.PrunedProcessors.ArrayMax = 0;
  this->ProcessingGraphBuildStates[2].LastResult.MaxSequenceLength = 0;
  this->ProcessingGraphBuildStates[2].LastResult.ArchetypeDataVersion = 0;
  this->ProcessingGraphBuildStates[2].LastResult.PrunedProcessorClasses.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingGraphBuildStates[2].LastResult.PrunedProcessorClasses.ArrayNum = 0;
  this->ProcessingGraphBuildStates[2].LastResult.PrunedProcessorClasses.ArrayMax = 0;
  this->ProcessingGraphBuildStates[2].bNewArchetypes = true;
  this->ProcessingGraphBuildStates[2].bProcessorsNeedRebuild = true;
  this->ProcessingGraphBuildStates[2].bInitialized = false;
  this->ProcessingGraphBuildStates[3].LastResult.DependencyGraphFileName.Data.AllocatorInstance.Data
       = (FScriptContainerElement *)0x0;
  this->ProcessingGraphBuildStates[3].LastResult.DependencyGraphFileName.Data.ArrayNum = 0;
  this->ProcessingGraphBuildStates[3].LastResult.DependencyGraphFileName.Data.ArrayMax = 0;
  this->ProcessingGraphBuildStates[3].LastResult.PrunedProcessors.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingGraphBuildStates[3].LastResult.PrunedProcessors.ArrayNum = 0;
  this->ProcessingGraphBuildStates[3].LastResult.PrunedProcessors.ArrayMax = 0;
  this->ProcessingGraphBuildStates[3].LastResult.MaxSequenceLength = 0;
  this->ProcessingGraphBuildStates[3].LastResult.ArchetypeDataVersion = 0;
  lVar4 = 6;
  this->ProcessingGraphBuildStates[3].LastResult.PrunedProcessorClasses.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingGraphBuildStates[3].LastResult.PrunedProcessorClasses.ArrayNum = 0;
  this->ProcessingGraphBuildStates[3].LastResult.PrunedProcessorClasses.ArrayMax = 0;
  this->ProcessingGraphBuildStates[3].bNewArchetypes = true;
  this->ProcessingGraphBuildStates[3].bProcessorsNeedRebuild = true;
  this->ProcessingGraphBuildStates[3].bInitialized = false;
  this->ProcessingGraphBuildStates[4].LastResult.DependencyGraphFileName.Data.AllocatorInstance.Data
       = (FScriptContainerElement *)0x0;
  this->ProcessingGraphBuildStates[4].LastResult.DependencyGraphFileName.Data.ArrayNum = 0;
  this->ProcessingGraphBuildStates[4].LastResult.DependencyGraphFileName.Data.ArrayMax = 0;
  this->ProcessingGraphBuildStates[4].LastResult.PrunedProcessors.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingGraphBuildStates[4].LastResult.PrunedProcessors.ArrayNum = 0;
  this->ProcessingGraphBuildStates[4].LastResult.PrunedProcessors.ArrayMax = 0;
  this->ProcessingGraphBuildStates[4].LastResult.MaxSequenceLength = 0;
  this->ProcessingGraphBuildStates[4].LastResult.ArchetypeDataVersion = 0;
  this->ProcessingGraphBuildStates[4].LastResult.PrunedProcessorClasses.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingGraphBuildStates[4].LastResult.PrunedProcessorClasses.ArrayNum = 0;
  this->ProcessingGraphBuildStates[4].LastResult.PrunedProcessorClasses.ArrayMax = 0;
  this->ProcessingGraphBuildStates[4].bNewArchetypes = true;
  this->ProcessingGraphBuildStates[4].bProcessorsNeedRebuild = true;
  this->ProcessingGraphBuildStates[4].bInitialized = false;
  this->ProcessingGraphBuildStates[5].LastResult.DependencyGraphFileName.Data.AllocatorInstance.Data
       = (FScriptContainerElement *)0x0;
  this->ProcessingGraphBuildStates[5].LastResult.DependencyGraphFileName.Data.ArrayNum = 0;
  this->ProcessingGraphBuildStates[5].LastResult.DependencyGraphFileName.Data.ArrayMax = 0;
  this->ProcessingGraphBuildStates[5].LastResult.PrunedProcessors.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingGraphBuildStates[5].LastResult.PrunedProcessors.ArrayNum = 0;
  this->ProcessingGraphBuildStates[5].LastResult.PrunedProcessors.ArrayMax = 0;
  this->ProcessingGraphBuildStates[5].LastResult.MaxSequenceLength = 0;
  this->ProcessingGraphBuildStates[5].LastResult.ArchetypeDataVersion = 0;
  this->ProcessingGraphBuildStates[5].LastResult.PrunedProcessorClasses.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingGraphBuildStates[5].LastResult.PrunedProcessorClasses.ArrayNum = 0;
  this->ProcessingGraphBuildStates[5].LastResult.PrunedProcessorClasses.ArrayMax = 0;
  this->ProcessingGraphBuildStates[5].bNewArchetypes = true;
  this->ProcessingGraphBuildStates[5].bProcessorsNeedRebuild = true;
  this->ProcessingGraphBuildStates[5].bInitialized = false;
  (this->ProcessingPhasesConfig).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProcessingPhasesConfig).ArrayNum = 0;
  (this->ProcessingPhasesConfig).ArrayMax = 0;
  (this->DynamicProcessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicProcessors).ArrayNum = 0;
  (this->DynamicProcessors).ArrayMax = 0;
  (this->RemovedDynamicProcessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemovedDynamicProcessors).ArrayNum = 0;
  (this->RemovedDynamicProcessors).ArrayMax = 0;
  pTVar5 = this->PendingDynamicProcessors;
  do {
    pTVar5->Head = (atomic<TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>::FNode_*>
                    )0x0;
    aVar2 = (atomic<TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>::FNode_*>
             )FMemory::Malloc(0x18,8);
    *(undefined8 *)aVar2 = 0;
    pTVar5->Head = aVar2;
    pTVar5->Tail = (FNode *)aVar2;
    lVar4 = lVar4 + -1;
    pTVar5 = pTVar5 + 1;
  } while (lVar4 != 0);
  (this->EntityManager).Object = (FMassEntityManager *)0x0;
  (this->EntityManager).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->CurrentPhase = MAX;
  (this->Owner).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OnNewArchetypeHandle).ID = 0;
  this->ProcessorExecutionFlags = param_1;
  this->bIsAllowedToTick = false;
  this->bIsPaused = false;
  this->bIsPauseTogglePending = false;
  (this->OnDebugEntityManagerInitializedHandle).ID = 0;
  (this->OnDebugEntityManagerDeinitializedHandle).ID = 0;
  FVar3 = TMulticastDelegateRegistration<void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
          ::AddRaw<FMassProcessingPhaseManager>
                    ((TMulticastDelegateRegistration<void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
                      *)&FMassDebugger::OnEntityManagerInitialized,
                     (FMassProcessingPhaseManager *)&stack0x00000008,(pmf_f2575060 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->OnDebugEntityManagerInitializedHandle).ID = *FVar3.ID;
  FVar3 = TMulticastDelegateRegistration<void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
          ::AddRaw<FMassProcessingPhaseManager>
                    ((TMulticastDelegateRegistration<void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
                      *)&FMassDebugger::OnEntityManagerInitialized,
                     (FMassProcessingPhaseManager *)&stack0x00000008,(pmf_f2575060 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->OnDebugEntityManagerDeinitializedHandle).ID = *FVar3.ID;
  return this;
}

// operator() @ 1471e3c70

void __thiscall
`FMassProcessingPhaseManager::Start'::__l2::<lambda_1>::operator()
          (void *this,TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  void *_Src;
  code *pcVar6;
  atomic<int> aVar7;
  atomic<int> aVar8;
  int iVar9;
  int iVar10;
  TReferenceControllerBase<1> *pTVar11;
  longlong *plVar12;
  bool bVar13;
  longlong local_38 [2];
  
  pTVar11 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar7 = pTVar11->SharedReferenceCount;
    do {
      if (aVar7 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1471e3ca1;
      }
      LOCK();
      aVar8 = pTVar11->SharedReferenceCount;
      bVar13 = aVar7 == aVar8;
      if (bVar13) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar8 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar8;
    } while (!bVar13);
    lVar4 = *(longlong *)this;
    if ((lVar4 != 0) && ((longlong *)(lVar4 + 0x20) != (longlong *)(lVar4 + 0x350))) {
      piVar1 = &param_1->ArrayMax;
      piVar2 = &param_1->ArrayNum;
      plVar12 = (longlong *)(lVar4 + 0x48);
      do {
        local_38[0] = *plVar12;
        pFVar5 = (param_1->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 < pFVar5 + (longlong)*piVar1 * 8)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = *piVar2;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_1->AllocatorInstance,piVar1);
        }
        *piVar2 = iVar9 + 1;
        *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_38[0];
        iVar9 = *(int *)(*plVar12 + 0xe8);
        _Src = *(void **)(*plVar12 + 0xe0);
        if (iVar9 < 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L"");
          if (bVar13) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x9a9,L"Invalid range size: %lld");
          if (bVar13) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
LAB_1471e3e09:
          iVar10 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,8,iVar9,&param_1->AllocatorInstance,piVar2,piVar1);
          memcpy((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8,_Src,(longlong)iVar9 << 3)
          ;
        }
        else if (iVar9 != 0) goto LAB_1471e3e09;
        plVar3 = plVar12 + 0xc;
        plVar12 = plVar12 + 0x11;
        if (plVar3 == (longlong *)(lVar4 + 0x350)) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar11);
          return;
        }
      } while( true );
    }
  }
LAB_1471e3ca1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return;
}

// operator() @ 1471e4ec0

void __thiscall
`FMassProcessingPhaseManager::Start'::__l2::<lambda_2>::operator()
          (void *this,TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  undefined1 local_res8 [8];
  
  pTVar11 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar11->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1471e4ef5;
      }
      LOCK();
      aVar6 = pTVar11->SharedReferenceCount;
      bVar12 = aVar5 == aVar6;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar12);
    lVar3 = *(longlong *)this;
    if (lVar3 != 0) {
      lVar10 = lVar3 + 0x350;
      if (lVar10 != lVar3 + 0x4d0) {
        pTVar9 = (TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x360);
        do {
          pFVar8 = (pTVar9->AllocatorInstance).Data;
          iVar2 = pTVar9->ArrayNum;
          pFVar1 = pFVar8 + (longlong)iVar2 * 8;
          while( true ) {
            if (pTVar9->ArrayNum != iVar2) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<TObjectPtr<UMassProcessor>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res8);
            }
            if (pFVar8 == pFVar1) break;
            pFVar8 = pFVar8 + 8;
          }
          if ((param_1 == pTVar9) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)this != (void*)&Source",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x96e,L""), bVar12)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar2 = pTVar9->ArrayNum;
          if (iVar2 != 0) {
            iVar7 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,iVar2,&param_1->AllocatorInstance,&param_1->ArrayNum,
                               &param_1->ArrayMax);
            memcpy((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8,
                   (pTVar9->AllocatorInstance).Data,(longlong)iVar2 << 3);
          }
          lVar10 = lVar10 + 0x40;
          pTVar9 = pTVar9 + 4;
        } while (lVar10 != lVar3 + 0x4d0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
        return;
      }
    }
  }
LAB_1471e4ef5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return;
}

// AddReferencedObjects @ 1471ef120

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMassProcessingPhaseManager::AddReferencedObjects
          (FMassProcessingPhaseManager *this,FReferenceCollector *param_1)

{
  TObjectPtr<UMassCompositeProcessor>_u_0 *pTVar1;
  TArray<FObjectPtr,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  TObjectPtr<UMassCompositeProcessor>_u_0 *pTVar10;
  TArray<FObjectPtr,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  uint uVar13;
  <lambda_1> local_res8 [8];
  FReferenceCollector *local_res10;
  
  local_res10 = param_1;
  if (this->ProcessingPhases != (FMassProcessingPhase *)this->ProcessingGraphBuildStates) {
    pTVar10 = &this->ProcessingPhases[0].PhaseProcessor.field0_0x0;
    do {
      if (pTVar10->DebugPtr != (UMassCompositeProcessor *)0x0) {
        (**(code **)(param_1->_padding_ + 0x88))(param_1,pTVar10,0,0);
      }
      pTVar1 = pTVar10 + 0xc;
      pTVar10 = pTVar10 + 0x11;
    } while (pTVar1 != (TObjectPtr<UMassCompositeProcessor>_u_0 *)this->ProcessingGraphBuildStates);
  }
  iVar7 = TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
          RemoveAllSwap<_FMassProcessingPhaseManager::AddReferencedObjects_::__l2::<lambda_1>_>
                    (&this->DynamicProcessors,local_res8,Default);
  if ((iVar7 != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DynamicProcessors.RemoveAllSwap(NullProcessorRemover) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                         ,0x192,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FReferenceCollector::AddStableReferenceArrayFwd
            (param_1,(TArray<FObjectPtr,TSizedDefaultAllocator<32>_> *)&this->DynamicProcessors);
  if (this->ProcessingGraphBuildStates != (FPhaseGraphBuildState *)&this->ProcessingPhasesConfig) {
    pTVar11 = (TArray<FObjectPtr,TSizedDefaultAllocator<32>_> *)
              &this->ProcessingGraphBuildStates[0].LastResult.PrunedProcessors;
    do {
      iVar7 = pTVar11->ArrayNum;
      bVar5 = false;
      uVar13 = 0;
      if (0 < iVar7) {
        lVar12 = 0;
        iVar9 = iVar7;
        do {
          uVar8 = 0;
          if ((int)uVar13 < iVar9) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(longlong *)((pTVar11->AllocatorInstance).Data + lVar12) == 0) {
            bVar5 = true;
            uVar8 = 0;
            if ((int)uVar13 < pTVar11->ArrayNum) {
              uVar8 = ~uVar13 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (pTVar11->AllocatorInstance).Data;
            iVar9 = ~uVar13 + pTVar11->ArrayNum;
            if (1 < iVar9) {
              iVar9 = 1;
            }
            if (iVar9 != 0) {
              memmove(pFVar3 + (longlong)(int)uVar13 * 8,
                      pFVar3 + (longlong)(pTVar11->ArrayNum - iVar9) * 8,(longlong)iVar9 << 3);
            }
            pTVar11->ArrayNum = pTVar11->ArrayNum + -1;
          }
          else {
            uVar13 = uVar13 + 1;
            lVar12 = lVar12 + 8;
          }
          param_1 = local_res10;
          iVar9 = pTVar11->ArrayNum;
        } while ((int)uVar13 < iVar9);
        if (bVar5) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar11->AllocatorInstance,iVar9,&pTVar11->ArrayMax);
        }
      }
      if ((iVar7 != pTVar11->ArrayNum) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("GraphBuildState.LastResult.PrunedProcessors.RemoveAllSwap(NullProcessorRemover) == 0"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                             ,0x198,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FReferenceCollector::AddStableReferenceArrayFwd(param_1,pTVar11);
      pTVar2 = pTVar11 + 3;
      pTVar11 = pTVar11 + 4;
    } while (pTVar2 != (TArray<FObjectPtr,TSizedDefaultAllocator<32>_> *)
                       &this->ProcessingPhasesConfig);
  }
  return;
}

// Deinitialize @ 147210be0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassProcessingPhaseManager::Deinitialize(FMassProcessingPhaseManager *this)

{
  undefined4 *puVar1;
  longlong *plVar2;
  FNode *pFVar3;
  UObject *pUVar4;
  FMassProcessingPhase *pFVar5;
  int *piVar6;
  FNode **ppFVar7;
  UObject *pUVar8;
  
  for (pFVar5 = this->ProcessingPhases;
      pFVar5 != (FMassProcessingPhase *)this->ProcessingGraphBuildStates; pFVar5 = pFVar5 + 1) {
    (pFVar5->PhaseProcessor).field0_0x0.DebugPtr = (UMassCompositeProcessor *)0x0;
  }
  (this->DynamicProcessors).ArrayNum = 0;
  if ((this->DynamicProcessors).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->DynamicProcessors).AllocatorInstance,0,
               &(this->DynamicProcessors).ArrayMax);
  }
  if (this->ProcessingGraphBuildStates != (FPhaseGraphBuildState *)&this->ProcessingPhasesConfig) {
    piVar6 = &this->ProcessingGraphBuildStates[0].LastResult.PrunedProcessors.ArrayNum;
    do {
      *piVar6 = 0;
      if (piVar6[1] < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)(piVar6 + -2),0,piVar6 + 1);
      }
      *(undefined8 *)(piVar6 + 2) = 0;
      *(undefined1 *)((longlong)piVar6 + 0x22) = 0;
      puVar1 = piVar6 + 10;
      piVar6 = piVar6 + 0x10;
    } while ((TArray<FMassProcessingPhaseConfig,TSizedDefaultAllocator<32>_> *)puVar1 !=
             &this->ProcessingPhasesConfig);
  }
  if (this->PendingDynamicProcessors !=
      (TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>
       *)&this->EntityManager) {
    ppFVar7 = &this->PendingDynamicProcessors[0].Tail;
    pUVar4 = (UObject *)0x0;
    do {
      while (pUVar8 = pUVar4, pFVar3 = *(FNode **)&(*ppFVar7)->Next, pFVar3 != (FNode *)0x0) {
        pUVar4 = *(UObject **)(pFVar3->Value).Pad;
        *(undefined8 *)(pFVar3->Value).Pad = 0;
        FMemory::Free(*ppFVar7);
        *ppFVar7 = pFVar3;
        if (pUVar8 != (UObject *)0x0) {
          UEStrongObjectPtr_Private::ReleaseUObject(pUVar8);
        }
      }
      plVar2 = (longlong *)(ppFVar7 + 1);
      ppFVar7 = ppFVar7 + 2;
      pUVar4 = pUVar8;
    } while ((TSharedPtr<FMassEntityManager,1> *)plVar2 != &this->EntityManager);
    if (pUVar8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar8);
    }
  }
  return;
}

// EnableTickFunctions @ 1472154c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FMassProcessingPhaseManager::EnableTickFunctions(FMassProcessingPhaseManager *this,UWorld *param_1)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  UPackage *pUVar5;
  UEnum *pUVar6;
  UObject *pUVar7;
  EMassProcessingPhase *pEVar8;
  FName local_res8;
  UWorld *local_res10;
  FName local_res18;
  FPhaseGraphBuildState *local_res20;
  FOutputDevice local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  local_res10 = param_1;
  if (((this->EntityManager).Object == (FMassEntityManager *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EntityManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                         ,0x19f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = UWorld::IsGameWorld(param_1);
  local_res20 = this->ProcessingGraphBuildStates;
  if (this->ProcessingPhases != (FMassProcessingPhase *)local_res20) {
    pEVar8 = &this->ProcessingPhases[0].Phase;
    do {
      if ((UE::Mass::Tweakables::bMakePrePhysicsTickFunctionHighPriority != false) &&
         (*pEVar8 == PrePhysics)) {
        FTickFunction::SetPriorityIncludingPrerequisites((FTickFunction *)(pEVar8 + -0x30),true);
      }
      FTickFunction::RegisterTickFunction
                ((FTickFunction *)(pEVar8 + -0x30),(param_1->PersistentLevel).field0_0x0.DebugPtr);
      FTickFunction::SetTickFunctionEnable((FTickFunction *)(pEVar8 + -0x30),true);
      if ((((TObjectPtr<UMassCompositeProcessor>_u_0 *)(pEVar8 + -8))->DebugPtr !=
           (UMassCompositeProcessor *)0x0) && (bVar3)) {
        ::FString::FString(&local_f8,L"");
        FOutputDevice::FOutputDevice(&local_108);
        local_108._padding_ = (longlong)&___7FStringOutputDevice__6B_;
        local_108.bAutoEmitLineTerminator = false;
        (**(code **)(((TObjectPtr<UMassCompositeProcessor>_u_0 *)(pEVar8 + -8))->DebugPtr->_padding_
                    + 0x2b8))
                  (((TObjectPtr<UMassCompositeProcessor>_u_0 *)(pEVar8 + -8))->DebugPtr,&local_108,0
                  );
        if (FVisualLogger::bIsRecording != 0) {
          pUVar6 = Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton;
          if (Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton == (UEnum *)0x0) {
            pUVar5 = Z_Construct_UPackage__Script_MassEntity();
            pUVar6 = GetStaticEnum(Z_Construct_UEnum_MassEntity_EMassProcessingPhase,
                                   (UObject *)pUVar5,L"EMassProcessingPhase");
            Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton = pUVar6;
            if ((pUVar6 == (UEnum *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("EnumClass != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                   ,0xca4,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          UEnum::GetNameByValue(pUVar6,(long64)&local_res8);
          ::FName::ToString(&local_res8,&local_a8);
          pUVar7 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
          FVisualLogger::CategorizedLogfImpl
                    (pUVar7,(FName *)&LogMass.field_0x4,Log,L"Enabling phase %s tick:\n%s");
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
        }
        if (4 < (byte)LogMass._0_1_) {
          pUVar6 = Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton;
          if (Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton == (UEnum *)0x0) {
            pUVar5 = Z_Construct_UPackage__Script_MassEntity();
            pUVar6 = GetStaticEnum(Z_Construct_UEnum_MassEntity_EMassProcessingPhase,
                                   (UObject *)pUVar5,L"EMassProcessingPhase");
            Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton = pUVar6;
            if ((pUVar6 == (UEnum *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("EnumClass != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                   ,0xca4,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          UEnum::GetNameByValue(pUVar6,(long64)&local_res18);
          ::FName::ToString(&local_res18,&local_98);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
        FOutputDevice::~FOutputDevice(&local_108);
        param_1 = local_res10;
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          param_1 = local_res10;
        }
      }
      pcVar1 = (char *)(pEVar8 + 0x58);
      pEVar8 = pEVar8 + 0x88;
    } while ((FPhaseGraphBuildState *)pcVar1 != local_res20);
  }
  if (bVar3) {
    if (FVisualLogger::bIsRecording != 0) {
      pUVar7 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
      if (pUVar7 == (UObject *)0x0) {
        ::FString::FString(&local_88,L"None");
      }
      else {
        local_c8.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
        local_c8.Number = *(uint *)&pUVar7->field_0x1c;
        ::FName::ToString(&local_c8,&local_88);
      }
      ::FString::ConcatFC(&local_78,&local_88,L"_MassProcessingPhaseManager");
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      pUVar7 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
      if (pUVar7 == (UObject *)0x0) {
        ::FString::FString(&local_e8,L"None");
      }
      else {
        local_c0.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
        local_c0.Number = *(uint *)&pUVar7->field_0x1c;
        ::FName::ToString(&local_c0,&local_e8);
      }
      pUVar7 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
      FVisualLogger::CategorizedLogfImpl
                (pUVar7,(FName *)&LogMass.field_0x4,Log,
                 L"MassProcessingPhaseManager %s.%s has been started");
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    if (4 < (byte)LogMass._0_1_) {
      pUVar7 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
      if (pUVar7 == (UObject *)0x0) {
        ::FString::FString(&local_68,L"None");
      }
      else {
        local_b8.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
        local_b8.Number = *(uint *)&pUVar7->field_0x1c;
        ::FName::ToString(&local_b8,&local_68);
      }
      ::FString::ConcatFC(&local_58,&local_68,L"_MassProcessingPhaseManager");
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      pUVar7 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
      if (pUVar7 == (UObject *)0x0) {
        ::FString::FString(&local_d8,L"None");
      }
      else {
        local_b0.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
        local_b0.Number = *(uint *)&pUVar7->field_0x1c;
        ::FName::ToString(&local_b0,&local_d8);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetName @ 1472234d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FString * __thiscall
FMassProcessingPhaseManager::GetName
          (FMassProcessingPhaseManager *this,FString *__return_storage_ptr__)

{
  UObject *pUVar1;
  FName local_res8 [4];
  FString local_18;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
  if (pUVar1 == (UObject *)0x0) {
    ::FString::FString(&local_18,L"None");
  }
  else {
    local_res8[0].ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
    local_res8[0].Number = *(uint *)&pUVar1->field_0x1c;
    ::FName::ToString(local_res8,&local_18);
  }
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"_MassProcessingPhaseManager");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// HandlePendingDynamicProcessorOperations @ 1472299a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassProcessingPhaseManager::HandlePendingDynamicProcessorOperations
          (FMassProcessingPhaseManager *this,int param_1)

{
  char cVar1;
  atomic<TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>::FNode_*>
  aVar2;
  TNotNull<UMassProcessor_*> TVar3;
  TNotNull<UMassProcessor_*> TVar4;
  bool bVar5;
  
  bVar5 = false;
  TVar4.Val = (UMassProcessor *)0x0;
  while( true ) {
    aVar2 = (this->PendingDynamicProcessors[param_1].Tail)->Next;
    if (aVar2 == (atomic<TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>::FNode_*>
                  )0x0) {
      if (bVar5 != false) {
        this->ProcessingGraphBuildStates[param_1].bProcessorsNeedRebuild = bVar5;
      }
      if (TVar4.Val != (UMassProcessor *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)TVar4.Val);
      }
      return;
    }
    TVar3.Val = *(UMassProcessor **)((longlong)aVar2 + 8);
    *(undefined8 *)((longlong)aVar2 + 8) = 0;
    cVar1 = *(char *)((longlong)aVar2 + 0x10);
    FMemory::Free(this->PendingDynamicProcessors[param_1].Tail);
    this->PendingDynamicProcessors[param_1].Tail = (FNode *)aVar2;
    if (TVar4.Val != (UMassProcessor *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)TVar4.Val);
    }
    if (TVar3.Val == (UMassProcessor *)0x0) break;
    TVar4.Val = TVar3.Val;
    if (cVar1 == '\0') {
      RegisterDynamicProcessorInternal(this,TVar3);
      bVar5 = true;
    }
    else {
      UnregisterDynamicProcessorInternal(this,TVar3);
      bVar5 = true;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Initialize @ 14722cf80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FMassProcessingPhaseManager::Initialize
          (FMassProcessingPhaseManager *this,UObject *param_1,
          TArrayView<FMassProcessingPhaseConfig_const_,int> *param_2,FString *param_3)

{
  int *piVar1;
  TArray<FMassProcessingPhaseConfig,TSizedDefaultAllocator<32>_> *pTVar2;
  FPlatformRWLock *SRWLock;
  int iVar3;
  ETickingGroup EVar4;
  FName FVar5;
  code *pcVar6;
  UClass *pUVar7;
  bool bVar8;
  EProcessorExecutionFlags EVar9;
  ENetMode EVar10;
  UWorld *this_00;
  UPackage *pUVar11;
  UEnum *pUVar12;
  FName *pFVar13;
  UClass *pUVar14;
  TObjectPtr<UMassCompositeProcessor> TVar15;
  FVisualLogger *this_01;
  UObject *pUVar16;
  UObject *pUVar17;
  longlong *plVar18;
  ForAnyElementType FVar19;
  ulonglong uVar20;
  uint uVar21;
  EMassProcessingPhase *pEVar22;
  undefined1 auStackY_228 [32];
  ETickingGroup *local_1b8;
  FOutputDevice local_1a8;
  FString local_198;
  UObject *local_188;
  FUObjectCppClassStaticFunctions local_180;
  FName local_178;
  FName local_170;
  FName local_168;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FText local_110;
  FText local_100;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  this_00 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  local_188 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&(this->Owner).WeakPtr,(FObjectPtr)&local_188);
  pTVar2 = &this->ProcessingPhasesConfig;
  DestructItems<FMassProcessingPhaseConfig,int>
            ((FMassProcessingPhaseConfig *)(pTVar2->AllocatorInstance).Data,
             (this->ProcessingPhasesConfig).ArrayNum);
  iVar3 = param_2->ArrayNum;
  piVar1 = &(this->ProcessingPhasesConfig).ArrayMax;
  (this->ProcessingPhasesConfig).ArrayNum = iVar3;
  if ((iVar3 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FMassProcessingPhaseConfig,FMassProcessingPhaseConfig,int>
              ((pTVar2->AllocatorInstance).Data,param_2->DataPtr,iVar3);
  }
  EVar9 = this->ProcessorExecutionFlags;
  if (EVar9 == None) {
    if (this_00 == (UWorld *)0x0) {
      EVar9 = All;
    }
    else {
      EVar10 = UWorld::InternalGetNetMode(this_00);
      if (EVar10 == NM_Standalone) {
        EVar9 = Standalone;
      }
      else if (EVar10 == NM_DedicatedServer) {
        EVar9 = Server;
      }
      else if (EVar10 == NM_ListenServer) {
        EVar9 = Client|Server;
      }
      else if (EVar10 == NM_Client) {
        EVar9 = Client;
      }
      else {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityUtils.cpp"
                           ,0x24,
                           L"Unsupported ENetMode type (%i) found while determining MASS processor execution flags."
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        EVar9 = None;
      }
    }
  }
  this->ProcessorExecutionFlags = EVar9;
  uVar20 = 0;
  local_1b8 = UE::Mass::Private::PhaseToTickingGroup;
  pEVar22 = &this->ProcessingPhases[0].Phase;
  do {
    pUVar12 = Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton;
    if (Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton == (UEnum *)0x0) {
      pUVar11 = Z_Construct_UPackage__Script_MassEntity();
      pUVar12 = GetStaticEnum(Z_Construct_UEnum_MassEntity_EMassProcessingPhase,(UObject *)pUVar11,
                              L"EMassProcessingPhase");
      Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton = pUVar12;
      if ((pUVar12 == (UEnum *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumClass != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xd13,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    UEnum::GetDisplayNameTextByValue(pUVar12,&local_110,uVar20 & 0xff);
    FText::ToString(&local_110);
    ::FString::PrintfImpl(&local_160,L"ProcessingPhase_%s");
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_160.Data.ArrayNum != 0) {
      FVar19.Data = local_160.Data.AllocatorInstance.Data;
    }
    pFVar13 = ::FName::FName(&local_f0,(wchar_t *)FVar19.Data);
    FVar5 = *pFVar13;
    if (Z_Registration_Info_UClass_UMassCompositeProcessor.InnerSingleton == (UClass *)0x0) {
      local_180.AddReferencedObjects = UObject::AddReferencedObjects;
      GetPrivateStaticClassBody
                (L"/Script/MassEntity",L"MassCompositeProcessor",
                 &Z_Registration_Info_UClass_UMassCompositeProcessor.InnerSingleton,
                 UMassCompositeProcessor::StaticRegisterNativesUMassCompositeProcessor,0x128,8,
                 CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
                 InternalConstructor<UMassCompositeProcessor>,
                 InternalVTableHelperCtorCaller<UMassCompositeProcessor>,&local_180,
                 UMassProcessor::StaticClass,UObject::StaticClass);
    }
    pUVar7 = Z_Registration_Info_UClass_UMassCompositeProcessor.InnerSingleton;
    if (FVar5 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                (param_1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar14 = UMassCompositeProcessor::StaticClass();
    CheckIsClassChildOf_Internal(pUVar14,pUVar7);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar7);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._24_4_ = RF_NoFlags;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = param_1;
    local_c8._16_8_ = FVar5;
    TVar15.field0_0x0 =
         (TObjectPtr<UMassCompositeProcessor>_u_0)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar18 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar18 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (local_110.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
    }
    if ((TVar15.field0_0x0 == (UMassCompositeProcessor *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("PhaseProcessor",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                           ,0x114,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    EVar4 = *local_1b8;
    *(FMassProcessingPhaseManager **)(pEVar22 + 0x48) = this;
    *pEVar22 = (EMassProcessingPhase)uVar20;
    pEVar22[-0x28] = (char)EVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar15.field0_0x0 != (UMassCompositeProcessor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar15.field0_0x0);
    }
    *(TObjectPtr<UMassCompositeProcessor>_u_0 *)(pEVar22 + -8) = TVar15.field0_0x0;
    pEVar22[0x52] = '\x05';
    this_01 = FVisualLogger::Get();
    SRWLock = &this_01->RedirectRWLock;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    pUVar16 = FVisualLogger::RedirectInternal(this_01,(UObject *)TVar15.field0_0x0,param_1);
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    if ((((FVisualLogger::bIsRecording != 0) &&
         (TVar15.field0_0x0 != (UMassCompositeProcessor *)0x0)) && (pUVar16 != (UObject *)0x0)) &&
       (FVisualLogger::bIsRecording != 0)) {
      local_178.ComparisonIndex.Value = *(uint *)&pUVar16->field_0x18;
      local_178.Number = *(uint *)&pUVar16->field_0x1c;
      ::FName::ToString(&local_178,&local_140);
      local_170 = *(FName *)((longlong)TVar15.field0_0x0 + 0x18);
      ::FName::ToString(&local_170,&local_150);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)TVar15.field0_0x0,(FName *)&LogVisual.field_0x4,Log,
                 L"Redirected \'%s\' to \'%s\'");
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(*(longlong *)TVar15.field0_0x0 + 0x2d8))(TVar15.field0_0x0,uVar20 & 0xff);
    pUVar12 = Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton;
    if (Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton == (UEnum *)0x0) {
      pUVar11 = Z_Construct_UPackage__Script_MassEntity();
      pUVar12 = GetStaticEnum(Z_Construct_UEnum_MassEntity_EMassProcessingPhase,(UObject *)pUVar11,
                              L"EMassProcessingPhase");
      Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton = pUVar12;
      if ((pUVar12 == (UEnum *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumClass != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xd13,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    UEnum::GetDisplayNameTextByValue(pUVar12,&local_100,uVar20 & 0xff);
    FText::ToString(&local_100);
    ::FString::PrintfImpl(&local_130,L"%s Group");
    iVar3 = local_130.Data.ArrayNum + -1;
    if (local_130.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    pFVar13 = ::FName::FName(&local_e8,iVar3,(wchar_t *)local_130.Data.AllocatorInstance.Data,
                             FNAME_Add);
    *(FName *)((longlong)TVar15.field0_0x0 + 0xf8) = *pFVar13;
    pUVar17 = (UObject *)::FName::ToString((FName *)((longlong)TVar15.field0_0x0 + 0xf8),&local_e0);
    pUVar16 = (UObject *)((longlong)TVar15.field0_0x0 + 0x28);
    if (pUVar16 != pUVar17) {
      if (*(void **)pUVar16 != (void *)0x0) {
        FMemory::Free(*(void **)pUVar16);
      }
      *(undefined8 *)pUVar16 = *(undefined8 *)pUVar17;
      *(undefined8 *)pUVar17 = 0;
      *(undefined4 *)((longlong)TVar15.field0_0x0 + 0x30) = *(undefined4 *)&pUVar17->field_0x8;
      *(undefined4 *)((longlong)TVar15.field0_0x0 + 0x34) = *(undefined4 *)&pUVar17->field_0xc;
      *(undefined8 *)&pUVar17->field_0x8 = 0;
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    if (local_100.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
    }
    ::FString::FString(&local_198,L"");
    FOutputDevice::FOutputDevice(&local_1a8);
    local_1a8.bAutoEmitLineTerminator = false;
    local_1a8._padding_ = (longlong)&___7FStringOutputDevice__6B_;
    (**(code **)(*(longlong *)TVar15.field0_0x0 + 0x2b8))(TVar15.field0_0x0,&local_1a8,0);
    if (FVisualLogger::bIsRecording != 0) {
      pUVar12 = Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton;
      if (Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton == (UEnum *)0x0) {
        pUVar11 = Z_Construct_UPackage__Script_MassEntity();
        pUVar12 = GetStaticEnum(Z_Construct_UEnum_MassEntity_EMassProcessingPhase,(UObject *)pUVar11
                                ,L"EMassProcessingPhase");
        Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton = pUVar12;
        if ((pUVar12 == (UEnum *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("EnumClass != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xca4,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      UEnum::GetNameByValue(pUVar12,(long64)&local_168);
      ::FName::ToString(&local_168,&local_120);
      FVisualLogger::CategorizedLogfImpl
                (param_1,(FName *)&LogMass.field_0x4,Log,
                 L"Setting new group processor for phase %s:\n%s");
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
    }
    FOutputDevice::~FOutputDevice(&local_1a8);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    local_1b8 = local_1b8 + 1;
    uVar21 = (int)uVar20 + 1;
    uVar20 = (ulonglong)uVar21;
    pEVar22 = pEVar22 + 0x88;
  } while ((int)uVar21 < 6);
  this->bIsAllowedToTick = true;
  return;
}

// OnDebugEntityManagerDeinitialized @ 1472375f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassProcessingPhaseManager::OnDebugEntityManagerDeinitialized
          (FMassProcessingPhaseManager *this,FMassEntityManager *param_1)

{
  return;
}

// OnDebugEntityManagerInitialized @ 147237600

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassProcessingPhaseManager::OnDebugEntityManagerInitialized
          (FMassProcessingPhaseManager *this,FMassEntityManager *param_1)

{
  return;
}

// OnNewArchetype @ 147237f40

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassProcessingPhaseManager::OnNewArchetype
          (FMassProcessingPhaseManager *this,FMassArchetypeHandle *param_1)

{
  FPhaseGraphBuildState *pFVar1;
  
  for (pFVar1 = this->ProcessingGraphBuildStates;
      pFVar1 != (FPhaseGraphBuildState *)&this->ProcessingPhasesConfig; pFVar1 = pFVar1 + 1) {
    pFVar1->bNewArchetypes = true;
  }
  return;
}

// OnPhaseEnd @ 147238310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassProcessingPhaseManager::OnPhaseEnd
          (FMassProcessingPhaseManager *this,FMassProcessingPhase *param_1)

{
  FScriptContainerElement *pFVar1;
  EMassProcessingPhase EVar2;
  wchar_t wVar3;
  longlong lVar4;
  FMassEntityManager *pFVar5;
  code *pcVar6;
  void *pvVar7;
  bool bVar8;
  UPackage *pUVar9;
  longlong lVar10;
  UObject *pUVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  int iVar14;
  undefined1 auStackY_68 [32];
  LARGE_INTEGER local_38;
  FString local_30;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  if ((this->CurrentPhase != param_1->Phase) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5460852674058519107>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                         ,0x243,"CurrentPhase == Phase.Phase"), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  EVar2 = this->CurrentPhase;
  if (-1 < MassChannel->Enabled) {
    if (Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton == (UEnum *)0x0) {
      pUVar9 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_MassEntity_EMassProcessingPhase,(UObject *)pUVar9,
                         L"EMassProcessingPhase");
    }
    UEnum::GetNameStringByValue
              (Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton,&local_30,
               (ulonglong)EVar2);
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_30.Data.ArrayNum != 0) {
      FVar13.Data = local_30.Data.AllocatorInstance.Data;
    }
    if (-1 < MassChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FMassTraceMassPhaseEndFields>((TLogScope<1> *)&local_20);
      QueryPerformanceCounter(&local_38);
      iVar14 = 0;
      *local_20 = local_38;
      wVar3 = *(wchar_t *)FVar13.Data;
      pFVar1 = FVar13.Data;
      while (wVar3 != L'\0') {
        pFVar1 = pFVar1 + 2;
        iVar14 = iVar14 + 1;
        wVar3 = *(wchar_t *)pFVar1;
      }
      UE::Trace::Private::Field_WriteStringWide(1,(wchar_t *)FVar13.Data,iVar14);
      pvVar7 = ThreadLocalStoragePointer;
      uVar12 = (ulonglong)_tls_index;
      local_20[1].QuadPart = 0;
      lVar4 = *(longlong *)((longlong)pvVar7 + uVar12 * 8);
      if (*(char *)(lVar4 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar4 = *(longlong *)(lVar4 + 0x20);
      **(undefined1 **)(lVar4 + 0x20) = 6;
      lVar10 = *(longlong *)(lVar4 + 0x20) + 1;
      *(longlong *)(lVar4 + 0x20) = lVar10;
      if (lVar4 != local_18) {
        *(longlong *)(lVar4 + 0x28) = lVar10;
      }
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  this->CurrentPhase = MAX;
  if (((this->bIsPauseTogglePending != false) && (this->bIsPaused == false)) &&
     (param_1->Phase == FrameEnd)) {
    this->bIsPaused = true;
    this->bIsPauseTogglePending = false;
    if (FVisualLogger::bIsRecording != 0) {
      pUVar11 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
      FVisualLogger::CategorizedLogfImpl
                (pUVar11,(FName *)&LogMass.field_0x4,Log,L"Phase Processing is now Paused");
    }
    if (4 < (byte)LogMass._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
    }
  }
  if (((this->EntityManager).Object == (FMassEntityManager *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("EntityManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassProcessingPhaseManager.h"
                         ,0x95,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar5 = (this->EntityManager).Object;
  if (0 < ((pFVar5->DeferredCommandBuffers).Elements[pFVar5->OpenedCommandBufferIndex].Object)->
          ActiveCommandsCounter) {
    if ((pFVar5 == (FMassEntityManager *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("EntityManager",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassProcessingPhaseManager.h"
                           ,0x95,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FMassEntityManager::FlushCommands((this->EntityManager).Object);
  }
  return;
}

// OnPhaseStart @ 147238770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassProcessingPhaseManager::OnPhaseStart
          (FMassProcessingPhaseManager *this,FMassProcessingPhase *param_1)

{
  undefined8 *puVar1;
  EMassProcessingPhase EVar2;
  char cVar3;
  EProcessorExecutionFlags EVar4;
  wchar_t wVar5;
  atomic<TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>::FNode_*>
  aVar6;
  TNotNull<UMassProcessor_*> TVar7;
  longlong lVar8;
  FMassEntityManager *pFVar9;
  FMassEntityQuery *this_00;
  TObjectPtr<UMassCompositeProcessor>_u_0 TVar10;
  code *pcVar11;
  void *pvVar12;
  bool bVar13;
  bool bVar14;
  UObject *pUVar15;
  UPackage *pUVar16;
  longlong lVar17;
  TSharedRef<FMassEntityManager,1> *pTVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  TNotNull<UMassProcessor_*> TVar21;
  undefined8 *puVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  int iVar25;
  uint uVar26;
  FResult *pFVar27;
  undefined1 auStackY_148 [32];
  undefined1 local_118;
  undefined1 local_117 [3];
  uint local_114;
  uint local_110;
  FMassProcessingPhase *local_108;
  FScriptContainerElement *local_100;
  FResult *local_f8;
  TReferenceControllerBase<1> *local_f0;
  FOutputDevice local_e8;
  FString local_d8;
  LARGE_INTEGER local_c8;
  FScriptContainerElement *local_c0;
  FString local_b8;
  TObjectPtr<UMassCompositeProcessor>_u_0 local_a8;
  FScriptContainerElement *local_a0;
  UObject *local_98;
  EMassProcessingPhase local_90;
  undefined2 local_8f;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<UMassProcessor_*_const,int> local_78;
  TSharedRef<FMassEntityManager,1> local_68;
  LARGE_INTEGER *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_108 = param_1;
  if ((this->CurrentPhase != MAX) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5460852674058519030>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                          ,0x1f6,"CurrentPhase == EMassProcessingPhase::MAX"), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  this->CurrentPhase = param_1->Phase;
  EVar2 = param_1->Phase;
  uVar19 = (ulonglong)EVar2;
  uVar26 = (uint)EVar2;
  local_114 = (uint)EVar2;
  if (((this->bIsPauseTogglePending != false) && (this->bIsPaused == true)) && (local_114 == 0)) {
    this->bIsPaused = (bool)(char)(ushort)EVar2;
    this->bIsPauseTogglePending = (bool)(char)((ushort)EVar2 >> 8);
    if (FVisualLogger::bIsRecording != (uint)EVar2) {
      pUVar15 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
      FVisualLogger::CategorizedLogfImpl
                (pUVar15,(FName *)&LogMass.field_0x4,Log,L"Phase Processing is now Resumed");
    }
    if (4 < (byte)LogMass._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
    }
  }
  if (param_1->bRunInParallelMode != UE::Mass::Tweakables::bFullyParallel) {
    param_1->bRunInParallelMode = UE::Mass::Tweakables::bFullyParallel != false;
  }
  if ((this->PendingDynamicProcessors[uVar19].Tail)->Next !=
      (atomic<TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>::FNode_*>
       )0x0) {
    bVar13 = false;
    TVar21.Val = (UMassProcessor *)0x0;
    while (aVar6 = (this->PendingDynamicProcessors[uVar19].Tail)->Next,
          aVar6 != (atomic<TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>::FNode_*>
                    )0x0) {
      TVar7.Val = *(UMassProcessor **)((longlong)aVar6 + 8);
      *(undefined8 *)((longlong)aVar6 + 8) = 0;
      cVar3 = *(char *)((longlong)aVar6 + 0x10);
      FMemory::Free(this->PendingDynamicProcessors[uVar19].Tail);
      this->PendingDynamicProcessors[uVar19].Tail = (FNode *)aVar6;
      if (TVar21.Val != (UMassProcessor *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)TVar21.Val);
      }
      if (TVar7.Val == (UMassProcessor *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      TVar21.Val = TVar7.Val;
      if (cVar3 == '\0') {
        RegisterDynamicProcessorInternal(this,TVar7);
        bVar13 = true;
      }
      else {
        UnregisterDynamicProcessorInternal(this,TVar7);
        bVar13 = true;
      }
    }
    if (bVar13 != false) {
      this->ProcessingGraphBuildStates[uVar19].bProcessorsNeedRebuild = bVar13;
    }
    param_1 = local_108;
    if (TVar21.Val != (UMassProcessor *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)TVar21.Val);
      param_1 = local_108;
    }
  }
  if (-1 < MassChannel->Enabled) {
    if (Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton == (UEnum *)0x0) {
      pUVar16 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_MassEntity_EMassProcessingPhase,(UObject *)pUVar16,
                         L"EMassProcessingPhase");
    }
    UEnum::GetNameStringByValue
              (Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton,&local_b8,uVar19);
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_b8.Data.ArrayNum != 0) {
      FVar20.Data = local_b8.Data.AllocatorInstance.Data;
    }
    if (-1 < MassChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FMassTraceMassPhaseBeginFields>
                ((TLogScope<1> *)&local_58);
      QueryPerformanceCounter(&local_c8);
      iVar25 = 0;
      *local_58 = local_c8;
      wVar5 = *(wchar_t *)FVar20.Data;
      pFVar23 = FVar20.Data;
      while (wVar5 != L'\0') {
        pFVar23 = pFVar23 + 2;
        iVar25 = iVar25 + 1;
        wVar5 = *(wchar_t *)pFVar23;
      }
      UE::Trace::Private::Field_WriteStringWide(1,(wchar_t *)FVar20.Data,iVar25);
      pvVar12 = ThreadLocalStoragePointer;
      uVar19 = (ulonglong)_tls_index;
      local_58[1].QuadPart = 0;
      lVar8 = *(longlong *)((longlong)pvVar12 + uVar19 * 8);
      if (*(char *)(lVar8 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar8 = *(longlong *)(lVar8 + 0x20);
      **(undefined1 **)(lVar8 + 0x20) = 6;
      lVar17 = *(longlong *)(lVar8 + 0x20) + 1;
      *(longlong *)(lVar8 + 0x20) = lVar17;
      if (lVar8 != local_50) {
        *(longlong *)(lVar8 + 0x28) = lVar17;
      }
      *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  bVar13 = FWeakObjectPtr::IsValid(&(this->Owner).WeakPtr);
  if (bVar13) {
    if (param_1->Phase == MAX) {
      bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5460852674058519066>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                          ,0x21a,"Phase.Phase != EMassProcessingPhase::MAX");
      if (bVar13) {
code_r0x000147238b1d:
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    else if ((this->ProcessingGraphBuildStates[(int)uVar26].bNewArchetypes != false) ||
            (this->ProcessingGraphBuildStates[(int)uVar26].bProcessorsNeedRebuild != false)) {
      if ((int)uVar26 < (this->ProcessingPhasesConfig).ArrayNum) {
        bVar13 = -1 < CpuChannel->Enabled;
        if (bVar13) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId543,"Mass Rebuild Phase Graph",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                     ,0x21f);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId543);
        }
        pFVar27 = &this->ProcessingGraphBuildStates[(int)uVar26].LastResult;
        local_f8 = pFVar27;
        if ((*(bool *)((longlong)&pFVar27[1].DependencyGraphFileName.Data.AllocatorInstance.Data + 2
                      ) == false) ||
           (this->ProcessingGraphBuildStates[(int)uVar26].bProcessorsNeedRebuild != false)) {
LAB_147238c92:
          pFVar27 = local_f8;
          TVar10 = (TObjectPtr<UMassCompositeProcessor>_u_0)
                   this->ProcessingPhases[(int)uVar26].PhaseProcessor.field0_0x0.DebugPtr;
          if ((TVar10.DebugPtr == (UMassCompositeProcessor *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PhaseProcessor",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                                  ,0x227,L""), bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          FMassProcessorDependencySolver::FResult::Reset(pFVar27);
          EVar2 = param_1->Phase;
          local_98 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
          if (((this->ProcessingPhasesConfig).ArrayNum <= (int)uVar26) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_a0 = (this->ProcessingPhasesConfig).AllocatorInstance.Data +
                     (longlong)(int)uVar26 * 0x20;
          local_8f = 0x101;
          local_a8 = TVar10;
          local_90 = EVar2;
          pTVar18 = TSharedPtr<FMassEntityManager,1>::ToSharedRef(&this->EntityManager,&local_68);
          local_88 = (this->DynamicProcessors).AllocatorInstance.Data;
          iStack_80 = (this->DynamicProcessors).ArrayNum;
          EVar4 = this->ProcessorExecutionFlags;
          if ((iStack_80 < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_78._12_4_ = uStack_7c;
          local_78.ArrayNum = iStack_80;
          local_78.DataPtr = (UMassProcessor **)local_88;
          FMassPhaseProcessorConfigurationHelper::Configure
                    ((FMassPhaseProcessorConfigurationHelper *)&local_a8.ObjectPtr,&local_78,
                     &this->RemovedDynamicProcessors,EVar4,pTVar18,pFVar27);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68.SharedReferenceCount.ReferenceController);
          *(undefined1 *)
           ((longlong)&pFVar27[1].DependencyGraphFileName.Data.AllocatorInstance.Data + 2) = 1;
          pUVar15 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
          if (FVisualLogger::bIsRecording != 0) {
            FVisualLogger::CategorizedLogfImpl
                      (pUVar15,(FName *)&LogMass.field_0x4,Verbose,
                       L"Phases initialization done. Current composition:");
          }
          if (5 < (byte)LogMass._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
          }
          ::FString::FString(&local_d8,L"");
          FOutputDevice::FOutputDevice(&local_e8);
          local_e8.bAutoEmitLineTerminator = false;
          local_e8._padding_ = (longlong)&___7FStringOutputDevice__6B_;
          (**(code **)((TVar10.DebugPtr)->_padding_ + 0x2b8))(TVar10.DebugPtr,&local_e8,0);
          if (FVisualLogger::bIsRecording != 0) {
            FVisualLogger::CategorizedLogfImpl
                      (pUVar15,(FName *)&LogMass.field_0x4,Verbose,L"--- %s");
          }
          if (5 < (byte)LogMass._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
          }
          ::FString::Reset(&local_d8,0);
          FOutputDevice::~FOutputDevice(&local_e8);
          uVar26 = local_114;
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            uVar26 = local_114;
          }
        }
        else {
          local_f0 = (this->EntityManager).SharedReferenceCount.ReferenceController;
          pFVar9 = (this->EntityManager).Object;
          if (local_f0 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_f0->SharedReferenceCount = (atomic<int>)((int)local_f0->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((((pFVar27->PrunedProcessors).ArrayNum == 0) || (pFVar9 == (FMassEntityManager *)0x0))
             || (pFVar27->ArchetypeDataVersion == pFVar9->ArchetypeDataVersion)) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_f0);
          }
          else {
            local_110 = (pFVar27->PrunedProcessors).ArrayNum;
            uVar19 = (ulonglong)(int)local_110;
            pFVar24 = (pFVar27->PrunedProcessors).AllocatorInstance.Data;
            pFVar23 = pFVar24 + uVar19 * 8;
            local_c0 = pFVar23;
            while( true ) {
              local_100 = pFVar24;
              if ((pFVar27->PrunedProcessors).ArrayNum != (int)uVar19) {
                local_118 = 0;
                `TCheckedPointerIterator<TObjectPtr<UMassProcessor>_const_,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(&local_118);
              }
              if (pFVar24 == pFVar23) break;
              lVar8 = *(longlong *)pFVar24;
              if (lVar8 != 0) {
                puVar22 = *(undefined8 **)(lVar8 + 0xc0);
                iVar25 = *(int *)(lVar8 + 200);
                puVar1 = puVar22 + iVar25;
                while( true ) {
                  if (*(int *)(lVar8 + 200) != iVar25) {
                    local_117[0] = 0;
                    `TCheckedPointerIterator<FMassEntityQuery_*,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(local_117);
                  }
                  pFVar23 = local_c0;
                  pFVar24 = local_100;
                  pFVar27 = local_f8;
                  if (puVar22 == puVar1) break;
                  this_00 = (FMassEntityQuery *)*puVar22;
                  FMassEntityQuery::CacheArchetypes(this_00);
                  if (0 < (this_00->ValidArchetypes).ArrayNum) {
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(local_f0);
                    param_1 = local_108;
                    uVar26 = local_114;
                    goto LAB_147238c92;
                  }
                  puVar22 = puVar22 + 1;
                }
              }
              uVar19 = (ulonglong)local_110;
              pFVar24 = pFVar24 + 8;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_f0);
            uVar26 = local_114;
          }
        }
        this->ProcessingGraphBuildStates[(int)uVar26].bProcessorsNeedRebuild = false;
        this->ProcessingGraphBuildStates[(int)uVar26].bNewArchetypes = false;
        if (bVar13) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      else {
        bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<5460852674058519069>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                            ,0x21d,"ProcessingPhasesConfig.IsValidIndex(PhaseAsInt)");
        if (bVar13) goto code_r0x000147238b1d;
      }
    }
  }
  return;
}

// Pause @ 14723c030

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMassProcessingPhaseManager::Pause(FMassProcessingPhaseManager *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                       ,0x1de,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bIsPaused == false) {
    this->bIsPauseTogglePending = true;
    if (FVisualLogger::bIsRecording != 0) {
      pUVar3 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
      FVisualLogger::CategorizedLogfImpl
                (pUVar3,(FName *)&LogMass.field_0x4,Log,L"Scheduling Pause for next FrameEnd phase")
      ;
    }
    if (4 < (byte)LogMass._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
      return;
    }
  }
  return;
}

// RegisterDynamicProcessor @ 14723eaf0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassProcessingPhaseManager::RegisterDynamicProcessor
          (FMassProcessingPhaseManager *this,UMassProcessor *param_1)

{
  atomic<TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>::FNode_*>
  aVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  atomic<TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>::FNode_*>
  aVar5;
  UMassProcessor *local_res10;
  
  cVar2 = (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
  if ((cVar2 == '\x06') &&
     (local_res10 = param_1,
     bVar3 = `FMassProcessingPhaseManager::RegisterDynamicProcessor'::__l3::<lambda_1>::operator()
                       (&local_res10), !bVar3)) {
    return;
  }
  bVar4 = (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
  aVar5 = (atomic<TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>::FNode_*>
           )FMemory::Malloc(0x18,8);
  *(undefined8 *)aVar5 = 0;
  *(undefined8 *)((longlong)aVar5 + 8) = 0;
  UObjectBase::AddRef((UObjectBase *)param_1);
  *(UMassProcessor **)((longlong)aVar5 + 8) = param_1;
  *(undefined1 *)((longlong)aVar5 + 0x10) = 0;
  LOCK();
  aVar1 = this->PendingDynamicProcessors[bVar4].Head;
  this->PendingDynamicProcessors[bVar4].Head = aVar5;
  UNLOCK();
  *(atomic<TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>::FNode_*>
    *)aVar1 = aVar5;
  return;
}

// RegisterDynamicProcessorInternal @ 14723eb90

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassProcessingPhaseManager::RegisterDynamicProcessorInternal
          (FMassProcessingPhaseManager *this,TNotNull<UMassProcessor_*> param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  TNotNull<UObject_*> TVar7;
  TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *pTVar8;
  UMassProcessor *local_28;
  TSharedRef<FMassEntityManager,1> local_20;
  
  if ((param_1.Val)->bInitialized == '\0') {
    if ((this->EntityManager).Object == (FMassEntityManager *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pUVar6 = FWeakObjectPtr::Get(&(((this->EntityManager).Object)->Owner).WeakPtr);
    if (pUVar6 == (UObject *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EntityManager->GetOwner()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                         ,0x26c,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((this->EntityManager).Object == (FMassEntityManager *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_20.SharedReferenceCount.ReferenceController =
         (this->EntityManager).SharedReferenceCount.ReferenceController;
    local_20.Object = (this->EntityManager).Object;
    if (local_20.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_20.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_20.Object == (FMassEntityManager *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((this->EntityManager).Object == (FMassEntityManager *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    TVar7.Val = FWeakObjectPtr::Get(&(((this->EntityManager).Object)->Owner).WeakPtr);
    if (TVar7.Val == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    UMassProcessor::CallInitialize(param_1.Val,TVar7,&local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.SharedReferenceCount.ReferenceController);
  }
  pTVar8 = &this->DynamicProcessors;
  local_28 = param_1.Val;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1.Val);
  }
  pFVar2 = (pTVar8->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar2 + (longlong)(this->DynamicProcessors).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->DynamicProcessors).ArrayNum;
  piVar1 = &(this->DynamicProcessors).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar8->AllocatorInstance,piVar1);
  }
  (this->DynamicProcessors).ArrayNum = iVar5 + 1;
  *(UMassProcessor **)((pTVar8->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_28;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UMassProcessor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28);
  }
  (param_1.Val)->bIsDynamic = '\x01';
  return;
}

// Resume @ 147249f00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMassProcessingPhaseManager::Resume(FMassProcessingPhaseManager *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                       ,0x1ea,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bIsPaused == true) {
    this->bIsPauseTogglePending = true;
    if (FVisualLogger::bIsRecording != 0) {
      pUVar3 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
      FVisualLogger::CategorizedLogfImpl
                (pUVar3,(FName *)&LogMass.field_0x4,Log,
                 L"Scheduling Resume for next PrePhysics phase");
    }
    if (4 < (byte)LogMass._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
      return;
    }
  }
  return;
}

// Start @ 147250210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FMassProcessingPhaseManager::Start(FMassProcessingPhaseManager *this,UWorld *param_1)

{
  code *pcVar1;
  bool bVar2;
  UMassEntitySubsystem *pUVar3;
  TSharedRef<FMassEntityManager,1> *pTVar4;
  UObject *pUVar5;
  undefined1 auStackY_298 [32];
  TSharedRef<FMassEntityManager,1> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
  if ((param_1 == (UWorld *)0x0) ||
     (pUVar3 = UWorld::GetSubsystem<UMassEntitySubsystem>(param_1),
     pUVar3 == (UMassEntitySubsystem *)0x0)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5460852674058518865>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                       ,0x151,"EntitySubsystem");
    if (!bVar2) {
      if (FVisualLogger::bIsRecording != 0) {
        local_258._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_258,"FMassProcessingPhaseManager::Start",0x22,Yes);
        pUVar5 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
        FVisualLogger::CategorizedLogfImpl
                  (pUVar5,(FName *)&LogMass.field_0x4,Error,
                   L"Called %s while missing the EntitySubsystem");
        if ((void *)local_258._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_258._padding_);
        }
      }
      if (1 < (byte)LogMass._0_1_) {
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FMassProcessingPhaseManager::Start",0x22,Yes);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((pUVar3->EntityManager).Object == (FMassEntityManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EntityManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntitySubsystem.h"
                         ,0x24,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar4 = TSharedFromThis<FMassEntityManager,1>::AsShared
                     ((TSharedFromThis<FMassEntityManager,1> *)
                      &((pUVar3->EntityManager).Object)->_padding_,&local_268);
  Start(this,pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.SharedReferenceCount.ReferenceController);
  return;
}

// Start @ 1472503d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassProcessingPhaseManager::Start
          (FMassProcessingPhaseManager *this,TSharedPtr<FMassEntityManager,1> *param_1)

{
  TSharedRef<FMassEntityManager,1> local_18;
  
  local_18.Object = param_1->Object;
  if (local_18.Object != (FMassEntityManager *)0x0) {
    local_18.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    Start(this,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return;
  }
  return;
}

// Start @ 147250420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassProcessingPhaseManager::Start
          (FMassProcessingPhaseManager *this,TSharedRef<FMassEntityManager,1> *param_1)

{
  atomic<int> *paVar1;
  TSharedPtr<FMassEntityManager,1> *pTVar2;
  int iVar3;
  atomic<int> aVar4;
  FMassEntityManager *pFVar5;
  code *pcVar6;
  bool bVar7;
  TWeakPtr<FMassProcessingPhaseManager,1> *pTVar8;
  FName *pFVar9;
  FDelegateHandle FVar10;
  UObject *pUVar11;
  longlong lVar12;
  undefined ***pppuVar13;
  undefined1 auStack_118 [32];
  FMassEntityManager *local_f8;
  FSharedReferencer<1> local_f0;
  code *local_e8;
  undefined8 uStack_e0;
  FName local_d8;
  FName local_d0;
  undefined1 local_c8 [16];
  longlong *local_b8;
  TWeakPtr<FMassProcessingPhaseManager,1> local_b0;
  code *local_98 [2];
  undefined **local_88;
  TObjectPtr<UMassCompositeProcessor>_u_0 local_80;
  TReferenceControllerBase<1> *local_78;
  undefined ***local_70;
  code *local_68 [2];
  undefined **local_58;
  FMassProcessingPhaseManager *local_50;
  TReferenceControllerBase<1> *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f8 = param_1->Object;
  local_f0.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_f0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->EntityManager;
  if (pTVar2 != (TSharedPtr<FMassEntityManager,1> *)&local_f8) {
    pTVar2->Object = local_f8;
    local_f8 = (FMassEntityManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EntityManager).SharedReferenceCount,&local_f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0.ReferenceController);
  pTVar8 = TSharedFromThis<FMassProcessingPhaseManager,1>::AsWeak
                     ((TSharedFromThis<FMassProcessingPhaseManager,1> *)&this->_padding_,
                      (TWeakPtr<FMassProcessingPhaseManager,1> *)(local_c8 + 8));
  local_80.ObjectPtr.field0_0x0 = (FObjectPtr)pTVar8->Object;
  local_78 = (pTVar8->WeakReferenceCount).ReferenceController;
  (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar8->Object = (FMassProcessingPhaseManager *)0x0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FMassProcessingPhaseManager::Start'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMassProcessingPhaseManager::Start'::__l2::<lambda_1>,void,TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&>
                ::Call;
  local_70 = (undefined ***)0x0;
  pFVar9 = ::FName::FName(&local_d8,L"Phase-executed processors");
  FMassDebugger::RegisterProcessorDataProvider
            (*pFVar9,param_1,
             (TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>
              *)local_98);
  if (local_98[0] != (code *)0x0) {
    pppuVar13 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar13 = local_70;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    lVar12 = (longlong)local_b8 + 0xc;
    iVar3 = *(int *)lVar12;
    *(int *)lVar12 = *(int *)lVar12 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*local_b8 + 8))(local_b8,1);
    }
  }
  pTVar8 = TSharedFromThis<FMassProcessingPhaseManager,1>::AsWeak
                     ((TSharedFromThis<FMassProcessingPhaseManager,1> *)&this->_padding_,&local_b0);
  local_48 = (pTVar8->WeakReferenceCount).ReferenceController;
  local_50 = pTVar8->Object;
  (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar8->Object = (FMassProcessingPhaseManager *)0x0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FMassProcessingPhaseManager::Start'::`2'::<lambda_2>,0,0>::
              _vftable_;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMassProcessingPhaseManager::Start'::__l2::<lambda_2>,void,TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&>
                ::Call;
  local_40 = (undefined ***)0x0;
  pFVar9 = ::FName::FName(&local_d0,L"Pruned processors");
  FMassDebugger::RegisterProcessorDataProvider
            (*pFVar9,param_1,
             (TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>
              *)local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar13 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar13 = local_40;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  if (local_b0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_b0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)((local_b0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_b0.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (pTVar2->Object == (FMassEntityManager *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uStack_e0 = (ulonglong)uStack_e0._4_4_ << 0x20;
  local_e8 = OnNewArchetype;
  FVar10 = TMulticastDelegateRegistration<void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
           ::AddRaw<FMassProcessingPhaseManager>
                     ((TMulticastDelegateRegistration<void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
                       *)&pTVar2->Object->OnNewArchetypeEvent,
                      (FMassProcessingPhaseManager *)local_c8,(pmf_8e72edf9 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->OnNewArchetypeHandle).ID = *FVar10.ID;
  if (pTVar2->Object == (FMassEntityManager *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = pTVar2->Object;
  bVar7 = FWeakObjectPtr::IsValid(&(pFVar5->Owner).WeakPtr);
  if (bVar7) {
    pUVar11 = FWeakObjectPtr::Get(&(pFVar5->Owner).WeakPtr);
    lVar12 = (**(code **)(*(longlong *)pUVar11 + 0x180))(pUVar11);
    if (lVar12 != 0) {
      (**(code **)(this->_padding_ + 0x20))(this,lVar12);
    }
  }
  this->bIsAllowedToTick = true;
  return;
}

// Stop @ 1472507e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FMassProcessingPhaseManager::Stop(FMassProcessingPhaseManager *this)

{
  TSharedPtr<FMassEntityManager,1> *pTVar1;
  FDelegateHandle FVar2;
  bool bVar3;
  UObject *pUVar4;
  UWorld *this_00;
  UObject *pUVar5;
  FTickFunction *this_01;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *this_02;
  FName local_res8;
  longlong local_58;
  FSharedReferencer<1> FStack_50;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pTVar1 = &this->EntityManager;
  this->bIsAllowedToTick = false;
  if (pTVar1->Object != (FMassEntityManager *)0x0) {
    FVar2.ID = (this->OnNewArchetypeHandle).ID;
    if (FVar2.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pTVar1->Object->OnNewArchetypeEvent,FVar2);
    }
    local_58 = 0;
    FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FMassEntityManager,1> *)&local_58) {
      pTVar1->Object = (FMassEntityManager *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->EntityManager).SharedReferenceCount,&FStack_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_50.ReferenceController);
  }
  for (this_01 = (FTickFunction *)this->ProcessingPhases;
      (FPhaseGraphBuildState *)this_01 != this->ProcessingGraphBuildStates;
      this_01 = (FTickFunction *)&this_01[3].Prerequisites) {
    FTickFunction::SetTickFunctionEnable(this_01,false);
  }
  this_02 = &this->Owner;
  pUVar4 = FWeakObjectPtr::Get(&this_02->WeakPtr);
  if (((pUVar4 != (UObject *)0x0) &&
      (this_00 = (UWorld *)(**(code **)(*(longlong *)pUVar4 + 0x180))(pUVar4),
      this_00 != (UWorld *)0x0)) && (bVar3 = UWorld::IsGameWorld(this_00), bVar3)) {
    if (FVisualLogger::bIsRecording != 0) {
      pUVar5 = FWeakObjectPtr::Get(&this_02->WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
        ::FString::FString(&local_48,L"None");
      }
      else {
        local_res8.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
        local_res8.Number = *(uint *)&pUVar5->field_0x1c;
        ::FName::ToString(&local_res8,&local_48);
      }
      ::FString::ConcatFC(&local_28,&local_48,L"_MassProcessingPhaseManager");
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
      local_res8.Number = *(uint *)&pUVar4->field_0x1c;
      ::FName::ToString(&local_res8,&local_38);
      FVisualLogger::CategorizedLogfImpl
                (pUVar4,(FName *)&LogMass.field_0x4,Log,
                 L"MassProcessingPhaseManager %s.%s has been stopped");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if (4 < (byte)LogMass._0_1_) {
      pUVar5 = FWeakObjectPtr::Get(&this_02->WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
        ::FString::FString(&local_28,L"None");
      }
      else {
        local_res8.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
        local_res8.Number = *(uint *)&pUVar5->field_0x1c;
        ::FName::ToString(&local_res8,&local_28);
      }
      ::FString::ConcatFC(&local_48,&local_28,L"_MassProcessingPhaseManager");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
      local_res8.Number = *(uint *)&pUVar4->field_0x1c;
      ::FName::ToString(&local_res8,&local_38);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// TriggerPhase @ 147252210

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> * __thiscall
FMassProcessingPhaseManager::TriggerPhase
          (FMassProcessingPhaseManager *this,EMassProcessingPhase param_1,float param_2,
          TRefCountPtr<FBaseGraphTask> *param_3,Type param_4)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FBaseGraphTask> *pTVar3;
  
  if (param_1 == MAX) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Phase != EMassProcessingPhase::MAX",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                       ,0x143,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TRefCountPtr<FBaseGraphTask> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (this->bIsAllowedToTick != false) {
    (**(code **)(this->ProcessingPhases[param_1]._padding_ + 0x18))
              (this->ProcessingPhases + param_1,param_2,2,param_4,param_3);
  }
  return param_3;
}

// UnregisterDynamicProcessor @ 147253770

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassProcessingPhaseManager::UnregisterDynamicProcessor
          (FMassProcessingPhaseManager *this,UMassProcessor *param_1)

{
  atomic<TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>::FNode_*>
  aVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  atomic<TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>::FNode_*>
  aVar5;
  UMassProcessor *local_res10;
  
  cVar2 = (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
  if ((cVar2 == '\x06') &&
     (local_res10 = param_1,
     bVar3 = `FMassProcessingPhaseManager::UnregisterDynamicProcessor'::__l3::<lambda_1>::operator()
                       (&local_res10), !bVar3)) {
    return;
  }
  bVar4 = (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
  aVar5 = (atomic<TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>::FNode_*>
           )FMemory::Malloc(0x18,8);
  *(undefined8 *)aVar5 = 0;
  *(undefined8 *)((longlong)aVar5 + 8) = 0;
  UObjectBase::AddRef((UObjectBase *)param_1);
  *(UMassProcessor **)((longlong)aVar5 + 8) = param_1;
  *(undefined1 *)((longlong)aVar5 + 0x10) = 1;
  LOCK();
  aVar1 = this->PendingDynamicProcessors[bVar4].Head;
  this->PendingDynamicProcessors[bVar4].Head = aVar5;
  UNLOCK();
  *(atomic<TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>::FNode_*>
    *)aVar1 = aVar5;
  return;
}

// UnregisterDynamicProcessorInternal @ 147253810

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassProcessingPhaseManager::UnregisterDynamicProcessorInternal
          (FMassProcessingPhaseManager *this,TNotNull<UMassProcessor_*> param_1)

{
  int *piVar1;
  TArray<TWeakObjectPtr<UMassProcessor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FWeakObjectPtr *pFVar5;
  code *pcVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  UMassProcessor *local_res8;
  FName local_res10;
  FWeakObjectPtr local_38;
  FString local_30;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1.Val != (UMassProcessor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1.Val);
  }
  pFVar4 = (this->DynamicProcessors).AllocatorInstance.Data;
  iVar9 = (this->DynamicProcessors).ArrayNum;
  pFVar12 = pFVar4;
  do {
    if (pFVar12 == pFVar4 + (longlong)iVar9 * 8) {
LAB_14725385e:
      local_res10 = (FName)(param_1.Val)->_padding_;
      ::FName::ToString(&local_res10,&local_30);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                         ,0x28a,
                         L"Unable to remove Processor \'%s\', as it was never added or already removed."
                        );
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
      if (!bVar7) {
        return;
      }
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(UMassProcessor **)pFVar12 == param_1.Val) {
      uVar11 = (uint)((longlong)pFVar12 - (longlong)pFVar4 >> 3);
      if (uVar11 != 0xffffffff) {
        uVar10 = 0;
        if ((int)(uVar11 + 1) <= iVar9) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar3 = (this->DynamicProcessors).ArrayNum;
        pFVar4 = (this->DynamicProcessors).AllocatorInstance.Data;
        iVar9 = iVar3 + ~uVar11;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar11 * 8,pFVar4 + (longlong)(iVar3 - iVar9) * 8,
                  (longlong)iVar9 << 3);
        }
        piVar1 = &(this->DynamicProcessors).ArrayNum;
        *piVar1 = *piVar1 + -1;
        bVar8 = (**(code **)((param_1.Val)->_padding_ + 0x2d0))(param_1.Val);
        pTVar2 = &this->RemovedDynamicProcessors;
        this->ProcessingGraphBuildStates[bVar8].bProcessorsNeedRebuild = true;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1.Val);
        }
        local_38.ObjectIndex = 0;
        local_38.ObjectSerialNumber = 0;
        local_res8 = param_1.Val;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1.Val);
        }
        FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_res8);
        pFVar5 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
        if (((pFVar5 <= &local_38) &&
            (&local_38 < pFVar5 + (this->RemovedDynamicProcessors).ArrayMax)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = (this->RemovedDynamicProcessors).ArrayNum;
        piVar1 = &(this->RemovedDynamicProcessors).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->RemovedDynamicProcessors).ArrayNum = iVar9 + 1;
        *(FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_38;
        return;
      }
      goto LAB_14725385e;
    }
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// operator() @ 150503b90

bool __thiscall
`FMassProcessingPhaseManager::RegisterDynamicProcessor'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5460852674058519138>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5460852674058519138>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150503c0c;
    }
  }
  bVar2 = false;
LAB_150503c0c:
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

// operator() @ 150503dc0

bool __thiscall
`FMassProcessingPhaseManager::UnregisterDynamicProcessor'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5460852674058519158>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5460852674058519158>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150503e3c;
    }
  }
  bVar2 = false;
LAB_150503e3c:
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

