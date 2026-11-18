// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// StaticStruct @ 1461e4440

UScriptStruct * __cdecl FMovieSceneSectionTimingParametersFrames::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSectionTimingParametersFrames.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneSectionTimingParametersFrames.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames,
                         (UObject *)pUVar1,L"MovieSceneSectionTimingParametersFrames");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneSectionTimingParametersFrames.OuterSingleton;
}

// AddFrameRateConversion @ 146204f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneSectionTimingParametersFrames::AddFrameRateConversion
          (FMovieSceneSectionTimingParametersFrames *this,FMovieSceneSequenceTransform *param_1,
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

// AddInnerStartOffset @ 146205100

void __thiscall
FMovieSceneSectionTimingParametersFrames::AddInnerStartOffset
          (FMovieSceneSectionTimingParametersFrames *this,FMovieSceneSequenceTransform *param_1,
          FFrameTime *param_2)

{
  FMovieSceneTimeTransform local_18 [2];
  
  local_18[0].Offset = *param_2;
  local_18[0].TimeScale = 1.0;
  FMovieSceneSequenceTransform::Add(param_1,local_18);
  return;
}

// AddLoopingOrClampingAndReverse @ 146205320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneSectionTimingParametersFrames::AddLoopingOrClampingAndReverse
          (FMovieSceneSectionTimingParametersFrames *this,FMovieSceneSequenceTransform *param_1,
          FFrameNumber *param_2,FFrameNumber *param_3)

{
  FFrameTime FVar1;
  undefined1 auStack_68 [32];
  FMovieSceneTimeWarpLoop local_48;
  undefined4 uStack_44;
  FMovieSceneNumericVariant local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (this->bLoop == 0) {
    if (this->bClampToInnerRange == '\0') goto LAB_1462053c5;
    FMovieSceneNumericVariant::FMovieSceneNumericVariant(&local_38,__real_3ff0000000000000);
    local_48.Duration.Value = (FFrameNumber)param_2->Value;
    FMovieSceneTimeWarpVariant::Set
              ((FMovieSceneTimeWarpVariant *)&local_38,(FMovieSceneTimeWarpClamp *)&local_48);
  }
  else {
    FMovieSceneNumericVariant::FMovieSceneNumericVariant(&local_38,__real_3ff0000000000000);
    local_48.Duration.Value = (FFrameNumber)param_2->Value;
    FMovieSceneTimeWarpVariant::Set((FMovieSceneTimeWarpVariant *)&local_38,&local_48);
  }
  local_48.Duration.Value = (FFrameNumber)param_3->Value;
  uStack_44 = 0;
  FVar1.SubFrame = 0.0;
  FVar1.FrameNumber.Value = (int)local_48.Duration.Value;
  FMovieSceneSequenceTransform::Add(param_1,FVar1,(FMovieSceneTimeWarpVariant *)&local_38);
LAB_1462053c5:
  if (this->bReverse != '\0') {
    local_48.Duration.Value = (FFrameNumber)param_2->Value;
    uStack_44 = 0;
    local_38._4_8_ = ZEXT48((uint)local_48.Duration.Value);
    local_38.Data[0] = '\0';
    local_38.Data[1] = '\0';
    local_38.Data[2] = 0x80;
    local_38.Data[3] = 0xbf;
    FMovieSceneSequenceTransform::Add(param_1,(FMovieSceneTimeTransform *)&local_38);
  }
  return;
}

// AddOffset @ 146205660

void __thiscall
FMovieSceneSectionTimingParametersFrames::AddOffset
          (FMovieSceneSectionTimingParametersFrames *this,FMovieSceneSequenceTransform *param_1,
          FFrameTime *param_2)

{
  FMovieSceneTimeTransform local_18 [2];
  
  local_18[0].Offset = *param_2;
  local_18[0].TimeScale = 1.0;
  FMovieSceneSequenceTransform::Add(param_1,local_18);
  return;
}

// AddPlayRate @ 146205c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneSectionTimingParametersFrames::AddPlayRate
          (FMovieSceneSectionTimingParametersFrames *this,FMovieSceneSequenceTransform *param_1)

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

// AddPositionInOuterAsOffset @ 146205cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneSectionTimingParametersFrames::AddPositionInOuterAsOffset
          (FMovieSceneSectionTimingParametersFrames *this,FMovieSceneSequenceTransform *param_1,
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

// MakeTransform @ 146223580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieSceneSequenceTransform * __thiscall
FMovieSceneSectionTimingParametersFrames::MakeTransform
          (FMovieSceneSectionTimingParametersFrames *this,
          FMovieSceneSequenceTransform *__return_storage_ptr__,FFrameRate *param_1,
          TRange<FFrameNumber> *param_2,FFrameRate *param_3,TRange<FFrameNumber> *param_4)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  FFrameTime FVar4;
  FFrameRate FVar5;
  double dVar6;
  bool bVar7;
  uchar uVar8;
  FMovieSceneSequenceTransform *pFVar9;
  FMovieSceneNumericVariant *pFVar10;
  FMovieSceneTimeWarpFrameRate *pFVar11;
  FFrameTime FVar12;
  uint uVar13;
  FFrameNumber FVar14;
  int iVar15;
  FFrameNumber FVar16;
  undefined1 auStack_168 [40];
  FFrameTime local_140;
  FMovieSceneTimeWarpClamp local_138;
  FMovieSceneTimeWarpLoop local_134;
  FMovieSceneTimeWarpClamp local_130 [2];
  uint local_128;
  undefined4 uStack_124;
  uint local_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  int local_110;
  int iStack_10c;
  uint local_108;
  undefined4 uStack_104;
  uint local_100;
  undefined4 uStack_fc;
  uint local_f8;
  undefined4 uStack_f4;
  FMovieSceneTimeTransform local_e8;
  FMovieSceneTimeTransform local_d8;
  FMovieSceneTimeTransform local_c8;
  FMovieSceneNumericVariant local_b8;
  FMovieSceneNumericVariant local_a8;
  FMovieSceneNumericVariant local_98;
  FMovieSceneNumericVariant local_88;
  FMovieSceneTimeWarpFrameRate local_78;
  FMovieSceneTimeWarpVariant local_70;
  FMovieSceneNumericVariant local_60;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_168;
  (__return_storage_ptr__->LinearTransform).TimeScale = 1.0;
  (__return_storage_ptr__->LinearTransform).Offset.FrameNumber = 0;
  FVar16.Value = 0;
  (__return_storage_ptr__->LinearTransform).Offset.SubFrame = 0.0;
  (__return_storage_ptr__->NestedTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->NestedTransforms).ArrayNum = 0;
  (__return_storage_ptr__->NestedTransforms).ArrayMax = 0;
  if (((param_2->LowerBound).Type.Value == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("OuterRange.HasLowerBound()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Sections\\MovieSceneSectionTimingParameters.cpp"
                         ,0x80,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FMovieSceneSequenceTransform *)(*pcVar2)();
    return pFVar9;
  }
  if ((((param_4->LowerBound).Type.Value == '\x02') || ((param_4->UpperBound).Type.Value == '\x02'))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("InnerRange.HasLowerBound() && InnerRange.HasUpperBound()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Sections\\MovieSceneSectionTimingParameters.cpp"
                            ,0x81,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FMovieSceneSequenceTransform *)(*pcVar2)();
    return pFVar9;
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
  dVar6 = __real_3ff0000000000000;
  uVar13 = -(param_2->LowerBound).Value.Value;
  if (this->bClampToOuterRange != '\0') {
    FMovieSceneNumericVariant::FMovieSceneNumericVariant(&local_b8,__real_3ff0000000000000);
    TRange<FFrameNumber>::Size<FFrameNumber>(param_2);
    FMovieSceneTimeWarpVariant::Set((FMovieSceneTimeWarpVariant *)&local_b8,&local_138);
    uStack_124 = 0;
    FVar4.SubFrame = 0.0;
    FVar4.FrameNumber.Value = uVar13;
    local_128 = uVar13;
    FMovieSceneSequenceTransform::Add
              (__return_storage_ptr__,FVar4,(FMovieSceneTimeWarpVariant *)&local_b8);
  }
  uStack_11c = 0;
  local_e8.Offset.SubFrame = 0.0;
  local_e8.Offset.FrameNumber.Value = uVar13;
  local_e8.TimeScale = 1.0;
  local_120 = uVar13;
  FMovieSceneSequenceTransform::Add(__return_storage_ptr__,&local_e8);
  pFVar10 = FMovieSceneNumericVariant::ShallowCopy((FMovieSceneNumericVariant *)this,&local_60);
  local_118 = 0;
  local_70.Variant.Data = *&pFVar10->Data;
  local_70.Variant.WeakCustomGetter.WeakPtr = (pFVar10->WeakCustomGetter).WeakPtr;
  FMovieSceneSequenceTransform::Add(__return_storage_ptr__,(FFrameTime)0x0,&local_70);
  if ((param_3->Numerator != param_1->Numerator) || (param_3->Denominator != param_1->Denominator))
  {
    FMovieSceneNumericVariant::FMovieSceneNumericVariant(&local_a8,dVar6);
    local_110 = (*param_3).Denominator * (*param_1).Numerator;
    iStack_10c = (*param_1).Denominator * (*param_3).Numerator;
    FVar5.Denominator = iStack_10c;
    FVar5.Numerator = local_110;
    pFVar11 = FMovieSceneTimeWarpFrameRate::FMovieSceneTimeWarpFrameRate(&local_78,FVar5);
    FMovieSceneTimeWarpVariant::Set((FMovieSceneTimeWarpVariant *)&local_a8,pFVar11);
    local_140.FrameNumber.Value = 0;
    local_140.SubFrame = 0.0;
    FMovieSceneSequenceTransform::Add
              (__return_storage_ptr__,(FFrameTime)0x0,(FMovieSceneTimeWarpVariant *)&local_a8);
  }
  iVar15 = (this->InnerStartOffset).Value;
  if (((param_4->LowerBound).Type.Value == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FMovieSceneSequenceTransform *)(*pcVar2)();
    return pFVar9;
  }
  iVar1 = (this->InnerEndOffset).Value;
  iVar15 = (param_4->LowerBound).Value.Value + iVar15;
  if (((param_4->UpperBound).Type.Value == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FMovieSceneSequenceTransform *)(*pcVar2)();
    return pFVar9;
  }
  FVar14.Value = ((param_4->UpperBound).Value.Value - iVar1) - iVar15;
  uVar13 = FVar16.Value;
  if (this->bLoop != 0) {
    uVar13 = (this->FirstLoopStartOffset).Value;
  }
  if ((((*(ulonglong *)(this->PlayRate).Variant.Data & 0xfff8000000000000) != 0xfff8000000000000) ||
      (uVar8 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this),
      uVar8 == 0xff)) &&
     (dVar3 = FMovieSceneTimeWarpVariant::AsFixedPlayRate(&this->PlayRate), dVar3 < 0.0)) {
    FVar16.Value = FVar14.Value;
  }
  local_d8.TimeScale = 1.0;
  local_140.SubFrame = 0.0;
  local_140.FrameNumber.Value = uVar13 + FVar16.Value + iVar15;
  local_d8.Offset = local_140;
  FMovieSceneSequenceTransform::Add(__return_storage_ptr__,&local_d8);
  uVar13 = -iVar15;
  if (this->bLoop == 0) {
    if (this->bClampToInnerRange == '\0') goto LAB_1462238d6;
    FMovieSceneNumericVariant::FMovieSceneNumericVariant(&local_88,dVar6);
    local_130[0].Max.Value = (FFrameNumber)(FFrameNumber)FVar14.Value;
    FMovieSceneTimeWarpVariant::Set((FMovieSceneTimeWarpVariant *)&local_88,local_130);
    pFVar10 = &local_88;
    uStack_fc = 0;
    local_100 = uVar13;
  }
  else {
    FMovieSceneNumericVariant::FMovieSceneNumericVariant(&local_98,dVar6);
    local_134.Duration.Value = (FFrameNumber)(FFrameNumber)FVar14.Value;
    FMovieSceneTimeWarpVariant::Set((FMovieSceneTimeWarpVariant *)&local_98,&local_134);
    pFVar10 = &local_98;
    uStack_104 = 0;
    local_108 = uVar13;
  }
  FVar12.SubFrame = 0.0;
  FVar12.FrameNumber.Value = uVar13;
  FMovieSceneSequenceTransform::Add
            (__return_storage_ptr__,FVar12,(FMovieSceneTimeWarpVariant *)pFVar10);
LAB_1462238d6:
  if (this->bReverse != '\0') {
    uStack_f4 = 0;
    local_c8.Offset.SubFrame = 0.0;
    local_c8.Offset.FrameNumber.Value = FVar14.Value;
    local_c8.TimeScale = -1.0;
    local_f8 = FVar14.Value;
    FMovieSceneSequenceTransform::Add(__return_storage_ptr__,&local_c8);
  }
  return __return_storage_ptr__;
}

