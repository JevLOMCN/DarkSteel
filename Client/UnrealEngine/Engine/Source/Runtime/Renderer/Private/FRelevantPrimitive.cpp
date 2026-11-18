// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FRelevantPrimitive @ 1452febe0

FRelevantPrimitive * __thiscall
RayTracing::FRelevantPrimitive::FRelevantPrimitive(FRelevantPrimitive *this)

{
  byte *pbVar1;
  
  this->bUsesLightingChannels = false;
  (this->CachedMeshCommandFlags).field1_0x8.Data = 0;
  pbVar1 = (byte *)((longlong)&(this->CachedMeshCommandFlags).field1_0x8 + 2);
  *pbVar1 = *pbVar1 | 1;
  this->RayTracingGeometry = (FRayTracingGeometry *)0x0;
  (this->CachedShaderBindingDataBase).DataPtr = (FRayTracingShaderBindingData *)0x0;
  (this->CachedShaderBindingDataBase).ArrayNum = 0;
  (this->CachedShaderBindingDataDecal).DataPtr = (FRayTracingShaderBindingData *)0x0;
  (this->CachedShaderBindingDataDecal).ArrayNum = 0;
  (this->CachedMeshCommandFlags).CachedMeshCommandHash = 0;
  *(undefined1 *)((longlong)&(this->CachedMeshCommandFlags).field1_0x8 + 1) = 0x93;
  this->PrimitiveIndex = -1;
  this->SBTAllocationUniqueId = -1;
  this->InstanceContributionToHitGroupIndexBase = -1;
  this->InstanceContributionToHitGroupIndexDecal = -1;
  return this;
}

