// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 26

// FMetasoundGenerator @ 14b2a67f0

FMetasoundGenerator * __thiscall
Metasound::FMetasoundGenerator::FMetasoundGenerator
          (FMetasoundGenerator *this,FOperatorSettings *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  bool bVar10;
  FName *pFVar11;
  FMetasoundGeneratorModule *pFVar12;
  undefined8 *puVar13;
  FMetasoundGenerator *pFVar14;
  TDataWriteReference<Metasound::FTrigger> *pTVar15;
  atomic<TMpscQueue<TSharedPtr<FMetasoundParameterPackStorage,1>,FMemory>::FNode_*> aVar16;
  atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar17;
  FName local_res8;
  undefined1 local_38 [16];
  undefined1 local_28 [32];
  
  ISoundGenerator::ISoundGenerator((ISoundGenerator *)this);
  this->_padding_ = (longlong)&___7FMetasoundGenerator_Metasound__6B_;
  fVar7 = param_1->TargetBlockRate;
  fVar8 = param_1->ActualBlockRate;
  iVar9 = param_1->NumFramesPerBlock;
  (this->OperatorSettings).SampleRate = param_1->SampleRate;
  (this->OperatorSettings).TargetBlockRate = fVar7;
  (this->OperatorSettings).ActualBlockRate = fVar8;
  (this->OperatorSettings).NumFramesPerBlock = iVar9;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->OnVertexInterfaceDataUpdated,4000);
  *(undefined8 *)&(this->OnVertexInterfaceDataUpdated).field_0x38 = 2;
  *(undefined8 *)&(this->OnVertexInterfaceDataUpdated).field_0x28 = 0;
  *(undefined8 *)&(this->OnVertexInterfaceDataUpdated).field_0x30 = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->OnVertexInterfaceDataUpdatedWithChanges,4000);
  *(undefined8 *)&(this->OnVertexInterfaceDataUpdatedWithChanges).field_0x28 = 0;
  *(undefined8 *)&(this->OnVertexInterfaceDataUpdatedWithChanges).field_0x30 = 0;
  *(undefined8 *)&(this->OnVertexInterfaceDataUpdatedWithChanges).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OnOutputChanged,4000);
  *(undefined8 *)&(this->OnOutputChanged).field_0x28 = 0;
  *(undefined8 *)&(this->OnOutputChanged).field_0x30 = 0;
  *(undefined8 *)&(this->OnOutputChanged).field_0x38 = 2;
  pFVar11 = ::FName::FName(&local_res8,"MetasoundGenerator");
  pFVar12 = FModuleManager::GetModuleChecked<Metasound::FMetasoundGeneratorModule>(*pFVar11);
  puVar13 = (undefined8 *)(**(code **)(pFVar12->_padding_ + 0x48))(pFVar12,local_38);
  (this->InstanceCounter).InstancePath.PackageName.ComparisonIndex = 0;
  (this->InstanceCounter).InstancePath.PackageName.Number = 0;
  (this->InstanceCounter).InstancePath.AssetName.ComparisonIndex = 0;
  (this->InstanceCounter).InstancePath.AssetName.Number = 0;
  (this->InstanceCounter)._padding_ = (longlong)&___7FConcurrentInstanceCounter_Metasound__6B_;
  (this->InstanceCounter).ManagerPtr.Object = (FConcurrentInstanceCounterManager *)*puVar13;
  pTVar4 = (TReferenceControllerBase<1> *)puVar13[1];
  (this->InstanceCounter).ManagerPtr.SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this->InstanceCounter).ManagerPtr.Object == (FConcurrentInstanceCounterManager *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("ManagerPtr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundInstanceCounter.cpp"
                        ,0x73,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FMetasoundGenerator *)(*pcVar6)();
      return pFVar14;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)puVar13[1]);
  this->bVertexInterfaceHasChanged = (atomic<bool>)0x0;
  (this->RootExecuter)._padding_ = (longlong)&___7FExecuter_Metasound__6B_;
  (this->RootExecuter).Operator.Ptr = (IOperator *)0x0;
  (this->RootExecuter).ExecuteFunction = (_func___cdecl_void_IOperator_ptr *)0x0;
  (this->RootExecuter).PostExecuteFunction = (_func___cdecl_void_IOperator_ptr *)0x0;
  (this->RootExecuter).ResetFunction = (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
  FInputVertexInterfaceData::FInputVertexInterfaceData
            (&(this->VertexInterfaceData).InputVertexInterfaceData);
  FOutputVertexInterfaceData::FOutputVertexInterfaceData
            (&(this->VertexInterfaceData).OutputVertexInterfaceData);
  (this->VertexInterfaceChangesSinceLastBroadcast).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexInterfaceChangesSinceLastBroadcast).ArrayNum = 0;
  (this->VertexInterfaceChangesSinceLastBroadcast).ArrayMax = 0;
  (this->GraphOutputAudio).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphOutputAudio).ArrayNum = 0;
  (this->GraphOutputAudio).ArrayMax = 0;
  pTVar15 = TDataWriteReference<Metasound::FTrigger>::
            CreateNew<Metasound::FOperatorSettings_const_&>
                      ((TDataWriteReference<Metasound::FTrigger> *)local_28,param_1);
  *(undefined ***)&this->OnFinishedTriggerRef =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->OnFinishedTriggerRef).field_0x8 = *(undefined8 *)&pTVar15->field_0x8;
  lVar5 = *(longlong *)&pTVar15->field_0x10;
  *(longlong *)&(this->OnFinishedTriggerRef).field_0x10 = lVar5;
  if (lVar5 != 0) {
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
  }
  *(undefined ***)&this->OnFinishedTriggerRef =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  (this->ParameterSetters).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterSetters).Pairs.ArrayNum = 0;
  (this->ParameterSetters).Pairs.ArrayMax = 0;
  *(undefined8 *)&this->ParameterPackSetters = 0;
  *(undefined8 *)&(this->ParameterPackSetters).field_0x8 = 0;
  *(undefined8 *)&(this->ParameterPackSetters).field_0x20 = 0;
  *(undefined4 *)&(this->ParameterPackSetters).field_0x28 = 0;
  *(undefined4 *)&(this->ParameterPackSetters).field_0x2c = 0x80;
  *(undefined4 *)&(this->ParameterPackSetters).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParameterPackSetters).field_0x34 = 0;
  *(undefined8 *)&(this->ParameterPackSetters).field_0x40 = 0;
  *(undefined4 *)&(this->ParameterPackSetters).field_0x48 = 0;
  (this->GraphRenderCost).Object = (FGraphRenderCost *)0x0;
  (this->GraphRenderCost).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  puVar2 = &this->field_0x250;
  this->bIsGraphBuilding = '\0';
  this->bDoRuntimeRenderTiming = '\0';
  this->bIsWaitingForFirstGraph = '\x01';
  this->bIsNewGraphPending = '\0';
  this->bPendingGraphTrigger = '\x01';
  this->bIsFinished = '\0';
  this->bIsFinishTriggered = '\0';
  (this->AssetPath).PackageName.ComparisonIndex = 0;
  (this->AssetPath).PackageName.Number = 0;
  (this->AssetPath).AssetName.ComparisonIndex = 0;
  (this->AssetPath).AssetName.Number = 0;
  this->FinishSample = -1;
  this->NumChannels = 0;
  this->NumFramesPerExecute = param_1->NumFramesPerBlock;
  this->NumSamplesPerExecute = 0;
  (this->InterleavedAudioBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterleavedAudioBuffer).ArrayNum = 0;
  (this->InterleavedAudioBuffer).ArrayMax = 0;
  (this->OverflowBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverflowBuffer).ArrayNum = 0;
  (this->OverflowBuffer).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PendingGraphMutex,4000);
  (this->PendingGraphData).Ptr = (FMetasoundGeneratorData *)0x0;
  (this->ParameterPackSendAddress)._padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
  (this->GraphAnalyzer).Ptr = (FGraphAnalyzer *)0x0;
  (this->ParameterQueue).Object =
       (TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory> *)0x0;
  (this->ParameterQueue).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ParameterPackSendAddress).ChannelName.ComparisonIndex = 0;
  (this->ParameterPackSendAddress).ChannelName.Number = 0;
  (this->ParameterPackSendAddress).DataType.ComparisonIndex = 0;
  (this->ParameterPackSendAddress).DataType.Number = 0;
  (this->ParameterPackSendAddress).InstanceID = 0xffffffffffffffff;
  (this->ParameterPackReceiver).Ptr = (TReceiver<FMetasoundParameterStorageWrapper> *)0x0;
  (this->ParameterPackQueue).Head =
       (atomic<TMpscQueue<TSharedPtr<FMetasoundParameterPackStorage,1>,FMemory>::FNode_*>)0x0;
  aVar16 = (atomic<TMpscQueue<TSharedPtr<FMetasoundParameterPackStorage,1>,FMemory>::FNode_*>)
           FMemory::Malloc(0x18,8);
  *(undefined8 *)aVar16 = 0;
  (this->ParameterPackQueue).Head = aVar16;
  (this->ParameterPackQueue).Tail = (FNode *)aVar16;
  (this->OutputAnalyzerModificationQueue).Head =
       (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0;
  aVar17 = (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)
           FMemory::Malloc(0x40,0x10);
  *(undefined8 *)aVar17 = 0;
  (this->OutputAnalyzerModificationQueue).Head = aVar17;
  (this->OutputAnalyzerModificationQueue).Tail = (FNode *)aVar17;
  (this->OutputAnalyzers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputAnalyzers).ArrayNum = 0;
  (this->OutputAnalyzers).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OnSetGraph,4000);
  *(undefined8 *)&(this->OnSetGraph).field_0x28 = 0;
  *(undefined8 *)&(this->OnSetGraph).field_0x30 = 0;
  *(undefined8 *)&(this->OnSetGraph).field_0x38 = 2;
  this->RenderTime = 0.0;
  (this->RenderTimer).Ptr = (FRenderTimer *)0x0;
  this->RelativeRenderCost = (atomic<float>)0x3f800000;
  return this;
}

// ~FMetasoundGenerator @ 14b2a80c0

void __thiscall Metasound::FMetasoundGenerator::~FMetasoundGenerator(FMetasoundGenerator *this)

