// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FRelevantCachedPrimitive @ 1452febb0

FRelevantCachedPrimitive * __thiscall
RayTracing::FRelevantCachedPrimitive::FRelevantCachedPrimitive(FRelevantCachedPrimitive *this)

{
  this->SBTAllocationUniqueId = -1;
  this->MainRayTracingInstanceIndex = 0xffffffff;
  (this->CachedShaderBindingDataBase).DataPtr = (FRayTracingShaderBindingData *)0x0;
  (this->CachedShaderBindingDataBase).ArrayNum = 0;
  (this->CachedShaderBindingDataDecal).DataPtr = (FRayTracingShaderBindingData *)0x0;
  (this->CachedShaderBindingDataDecal).ArrayNum = 0;
  this->DecalRayTracingInstanceIndex = 0xffffffff;
  return this;
}

