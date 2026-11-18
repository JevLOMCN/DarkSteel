// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 5

// StaticStruct @ 146723030

UScriptStruct * __cdecl FMovieSceneSkeletalAnimationParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSkeletalAnimationParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneSkeletalAnimationParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams,
                         (UObject *)pUVar1,L"MovieSceneSkeletalAnimationParams");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneSkeletalAnimationParams.OuterSingleton;
}

// FMovieSceneSkeletalAnimationParams @ 14675ff60

FMovieSceneSkeletalAnimationParams * __thiscall
FMovieSceneSkeletalAnimationParams::FMovieSceneSkeletalAnimationParams
          (FMovieSceneSkeletalAnimationParams *this)

{
  double dVar1;
  float fVar2;
  
  dVar1 = __real_3ff0000000000000;
  (this->Animation).field0_0x0.DebugPtr = (UAnimSequenceBase *)0x0;
  this->FirstLoopStartFrameOffset = 0;
  this->StartFrameOffset = 0;
  (this->EndFrameOffset).Value = 0;
  FMovieSceneNumericVariant::FMovieSceneNumericVariant(&(this->PlayRate).Variant,dVar1);
  (this->SlotName).ComparisonIndex = 0;
  (this->SlotName).Number = 0;
  (this->MirrorDataTable).field0_0x0.DebugPtr = (UMirrorDataTable *)0x0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->Weight);
  fVar2 = SkeletalDeprecatedMagicNumber;
  dVar1 = __real_3ff0000000000000;
  this->StartOffset_DEPRECATED = SkeletalDeprecatedMagicNumber;
  this->EndOffset_DEPRECATED = fVar2;
  (this->Animation).field0_0x0.DebugPtr = (UAnimSequenceBase *)0x0;
  (this->MirrorDataTable).field0_0x0.DebugPtr = (UMirrorDataTable *)0x0;
  FMovieSceneTimeWarpVariant::Set(&this->PlayRate,dVar1);
  this->bReverse = 0;
  this->SlotName = DefaultSlotName;
  (this->Weight).bHasDefaultValue = true;
  (this->Weight).DefaultValue = 1.0;
  this->bSkipAnimNotifiers = false;
  this->bForceCustomMode = false;
  this->SwapRootBone = SwapRootBone_None;
  this->bLinearPlaybackWhenScaled = false;
  return this;
}

