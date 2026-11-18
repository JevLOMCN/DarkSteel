// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 2

// FMeshBevel @ 14ce26580

FMeshBevel * __thiscall UE::Geometry::FMeshBevel::FMeshBevel(FMeshBevel *this)

{
  (this->ResultInfo).Result = InProgress;
  this->NumSubdivisions = 0;
  this->InsetDistance = 5.0;
  this->RoundWeight = 1.0;
  this->MaterialIDMode = ConstantMaterialID;
  this->SetConstantMaterialID = 0;
  this->Progress = (FProgressCancel *)0x0;
  (this->NewTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewTriangles).ArrayNum = 0;
  (this->NewTriangles).ArrayMax = 0;
  (this->ResultInfo).Errors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResultInfo).Errors.ArrayNum = 0;
  (this->ResultInfo).Errors.ArrayMax = 0;
  (this->ResultInfo).Warnings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResultInfo).Warnings.ArrayNum = 0;
  (this->ResultInfo).Warnings.ArrayMax = 0;
  *(undefined8 *)&this->VertexIDToIndexMap = 0;
  *(undefined8 *)&(this->VertexIDToIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->VertexIDToIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->VertexIDToIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->VertexIDToIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->VertexIDToIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VertexIDToIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->VertexIDToIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->VertexIDToIndexMap).field_0x48 = 0;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->Edges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).ArrayNum = 0;
  (this->Edges).ArrayMax = 0;
  (this->Loops).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Loops).ArrayNum = 0;
  (this->Loops).ArrayMax = 0;
  *(undefined8 *)&this->MeshEdgePairs = 0;
  *(undefined8 *)&(this->MeshEdgePairs).field_0x8 = 0;
  *(undefined8 *)&(this->MeshEdgePairs).field_0x20 = 0;
  *(undefined4 *)&(this->MeshEdgePairs).field_0x28 = 0;
  *(undefined4 *)&(this->MeshEdgePairs).field_0x2c = 0x80;
  *(undefined4 *)&(this->MeshEdgePairs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MeshEdgePairs).field_0x34 = 0;
  *(undefined8 *)&(this->MeshEdgePairs).field_0x40 = 0;
  *(undefined4 *)&(this->MeshEdgePairs).field_0x48 = 0;
  return this;
}

// ~FMeshBevel @ 14ce270e0

void __thiscall UE::Geometry::FMeshBevel::~FMeshBevel(FMeshBevel *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->MeshEdgePairs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MeshEdgePairs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MeshEdgePairs);
  DestructItems<UE::Geometry::FMeshBevel::FBevelLoop,int>
            ((FBevelLoop *)(this->Loops).AllocatorInstance.Data,(this->Loops).ArrayNum);
  pFVar2 = (this->Loops).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::Geometry::FMeshBevel::FBevelEdge,int>
            ((FBevelEdge *)(this->Edges).AllocatorInstance.Data,(this->Edges).ArrayNum);
  pFVar2 = (this->Edges).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::Geometry::FMeshBevel::FBevelVertex,int>
            ((FBevelVertex *)(this->Vertices).AllocatorInstance.Data,(this->Vertices).ArrayNum);
  pFVar2 = (this->Vertices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->VertexIDToIndexMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->VertexIDToIndexMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VertexIDToIndexMap);
  DestructItems<UE::Geometry::FGeometryWarning,int>
            ((FGeometryWarning *)(this->ResultInfo).Warnings.AllocatorInstance.Data,
             (this->ResultInfo).Warnings.ArrayNum);
  pFVar2 = (this->ResultInfo).Warnings.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::Geometry::FGeometryError,int>
            ((FGeometryError *)(this->ResultInfo).Errors.AllocatorInstance.Data,
             (this->ResultInfo).Errors.ArrayNum);
  pFVar2 = (this->ResultInfo).Errors.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NewTriangles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

