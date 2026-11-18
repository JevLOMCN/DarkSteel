// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Update @ 1483b2d90

void __thiscall
FDynamicForceFeedbackDetails::Update
          (FDynamicForceFeedbackDetails *this,FForceFeedbackValues *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = __real_3f800000;
  if (this->bAffectsLeftLarge != 0) {
    fVar2 = this->Intensity;
    if (__real_3f800000 <= this->Intensity) {
      fVar2 = __real_3f800000;
    }
    if (fVar2 <= param_1->LeftLarge) {
      fVar2 = param_1->LeftLarge;
    }
    param_1->LeftLarge = fVar2;
  }
  if (this->bAffectsLeftSmall != 0) {
    fVar2 = this->Intensity;
    if (fVar1 <= this->Intensity) {
      fVar2 = fVar1;
    }
    if (fVar2 <= param_1->LeftSmall) {
      fVar2 = param_1->LeftSmall;
    }
    param_1->LeftSmall = fVar2;
  }
  if (this->bAffectsRightLarge != 0) {
    fVar2 = this->Intensity;
    if (fVar1 <= this->Intensity) {
      fVar2 = fVar1;
    }
    if (fVar2 <= param_1->RightLarge) {
      fVar2 = param_1->RightLarge;
    }
    param_1->RightLarge = fVar2;
  }
  if (this->bAffectsRightSmall != 0) {
    fVar2 = this->Intensity;
    if (fVar1 <= this->Intensity) {
      fVar2 = fVar1;
    }
    if (fVar2 <= param_1->RightSmall) {
      fVar2 = param_1->RightSmall;
    }
    param_1->RightSmall = fVar2;
  }
  return;
}

