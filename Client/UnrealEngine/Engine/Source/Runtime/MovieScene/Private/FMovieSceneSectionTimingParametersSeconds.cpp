// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// StaticStruct @ 1461e4340

UScriptStruct * __cdecl FMovieSceneSectionTimingParametersSeconds::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSectionTimingParametersSeconds.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneSectionTimingParametersSeconds.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds,
                         (UObject *)pUVar1,L"MovieSceneSectionTimingParametersSeconds");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneSectionTimingParametersSeconds.OuterSingleton;
}

// AddFrameRateConversion @ 146205040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneSectionTimingParametersSeconds::AddFrameRateConversion
          (FMovieSceneSectionTimingParametersSeconds *this,FMovieSceneSequenceTransform *param_1,
          FFrameRate *param_2,FFrameRate *param_3)

{
  FMovieSceneTimeWarpFrameRate *pFVar1;
  undefined1 auStack_48 [32];
  FFrameRate local_28;
  FMovieSceneNumericVariant local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  FMovieSceneNumericVariant::FMovieSceneNumericVariant(&local_20,__real_3ff0000000000000);
  local_28.Denominator = (*param_2).Denominator * (*param_3).Numerator;
  local_28.Numerator = (*param_3).Denominator * (*param_2).Numerator;
  pFVar1 = FMovieSceneTimeWarpFrameRate::FMovieSceneTimeWarpFrameRate
                     ((FMovieSceneTimeWarpFrameRate *)&local_28,local_28);
  FMovieSceneTimeWarpVariant::Set((FMovieSceneTimeWarpVariant *)&local_20,pFVar1);
  local_28.Numerator = 0;
  local_28.Denominator = 0;
  FMovieSceneSequenceTransform::Add(param_1,(FFrameTime)0x0,(FMovieSceneTimeWarpVariant *)&local_20)
  ;
  return;
}

// AddInnerStartOffset @ 146205130

void __thiscall
FMovieSceneSectionTimingParametersSeconds::AddInnerStartOffset
          (FMovieSceneSectionTimingParametersSeconds *this,FMovieSceneSequenceTransform *param_1,
          FFrameTime *param_2)

{
  FMovieSceneTimeTransform local_18 [2];
  
  local_18[0].Offset = *param_2;
  local_18[0].TimeScale = 1.0;
  FMovieSceneSequenceTransform::Add(param_1,local_18);
  return;
}

