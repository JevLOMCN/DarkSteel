// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// operator() @ 14c8b4aa0

void __thiscall
TDefaultDelete<UE::Geometry::FConstrainedSolver>::operator()
          (TDefaultDelete<UE::Geometry::FConstrainedSolver> *this,FConstrainedSolver *param_1)

{
  IMatrixSolverBase *pIVar1;
  SparseMatrix<double,0,int> *pSVar2;
  void *pvVar3;
  
  if (param_1 != (FConstrainedSolver *)0x0) {
    pIVar1 = (param_1->MatrixSolver).Ptr;
    if (pIVar1 != (IMatrixSolverBase *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    FMemory_Free((param_1->LHSMatrix).m_outerIndex);
    FMemory_Free((param_1->LHSMatrix).m_innerNonZeros);
    operator_delete__((param_1->LHSMatrix).m_data.m_values);
    operator_delete__((param_1->LHSMatrix).m_data.m_indices);
    FMemory_Free((param_1->WeightsSqrdMatrix).m_outerIndex);
    FMemory_Free((param_1->WeightsSqrdMatrix).m_innerNonZeros);
    operator_delete__((param_1->WeightsSqrdMatrix).m_data.m_values);
    operator_delete__((param_1->WeightsSqrdMatrix).m_data.m_indices);
    pSVar2 = (param_1->SymmetricMatrixPtr).Ptr;
    if (pSVar2 != (SparseMatrix<double,0,int> *)0x0) {
      FMemory_Free(pSVar2->m_outerIndex);
      FMemory_Free(pSVar2->m_innerNonZeros);
      operator_delete__((pSVar2->m_data).m_values);
      operator_delete__((pSVar2->m_data).m_indices);
      ::operator_delete(pSVar2,0x48);
    }
    pvVar3 = *(void **)&(param_1->ConstraintPositions).field_0x20;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    pvVar3 = *(void **)&(param_1->ConstraintPositions).field_0x10;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    if (*(void **)&param_1->ConstraintPositions != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->ConstraintPositions);
    }
    ::operator_delete(param_1,0xd8);
  }
  return;
}