{
  TReceiver<FMetasoundParameterStorageWrapper> *pTVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  atomic<TMpscQueue<TSharedPtr<FMetasoundParameterPackStorage,1>,FMemory>::FNode_*> aVar4;
  FGraphAnalyzer *pFVar5;
  IReceiver *pIVar6;
  FMetasoundGeneratorData *this_00;
  IOperator *pIVar7;
  FDataTransmissionCenter *this_01;
  
  this->_padding_ = (longlong)&___7FMetasoundGenerator_Metasound__6B_;
  pTVar1 = (this->ParameterPackReceiver).Ptr;
  if (pTVar1 != (TReceiver<FMetasoundParameterStorageWrapper> *)0x0) {
    (this->ParameterPackReceiver).Ptr = (TReceiver<FMetasoundParameterStorageWrapper> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_01 = FDataTransmissionCenter::Get();
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_01,(FTransmissionAddress *)&this->ParameterPackSendAddress);
  ::operator_delete((this->RenderTimer).Ptr,0x20);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->OnSetGraph).field_0x28
             ,*(int *)&(this->OnSetGraph).field_0x30);
  pvVar2 = *(void **)&(this->OnSetGraph).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnSetGraph);
  DestructItems<TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>,int>
            ((TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
              *)(this->OutputAnalyzers).AllocatorInstance.Data,(this->OutputAnalyzers).ArrayNum);
  pFVar3 = (this->OutputAnalyzers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::
  ~TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>(&this->OutputAnalyzerModificationQueue);
  aVar4 = ((this->ParameterPackQueue).Tail)->Next;
  FMemory::Free((this->ParameterPackQueue).Tail);
  while (aVar4 != (atomic<TMpscQueue<TSharedPtr<FMetasoundParameterPackStorage,1>,FMemory>::FNode_*>
                  )0x0) {
    (this->ParameterPackQueue).Tail = (FNode *)aVar4;
    aVar4 = *(atomic<TMpscQueue<TSharedPtr<FMetasoundParameterPackStorage,1>,FMemory>::FNode_*> *)
             aVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((((this->ParameterPackQueue).Tail)->Value).Pad + 8)
              );
    FMemory::Free((this->ParameterPackQueue).Tail);
  }
  pTVar1 = (this->ParameterPackReceiver).Ptr;
  if (pTVar1 != (TReceiver<FMetasoundParameterStorageWrapper> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ParameterQueue).SharedReferenceCount.ReferenceController);
  pFVar5 = (this->GraphAnalyzer).Ptr;
  if (pFVar5 != (FGraphAnalyzer *)0x0) {
    *(undefined4 *)&(pFVar5->InternalDataReferences).field_0x48 = 0;
    pvVar2 = *(void **)&(pFVar5->InternalDataReferences).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar5->InternalDataReferences);
    DestructItems<TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>,int>
              ((TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
                *)(pFVar5->Analyzers).AllocatorInstance.Data,(pFVar5->Analyzers).ArrayNum);
    pFVar3 = (pFVar5->Analyzers).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pIVar6 = (pFVar5->ActiveAnalyzerReceiver).Ptr;
    if (pIVar6 != (IReceiver *)0x0) {
      (**(code **)pIVar6->_padding_)(pIVar6,1);
    }
    ::operator_delete(pFVar5,0x80);
  }
  this_00 = (this->PendingGraphData).Ptr;
  if (this_00 != (FMetasoundGeneratorData *)0x0) {
    MetasoundGeneratorPrivate::FMetasoundGeneratorData::~FMetasoundGeneratorData(this_00);
    ::operator_delete(this_00,0x120);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PendingGraphMutex);
  pFVar3 = (this->OverflowBuffer).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->InterleavedAudioBuffer).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GraphRenderCost).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->ParameterPackSetters).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ParameterPackSetters).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ParameterPackSetters);
  DestructItems<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter>,int>
            ((TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter> *)
             (this->ParameterSetters).Pairs.AllocatorInstance.Data,
             (this->ParameterSetters).Pairs.ArrayNum);
  pFVar3 = (this->ParameterSetters).Pairs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OnFinishedTriggerRef).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->GraphOutputAudio).AllocatorInstance.Data,(this->GraphOutputAudio).ArrayNum);
  pFVar3 = (this->GraphOutputAudio).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->VertexInterfaceChangesSinceLastBroadcast).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FVertexInterfaceData::~FVertexInterfaceData(&this->VertexInterfaceData);
  pIVar7 = (this->RootExecuter).Operator.Ptr;
  if (pIVar7 != (IOperator *)0x0) {
    (**(code **)*pIVar7)(pIVar7,1);
  }
  (this->RootExecuter)._padding_ = (longlong)&___7IOperator_Metasound__6B_;
  FConcurrentInstanceCounter::~FConcurrentInstanceCounter(&this->InstanceCounter);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnOutputChanged).field_0x28,*(int *)&(this->OnOutputChanged).field_0x30);
  pvVar2 = *(void **)&(this->OnOutputChanged).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnOutputChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnVertexInterfaceDataUpdatedWithChanges).field_0x28,
             *(int *)&(this->OnVertexInterfaceDataUpdatedWithChanges).field_0x30);
  pvVar2 = *(void **)&(this->OnVertexInterfaceDataUpdatedWithChanges).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnVertexInterfaceDataUpdatedWithChanges);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnVertexInterfaceDataUpdated).field_0x28,
             *(int *)&(this->OnVertexInterfaceDataUpdated).field_0x30);
  pvVar2 = *(void **)&(this->OnVertexInterfaceDataUpdated).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnVertexInterfaceDataUpdated);
  ISoundGenerator::~ISoundGenerator((ISoundGenerator *)this);
  return;
}

// operator() @ 14b2a8b20

/* WARNING: Removing unreachable block (ram,0x00014b2a8d56) */

void __thiscall
`Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::__l2::<lambda_1>::operator()(void *this)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  FAnyDataReference *pFVar12;
  longlong lVar13;
  IVertexAnalyzerRegistry *pIVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong local_res10;
  longlong local_78;
  longlong lStack_70;
  FAnyDataReference *local_68;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  pFVar12 = Metasound::FOutputVertexInterfaceData::FindDataReference
                      ((FOutputVertexInterfaceData *)(*(longlong *)this + 0x168),
                       (FName *)((longlong)this + 0x28));
  if (pFVar12 != (FAnyDataReference *)0x0) {
    lVar18 = *(longlong *)((longlong)this + 0x38);
    plVar20 = *(longlong **)(*(longlong *)this + 0x318);
    lVar19 = *(longlong *)((longlong)this + 0x28);
    plVar15 = plVar20 + *(int *)(*(longlong *)this + 800);
    for (; plVar20 != plVar15; plVar20 = plVar20 + 1) {
      lVar13 = (**(code **)(*(longlong *)*plVar20 + 8))();
      if ((lVar19 == *(longlong *)(lVar13 + 0x20)) && (lVar18 == *(longlong *)(lVar13 + 0x30))) {
        plVar15 = (longlong *)*plVar20;
        if (plVar15 != (longlong *)0x0) {
          lVar18 = (**(code **)(pFVar12->_padding_ + 0x20))(pFVar12);
          lVar19 = (**(code **)(*plVar15 + 0x10))(plVar15);
          if (lVar19 == lVar18) {
            return;
          }
          (**(code **)(*(longlong *)*plVar20 + 0x18))((longlong *)*plVar20,pFVar12);
          return;
        }
        break;
      }
    }
    pIVar14 = Metasound::Frontend::IVertexAnalyzerRegistry::Get();
    plVar15 = (longlong *)
              (**(code **)((longlong)*pIVar14 + 8))(pIVar14,*(undefined8 *)((longlong)this + 0x38));
    if (plVar15 != (longlong *)0x0) {
      lStack_70 = *(longlong *)this + 0x18;
      local_78 = (longlong)this + 8;
      local_68 = pFVar12;
      (**(code **)(*plVar15 + 0x18))(plVar15,&local_res10,&local_78);
      if (local_res10 != 0) {
        bVar10 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                           ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_res10 + 8));
        lVar18 = local_res10;
        if (!bVar10) {
          uVar8 = *(undefined8 *)((longlong)this + 0x18);
          uVar9 = *(undefined8 *)((longlong)this + 0x20);
          uVar1 = *(undefined1 *)((longlong)this + 0x58);
          uVar2 = *(undefined8 *)this;
          uVar3 = *(undefined8 *)((longlong)this + 0x10);
          uVar4 = *(undefined8 *)((longlong)this + 0x28);
          uVar5 = *(undefined8 *)((longlong)this + 0x30);
          uVar6 = *(undefined8 *)((longlong)this + 0x38);
          uVar7 = *(undefined8 *)((longlong)this + 0x50);
          local_78 = *(longlong *)((longlong)this + 0x40);
          lStack_70 = *(longlong *)((longlong)this + 0x48);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_res10 + 8),
                     (FWriteAccessScope *)&local_60);
          local_48 = (FDelegateAllocation *)(lVar18 + 0x10);
          puVar16 = UE::Core::Private::DelegateAllocate(0x78,local_48);
          if (puVar16 != (undefined8 *)0x0) {
            *puVar16 = &
                       ___7__TCommonDelegateInstanceState___A6AXVFName__V__TSharedPtr_VIOutputStorage_Metasound___00___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar17 = FDelegateHandle::GenerateNewID();
            puVar16[2] = uVar17;
            *puVar16 = &TBaseFunctorDelegateInstance<void___cdecl(FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultDelegateUserPolicy,``Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::`2'::<lambda_1>::operator()'::`20'::<lambda_2>_>
                        ::_vftable_;
            puVar16[3] = uVar2;
            puVar16[6] = uVar8;
            puVar16[7] = uVar9;
            puVar16[4] = &___7FAnalyzerAddress_Frontend_Metasound__6B_;
            puVar16[5] = uVar3;
            puVar16[0xb] = local_78;
            puVar16[0xc] = lStack_70;
            puVar16[8] = uVar4;
            puVar16[9] = uVar5;
            puVar16[10] = uVar6;
            puVar16[0xd] = uVar7;
            *(undefined1 *)(puVar16 + 0xe) = uVar1;
          }
          if (local_60.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
          }
        }
        lVar18 = *(longlong *)this;
        iVar11 = *(int *)(lVar18 + 800);
        if (iVar11 == *(int *)(lVar18 + 0x324)) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)(lVar18 + 0x318),(int *)(lVar18 + 0x324));
        }
        *(int *)(lVar18 + 800) = iVar11 + 1;
        *(longlong *)(*(longlong *)(lVar18 + 0x318) + (longlong)iVar11 * 8) = local_res10;
      }
    }
  }
  return;
}

// operator() @ 14b2a9b40

void __thiscall
`Metasound::FMetasoundGenerator::RemoveOutputVertexAnalyzer'::__l2::<lambda_1>::operator()
          (void *this)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  int local_res8;
  
  lVar2 = *(longlong *)this;
  lVar3 = *(longlong *)((longlong)this + 0x28);
  lVar4 = *(longlong *)((longlong)this + 0x38);
  iVar1 = *(int *)(lVar2 + 800);
  if (iVar1 != 0) {
    puVar5 = *(undefined8 **)(lVar2 + 0x318);
    iVar10 = 0;
    local_res8 = 0;
    lVar7 = (**(code **)(*(longlong *)*puVar5 + 8))();
    if ((lVar3 == *(longlong *)(lVar7 + 0x20)) && (lVar4 == *(longlong *)(lVar7 + 0x30))) {
      bVar13 = 0;
    }
    else {
      bVar13 = 1;
    }
    lVar7 = 0;
    iVar12 = 0;
    iVar11 = iVar10;
joined_r0x00014b2a9be2:
    do {
      lVar7 = lVar7 + 1;
      iVar10 = iVar10 + 1;
      if (lVar7 < iVar1) {
        lVar8 = (**(code **)(*(longlong *)puVar5[lVar7] + 8))();
        if ((lVar3 == *(longlong *)(lVar8 + 0x20)) && (lVar4 == *(longlong *)(lVar8 + 0x30))) {
          bVar6 = 0;
        }
        else {
          bVar6 = 1;
        }
        iVar12 = local_res8;
        if (bVar13 == bVar6) goto joined_r0x00014b2a9be2;
      }
      iVar9 = iVar10 - iVar11;
      if (bVar13 == 0) {
        DestructItems<TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>,int>
                  ((TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
                    *)(puVar5 + iVar11),iVar9);
      }
      else {
        if (iVar12 != iVar11) {
          memmove(puVar5 + iVar12,puVar5 + iVar11,(longlong)iVar9 << 3);
        }
        iVar12 = iVar12 + iVar9;
        local_res8 = iVar12;
      }
      bVar13 = bVar13 ^ 1;
      iVar11 = iVar10;
    } while (lVar7 < iVar1);
    *(int *)(lVar2 + 800) = iVar12;
  }
  return;
}

// AddGraphSetCallback @ 14b2aaa60

