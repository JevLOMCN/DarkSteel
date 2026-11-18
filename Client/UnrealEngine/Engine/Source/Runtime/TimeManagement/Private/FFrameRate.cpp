// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 1

// AsFrameTime @ 146041ed0

FFrameTime __thiscall FFrameRate::AsFrameTime(FFrameRate *this,double param_1)

{
  int iVar1;
  FFrameTime in_RDX;
  double dVar2;
  undefined1 in_XMM2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  float fVar5;
  float fVar6;
  
  dVar4 = ((double)this->Numerator * in_XMM2._0_8_) / (double)this->Denominator;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar4;
  auVar3 = roundpd(in_XMM2,auVar3,1);
  dVar2 = auVar3._0_8_;
  dVar4 = dVar4 - dVar2;
  if (__real_41dfffffffc00000 <= dVar2) {
    dVar2 = __real_41dfffffffc00000;
  }
  if (dVar2 <= __real_c1e0000000000000) {
    dVar2 = __real_c1e0000000000000;
  }
  iVar1 = (int)dVar4;
  fVar5 = (float)dVar4 - (float)iVar1;
  fVar6 = fVar5;
  if ((0.0 < fVar5) && (fVar6 = ::FFrameTime::MaxSubframe, fVar5 <= ::FFrameTime::MaxSubframe)) {
    fVar6 = fVar5;
  }
  fVar5 = ::FFrameTime::MaxSubframe;
  if (fVar6 <= ::FFrameTime::MaxSubframe) {
    fVar5 = fVar6;
  }
  *(int *)in_RDX = (int)dVar2 + iVar1;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)((longlong)in_RDX + 4) = fVar5;
  return in_RDX;
}

