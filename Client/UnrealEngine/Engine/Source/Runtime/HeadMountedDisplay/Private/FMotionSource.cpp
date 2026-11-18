// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 2

// operator== @ 14594ec80

bool __thiscall
FMotionDelayTarget::FMotionSource::operator==(FMotionSource *this,FMotionSource *param_1)

{
  if ((this->PlayerIndex == param_1->PlayerIndex) && (this->SourceId == param_1->SourceId)) {
    return true;
  }
  return false;
}

// operator!= @ 14594ed20

bool __thiscall
FMotionDelayTarget::FMotionSource::operator!=(FMotionSource *this,FMotionSource *param_1)

{
  if ((this->PlayerIndex == param_1->PlayerIndex) && (this->SourceId == param_1->SourceId)) {
    return false;
  }
  return true;
}

