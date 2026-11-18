// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FFrameTime<int,void> @ 142123d90

FFrameTime * __thiscall FFrameTime::FFrameTime<int,void>(FFrameTime *this,int param_1)

{
  (this->FrameNumber).Value = param_1;
  this->SubFrame = 0.0;
  return this;
}

