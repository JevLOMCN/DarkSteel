// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 1

// FFrameTime @ 14e400860

FFrameTime * __thiscall FFrameTime::FFrameTime(FFrameTime *this,FFrameNumber param_1,float param_2)

{
  float fVar1;
  
  this->SubFrame = param_2;
  (this->FrameNumber).Value = param_1.Value;
  fVar1 = MaxSubframe;
  if (param_2 <= MaxSubframe) {
    fVar1 = param_2;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  this->SubFrame = fVar1;
  return this;
}

