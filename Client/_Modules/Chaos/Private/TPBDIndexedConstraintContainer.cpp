// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// CreateGroupSolver @ 143c987d0

TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
__thiscall
Chaos::TPBDIndexedConstraintContainer<Chaos::FPBDNullConstraints>::CreateGroupSolver
          (TPBDIndexedConstraintContainer<Chaos::FPBDNullConstraints> *this,int param_1)

{
  FConstraintContainerSolver *pFVar1;
  undefined8 *puVar2;
  undefined4 in_register_00000014;
  undefined4 in_R8D;
  
  pFVar1 = (FConstraintContainerSolver *)CONCAT44(in_register_00000014,param_1);
  puVar2 = ::operator_new(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = in_R8D;
    *puVar2 = &___7__TIndexedConstraintContainerSolver_VFPBDNullConstraints_Chaos___Chaos__6B_;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[2] = this;
    pFVar1->_padding_ = (longlong)puVar2;
    return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
            )pFVar1;
  }
  pFVar1->_padding_ = 0;
  return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
          )pFVar1;
}

// CreateSceneSolver @ 143c98870

TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
__thiscall
Chaos::TPBDIndexedConstraintContainer<Chaos::FPBDNullConstraints>::CreateSceneSolver
          (TPBDIndexedConstraintContainer<Chaos::FPBDNullConstraints> *this,int param_1)

{
  FConstraintContainerSolver *pFVar1;
  undefined8 *puVar2;
  undefined4 in_register_00000014;
  undefined4 in_R8D;
  
  pFVar1 = (FConstraintContainerSolver *)CONCAT44(in_register_00000014,param_1);
  puVar2 = ::operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = in_R8D;
    *puVar2 = &___7__TSimpleConstraintContainerSolver_VFPBDNullConstraints_Chaos___Chaos__6B_;
    puVar2[2] = this;
    pFVar1->_padding_ = (longlong)puVar2;
    return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
            )pFVar1;
  }
  pFVar1->_padding_ = 0;
  return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
          )pFVar1;
}

// CreateGroupSolver @ 143d4a340

TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
__thiscall
Chaos::TPBDIndexedConstraintContainer<Chaos::FPBDRigidSpringConstraints>::CreateGroupSolver
          (TPBDIndexedConstraintContainer<Chaos::FPBDRigidSpringConstraints> *this,int param_1)

{
  FConstraintContainerSolver *pFVar1;
  undefined8 *puVar2;
  undefined4 in_register_00000014;
  undefined4 in_R8D;
  
  pFVar1 = (FConstraintContainerSolver *)CONCAT44(in_register_00000014,param_1);
  puVar2 = ::operator_new(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = in_R8D;
    *puVar2 = &
              ___7__TIndexedConstraintContainerSolver_VFPBDRigidSpringConstraints_Chaos___Chaos__6B_
    ;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[2] = this;
    pFVar1->_padding_ = (longlong)puVar2;
    return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
            )pFVar1;
  }
  pFVar1->_padding_ = 0;
  return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
          )pFVar1;
}

// CreateGroupSolver @ 143d4a3c0

TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
__thiscall
Chaos::TPBDIndexedConstraintContainer<Chaos::FPBDSuspensionConstraints>::CreateGroupSolver
          (TPBDIndexedConstraintContainer<Chaos::FPBDSuspensionConstraints> *this,int param_1)

{
  FConstraintContainerSolver *pFVar1;
  undefined8 *puVar2;
  undefined4 in_register_00000014;
  undefined4 in_R8D;
  
  pFVar1 = (FConstraintContainerSolver *)CONCAT44(in_register_00000014,param_1);
  puVar2 = ::operator_new(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = in_R8D;
    *puVar2 = &___7__TIndexedConstraintContainerSolver_VFPBDSuspensionConstraints_Chaos___Chaos__6B_
    ;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[2] = this;
    pFVar1->_padding_ = (longlong)puVar2;
    return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
            )pFVar1;
  }
  pFVar1->_padding_ = 0;
  return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
          )pFVar1;
}

