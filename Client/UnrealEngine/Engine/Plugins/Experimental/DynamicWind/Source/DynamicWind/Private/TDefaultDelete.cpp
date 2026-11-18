// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicWind
// Functions: 1

// operator() @ 14da4e270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TDefaultDelete<FDynamicWindTransformProvider>::operator()
          (TDefaultDelete<FDynamicWindTransformProvider> *this,
          FDynamicWindTransformProvider *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
  *pTVar4;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar5;
  void *pvVar6;
  
  if (param_1 != (FDynamicWindTransformProvider *)0x0) {
    puVar3 = *(undefined8 **)&(param_1->BoneDataBuffer).field_0x18;
    if (puVar3 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar3 + 1);
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    pTVar4 = (param_1->BoneDataUploader).Ptr;
    if (pTVar4 != (TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                   *)0x0) {
      (**(code **)pTVar4->_padding_)(pTVar4,1);
    }
    FVar5 = (param_1->BoneDataAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
    if (FVar5 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    FVar5 = (param_1->BoneDataAllocator).FreeSpans.AllocatorInstance.SecondaryData;
    if (FVar5 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    *(undefined4 *)&(param_1->SkeletonLookup).field_0x48 = 0;
    pvVar6 = *(void **)&(param_1->SkeletonLookup).field_0x40;
    if (pvVar6 != (void *)0x0) {
      FMemory::Free(pvVar6);
    }
    TSparseArray<TSparseSetElement<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->SkeletonLookup);
    ::operator_delete(param_1,0x1d0);
  }
  return;
}

