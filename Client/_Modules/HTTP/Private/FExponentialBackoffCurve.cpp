// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 2

// Compute @ 143158f40

float __thiscall
FHttpRetrySystem::FExponentialBackoffCurve::Compute(FExponentialBackoffCurve *this,uint param_1)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = this->Base;
  fVar1 = this->ExponentBias;
  fVar3 = powf(fVar5,(float)param_1 + fVar1);
  fVar4 = __real_3f800000;
  if ((__real_3f800000 < fVar5) && (0.0 <= fVar1)) {
    fVar5 = this->MaxCoefficient;
    fVar1 = this->MinCoefficient;
    if ((fVar1 <= fVar5) && ((__real_3a83126f < fVar5 && (0.0 <= fVar1)))) {
      uVar2 = rand();
      fVar4 = (float)(uVar2 & 0x7fff) * (fVar5 - fVar1) * __real_38000100 + fVar1;
    }
  }
  fVar5 = fVar4 * fVar3;
  if (this->MaxBackoffSeconds <= fVar4 * fVar3) {
    fVar5 = this->MaxBackoffSeconds;
  }
  return fVar5;
}

// IsValid @ 14316ceb0

bool __thiscall FHttpRetrySystem::FExponentialBackoffCurve::IsValid(FExponentialBackoffCurve *this)

{
  if ((__real_3f800000 < this->Base) && (0.0 < this->ExponentBias || this->ExponentBias == 0.0)) {
    if ((this->MinCoefficient <= this->MaxCoefficient) &&
       ((__real_3a83126f < this->MaxCoefficient && (0.0 <= this->MinCoefficient)))) {
      return true;
    }
  }
  return false;
}

