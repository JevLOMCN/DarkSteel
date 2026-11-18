// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// CalculateFieldOfViewDistanceScale @ 14552af10

float __thiscall
FCachedSystemScalabilityCVars::CalculateFieldOfViewDistanceScale
          (FCachedSystemScalabilityCVars *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = this->FieldOfViewMaxAngleScale;
  fVar4 = fVar3 - this->FieldOfViewMinAngleScale;
  if (__real_322bcc77 < (float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar3 = this->FieldOfViewMinAngle;
    fVar1 = this->FieldOfViewMaxAngle;
    fVar2 = fVar1;
    if (param_1 <= fVar1) {
      fVar2 = param_1;
    }
    if (fVar2 <= fVar3) {
      fVar2 = fVar3;
    }
    fVar3 = ((fVar2 - fVar3) / (fVar1 - fVar3)) * fVar4 + this->FieldOfViewMinAngleScale;
  }
  return fVar3;
}

