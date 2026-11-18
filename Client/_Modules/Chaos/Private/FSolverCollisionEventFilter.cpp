// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// Pass @ 1440e8b50

bool __thiscall
Chaos::FSolverCollisionEventFilter::Pass(FSolverCollisionEventFilter *this,FCollidingData *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  
  fVar1 = (this->Settings).MinSpeed;
  fVar2 = (this->Settings).MinImpulse;
  fVar3 = (this->Settings).MinMass;
  if ((((fVar3 <= 0.0) || (dVar5 = (double)fVar3, dVar5 < param_1->Mass1 || dVar5 == param_1->Mass1)
       ) || (dVar5 < param_1->Mass2 || dVar5 == param_1->Mass2)) &&
     (((fVar1 <= 0.0 ||
       (dVar5 = *(double *)&(param_1->Velocity1).field_0x8,
       dVar4 = *(double *)&(param_1->Velocity1).field_0x10,
       (double)(fVar1 * fVar1) <=
       dVar5 * dVar5 + *(double *)&param_1->Velocity1 * *(double *)&param_1->Velocity1 +
       dVar4 * dVar4)) ||
      (dVar5 = *(double *)&(param_1->Velocity2).field_0x8,
      dVar4 = *(double *)&(param_1->Velocity2).field_0x10,
      (double)(fVar1 * fVar1) <=
      dVar5 * dVar5 + *(double *)&param_1->Velocity2 * *(double *)&param_1->Velocity2 +
      dVar4 * dVar4)))) {
    if (0.0 < fVar2) {
      dVar5 = *(double *)&(param_1->AccumulatedImpulse).field_0x8;
      dVar4 = *(double *)&(param_1->AccumulatedImpulse).field_0x10;
      return (double)(fVar2 * fVar2) <=
             dVar5 * dVar5 +
             *(double *)&param_1->AccumulatedImpulse * *(double *)&param_1->AccumulatedImpulse +
             dVar4 * dVar4;
    }
    return true;
  }
  return false;
}

