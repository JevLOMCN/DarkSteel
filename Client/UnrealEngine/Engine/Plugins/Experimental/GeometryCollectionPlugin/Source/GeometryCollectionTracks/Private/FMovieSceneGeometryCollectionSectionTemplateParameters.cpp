// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionTracks
// Functions: 2

// StaticStruct @ 14e7fb400

UScriptStruct * __cdecl FMovieSceneGeometryCollectionSectionTemplateParameters::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters
                         ,(UObject *)pUVar1,L"MovieSceneGeometryCollectionSectionTemplateParameters"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters.
         OuterSingleton;
}

// MapTimeToAnimation @ 14e7fe3d0

float __thiscall
FMovieSceneGeometryCollectionSectionTemplateParameters::MapTimeToAnimation
          (FMovieSceneGeometryCollectionSectionTemplateParameters *this,FFrameTime param_1,
          FFrameRate param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  bool bVar6;
  longlong lVar7;
  float fVar8;
  FFrameTime FVar9;
  longlong lVar10;
  longlong lVar11;
  FFrameTime FVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  double dVar18;
  FFrameTime local_res8;
  float fStackX_1c;
  float fStackX_24;
  
  uVar1 = (this->SectionStartTime).Value;
  local_res8.FrameNumber.Value = (this->SectionEndTime).Value - 1;
  local_res8.SubFrame = 0.0;
  FVar9 = local_res8;
  if ((param_1.FrameNumber.Value.Value < local_res8.FrameNumber.Value) ||
     ((param_1.FrameNumber.Value.Value == local_res8.FrameNumber.Value &&
      (local_res8.SubFrame = param_1.SubFrame, local_res8.SubFrame < 0.0)))) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  FVar12.SubFrame = 0.0;
  FVar12.FrameNumber.Value = uVar1;
  if (bVar6) {
    FVar9 = param_1;
  }
  if (((int)uVar1 < FVar9.FrameNumber.Value.Value) ||
     ((bVar6 = false, uVar1 == FVar9.FrameNumber.Value.Value &&
      (fStackX_24 = FVar9.SubFrame, bVar6 = false, 0.0 < fStackX_24)))) {
    bVar6 = true;
  }
  if (bVar6) {
    FVar12 = FVar9;
  }
  fVar15 = *(float *)&this->_padding_;
  if ((float)((uint)*(float *)&this->_padding_ & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_322bcc77) {
    fVar15 = __real_3f800000;
  }
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  lVar7 = this->_padding_;
  fStackX_1c = (float)param_2.Denominator;
  fVar8 = fStackX_1c;
  lVar10 = (longlong)(int)fStackX_1c;
  dVar5 = (double)(int)fStackX_1c;
  dVar4 = __real_3ff0000000000000 / (double)param_2.Numerator;
  fVar13 = FMovieSceneGeometryCollectionParams::GetSequenceLength
                     ((FMovieSceneGeometryCollectionParams *)this);
  lVar11 = (longlong)(int)fStackX_1c;
  fStackX_1c = FVar12.SubFrame;
  auVar17._0_8_ = (double)fVar13 - (dVar5 * 0.0 + (double)((iVar2 + (int)lVar7) * lVar10)) * dVar4;
  auVar17._8_8_ = 0;
  auVar17 = roundps(auVar17,ZEXT416((uint)(fStackX_1c - 0.0)),1);
  fVar13 = (fStackX_1c - 0.0) - auVar17._0_4_;
  if (::FFrameTime::MaxSubframe <= fVar13) {
    fVar13 = ::FFrameTime::MaxSubframe;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  dVar18 = ((double)((int)auVar17._0_4_ +
                    (FVar12.FrameNumber.Value.Value - (this->SectionStartTime).Value)) +
           (double)fVar13) * (double)fVar15;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar18;
  auVar17 = roundpd(auVar17,auVar3,1);
  uVar14 = auVar17._0_4_;
  uVar16 = auVar17._4_4_;
  if (__real_41dfffffffc00000 <= auVar17._0_8_) {
    uVar14 = SUB84(__real_41dfffffffc00000,0);
    uVar16 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
  }
  if ((double)CONCAT44(uVar16,uVar14) <= __real_c1e0000000000000) {
    uVar14 = SUB84(__real_c1e0000000000000,0);
    uVar16 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
  }
  fVar15 = (float)(dVar18 - auVar17._0_8_);
  if (::FFrameTime::MaxSubframe <= fVar15) {
    fVar15 = ::FFrameTime::MaxSubframe;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar15) {
    fVar15 = ::FFrameTime::MaxSubframe;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  return (float)((dVar5 * 0.0 + (double)((int)this->_padding_ * lVar10)) * dVar4 +
                (double)(float)(((double)(int)fVar8 * (double)fVar15 +
                                (double)(lVar11 * (int)(double)CONCAT44(uVar16,uVar14))) /
                               (double)param_2.Numerator));
}

