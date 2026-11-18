// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 1

// FRayTracingGeometry @ 1463a3c60

FRayTracingGeometry * __thiscall FRayTracingGeometry::FRayTracingGeometry(FRayTracingGeometry *this)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->DynamicGeometrySharedBufferGenerationID = -1;
  this->LastUpdatedFrame = 0;
  this->_padding_ = (longlong)&___7FRayTracingGeometry__6B_;
  (this->RawDataHeader).Reserved[0] = 0xffffffff;
  (this->RawDataHeader).Reserved[1] = 0xffffffff;
  (this->RawData)._padding_ = (longlong)&___7__TResourceArray_E_0A___6B_;
  (this->RawDataHeader).Reserved[2] = 0xffffffff;
  (this->RawDataHeader).Reserved[3] = 0xffffffff;
  (this->RawDataHeader).Reserved[4] = 0xffffffff;
  (this->RawDataHeader).Reserved[5] = 0xffffffff;
  (this->RawData)._padding_ = 0;
  (this->RawData)._padding_ = 0;
  (this->RawData).bNeedsCPUAccess = false;
  this->NumUpdatesSinceLastBuild = 0;
  FRayTracingGeometryInitializer::FRayTracingGeometryInitializer(&this->Initializer);
  this->GroupHandle = -1;
  this->LODIndex = -1;
  (this->RayTracingGeometryRHI).Reference = (FRHIRayTracingGeometry *)0x0;
  this->GeometryState = Invalid;
  this->RayTracingBuildRequestIndex = -1;
  this->RayTracingGeometryHandle = -1;
  return this;
}

