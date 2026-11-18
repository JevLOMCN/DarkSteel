// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 2

// IsMultipleOf @ 14d7b16c0

bool __thiscall FFrameRate::IsMultipleOf(FFrameRate *this,FFrameRate param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_1.Denominator * (longlong)this->Numerator;
  lVar1 = (longlong)this->Denominator * (longlong)param_1.Numerator;
  if ((lVar2 - lVar1 == 0 || lVar2 < lVar1) && (lVar1 % lVar2 == 0)) {
    return true;
  }
  return false;
}

// TransformTime @ 14d7c17a0

FFrameTime __cdecl
FFrameRate::TransformTime(FFrameTime param_1,FFrameRate param_2,FFrameRate param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  FFrameTime FVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined8 in_R9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  double dVar14;
  float fStackX_c;
  
  iVar9 = param_3.Numerator;
  iVar3 = (int)((ulonglong)in_R9 >> 0x20);
  if ((iVar9 == (int)in_R9) && (param_3.Denominator == iVar3)) {
    *(FFrameRate *)param_1 = param_2;
    return param_1;
  }
  if ((iVar9 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceRate.Numerator != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\FrameRate.h"
                         ,0x113,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar5 = (FFrameTime)(*pcVar1)();
    return FVar5;
  }
  lVar7 = (longlong)param_3.Denominator * (longlong)(int)in_R9;
  lVar8 = (longlong)iVar3 * (longlong)iVar9;
  auVar10._0_8_ = (double)lVar7;
  auVar10._8_8_ = 0;
  lVar6 = (param_2.Numerator * lVar7) / lVar8;
  fStackX_c = (float)param_2.Denominator;
  dVar14 = (((double)lVar7 * (double)param_2.Numerator) / (double)lVar8 - (double)lVar6) +
           ((double)fStackX_c * auVar10._0_8_) / (double)lVar8;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar14;
  auVar11 = roundpd(auVar10,auVar11,1);
  fVar12 = (float)(dVar14 - auVar11._0_8_);
  lVar6 = lVar6 + (longlong)auVar11._0_8_;
  fVar13 = fVar12;
  if ((0.0 < fVar12) && (fVar13 = ::FFrameTime::MaxSubframe, fVar12 <= ::FFrameTime::MaxSubframe)) {
    fVar13 = fVar12;
  }
  fVar12 = ::FFrameTime::MaxSubframe;
  if (fVar13 <= ::FFrameTime::MaxSubframe) {
    fVar12 = fVar13;
  }
  lVar7 = 0x7fffffff;
  if (lVar6 < 0x7fffffff) {
    lVar7 = lVar6;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  uVar4 = 0x80000000;
  if (-0x80000000 < lVar7) {
    uVar4 = (undefined4)lVar7;
  }
  *(undefined4 *)param_1 = uVar4;
  *(float *)((longlong)param_1 + 4) = fVar12;
  return param_1;
}

