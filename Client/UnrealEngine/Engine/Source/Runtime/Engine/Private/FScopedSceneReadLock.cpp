// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FScopedSceneReadLock @ 1482509e0

FScopedSceneReadLock * __thiscall
ChaosInterface::FScopedSceneReadLock::FScopedSceneReadLock
          (FScopedSceneReadLock *this,FPhysScene_Chaos *param_1)

{
  FPBDRigidsSolver *pFVar1;
  
  pFVar1 = (FPBDRigidsSolver *)param_1->_padding_;
  this->Solver = pFVar1;
  if (pFVar1 != (FPBDRigidsSolver *)0x0) {
    Chaos::FPhysicsRwLock::ReadLock((FPhysicsRwLock *)pFVar1->_padding_);
  }
  return this;
}

// ~FScopedSceneReadLock @ 148253260

void __thiscall
ChaosInterface::FScopedSceneReadLock::~FScopedSceneReadLock(FScopedSceneReadLock *this)

{
  if (this->Solver != (FPBDRigidsSolver *)0x0) {
    Chaos::FPhysicsRwLock::ReadUnlock((FPhysicsRwLock *)this->Solver->_padding_);
    return;
  }
  return;
}

