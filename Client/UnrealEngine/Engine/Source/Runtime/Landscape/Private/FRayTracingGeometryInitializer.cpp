// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// FRayTracingGeometryInitializer @ 145f7b540

FRayTracingGeometryInitializer * __thiscall
FRayTracingGeometryInitializer::FRayTracingGeometryInitializer(FRayTracingGeometryInitializer *this)

{
  (this->IndexBuffer).Reference = (FRHIBuffer *)0x0;
  this->IndexBufferOffset = 0;
  this->GeometryType = RTGT_Triangles;
  this->TotalPrimitiveCount = 0;
  this->bFastBuild = false;
  this->bAllowUpdate = false;
  this->bAllowCompaction = true;
  this->bTemplate = false;
  this->Type = Rendering;
  (this->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Segments).ArrayNum = 0;
  (this->Segments).ArrayMax = 0;
  this->OfflineData = (FResourceArrayUploadInterface *)0x0;
  (this->OfflineDataHeader).Reserved[0] = 0xffffffff;
  (this->OfflineDataHeader).Reserved[1] = 0xffffffff;
  (this->OfflineDataHeader).Reserved[2] = 0xffffffff;
  (this->OfflineDataHeader).Reserved[3] = 0xffffffff;
  (this->OfflineDataHeader).Reserved[4] = 0xffffffff;
  (this->OfflineDataHeader).Reserved[5] = 0xffffffff;
  this->SourceGeometry = (FRHIRayTracingGeometry *)0x0;
  FDebugName::FDebugName(&this->DebugName);
  (this->OwnerName).ComparisonIndex = 0;
  (this->OwnerName).Number = 0;
  return this;
}