// MakeTransform @ 1467a7360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieSceneSequenceTransform * __thiscall
FMovieSceneSkeletalAnimationParams::MakeTransform
          (FMovieSceneSkeletalAnimationParams *this,
          FMovieSceneSequenceTransform *__return_storage_ptr__,FFrameRate *param_1,
          TRange<FFrameNumber> *param_2,UAnimSequenceBase *param_3,bool param_4,bool param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  TRangeBound<FFrameNumber> TVar6;
  code *pcVar7;
  bool bVar8;
  FMovieSceneSequenceTransform *pFVar9;
  FMovieSceneNumericVariant *pFVar10;
  int iVar11;
  TEnumAsByte<ERangeBoundTypes::Type> TVar12;
  byte bVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  undefined1 in_XMM3 [16];
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auStackY_128 [32];
  FFrameNumber FStack_c4;
  FFrameNumber FStack_bc;
  FMovieSceneSectionTimingParametersSeconds local_90;
  FMovieSceneNumericVariant local_70;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if ((param_3 == (UAnimSequenceBase *)0x0) &&
     (param_3 = (this->Animation).field0_0x0.DebugPtr, param_3 == (UAnimSequenceBase *)0x0)) {
    (__return_storage_ptr__->LinearTransform).TimeScale = 1.0;
    (__return_storage_ptr__->LinearTransform).Offset.FrameNumber = 0;
    (__return_storage_ptr__->LinearTransform).Offset.SubFrame = 0.0;
    (__return_storage_ptr__->NestedTransforms).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->NestedTransforms).ArrayNum = 0;
    (__return_storage_ptr__->NestedTransforms).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  fVar16 = (float)(**(code **)(param_3->_padding_ + 0x2c0))();
  dVar17 = ((double)(*param_1).Numerator * (double)fVar16) / (double)(*param_1).Denominator;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar17;
  auVar19 = roundpd(in_XMM3,auVar19,1);
  dVar18 = auVar19._0_8_;
  dVar17 = dVar17 - dVar18;
  if (__real_41dfffffffc00000 <= dVar18) {
    dVar18 = __real_41dfffffffc00000;
  }
  if (dVar18 <= __real_c1e0000000000000) {
    dVar18 = __real_c1e0000000000000;
  }
  iVar11 = (int)dVar17;
  fVar20 = (float)dVar17 - (float)iVar11;
  if ((0.0 < fVar20) && (::FFrameTime::MaxSubframe <= fVar20)) {
    fVar20 = ::FFrameTime::MaxSubframe;
  }
  if (::FFrameTime::MaxSubframe <= fVar20) {
    fVar20 = ::FFrameTime::MaxSubframe;
  }
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  if (!param_5) {
    fVar20 = fVar20 + __real_3f000000;
    iVar1 = (this->EndFrameOffset).Value;
    iVar2 = (this->FirstLoopStartFrameOffset).Value;
    iVar3 = (this->StartFrameOffset).Value;
    TVar6 = param_2->UpperBound;
    TVar12 = TVar6.Type.Value;
    if ((TVar12.Value == '\x02') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InUpperBound.IsOpen()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                           ,0x44,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FMovieSceneSequenceTransform *)(*pcVar7)();
      return pFVar9;
    }
    lVar15 = 0;
    lVar14 = lVar15;
    if (TVar12.Value == '\x01') {
      lVar14 = 4;
    }
    iVar4 = *(int *)((longlong)
                     &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                      ::__l2::Offsets + lVar14);
    if ((TVar12.Value == '\x02') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FMovieSceneSequenceTransform *)(*pcVar7)();
      return pFVar9;
    }
    FStack_c4 = TVar6.Value.Value;
    TVar6 = param_2->LowerBound;
    TVar12 = TVar6.Type.Value;
    if ((TVar12.Value == '\x02') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InLowerBound.IsOpen()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                           ,0x2c,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FMovieSceneSequenceTransform *)(*pcVar7)();
      return pFVar9;
    }
    if (TVar12.Value == '\0') {
      lVar15 = 4;
    }
    iVar5 = *(int *)((longlong)
                     &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                      ::__l2::Offsets + lVar15);
    if ((TVar12.Value == '\x02') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FMovieSceneSequenceTransform *)(*pcVar7)();
      return pFVar9;
    }
    FStack_bc = TVar6.Value.Value;
    bVar13 = 2;
    if ((((FStack_c4.Value + iVar4) - FStack_bc.Value) - iVar5) + iVar1 + iVar3 + iVar2 <=
        (int)dVar18 + iVar11 + 1 + (int)fVar20) goto LAB_1467a7633;
  }
  bVar13 = 1;
LAB_1467a7633:
  pFVar10 = FMovieSceneNumericVariant::ShallowCopy(&(this->PlayRate).Variant,&local_70);
  local_90.PlayRate.Variant.Data = *&pFVar10->Data;
  local_90.PlayRate.Variant.WeakCustomGetter.WeakPtr = (pFVar10->WeakCustomGetter).WeakPtr;
  dVar17 = __real_3ff0000000000000 / (double)(*param_1).Numerator;
  iVar11 = (*param_1).Denominator;
  lVar14 = (longlong)iVar11;
  dVar18 = (double)iVar11;
  local_90.InnerStartOffset =
       (float)((dVar18 * 0.0 + (double)((this->StartFrameOffset).Value * lVar14)) * dVar17);
  local_90.InnerEndOffset =
       (float)((dVar18 * 0.0 + (double)((this->EndFrameOffset).Value * lVar14)) * dVar17);
  local_90._28_1_ = (this->bReverse | param_4 * '\x02') << 2 | bVar13;
  local_90.FirstLoopStartOffset =
       (float)((dVar18 * 0.0 + (double)((this->FirstLoopStartFrameOffset).Value * lVar14)) * dVar17)
  ;
  FMovieSceneSectionTimingParametersSeconds::MakeTransform
            (&local_90,__return_storage_ptr__,param_1,param_2,(double)fVar16,
             (double)param_3->RateScale);
  return __return_storage_ptr__;
}