FDelegateHandle __thiscall
Metasound::FMetasoundGenerator::AddGraphSetCallback
          (FMetasoundGenerator *this,
          TDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FDelegateHandle FVar3;
  LPCRITICAL_SECTION in_R8;
  
  lpCriticalSection = &this->PendingGraphMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->bIsNewGraphPending == '\0' && this->bIsWaitingForFirstGraph == '\0') {
    if (in_R8 == (LPCRITICAL_SECTION)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar3.ID = (*pcVar1)();
        return (FDelegateHandle)FVar3.ID;
      }
    }
    EnterCriticalSection(in_R8);
    if ((in_R8[1].LockCount != 0) && (in_R8[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      (**(code **)(*(longlong *)in_R8[1].DebugInfo + 0x68))();
    }
    LeaveCriticalSection(in_R8);
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
             &this->OnSetGraph,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOutputVertexAnalyzer @ 14b2ab2e0

void __thiscall
Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer
          (FMetasoundGenerator *this,FAnalyzerAddress *param_1)

{
  atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar1;
  bool bVar2;
  ulong64 uVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar12;
  undefined8 *puVar13;
  
  uVar8 = *(undefined8 *)&param_1->NodeID;
  uVar9 = *(undefined8 *)&(param_1->NodeID).C;
  uVar3 = param_1->InstanceID;
  FVar4 = param_1->OutputName;
  FVar5 = param_1->DataType;
  FVar6 = param_1->AnalyzerName;
  FVar7 = param_1->AnalyzerMemberName;
  bVar2 = param_1->UseDataTransmissionCenter;
  uVar10 = *(undefined8 *)&param_1->AnalyzerInstanceID;
  uVar11 = *(undefined8 *)&(param_1->AnalyzerInstanceID).C;
  aVar12 = (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)
           FMemory::Malloc(0x40,0x10);
  *(undefined8 *)aVar12 = 0;
  *(undefined8 *)((longlong)aVar12 + 0x10) = 0;
  *(undefined8 *)((longlong)aVar12 + 0x38) = 0;
  puVar13 = FMemory::Malloc(0x68,8);
  *(undefined8 **)((longlong)aVar12 + 0x38) = puVar13;
  puVar13[1] = this;
  *puVar13 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar13[4] = uVar8;
  puVar13[5] = uVar9;
  puVar13[2] = &___7FAnalyzerAddress_Frontend_Metasound__6B_;
  puVar13[3] = uVar3;
  *(FName *)(puVar13 + 6) = FVar4;
  puVar13[9] = uVar10;
  puVar13[10] = uVar11;
  *(FName *)(puVar13 + 7) = FVar5;
  *(FName *)(puVar13 + 8) = FVar6;
  *(FName *)(puVar13 + 0xb) = FVar7;
  *(bool *)(puVar13 + 0xc) = bVar2;
  if (puVar13 != (undefined8 *)&DAT_fffffffffffffff8) {
    *(code **)((longlong)aVar12 + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::__l2::<lambda_1>,void>
         ::Call;
  }
  LOCK();
  aVar1 = (this->OutputAnalyzerModificationQueue).Head;
  (this->OutputAnalyzerModificationQueue).Head = aVar12;
  UNLOCK();
  *(atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> *)aVar1 = aVar12;
  return;
}

// ClearGraph @ 14b2ae3d0

void __thiscall Metasound::FMetasoundGenerator::ClearGraph(FMetasoundGenerator *this)

{
  int *piVar1;
  TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  IOperator *pIVar5;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar6;
  longlong lVar7;
  undefined8 uVar8;
  FGraphAnalyzer *pFVar9;
  void *pvVar10;
  IReceiver *pIVar11;
  TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter> *pTVar12;
  code *pcVar13;
  bool bVar14;
  int iVar15;
  FInputDataVertex *pFVar16;
  FOutputDataVertex *pFVar17;
  TDataWriteReference<Metasound::FTrigger> *pTVar18;
  FInputBinding *this_00;
  FOutputBinding *this_01;
  FInputBinding *pFVar19;
  FOutputBinding *pFVar20;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  FVertexInterfaceData local_b0;
  undefined8 local_60;
  TReferenceControllerBase<0> *pTStack_58;
  undefined1 local_50 [40];
  
  iVar3 = (this->VertexInterfaceData).InputVertexInterfaceData.Bindings.ArrayNum;
  this_00 = (FInputBinding *)
            (this->VertexInterfaceData).InputVertexInterfaceData.Bindings.AllocatorInstance.Data;
  pFVar19 = this_00 + iVar3;
  while( true ) {
    if ((this->VertexInterfaceData).InputVertexInterfaceData.Bindings.ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FInputBinding,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar19) break;
    pTVar2 = &this->VertexInterfaceChangesSinceLastBroadcast;
    pFVar16 = VertexDataPrivate::FInputBinding::GetVertex(this_00);
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    local_c8 = pFVar16->_padding_;
    local_c0 = CONCAT22(local_c0._2_2_,0x202);
    if ((pFVar4 <= (FScriptContainerElement *)&local_c8) &&
       ((FScriptContainerElement *)&local_c8 <
        pFVar4 + (longlong)(this->VertexInterfaceChangesSinceLastBroadcast).ArrayMax * 0xc)) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar14) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    iVar15 = (this->VertexInterfaceChangesSinceLastBroadcast).ArrayNum;
    piVar1 = &(this->VertexInterfaceChangesSinceLastBroadcast).ArrayMax;
    if (iVar15 == *piVar1) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&pTVar2->AllocatorInstance,piVar1);
    }
    this_00 = this_00 + 1;
    (this->VertexInterfaceChangesSinceLastBroadcast).ArrayNum = iVar15 + 1;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    *(longlong *)(pFVar4 + (longlong)iVar15 * 0xc) = local_c8;
    *(undefined4 *)(pFVar4 + (longlong)iVar15 * 0xc + 8) = local_c0;
  }
  iVar3 = (this->VertexInterfaceData).OutputVertexInterfaceData.Bindings.ArrayNum;
  this_01 = (FOutputBinding *)
            (this->VertexInterfaceData).OutputVertexInterfaceData.Bindings.AllocatorInstance.Data;
  pFVar20 = this_01 + iVar3;
  while( true ) {
    if ((this->VertexInterfaceData).OutputVertexInterfaceData.Bindings.ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FOutputBinding,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (this_01 == pFVar20) break;
    pTVar2 = &this->VertexInterfaceChangesSinceLastBroadcast;
    pFVar17 = VertexDataPrivate::FOutputBinding::GetVertex(this_01);
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    local_bc = *(undefined8 *)&pFVar17->field_0x8;
    local_b4 = CONCAT22(local_b4._2_2_,0x203);
    if ((pFVar4 <= (FScriptContainerElement *)&local_bc) &&
       ((FScriptContainerElement *)&local_bc <
        pFVar4 + (longlong)(this->VertexInterfaceChangesSinceLastBroadcast).ArrayMax * 0xc)) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar14) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    iVar15 = (this->VertexInterfaceChangesSinceLastBroadcast).ArrayNum;
    piVar1 = &(this->VertexInterfaceChangesSinceLastBroadcast).ArrayMax;
    if (iVar15 == *piVar1) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&pTVar2->AllocatorInstance,piVar1);
    }
    this_01 = this_01 + 1;
    (this->VertexInterfaceChangesSinceLastBroadcast).ArrayNum = iVar15 + 1;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    *(undefined8 *)(pFVar4 + (longlong)iVar15 * 0xc) = local_bc;
    *(undefined4 *)(pFVar4 + (longlong)iVar15 * 0xc + 8) = local_b4;
  }
  pIVar5 = (this->RootExecuter).Operator.Ptr;
  (this->RootExecuter).ExecuteFunction = (_func___cdecl_void_IOperator_ptr *)0x0;
  (this->RootExecuter).PostExecuteFunction = (_func___cdecl_void_IOperator_ptr *)0x0;
  (this->RootExecuter).ResetFunction = (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
  (this->RootExecuter).Operator.Ptr = (IOperator *)0x0;
  if (pIVar5 != (IOperator *)0x0) {
    (**(code **)*pIVar5)(pIVar5,1);
  }
  local_b0.InputVertexInterfaceData.bIsVertexInterfaceFrozen = false;
  local_b0.InputVertexInterfaceData._1_7_ = 0;
  local_b0.InputVertexInterfaceData.Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  local_b0.InputVertexInterfaceData.Bindings.ArrayNum = 0;
  local_b0.InputVertexInterfaceData.Bindings.ArrayMax = 0;
  local_b0.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_b0.InputVertexInterfaceData.SubInterfaces.ArrayNum = 0;
  local_b0.InputVertexInterfaceData.SubInterfaces.ArrayMax = 0;
  local_b0.OutputVertexInterfaceData.bIsVertexInterfaceFrozen = false;
  local_b0.OutputVertexInterfaceData._1_7_ = 0;
  local_b0.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_b0.OutputVertexInterfaceData.Bindings.ArrayNum = 0;
  local_b0.OutputVertexInterfaceData.Bindings.ArrayMax = 0;
  local_b0.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_b0.OutputVertexInterfaceData.SubInterfaces.ArrayNum = 0;
  local_b0.OutputVertexInterfaceData.SubInterfaces.ArrayMax = 0;
  FInputVertexInterfaceData::FInputVertexInterfaceData(&local_b0.InputVertexInterfaceData);
  FOutputVertexInterfaceData::FOutputVertexInterfaceData(&local_b0.OutputVertexInterfaceData);
  FVertexInterfaceData::operator=(&this->VertexInterfaceData,&local_b0);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)
             local_b0.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data,
             local_b0.OutputVertexInterfaceData.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_b0.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data
      != (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_b0.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::VertexDataPrivate::FOutputBinding,int>
            ((FOutputBinding *)local_b0.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data,
             local_b0.OutputVertexInterfaceData.Bindings.ArrayNum);
  if ((FOutputBinding *)local_b0.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data !=
      (FOutputBinding *)0x0) {
    FMemory::Free(local_b0.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)
             local_b0.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data,
             local_b0.InputVertexInterfaceData.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_b0.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data
      != (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_b0.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
            ((FInputBinding *)local_b0.InputVertexInterfaceData.Bindings.AllocatorInstance.Data,
             local_b0.InputVertexInterfaceData.Bindings.ArrayNum);
  if ((FInputBinding *)local_b0.InputVertexInterfaceData.Bindings.AllocatorInstance.Data !=
      (FInputBinding *)0x0) {
    FMemory::Free(local_b0.InputVertexInterfaceData.Bindings.AllocatorInstance.Data);
  }
  piVar1 = &(this->GraphOutputAudio).ArrayMax;
  pTVar6 = (TDataReadReference<Metasound::FAudioBuffer> *)
           (this->GraphOutputAudio).AllocatorInstance.Data;
  iVar3 = (this->GraphOutputAudio).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>(pTVar6,iVar3);
    (this->GraphOutputAudio).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->GraphOutputAudio).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>(pTVar6,iVar3);
    (this->GraphOutputAudio).ArrayNum = 0;
  }
  pTVar18 = TDataWriteReference<Metasound::FTrigger>::
            CreateNew<Metasound::FOperatorSettings_const_&>
                      ((TDataWriteReference<Metasound::FTrigger> *)local_50,&this->OperatorSettings)
  ;
  lVar7 = *(longlong *)&pTVar18->field_0x10;
  uVar8 = *(undefined8 *)&pTVar18->field_0x8;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  local_60 = *(undefined8 *)&(this->OnFinishedTriggerRef).field_0x8;
  pTStack_58 = *(TReferenceControllerBase<0> **)&(this->OnFinishedTriggerRef).field_0x10;
  *(undefined8 *)&(this->OnFinishedTriggerRef).field_0x8 = uVar8;
  *(longlong *)&(this->OnFinishedTriggerRef).field_0x10 = lVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_58);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_50._16_8_);
  pFVar9 = (this->GraphAnalyzer).Ptr;
  if (pFVar9 != (FGraphAnalyzer *)0x0) {
    (this->GraphAnalyzer).Ptr = (FGraphAnalyzer *)0x0;
    *(undefined4 *)&(pFVar9->InternalDataReferences).field_0x48 = 0;
    pvVar10 = *(void **)&(pFVar9->InternalDataReferences).field_0x40;
    if (pvVar10 != (void *)0x0) {
      FMemory::Free(pvVar10);
    }
    TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar9->InternalDataReferences);
    DestructItems<TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>,int>
              ((TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
                *)(pFVar9->Analyzers).AllocatorInstance.Data,(pFVar9->Analyzers).ArrayNum);
    pFVar4 = (pFVar9->Analyzers).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pIVar11 = (pFVar9->ActiveAnalyzerReceiver).Ptr;
    if (pIVar11 != (IReceiver *)0x0) {
      (**(code **)pIVar11->_padding_)(pIVar11,1);
    }
    ::operator_delete(pFVar9,0x80);
  }
  piVar1 = &(this->OutputAnalyzers).ArrayMax;
  pFVar4 = (this->OutputAnalyzers).AllocatorInstance.Data;
  iVar3 = (this->OutputAnalyzers).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>,int>
              ((TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
                *)pFVar4,iVar3);
    (this->OutputAnalyzers).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->OutputAnalyzers).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>,int>
              ((TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
                *)pFVar4,iVar3);
    (this->OutputAnalyzers).ArrayNum = 0;
  }
  piVar1 = &(this->ParameterSetters).Pairs.ArrayMax;
  pTVar12 = (TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter> *)
            (this->ParameterSetters).Pairs.AllocatorInstance.Data;
  iVar3 = (this->ParameterSetters).Pairs.ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter>,int>
              (pTVar12,iVar3);
    (this->ParameterSetters).Pairs.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)&this->ParameterSetters,0,piVar1);
    }
  }
  else {
    DestructItems<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter>,int>
              (pTVar12,iVar3);
    (this->ParameterSetters).Pairs.ArrayNum = 0;
  }
  TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
           *)&this->ParameterPackSetters);
  LOCK();
  this->bVertexInterfaceHasChanged = (atomic<bool>)0x1;
  UNLOCK();
  return;
}

// FillWithBuffer @ 14b2b0650

int __thiscall
Metasound::FMetasoundGenerator::FillWithBuffer
          (FMetasoundGenerator *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          float *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == 0) {
    return 0;
  }
  bVar4 = this->field_0x250;
  iVar1 = param_3;
  if (iVar2 < param_3) {
    iVar1 = iVar2;
  }
  if (this->bIsFinishTriggered == '\0') {
    iVar2 = this->FinishSample;
    if (iVar2 != -1) {
      if (iVar1 < iVar2) {
        iVar2 = iVar2 - iVar1;
      }
      else {
        bVar4 = bVar4 | 2;
        this->field_0x250 = bVar4;
      }
    }
    iVar3 = iVar2;
    iVar5 = iVar1;
    if ((bVar4 & 2) != 0) {
      iVar3 = -1;
      iVar5 = iVar2;
    }
    this->FinishSample = iVar3;
    memcpy(param_2,(param_1->AllocatorInstance).Data,(longlong)iVar5 * 4);
    memset(param_2 + iVar5,0,(longlong)(param_3 - iVar5) << 2);
    return iVar1;
  }
  memcpy(param_2,(param_1->AllocatorInstance).Data,(longlong)param_3 << 2);
  return iVar1;
}

