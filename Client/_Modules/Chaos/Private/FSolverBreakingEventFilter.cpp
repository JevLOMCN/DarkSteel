// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// Pass @ 1440e8aa0

bool __thiscall
Chaos::FSolverBreakingEventFilter::Pass(FSolverBreakingEventFilter *this,FBreakingData *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  fVar1 = (this->Settings).MinMass;
  fVar2 = (this->Settings).MinSpeed;
  if (((fVar1 <= 0.0) || (dVar4 = (double)fVar1, dVar4 < param_1->Mass || dVar4 == param_1->Mass))
     && ((fVar2 <= 0.0 ||
         (dVar4 = *(double *)&(param_1->Velocity).field_0x8,
         dVar3 = *(double *)&(param_1->Velocity).field_0x10,
         (double)(fVar2 * fVar2) <=
         dVar4 * dVar4 + *(double *)&param_1->Velocity * *(double *)&param_1->Velocity +
         dVar3 * dVar3)))) {
    fVar1 = (this->Settings).MinVolume;
    if (0.0 < fVar1) {
      return (double)fVar1 <=
             (*(double *)&(param_1->BoundingBox).MMax.field_0x8 -
             *(double *)&(param_1->BoundingBox).MMin.field_0x8) *
             (*(double *)&(param_1->BoundingBox).MMax - *(double *)&(param_1->BoundingBox).MMin) *
             (*(double *)&(param_1->BoundingBox).MMax.field_0x10 -
             *(double *)&(param_1->BoundingBox).MMin.field_0x10);
    }
    return true;
  }
  return false;
}

