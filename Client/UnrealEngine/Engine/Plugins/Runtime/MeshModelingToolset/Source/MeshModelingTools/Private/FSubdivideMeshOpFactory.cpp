// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// GetSubdivisionType @ 14cc5dc50

EDisplaceMeshToolSubdivisionType __thiscall
DisplaceMeshToolLocals::FSubdivideMeshOpFactory::GetSubdivisionType(FSubdivideMeshOpFactory *this)

{
  return this->SubdivisionType;
}

// GetSubdivisionsCount @ 14cc5dc60

int __thiscall
DisplaceMeshToolLocals::FSubdivideMeshOpFactory::GetSubdivisionsCount(FSubdivideMeshOpFactory *this)

{
  return (this->Parameters).SubdivisionsCount;
}

// MakeNewOperator @ 14cc63ba0

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall
DisplaceMeshToolLocals::FSubdivideMeshOpFactory::MakeNewOperator(FSubdivideMeshOpFactory *this)

{
  FDynamicMesh3 *pFVar1;
  FSubdivideMeshOp *pFVar2;
  FDynamicMeshOperator *in_RDX;
  
  pFVar1 = this->SourceMesh;
  pFVar2 = ::operator_new(0xd0);
  if (pFVar2 != (FSubdivideMeshOp *)0x0) {
    pFVar2 = FSubdivideMeshOp::FSubdivideMeshOp
                       (pFVar2,pFVar1,&this->Parameters,this->SubdivisionType);
    in_RDX->_padding_ = (longlong)pFVar2;
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )in_RDX;
}

// SetSubdivisionType @ 14cc75cf0

void __thiscall
DisplaceMeshToolLocals::FSubdivideMeshOpFactory::SetSubdivisionType
          (FSubdivideMeshOpFactory *this,EDisplaceMeshToolSubdivisionType param_1)

{
  this->SubdivisionType = param_1;
  return;
}

// SetSubdivisionsCount @ 14cc75d00

void __thiscall
DisplaceMeshToolLocals::FSubdivideMeshOpFactory::SetSubdivisionsCount
          (FSubdivideMeshOpFactory *this,int param_1)

{
  (this->Parameters).SubdivisionsCount = param_1;
  return;
}

// SetWeightMap @ 14cc75f50

void __thiscall
DisplaceMeshToolLocals::FSubdivideMeshOpFactory::SetWeightMap
          (FSubdivideMeshOpFactory *this,
          TSharedPtr<UE::Geometry::TIndexedWeightMap<float>,1> *param_1)

{
  TIndexedWeightMap<float> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->Parameters).WeightMap.SharedReferenceCount.ReferenceController;
  (this->Parameters).WeightMap.Object = pTVar1;
  (this->Parameters).WeightMap.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

