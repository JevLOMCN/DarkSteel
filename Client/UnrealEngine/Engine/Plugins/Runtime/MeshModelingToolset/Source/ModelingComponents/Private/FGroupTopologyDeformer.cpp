// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 2

// FGroupTopologyDeformer @ 14cb61660

FGroupTopologyDeformer * __thiscall
UE::Geometry::FGroupTopologyDeformer::FGroupTopologyDeformer(FGroupTopologyDeformer *this)

{
  this->_padding_ = (longlong)&___7FGroupTopologyDeformer_Geometry_UE__6B_;
  this->Mesh = (FDynamicMesh3 *)0x0;
  this->Topology = (FGroupTopology *)0x0;
  (this->InitialPositions).Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialPositions).Vertices.ArrayNum = 0;
  (this->InitialPositions).Vertices.ArrayMax = 0;
  (this->InitialPositions).Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialPositions).Positions.ArrayNum = 0;
  (this->InitialPositions).Positions.ArrayMax = 0;
  *(undefined8 *)&(this->ModifiedVertices).Elements = 0;
  *(undefined8 *)&(this->ModifiedVertices).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ModifiedVertices).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ModifiedVertices).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ModifiedVertices).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ModifiedVertices).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModifiedVertices).Elements.field_0x34 = 0;
  (this->ModifiedVertices).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ModifiedVertices).HashSize = 0;
  *(undefined8 *)&(this->HandleVertices).Elements = 0;
  *(undefined8 *)&(this->HandleVertices).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->HandleVertices).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->HandleVertices).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->HandleVertices).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->HandleVertices).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HandleVertices).Elements.field_0x34 = 0;
  (this->HandleVertices).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->HandleVertices).HashSize = 0;
  *(undefined8 *)&(this->HandleBoundaryVertices).Elements = 0;
  *(undefined8 *)&(this->HandleBoundaryVertices).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->HandleBoundaryVertices).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->HandleBoundaryVertices).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->HandleBoundaryVertices).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->HandleBoundaryVertices).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HandleBoundaryVertices).Elements.field_0x34 = 0;
  (this->HandleBoundaryVertices).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->HandleBoundaryVertices).HashSize = 0;
  *(undefined8 *)&(this->FixedBoundaryVertices).Elements = 0;
  *(undefined8 *)&(this->FixedBoundaryVertices).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FixedBoundaryVertices).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->FixedBoundaryVertices).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FixedBoundaryVertices).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FixedBoundaryVertices).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FixedBoundaryVertices).Elements.field_0x34 = 0;
  (this->FixedBoundaryVertices).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FixedBoundaryVertices).HashSize = 0;
  *(undefined8 *)&(this->ROIEdgeVertices).Elements = 0;
  *(undefined8 *)&(this->ROIEdgeVertices).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ROIEdgeVertices).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ROIEdgeVertices).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ROIEdgeVertices).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ROIEdgeVertices).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ROIEdgeVertices).Elements.field_0x34 = 0;
  (this->ROIEdgeVertices).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ROIEdgeVertices).HashSize = 0;
  *(undefined8 *)&(this->FaceVertsTemp).Elements = 0;
  *(undefined8 *)&(this->FaceVertsTemp).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FaceVertsTemp).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->FaceVertsTemp).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FaceVertsTemp).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FaceVertsTemp).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FaceVertsTemp).Elements.field_0x34 = 0;
  (this->FaceVertsTemp).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FaceVertsTemp).HashSize = 0;
  *(undefined8 *)&(this->FaceBoundaryVertsTemp).Elements = 0;
  *(undefined8 *)&(this->FaceBoundaryVertsTemp).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FaceBoundaryVertsTemp).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->FaceBoundaryVertsTemp).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FaceBoundaryVertsTemp).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FaceBoundaryVertsTemp).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FaceBoundaryVertsTemp).Elements.field_0x34 = 0;
  (this->FaceBoundaryVertsTemp).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FaceBoundaryVertsTemp).HashSize = 0;
  *(undefined8 *)&(this->ModifiedOverlayNormals).Elements = 0;
  *(undefined8 *)&(this->ModifiedOverlayNormals).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ModifiedOverlayNormals).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ModifiedOverlayNormals).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ModifiedOverlayNormals).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ModifiedOverlayNormals).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModifiedOverlayNormals).Elements.field_0x34 = 0;
  (this->ModifiedOverlayNormals).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ModifiedOverlayNormals).HashSize = 0;
  (this->ROIEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ROIEdges).ArrayNum = 0;
  (this->ROIEdges).ArrayMax = 0;
  (this->ROIFaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ROIFaces).ArrayNum = 0;
  (this->ROIFaces).ArrayMax = 0;
  (this->EdgeEncodings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeEncodings).ArrayNum = 0;
  (this->EdgeEncodings).ArrayMax = 0;
  (this->FaceEncodings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FaceEncodings).ArrayNum = 0;
  (this->FaceEncodings).ArrayMax = 0;
  return this;
}

// ~FGroupTopologyDeformer @ 14cb64690

void __thiscall
UE::Geometry::FGroupTopologyDeformer::~FGroupTopologyDeformer(FGroupTopologyDeformer *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&___7FGroupTopologyDeformer_Geometry_UE__6B_;
  DestructItems<UE::Geometry::FGroupTopologyDeformer::FFaceEncoding,int>
            ((FFaceEncoding *)(this->FaceEncodings).AllocatorInstance.Data,
             (this->FaceEncodings).ArrayNum);
  pFVar1 = (this->FaceEncodings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Geometry::FGroupTopologyDeformer::FEdgeEncoding,int>
            ((FEdgeEncoding *)(this->EdgeEncodings).AllocatorInstance.Data,
             (this->EdgeEncodings).ArrayNum);
  pFVar1 = (this->EdgeEncodings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Geometry::FGroupTopologyDeformer::FROIFace,int>
            ((FROIFace *)(this->ROIFaces).AllocatorInstance.Data,(this->ROIFaces).ArrayNum);
  pFVar1 = (this->ROIFaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Geometry::FGroupTopologyDeformer::FROIEdge,int>
            ((FROIEdge *)(this->ROIEdges).AllocatorInstance.Data,(this->ROIEdges).ArrayNum);
  pFVar1 = (this->ROIEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->ModifiedOverlayNormals).HashSize = 0;
  FVar2 = (this->ModifiedOverlayNormals).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ModifiedOverlayNormals).Elements);
  (this->FaceBoundaryVertsTemp).HashSize = 0;
  FVar2 = (this->FaceBoundaryVertsTemp).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->FaceBoundaryVertsTemp).Elements);
  (this->FaceVertsTemp).HashSize = 0;
  FVar2 = (this->FaceVertsTemp).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->FaceVertsTemp).Elements);
  (this->ROIEdgeVertices).HashSize = 0;
  FVar2 = (this->ROIEdgeVertices).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ROIEdgeVertices).Elements);
  (this->FixedBoundaryVertices).HashSize = 0;
  FVar2 = (this->FixedBoundaryVertices).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->FixedBoundaryVertices).Elements);
  (this->HandleBoundaryVertices).HashSize = 0;
  FVar2 = (this->HandleBoundaryVertices).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->HandleBoundaryVertices).Elements);
  (this->HandleVertices).HashSize = 0;
  FVar2 = (this->HandleVertices).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->HandleVertices).Elements);
  (this->ModifiedVertices).HashSize = 0;
  FVar2 = (this->ModifiedVertices).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ModifiedVertices).Elements);
  pFVar1 = (this->InitialPositions).Positions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InitialPositions).Vertices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

