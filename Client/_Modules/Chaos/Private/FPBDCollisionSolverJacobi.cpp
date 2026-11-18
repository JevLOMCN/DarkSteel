// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// DisableShockPropagation @ 143a0cd90

void __thiscall
Chaos::Private::FPBDCollisionSolverJacobi::DisableShockPropagation(FPBDCollisionSolverJacobi *this)

{
  SetShockPropagationInvMassScale(this,__real_3f800000);
  return;
}

// EnablePositionShockPropagation @ 143a0cdb0

void __thiscall
Chaos::Private::FPBDCollisionSolverJacobi::EnablePositionShockPropagation
          (FPBDCollisionSolverJacobi *this)

{
  SetShockPropagationInvMassScale(this,CVars::Chaos_PBDCollisionSolver_Position_MinInvMassScale);
  return;
}

// EnableVelocityShockPropagation @ 143a0cdd0

void __thiscall
Chaos::Private::FPBDCollisionSolverJacobi::EnableVelocityShockPropagation
          (FPBDCollisionSolverJacobi *this)

{
  SetShockPropagationInvMassScale(this,CVars::Chaos_PBDCollisionSolver_Velocity_MinInvMassScale);
  return;
}

// SetShockPropagationInvMassScale @ 143a13b60

void __thiscall
Chaos::Private::FPBDCollisionSolverJacobi::SetShockPropagationInvMassScale
          (FPBDCollisionSolverJacobi *this,float param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  FSolverBody *pFVar4;
  FSolverBody *pFVar5;
  int iVar6;
  
  pFVar4 = (this->State).SolverBodies[0].Body;
  fVar1 = (this->State).SolverBodies[0].State.ShockPropagationScale;
  if (__real_00800000 < fVar1 * (this->State).SolverBodies[0].State.InvMScale * (pFVar4->State).InvM
     ) {
    fVar2 = (this->State).SolverBodies[1].State.ShockPropagationScale;
    pFVar5 = (this->State).SolverBodies[1].Body;
    if (__real_00800000 <
        fVar2 * (this->State).SolverBodies[1].State.InvMScale * (pFVar5->State).InvM) {
      iVar6 = (pFVar5->State).Level;
      iVar3 = (pFVar4->State).Level;
      if (iVar3 != iVar6) {
        if (iVar3 < iVar6) {
          if (fVar1 == param_1) {
            return;
          }
          (this->State).SolverBodies[0].State.ShockPropagationScale = param_1;
        }
        else {
          if (fVar2 == param_1) {
            return;
          }
          (this->State).SolverBodies[1].State.ShockPropagationScale = param_1;
        }
        iVar6 = 0;
        if (0 < (this->State).ManifoldPoints.ManifoldPoints.NumElements) {
          do {
            FPBDCollisionSolverJacobiManifoldPoints::UpdateMassNormal
                      (&(this->State).ManifoldPoints,iVar6,(this->State).SolverBodies,
                       (this->State).SolverBodies + 1);
            iVar6 = iVar6 + 1;
          } while (iVar6 < (this->State).ManifoldPoints.ManifoldPoints.NumElements);
        }
      }
    }
  }
  return;
}

