// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 1

// GetNextValue @ 14b0260e0

float __thiscall Audio::FExponentialEase::GetNextValue(FExponentialEase *this)

{
  float fVar1;
  
  fVar1 = this->CurrentValue;
  if (this->Threshold <=
      (float)((uint)(this->TargetValue - fVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar1 = fVar1 * this->OneMinusEase + this->EaseTimesTarget;
    this->CurrentValue = fVar1;
  }
  return fVar1;
}