// MapTimeToAnimation @ 1467a7800

double __thiscall
FMovieSceneSkeletalAnimationParams::MapTimeToAnimation
          (FMovieSceneSkeletalAnimationParams *this,UMovieSceneSection *param_1,FFrameTime param_2,
          FFrameRate param_3,UAnimSequenceBase *param_4)

{
  float fVar1;
  int iVar2;
  TRangeBound<FFrameNumber> TVar3;
  code *pcVar4;
  double dVar5;
  TEnumAsByte<ERangeBoundTypes::Type> TVar6;
  bool bVar7;
  FMovieSceneSequenceTransform *this_00;
  FFrameTime FVar8;
  FFrameNumber FVar9;
  FFrameNumber FVar10;
  FFrameRate local_res10;
  undefined1 local_res20 [8];
  TRange<FFrameNumber> local_58;
  FMovieSceneSequenceTransform local_48;
  
  TVar3 = (param_1->SectionRange).Value.LowerBound;
  FVar9 = TVar3.Value.Value;
  TVar6 = TVar3.Type.Value;
  if (TVar6.Value != '\x01') {
    if (TVar6.Value == '\x02') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        dVar5 = (double)(*pcVar4)();
        return dVar5;
      }
    }
    FVar9.Value = FVar9.Value + 1;
  }
  TVar3 = (param_1->SectionRange).Value.UpperBound;
  FVar10 = TVar3.Value.Value;
  TVar6 = TVar3.Type.Value;
  if (TVar6.Value == '\x01') {
    FVar10.Value = FVar10.Value + 1;
  }
  else if (TVar6.Value == '\x02') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      dVar5 = (double)(*pcVar4)();
      return dVar5;
    }
  }
  local_58.LowerBound.Type.Value = '\x01';
  local_58.UpperBound.Type.Value = '\0';
  local_res10 = param_3;
  local_58.LowerBound.Value.Value = FVar9.Value;
  local_58.UpperBound.Value.Value = FVar10.Value;
  this_00 = MakeTransform(this,&local_48,&local_res10,&local_58,param_4,true,false);
  FVar8 = FMovieSceneSequenceTransform::TransformTime(this_00,(FFrameTime)local_res20);
  fVar1 = *(float *)((longlong)FVar8 + 4);
  iVar2 = *(int *)FVar8;
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_48.NestedTransforms.AllocatorInstance.Data,
             local_48.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)local_48.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_48.NestedTransforms.AllocatorInstance.Data);
  }
  return (double)fVar1 + (double)iVar2;
}

// MapTimeToAnimation @ 1467a7960

double __thiscall
FMovieSceneSkeletalAnimationParams::MapTimeToAnimation
          (FMovieSceneSkeletalAnimationParams *this,FFrameNumber param_1,FFrameNumber param_2,
          FFrameTime param_3,FFrameRate param_4,UAnimSequenceBase *param_5)

{
  float fVar1;
  int iVar2;
  FMovieSceneSequenceTransform *this_00;
  FFrameTime FVar3;
  undefined1 local_58 [8];
  TRange<FFrameNumber> local_50;
  FMovieSceneSequenceTransform local_40;
  
  local_50.LowerBound.Type.Value = '\x01';
  local_50.UpperBound.Type.Value = '\0';
  local_50.LowerBound.Value.Value = param_1.Value;
  local_50.UpperBound.Value.Value = param_2.Value;
  this_00 = MakeTransform(this,&local_40,&param_4,&local_50,param_5,true,false);
  FVar3 = FMovieSceneSequenceTransform::TransformTime(this_00,(FFrameTime)local_58);
  fVar1 = *(float *)((longlong)FVar3 + 4);
  iVar2 = *(int *)FVar3;
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_40.NestedTransforms.AllocatorInstance.Data,
             local_40.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)local_40.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_40.NestedTransforms.AllocatorInstance.Data);
  }
  return (double)fVar1 + (double)iVar2;
}

