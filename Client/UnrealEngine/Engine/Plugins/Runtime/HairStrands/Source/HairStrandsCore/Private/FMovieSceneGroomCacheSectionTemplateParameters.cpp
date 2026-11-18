// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 4

// StaticStruct @ 14e0cb0e0

UScriptStruct * __cdecl FMovieSceneGroomCacheSectionTemplateParameters::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters,
                           (UObject *)pUVar1,L"MovieSceneGroomCacheSectionTemplateParameters");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters.
         OuterSingleton;
}

// FMovieSceneGroomCacheSectionTemplateParameters @ 14e0d0d50

FMovieSceneGroomCacheSectionTemplateParameters * __thiscall
FMovieSceneGroomCacheSectionTemplateParameters::FMovieSceneGroomCacheSectionTemplateParameters
          (FMovieSceneGroomCacheSectionTemplateParameters *this,FMovieSceneGroomCacheParams *param_1
          ,FFrameNumber param_2,FFrameNumber param_3)

{
  undefined4 uVar1;
  UGroomCache *pUVar2;
  longlong lVar3;
  
  pUVar2 = (param_1->GroomCache).field0_0x0.DebugPtr;
  this->_padding_ = (longlong)pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UGroomCache *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  lVar3 = this->_padding_;
  *(int *)&this->_padding_ = (param_1->FirstLoopStartFrameOffset).Value;
  *(int *)((longlong)&this->_padding_ + 4) = (param_1->StartFrameOffset).Value;
  *(int *)&this->_padding_ = (param_1->EndFrameOffset).Value;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->PlayRate;
  (this->SectionStartTime).Value = param_2.Value;
  *(uint *)&this->_padding_ = (uint)this->_padding_ ^ ((uint)lVar3 ^ param_1->bReverse) & 1;
  (this->SectionEndTime).Value = param_3.Value;
  return this;
}

// operator= @ 14e0d16b0

FMovieSceneGroomCacheSectionTemplateParameters * __thiscall
FMovieSceneGroomCacheSectionTemplateParameters::operator=
          (FMovieSceneGroomCacheSectionTemplateParameters *this,
          FMovieSceneGroomCacheSectionTemplateParameters *param_1)

{
  longlong lVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     ((UObject *)param_1->_padding_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1->_padding_);
  }
  this->_padding_ = param_1->_padding_;
  lVar1 = this->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(uint *)&this->_padding_ = (uint)this->_padding_ ^ ((uint)lVar1 ^ (uint)param_1->_padding_) & 1;
  (this->SectionStartTime).Value = (param_1->SectionStartTime).Value;
  (this->SectionEndTime).Value = (param_1->SectionEndTime).Value;
  return this;
}

// MapTimeToAnimation @ 14e0f3980

float __thiscall
FMovieSceneGroomCacheSectionTemplateParameters::MapTimeToAnimation
          (FMovieSceneGroomCacheSectionTemplateParameters *this,float param_1,FFrameTime param_2,
          FFrameRate param_3)

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
  FFrameTime local_res18;
  float fStackX_24;
  
  dVar4 = (double)param_3.Numerator;
  iVar10 = param_3.Denominator;
  dVar15 = (dVar4 * (double)param_1) / (double)iVar10;
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
  iVar1 = (this->SectionEndTime).Value;
  if (::FFrameTime::MaxSubframe <= fVar20) {
    fVar20 = ::FFrameTime::MaxSubframe;
  }
  local_res18.FrameNumber.Value = (this->SectionStartTime).Value;
  iVar11 = (int)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4);
  local_res8.FrameNumber.Value = iVar1 - 1;
  local_res8.SubFrame = 0.0;
  FVar7 = local_res8;
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  local_res18.SubFrame = 0.0;
  bVar6 = false;
  if ((param_2.FrameNumber.Value.Value < local_res8.FrameNumber.Value) ||
     ((bVar5 = bVar6, param_2.FrameNumber.Value.Value == local_res8.FrameNumber.Value &&
      (local_res8.SubFrame = param_2.SubFrame, local_res8.SubFrame < 0.0)))) {
    bVar5 = true;
  }
  if (bVar5) {
    FVar7 = param_2;
  }
  if ((local_res18.FrameNumber.Value < FVar7.FrameNumber.Value.Value) ||
     ((local_res18.FrameNumber.Value == FVar7.FrameNumber.Value.Value &&
      (fStackX_24 = FVar7.SubFrame, 0.0 < fStackX_24)))) {
    bVar6 = true;
  }
  fVar13 = *(float *)((longlong)&this->_padding_ + 4);
  FVar8 = local_res18;
  if (bVar6) {
    FVar8 = FVar7;
  }
  if ((float)((uint)fVar13 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    fVar13 = __real_3f800000;
  }
  lVar9 = (longlong)iVar10;
  dVar3 = (double)iVar10;
  dVar15 = __real_3ff0000000000000 / dVar4;
  local_res8.SubFrame = FVar8.SubFrame;
  auVar19 = roundps(auVar16,ZEXT416((uint)(local_res8.SubFrame - 0.0)),1);
  fVar17 = (local_res8.SubFrame - 0.0) - auVar19._0_4_;
  if (::FFrameTime::MaxSubframe <= fVar17) {
    fVar17 = ::FFrameTime::MaxSubframe;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  fVar22 = (float)((double)param_1 - (dVar3 * 0.0 + (double)(iVar11 * lVar9)) * dVar15);
  dVar21 = ((double)((int)auVar19._0_4_ +
                    (FVar8.FrameNumber.Value.Value - local_res18.FrameNumber.Value)) +
           (double)fVar17) * (double)fVar13;
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
                  (dVar3 * 0.0 + (double)((int)this->_padding_ * lVar9)) * dVar15);
  if ((0.0 < fVar22) &&
     (((int)(fVar20 + __real_3f000000) + (int)dVar18 + 1 + (int)auVar16._0_8_ <
       (iVar11 - local_res18.FrameNumber.Value) + iVar1 ||
      (__real_38d1b717 < (float)((uint)(fVar13 - fVar22) & __xmm_7fffffff7fffffff7fffffff7fffffff)))
     )) {
    fVar13 = FGenericPlatformMath::Fmod(fVar13,fVar22);
  }
  fVar20 = (float)((dVar3 * 0.0 + (double)(*(int *)((longlong)&this->_padding_ + 4) * lVar9)) *
                   dVar15 + (double)fVar13);
  if ((this->_padding_ & 1) != 0) {
    fVar20 = param_1 - fVar20;
  }
  return fVar20;
}