// GetCPUCoreUtilization @ 14b2b0fb0

double __thiscall Metasound::FMetasoundGenerator::GetCPUCoreUtilization(FMetasoundGenerator *this)

{
  return this->RenderTime;
}

// GetDesiredNumSamplesToRenderPerCallback @ 14b2b10d0

int __thiscall
Metasound::FMetasoundGenerator::GetDesiredNumSamplesToRenderPerCallback(FMetasoundGenerator *this)

{
  return this->NumFramesPerExecute * this->NumChannels;
}

// GetNumChannels @ 14b2b1300

int __thiscall Metasound::FMetasoundGenerator::GetNumChannels(FMetasoundGenerator *this)

{
  return this->NumChannels;
}

// GetRelativeRenderCost @ 14b2b1630

float __thiscall Metasound::FMetasoundGenerator::GetRelativeRenderCost(FMetasoundGenerator *this)

{
  return (float)this->RelativeRenderCost;
}

// HandleRenderTimingEnableDisable @ 14b2b1680

void __thiscall
Metasound::FMetasoundGenerator::HandleRenderTimingEnableDisable(FMetasoundGenerator *this)

{
  TUniquePtr<Metasound::MetasoundGeneratorPrivate::FRenderTimer,TDefaultDelete<Metasound::MetasoundGeneratorPrivate::FRenderTimer>_>
  *pTVar1;
  FRenderTimer *pFVar2;
  FRenderTimer *pFVar3;
  undefined8 local_18 [2];
  
  pTVar1 = &this->RenderTimer;
  pFVar3 = pTVar1->Ptr;
  if (this->bDoRuntimeRenderTiming == '\0') {
    if (pFVar3 != (FRenderTimer *)0x0) {
      pTVar1->Ptr = (FRenderTimer *)0x0;
      ::operator_delete(pFVar3,0x20);
      this->RenderTime = 0.0;
    }
  }
  else if (pFVar3 == (FRenderTimer *)0x0) {
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 == (FRenderTimer *)0x0) {
      pFVar3 = (FRenderTimer *)0x0;
    }
    else {
      pFVar3 = MetasoundGeneratorPrivate::FRenderTimer::FRenderTimer
                         (pFVar3,&this->OperatorSettings,__real_3ff0000000000000);
    }
    if (pTVar1 != (TUniquePtr<Metasound::MetasoundGeneratorPrivate::FRenderTimer,TDefaultDelete<Metasound::MetasoundGeneratorPrivate::FRenderTimer>_>
                   *)local_18) {
      pFVar2 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar3;
      pFVar3 = (FRenderTimer *)0x0;
      ::operator_delete(pFVar2,0x20);
    }
    ::operator_delete(pFVar3,0x20);
    return;
  }
  return;
}

// InitBase @ 14b2b1ea0

void __thiscall
Metasound::FMetasoundGenerator::InitBase(FMetasoundGenerator *this,FGeneratorInitParams *param_1)

{
  FTopLevelAssetPath *pFVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory> *pTVar4;
  TReceiver<FMetasoundParameterStorageWrapper> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FName FVar7;
  FName FVar8;
  FConcurrentInstanceCounterManager *this_00;
  FSendAddress *pFVar9;
  FDataTransmissionCenter *this_01;
  TUniquePtr<Metasound::TReceiver<FMetasoundParameterStorageWrapper>,TDefaultDelete<Metasound::TReceiver<FMetasoundParameterStorageWrapper>_>_>
  TVar10;
  TUniquePtr<Metasound::TReceiver<FMetasoundParameterStorageWrapper>,TDefaultDelete<Metasound::TReceiver<FMetasoundParameterStorageWrapper>_>_>
  *pTVar11;
  FTransmissionAddress local_res8;
  FSendAddress local_28;
  
  FVar7 = (param_1->AssetPath).PackageName;
  FVar8 = (param_1->AssetPath).AssetName;
  (this->AssetPath).PackageName = FVar7;
  (this->AssetPath).AssetName = FVar8;
  iVar2 = (param_1->AudioOutputNames).ArrayNum;
  this->NumChannels = iVar2;
  this->NumSamplesPerExecute = iVar2 * this->NumFramesPerExecute;
  pFVar1 = &(this->InstanceCounter).InstancePath;
  pFVar1->PackageName = FVar7;
  (this->InstanceCounter).InstancePath.AssetName = FVar8;
  this_00 = FConcurrentInstanceCounter::GetManagerChecked(&this->InstanceCounter);
  FConcurrentInstanceCounterManager::Increment(this_00,pFVar1);
  pTVar3 = (param_1->DataChannel).SharedReferenceCount.ReferenceController;
  pTVar4 = (param_1->DataChannel).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (this->ParameterQueue).SharedReferenceCount.ReferenceController;
  (this->ParameterQueue).Object = pTVar4;
  (this->ParameterQueue).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pFVar9 = UMetasoundParameterPack::CreateSendAddressFromEnvironment
                     (&local_28,&param_1->Environment);
  (this->ParameterPackSendAddress).ChannelName = pFVar9->ChannelName;
  (this->ParameterPackSendAddress).DataType = pFVar9->DataType;
  (this->ParameterPackSendAddress).InstanceID = pFVar9->InstanceID;
  this_01 = FDataTransmissionCenter::Get();
  local_28._padding_._0_4_ = (this->OperatorSettings).SampleRate;
  local_28._padding_._4_4_ = (this->OperatorSettings).TargetBlockRate;
  local_28.ChannelName.ComparisonIndex.Value = (uint)(this->OperatorSettings).ActualBlockRate;
  local_28.ChannelName.Number = (this->OperatorSettings).NumFramesPerBlock;
  TVar10 = FDataTransmissionCenter::RegisterNewReceiver<FMetasoundParameterStorageWrapper>
                     (this_01,&local_res8,(FReceiverInitParams *)&this->ParameterPackSendAddress);
  pTVar11 = &this->ParameterPackReceiver;
  if ((TReceiver<FMetasoundParameterStorageWrapper> *)pTVar11 != TVar10.Ptr) {
    pTVar5 = pTVar11->Ptr;
    pTVar11->Ptr = (TReceiver<FMetasoundParameterStorageWrapper> *)(TVar10.Ptr)->_padding_;
    (TVar10.Ptr)->_padding_ = 0;
    if (pTVar5 != (TReceiver<FMetasoundParameterStorageWrapper> *)0x0) {
      (**(code **)pTVar5->_padding_)(pTVar5,1);
    }
  }
  if (local_res8 != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8)(local_res8,1);
  }
  return;
}

// InterleaveGeneratedAudio @ 14b2b2170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FMetasoundGenerator::InterleaveGeneratedAudio(FMetasoundGenerator *this)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  
  piVar1 = &(this->InterleavedAudioBuffer).ArrayMax;
  piVar2 = &(this->InterleavedAudioBuffer).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->InterleavedAudioBuffer).AllocatorInstance,0,piVar1);
  }
  if (0 < this->NumSamplesPerExecute) {
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,this->NumSamplesPerExecute,&(this->InterleavedAudioBuffer).AllocatorInstance,
               piVar2,piVar1);
  }
  MetasoundGeneratorPrivate::LogInvalidAudioSampleValues(&this->AssetPath,&this->GraphOutputAudio);
  uVar11 = 0;
  if (0 < this->NumChannels) {
    lVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar11 < (this->GraphOutputAudio).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar4 = *(undefined8 **)((this->GraphOutputAudio).AllocatorInstance.Data + lVar10 + 8);
      if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      puVar9 = (undefined4 *)*puVar4;
      pFVar12 = (this->InterleavedAudioBuffer).AllocatorInstance.Data + (longlong)(int)uVar11 * 4;
      iVar8 = 0;
      if (0 < this->NumFramesPerExecute) {
        do {
          uVar3 = *puVar9;
          puVar9 = puVar9 + 1;
          *(undefined4 *)pFVar12 = uVar3;
          iVar8 = iVar8 + 1;
          pFVar12 = pFVar12 + (longlong)this->NumChannels * 4;
        } while (iVar8 < this->NumFramesPerExecute);
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x20;
    } while ((int)uVar11 < this->NumChannels);
  }
  return;
}

// IsFinished @ 14b2b2450

bool __thiscall Metasound::FMetasoundGenerator::IsFinished(FMetasoundGenerator *this)

{
  return this->bIsFinished;
}

// OnGenerateAudio @ 14b2b2f90

