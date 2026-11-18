// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// Reset @ 1475f6820

void __thiscall
TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_>::Reset
          (TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_> *this,
          FRHIGPUBufferReadback *param_1)

{
  FRHIGPUBufferReadback *pFVar1;
  FRHIStagingBuffer *this_00;
  longlong lVar2;
  FRHIGPUBufferReadback *pFVar3;
  
  pFVar1 = this->Ptr;
  if ((pFVar1 != param_1) && (this->Ptr = param_1, pFVar1 != (FRHIGPUBufferReadback *)0x0)) {
    lVar2 = 8;
    pFVar3 = pFVar1 + 1;
    do {
      this_00 = pFVar3[-1].DestinationStagingBuffers[7].Reference;
      pFVar3 = (FRHIGPUBufferReadback *)(pFVar3[-1].DestinationStagingBuffers + 7);
      lVar2 = lVar2 + -1;
      if (this_00 != (FRHIStagingBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    } while (lVar2 != 0);
    pFVar1->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
    if ((FRHIResource *)pFVar1->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1->_padding_);
    }
    ::operator_delete(pFVar1,0x58);
    return;
  }
  return;
}

// TUniquePtr<FTypedElementCommonActionsCustomization,TDefaultDelete<FTypedElementCommonActionsCustomization>_> @ 147b38710

TUniquePtr<FTypedElementCommonActionsCustomization,TDefaultDelete<FTypedElementCommonActionsCustomization>_>
* __thiscall
TUniquePtr<FTypedElementCommonActionsCustomization,TDefaultDelete<FTypedElementCommonActionsCustomization>_>
::
TUniquePtr<FTypedElementCommonActionsCustomization,TDefaultDelete<FTypedElementCommonActionsCustomization>_>
          (TUniquePtr<FTypedElementCommonActionsCustomization,TDefaultDelete<FTypedElementCommonActionsCustomization>_>
           *this)

{
  this->Ptr = (FTypedElementCommonActionsCustomization *)0x0;
  return this;
}

// ~TUniquePtr<FTypedElementCommonActionsCustomization,TDefaultDelete<FTypedElementCommonActionsCustomization>_> @ 147b3c990

void __thiscall
TUniquePtr<FTypedElementCommonActionsCustomization,TDefaultDelete<FTypedElementCommonActionsCustomization>_>
::
~TUniquePtr<FTypedElementCommonActionsCustomization,TDefaultDelete<FTypedElementCommonActionsCustomization>_>
          (TUniquePtr<FTypedElementCommonActionsCustomization,TDefaultDelete<FTypedElementCommonActionsCustomization>_>
           *this)

{
  FTypedElementCommonActionsCustomization *pFVar1;
  
  pFVar1 = this->Ptr;
  if (pFVar1 != (FTypedElementCommonActionsCustomization *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b3c9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// operator= @ 147faa0e0

TUniquePtr<FBitReader,TDefaultDelete<FBitReader>_> * __thiscall
TUniquePtr<FBitReader,TDefaultDelete<FBitReader>_>::operator=
          (TUniquePtr<FBitReader,TDefaultDelete<FBitReader>_> *this,
          TUniquePtr<FBitReader,TDefaultDelete<FBitReader>_> *param_1)

{
  FBitReader *pFVar1;
  
  if (this != param_1) {
    pFVar1 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (FBitReader *)0x0;
    if (pFVar1 != (FBitReader *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
  }
  return this;
}

// Reset @ 1480cbf90

void __thiscall
TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack>_>
::Reset(TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack>_>
        *this,FNetworkMemoryTrackingScopeStack *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FNetworkMemoryTrackingScopeStack *pFVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  pFVar3 = this->Ptr;
  if ((pFVar3 != param_1) &&
     (this->Ptr = param_1, pFVar3 != (FNetworkMemoryTrackingScopeStack *)0x0)) {
    pFVar4 = (pFVar3->ScopeStack).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    *(undefined4 *)&(pFVar3->TopLevelScopes).field_0x48 = 0;
    pvVar5 = *(void **)&(pFVar3->TopLevelScopes).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar3->TopLevelScopes);
    pTVar6 = (pFVar3->TickHandle).WeakReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar6->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
    ::operator_delete(pFVar3,0x78);
    return;
  }
  return;
}

// operator= @ 148160bd0

TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_> *
__thiscall
TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>::operator=
          (TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>
           *this,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>
                 *param_1)

{
  FAccumulatedParticlePerfStats *pFVar1;
  ForElementType<unsigned___int64> FVar2;
  
  if (this != param_1) {
    pFVar1 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (FAccumulatedParticlePerfStats *)0x0;
    if (pFVar1 != (FAccumulatedParticlePerfStats *)0x0) {
      FVar2 = (pFVar1->GPUStats).MaxPerInstanceMicroseconds.AllocatorInstance.SecondaryData;
      if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar2);
      }
      FVar2 = (pFVar1->GPUStats).MaxPerFrameTotalMicroseconds.AllocatorInstance.SecondaryData;
      if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar2);
      }
      FVar2 = (pFVar1->RenderThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData;
      if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar2);
      }
      FVar2 = (pFVar1->RenderThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData;
      if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar2);
      }
      FVar2 = (pFVar1->GameThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData;
      if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar2);
      }
      FVar2 = (pFVar1->GameThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData;
      if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar2);
      }
      ::operator_delete(pFVar1,0x2b8);
    }
    return this;
  }
  return this;
}

