// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// FPackedInstanceListData @ 149be6590

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPackedInstanceListData * __thiscall
FPCGSkinnedMeshSpawnerContext::FPackedInstanceListData::FPackedInstanceListData
          (FPackedInstanceListData *this)

{
  this->TargetActor = (AActor *)0x0;
  this->SpatialData = (UPCGSpatialData *)0x0;
  (this->MeshInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshInstances).ArrayNum = 0;
  (this->MeshInstances).ArrayMax = 0;
  (this->PackedCustomData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackedCustomData).ArrayNum = 0;
  (this->PackedCustomData).ArrayMax = 0;
  return this;
}

// ~FPackedInstanceListData @ 149be9720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FPCGSkinnedMeshSpawnerContext::FPackedInstanceListData::~FPackedInstanceListData
          (FPackedInstanceListData *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FPCGSkinnedMeshPackedCustomData,int>
            ((FPCGSkinnedMeshPackedCustomData *)(this->PackedCustomData).AllocatorInstance.Data,
             (this->PackedCustomData).ArrayNum);
  pFVar1 = (this->PackedCustomData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGSkinnedMeshInstanceList,int>
            ((FPCGSkinnedMeshInstanceList *)(this->MeshInstances).AllocatorInstance.Data,
             (this->MeshInstances).ArrayNum);
  pFVar1 = (this->MeshInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// FPackedInstanceListData @ 149c4aa30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPackedInstanceListData * __thiscall
FPCGStaticMeshSpawnerContext::FPackedInstanceListData::FPackedInstanceListData
          (FPackedInstanceListData *this)

{
  this->TargetActor = (AActor *)0x0;
  this->SpatialData = (UPCGSpatialData *)0x0;
  (this->MeshInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshInstances).ArrayNum = 0;
  (this->MeshInstances).ArrayMax = 0;
  (this->PackedCustomData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackedCustomData).ArrayNum = 0;
  (this->PackedCustomData).ArrayMax = 0;
  (this->DataCrc).Value = 0;
  (this->DataCrc).bValid = false;
  this->bSkippedDueToReuse = false;
  return this;
}

// ~FPackedInstanceListData @ 149c4d790

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FPCGStaticMeshSpawnerContext::FPackedInstanceListData::~FPackedInstanceListData
          (FPackedInstanceListData *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FPCGPackedCustomData,int>
            ((FPCGPackedCustomData *)(this->PackedCustomData).AllocatorInstance.Data,
             (this->PackedCustomData).ArrayNum);
  pFVar1 = (this->PackedCustomData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGMeshInstanceList,int>
            ((FPCGMeshInstanceList *)(this->MeshInstances).AllocatorInstance.Data,
             (this->MeshInstances).ArrayNum);
  pFVar1 = (this->MeshInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

