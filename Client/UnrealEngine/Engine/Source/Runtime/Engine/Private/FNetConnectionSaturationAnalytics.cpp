// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// Reset @ 148053e40

void __thiscall FNetConnectionSaturationAnalytics::Reset(FNetConnectionSaturationAnalytics *this)

{
  this->NumberOfTrackedFrames = 0;
  this->NumberOfSaturatedFrames = 0;
  this->LongestRunOfSaturatedFrames = 0;
  this->NumberOfReplications = 0;
  this->NumberOfSaturatedReplications = 0;
  this->LongestRunOfSaturatedReplications = 0;
  this->CurrentRunOfSaturatedFrames = 0;
  this->CurrentRunOfSaturatedReplications = 0;
  return;
}

// TrackFrame @ 148067ea0

void __thiscall
FNetConnectionSaturationAnalytics::TrackFrame(FNetConnectionSaturationAnalytics *this,bool param_1)

{
  uint uVar1;
  
  this->NumberOfTrackedFrames = this->NumberOfTrackedFrames + 1;
  if (param_1) {
    this->NumberOfSaturatedFrames = this->NumberOfSaturatedFrames + 1;
    uVar1 = this->CurrentRunOfSaturatedFrames + 1;
    this->CurrentRunOfSaturatedFrames = uVar1;
    if (this->LongestRunOfSaturatedFrames < uVar1) {
      this->LongestRunOfSaturatedFrames = uVar1;
      return;
    }
  }
  else {
    this->CurrentRunOfSaturatedFrames = 0;
  }
  return;
}

// TrackReplication @ 1480688d0

void __thiscall
FNetConnectionSaturationAnalytics::TrackReplication
          (FNetConnectionSaturationAnalytics *this,bool param_1)

{
  uint uVar1;
  
  this->NumberOfReplications = this->NumberOfReplications + 1;
  if (param_1) {
    this->NumberOfSaturatedReplications = this->NumberOfSaturatedReplications + 1;
    uVar1 = this->CurrentRunOfSaturatedReplications + 1;
    this->CurrentRunOfSaturatedReplications = uVar1;
    if (this->LongestRunOfSaturatedReplications < uVar1) {
      this->LongestRunOfSaturatedReplications = uVar1;
      return;
    }
  }
  else {
    this->CurrentRunOfSaturatedReplications = 0;
  }
  return;
}

