// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FModelVertexBuffer @ 147fa4e40

FModelVertexBuffer * __thiscall
FModelVertexBuffer::FModelVertexBuffer(FModelVertexBuffer *this,UModel *param_1)

{
  this->RefCount = 0;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(&(this->Buffers).StaticMeshVertexBuffer);
  FPositionVertexBuffer::FPositionVertexBuffer(&(this->Buffers).PositionVertexBuffer);
  FColorVertexBuffer::FColorVertexBuffer(&(this->Buffers).ColorVertexBuffer);
  this->Model = param_1;
  return this;
}

