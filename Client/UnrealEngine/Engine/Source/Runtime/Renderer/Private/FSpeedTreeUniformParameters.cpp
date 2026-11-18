// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FSpeedTreeUniformParameters @ 145402450

FSpeedTreeUniformParameters * __thiscall
FSpeedTreeUniformParameters::FSpeedTreeUniformParameters(FSpeedTreeUniformParameters *this)

{
  *(undefined8 *)((longlong)&(this->WindVector).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)&(this->WindVector).field0_0x0 = 0;
  (this->WindVector).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->WindGlobal).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->WindBranch).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->WindBranchTwitch).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->WindBranchWhip).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->WindBranchAnchor).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->WindBranchAdherences).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->WindTurbulences).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->WindLeaf1Ripple).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->WindLeaf1Tumble).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->WindLeaf1Twitch).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->WindLeaf2Ripple).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->WindLeaf2Tumble).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->WindLeaf2Twitch).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->WindFrondRipple).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->WindRollingBranch).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->WindRollingLeafAndDirection).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->WindRollingNoise).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->WindAnimation).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->PrevWindVector).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->PrevWindGlobal).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->PrevWindBranch).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->PrevWindBranchTwitch).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->PrevWindBranchWhip).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->PrevWindBranchAnchor).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->PrevWindBranchAdherences).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->PrevWindTurbulences).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->PrevWindLeaf1Ripple).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->PrevWindLeaf1Tumble).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->PrevWindLeaf1Twitch).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->PrevWindLeaf2Ripple).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->PrevWindLeaf2Tumble).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->PrevWindLeaf2Twitch).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->PrevWindFrondRipple).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->PrevWindRollingBranch).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->PrevWindRollingLeafAndDirection).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->PrevWindRollingNoise).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->PrevWindAnimation).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->WindGlobal).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->WindBranch).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->WindBranchTwitch).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->WindBranchWhip).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->WindBranchAnchor).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->WindBranchAdherences).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->WindTurbulences).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->WindLeaf1Ripple).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->WindLeaf1Tumble).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->WindLeaf1Twitch).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->WindLeaf2Ripple).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->WindLeaf2Tumble).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->WindLeaf2Twitch).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->WindFrondRipple).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->WindRollingBranch).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->WindRollingLeafAndDirection).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->WindRollingNoise).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->WindAnimation).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->PrevWindVector).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->PrevWindGlobal).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->PrevWindBranch).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->PrevWindBranchTwitch).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->PrevWindBranchWhip).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->PrevWindBranchAnchor).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->PrevWindBranchAdherences).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->PrevWindTurbulences).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->PrevWindLeaf1Ripple).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->PrevWindLeaf1Tumble).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->PrevWindLeaf1Twitch).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->PrevWindLeaf2Ripple).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->PrevWindLeaf2Tumble).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->PrevWindLeaf2Twitch).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->PrevWindFrondRipple).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->PrevWindRollingBranch).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->PrevWindRollingLeafAndDirection).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->PrevWindRollingNoise).field0_0x0 + 0xc) = 0x3f800000;
  (this->PrevWindAnimation).field0_0x0._s_0.W = 1.0;
  return this;
}

