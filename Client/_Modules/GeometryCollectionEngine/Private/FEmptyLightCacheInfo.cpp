// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 1

// GetInteraction @ 146399bc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLightInteraction __thiscall
FNaniteGeometryCollectionSceneProxy::FEmptyLightCacheInfo::GetInteraction
          (FEmptyLightCacheInfo *this,FLightSceneProxy *param_1)

{
  ELightInteractionType EVar1;
  FLightSceneProxy *in_R8;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  EVar1 = FLightCacheInterface::GetStaticInteraction((FLightCacheInterface *)this,in_R8,&local_18);
  if (EVar1 == LIT_MAX) {
    *(undefined4 *)&param_1->_padding_ = 2;
  }
  else {
    *(ELightInteractionType *)&param_1->_padding_ = EVar1;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return (FLightInteraction)(ELightInteractionType)param_1;
}

