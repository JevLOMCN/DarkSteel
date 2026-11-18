// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 18

// ~TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> @ 143369420

void __thiscall
UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::
~TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>
          (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *this)

{
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  return;
}

// CheckValidity @ 14338d100

bool __thiscall
UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::CheckValidity
          (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *this,bool param_1,
          EValidityCheckFailMode param_2)

{
  return true;
}

// CopyParentClassData @ 143395170

void __thiscall
UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::CopyParentClassData
          (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1)

{
  this->Name = param_1->Name;
  return;
}

// GetByteCount @ 1433a2d20

ulong64 __thiscall
UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::GetByteCount
          (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *this)

{
  return 0;
}

// MakeCompactCopy @ 1433bc730

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::MakeCompactCopy
          (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *this,FCompactMaps *param_1,
          FDynamicMesh3 *param_2)

{
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *pTVar1;
  
  pTVar1 = (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)
           (**(code **)(this->_padding_ + 8))(this,param_2);
  (**(code **)(pTVar1->_padding_ + 0x20))(pTVar1,param_1);
  return pTVar1;
}

// OnCollapseEdge @ 1433c0be0

void __thiscall
UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::OnCollapseEdge
          (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *this,FEdgeCollapseInfo *param_1)

{
  return;
}

// OnFlipEdge @ 1433c0c20

void __thiscall
UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::OnFlipEdge
          (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *this,FEdgeFlipInfo *param_1)

{
  return;
}

// OnMergeEdges @ 1433c0c40

void __thiscall
UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::OnMergeEdges
          (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *this,FMergeEdgesInfo *param_1)

{
  return;
}

// OnMergeVertices @ 1433c0cc0

void __thiscall
UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::OnMergeVertices
          (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *this,FMergeVerticesInfo *param_1)

{
  return;
}

// OnNewTriangle @ 1433c0d00

void __thiscall
UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::OnNewTriangle
          (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *this,int param_1,bool param_2)

{
  return;
}

// OnNewVertex @ 1433c0d10

void __thiscall
UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::OnNewVertex
          (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *this,int param_1,bool param_2)

{
  return;
}

// OnPokeTriangle @ 1433c0d30

void __thiscall
UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::OnPokeTriangle
          (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *this,FPokeTriangleInfo *param_1)

{
  return;
}

// OnRemoveTriangle @ 1433c0db0

void __thiscall
UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::OnRemoveTriangle
          (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *this,int param_1)

{
  return;
}

// OnRemoveVertex @ 1433c0dc0

void __thiscall
UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::OnRemoveVertex
          (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *this,int param_1)

{
  return;
}

// OnReverseTriOrientation @ 1433c0dd0

void __thiscall
UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::OnReverseTriOrientation
          (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *this,int param_1)

{
  return;
}

// OnSplitEdge @ 1433c0de0

void __thiscall
UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::OnSplitEdge
          (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *this,FEdgeSplitInfo *param_1)

{
  return;
}

// OnSplitVertex @ 1433c0e40

void __thiscall
UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::OnSplitVertex
          (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *this,FVertexSplitInfo *param_1,
          TArrayView<int_const_,int> *param_2)

{
  return;
}

// Serialize @ 14351f050

void __thiscall
UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::Serialize
          (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *this,FArchive *param_1)

{
  int iVar1;
  FArchiveProxy local_a8;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar1 < 0x3e)) {
    return;
  }
  FArchiveProxy::FArchiveProxy(&local_a8,param_1);
  local_a8._padding_ = (longlong)&___7FNameAsStringProxyArchive__6B_;
  FNameAsStringProxyArchive::operator<<((FNameAsStringProxyArchive *)&local_a8,&this->Name);
  FNameAsStringProxyArchive::~FNameAsStringProxyArchive((FNameAsStringProxyArchive *)&local_a8);
  return;
}

