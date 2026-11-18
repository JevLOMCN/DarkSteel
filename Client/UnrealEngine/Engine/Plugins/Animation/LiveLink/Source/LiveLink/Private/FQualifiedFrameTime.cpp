// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// ConvertTo @ 14d030d60

FFrameTime __thiscall FQualifiedFrameTime::ConvertTo(FQualifiedFrameTime *this,FFrameRate param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  FFrameTime FVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined8 in_R8;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  double dVar15;
  float fStackX_14;
  
  FVar5 = this->Time;
  iVar10 = (this->Rate).Numerator;
  iVar3 = (int)((ulonglong)in_R8 >> 0x20);
  iVar7 = (this->Rate).Denominator;
  if ((iVar10 == (int)in_R8) && (iVar7 == iVar3)) {
    *(FFrameTime *)param_1 = FVar5;
    return (FFrameTime)param_1;
  }
  if ((iVar10 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceRate.Numerator != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\FrameRate.h"
                         ,0x113,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar5 = (FFrameTime)(*pcVar1)();
    return FVar5;
  }
  lVar8 = (longlong)(int)in_R8 * (longlong)iVar7;
  lVar9 = (longlong)iVar3 * (longlong)iVar10;
  auVar11._0_8_ = (double)lVar8;
  auVar11._8_8_ = 0;
  lVar6 = (FVar5.FrameNumber.Value.Value * lVar8) / lVar9;
  fStackX_14 = FVar5.SubFrame;
  dVar15 = (((double)lVar8 * (double)FVar5.FrameNumber.Value.Value) / (double)lVar9 - (double)lVar6)
           + ((double)fStackX_14 * auVar11._0_8_) / (double)lVar9;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar15;
  auVar12 = roundpd(auVar11,auVar12,1);
  fVar13 = (float)(dVar15 - auVar12._0_8_);
  lVar6 = lVar6 + (longlong)auVar12._0_8_;
  fVar14 = fVar13;
  if ((0.0 < fVar13) && (fVar14 = ::FFrameTime::MaxSubframe, fVar13 <= ::FFrameTime::MaxSubframe)) {
    fVar14 = fVar13;
  }
  fVar13 = ::FFrameTime::MaxSubframe;
  if (fVar14 <= ::FFrameTime::MaxSubframe) {
    fVar13 = fVar14;
  }
  lVar8 = 0x7fffffff;
  if (lVar6 < 0x7fffffff) {
    lVar8 = lVar6;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  uVar4 = 0x80000000;
  if (-0x80000000 < lVar8) {
    uVar4 = (undefined4)lVar8;
  }
  *(undefined4 *)param_1 = uVar4;
  *(float *)((longlong)param_1 + 4) = fVar13;
  return (FFrameTime)param_1;
}