/* WARNING: Removing unreachable block (ram,0x00014b2b34cd) */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
Metasound::FMetasoundGenerator::OnGenerateAudio
          (FMetasoundGenerator *this,float *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  TMulticastDelegate<void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
  *this_00;
  undefined1 *puVar3;
  TUniquePtr<Metasound::MetasoundGeneratorPrivate::FRenderTimer,TDefaultDelete<Metasound::MetasoundGeneratorPrivate::FRenderTimer>_>
  *pTVar4;
  float *_Dst;
  undefined4 uVar5;
  atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar6;
  FGraphRenderCost *pFVar7;
  _func___cdecl_void_IOperator_ptr *p_Var8;
  undefined8 *puVar9;
  FGraphAnalyzer *this_01;
  longlong lVar10;
  bool bVar11;
  code *pcVar12;
  atomic<float> aVar13;
  double dVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  uint uVar18;
  FRenderTimer *pFVar19;
  FRenderTimer *pFVar20;
  FVertexInterfaceData *this_02;
  FVertexInterfaceData *pFVar21;
  uint uVar22;
  ForAnyElementType FVar23;
  longlong *plVar24;
  byte bVar25;
  undefined4 *puVar26;
  FScriptContainerElement *pFVar27;
  FScriptContainerElement *pFVar28;
  longlong lVar29;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar30;
  FRenderTimer *pFVar31;
  uint uVar32;
  uint uVar33;
  bool bVar34;
  bool bVar35;
  atomic<float> aVar36;
  double dVar37;
  uint local_res18;
  uint local_2d8;
  undefined1 local_2d4 [4];
  TArray<float,TAlignedHeapAllocator<16>_> *local_2d0;
  FLLMScope local_2c8 [2];
  TArray<float,TAlignedHeapAllocator<16>_> *local_2c0;
  FLLMScope local_2b8;
  uint local_2b4;
  FMemScope local_2b0;
  FRenderTimer *local_2a8;
  LARGE_INTEGER local_2a0;
  FName local_298;
  FName local_290;
  FName local_288;
  FName local_280;
  FName local_278;
  LARGE_INTEGER local_270;
  FName local_268;
  LARGE_INTEGER local_260;
  LARGE_INTEGER local_258;
  LARGE_INTEGER local_250;
  LARGE_INTEGER local_248;
  FMemScope local_240;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  code *local_1f8;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  longlong *local_1d0;
  char local_1c8;
  code *local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  longlong *local_190;
  char local_188;
  undefined8 local_178;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FVertexInterfaceData local_120;
  FVertexInterfaceData local_d0;
  
  lVar29 = (longlong)param_2;
  FLLMScope::FLLMScope
            (&local_2b8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_298 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_240,&local_298,true);
  local_290 = (this->AssetPath).AssetName;
  bVar11 = 0 < GCycleStatsShouldEmitNamedEvents;
  ::FName::ToString(&local_290,&local_170);
  ::FString::PrintfImpl(&local_238,L"MetasoundGenerator::OnGenerateAudio %s");
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_238.Data.ArrayNum != 0) {
    FVar23.Data = local_238.Data.AllocatorInstance.Data;
  }
  if (bVar11) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,(wchar_t *)FVar23.Data);
  }
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  local_288 = (this->AssetPath).AssetName;
  ::FName::ToString(&local_288,&local_160);
  ::FString::PrintfImpl(&local_228,L"MetasoundGenerator::OnGenerateAudio %s");
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_228.Data.ArrayNum != 0) {
    FVar23.Data = local_228.Data.AllocatorInstance.Data;
  }
  bVar34 = -1 < CpuChannel->Enabled;
  if (bVar34) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar23.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundGenerator.cpp"
               ,0x23c);
  }
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  if (__CsvProfilerStat573 == false) {
    FCsvProfilerTrace::OutputInlineStat("OnGenerateAudio",_GCsvCategory_Audio_Metasound.Index);
    __CsvProfilerStat573 = true;
  }
  local_2b4 = _GCsvCategory_Audio_Metasound.Index;
  FCsvProfiler::BeginStat
            ("OnGenerateAudio",_GCsvCategory_Audio_Metasound.Index,"CSV_OnGenerateAudio");
  if (this->bIsFinishTriggered != '\0') {
    this->field_0x250 = this->field_0x250 | 4;
  }
  if (param_2 < 1) {
    local_2d8 = 0;
  }
  else {
    UpdateGraphIfPending(this);
    dVar14 = __real_3ff0000000000000;
    pTVar4 = &this->RenderTimer;
    pFVar20 = pTVar4->Ptr;
    pFVar31 = (FRenderTimer *)0x0;
    if (this->bDoRuntimeRenderTiming == '\0') {
      if (pFVar20 != (FRenderTimer *)0x0) {
        pTVar4->Ptr = (FRenderTimer *)0x0;
        ::operator_delete(pFVar20,0x20);
        this->RenderTime = 0.0;
      }
    }
    else if (pFVar20 == (FRenderTimer *)0x0) {
      pFVar19 = ::operator_new(0x20);
      pFVar20 = pFVar31;
      if (pFVar19 != (FRenderTimer *)0x0) {
        pFVar20 = MetasoundGeneratorPrivate::FRenderTimer::FRenderTimer
                            (pFVar19,&this->OperatorSettings,dVar14);
      }
      if (pTVar4 != (TUniquePtr<Metasound::MetasoundGeneratorPrivate::FRenderTimer,TDefaultDelete<Metasound::MetasoundGeneratorPrivate::FRenderTimer>_>
                     *)&local_178) {
        pFVar19 = pTVar4->Ptr;
        pTVar4->Ptr = pFVar20;
        ::operator_delete(pFVar19,0x20);
        pFVar20 = pFVar31;
      }
      ::operator_delete(pFVar20,0x20);
    }
    uVar33 = 0;
    local_2d8 = param_2;
    if (this->bIsWaitingForFirstGraph == '\0') {
      if (((((this->RootExecuter).ExecuteFunction != (_func___cdecl_void_IOperator_ptr *)0x0) ||
           ((this->RootExecuter).ResetFunction !=
            (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0)) ||
          ((this->RootExecuter).PostExecuteFunction != (_func___cdecl_void_IOperator_ptr *)0x0)) &&
         (0 < this->NumSamplesPerExecute)) {
LAB_14b2b3400:
        aVar6 = ((this->OutputAnalyzerModificationQueue).Tail)->Next;
        if (aVar6 == (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0)
        {
          local_188 = '\0';
        }
        else {
          local_1f8 = *(code **)((longlong)aVar6 + 0x10);
          local_1d0 = *(longlong **)((longlong)aVar6 + 0x38);
          *(undefined8 *)((longlong)aVar6 + 0x38) = 0;
          local_1e8 = *(undefined4 *)((longlong)aVar6 + 0x20);
          uStack_1e4 = *(undefined4 *)((longlong)aVar6 + 0x24);
          uStack_1e0 = *(undefined4 *)((longlong)aVar6 + 0x28);
          uStack_1dc = *(undefined4 *)((longlong)aVar6 + 0x2c);
          local_1d8 = *(undefined8 *)((longlong)aVar6 + 0x30);
          if (local_1f8 != (code *)0x0) {
            *(undefined8 *)((longlong)aVar6 + 0x10) = 0;
          }
          local_1c8 = '\x01';
          if (*(longlong *)((longlong)aVar6 + 0x10) != 0) {
            plVar24 = *(longlong **)((longlong)aVar6 + 0x38);
            if (*(longlong **)((longlong)aVar6 + 0x38) == (longlong *)0x0) {
              plVar24 = (longlong *)((longlong)aVar6 + 0x20);
            }
            (**(code **)(*plVar24 + 0x10))();
          }
          FMemory::Free((this->OutputAnalyzerModificationQueue).Tail);
          (this->OutputAnalyzerModificationQueue).Tail = (FNode *)aVar6;
          local_188 = local_1c8;
          if (local_1c8 == '\0') goto LAB_14b2b3541;
          local_1b8 = local_1f8;
          local_190 = local_1d0;
          local_1d0 = (longlong *)0x0;
          local_1a8 = local_1e8;
          uStack_1a4 = uStack_1e4;
          uStack_1a0 = uStack_1e0;
          uStack_19c = uStack_1dc;
          local_198 = local_1d8;
          if (local_1f8 != (code *)0x0) {
            local_1f8 = (code *)0x0;
          }
        }
        if (local_188 == '\0') goto LAB_14b2b3541;
        UE::Core::Private::Function::CheckCallable(local_1b8);
        pcVar12 = local_1b8;
        plVar24 = (longlong *)&local_1a8;
        if (local_190 != (longlong *)0x0) {
          plVar24 = local_190;
        }
        (**(code **)(*plVar24 + 8))();
        (*pcVar12)();
        if ((local_188 != '\0') && (local_1b8 != (code *)0x0)) {
          plVar24 = (longlong *)&local_1a8;
          if (local_190 != (longlong *)0x0) {
            plVar24 = local_190;
          }
          (**(code **)(*plVar24 + 0x10))();
        }
        goto LAB_14b2b3400;
      }
      this->field_0x250 = this->field_0x250 | 4;
      memset(param_1,0,lVar29 << 2);
    }
    else {
      local_280 = (this->AssetPath).AssetName;
      bVar15 = 0 < GCycleStatsShouldEmitNamedEvents;
      ::FName::ToString(&local_280,&local_150);
      ::FString::PrintfImpl
                (&local_218,L"MetasoundGenerator::OnGenerateAudio::MissedRenderDeadline %s");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_218.Data.ArrayNum != 0) {
        FVar23.Data = local_218.Data.AllocatorInstance.Data;
      }
      if (bVar15) {
        FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,(wchar_t *)FVar23.Data);
      }
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      local_278 = (this->AssetPath).AssetName;
      ::FName::ToString(&local_278,&local_140);
      ::FString::PrintfImpl
                (&local_208,L"MetasoundGenerator::OnGenerateAudio::MissedRenderDeadline %s");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_208.Data.ArrayNum != 0) {
        FVar23.Data = local_208.Data.AllocatorInstance.Data;
      }
      bVar35 = -1 < CpuChannel->Enabled;
      if (bVar35) {
        FCpuProfilerTrace::OutputBeginDynamicEvent
                  ((wchar_t *)FVar23.Data,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundGenerator.cpp"
                   ,0x251);
      }
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (__CsvProfilerStat594 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("WaitingForGraphBuildOnPlaybackCount",_GCsvCategory_Audio_Metasound.Index);
        __CsvProfilerStat594 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("WaitingForGraphBuildOnPlaybackCount",_GCsvCategory_Audio_Metasound.Index,1,
                 Accumulate);
      memset(param_1,0,lVar29 << 2);
      if (bVar35) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar15) {
        FGenericPlatformMisc::EndNamedEvent();
      }
    }
  }
  goto LAB_14b2b3e98;