// CreateSceneSolver @ 143d4a820

TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
__thiscall
Chaos::TPBDIndexedConstraintContainer<Chaos::FPBDRigidSpringConstraints>::CreateSceneSolver
          (TPBDIndexedConstraintContainer<Chaos::FPBDRigidSpringConstraints> *this,int param_1)

{
  FConstraintContainerSolver *pFVar1;
  undefined8 *puVar2;
  undefined4 in_register_00000014;
  undefined4 in_R8D;
  
  pFVar1 = (FConstraintContainerSolver *)CONCAT44(in_register_00000014,param_1);
  puVar2 = ::operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = in_R8D;
    *puVar2 = &___7__TSimpleConstraintContainerSolver_VFPBDRigidSpringConstraints_Chaos___Chaos__6B_
    ;
    puVar2[2] = this;
    pFVar1->_padding_ = (longlong)puVar2;
    return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
            )pFVar1;
  }
  pFVar1->_padding_ = 0;
  return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
          )pFVar1;
}

// CreateSceneSolver @ 143d4a890

TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
__thiscall
Chaos::TPBDIndexedConstraintContainer<Chaos::FPBDSuspensionConstraints>::CreateSceneSolver
          (TPBDIndexedConstraintContainer<Chaos::FPBDSuspensionConstraints> *this,int param_1)

{
  FConstraintContainerSolver *pFVar1;
  undefined8 *puVar2;
  undefined4 in_register_00000014;
  undefined4 in_R8D;
  
  pFVar1 = (FConstraintContainerSolver *)CONCAT44(in_register_00000014,param_1);
  puVar2 = ::operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = in_R8D;
    *puVar2 = &___7__TSimpleConstraintContainerSolver_VFPBDSuspensionConstraints_Chaos___Chaos__6B_;
    puVar2[2] = this;
    pFVar1->_padding_ = (longlong)puVar2;
    return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
            )pFVar1;
  }
  pFVar1->_padding_ = 0;
  return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
          )pFVar1;
}

// CreateGroupSolver @ 144085720

TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
__thiscall
Chaos::TPBDIndexedConstraintContainer<Chaos::FPBDPositionConstraints>::CreateGroupSolver
          (TPBDIndexedConstraintContainer<Chaos::FPBDPositionConstraints> *this,int param_1)

{
  FConstraintContainerSolver *pFVar1;
  undefined8 *puVar2;
  undefined4 in_register_00000014;
  undefined4 in_R8D;
  
  pFVar1 = (FConstraintContainerSolver *)CONCAT44(in_register_00000014,param_1);
  puVar2 = ::operator_new(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = in_R8D;
    *puVar2 = &___7__TIndexedConstraintContainerSolver_VFPBDPositionConstraints_Chaos___Chaos__6B_;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[2] = this;
    pFVar1->_padding_ = (longlong)puVar2;
    return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
            )pFVar1;
  }
  pFVar1->_padding_ = 0;
  return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
          )pFVar1;
}

// CreateSceneSolver @ 144085940

TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
__thiscall
Chaos::TPBDIndexedConstraintContainer<Chaos::FPBDPositionConstraints>::CreateSceneSolver
          (TPBDIndexedConstraintContainer<Chaos::FPBDPositionConstraints> *this,int param_1)

{
  FConstraintContainerSolver *pFVar1;
  undefined8 *puVar2;
  undefined4 in_register_00000014;
  undefined4 in_R8D;
  
  pFVar1 = (FConstraintContainerSolver *)CONCAT44(in_register_00000014,param_1);
  puVar2 = ::operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = in_R8D;
    *puVar2 = &___7__TSimpleConstraintContainerSolver_VFPBDPositionConstraints_Chaos___Chaos__6B_;
    puVar2[2] = this;
    pFVar1->_padding_ = (longlong)puVar2;
    return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
            )pFVar1;
  }
  pFVar1->_padding_ = 0;
  return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
          )pFVar1;
}

