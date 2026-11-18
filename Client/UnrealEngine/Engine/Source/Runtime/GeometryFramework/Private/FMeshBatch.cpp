// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 1

// FMeshBatch @ 1496f87f0

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FMeshBatch * __thiscall FMeshBatch::FMeshBatch(FMeshBatch *this,FMeshBatch *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FMeshBatchElement> FVar3;
  uint uVar4;
  ForElementType<FMeshBatchElement> FVar5;
  ForElementType<FMeshBatchElement> FVar6;
  
  (this->Elements).AllocatorInstance.SecondaryData = (ForElementType<FMeshBatchElement>)0x0;
  FVar3 = (param_1->Elements).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Elements).ArrayNum;
  (this->Elements).ArrayNum = iVar2;
  FVar6 = (ForElementType<FMeshBatchElement>)param_1;
  if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar6 = FVar3;
  }
  piVar1 = &(this->Elements).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
              (0x98,8,iVar2,0,(ForElementType<FMeshBatchElement> *)this,iVar2,piVar1);
    FVar3 = (this->Elements).AllocatorInstance.SecondaryData;
    FVar5 = (ForElementType<FMeshBatchElement>)this;
    if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
      FVar5 = FVar3;
    }
    ConstructItems<FMeshBatchElement,FMeshBatchElement,int>
              ((void *)FVar5,(FMeshBatchElement *)FVar6,iVar2);
  }
  this->VertexFactory = param_1->VertexFactory;
  this->MaterialRenderProxy = param_1->MaterialRenderProxy;
  this->LCI = param_1->LCI;
  (this->BatchHitProxyId).Index = (param_1->BatchHitProxyId).Index;
  this->DynamicMeshBoundsIndex = param_1->DynamicMeshBoundsIndex;
  this->TessellationDisablingShadowMapMeshSize = param_1->TessellationDisablingShadowMapMeshSize;
  this->SegmentIndex = param_1->SegmentIndex;
  this->MeshIdInPrimitive = param_1->MeshIdInPrimitive;
  this->LODIndex = param_1->LODIndex;
  uVar4 = (ZPULL(*(undefined4 *)&this->field_0xd4,0,1) ^ param_1->ReverseCulling) & 1 ^
          *(undefined4 *)&this->field_0xd4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 2 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 4 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 8 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x10 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x20 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x40 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x380 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x1c00 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x2000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x4000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x8000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x10000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x20000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x40000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x380000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x400000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x800000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x1000000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x2000000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x4000000 ^ uVar4;
  *(uint *)&this->field_0xd4 = uVar4;
  *(uint *)&this->field_0xd4 = (uVar4 ^ *(uint *)&param_1->field_0xd4) & 0x8000000 ^ uVar4;
  this->VisualizeHLODIndex = param_1->VisualizeHLODIndex;
  this->VisualizeLODIndex = param_1->VisualizeLODIndex;
  return this;
}