LAB_14b2b3541:
  local_2d0 = &this->OverflowBuffer;
  uVar18 = (this->OverflowBuffer).ArrayNum;
  local_res18 = param_2;
  if (uVar18 == 0) {
    local_2d8 = 0;
    aVar13 = __real_3f800000;
LAB_14b2b36f0:
    while (this->bIsFinishTriggered == '\0') {
      pFVar7 = (this->GraphRenderCost).Object;
      if (pFVar7 != (FGraphRenderCost *)0x0) {
        FGraphRenderCost::ResetNodeRenderCosts(pFVar7);
      }
      local_2a8 = (this->RenderTimer).Ptr;
      QueryPerformanceCounter(&local_270);
      local_2a0 = local_270;
      FLLMScope::FLLMScope
                (local_2c8,LLMTagDeclaration_Audio_MetaSound_Generator_Execute.UniqueName,false,None
                 ,Default,true);
      local_268 = LLMTagDeclaration_Audio_MetaSound_Generator_Execute.UniqueName;
      FMemScope::FMemScope(&local_2b0,&local_268,true);
      ApplyPendingUpdatesToInputs(this);
      p_Var8 = (this->RootExecuter).ExecuteFunction;
      if (p_Var8 != (_func___cdecl_void_IOperator_ptr *)0x0) {
        (*p_Var8)((this->RootExecuter).Operator.Ptr);
      }
      bVar15 = FTrigger::operator_bool(*(FTrigger **)&(this->OnFinishedTriggerRef).field_0x8);
      if (bVar15) {
        iVar17 = FTrigger::operator[](*(FTrigger **)&(this->OnFinishedTriggerRef).field_0x8,0);
        uVar18 = iVar17 * this->NumChannels;
        if ((int)uVar18 < 0) {
          uVar18 = uVar33;
        }
        this->FinishSample = uVar18;
      }
      pTVar30 = &this->InterleavedAudioBuffer;
      piVar2 = &(this->InterleavedAudioBuffer).ArrayMax;
      piVar1 = &(this->InterleavedAudioBuffer).ArrayNum;
      *piVar1 = 0;
      local_2c0 = pTVar30;
      if ((this->InterleavedAudioBuffer).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,&pTVar30->AllocatorInstance,0,piVar2);
      }
      if (0 < this->NumSamplesPerExecute) {
        UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,this->NumSamplesPerExecute,&pTVar30->AllocatorInstance,piVar1,piVar2);
      }
      MetasoundGeneratorPrivate::LogInvalidAudioSampleValues
                (&this->AssetPath,&this->GraphOutputAudio);
      pTVar30 = local_2c0;
      uVar18 = 0;
      pFVar20 = pFVar31;
      pFVar19 = pFVar31;
      if (0 < this->NumChannels) {
        do {
          uVar32 = (uint)pFVar20;
          uVar22 = uVar33;
          if ((int)uVar32 < (this->GraphOutputAudio).ArrayNum) {
            uVar22 = ~uVar32 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar12 = (code *)swi(3);
            iVar17 = (*pcVar12)();
            return iVar17;
          }
          puVar9 = *(undefined8 **)
                    ((longlong)&pFVar19->CPUCoreUtilization +
                    (longlong)(this->GraphOutputAudio).AllocatorInstance.Data);
          if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar9 + 2) != *(int *)(puVar9 + 1))) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          puVar26 = (undefined4 *)*puVar9;
          pFVar28 = (pTVar30->AllocatorInstance).Data + (longlong)(int)uVar32 * 4;
          pFVar20 = pFVar31;
          if (0 < this->NumFramesPerExecute) {
            do {
              uVar5 = *puVar26;
              puVar26 = puVar26 + 1;
              *(undefined4 *)pFVar28 = uVar5;
              uVar22 = (int)pFVar20 + 1;
              pFVar28 = pFVar28 + (longlong)this->NumChannels * 4;
              pFVar20 = (FRenderTimer *)(ulonglong)uVar22;
            } while ((int)uVar22 < this->NumFramesPerExecute);
          }
          pFVar20 = (FRenderTimer *)(ulonglong)(uVar32 + 1);
          pFVar19 = pFVar19 + 1;
        } while ((int)(uVar32 + 1) < this->NumChannels);
        local_2c0 = &this->InterleavedAudioBuffer;
      }
      _Dst = param_1 + (int)local_2d8;
      uVar22 = (this->InterleavedAudioBuffer).ArrayNum;
      pTVar30 = local_2c0;
      if (uVar22 != 0) {
        bVar25 = this->field_0x250;
        uVar18 = local_res18;
        if ((int)uVar22 < (int)local_res18) {
          uVar18 = uVar22;
        }
        if (this->bIsFinishTriggered == '\0') {
          uVar22 = this->FinishSample;
          if (uVar22 != 0xffffffff) {
            if ((int)uVar18 < (int)uVar22) {
              uVar22 = uVar22 - uVar18;
            }
            else {
              bVar25 = bVar25 | 2;
              this->field_0x250 = bVar25;
            }
          }
          uVar32 = uVar18;
          if ((bVar25 & 2) != 0) {
            uVar32 = uVar22;
            uVar22 = 0xffffffff;
          }
          this->FinishSample = uVar22;
          memcpy(_Dst,(local_2c0->AllocatorInstance).Data,(longlong)(int)uVar32 * 4);
          memset(_Dst + (int)uVar32,0,(longlong)(int)(local_res18 - uVar32) << 2);
          pTVar30 = &this->InterleavedAudioBuffer;
        }
        else {
          memcpy(_Dst,(this->InterleavedAudioBuffer).AllocatorInstance.Data,
                 (ulonglong)local_res18 << 2);
          pTVar30 = &this->InterleavedAudioBuffer;
        }
      }
      local_res18 = local_res18 - uVar18;
      local_2d8 = local_2d8 + uVar18;
      iVar17 = (this->InterleavedAudioBuffer).ArrayNum;
      if ((int)uVar18 < iVar17) {
        iVar17 = iVar17 - uVar18;
        piVar2 = &local_2d0->ArrayMax;
        local_2d0->ArrayNum = 0;
        if (local_2d0->ArrayMax < 0) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,0,&local_2d0->AllocatorInstance,0,piVar2);
        }
        UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,iVar17,&local_2d0->AllocatorInstance,&local_2d0->ArrayNum,piVar2);
        memcpy((local_2d0->AllocatorInstance).Data,
               (pTVar30->AllocatorInstance).Data + (longlong)(int)uVar18 * 4,(longlong)iVar17 << 2);
      }
      pFVar27 = (this->OutputAnalyzers).AllocatorInstance.Data;
      iVar17 = (this->OutputAnalyzers).ArrayNum;
      pFVar28 = pFVar27 + (longlong)iVar17 * 8;
      while( true ) {
        if ((this->OutputAnalyzers).ArrayNum != iVar17) {
          local_2d4[0] = 0;
          `TCheckedPointerIterator<TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_2d4);
        }
        if (pFVar27 == pFVar28) break;
        (**(code **)(**(longlong **)pFVar27 + 0x20))();
        pFVar27 = pFVar27 + 8;
      }
      if ((int)uVar18 < 1) {
        if (2 < (byte)LogMetasoundGenerator._0_1_) {
          FTopLevelAssetPath::ToString(&this->AssetPath,&local_130);
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMetasoundGenerator);
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
        }
        FMemScope::~FMemScope(&local_2b0);
        FLLMScope::~FLLMScope(local_2c8);
        QueryPerformanceCounter(&local_248);
        if (local_2a8 != (FRenderTimer *)0x0) {
          local_2a8->AccumulatedCycles =
               local_2a8->AccumulatedCycles + (local_248.QuadPart - (longlong)local_2a0);
        }
        break;
      }
      FMemScope::~FMemScope(&local_2b0);
      FLLMScope::~FLLMScope(local_2c8);
      QueryPerformanceCounter(&local_260);
      if (local_2a8 != (FRenderTimer *)0x0) {
        local_2a8->AccumulatedCycles =
             local_2a8->AccumulatedCycles + (local_260.QuadPart - (longlong)local_2a0);
      }
      this_01 = (this->GraphAnalyzer).Ptr;
      if (this_01 != (FGraphAnalyzer *)0x0) {
        Frontend::FGraphAnalyzer::Execute(this_01);
      }
      pFVar20 = (this->RenderTimer).Ptr;
      QueryPerformanceCounter(&local_250);
      p_Var8 = (this->RootExecuter).PostExecuteFunction;
      if (p_Var8 != (_func___cdecl_void_IOperator_ptr *)0x0) {
        (*p_Var8)((this->RootExecuter).Operator.Ptr);
      }
      QueryPerformanceCounter(&local_258);
      if (pFVar20 != (FRenderTimer *)0x0) {
        pFVar20->AccumulatedCycles =
             pFVar20->AccumulatedCycles + (local_258.QuadPart - (longlong)local_250);
      }
      pFVar20 = (this->RenderTimer).Ptr;
      if (pFVar20 != (FRenderTimer *)0x0) {
        dVar37 = (double)pFVar20->AccumulatedCycles * FGenericPlatformTime::SecondsPerCycle64;
        if (0.0 < dVar37) {
          dVar37 = dVar37 / pFVar20->SecondsOfAudioProducedPerBlock;
          if (pFVar20->CPUCoreUtilization < 0.0) {
            pFVar20->CPUCoreUtilization = dVar37;
          }
          else {
            pFVar20->CPUCoreUtilization =
                 (dVar14 - pFVar20->SmoothingAlpha) * pFVar20->CPUCoreUtilization +
                 pFVar20->SmoothingAlpha * dVar37;
          }
        }
        pFVar20->AccumulatedCycles = 0;
        this->RenderTime = pFVar20->CPUCoreUtilization;
      }
      pFVar7 = (this->GraphRenderCost).Object;
      if (pFVar7 != (FGraphRenderCost *)0x0) {
        aVar36 = (atomic<float>)FGraphRenderCost::ComputeGraphRenderCost(pFVar7);
        if ((float)aVar36 <= (float)aVar13) {
          aVar36 = aVar13;
        }
        LOCK();
        this->RelativeRenderCost = aVar36;
        UNLOCK();
      }
      if ((int)local_res18 < 1) break;
    }
  }
  else {
    bVar25 = this->field_0x250;
    if ((int)uVar18 < param_2) {
      local_2d8 = uVar18;
    }
    if (this->bIsFinishTriggered == '\0') {
      uVar18 = this->FinishSample;
      if (uVar18 != 0xffffffff) {
        if ((int)local_2d8 < (int)uVar18) {
          uVar18 = uVar18 - local_2d8;
        }
        else {
          bVar25 = bVar25 | 2;
          this->field_0x250 = bVar25;
        }
      }
      uVar22 = local_2d8;
      if ((bVar25 & 2) != 0) {
        uVar22 = uVar18;
        uVar18 = 0xffffffff;
      }
      this->FinishSample = uVar18;
      memcpy(param_1,(local_2d0->AllocatorInstance).Data,(longlong)(int)uVar22 * 4);
      memset(param_1 + (int)uVar22,0,(longlong)(int)(param_2 - uVar22) << 2);
    }
    else {
      memcpy(param_1,(local_2d0->AllocatorInstance).Data,lVar29 << 2);
    }
    pTVar30 = &this->OverflowBuffer;
    local_2d0 = pTVar30;
    if (0 < (int)local_2d8) {
      local_res18 = param_2 - local_2d8;
      uVar18 = uVar33;
      if ((int)local_2d8 <= (this->OverflowBuffer).ArrayNum) {
        uVar18 = ~local_2d8 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar15)) {
        pcVar12 = (code *)swi(3);
        iVar17 = (*pcVar12)();
        return iVar17;
      }
      iVar17 = (this->OverflowBuffer).ArrayNum;
      pFVar28 = (pTVar30->AllocatorInstance).Data;
      uVar18 = iVar17 - local_2d8;
      if ((int)local_2d8 < (int)uVar18) {
        uVar18 = local_2d8;
      }
      if (uVar18 != 0) {
        memmove(pFVar28,pFVar28 + (longlong)(int)(iVar17 - uVar18) * 4,(longlong)(int)uVar18 << 2);
      }
      piVar2 = &(this->OverflowBuffer).ArrayNum;
      *piVar2 = *piVar2 - local_2d8;
    }
    aVar13 = __real_3f800000;
    if (0 < (int)local_res18) goto LAB_14b2b36f0;
  }
  if ((this->VertexInterfaceChangesSinceLastBroadcast).ArrayNum != 0) {
    this_02 = FVertexInterfaceData::FVertexInterfaceData(&local_120,&this->VertexInterfaceData);
    pFVar21 = FVertexInterfaceData::FVertexInterfaceData(&local_d0,this_02);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(Metasound::FVertexInterfaceData),FDefaultTSDelegateUserPolicy>,Metasound::FVertexInterfaceData>
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               &this->OnVertexInterfaceDataUpdated,pFVar21);
    FVertexInterfaceData::~FVertexInterfaceData(this_02);
    this_00 = &this->OnVertexInterfaceDataUpdatedWithChanges;
    if ((this_00 ==
         (TMulticastDelegate<void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
          *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar15)) {
      pcVar12 = (code *)swi(3);
      iVar17 = (*pcVar12)();
      return iVar17;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this_00);
    puVar3 = &(this->OnVertexInterfaceDataUpdatedWithChanges).field_0x3c;
    *(int *)puVar3 = *(int *)puVar3 + 1;
    uVar33 = *(int *)&(this->OnVertexInterfaceDataUpdatedWithChanges).field_0x30 - 1;
    bVar15 = false;
    if ((int)uVar33 < 0) {
      puVar3 = &(this->OnVertexInterfaceDataUpdatedWithChanges).field_0x3c;
      *(int *)puVar3 = *(int *)puVar3 + -1;
    }
    else {
      lVar29 = (longlong)(int)uVar33 << 4;
      do {
        uVar18 = 0;
        if ((int)uVar33 < *(int *)&(this->OnVertexInterfaceDataUpdatedWithChanges).field_0x30) {
          uVar18 = ~uVar33 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar12 = (code *)swi(3);
          iVar17 = (*pcVar12)();
          return iVar17;
        }
        lVar10 = *(longlong *)&(this->OnVertexInterfaceDataUpdatedWithChanges).field_0x28;
        if (((*(int *)(lVar29 + 8 + lVar10) == 0) ||
            (plVar24 = *(longlong **)(lVar29 + lVar10), plVar24 == (longlong *)0x0)) ||
           (cVar16 = (**(code **)(*plVar24 + 0x68))(), cVar16 == '\0')) {
          bVar15 = true;
        }
        lVar29 = lVar29 + -0x10;
        uVar33 = uVar33 - 1;
      } while (-1 < (int)uVar33);
      puVar3 = &(this->OnVertexInterfaceDataUpdatedWithChanges).field_0x3c;
      *(int *)puVar3 = *(int *)puVar3 + -1;
      if (bVar15) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_00,false);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
    piVar2 = &(this->VertexInterfaceChangesSinceLastBroadcast).ArrayMax;
    (this->VertexInterfaceChangesSinceLastBroadcast).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&(this->VertexInterfaceChangesSinceLastBroadcast).AllocatorInstance,0,
                 piVar2);
    }
    LOCK();
    this->bVertexInterfaceHasChanged = (atomic<bool>)0x0;
    UNLOCK();
  }
LAB_14b2b3e98:
  FCsvProfiler::EndStat("OnGenerateAudio",local_2b4);
  if (bVar34) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_240);
  FLLMScope::~FLLMScope(&local_2b8);
  return local_2d8;
}

// QueueParameterPack @ 14b2b4dc0

void __thiscall
Metasound::FMetasoundGenerator::QueueParameterPack
          (FMetasoundGenerator *this,TSharedPtr<FMetasoundParameterPackStorage,1> *param_1)

{
  atomic<TMpscQueue<TSharedPtr<FMetasoundParameterPackStorage,1>,FMemory>::FNode_*> aVar1;
  TReferenceControllerBase<1> *pTVar2;
  atomic<TMpscQueue<TSharedPtr<FMetasoundParameterPackStorage,1>,FMemory>::FNode_*> aVar3;
  
  aVar3 = (atomic<TMpscQueue<TSharedPtr<FMetasoundParameterPackStorage,1>,FMemory>::FNode_*>)
          FMemory::Malloc(0x18,8);
  *(undefined8 *)aVar3 = 0;
  *(FMetasoundParameterPackStorage **)((longlong)aVar3 + 8) = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)aVar3 + 0x10) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  LOCK();
  aVar1 = (this->ParameterPackQueue).Head;
  (this->ParameterPackQueue).Head = aVar3;
  UNLOCK();
  *(atomic<TMpscQueue<TSharedPtr<FMetasoundParameterPackStorage,1>,FMemory>::FNode_*> *)aVar1 =
       aVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ReleaseGraphOperator @ 14b2b62d0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::FMetasoundGenerator::ReleaseGraphOperator(FMetasoundGenerator *this)

{
  IOperator *in_RDX;
  
  *in_RDX = (IOperator)(this->RootExecuter).Operator.Ptr;
  (this->RootExecuter).ExecuteFunction = (_func___cdecl_void_IOperator_ptr *)0x0;
  (this->RootExecuter).PostExecuteFunction = (_func___cdecl_void_IOperator_ptr *)0x0;
  (this->RootExecuter).ResetFunction = (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
  (this->RootExecuter).Operator.Ptr = (IOperator *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)in_RDX;
}

// ReleaseInputVertexData @ 14b2b6310

FInputVertexInterfaceData * __thiscall
Metasound::FMetasoundGenerator::ReleaseInputVertexData
          (FMetasoundGenerator *this,FInputVertexInterfaceData *__return_storage_ptr__)

{
  __return_storage_ptr__->bIsVertexInterfaceFrozen =
       (this->VertexInterfaceData).InputVertexInterfaceData.bIsVertexInterfaceFrozen;
  (__return_storage_ptr__->Bindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Bindings).AllocatorInstance.Data =
       (this->VertexInterfaceData).InputVertexInterfaceData.Bindings.AllocatorInstance.Data;
  (this->VertexInterfaceData).InputVertexInterfaceData.Bindings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Bindings).ArrayNum =
       (this->VertexInterfaceData).InputVertexInterfaceData.Bindings.ArrayNum;
  (__return_storage_ptr__->Bindings).ArrayMax =
       (this->VertexInterfaceData).InputVertexInterfaceData.Bindings.ArrayMax;
  (this->VertexInterfaceData).InputVertexInterfaceData.Bindings.ArrayNum = 0;
  (this->VertexInterfaceData).InputVertexInterfaceData.Bindings.ArrayMax = 0;
  (__return_storage_ptr__->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SubInterfaces).AllocatorInstance.Data =
       (this->VertexInterfaceData).InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data;
  (this->VertexInterfaceData).InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SubInterfaces).ArrayNum =
       (this->VertexInterfaceData).InputVertexInterfaceData.SubInterfaces.ArrayNum;
  (__return_storage_ptr__->SubInterfaces).ArrayMax =
       (this->VertexInterfaceData).InputVertexInterfaceData.SubInterfaces.ArrayMax;
  (this->VertexInterfaceData).InputVertexInterfaceData.SubInterfaces.ArrayNum = 0;
  (this->VertexInterfaceData).InputVertexInterfaceData.SubInterfaces.ArrayMax = 0;
  return __return_storage_ptr__;
}

// RemoveGraphSetCallback @ 14b2b6d80

bool __thiscall
Metasound::FMetasoundGenerator::RemoveGraphSetCallback
          (FMetasoundGenerator *this,FDelegateHandle *param_1)

{
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this_00;
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong64 *puVar6;
  longlong lVar7;
  ForAnyElementType *this_01;
  uint uVar8;
  
  uVar1 = param_1->ID;
  this_00 = &this->OnSetGraph;
  if (uVar1 == 0) {
    return false;
  }
  if ((this_00 == (TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  uVar8 = 0;
  if (0 < *(int *)&(this->OnSetGraph).field_0x30) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < *(int *)&(this->OnSetGraph).field_0x30) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      this_01 = (ForAnyElementType *)(*(longlong *)&(this->OnSetGraph).field_0x28 + lVar7);
      if (((*(int *)&this_01[1].Data != 0) && (this_01->Data != (FScriptContainerElement *)0x0)) &&
         (puVar6 = (ulong64 *)(**(code **)(*(longlong *)this_01->Data + 0x40))(), *puVar6 == uVar1))
      {
        if ((*(int *)&this_01[1].Data != 0) && (this_01->Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)this_01->Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_01,0,0,0x10);
          *(undefined4 *)&this_01[1].Data = 0;
        }
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_00,false);
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
        return true;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar8 < *(int *)&(this->OnSetGraph).field_0x30);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  return false;
}

// RemoveOutputVertexAnalyzer @ 14b2b7270

void __thiscall
Metasound::FMetasoundGenerator::RemoveOutputVertexAnalyzer
          (FMetasoundGenerator *this,FAnalyzerAddress *param_1)

{
  atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar1;
  bool bVar2;
  ulong64 uVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar12;
  undefined8 *puVar13;
  
  uVar8 = *(undefined8 *)&param_1->NodeID;
  uVar9 = *(undefined8 *)&(param_1->NodeID).C;
  uVar3 = param_1->InstanceID;
  FVar4 = param_1->OutputName;
  FVar5 = param_1->DataType;
  FVar6 = param_1->AnalyzerName;
  FVar7 = param_1->AnalyzerMemberName;
  bVar2 = param_1->UseDataTransmissionCenter;
  uVar10 = *(undefined8 *)&param_1->AnalyzerInstanceID;
  uVar11 = *(undefined8 *)&(param_1->AnalyzerInstanceID).C;
  aVar12 = (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)
           FMemory::Malloc(0x40,0x10);
  *(undefined8 *)aVar12 = 0;
  *(undefined8 *)((longlong)aVar12 + 0x10) = 0;
  *(undefined8 *)((longlong)aVar12 + 0x38) = 0;
  puVar13 = FMemory::Malloc(0x68,8);
  *(undefined8 **)((longlong)aVar12 + 0x38) = puVar13;
  puVar13[1] = this;
  *puVar13 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Metasound::FMetasoundGenerator::RemoveOutputVertexAnalyzer'::`2'::<lambda_1>,1,1>
              ::_vftable_;
  puVar13[4] = uVar8;
  puVar13[5] = uVar9;
  puVar13[2] = &___7FAnalyzerAddress_Frontend_Metasound__6B_;
  puVar13[3] = uVar3;
  *(FName *)(puVar13 + 6) = FVar4;
  puVar13[9] = uVar10;
  puVar13[10] = uVar11;
  *(FName *)(puVar13 + 7) = FVar5;
  *(FName *)(puVar13 + 8) = FVar6;
  *(FName *)(puVar13 + 0xb) = FVar7;
  *(bool *)(puVar13 + 0xc) = bVar2;
  if (puVar13 != (undefined8 *)&DAT_fffffffffffffff8) {
    *(code **)((longlong)aVar12 + 0x10) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Metasound::FMetasoundGenerator::RemoveOutputVertexAnalyzer'::__l2::<lambda_1>,void>
         ::Call;
  }
  LOCK();
  aVar1 = (this->OutputAnalyzerModificationQueue).Head;
  (this->OutputAnalyzerModificationQueue).Head = aVar12;
  UNLOCK();
  *(atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> *)aVar1 = aVar12;
  return;
}

// SetGraph @ 14b2b7840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FMetasoundGenerator::SetGraph
          (FMetasoundGenerator *this,
          TUniquePtr<Metasound::MetasoundGeneratorPrivate::FMetasoundGeneratorData,TDefaultDelete<Metasound::MetasoundGeneratorPrivate::FMetasoundGeneratorData>_>
          *param_1,bool param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  int *piVar4;
  int *piVar5;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_> *pTVar6
  ;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> *pTVar7;
  TSortedMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar8;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this_00;
  TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_> *pTVar9;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar10;
  undefined8 uVar11;
  IOperator *pIVar12;
  longlong lVar13;
  longlong *plVar14;
  code *pcVar15;
  int iVar16;
  TReferenceControllerBase<0> *pTVar17;
  TReferenceControllerBase<0> *pTVar18;
  bool bVar19;
  bool bVar20;
  char cVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  FMetasoundGeneratorData *pFVar25;
  TReferenceControllerBase<0> *pTVar26;
  _func___cdecl_void_IOperator_ptr *p_Var27;
  _func___cdecl_void_IOperator_ptr_FResetParams_ptr *p_Var28;
  FInputDataVertex *pFVar29;
  FOutputDataVertex *pFVar30;
  FScriptContainerElement *pFVar31;
  TMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>_>
  *pTVar32;
  uint uVar33;
  IOperator *pIVar34;
  TSortedMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar35;
  FInputBinding *this_01;
  FOutputBinding *this_02;
  ulonglong uVar36;
  longlong lVar37;
  FInputBinding *pFVar38;
  FOutputBinding *pFVar39;
  undefined1 local_res10 [8];
  char local_res18;
  undefined1 local_res20 [8];
  longlong local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  TReferenceControllerBase<0> *pTStack_80;
  undefined **local_78;
  TReferenceControllerBase<0> *local_70;
  TReferenceControllerBase<0> *pTStack_68;
  
  if (param_1->Ptr != (FMetasoundGeneratorData *)0x0) {
    piVar4 = &(this->InterleavedAudioBuffer).ArrayMax;
    piVar5 = &(this->InterleavedAudioBuffer).ArrayNum;
    *piVar5 = 0;
    local_res18 = param_2;
    if (*piVar4 < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&(this->InterleavedAudioBuffer).AllocatorInstance,0,piVar4);
    }
    FVertexInterfaceData::operator=(&this->VertexInterfaceData,&param_1->Ptr->VertexInterfaceData);
    pTVar6 = &this->GraphOutputAudio;
    piVar1 = &(this->GraphOutputAudio).ArrayMax;
    pTVar10 = (TDataReadReference<Metasound::FAudioBuffer> *)(pTVar6->AllocatorInstance).Data;
    piVar2 = &(this->GraphOutputAudio).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>(pTVar10,*piVar2);
      *piVar2 = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&pTVar6->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>(pTVar10,*piVar2);
      *piVar2 = 0;
    }
    pFVar25 = param_1->Ptr;
    iVar23 = (pFVar25->OutputBuffers).ArrayNum;
    if (iVar23 == this->NumChannels) {
      if (0 < iVar23) {
        pTVar10 = (TDataReadReference<Metasound::FAudioBuffer> *)
                  (pFVar25->OutputBuffers).AllocatorInstance.Data;
        if ((pTVar10 == (TDataReadReference<Metasound::FAudioBuffer> *)0x0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Ptr != nullptr || Count == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9c1,L""), bVar19)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iVar22 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x20,8,iVar23,&pTVar6->AllocatorInstance,piVar2,piVar1);
        ConstructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
                  ((pTVar6->AllocatorInstance).Data + (longlong)iVar22 * 0x20,pTVar10,iVar23);
      }
    }
    else {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        pFVar25 = param_1->Ptr;
      }
      iVar22 = this->NumChannels;
      iVar16 = iVar22;
      if (iVar23 < iVar22) {
        iVar16 = iVar23;
      }
      if (0 < iVar16) {
        pTVar10 = (TDataReadReference<Metasound::FAudioBuffer> *)
                  (pFVar25->OutputBuffers).AllocatorInstance.Data;
        if ((pTVar10 == (TDataReadReference<Metasound::FAudioBuffer> *)0x0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Ptr != nullptr || Count == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9c1,L""), bVar19)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iVar23 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x20,8,iVar16,&pTVar6->AllocatorInstance,
                            &(this->GraphOutputAudio).ArrayNum,piVar1);
        ConstructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
                  ((pTVar6->AllocatorInstance).Data + (longlong)iVar23 * 0x20,pTVar10,iVar16);
      }
      pTVar18 = _UNK_150651568;
      pTVar17 = ___xmm_00000000000000000000000000000010;
      if (0 < iVar22 - iVar16) {
        uVar36 = (ulonglong)(uint)(iVar22 - iVar16);
        do {
          pFVar25 = param_1->Ptr;
          local_78 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
          pTVar26 = ::operator_new(0x28);
          if (pTVar26 == (TReferenceControllerBase<0> *)0x0) {
            local_70 = pTVar17;
            pTStack_68 = pTVar18;
          }
          else {
            pTVar26->SharedReferenceCount = 1;
            pTVar26->WeakReferenceCount = 1;
            pTVar26->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_VFAudioBuffer_Metasound___0A__SharedPointerInternals__6B_
            ;
            FAudioBuffer::FAudioBuffer((FAudioBuffer *)(pTVar26 + 1),&pFVar25->OperatorSettings);
            local_70 = pTVar26 + 1;
            pTStack_68 = pTVar26;
            if ((local_70 == (TReferenceControllerBase<0> *)0x0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar19)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
          }
          pFVar31 = (pTVar6->AllocatorInstance).Data;
          local_78 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
          if (((pFVar31 <= (FScriptContainerElement *)&local_78) &&
              ((FScriptContainerElement *)&local_78 < pFVar31 + (longlong)*piVar1 * 0x20)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          iVar23 = (this->GraphOutputAudio).ArrayNum;
          if (iVar23 == *piVar1) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&pTVar6->AllocatorInstance,piVar1);
          }
          (this->GraphOutputAudio).ArrayNum = iVar23 + 1;
          pFVar31 = (pTVar6->AllocatorInstance).Data + (longlong)iVar23 * 0x20;
          *(undefined ***)pFVar31 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
          *(TReferenceControllerBase<0> **)(pFVar31 + 8) = local_70;
          *(TReferenceControllerBase<0> **)(pFVar31 + 0x10) = pTStack_68;
          if (pTStack_68 != (TReferenceControllerBase<0> *)0x0) {
            pTStack_68->SharedReferenceCount = pTStack_68->SharedReferenceCount + 1;
          }
          *(undefined ***)pFVar31 =
               &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
          SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                    (pTStack_68);
          uVar36 = uVar36 - 1;
        } while (uVar36 != 0);
      }
    }
    lVar37 = *(longlong *)&(param_1->Ptr->TriggerOnFinishRef).field_0x10;
    uVar11 = *(undefined8 *)&(param_1->Ptr->TriggerOnFinishRef).field_0x8;
    if (lVar37 != 0) {
      *(int *)(lVar37 + 8) = *(int *)(lVar37 + 8) + 1;
    }
    local_88 = *(undefined8 *)&(this->OnFinishedTriggerRef).field_0x8;
    pTStack_80 = *(TReferenceControllerBase<0> **)&(this->OnFinishedTriggerRef).field_0x10;
    *(undefined8 *)&(this->OnFinishedTriggerRef).field_0x8 = uVar11;
    *(longlong *)&(this->OnFinishedTriggerRef).field_0x10 = lVar37;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_80);
    pIVar34 = (param_1->Ptr->GraphOperator).Ptr;
    (param_1->Ptr->GraphOperator).Ptr = (IOperator *)0x0;
    pTVar7 = &(this->RootExecuter).Operator;
    if (pTVar7 != (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> *)
                  &local_a8) {
      pIVar12 = pTVar7->Ptr;
      pTVar7->Ptr = pIVar34;
      pIVar34 = (IOperator *)0x0;
      if (pIVar12 != (IOperator *)0x0) {
        (**(code **)*pIVar12)(pIVar12,1);
        pIVar34 = (IOperator *)0x0;
      }
    }
    pIVar12 = pTVar7->Ptr;
    (this->RootExecuter).ExecuteFunction = (_func___cdecl_void_IOperator_ptr *)0x0;
    (this->RootExecuter).PostExecuteFunction = (_func___cdecl_void_IOperator_ptr *)0x0;
    (this->RootExecuter).ResetFunction = (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
    if (pIVar12 != (IOperator *)0x0) {
      p_Var27 = (_func___cdecl_void_IOperator_ptr *)(**(code **)((longlong)*pIVar12 + 0x38))();
      pIVar12 = pTVar7->Ptr;
      (this->RootExecuter).ExecuteFunction = p_Var27;
      p_Var27 = (_func___cdecl_void_IOperator_ptr *)(**(code **)((longlong)*pIVar12 + 0x40))();
      pIVar12 = pTVar7->Ptr;
      (this->RootExecuter).PostExecuteFunction = p_Var27;
      p_Var28 = (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)
                (**(code **)((longlong)*pIVar12 + 0x30))();
      (this->RootExecuter).ResetFunction = p_Var28;
    }
    if (pIVar34 != (IOperator *)0x0) {
      (**(code **)*pIVar34)(pIVar34,1);
    }
    if ((this->NumChannels != (this->GraphOutputAudio).ArrayNum) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumChannels == GraphOutputAudio.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundGenerator.cpp"
                            ,0x19a,L""), bVar19)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    if (0 < this->NumSamplesPerExecute) {
      UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,this->NumSamplesPerExecute,&(this->InterleavedAudioBuffer).AllocatorInstance,
                 piVar5,piVar4);
    }
    TUniquePtr<Metasound::Frontend::FGraphAnalyzer,TDefaultDelete<Metasound::Frontend::FGraphAnalyzer>_>
    ::operator=(&this->GraphAnalyzer,&param_1->Ptr->GraphAnalyzer);
    pFVar25 = param_1->Ptr;
    pTVar8 = &this->ParameterSetters;
    pTVar35 = &pFVar25->ParameterSetters;
    if (pTVar8 != pTVar35) {
      DestructItems<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter>,int>
                ((TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter> *)
                 (pTVar8->Pairs).AllocatorInstance.Data,(this->ParameterSetters).Pairs.ArrayNum);
      pFVar31 = (pTVar8->Pairs).AllocatorInstance.Data;
      if (pFVar31 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar31);
      }
      (pTVar8->Pairs).AllocatorInstance.Data = (pTVar35->Pairs).AllocatorInstance.Data;
      (pTVar35->Pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->ParameterSetters).Pairs.ArrayNum = (pFVar25->ParameterSetters).Pairs.ArrayNum;
      (this->ParameterSetters).Pairs.ArrayMax = (pFVar25->ParameterSetters).Pairs.ArrayMax;
      (pFVar25->ParameterSetters).Pairs.ArrayNum = 0;
      (pFVar25->ParameterSetters).Pairs.ArrayMax = 0;
    }
    pTVar32 = &param_1->Ptr->ParameterPackSetters;
    if (&this->ParameterPackSetters != pTVar32) {
      TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
                  *)&this->ParameterPackSetters,
                 (TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
                  *)pTVar32);
    }
    if (local_res18 != '\0') {
      FTrigger::TriggerFrame(*(FTrigger **)&(param_1->Ptr->TriggerOnPlayRef).field_0x8,0);
    }
    this->bIsWaitingForFirstGraph = '\0';
    this_00 = &this->OnSetGraph;
    if ((this_00 == (TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar19)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this_00);
    puVar3 = &(this->OnSetGraph).field_0x3c;
    *(int *)puVar3 = *(int *)puVar3 + 1;
    bVar19 = false;
    uVar33 = *(int *)&(this->OnSetGraph).field_0x30 - 1;
    if (-1 < (int)uVar33) {
      lVar37 = (longlong)(int)uVar33 << 4;
      bVar19 = false;
      do {
        uVar24 = 0;
        if ((int)uVar33 < *(int *)&(this->OnSetGraph).field_0x30) {
          uVar24 = ~uVar33 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        lVar13 = *(longlong *)&(this->OnSetGraph).field_0x28;
        if (((*(int *)(lVar37 + 8 + lVar13) == 0) ||
            (plVar14 = *(longlong **)(lVar37 + lVar13), plVar14 == (longlong *)0x0)) ||
           (cVar21 = (**(code **)(*plVar14 + 0x68))(), cVar21 == '\0')) {
          bVar19 = true;
        }
        lVar37 = lVar37 + -0x10;
        uVar33 = uVar33 - 1;
      } while (-1 < (int)uVar33);
    }
    puVar3 = &(this->OnSetGraph).field_0x3c;
    *(int *)puVar3 = *(int *)puVar3 + -1;
    if (bVar19) {
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_00,false);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
    iVar23 = (this->VertexInterfaceData).InputVertexInterfaceData.Bindings.ArrayNum;
    this_01 = (FInputBinding *)
              (this->VertexInterfaceData).InputVertexInterfaceData.Bindings.AllocatorInstance.Data;
    pFVar38 = this_01 + iVar23;
    while( true ) {
      if ((this->VertexInterfaceData).InputVertexInterfaceData.Bindings.ArrayNum != iVar23) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<Metasound::VertexDataPrivate::FInputBinding,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      if (this_01 == pFVar38) break;
      pTVar9 = &this->VertexInterfaceChangesSinceLastBroadcast;
      pFVar29 = VertexDataPrivate::FInputBinding::GetVertex(this_01);
      pFVar31 = (pTVar9->AllocatorInstance).Data;
      local_a0 = pFVar29->_padding_;
      local_98 = CONCAT22(local_98._2_2_,2);
      if (((pFVar31 <= (FScriptContainerElement *)&local_a0) &&
          ((FScriptContainerElement *)&local_a0 <
           pFVar31 + (longlong)(this->VertexInterfaceChangesSinceLastBroadcast).ArrayMax * 0xc)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      iVar22 = (this->VertexInterfaceChangesSinceLastBroadcast).ArrayNum;
      piVar4 = &(this->VertexInterfaceChangesSinceLastBroadcast).ArrayMax;
      if (iVar22 == *piVar4) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&pTVar9->AllocatorInstance,piVar4);
      }
      this_01 = this_01 + 1;
      (this->VertexInterfaceChangesSinceLastBroadcast).ArrayNum = iVar22 + 1;
      pFVar31 = (pTVar9->AllocatorInstance).Data;
      *(longlong *)(pFVar31 + (longlong)iVar22 * 0xc) = local_a0;
      *(undefined4 *)(pFVar31 + (longlong)iVar22 * 0xc + 8) = local_98;
    }
    iVar23 = (this->VertexInterfaceData).OutputVertexInterfaceData.Bindings.ArrayNum;
    this_02 = (FOutputBinding *)
              (this->VertexInterfaceData).OutputVertexInterfaceData.Bindings.AllocatorInstance.Data;
    pFVar39 = this_02 + iVar23;
    while( true ) {
      if ((this->VertexInterfaceData).OutputVertexInterfaceData.Bindings.ArrayNum != iVar23) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<Metasound::VertexDataPrivate::FOutputBinding,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res20);
      }
      if (this_02 == pFVar39) break;
      pTVar9 = &this->VertexInterfaceChangesSinceLastBroadcast;
      pFVar30 = VertexDataPrivate::FOutputBinding::GetVertex(this_02);
      pFVar31 = (pTVar9->AllocatorInstance).Data;
      local_94 = *(undefined8 *)&pFVar30->field_0x8;
      local_8c = CONCAT22(local_8c._2_2_,3);
      if (((pFVar31 <= (FScriptContainerElement *)&local_94) &&
          ((FScriptContainerElement *)&local_94 <
           pFVar31 + (longlong)(this->VertexInterfaceChangesSinceLastBroadcast).ArrayMax * 0xc)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      iVar22 = (this->VertexInterfaceChangesSinceLastBroadcast).ArrayNum;
      piVar4 = &(this->VertexInterfaceChangesSinceLastBroadcast).ArrayMax;
      if (iVar22 == *piVar4) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&pTVar9->AllocatorInstance,piVar4);
      }
      this_02 = this_02 + 1;
      (this->VertexInterfaceChangesSinceLastBroadcast).ArrayNum = iVar22 + 1;
      pFVar31 = (pTVar9->AllocatorInstance).Data;
      *(undefined8 *)(pFVar31 + (longlong)iVar22 * 0xc) = local_94;
      *(undefined4 *)(pFVar31 + (longlong)iVar22 * 0xc + 8) = local_8c;
    }
    LOCK();
    this->bVertexInterfaceHasChanged = (atomic<bool>)0x1;
    UNLOCK();
  }
  return;
}

