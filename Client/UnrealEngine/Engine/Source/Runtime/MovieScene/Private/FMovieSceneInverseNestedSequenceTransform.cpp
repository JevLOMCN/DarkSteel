// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// StaticStruct @ 146167a20

UScriptStruct * __cdecl FMovieSceneInverseNestedSequenceTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneInverseNestedSequenceTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneInverseNestedSequenceTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform,
                         (UObject *)pUVar1,L"MovieSceneInverseNestedSequenceTransform");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneInverseNestedSequenceTransform.OuterSingleton;
}

// AsLinear @ 146194580

FMovieSceneTimeTransform * __thiscall
FMovieSceneInverseNestedSequenceTransform::AsLinear
          (FMovieSceneInverseNestedSequenceTransform *this,
          FMovieSceneTimeTransform *__return_storage_ptr__)

{
  FFrameTime FVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  FMovieSceneTimeTransform *pFVar5;
  float fVar6;
  
  fVar6 = FMovieSceneTimeWarpVariant::AsFixedPlayRateFloat(&this->TimeScale);
  fVar3 = __real_322bcc77;
  if ((float)((uint)fVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FMath::IsNearlyZero(PlayRate)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneSequenceTransform.cpp"
                       ,0x1c8,
                       L"Play rate cannot be zero! This should be expressed as a nullptr TimeScale with FLAG_Zero."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMovieSceneTimeTransform *)(*pcVar2)();
      return pFVar5;
    }
  }
  fVar6 = FMovieSceneTimeWarpVariant::AsFixedPlayRateFloat(&this->TimeScale);
  FVar1 = this->Offset;
  __return_storage_ptr__->TimeScale = fVar6;
  fVar6 = (float)((uint)fVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->Offset = FVar1;
  if (fVar6 <= fVar3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FMath::IsNearlyZero(TimeScale)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneTimeTransform.h"
                       ,0x2c,
                       L"It is invalid to create a linear transformation with a zero timescale. This case should be handled externally by FMovieSceneTimeWarpVariant and FLAG_Zero."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMovieSceneTimeTransform *)(*pcVar2)();
      return pFVar5;
    }
  }
  return __return_storage_ptr__;
}

// TransformTimeWithinRange @ 1461d9be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMovieSceneInverseNestedSequenceTransform::TransformTimeWithinRange
          (FMovieSceneInverseNestedSequenceTransform *this,FFrameTime param_1,
          TFunctionRef<bool___cdecl(FFrameTime)> *param_2,FFrameTime param_3,FFrameTime param_4)

