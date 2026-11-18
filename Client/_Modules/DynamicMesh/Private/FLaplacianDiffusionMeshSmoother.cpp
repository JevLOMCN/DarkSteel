// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// ConstructOperators @ 14c938760

void __thiscall
UE::Geometry::FLaplacianDiffusionMeshSmoother::ConstructOperators
          (FLaplacianDiffusionMeshSmoother *this,ELaplacianWeightScheme param_1,
          FDynamicMesh3 *param_2,bool *param_3,FVertexLinearization *param_4,
          SparseMatrix<double,0,int> *param_5,SparseMatrix<double,0,int> *param_6)

{
  bool bVar1;
  
  bVar1 = bIsSymmetricLaplacian(param_1);
  *param_3 = bVar1;
  ConstructLaplacian(param_1,param_2,(FVertexLinearization *)&this->field_0x10,param_5,param_6);
  return;
}

