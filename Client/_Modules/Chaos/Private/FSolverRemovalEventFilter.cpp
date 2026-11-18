// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// Pass @ 1440e8c50

bool __thiscall
Chaos::FSolverRemovalEventFilter::Pass(FSolverRemovalEventFilter *this,FRemovalData *param_1)

{
  float fVar1;
  double dVar2;
  
  fVar1 = (this->Settings).MinMass;
  if ((0.0 < fVar1) && (dVar2 = (double)fVar1, param_1->Mass <= dVar2 && dVar2 != param_1->Mass)) {
    return false;
  }
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

