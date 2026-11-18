// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// FChannelPositionInfo @ 1464d77e0

/* WARNING: Enum "Type": Some values do not have unique names */

FChannelPositionInfo * __thiscall
Audio::FChannelPositionInfo::FChannelPositionInfo(FChannelPositionInfo *this)

{
  this->Radius = 1.0;
  this->Channel = DefaultChannel;
  this->Azimuth = 0.0;
  this->Elevation = 0.0;
  return this;
}

