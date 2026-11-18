// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsSolver
// Functions: 1

// operator<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData>_TTuple<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData> @ 14e24ee20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TTuple<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData> * __thiscall
TKeyInitializer<UPrimitiveComponent_*_const_&>::
operator<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData>_TTuple<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData>
          (TKeyInitializer<UPrimitiveComponent_*_const_&> *this,
          TTuple<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData>
          *__return_storage_ptr__)

{
  FGroomCacheData local_78;
  
  FGroomCacheProcessor::FGroomCacheProcessor(&local_78.CacheProcessor,Guides,Position);
  local_78.CacheName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.CacheName.Data.ArrayNum = 0;
  local_78.CacheName.Data.ArrayMax = 0;
  FGroomAnimationInfo::FGroomAnimationInfo(&local_78.AnimInfo);
  local_78.PositionsBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.PositionsBuffer.ArrayNum = 0;
  local_78.PositionsBuffer.ArrayMax = 0;
  local_78.CacheAsset = (UGroomCache *)0x0;
  local_78.CacheTimes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.CacheTimes.ArrayNum = 0;
  local_78.CacheTimes.ArrayMax = 0;
  *(UPrimitiveComponent **)__return_storage_ptr__ = *this->Key;
  UE::Groom::FGroomCacheAdapter::FGroomCacheData::FGroomCacheData
            ((FGroomCacheData *)&__return_storage_ptr__->field_0x8,&local_78);
  if (local_78.CacheTimes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.CacheTimes.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<FStrandsPositionOutput,1>,int>
            ((TSharedPtr<FStrandsPositionOutput,1> *)local_78.PositionsBuffer.AllocatorInstance.Data
             ,local_78.PositionsBuffer.ArrayNum);
  if ((TSharedPtr<FStrandsPositionOutput,1> *)local_78.PositionsBuffer.AllocatorInstance.Data !=
      (TSharedPtr<FStrandsPositionOutput,1> *)0x0) {
    FMemory::Free(local_78.PositionsBuffer.AllocatorInstance.Data);
  }
  if (local_78.CacheName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.CacheName.Data.AllocatorInstance.Data);
  }
  DestructItems<FGroomCacheChunk,int>
            ((FGroomCacheChunk *)local_78.CacheProcessor.Chunks.AllocatorInstance.Data,
             local_78.CacheProcessor.Chunks.ArrayNum);
  if ((FGroomCacheChunk *)local_78.CacheProcessor.Chunks.AllocatorInstance.Data !=
      (FGroomCacheChunk *)0x0) {
    FMemory::Free(local_78.CacheProcessor.Chunks.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

