// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FMeshBatch @ 149332850

FMeshBatch * __thiscall FMeshBatch::FMeshBatch(FMeshBatch *this,FMeshBatch *param_1)

{
  ForElementType<FMeshBatchElement> FVar1;
  uint uVar2;
  
  (this->Elements).AllocatorInstance.SecondaryData = (ForElementType<FMeshBatchElement>)0x0;
  if ((param_1->Elements).AllocatorInstance.SecondaryData == (ForElementType<FMeshBatchElement>)0x0)
  {
    memmove(this,param_1,0x98);
  }
  FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FMeshBatchElement>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->Elements).AllocatorInstance.SecondaryData =
       (param_1->Elements).AllocatorInstance.SecondaryData;
  (param_1->Elements).AllocatorInstance.SecondaryData = (ForElementType<FMeshBatchElement>)0x0;
  (this->Elements).ArrayNum = (param_1->Elements).ArrayNum;
  (this->Elements).ArrayMax = (param_1->Elements).ArrayMax;
  (param_1->Elements).ArrayNum = 0;
  (param_1->Elements).ArrayMax = 1;
  this->VertexFactory = param_1->VertexFactory;
  this->MaterialRenderProxy = param_1->MaterialRenderProxy;
  this->LCI = param_1->LCI;
  (this->BatchHitProxyId).Index = (param_1->BatchHitProxyId).Index;
  this->DynamicMeshBoundsIndex = param_1->DynamicMeshBoundsIndex;
  this->TessellationDisablingShadowMapMeshSize = param_1->TessellationDisablingShadowMapMeshSize;
  this->SegmentIndex = param_1->SegmentIndex;
  this->MeshIdInPrimitive = param_1->MeshIdInPrimitive;
  this->LODIndex = param_1->LODIndex;
  uVar2 = (ZPULL(*(undefined4 *)&this->field_0xd4,0,1) ^ param_1->ReverseCulling) & 1 ^
          *(undefined4 *)&this->field_0xd4;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 2 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 4 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 8 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x10 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x20 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x40 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x380 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x1c00 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x2000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x4000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x8000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x10000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x20000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x40000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x380000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x400000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x800000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x1000000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x2000000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x4000000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  *(uint *)&this->field_0xd4 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x8000000 ^ uVar2;
  this->VisualizeHLODIndex = param_1->VisualizeHLODIndex;
  this->VisualizeLODIndex = param_1->VisualizeLODIndex;
  return this;
}

