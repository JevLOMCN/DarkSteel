// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversion
// Functions: 1

// operator!= @ 1443c4120

bool __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TRangedForConstIterator::operator!=
          (TRangedForConstIterator *this,TRangedForConstIterator *param_1)

{
  undefined1 local_res8 [8];
  
  if (*(int *)(this->_padding_ + 8) - *(int *)(this->_padding_ + 0x34) != this->InitialNum) {
    `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
  }
  if (((*(int *)((longlong)&this->_padding_ + 4) == *(int *)((longlong)&param_1->_padding_ + 4)) &&
      (this->_padding_ == param_1->_padding_)) && (this->_padding_ == param_1->_padding_)) {
    return false;
  }
  return true;
}

