// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// StaticStruct @ 14658e180

UScriptStruct * __cdecl FMovieSceneBaseCacheSectionTemplateParameters::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters,
                         (UObject *)pUVar1,L"MovieSceneBaseCacheSectionTemplateParameters");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters.
         OuterSingleton;
}

// MapTimeToAnimation @ 1466a8210

float __thiscall
FMovieSceneBaseCacheSectionTemplateParameters::MapTimeToAnimation
          (FMovieSceneBaseCacheSectionTemplateParameters *this,FMovieSceneBaseCacheParams *param_1,
          float param_2,FFrameTime param_3,FFrameRate param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  FFrameTime FVar7;
  FFrameTime FVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  double dVar15;
  undefined1 auVar16 [16];
  float fVar17;
  double dVar18;
  undefined1 in_XMM3 [16];
  undefined1 auVar19 [16];
  float fVar20;
  double dVar21;
  float fVar22;
  FFrameTime local_res8;
  float fStackX_14;
  
  dVar4 = (double)param_4.Numerator;
  iVar10 = param_4.Denominator;
  dVar15 = (dVar4 * (double)param_2) / (double)iVar10;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar15;
  auVar19 = roundpd(in_XMM3,auVar19,1);
  dVar18 = auVar19._0_8_;
  auVar16._0_8_ = dVar15 - dVar18;
  auVar16._8_8_ = 0;
  if (__real_41dfffffffc00000 <= dVar18) {
    dVar18 = __real_41dfffffffc00000;
  }
  if (dVar18 <= __real_c1e0000000000000) {
    dVar18 = __real_c1e0000000000000;
  }
  fVar20 = (float)auVar16._0_8_ - (float)(int)auVar16._0_8_;
  if ((0.0 < fVar20) && (::FFrameTime::MaxSubframe <= fVar20)) {
    fVar20 = ::FFrameTime::MaxSubframe;
  }
  local_res8.FrameNumber.Value = (this->SectionStartTime).Value;
  if (::FFrameTime::MaxSubframe <= fVar20) {
    fVar20 = ::FFrameTime::MaxSubframe;
  }
  iVar1 = (this->SectionEndTime).Value;
  iVar11 = (param_1->EndFrameOffset).Value + (param_1->StartFrameOffset).Value;
  param_4.Numerator = iVar1 - 1;
  param_4.Denominator = 0;
  FVar7 = (FFrameTime)param_4;
  local_res8.SubFrame = 0.0;
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  bVar6 = false;
  if ((param_3.FrameNumber.Value.Value < param_4.Numerator) ||
     ((bVar5 = bVar6, param_3.FrameNumber.Value.Value == param_4.Numerator &&
      (param_4.Denominator = (int)param_3.SubFrame, (float)param_4.Denominator < 0.0)))) {
    bVar5 = true;
  }
  if (bVar5) {
    FVar7 = param_3;
  }
  if ((local_res8.FrameNumber.Value < FVar7.FrameNumber.Value.Value) ||
     ((local_res8.FrameNumber.Value == FVar7.FrameNumber.Value.Value &&
      (fStackX_14 = FVar7.SubFrame, 0.0 < fStackX_14)))) {
    bVar6 = true;
  }
  FVar8 = local_res8;
  if (bVar6) {
    FVar8 = FVar7;
  }
  fVar13 = param_1->PlayRate;
  if ((float)((uint)param_1->PlayRate & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)
  {
    fVar13 = __real_3f800000;
  }
  lVar9 = (longlong)iVar10;
  dVar3 = (double)iVar10;
  dVar15 = __real_3ff0000000000000 / dVar4;
  param_4.Denominator = (int)FVar8.SubFrame;
  auVar19 = roundps(auVar16,ZEXT416((uint)((float)param_4.Denominator - 0.0)),1);
  fVar17 = ((float)param_4.Denominator - 0.0) - auVar19._0_4_;
  if (::FFrameTime::MaxSubframe <= fVar17) {
    fVar17 = ::FFrameTime::MaxSubframe;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  fVar22 = (float)((double)param_2 - (dVar3 * 0.0 + (double)(iVar11 * lVar9)) * dVar15);
  dVar21 = ((double)((int)auVar19._0_4_ +
                    (FVar8.FrameNumber.Value.Value - local_res8.FrameNumber.Value)) + (double)fVar17
           ) * (double)fVar13;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = dVar21;
  auVar19 = roundpd(auVar19,auVar2,1);
  uVar12 = auVar19._0_4_;
  uVar14 = auVar19._4_4_;
  if (__real_41dfffffffc00000 <= auVar19._0_8_) {
    uVar12 = SUB84(__real_41dfffffffc00000,0);
    uVar14 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
  }
  if ((double)CONCAT44(uVar14,uVar12) <= __real_c1e0000000000000) {
    uVar12 = SUB84(__real_c1e0000000000000,0);
    uVar14 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
  }
  fVar13 = (float)(dVar21 - auVar19._0_8_);
  if (::FFrameTime::MaxSubframe <= fVar13) {
    fVar13 = ::FFrameTime::MaxSubframe;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar13) {
    fVar13 = ::FFrameTime::MaxSubframe;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  fVar13 = (float)((double)(float)(((double)((longlong)iVar10 *
                                            (longlong)(int)(double)CONCAT44(uVar14,uVar12)) +
                                   (double)fVar13 * (double)iVar10) / dVar4) +
                  (dVar3 * 0.0 + (double)((param_1->FirstLoopStartFrameOffset).Value * lVar9)) *
                  dVar15);
  if ((0.0 < fVar22) &&
     (((int)(fVar20 + __real_3f000000) + (int)dVar18 + 1 + (int)auVar16._0_8_ <
       (iVar11 - local_res8.FrameNumber.Value) + iVar1 ||
      (__real_38d1b717 < (float)((uint)(fVar13 - fVar22) & __xmm_7fffffff7fffffff7fffffff7fffffff)))
     )) {
    fVar13 = FGenericPlatformMath::Fmod(fVar13,fVar22);
  }
  fVar20 = (float)((dVar3 * 0.0 + (double)((param_1->StartFrameOffset).Value * lVar9)) * dVar15 +
                  (double)fVar13);
  if (param_1->bReverse != 0) {
    fVar20 = param_2 - fVar20;
  }
  return fVar20;
}

