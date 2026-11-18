// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FAsyncDistanceFieldTask @ 147abad30

FAsyncDistanceFieldTask * __thiscall
FAsyncDistanceFieldTask::FAsyncDistanceFieldTask(FAsyncDistanceFieldTask *this)

{
  (this->SourceMeshData).TriangleIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceMeshData).TriangleIndices.ArrayNum = 0;
  (this->SourceMeshData).TriangleIndices.ArrayMax = 0;
  (this->SourceMeshData).VertexPositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceMeshData).VertexPositions.ArrayNum = 0;
  (this->SourceMeshData).VertexPositions.ArrayMax = 0;
  *(undefined8 *)&(this->SourceMeshData).Sections.field_0x20 = 0;
  *(undefined4 *)&(this->SourceMeshData).Sections.field_0x28 = 0;
  *(undefined4 *)&(this->SourceMeshData).Sections.field_0x2c = 1;
  this->StaticMesh = (UStaticMesh *)0x0;
  this->GenerateSource = (UStaticMesh *)0x0;
  this->DistanceFieldResolutionScale = 0.0;
  this->bGenerateDistanceFieldAsIfTwoSided = false;
  (this->DDCKey).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DDCKey).Data.ArrayNum = 0;
  (this->DDCKey).Data.ArrayMax = 0;
  this->GeneratedVolumeData = (FDistanceFieldVolumeData *)0x0;
  (this->AsyncTask).Ptr = (FAsyncTask<FAsyncDistanceFieldTaskWorker> *)0x0;
  this->bGeneratedCardRepresentation = false;
  return this;
}