{
  FFrameTime FVar1;
  uchar uVar2;
  byte bVar3;
  bool bVar4;
  undefined1 uVar5;
  FMovieSceneTimeWarpFixedFrame FVar6;
  FMovieSceneTimeWarpLoop FVar7;
  FMovieSceneTimeWarpClamp FVar8;
  int iVar9;
  FMovieSceneTimeWarpLoopFloat FVar10;
  uint uVar11;
  FMovieSceneTimeWarpClampFloat FVar12;
  FMovieSceneTimeWarpFrameRate FVar13;
  undefined4 extraout_var;
  undefined2 extraout_var_04;
  FFrameTime FVar14;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  UMovieSceneTimeWarpGetter *pUVar15;
  int iVar16;
  FFrameNumber FVar17;
  FFrameNumber FVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 in_XMM3 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  FFrameTime local_res20;
  undefined1 auStackY_c8 [32];
  FFrameTime local_98;
  FFrameTime local_90;
  undefined1 local_88 [16];
  FMovieSceneInverseNestedSequenceTransform *local_78;
  TFunctionRef<bool___cdecl(FFrameTime)> *local_70;
  FFrameTime local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  FVar17.Value = 0;
  local_60.FrameNumber.Value = 0;
  local_60.SubFrame = 0.0;
  local_res20.FrameNumber = param_3.FrameNumber.Value;
  local_90.SubFrame = param_3.SubFrame;
  fVar19 = local_90.SubFrame;
  local_78 = this;
  local_70 = param_2;
  if ((*(ulonglong *)(this->TimeScale).Variant.Data & 0xfff8000000000000) == 0xfff8000000000000) {
    uVar2 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this);
    bVar3 = uVar2 + 1;
    FVar14 = local_60;
    if (7 < bVar3) goto LAB_1461da336;
  }
  else {
    bVar3 = 0;
  }
  FVar14 = local_98;
  fVar33 = __real_3f000000;
  FVar17 = param_1.FrameNumber.Value;
  local_98.SubFrame = param_1.SubFrame;
  fVar28 = local_98.SubFrame;
  local_98 = param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar3) {
  case 0:
    AsLinear(this,(FMovieSceneTimeTransform *)local_88);
    FVar14 = ::operator*((FFrameTime)&local_98,(FMovieSceneTimeTransform *)param_1);
    local_60.FrameNumber = (*(FFrameTime *)FVar14).FrameNumber;
    FVar17.Value = local_60.FrameNumber.Value;
    FVar14 = *(FFrameTime *)FVar14;
    break;
  case 1:
    pUVar15 = FMovieSceneTimeWarpVariant::AsCustom(&this->TimeScale);
    if (pUVar15 == (UMovieSceneTimeWarpGetter *)0x0) {
      return true;
    }
    local_88._8_8_ = &local_78;
    local_88._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FMovieSceneInverseNestedSequenceTransform::TransformTimeWithinRange'::__l2::<lambda_1>,bool,FFrameTime>
         ::Call;
    uVar5 = (**(code **)(pUVar15->_padding_ + 0x2d8))(pUVar15,param_1,param_3,param_4);
    return (bool)uVar5;
  case 2:
    FVar14 = this->Offset;
    FVar6 = FMovieSceneTimeWarpVariant::AsFixedTime(&this->TimeScale);
    local_90.SubFrame = FVar14.SubFrame;
    local_90.SubFrame = local_90.SubFrame + 0.0;
    local_60.FrameNumber.Value =
         ((int)ROUND((local_90.SubFrame + local_90.SubFrame) - __real_3f000000) >> 1) +
         FVar14.FrameNumber.Value.Value + *(int *)CONCAT44(extraout_var,FVar6.FrameNumber.Value);
    iVar9 = (int)local_90.SubFrame;
    fVar33 = local_90.SubFrame;
    if ((iVar9 != -0x80000000) && ((float)iVar9 != local_90.SubFrame)) {
      auVar20._4_4_ = local_90.SubFrame;
      auVar20._0_4_ = local_90.SubFrame;
      auVar20._8_8_ = 0;
      uVar11 = movmskps(local_60.FrameNumber.Value,auVar20);
      fVar33 = (float)(int)(iVar9 - (uVar11 & 1));
    }
    local_60.SubFrame = local_90.SubFrame - fVar33;
    if (::FFrameTime::MaxSubframe <= local_90.SubFrame - fVar33) {
      local_60.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (local_60.SubFrame <= 0.0) {
      local_60.SubFrame = 0.0;
    }
    FVar17.Value = local_60.FrameNumber.Value;
    FVar14 = local_60;
    break;
  case 3:
    FVar13 = FMovieSceneTimeWarpVariant::AsFrameRate(&this->TimeScale);
    FMovieSceneTimeWarpFrameRate::GetFrameRate
              ((FMovieSceneTimeWarpFrameRate *)CONCAT26(extraout_var_04,FVar13));
    local_90.SubFrame = (this->Offset).SubFrame;
    fVar28 = local_90.SubFrame + local_98.SubFrame;
    local_90.FrameNumber.Value =
         ((int)ROUND((fVar28 + fVar28) - __real_3f000000) >> 1) + (this->Offset).FrameNumber.Value +
         FVar17.Value;
    iVar9 = (int)fVar28;
    fVar33 = fVar28;
    if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar28)) {
      auVar21._4_4_ = fVar28;
      auVar21._0_4_ = fVar28;
      auVar21._8_8_ = 0;
      uVar11 = movmskps(local_90.FrameNumber.Value,auVar21);
      fVar33 = (float)(int)(iVar9 - (uVar11 & 1));
    }
    local_90.SubFrame = fVar28 - fVar33;
    if (::FFrameTime::MaxSubframe <= fVar28 - fVar33) {
      local_90.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (local_90.SubFrame <= 0.0) {
      local_90.SubFrame = 0.0;
    }
    FVar14 = ConvertFrameTime((FFrameTime)local_88,(FFrameRate)local_90,(FFrameRate)0x100000001);
    local_60.FrameNumber = (*(FFrameTime *)FVar14).FrameNumber;
    FVar17.Value = local_60.FrameNumber.Value;
    FVar14 = *(FFrameTime *)FVar14;
    break;
  case 4:
    local_98 = FVar14;
    if (local_res20.FrameNumber.Value != 0x80000000) {
      local_98 = this->Offset;
      local_90.SubFrame = local_90.SubFrame + local_98.SubFrame;
      iVar9 = ((int)ROUND(local_90.SubFrame * __real_40000000 - __real_3f000000) >> 1) +
              local_98.FrameNumber.Value.Value;
      iVar16 = (int)local_90.SubFrame;
      fVar19 = local_90.SubFrame;
      if ((iVar16 != -0x80000000) && ((float)iVar16 != local_90.SubFrame)) {
        auVar22._4_4_ = local_90.SubFrame;
        auVar22._0_4_ = local_90.SubFrame;
        auVar22._8_8_ = 0;
        uVar11 = movmskps(iVar9,auVar22);
        fVar19 = (float)(int)(iVar16 - (uVar11 & 1));
      }
      local_res20.SubFrame = local_90.SubFrame - fVar19;
      local_res20.FrameNumber.Value = local_res20.FrameNumber.Value + iVar9;
      param_3 = local_res20;
    }
    if (param_4.FrameNumber.Value != 0x7fffffff) {
      local_98 = this->Offset;
      fVar32 = param_4.SubFrame + local_98.SubFrame;
      iVar9 = ((int)ROUND(fVar32 * __real_40000000 - __real_3f000000) >> 1) +
              local_98.FrameNumber.Value.Value;
      param_4.FrameNumber.Value = param_4.FrameNumber.Value + iVar9;
      iVar16 = (int)fVar32;
      fVar19 = fVar32;
      if ((iVar16 != -0x80000000) && ((float)iVar16 != fVar32)) {
        auVar23._4_4_ = fVar32;
        auVar23._0_4_ = fVar32;
        auVar23._8_8_ = 0;
        uVar11 = movmskps(iVar9,auVar23);
        fVar19 = (float)(int)(iVar16 - (uVar11 & 1));
      }
      param_4.SubFrame = fVar32 - fVar19;
    }
    FVar7 = FMovieSceneTimeWarpVariant::AsLoop(&this->TimeScale);
    local_88._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FMovieSceneInverseNestedSequenceTransform::TransformTimeWithinRange'::__l2::<lambda_1>,bool,FFrameTime>
         ::Call;
    local_88._8_8_ = &local_78;
    local_98 = this->Offset;
    fVar28 = local_98.SubFrame + fVar28;
    local_90.FrameNumber.Value =
         ((int)ROUND((fVar28 + fVar28) - fVar33) >> 1) + local_98.FrameNumber.Value.Value +
         FVar17.Value;
    iVar9 = (int)fVar28;
    fVar19 = fVar28;
    if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar28)) {
      auVar24._4_4_ = fVar28;
      auVar24._0_4_ = fVar28;
      auVar24._8_8_ = 0;
      uVar11 = movmskps(local_90.FrameNumber.Value,auVar24);
      fVar19 = (float)(int)(iVar9 - (uVar11 & 1));
    }
    FVar1.SubFrame = param_4.SubFrame;
    FVar1.FrameNumber.Value = param_4.FrameNumber.Value;
    local_90.SubFrame = fVar28 - fVar19;
    if (::FFrameTime::MaxSubframe <= fVar28 - fVar19) {
      local_90.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (local_90.SubFrame <= 0.0) {
      local_90.SubFrame = 0.0;
    }
    bVar4 = FMovieSceneTimeWarpLoop::InverseRemapTimeWithinRange
                      ((FMovieSceneTimeWarpLoop *)CONCAT44(extraout_var_00,FVar7.Duration.Value),
                       local_90,param_3,FVar1,(TFunctionRef<bool___cdecl(FFrameTime)> *)local_88);
    return bVar4;
  case 5:
    FVar18 = (this->Offset).FrameNumber;
    local_98.SubFrame = (this->Offset).SubFrame;
    fVar33 = local_98.SubFrame;
    if (local_98.SubFrame == 0.0) {
      uVar11 = -FVar18.Value;
      fVar32 = 0.0;
    }
    else {
      uVar11 = ~FVar18.Value;
      fVar32 = __real_3f800000 - local_98.SubFrame;
      if (::FFrameTime::MaxSubframe <= __real_3f800000 - local_98.SubFrame) {
        fVar32 = ::FFrameTime::MaxSubframe;
      }
      if (fVar32 <= 0.0) {
        fVar32 = 0.0;
      }
    }
    if (((int)uVar11 <= FVar17.Value) &&
       ((FVar14 = param_1, FVar17.Value != uVar11 || (FVar14 = param_1, fVar32 <= fVar28)))) break;
    FVar8 = FMovieSceneTimeWarpVariant::AsClamp(&this->TimeScale);
    auVar31 = roundps(in_XMM3,ZEXT416((uint)(0.0 - fVar33)),1);
    uVar11 = (int)auVar31._0_4_ + (*(int *)CONCAT44(extraout_var_01,FVar8.Max.Value) - FVar18.Value)
    ;
    if ((int)uVar11 < FVar17.Value) {
      return true;
    }
    FVar14 = param_1;
    if (FVar17.Value != uVar11) break;
    fVar33 = (0.0 - fVar33) - auVar31._0_4_;
    if (::FFrameTime::MaxSubframe <= fVar33) {
      fVar33 = ::FFrameTime::MaxSubframe;
    }
    if (fVar33 <= 0.0) {
      fVar33 = 0.0;
    }
    goto LAB_1461da2dd;
  case 6:
    local_98 = FVar14;
    if (local_res20.FrameNumber.Value != 0x80000000) {
      local_98 = this->Offset;
      local_90.SubFrame = local_90.SubFrame + local_98.SubFrame;
      iVar9 = ((int)ROUND(local_90.SubFrame * __real_40000000 - __real_3f000000) >> 1) +
              local_98.FrameNumber.Value.Value;
      iVar16 = (int)local_90.SubFrame;
      fVar19 = local_90.SubFrame;
      if ((iVar16 != -0x80000000) && ((float)iVar16 != local_90.SubFrame)) {
        auVar25._4_4_ = local_90.SubFrame;
        auVar25._0_4_ = local_90.SubFrame;
        auVar25._8_8_ = 0;
        uVar11 = movmskps(iVar9,auVar25);
        fVar19 = (float)(int)(iVar16 - (uVar11 & 1));
      }
      local_res20.SubFrame = local_90.SubFrame - fVar19;
      local_res20.FrameNumber.Value = local_res20.FrameNumber.Value + iVar9;
      param_3 = local_res20;
    }
    if (param_4.FrameNumber.Value != 0x7fffffff) {
      local_98 = this->Offset;
      fVar32 = param_4.SubFrame + local_98.SubFrame;
      iVar9 = ((int)ROUND(fVar32 * __real_40000000 - __real_3f000000) >> 1) +
              local_98.FrameNumber.Value.Value;
      param_4.FrameNumber.Value = param_4.FrameNumber.Value + iVar9;
      iVar16 = (int)fVar32;
      fVar19 = fVar32;
      if ((iVar16 != -0x80000000) && ((float)iVar16 != fVar32)) {
        auVar26._4_4_ = fVar32;
        auVar26._0_4_ = fVar32;
        auVar26._8_8_ = 0;
        uVar11 = movmskps(iVar9,auVar26);
        fVar19 = (float)(int)(iVar16 - (uVar11 & 1));
      }
      param_4.SubFrame = fVar32 - fVar19;
    }
    FVar10 = FMovieSceneTimeWarpVariant::AsLoopFloat(&this->TimeScale);
    local_88._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FMovieSceneInverseNestedSequenceTransform::TransformTimeWithinRange'::__l2::<lambda_1>,bool,FFrameTime>
         ::Call;
    local_88._8_8_ = &local_78;
    local_98 = this->Offset;
    fVar28 = local_98.SubFrame + fVar28;
    local_90.FrameNumber.Value =
         ((int)ROUND((fVar28 + fVar28) - fVar33) >> 1) + local_98.FrameNumber.Value.Value +
         FVar17.Value;
    iVar9 = (int)fVar28;
    fVar19 = fVar28;
    if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar28)) {
      auVar27._4_4_ = fVar28;
      auVar27._0_4_ = fVar28;
      auVar27._8_8_ = 0;
      uVar11 = movmskps(local_90.FrameNumber.Value,auVar27);
      fVar19 = (float)(int)(iVar9 - (uVar11 & 1));
    }
    FVar14.SubFrame = param_4.SubFrame;
    FVar14.FrameNumber.Value = param_4.FrameNumber.Value;
    local_90.SubFrame = fVar28 - fVar19;
    if (::FFrameTime::MaxSubframe <= fVar28 - fVar19) {
      local_90.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (local_90.SubFrame <= 0.0) {
      local_90.SubFrame = 0.0;
    }
    bVar4 = FMovieSceneTimeWarpLoopFloat::InverseRemapTimeWithinRange
                      ((FMovieSceneTimeWarpLoopFloat *)CONCAT44(extraout_var_02,FVar10.Duration),
                       local_90,param_3,FVar14,(TFunctionRef<bool___cdecl(FFrameTime)> *)local_88);
    return bVar4;
  case 7:
    FVar18 = (this->Offset).FrameNumber;
    local_98.SubFrame = (this->Offset).SubFrame;
    fVar33 = local_98.SubFrame;
    if (local_98.SubFrame == 0.0) {
      uVar11 = -FVar18.Value;
      fVar32 = 0.0;
    }
    else {
      uVar11 = ~FVar18.Value;
      fVar32 = __real_3f800000 - local_98.SubFrame;
      if (::FFrameTime::MaxSubframe <= __real_3f800000 - local_98.SubFrame) {
        fVar32 = ::FFrameTime::MaxSubframe;
      }
      if (fVar32 <= 0.0) {
        fVar32 = 0.0;
      }
    }
    if (((int)uVar11 <= FVar17.Value) &&
       ((FVar14 = param_1, FVar17.Value != uVar11 || (FVar14 = param_1, fVar32 <= fVar28)))) break;
    FVar12 = FMovieSceneTimeWarpVariant::AsClampFloat(&this->TimeScale);
    auVar31._8_8_ = 0;
    auVar31._0_8_ = (double)*(float *)CONCAT44(extraout_var_03,FVar12.Max);
    auVar31 = roundpd(in_XMM3,auVar31,1);
    dVar30 = auVar31._0_8_;
    auVar29._0_8_ = (double)*(float *)CONCAT44(extraout_var_03,FVar12.Max) - dVar30;
    auVar29._8_8_ = 0;
    if (__real_41dfffffffc00000 <= dVar30) {
      dVar30 = __real_41dfffffffc00000;
    }
    if (dVar30 <= __real_c1e0000000000000) {
      dVar30 = __real_c1e0000000000000;
    }
    fVar32 = (float)auVar29._0_8_;
    if (::FFrameTime::MaxSubframe <= (float)auVar29._0_8_) {
      fVar32 = ::FFrameTime::MaxSubframe;
    }
    if (fVar32 <= 0.0) {
      fVar32 = 0.0;
    }
    if (::FFrameTime::MaxSubframe <= fVar32) {
      fVar32 = ::FFrameTime::MaxSubframe;
    }
    if (fVar32 <= 0.0) {
      fVar32 = 0.0;
    }
    auVar31 = roundps(auVar29,ZEXT416((uint)(fVar32 - fVar33)),1);
    uVar11 = (int)auVar31._0_4_ + ((int)dVar30 - FVar18.Value);
    if ((int)uVar11 < FVar17.Value) {
      return true;
    }
    FVar14 = param_1;
    if (FVar17.Value != uVar11) break;
    fVar33 = (fVar32 - fVar33) - auVar31._0_4_;
    if (::FFrameTime::MaxSubframe <= fVar33) {
      fVar33 = ::FFrameTime::MaxSubframe;
    }
    if (fVar33 <= 0.0) {
      fVar33 = 0.0;
    }
LAB_1461da2dd:
    FVar14 = param_1;
    if (fVar33 < fVar28) {
      return true;
    }
  }