// SetPendingGraph @ 14b2b83e0

void __thiscall
Metasound::FMetasoundGenerator::SetPendingGraph
          (FMetasoundGenerator *this,FMetasoundGeneratorData *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TUniquePtr<Metasound::MetasoundGeneratorPrivate::FMetasoundGeneratorData,TDefaultDelete<Metasound::MetasoundGeneratorPrivate::FMetasoundGeneratorData>_>
  *pTVar1;
  FMetasoundGeneratorData *this_00;
  FMetasoundGeneratorData *pFVar2;
  undefined8 local_18 [2];
  
  lpCriticalSection = &this->PendingGraphMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = ::operator_new(0x120);
  if (pFVar2 == (FMetasoundGeneratorData *)0x0) {
    pFVar2 = (FMetasoundGeneratorData *)0x0;
  }
  else {
    pFVar2 = MetasoundGeneratorPrivate::FMetasoundGeneratorData::FMetasoundGeneratorData
                       (pFVar2,param_1);
  }
  pTVar1 = &this->PendingGraphData;
  if (pTVar1 == (TUniquePtr<Metasound::MetasoundGeneratorPrivate::FMetasoundGeneratorData,TDefaultDelete<Metasound::MetasoundGeneratorPrivate::FMetasoundGeneratorData>_>
                 *)local_18) {
    if (pFVar2 == (FMetasoundGeneratorData *)0x0) goto LAB_14b2b8481;
    MetasoundGeneratorPrivate::FMetasoundGeneratorData::~FMetasoundGeneratorData(pFVar2);
  }
  else {
    this_00 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar2;
    if (this_00 == (FMetasoundGeneratorData *)0x0) goto LAB_14b2b8481;
    MetasoundGeneratorPrivate::FMetasoundGeneratorData::~FMetasoundGeneratorData(this_00);
    pFVar2 = this_00;
  }
  ::operator_delete(pFVar2,0x120);
LAB_14b2b8481:
  this->bPendingGraphTrigger = '\0';
  this->field_0x250 = this->field_0x250 | (param_2 | 2U) << 3;
                    /* WARNING: Could not recover jumptable at 0x00014b2b84b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SetPendingGraphBuildFailed @ 14b2b84d0

void __thiscall
Metasound::FMetasoundGenerator::SetPendingGraphBuildFailed(FMetasoundGenerator *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FMetasoundGeneratorData *this_00;
  
  lpCriticalSection = &this->PendingGraphMutex;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = (this->PendingGraphData).Ptr;
    if (this_00 != (FMetasoundGeneratorData *)0x0) {
      (this->PendingGraphData).Ptr = (FMetasoundGeneratorData *)0x0;
      MetasoundGeneratorPrivate::FMetasoundGeneratorData::~FMetasoundGeneratorData(this_00);
      ::operator_delete(this_00,0x120);
    }
    this->bPendingGraphTrigger = '\0';
    this->bIsNewGraphPending = '\x01';
                    /* WARNING: Could not recover jumptable at 0x00014b2b8543. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateGraphIfPending @ 14b2ba630

bool __thiscall Metasound::FMetasoundGenerator::UpdateGraphIfPending(FMetasoundGenerator *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  lpCriticalSection = &this->PendingGraphMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  bVar1 = this->bIsNewGraphPending != '\0';
  if (bVar1) {
    SetGraph(this,&this->PendingGraphData,this->bPendingGraphTrigger);
    this->bIsNewGraphPending = '\0';
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar1;
}