// operator= @ 1482de480

TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> * __thiscall
TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>::operator=
          (TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *this,
          TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *param_1)

{
  FBaseRewindHistory *pFVar1;
  
  if (this != param_1) {
    pFVar1 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (FBaseRewindHistory *)0x0;
    if (pFVar1 != (FBaseRewindHistory *)0x0) {
      (**(code **)*pFVar1)(pFVar1,1);
    }
  }
  return this;
}

// Reset @ 1484f1890

void __thiscall
TUniquePtr<FReceivingRepState,TDefaultDelete<FReceivingRepState>_>::Reset
          (TUniquePtr<FReceivingRepState,TDefaultDelete<FReceivingRepState>_> *this,
          FReceivingRepState *param_1)

{
  FReceivingRepState *this_00;
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this_00 = this->Ptr;
  if ((this_00 != param_1) && (this->Ptr = param_1, this_00 != (FReceivingRepState *)0x0)) {
    *(undefined4 *)&(this_00->RepNotifyMetaData).field_0x48 = 0;
    pvVar1 = *(void **)&(this_00->RepNotifyMetaData).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this_00->RepNotifyMetaData);
    pFVar2 = (this_00->RepNotifies).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    *(undefined4 *)&(this_00->GuidReferencesMap).field_0x48 = 0;
    pvVar1 = *(void **)&(this_00->GuidReferencesMap).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this_00->GuidReferencesMap);
    FRepStateStaticBuffer::~FRepStateStaticBuffer(&this_00->StaticBuffer);
    ::operator_delete(this_00,0xd0);
  }
  return;
}

// Reset @ 1488daa90

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
TUniquePtr<FTimerSourceList,TDefaultDelete<FTimerSourceList>_>::Reset
          (TUniquePtr<FTimerSourceList,TDefaultDelete<FTimerSourceList>_> *this,
          FTimerSourceList *param_1)

{
  FTimerSourceList *this_00;
  void *pvVar1;
  
  this_00 = this->Ptr;
  if ((this_00 != param_1) && (this->Ptr = param_1, this_00 != (FTimerSourceList *)0x0)) {
    FTimerSourceList::DumpEntries(this_00);
    *(undefined4 *)&(this_00->Entries).field_0x48 = 0;
    pvVar1 = *(void **)&(this_00->Entries).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FTimerSourceEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FTimerSourceEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FTimerSourceEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    ::operator_delete(this_00,0x58);
    return;
  }
  return;
}

// operator= @ 148a44c00

TUniquePtr<FWorldTileInfo,TDefaultDelete<FWorldTileInfo>_> * __thiscall
TUniquePtr<FWorldTileInfo,TDefaultDelete<FWorldTileInfo>_>::operator=
          (TUniquePtr<FWorldTileInfo,TDefaultDelete<FWorldTileInfo>_> *this,
          TUniquePtr<FWorldTileInfo,TDefaultDelete<FWorldTileInfo>_> *param_1)

{
  FWorldTileInfo *pFVar1;
  FScriptContainerElement *pFVar2;
  
  if (this != param_1) {
    pFVar1 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (FWorldTileInfo *)0x0;
    if (pFVar1 != (FWorldTileInfo *)0x0) {
      pFVar2 = (pFVar1->LODList).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (pFVar1->ParentTilePackageName).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (pFVar1->Layer).Name.Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pFVar1,0xa8);
    }
    return this;
  }
  return this;
}

