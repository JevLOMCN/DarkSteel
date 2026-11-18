// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 6

// FOverscroll @ 1427b4050

FOverscroll * __thiscall FOverscroll::FOverscroll(FOverscroll *this)

{
  this->OverscrollAmount = 0.0;
  return this;
}

// GetOverscroll @ 142813aa0

float __thiscall FOverscroll::GetOverscroll(FOverscroll *this,FGeometry *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = Looseness;
  fVar1 = this->OverscrollAmount;
  fVar2 = logf((float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff) + Looseness);
  fVar3 = logf(fVar4);
  fVar4 = fVar2 * fVar4 - fVar3 * fVar4;
  if (fVar1 <= 0.0) {
    if (0.0 <= fVar1) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = (float)((uint)fVar4 ^ __xmm_80000000800000008000000080000000);
    }
  }
  return fVar4 * param_1->Scale;
}

// ResetOverscroll @ 142832ea0

void __thiscall FOverscroll::ResetOverscroll(FOverscroll *this)

{
  this->OverscrollAmount = 0.0;
  return;
}

// ScrollBy @ 142833ad0

float __thiscall FOverscroll::ScrollBy(FOverscroll *this,FGeometry *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = __real_bf800000;
  fVar4 = __real_3f800000;
  fVar1 = this->OverscrollAmount;
  fVar3 = param_2 / param_1->Scale + fVar1;
  this->OverscrollAmount = fVar3;
  fVar5 = fVar4;
  if ((fVar1 <= 0.0) && (fVar5 = fVar2, 0.0 <= fVar1)) {
    fVar5 = 0.0;
  }
  if ((fVar3 <= 0.0) && (fVar4 = fVar2, 0.0 <= fVar3)) {
    fVar4 = 0.0;
  }
  if ((fVar5 != fVar4) && (fVar1 != 0.0)) {
    this->OverscrollAmount = 0.0;
    fVar3 = 0.0;
  }
  return fVar1 - fVar3;
}

// ShouldApplyOverscroll @ 142835c60

bool __thiscall
FOverscroll::ShouldApplyOverscroll(FOverscroll *this,bool param_1,bool param_2,float param_3)

{
  if (((((!param_1) || (0.0 <= param_3)) && ((!param_2 || (param_3 <= 0.0)))) &&
      ((this->OverscrollAmount <= 0.0 || (0.0 <= param_3)))) &&
     ((0.0 <= this->OverscrollAmount || (param_3 <= 0.0)))) {
    return false;
  }
  return true;
}

// UpdateOverscroll @ 14283a430

void __thiscall FOverscroll::UpdateOverscroll(FOverscroll *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = this->OverscrollAmount;
  fVar2 = ((float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff) + __real_3f800000) /
          OvershootLooseMax;
  if (fVar2 <= __real_3f800000) {
    fVar2 = __real_3f800000;
  }
  fVar2 = fVar2 * param_1 * OvershootBounceRate;
  if (0.0 < fVar1) {
    fVar1 = fVar1 - fVar2;
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    this->OverscrollAmount = fVar1;
    return;
  }
  fVar1 = fVar1 + fVar2;
  if (0.0 <= fVar1) {
    fVar1 = 0.0;
  }
  this->OverscrollAmount = fVar1;
  return;
}