// AddLoopingOrClampingAndReverse @ 146205420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneSectionTimingParametersSeconds::AddLoopingOrClampingAndReverse
          (FMovieSceneSectionTimingParametersSeconds *this,FMovieSceneSequenceTransform *param_1,
          double param_2,double param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  FFrameTime FVar3;
  double dVar4;
  double dVar5;
  undefined8 in_XMM2_Qb;
  undefined1 auVar6 [16];
  undefined1 auStack_88 [32];
  FMovieSceneTimeWarpLoopFloat local_68;
  float fStack_64;
  FMovieSceneNumericVariant local_58;
  ulonglong local_48;
  
  auVar6._8_8_ = in_XMM2_Qb;
  auVar6._0_8_ = param_2;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (this->bLoop == 0) {
    if (this->bClampToInnerRange == '\0') goto LAB_146205530;
    FMovieSceneNumericVariant::FMovieSceneNumericVariant(&local_58,__real_3ff0000000000000);
    local_68.Duration = (float)param_2;
    FMovieSceneTimeWarpVariant::Set
              ((FMovieSceneTimeWarpVariant *)&local_58,(FMovieSceneTimeWarpClampFloat *)&local_68);
  }
  else {
    FMovieSceneNumericVariant::FMovieSceneNumericVariant(&local_58,__real_3ff0000000000000);
    local_68.Duration = (float)param_2;
    FMovieSceneTimeWarpVariant::Set((FMovieSceneTimeWarpVariant *)&local_58,&local_68);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  auVar6 = roundpd(auVar6,auVar1,1);
  dVar5 = auVar6._0_8_;
  dVar4 = dVar5;
  if (__real_41dfffffffc00000 <= dVar5) {
    dVar4 = __real_41dfffffffc00000;
  }
  if (dVar4 <= __real_c1e0000000000000) {
    dVar4 = __real_c1e0000000000000;
  }
  fStack_64 = (float)(param_3 - dVar5);
  if (::FFrameTime::MaxSubframe <= (float)(param_3 - dVar5)) {
    fStack_64 = ::FFrameTime::MaxSubframe;
  }
  local_68.Duration = (float)(int)dVar4;
  if (fStack_64 <= 0.0) {
    fStack_64 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fStack_64) {
    fStack_64 = ::FFrameTime::MaxSubframe;
  }
  if (fStack_64 <= 0.0) {
    fStack_64 = 0.0;
  }
  FVar3.SubFrame = fStack_64;
  FVar3.FrameNumber.Value = (int)local_68.Duration;
  FMovieSceneSequenceTransform::Add(param_1,FVar3,(FMovieSceneTimeWarpVariant *)&local_58);
LAB_146205530:
  if (this->bReverse != '\0') {
    local_58.Data[0] = '\0';
    local_58.Data[1] = '\0';
    local_58.Data[2] = 0x80;
    local_58.Data[3] = 0xbf;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2;
    auVar6 = roundpd(auVar6,auVar2,1);
    dVar5 = auVar6._0_8_;
    dVar4 = dVar5;
    if (__real_41dfffffffc00000 <= dVar5) {
      dVar4 = __real_41dfffffffc00000;
    }
    if (dVar4 <= __real_c1e0000000000000) {
      dVar4 = __real_c1e0000000000000;
    }
    fStack_64 = (float)(param_2 - dVar5);
    if (::FFrameTime::MaxSubframe <= (float)(param_2 - dVar5)) {
      fStack_64 = ::FFrameTime::MaxSubframe;
    }
    local_68.Duration = (float)(int)dVar4;
    if (fStack_64 <= 0.0) {
      fStack_64 = 0.0;
    }
    if (::FFrameTime::MaxSubframe <= fStack_64) {
      fStack_64 = ::FFrameTime::MaxSubframe;
    }
    if (fStack_64 <= 0.0) {
      fStack_64 = 0.0;
    }
    local_58.WeakCustomGetter.WeakPtr.ObjectIndex = (int)fStack_64;
    local_58.Data._4_4_ = local_68.Duration;
    FMovieSceneSequenceTransform::Add(param_1,(FMovieSceneTimeTransform *)&local_58);
  }
  return;
}

// AddOffset @ 146205690

void __thiscall
FMovieSceneSectionTimingParametersSeconds::AddOffset
          (FMovieSceneSectionTimingParametersSeconds *this,FMovieSceneSequenceTransform *param_1,
          FFrameTime *param_2)

{
  FMovieSceneTimeTransform local_18 [2];
  
  local_18[0].Offset = *param_2;
  local_18[0].TimeScale = 1.0;
  FMovieSceneSequenceTransform::Add(param_1,local_18);
  return;
}

// AddPlayRate @ 146205c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneSectionTimingParametersSeconds::AddPlayRate
          (FMovieSceneSectionTimingParametersSeconds *this,FMovieSceneSequenceTransform *param_1)

{
  FMovieSceneNumericVariant *pFVar1;
  undefined1 auStack_58 [32];
  FMovieSceneNumericVariant local_38;
  FMovieSceneTimeWarpVariant local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  pFVar1 = FMovieSceneNumericVariant::ShallowCopy((FMovieSceneNumericVariant *)this,&local_38);
  local_28.Variant.Data = *&pFVar1->Data;
  local_28.Variant.WeakCustomGetter.WeakPtr = (pFVar1->WeakCustomGetter).WeakPtr;
  local_38.Data[0] = '\0';
  local_38.Data[1] = '\0';
  local_38.Data[2] = '\0';
  local_38.Data[3] = '\0';
  local_38.Data[4] = '\0';
  local_38.Data[5] = '\0';
  local_38.Data[6] = '\0';
  local_38.Data[7] = '\0';
  FMovieSceneSequenceTransform::Add(param_1,(FFrameTime)0x0,&local_28);
  return;
}

// AddPositionInOuterAsOffset @ 146205df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneSectionTimingParametersSeconds::AddPositionInOuterAsOffset
          (FMovieSceneSectionTimingParametersSeconds *this,FMovieSceneSequenceTransform *param_1,
          TRange<FFrameNumber> *param_2)

{
  code *pcVar1;
  FFrameTime FVar2;
  bool bVar3;
  uint uVar4;
  undefined1 auStack_88 [32];
  FMovieSceneTimeWarpClamp local_68 [2];
  uint local_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  FMovieSceneTimeTransform local_48;
  FMovieSceneNumericVariant local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  if ((param_2->LowerBound).Type.Value == '\x02') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar4 = -(param_2->LowerBound).Value.Value;
  if (this->bClampToOuterRange != '\0') {
    FMovieSceneNumericVariant::FMovieSceneNumericVariant(&local_38,__real_3ff0000000000000);
    TRange<FFrameNumber>::Size<FFrameNumber>(param_2);
    FMovieSceneTimeWarpVariant::Set((FMovieSceneTimeWarpVariant *)&local_38,local_68);
    uStack_5c = 0;
    FVar2.SubFrame = 0.0;
    FVar2.FrameNumber.Value = uVar4;
    local_60 = uVar4;
    FMovieSceneSequenceTransform::Add(param_1,FVar2,(FMovieSceneTimeWarpVariant *)&local_38);
  }
  uStack_54 = 0;
  local_48.Offset.SubFrame = 0.0;
  local_48.Offset.FrameNumber.Value = uVar4;
  local_48.TimeScale = 1.0;
  local_58 = uVar4;
  FMovieSceneSequenceTransform::Add(param_1,&local_48);
  return;
}

// MakeTransform @ 146223940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieSceneSequenceTransform * __thiscall
FMovieSceneSectionTimingParametersSeconds::MakeTransform
          (FMovieSceneSectionTimingParametersSeconds *this,
          FMovieSceneSequenceTransform *__return_storage_ptr__,FFrameRate *param_1,
          TRange<FFrameNumber> *param_2,double param_3,double param_4)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FFrameTime FVar6;
  bool bVar7;
  uchar uVar8;
  FMovieSceneSequenceTransform *pFVar9;
  FMovieSceneNumericVariant *pFVar10;
  FMovieSceneTimeWarpFrameRate *pFVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined1 in_XMM2 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_188 [36];
  FMovieSceneTimeWarpClamp local_164;
  FFrameTime local_160;
  undefined8 local_158;
  uint local_150;
  undefined4 uStack_14c;
  uint local_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 local_138;
  FMovieSceneTimeTransform local_128;
  FMovieSceneTimeTransform local_118;
  FMovieSceneNumericVariant local_108;
  FMovieSceneNumericVariant local_f8;
  FMovieSceneNumericVariant local_e8;
  FMovieSceneNumericVariant local_d8;
  FMovieSceneTimeWarpFrameRate local_c8;
  FMovieSceneTimeWarpVariant local_c0;
  FMovieSceneNumericVariant local_b0;
  ulonglong local_a0;
  
  local_a0 = __security_cookie.value ^ (ulonglong)auStack_188;
  (__return_storage_ptr__->LinearTransform).Offset.SubFrame = 0.0;
  (__return_storage_ptr__->NestedTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->NestedTransforms).ArrayNum = 0;
  (__return_storage_ptr__->NestedTransforms).ArrayMax = 0;
  (__return_storage_ptr__->LinearTransform).TimeScale = 1.0;
  (__return_storage_ptr__->LinearTransform).Offset.FrameNumber = 0;
  if (((param_2->LowerBound).Type.Value == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("OuterRange.HasLowerBound()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Sections\\MovieSceneSectionTimingParameters.cpp"
                         ,0x10,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FMovieSceneSequenceTransform *)(*pcVar2)();
    return pFVar9;
  }
  if (param_3 <= 0.0) {
    FMovieSceneNumericVariant::FMovieSceneNumericVariant(&local_108);
    FMovieSceneTimeWarpVariant::Set((FMovieSceneTimeWarpVariant *)&local_108,0.0);
    local_158 = 0;
    FMovieSceneSequenceTransform::Add
              (__return_storage_ptr__,(FFrameTime)0x0,(FMovieSceneTimeWarpVariant *)&local_108);
    return __return_storage_ptr__;
  }
  if (((param_2->LowerBound).Type.Value == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FMovieSceneSequenceTransform *)(*pcVar2)();
    return pFVar9;
  }
  dVar4 = __real_3ff0000000000000;
  uVar12 = -(param_2->LowerBound).Value.Value;
  if (this->bClampToOuterRange != '\0') {
    FMovieSceneNumericVariant::FMovieSceneNumericVariant(&local_f8,__real_3ff0000000000000);
    TRange<FFrameNumber>::Size<FFrameNumber>(param_2);
    FMovieSceneTimeWarpVariant::Set((FMovieSceneTimeWarpVariant *)&local_f8,&local_164);
    uStack_14c = 0;
    FVar6.SubFrame = 0.0;
    FVar6.FrameNumber.Value = uVar12;
    local_150 = uVar12;
    FMovieSceneSequenceTransform::Add
              (__return_storage_ptr__,FVar6,(FMovieSceneTimeWarpVariant *)&local_f8);
  }
  uStack_144 = 0;
  local_128.Offset.SubFrame = 0.0;
  local_128.Offset.FrameNumber.Value = uVar12;
  local_128.TimeScale = 1.0;
  local_148 = uVar12;
  FMovieSceneSequenceTransform::Add(__return_storage_ptr__,&local_128);
  pFVar10 = FMovieSceneNumericVariant::ShallowCopy((FMovieSceneNumericVariant *)this,&local_b0);
  local_140 = 0;
  local_c0.Variant.Data = *&pFVar10->Data;
  local_c0.Variant.WeakCustomGetter.WeakPtr = (pFVar10->WeakCustomGetter).WeakPtr;
  FMovieSceneSequenceTransform::Add(__return_storage_ptr__,(FFrameTime)0x0,&local_c0);
  FMovieSceneNumericVariant::FMovieSceneNumericVariant(&local_e8);
  FMovieSceneTimeWarpVariant::Set((FMovieSceneTimeWarpVariant *)&local_e8,param_4);
  local_138 = 0;
  FMovieSceneSequenceTransform::Add
            (__return_storage_ptr__,(FFrameTime)0x0,(FMovieSceneTimeWarpVariant *)&local_e8);
  FMovieSceneNumericVariant::FMovieSceneNumericVariant(&local_d8,dVar4);
  pFVar11 = FMovieSceneTimeWarpFrameRate::FMovieSceneTimeWarpFrameRate(&local_c8,*param_1);
  FMovieSceneTimeWarpVariant::Set((FMovieSceneTimeWarpVariant *)&local_d8,pFVar11);
  local_160.FrameNumber.Value = 0;
  local_160.SubFrame = 0.0;
  FMovieSceneSequenceTransform::Add
            (__return_storage_ptr__,(FFrameTime)0x0,(FMovieSceneTimeWarpVariant *)&local_d8);
  fVar1 = this->InnerStartOffset;
  dVar5 = (param_3 - (double)this->InnerEndOffset) - (double)fVar1;
  dVar4 = (double)(fVar1 + this->FirstLoopStartOffset);
  if ((((*(ulonglong *)(this->PlayRate).Variant.Data & 0xfff8000000000000) != 0xfff8000000000000) ||
      (uVar8 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this),
      uVar8 == 0xff)) &&
     (dVar3 = FMovieSceneTimeWarpVariant::AsFixedPlayRate(&this->PlayRate), dVar3 * param_4 < 0.0))
  {
    dVar4 = dVar4 + dVar5;
  }
  uVar12 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar14 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar14,uVar12) &&
      (double)CONCAT44(uVar14,uVar12) != __real_3e45798ee2308c3a) {
    local_118.TimeScale = 1.0;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = dVar4;
    auVar16 = roundpd(in_XMM2,auVar16,1);
    uVar13 = auVar16._0_4_;
    uVar15 = auVar16._4_4_;
    if (__real_41dfffffffc00000 <= auVar16._0_8_) {
      uVar13 = SUB84(__real_41dfffffffc00000,0);
      uVar15 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
    }
    local_160.SubFrame = (float)(dVar4 - auVar16._0_8_);
    if ((double)CONCAT44(uVar15,uVar13) <= __real_c1e0000000000000) {
      uVar13 = SUB84(__real_c1e0000000000000,0);
      uVar15 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
    }
    if (::FFrameTime::MaxSubframe <= local_160.SubFrame) {
      local_160.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (local_160.SubFrame <= 0.0) {
      local_160.SubFrame = 0.0;
    }
    if (::FFrameTime::MaxSubframe <= local_160.SubFrame) {
      local_160.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (local_160.SubFrame <= 0.0) {
      local_160.SubFrame = 0.0;
    }
    local_160.FrameNumber.Value = (int)(double)CONCAT44(uVar15,uVar13);
    local_118.Offset = local_160;
    FMovieSceneSequenceTransform::Add(__return_storage_ptr__,&local_118);
  }
  AddLoopingOrClampingAndReverse
            (this,__return_storage_ptr__,dVar5,
             (double)(float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000));
  return __return_storage_ptr__;
}

