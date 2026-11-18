// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// HasAnyData @ 14a41c840

bool __thiscall FMovieSceneFloatChannel::HasAnyData(FMovieSceneFloatChannel *this)

{
  if (((this->Times).ArrayNum == 0) && (this->bHasDefaultValue != true)) {
    return false;
  }
  return true;
}

