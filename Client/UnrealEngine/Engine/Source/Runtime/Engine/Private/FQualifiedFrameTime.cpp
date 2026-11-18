// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FQualifiedFrameTime @ 147bb93a0

FQualifiedFrameTime * __thiscall
FQualifiedFrameTime::FQualifiedFrameTime
          (FQualifiedFrameTime *this,FTimecode *param_1,FFrameRate *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  double dVar12;
  float fVar13;
  
  fVar13 = param_1->Subframe;
  fVar2 = (float)param_2->Numerator / (float)param_2->Denominator;
  iVar9 = (int)ROUND(__real_bf000000 - (fVar2 + fVar2)) >> 1;
  iVar10 = -iVar9;
  iVar5 = iVar9 * -0xe10;
  if (iVar10 < 1) {
    iVar5 = 0;
  }
  else {
    iVar8 = param_1->Seconds + param_1->Frames / iVar10;
    iVar7 = param_1->Minutes + iVar8 / 0x3c;
    iVar3 = param_1->Hours + iVar7 / 0x3c;
    iVar7 = iVar7 % 0x3c;
    if (param_1->bDropFrameFormat == false) {
      iVar3 = iVar3 * iVar5;
    }
    else {
      iVar6 = 4;
      if (iVar10 < 0x1f) {
        iVar6 = 2;
      }
      iVar4 = iVar3 * 0x3c + iVar7;
      dVar12 = (double)iVar4 * __real_3fb999999999999a;
      if (0.0 <= dVar12) {
        auVar11._8_8_ = 0;
        auVar11._0_8_ = dVar12;
        auVar11 = roundpd(ZEXT816(0),auVar11,1);
        iVar3 = iVar3 * iVar5 - (iVar4 - (int)auVar11._0_8_) * iVar6;
      }
      else {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = dVar12;
        auVar11 = roundpd(ZEXT816(0),auVar1,2);
        iVar3 = iVar3 * iVar5 - (iVar4 - (int)auVar11._0_8_) * iVar6;
      }
    }
    iVar5 = (iVar8 % 0x3c) * iVar10 + iVar7 * iVar9 * -0x3c + param_1->Frames % iVar10 + iVar3;
  }
  (this->Time).SubFrame = fVar13;
  (this->Time).FrameNumber.Value = iVar5;
  if (::FFrameTime::MaxSubframe <= fVar13) {
    fVar13 = ::FFrameTime::MaxSubframe;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  (this->Time).SubFrame = fVar13;
  this->Rate = *param_2;
  return this;
}

