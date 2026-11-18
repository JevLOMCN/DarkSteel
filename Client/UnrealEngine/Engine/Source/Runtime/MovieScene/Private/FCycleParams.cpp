// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// Oscillate @ 1460dddd0

void __thiscall UE::MovieScene::FCycleParams::Oscillate(FCycleParams *this,int param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  undefined1 in_XMM2 [16];
  undefined1 auVar3 [16];
  FFrameTime local_res8;
  
  uVar1 = -this->CycleCount;
  if (-this->CycleCount < 0) {
    uVar1 = this->CycleCount;
  }
  uVar1 = uVar1 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  if (uVar1 == 1) {
    fVar2 = (this->Time).SubFrame;
    this->bMirrorCurve = true;
    if (::FFrameTime::MaxSubframe <= fVar2) {
      fVar2 = ::FFrameTime::MaxSubframe;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    auVar3 = roundps(in_XMM2,ZEXT416((uint)fVar2 ^ __xmm_80000000800000008000000080000000),1);
    local_res8.SubFrame =
         (float)((uint)fVar2 ^ __xmm_80000000800000008000000080000000) - auVar3._0_4_;
    if (::FFrameTime::MaxSubframe <= local_res8.SubFrame) {
      local_res8.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (local_res8.SubFrame <= 0.0) {
      local_res8.SubFrame = 0.0;
    }
    local_res8.FrameNumber.Value =
         (int)auVar3._0_4_ +
         (((int)ROUND(__real_bf000000) >> 1) - (this->Time).FrameNumber.Value) + param_1 + param_2;
    this->Time = local_res8;
  }
  return;
}