LAB_1461da336:
  local_60 = FVar14;
  local_98.SubFrame = local_60.SubFrame;
  if ((local_res20.FrameNumber.Value < FVar17.Value) ||
     ((FVar17.Value == local_res20.FrameNumber.Value && (fVar19 <= local_98.SubFrame)))) {
    local_90 = param_4;
    if ((FVar17.Value < param_4.FrameNumber.Value) ||
       ((FVar17.Value == param_4.FrameNumber.Value && (local_98.SubFrame <= param_4.SubFrame)))) {
      local_98 = local_60;
      uVar5 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_98);
      return (bool)uVar5;
    }
  }
  return true;
}

// TryTransformTime @ 1461daf90

TOptional<FFrameTime> * __thiscall
FMovieSceneInverseNestedSequenceTransform::TryTransformTime
          (FMovieSceneInverseNestedSequenceTransform *this,
          TOptional<FFrameTime> *__return_storage_ptr__,FFrameTime param_1,FFrameTime param_2)

{
  FInverseTransformTimeParams local_res10 [24];
  
  local_res10[0].Flags = Cycle|AnyDirection;
  TryTransformTime(this,__return_storage_ptr__,param_1,param_2,local_res10);
  return __return_storage_ptr__;
}

// TryTransformTime @ 1461dafc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FFrameTime> * __thiscall
FMovieSceneInverseNestedSequenceTransform::TryTransformTime
          (FMovieSceneInverseNestedSequenceTransform *this,
          TOptional<FFrameTime> *__return_storage_ptr__,FFrameTime param_1,FFrameTime param_2,
          FInverseTransformTimeParams *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  FFrameTime FVar3;
  uchar uVar4;
  byte bVar5;
  bool bVar6;
  FMovieSceneTimeWarpFixedFrame FVar7;
  FMovieSceneTimeWarpLoop FVar8;
  FFrameNumber FVar9;
  FMovieSceneTimeWarpClamp FVar10;
  FMovieSceneTimeWarpLoopFloat FVar11;
  uint uVar12;
  FMovieSceneTimeWarpClampFloat FVar13;
  FMovieSceneTimeWarpFrameRate FVar14;
  TOptional<FFrameTime> *pTVar15;
  FFrameTime FVar16;
  undefined4 extraout_var;
  undefined2 extraout_var_04;
  FFrameTime FVar17;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  UMovieSceneTimeWarpGetter *pUVar18;
  int iVar19;
  FFrameNumber FVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 in_XMM2 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 in_XMM3 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auStackY_108 [32];
  FFrameTime local_d8;
  FFrameTime local_d0;
  float fStack_c4;
  float fStack_bc;
  TOptional<FFrameTime> local_90;
  TOptional<FFrameTime> local_80;
  FFrameTime local_70;
  char local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [8];
  int local_48;
  float fStack_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if ((*(ulonglong *)(this->TimeScale).Variant.Data & 0xfff8000000000000) == 0xfff8000000000000) {
    uVar4 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this);
    bVar5 = uVar4 + 1;
    if (7 < bVar5) goto LAB_1461db14c;
  }
  else {
    bVar5 = 0;
  }
  FVar20 = param_1.FrameNumber.Value;
  local_d8.SubFrame = param_1.SubFrame;
  fVar31 = local_d8.SubFrame;
  local_d0.SubFrame = param_2.SubFrame;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar5) {
  case 0:
    fVar31 = FMovieSceneTimeWarpVariant::AsFixedPlayRateFloat(&this->TimeScale);
    if (((float)((uint)fVar31 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!FMath::IsNearlyZero(TimeScale)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneTimeTransform.h"
                           ,0x2c,
                           L"It is invalid to create a linear transformation with a zero timescale. This case should be handled externally by FMovieSceneTimeWarpVariant and FLAG_Zero."
                          ), bVar6)) {
      pcVar2 = (code *)swi(3);
      pTVar15 = (TOptional<FFrameTime> *)(*pcVar2)();
      return pTVar15;
    }
    FVar16 = ::operator*((FFrameTime)local_60,(FMovieSceneTimeTransform *)param_1);
    __return_storage_ptr__->TypedValue = *(FFrameTime *)FVar16;
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  case 1:
    pUVar18 = FMovieSceneTimeWarpVariant::AsCustom(&this->TimeScale);
    if ((pUVar18 != (UMovieSceneTimeWarpGetter *)0x0) &&
       ((**(code **)(pUVar18->_padding_ + 0x2d0))(pUVar18,&local_70,param_1,param_2),
       local_68 != '\0')) {
      FVar16 = this->Offset;
      fStack_bc = local_70.SubFrame;
      fStack_c4 = FVar16.SubFrame;
      auVar30 = roundps(in_XMM2,ZEXT416((uint)(fStack_bc - fStack_c4)),1);
      local_d8.SubFrame = (fStack_bc - fStack_c4) - auVar30._0_4_;
      iVar19 = (int)auVar30._0_4_;
      if (::FFrameTime::MaxSubframe <= local_d8.SubFrame) {
        local_d8.SubFrame = ::FFrameTime::MaxSubframe;
      }
      local_80.TypedValue = local_70;
      if (local_d8.SubFrame <= 0.0) {
        local_d8.SubFrame = 0.0;
      }
LAB_1461db5ae:
      __return_storage_ptr__->bIsSet = true;
      local_d8.FrameNumber.Value =
           iVar19 + (local_80.TypedValue.FrameNumber.Value.Value - FVar16.FrameNumber.Value);
      __return_storage_ptr__->TypedValue = local_d8;
      return __return_storage_ptr__;
    }
    break;
  case 2:
    FVar16 = this->Offset;
    FVar7 = FMovieSceneTimeWarpVariant::AsFixedTime(&this->TimeScale);
    local_d8.SubFrame = FVar16.SubFrame;
    local_d8.SubFrame = local_d8.SubFrame + 0.0;
    uVar12 = ((int)ROUND((local_d8.SubFrame + local_d8.SubFrame) - __real_3f000000) >> 1) +
             *(int *)CONCAT44(extraout_var,FVar7.FrameNumber.Value) + FVar16.FrameNumber.Value.Value
    ;
    if (FVar20.Value == uVar12) {
      iVar19 = (int)local_d8.SubFrame;
      fVar21 = local_d8.SubFrame;
      if ((iVar19 != -0x80000000) && ((float)iVar19 != local_d8.SubFrame)) {
        auVar22._4_4_ = local_d8.SubFrame;
        auVar22._0_4_ = local_d8.SubFrame;
        auVar22._8_8_ = 0;
        uVar12 = movmskps(uVar12,auVar22);
        fVar21 = (float)(int)(iVar19 - (uVar12 & 1));
      }
      fVar27 = local_d8.SubFrame - fVar21;
      if (::FFrameTime::MaxSubframe <= local_d8.SubFrame - fVar21) {
        fVar27 = ::FFrameTime::MaxSubframe;
      }
      if (fVar27 <= 0.0) {
        fVar27 = 0.0;
      }
      if (fVar31 == fVar27) goto LAB_1461db6bf;
    }
    break;
  case 3:
    FVar16 = this->Offset;
    FVar14 = FMovieSceneTimeWarpVariant::AsFrameRate(&this->TimeScale);
    FMovieSceneTimeWarpFrameRate::GetFrameRate
              ((FMovieSceneTimeWarpFrameRate *)CONCAT26(extraout_var_04,FVar14));
    FVar17 = ConvertFrameTime((FFrameTime)local_50,(FFrameRate)param_1,(FFrameRate)0x100000001);
    uVar1 = *(undefined8 *)FVar17;
    local_d8.SubFrame = (float)((ulonglong)uVar1 >> 0x20);
    local_d0.SubFrame = FVar16.SubFrame;
    auVar30 = roundps(in_XMM2,ZEXT416((uint)(local_d8.SubFrame - local_d0.SubFrame)),1);
    fVar31 = (local_d8.SubFrame - local_d0.SubFrame) - auVar30._0_4_;
    if (::FFrameTime::MaxSubframe <= fVar31) {
      fVar31 = ::FFrameTime::MaxSubframe;
    }
    __return_storage_ptr__->bIsSet = true;
    if (fVar31 <= 0.0) {
      fVar31 = 0.0;
    }
    FVar3.SubFrame = fVar31;
    FVar3.FrameNumber.Value = (int)auVar30._0_4_ + ((int)uVar1 - FVar16.FrameNumber.Value);
    __return_storage_ptr__->TypedValue = FVar3;
    return __return_storage_ptr__;
  case 4:
    FVar8 = FMovieSceneTimeWarpVariant::AsLoop(&this->TimeScale);
    local_d8.SubFrame = (this->Offset).SubFrame;
    local_d0.SubFrame = local_d8.SubFrame + local_d0.SubFrame;
    local_48 = (int)(this->Offset).FrameNumber;
    FVar9.Value = ((int)ROUND((local_d0.SubFrame + local_d0.SubFrame) - __real_3f000000) >> 1) +
                  param_2.FrameNumber.Value.Value + local_48;
    iVar19 = (int)local_d0.SubFrame;
    fVar21 = local_d0.SubFrame;
    if ((iVar19 != -0x80000000) && ((float)iVar19 != local_d0.SubFrame)) {
      auVar23._4_4_ = local_d0.SubFrame;
      auVar23._0_4_ = local_d0.SubFrame;
      auVar23._8_8_ = 0;
      uVar12 = movmskps(FVar9.Value,auVar23);
      fVar21 = (float)(int)(iVar19 - (uVar12 & 1));
    }
    fVar27 = local_d0.SubFrame - fVar21;
    if (::FFrameTime::MaxSubframe <= local_d0.SubFrame - fVar21) {
      fVar27 = ::FFrameTime::MaxSubframe;
    }
    if (fVar27 <= 0.0) {
      fVar27 = 0.0;
    }
    local_d8.SubFrame = local_d8.SubFrame + fVar31;
    local_48 = ((int)ROUND((local_d8.SubFrame + local_d8.SubFrame) - __real_3f000000) >> 1) +
               FVar20.Value + local_48;
    iVar19 = (int)local_d8.SubFrame;
    fVar31 = local_d8.SubFrame;
    if ((iVar19 != -0x80000000) && ((float)iVar19 != local_d8.SubFrame)) {
      auVar24._4_4_ = local_d8.SubFrame;
      auVar24._0_4_ = local_d8.SubFrame;
      auVar24._8_8_ = 0;
      uVar12 = movmskps(local_48,auVar24);
      fVar31 = (float)(int)(iVar19 - (uVar12 & 1));
    }
    FVar16.SubFrame = fVar27;
    FVar16.FrameNumber.Value = FVar9.Value;
    fVar21 = local_d8.SubFrame - fVar31;
    if (::FFrameTime::MaxSubframe <= local_d8.SubFrame - fVar31) {
      fVar21 = ::FFrameTime::MaxSubframe;
    }
    auVar30 = ZEXT416((uint)fVar21);
    if (fVar21 <= 0.0) {
      auVar30 = ZEXT816(0) << 0x20;
    }
    fStack_44 = auVar30._0_4_;
    FVar17.SubFrame = fStack_44;
    FVar17.FrameNumber.Value = local_48;
    FMovieSceneTimeWarpLoop::InverseRemapTimeCycled
              ((FMovieSceneTimeWarpLoop *)CONCAT44(extraout_var_00,FVar8.Duration.Value),&local_90,
               FVar17,FVar16,param_3);
    if (local_90.bIsSet != false) {
      FVar16 = this->Offset;
      local_d8.SubFrame = local_90.TypedValue.SubFrame;
      local_d0.SubFrame = FVar16.SubFrame;
      auVar30 = roundps(auVar30,ZEXT416((uint)(local_d8.SubFrame - local_d0.SubFrame)),1);
      local_d0.SubFrame = (local_d8.SubFrame - local_d0.SubFrame) - auVar30._0_4_;
      if (::FFrameTime::MaxSubframe <= local_d0.SubFrame) {
        local_d0.SubFrame = ::FFrameTime::MaxSubframe;
      }
      __return_storage_ptr__->bIsSet = true;
      if (local_d0.SubFrame <= 0.0) {
        local_d0.SubFrame = 0.0;
      }
      local_d0.FrameNumber.Value =
           (int)auVar30._0_4_ +
           (local_90.TypedValue.FrameNumber.Value.Value - FVar16.FrameNumber.Value);
      __return_storage_ptr__->TypedValue = local_d0;
      return __return_storage_ptr__;
    }
    break;
  case 5:
    if ((param_3->Flags & IgnoreClamps) != 0) goto LAB_1461db6bf;
    FVar9 = (this->Offset).FrameNumber;
    fStack_c4 = (this->Offset).SubFrame;
    if (fStack_c4 == 0.0) {
      uVar12 = -FVar9.Value;
      fVar31 = 0.0;
    }
    else {
      uVar12 = ~FVar9.Value;
      fVar31 = __real_3f800000 - fStack_c4;
      if (::FFrameTime::MaxSubframe <= __real_3f800000 - fStack_c4) {
        fVar31 = ::FFrameTime::MaxSubframe;
      }
      if (fVar31 <= 0.0) {
        fVar31 = 0.0;
      }
    }
    if ((FVar20.Value <= (int)uVar12) && ((FVar20.Value != uVar12 || (local_d8.SubFrame < fVar31))))
    break;
    FVar10 = FMovieSceneTimeWarpVariant::AsClamp(&this->TimeScale);
    auVar30 = roundps(in_XMM3,ZEXT416((uint)(0.0 - fStack_c4)),1);
    uVar12 = (int)auVar30._0_4_ + (*(int *)CONCAT44(extraout_var_01,FVar10.Max.Value) - FVar9.Value)
    ;
    if (FVar20.Value < (int)uVar12) goto LAB_1461db6bf;
    if (FVar20.Value != uVar12) break;
    fVar31 = (0.0 - fStack_c4) - auVar30._0_4_;
    if (::FFrameTime::MaxSubframe <= fVar31) {
      fVar31 = ::FFrameTime::MaxSubframe;
    }
    if (fVar31 <= 0.0) {
      fVar31 = 0.0;
    }
    goto joined_r0x0001461db6b9;
  case 6:
    FVar11 = FMovieSceneTimeWarpVariant::AsLoopFloat(&this->TimeScale);
    fStack_c4 = (this->Offset).SubFrame;
    local_d0.SubFrame = fStack_c4 + local_d0.SubFrame;
    local_d0.FrameNumber = (this->Offset).FrameNumber;
    local_d8.FrameNumber.Value =
         ((int)ROUND((local_d0.SubFrame + local_d0.SubFrame) - __real_3f000000) >> 1) +
         param_2.FrameNumber.Value.Value + local_d0.FrameNumber.Value;
    iVar19 = (int)local_d0.SubFrame;
    fVar21 = local_d0.SubFrame;
    if ((iVar19 != -0x80000000) && ((float)iVar19 != local_d0.SubFrame)) {
      auVar25._4_4_ = local_d0.SubFrame;
      auVar25._0_4_ = local_d0.SubFrame;
      auVar25._8_8_ = 0;
      uVar12 = movmskps(local_d8.FrameNumber.Value,auVar25);
      fVar21 = (float)(int)(iVar19 - (uVar12 & 1));
    }
    local_d8.SubFrame = local_d0.SubFrame - fVar21;
    if (::FFrameTime::MaxSubframe <= local_d0.SubFrame - fVar21) {
      local_d8.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (local_d8.SubFrame <= 0.0) {
      local_d8.SubFrame = 0.0;
    }
    fStack_c4 = fStack_c4 + fVar31;
    local_d0.FrameNumber.Value =
         ((int)ROUND((fStack_c4 + fStack_c4) - __real_3f000000) >> 1) + FVar20.Value +
         local_d0.FrameNumber.Value;
    iVar19 = (int)fStack_c4;
    fVar31 = fStack_c4;
    if ((iVar19 != -0x80000000) && ((float)iVar19 != fStack_c4)) {
      auVar26._4_4_ = fStack_c4;
      auVar26._0_4_ = fStack_c4;
      auVar26._8_8_ = 0;
      uVar12 = movmskps(local_d0.FrameNumber.Value,auVar26);
      fVar31 = (float)(int)(iVar19 - (uVar12 & 1));
    }
    fVar21 = fStack_c4 - fVar31;
    if (::FFrameTime::MaxSubframe <= fStack_c4 - fVar31) {
      fVar21 = ::FFrameTime::MaxSubframe;
    }
    auVar30 = ZEXT416((uint)fVar21);
    if (fVar21 <= 0.0) {
      auVar30 = ZEXT816(0) << 0x20;
    }
    local_d0.SubFrame = auVar30._0_4_;
    FMovieSceneTimeWarpLoopFloat::InverseRemapTimeCycled
              ((FMovieSceneTimeWarpLoopFloat *)CONCAT44(extraout_var_02,FVar11.Duration),&local_80,
               local_d0,local_d8,param_3);
    if (local_80.bIsSet != false) {
      FVar16 = this->Offset;
      fStack_c4 = local_80.TypedValue.SubFrame;
      local_d8.SubFrame = FVar16.SubFrame;
      auVar30 = roundps(auVar30,ZEXT416((uint)(fStack_c4 - local_d8.SubFrame)),1);
      local_d8.SubFrame = (fStack_c4 - local_d8.SubFrame) - auVar30._0_4_;
      iVar19 = (int)auVar30._0_4_;
      if (::FFrameTime::MaxSubframe <= local_d8.SubFrame) {
        local_d8.SubFrame = ::FFrameTime::MaxSubframe;
      }
      if (local_d8.SubFrame <= 0.0) {
        local_d8.SubFrame = 0.0;
      }
      goto LAB_1461db5ae;
    }
    break;
  case 7:
    if ((param_3->Flags & IgnoreClamps) != 0) goto LAB_1461db6bf;
    FVar9 = (this->Offset).FrameNumber;
    fStack_bc = (this->Offset).SubFrame;
    if (fStack_bc == 0.0) {
      uVar12 = -FVar9.Value;
      fVar31 = 0.0;
    }
    else {
      uVar12 = ~FVar9.Value;
      fVar31 = __real_3f800000 - fStack_bc;
      if (::FFrameTime::MaxSubframe <= __real_3f800000 - fStack_bc) {
        fVar31 = ::FFrameTime::MaxSubframe;
      }
      if (fVar31 <= 0.0) {
        fVar31 = 0.0;
      }
    }
    if ((FVar20.Value <= (int)uVar12) && ((FVar20.Value != uVar12 || (local_d8.SubFrame < fVar31))))
    break;
    FVar13 = FMovieSceneTimeWarpVariant::AsClampFloat(&this->TimeScale);
    auVar30._8_8_ = 0;
    auVar30._0_8_ = (double)*(float *)CONCAT44(extraout_var_03,FVar13.Max);
    auVar30 = roundpd(in_XMM3,auVar30,1);
    dVar29 = auVar30._0_8_;
    auVar28._0_8_ = (double)*(float *)CONCAT44(extraout_var_03,FVar13.Max) - dVar29;
    auVar28._8_8_ = 0;
    if (__real_41dfffffffc00000 <= dVar29) {
      dVar29 = __real_41dfffffffc00000;
    }
    if (dVar29 <= __real_c1e0000000000000) {
      dVar29 = __real_c1e0000000000000;
    }
    fVar31 = (float)auVar28._0_8_;
    if (::FFrameTime::MaxSubframe <= (float)auVar28._0_8_) {
      fVar31 = ::FFrameTime::MaxSubframe;
    }
    if (fVar31 <= 0.0) {
      fVar31 = 0.0;
    }
    if (::FFrameTime::MaxSubframe <= fVar31) {
      fVar31 = ::FFrameTime::MaxSubframe;
    }
    if (fVar31 <= 0.0) {
      fVar31 = 0.0;
    }
    auVar30 = roundps(auVar28,ZEXT416((uint)(fVar31 - fStack_bc)),1);
    uVar12 = (int)auVar30._0_4_ + ((int)dVar29 - FVar9.Value);
    if (FVar20.Value < (int)uVar12) goto LAB_1461db6bf;
    if (FVar20.Value != uVar12) break;
    fVar31 = (fVar31 - fStack_bc) - auVar30._0_4_;
    if (::FFrameTime::MaxSubframe <= fVar31) {
      fVar31 = ::FFrameTime::MaxSubframe;
    }
    if (fVar31 <= 0.0) {
      fVar31 = 0.0;
    }
joined_r0x0001461db6b9:
    if (local_d8.SubFrame <= fVar31) {
LAB_1461db6bf:
      __return_storage_ptr__->TypedValue = param_1;
      __return_storage_ptr__->bIsSet = true;
      return __return_storage_ptr__;
    }
  }
LAB_1461db14c:
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

