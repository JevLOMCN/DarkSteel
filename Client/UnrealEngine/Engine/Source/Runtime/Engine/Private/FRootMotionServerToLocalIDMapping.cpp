// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FRootMotionServerToLocalIDMapping @ 147bb95a0

FRootMotionServerToLocalIDMapping * __thiscall
FRootMotionServerToLocalIDMapping::FRootMotionServerToLocalIDMapping
          (FRootMotionServerToLocalIDMapping *this)

{
  this->ServerID = 0;
  this->LocalID = 0;
  this->TimeStamp = 0.0;
  return this;
}

// IsStillValid @ 147bf1440

bool __thiscall
FRootMotionServerToLocalIDMapping::IsStillValid
          (FRootMotionServerToLocalIDMapping *this,float param_1)

{
  return param_1 - __real_40400000 < this->TimeStamp || param_1 - __real_40400000 == this->TimeStamp
  ;
}

