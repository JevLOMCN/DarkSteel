// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 4

// ConvertFrameOffsetInSecondOffset @ 1460461e0

double __thiscall
ITimedDataInput::ConvertFrameOffsetInSecondOffset(ITimedDataInput *this,double param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined8 in_XMM1_Qb;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 local_res8 [32];
  
  auVar4._8_8_ = in_XMM1_Qb;
  auVar4._0_8_ = param_1;
  (**(code **)((longlong)*this + 0x38))(this,local_res8);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_1;
  auVar4 = roundpd(auVar4,auVar5,1);
  dVar3 = auVar4._0_8_;
  dVar2 = dVar3;
  if (__real_41dfffffffc00000 <= dVar3) {
    dVar2 = __real_41dfffffffc00000;
  }
  if (dVar2 <= __real_c1e0000000000000) {
    dVar2 = __real_c1e0000000000000;
  }
  fVar1 = (float)(param_1 - dVar3);
  if (::FFrameTime::MaxSubframe <= (float)(param_1 - dVar3)) {
    fVar1 = ::FFrameTime::MaxSubframe;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar1) {
    fVar1 = ::FFrameTime::MaxSubframe;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return ((double)SUB84(local_res8._0_8_,4) * (double)fVar1 +
         (double)((longlong)(int)dVar2 * (longlong)SUB84(local_res8._0_8_,4))) /
         (double)(int)local_res8._0_8_;
}

// ConvertFrameOffsetInSecondOffset @ 1460462b0

double __cdecl ITimedDataInput::ConvertFrameOffsetInSecondOffset(double param_1,FFrameRate param_2)

{
  double dVar1;
  float fVar2;
  double dVar3;
  undefined1 in_XMM3 [16];
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  auVar4 = roundpd(in_XMM3,auVar4,1);
  dVar3 = auVar4._0_8_;
  dVar1 = dVar3;
  if (__real_41dfffffffc00000 <= dVar3) {
    dVar1 = __real_41dfffffffc00000;
  }
  if (dVar1 <= __real_c1e0000000000000) {
    dVar1 = __real_c1e0000000000000;
  }
  fVar2 = (float)(param_1 - dVar3);
  if (::FFrameTime::MaxSubframe <= (float)(param_1 - dVar3)) {
    fVar2 = ::FFrameTime::MaxSubframe;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar2) {
    fVar2 = ::FFrameTime::MaxSubframe;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  return ((double)((longlong)(int)dVar1 * (longlong)param_2.Denominator) +
         (double)param_2.Denominator * (double)fVar2) / (double)param_2.Numerator;
}

// ConvertSecondOffsetInFrameOffset @ 146046500

double __thiscall
ITimedDataInput::ConvertSecondOffsetInFrameOffset(ITimedDataInput *this,double param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined1 in_XMM3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined1 local_res8 [32];
  
  (**(code **)((longlong)*this + 0x38))(this,local_res8);
  dVar2 = ((double)(int)local_res8._0_8_ * param_1) / (double)SUB84(local_res8._0_8_,4);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar2;
  auVar4 = roundpd(in_XMM3,auVar4,1);
  dVar3 = auVar4._0_8_;
  dVar2 = dVar2 - dVar3;
  if (__real_41dfffffffc00000 <= dVar3) {
    dVar3 = __real_41dfffffffc00000;
  }
  if (dVar3 <= __real_c1e0000000000000) {
    dVar3 = __real_c1e0000000000000;
  }
  iVar1 = (int)dVar2;
  fVar5 = (float)dVar2 - (float)iVar1;
  fVar6 = fVar5;
  if ((0.0 < fVar5) && (fVar6 = ::FFrameTime::MaxSubframe, fVar5 <= ::FFrameTime::MaxSubframe)) {
    fVar6 = fVar5;
  }
  fVar5 = ::FFrameTime::MaxSubframe;
  if (fVar6 <= ::FFrameTime::MaxSubframe) {
    fVar5 = fVar6;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  return (double)fVar5 + (double)((int)dVar3 + iVar1);
}

// ConvertSecondOffsetInFrameOffset @ 1460465c0

double __cdecl ITimedDataInput::ConvertSecondOffsetInFrameOffset(double param_1,FFrameRate param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined1 in_XMM3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  
  dVar2 = ((double)param_2.Numerator * param_1) / (double)param_2.Denominator;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar2;
  auVar4 = roundpd(in_XMM3,auVar4,1);
  dVar3 = auVar4._0_8_;
  dVar2 = dVar2 - dVar3;
  if (__real_41dfffffffc00000 <= dVar3) {
    dVar3 = __real_41dfffffffc00000;
  }
  if (dVar3 <= __real_c1e0000000000000) {
    dVar3 = __real_c1e0000000000000;
  }
  iVar1 = (int)dVar2;
  fVar5 = (float)dVar2 - (float)iVar1;
  fVar6 = fVar5;
  if ((0.0 < fVar5) && (fVar6 = ::FFrameTime::MaxSubframe, fVar5 <= ::FFrameTime::MaxSubframe)) {
    fVar6 = fVar5;
  }
  fVar5 = ::FFrameTime::MaxSubframe;
  if (fVar6 <= ::FFrameTime::MaxSubframe) {
    fVar5 = fVar6;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  return (double)fVar5 + (double)((int)dVar3 + iVar1);
}

