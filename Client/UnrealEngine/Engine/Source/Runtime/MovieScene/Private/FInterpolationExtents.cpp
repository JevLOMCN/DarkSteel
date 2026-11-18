// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// AddPoint @ 1460a7f20

void __thiscall
UE::MovieScene::Interpolation::FInterpolationExtents::AddPoint
          (FInterpolationExtents *this,double param_1,FFrameTime param_2)

{
  if (param_1 < this->MinValue) {
    this->MinValue = param_1;
    this->MinValueTime = param_2;
  }
  if (this->MaxValue <= param_1 && param_1 != this->MaxValue) {
    this->MaxValue = param_1;
    this->MaxValueTime = param_2;
  }
  return;
}

// Combine @ 1460b1ba0

void __thiscall
UE::MovieScene::Interpolation::FInterpolationExtents::Combine
          (FInterpolationExtents *this,FInterpolationExtents *param_1)

{
  double dVar1;
  FFrameTime FVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = param_1->MinValue;
  if ((dVar1 != __real_7fefffffffffffff) && (__real_ffefffffffffffff != param_1->MaxValue)) {
    FVar2 = param_1->MinValueTime;
    dVar3 = this->MinValue;
    if (dVar1 < this->MinValue) {
      this->MinValue = dVar1;
      this->MinValueTime = FVar2;
      dVar3 = dVar1;
    }
    dVar4 = this->MaxValue;
    if (this->MaxValue < dVar1) {
      this->MaxValue = dVar1;
      this->MaxValueTime = FVar2;
      dVar4 = dVar1;
    }
    dVar1 = param_1->MaxValue;
    FVar2 = param_1->MaxValueTime;
    if (dVar1 < dVar3) {
      this->MinValue = dVar1;
      this->MinValueTime = FVar2;
    }
    if (dVar4 < dVar1) {
      this->MaxValue = dVar1;
      this->MaxValueTime = FVar2;
    }
  }
  return;
}

// IsValid @ 1460d9390

bool __thiscall
UE::MovieScene::Interpolation::FInterpolationExtents::IsValid(FInterpolationExtents *this)

{
  if ((__real_7fefffffffffffff != this->MinValue) && (__real_ffefffffffffffff != this->MaxValue)) {
    return true;
  }
  return false;
}

