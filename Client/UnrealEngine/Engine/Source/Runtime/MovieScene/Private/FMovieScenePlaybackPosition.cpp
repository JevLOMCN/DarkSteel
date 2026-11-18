// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 7

// CheckInvariants @ 146196b40

void __thiscall FMovieScenePlaybackPosition::CheckInvariants(FMovieScenePlaybackPosition *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (((this->InputRate).Denominator < 1) || ((this->OutputRate).Denominator < 1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputRate.IsValid() && OutputRate.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieScenePlayback.cpp"
                       ,0xbd,
                       L"Invalid input or output rate. SetTimeBase must be called before any use of this class."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetCurrentPositionAsRange @ 1461b0900

FMovieSceneEvaluationRange * __thiscall
FMovieScenePlaybackPosition::GetCurrentPositionAsRange
          (FMovieScenePlaybackPosition *this,FMovieSceneEvaluationRange *__return_storage_ptr__)

{
  FFrameRate FVar1;
  code *pcVar2;
  bool bVar3;
  FMovieSceneEvaluationRange *pFVar4;
  FFrameTime local_res8;
  
  if (((this->InputRate).Denominator < 1) || ((this->OutputRate).Denominator < 1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputRate.IsValid() && OutputRate.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieScenePlayback.cpp"
                       ,0xbd,
                       L"Invalid input or output rate. SetTimeBase must be called before any use of this class."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMovieSceneEvaluationRange *)(*pcVar2)();
      return pFVar4;
    }
  }
  ConvertFrameTime((FFrameTime)&local_res8,(FFrameRate)this->CurrentPosition,this->InputRate);
  FVar1 = this->OutputRate;
  (__return_storage_ptr__->EvaluationRange).LowerBound.Type.Value = '\x01';
  (__return_storage_ptr__->EvaluationRange).LowerBound.Value = local_res8;
  (__return_storage_ptr__->EvaluationRange).UpperBound.Type.Value = '\x01';
  (__return_storage_ptr__->EvaluationRange).UpperBound.Value = local_res8;
  __return_storage_ptr__->CurrentFrameRate = FVar1;
  (__return_storage_ptr__->TimeOverride).Value = -0x80000000;
  __return_storage_ptr__->Direction = Forwards;
  return __return_storage_ptr__;
}

// GetLastRange @ 1461b1320

/* WARNING: Type propagation algorithm not settling */

TOptional<FMovieSceneEvaluationRange> * __thiscall
FMovieScenePlaybackPosition::GetLastRange
          (FMovieScenePlaybackPosition *this,
          TOptional<FMovieSceneEvaluationRange> *__return_storage_ptr__)

{
  TOptional<FMovieSceneEvaluationRange> *pTVar1;
  bool bVar2;
  undefined8 uVar3;
  FFrameRate FVar4;
  undefined3 uVar5;
  FFrameNumber FVar6;
  
  __return_storage_ptr__->bIsSet = false;
  bVar2 = (this->LastRange).bIsSet;
  __return_storage_ptr__->bIsSet = bVar2;
  if (bVar2 != false) {
    pTVar1 = &this->LastRange;
    uVar5 = *(undefined3 *)&(pTVar1->TypedValue).EvaluationRange.LowerBound.field_0x1;
    FVar6.Value = (pTVar1->TypedValue).EvaluationRange.LowerBound.Value.FrameNumber.Value;
    uVar3 = *(undefined8 *)&(this->LastRange).TypedValue.EvaluationRange.LowerBound.Value.SubFrame;
    (__return_storage_ptr__->TypedValue).EvaluationRange.LowerBound.Type =
         (TEnumAsByte<ERangeBoundTypes::Type>)
         (pTVar1->TypedValue).EvaluationRange.LowerBound.Type.Value;
    *(undefined3 *)&(__return_storage_ptr__->TypedValue).EvaluationRange.LowerBound.field_0x1 =
         uVar5;
    (__return_storage_ptr__->TypedValue).EvaluationRange.LowerBound.Value.FrameNumber =
         (FFrameNumber)FVar6.Value;
    *(undefined8 *)&(__return_storage_ptr__->TypedValue).EvaluationRange.LowerBound.Value.SubFrame =
         uVar3;
    FVar4 = (this->LastRange).TypedValue.CurrentFrameRate;
    (__return_storage_ptr__->TypedValue).EvaluationRange.UpperBound.Value =
         (this->LastRange).TypedValue.EvaluationRange.UpperBound.Value;
    (__return_storage_ptr__->TypedValue).CurrentFrameRate = FVar4;
    FVar6.Value = (this->LastRange).TypedValue.TimeOverride.Value;
    (__return_storage_ptr__->TypedValue).Direction = (this->LastRange).TypedValue.Direction;
    (__return_storage_ptr__->TypedValue).TimeOverride = (FFrameNumber)FVar6.Value;
  }
  return __return_storage_ptr__;
}

// JumpTo @ 1461bc3d0

/* WARNING: Type propagation algorithm not settling */

FMovieSceneEvaluationRange * __thiscall
FMovieScenePlaybackPosition::JumpTo
          (FMovieScenePlaybackPosition *this,FMovieSceneEvaluationRange *__return_storage_ptr__,
          FFrameTime param_1,EPlayDirection param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  FFrameTime FVar3;
  FFrameRate FVar4;
  undefined3 uVar5;
  FFrameNumber FVar6;
  EPlayDirection EVar7;
  bool bVar8;
  FMovieSceneEvaluationRange *pFVar9;
  TOptional<FMovieSceneEvaluationRange> *pTVar10;
  FFrameTime local_res8;
  FFrameTime local_res18;
  undefined4 local_58;
  FFrameNumber FStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  undefined8 uStack_38;
  FFrameTime local_30;
  FFrameRate FStack_28;
  EPlayDirection local_20;
  undefined4 uStack_1c;
  
  if (((this->InputRate).Denominator < 1) || ((this->OutputRate).Denominator < 1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputRate.IsValid() && OutputRate.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieScenePlayback.cpp"
                       ,0xbd,
                       L"Invalid input or output rate. SetTimeBase must be called before any use of this class."
                      );
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FMovieSceneEvaluationRange *)(*pcVar1)();
      return pFVar9;
    }
  }
  if ((this->PreviousPlayEvalPosition).bIsSet != false) {
    (this->PreviousPlayEvalPosition).bIsSet = false;
  }
  if (this->EvaluationType == FrameLocked) {
    local_res18 = (FFrameTime)((ulonglong)param_1 & 0xffffffff);
    param_1 = local_res18;
  }
  this->CurrentPosition = param_1;
  ConvertFrameTime((FFrameTime)&local_res8,(FFrameRate)param_1,this->InputRate);
  FStack_54 = local_res8.FrameNumber.Value;
  fStack_50 = local_res8.SubFrame;
  FStack_28 = this->OutputRate;
  pTVar10 = &this->LastRange;
  local_58 = CONCAT31(local_58._1_3_,1);
  uStack_4c = CONCAT31(uStack_4c._1_3_,1);
  local_30 = local_res8;
  uStack_1c = 0x80000000;
  local_40 = CONCAT44(FStack_54.Value,local_58);
  uStack_38 = CONCAT44(uStack_4c,fStack_50);
  if ((TOptional<FMovieSceneEvaluationRange> *)&local_40 != pTVar10) {
    (pTVar10->TypedValue).EvaluationRange.LowerBound.Type = '\x01';
    *(undefined3 *)&(pTVar10->TypedValue).EvaluationRange.LowerBound.field_0x1 = local_58._1_3_;
    (pTVar10->TypedValue).EvaluationRange.LowerBound.Value.FrameNumber =
         (FFrameNumber)FStack_54.Value;
    *(undefined8 *)&(this->LastRange).TypedValue.EvaluationRange.LowerBound.Value.SubFrame =
         uStack_38;
    (this->LastRange).TypedValue.EvaluationRange.UpperBound.Value = local_res8;
    (this->LastRange).TypedValue.CurrentFrameRate = FStack_28;
    (this->LastRange).TypedValue.Direction = param_2;
    (this->LastRange).TypedValue.TimeOverride = -0x80000000;
    (this->LastRange).bIsSet = true;
  }
  if ((this->LastRange).bIsSet == false) {
    local_20 = param_2;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FMovieSceneEvaluationRange *)(*pcVar1)();
      return pFVar9;
    }
  }
  uVar5 = *(undefined3 *)&(pTVar10->TypedValue).EvaluationRange.LowerBound.field_0x1;
  FVar6.Value = (pTVar10->TypedValue).EvaluationRange.LowerBound.Value.FrameNumber.Value;
  uVar2 = *(undefined8 *)&(this->LastRange).TypedValue.EvaluationRange.LowerBound.Value.SubFrame;
  FVar3 = (this->LastRange).TypedValue.EvaluationRange.UpperBound.Value;
  FVar4 = (this->LastRange).TypedValue.CurrentFrameRate;
  (__return_storage_ptr__->EvaluationRange).LowerBound.Type =
       (TEnumAsByte<ERangeBoundTypes::Type>)
       (pTVar10->TypedValue).EvaluationRange.LowerBound.Type.Value;
  *(undefined3 *)&(__return_storage_ptr__->EvaluationRange).LowerBound.field_0x1 = uVar5;
  (__return_storage_ptr__->EvaluationRange).LowerBound.Value.FrameNumber = (FFrameNumber)FVar6.Value
  ;
  *(undefined8 *)&(__return_storage_ptr__->EvaluationRange).LowerBound.Value.SubFrame = uVar2;
  EVar7 = (this->LastRange).TypedValue.Direction;
  FVar6.Value = (this->LastRange).TypedValue.TimeOverride.Value;
  (__return_storage_ptr__->EvaluationRange).UpperBound.Value = FVar3;
  __return_storage_ptr__->CurrentFrameRate = FVar4;
  __return_storage_ptr__->Direction = EVar7;
  __return_storage_ptr__->TimeOverride = (FFrameNumber)FVar6.Value;
  return __return_storage_ptr__;
}

// PlayTo @ 1461c2950

/* WARNING: Removing unreachable block (ram,0x0001461c2bf8) */
/* WARNING: Type propagation algorithm not settling */

FMovieSceneEvaluationRange * __thiscall
FMovieScenePlaybackPosition::PlayTo
          (FMovieScenePlaybackPosition *this,FMovieSceneEvaluationRange *__return_storage_ptr__,
          FFrameTime param_1,EPlayDirection param_2)

{
  TOptional<FMovieSceneEvaluationRange> *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  FFrameTime FVar4;
  FFrameRate FVar5;
  undefined3 uVar6;
  FFrameNumber FVar7;
  EPlayDirection EVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  FMovieSceneEvaluationRange *pFVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined1 in_XMM2 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  FFrameTime local_res18 [2];
  float fStack_ac;
  undefined4 local_a8;
  int iStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  FFrameNumber FStack_98;
  float fStack_94;
  FFrameRate FStack_90;
  EPlayDirection local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  int iStack_7c;
  float fStack_78;
  undefined4 local_74;
  int iStack_70;
  float fStack_6c;
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined1 local_5c [4];
  undefined8 uStack_58;
  undefined1 local_50 [4];
  undefined8 local_4c;
  undefined1 local_44 [4];
  undefined8 uStack_40;
  
  local_res18[0] = param_1;
  if ((((this->InputRate).Denominator < 1) || ((this->OutputRate).Denominator < 1)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InputRate.IsValid() && OutputRate.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieScenePlayback.cpp"
                          ,0xbd,
                          L"Invalid input or output rate. SetTimeBase must be called before any use of this class."
                         ), bVar10)) {
    pcVar2 = (code *)swi(3);
    pFVar12 = (FMovieSceneEvaluationRange *)(*pcVar2)();
    return pFVar12;
  }
  if (this->EvaluationType == FrameLocked) {
    local_res18[0] = (FFrameTime)((ulonglong)local_res18[0] & 0xffffffff);
    param_1 = local_res18[0];
  }
  lVar14 = 0x1c;
  if ((this->PreviousPlayEvalPosition).bIsSet == false) {
    lVar14 = 0x14;
  }
  ConvertFrameTime((FFrameTime)&local_res8,
                   *(FFrameRate *)((longlong)&(this->InputRate).Numerator + lVar14),this->InputRate)
  ;
  ConvertFrameTime((FFrameTime)local_res10,(FFrameRate)param_1,this->InputRate);
  bVar10 = (this->PreviousPlayEvalPosition).bIsSet;
  FStack_90 = this->OutputRate;
  iVar13 = (int)local_res8;
  iVar11 = local_res10._0_4_;
  fStack_94 = local_res10._4_4_;
  fVar17 = fStack_94;
  fStack_ac = (float)((ulonglong)local_res8 >> 0x20);
  iStack_a4 = iVar11;
  FStack_98.Value = iVar11;
  fVar9 = fStack_94;
  if ((iVar11 == iVar13) && (fStack_94 == fStack_ac)) {
    local_a8 = CONCAT31(local_a8._1_3_,1);
    uStack_9c = CONCAT31(uStack_9c._1_3_,1);
    fStack_a0 = fStack_94;
  }
  else if ((iVar11 < iVar13) || ((iVar11 == iVar13 && (fStack_94 < fStack_ac)))) {
    if (bVar10 == false) {
      local_44[0] = 1;
      uStack_40 = local_res8;
    }
    else {
      local_50[0] = 0;
      local_4c = local_res8;
    }
    fStack_a0 = fStack_94;
    puVar15 = (undefined8 *)local_50;
    if (bVar10 == false) {
      puVar15 = (undefined8 *)local_44;
    }
    local_74 = CONCAT31(local_74._1_3_,1);
    local_a8 = local_74;
    uStack_9c = (undefined4)*puVar15;
    FStack_98.Value = (int)((ulonglong)*puVar15 >> 0x20);
    fVar9 = *(float *)(puVar15 + 1);
    iStack_70 = iVar11;
    fStack_6c = fStack_94;
  }
  else {
    local_80 = CONCAT31(local_80._1_3_,1);
    puVar15 = (undefined8 *)local_5c;
    if (bVar10 == false) {
      local_5c[0] = 1;
      uStack_58 = local_res8;
    }
    else {
      local_68[0] = 0;
      local_64 = local_res8;
      puVar15 = (undefined8 *)local_68;
    }
    fStack_a0 = *(float *)(puVar15 + 1);
    local_a8 = (undefined4)*puVar15;
    iStack_a4 = (int)((ulonglong)*puVar15 >> 0x20);
    uStack_9c = local_80;
    iStack_7c = iVar11;
    fStack_78 = fStack_94;
  }
  fStack_94 = fVar9;
  uStack_84 = 0x80000000;
  auVar16 = roundps(in_XMM2,ZEXT416((uint)(fVar17 - fStack_ac)),1);
  fVar17 = (fVar17 - fStack_ac) - auVar16._0_4_;
  if (::FFrameTime::MaxSubframe <= fVar17) {
    fVar17 = ::FFrameTime::MaxSubframe;
  }
  iVar11 = (int)auVar16._0_4_ + (iVar11 - iVar13);
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  if (0 < iVar11) {
LAB_1461c2b46:
    local_88 = Forwards;
    goto LAB_1461c2b4b;
  }
  if (iVar11 == 0) {
    if (0.0 < fVar17) goto LAB_1461c2b46;
LAB_1461c2bf2:
    local_88 = param_2;
    if (0.0 <= fVar17) goto LAB_1461c2b4b;
  }
  else if (-1 < iVar11) goto LAB_1461c2bf2;
  local_88 = Backwards;
LAB_1461c2b4b:
  pTVar1 = &this->LastRange;
  if ((TOptional<FMovieSceneEvaluationRange> *)&local_a8 != pTVar1) {
    FVar4.SubFrame = fStack_94;
    FVar4.FrameNumber.Value = FStack_98.Value;
    (pTVar1->TypedValue).EvaluationRange.LowerBound.Type =
         (TEnumAsByte<ERangeBoundTypes::Type>)(char)local_a8;
    *(int3 *)&(pTVar1->TypedValue).EvaluationRange.LowerBound.field_0x1 =
         (int3)((uint)local_a8 >> 8);
    (pTVar1->TypedValue).EvaluationRange.LowerBound.Value.FrameNumber = (FFrameNumber)iStack_a4;
    *(ulonglong *)&(this->LastRange).TypedValue.EvaluationRange.LowerBound.Value.SubFrame =
         CONCAT44(uStack_9c,fStack_a0);
    (this->LastRange).TypedValue.EvaluationRange.UpperBound.Value = FVar4;
    (this->LastRange).TypedValue.CurrentFrameRate = FStack_90;
    (this->LastRange).TypedValue.Direction = local_88;
    (this->LastRange).TypedValue.TimeOverride = -0x80000000;
    (this->LastRange).bIsSet = true;
  }
  this->CurrentPosition = param_1;
  if ((TOptional<FFrameTime> *)local_res18 != &this->PreviousPlayEvalPosition) {
    (this->PreviousPlayEvalPosition).TypedValue = param_1;
    (this->PreviousPlayEvalPosition).bIsSet = true;
  }
  if (((this->LastRange).bIsSet == false) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar10)) {
    pcVar2 = (code *)swi(3);
    pFVar12 = (FMovieSceneEvaluationRange *)(*pcVar2)();
    return pFVar12;
  }
  uVar6 = *(undefined3 *)&(pTVar1->TypedValue).EvaluationRange.LowerBound.field_0x1;
  FVar7.Value = (pTVar1->TypedValue).EvaluationRange.LowerBound.Value.FrameNumber.Value;
  uVar3 = *(undefined8 *)&(this->LastRange).TypedValue.EvaluationRange.LowerBound.Value.SubFrame;
  FVar4 = (this->LastRange).TypedValue.EvaluationRange.UpperBound.Value;
  FVar5 = (this->LastRange).TypedValue.CurrentFrameRate;
  (__return_storage_ptr__->EvaluationRange).LowerBound.Type =
       (TEnumAsByte<ERangeBoundTypes::Type>)
       (pTVar1->TypedValue).EvaluationRange.LowerBound.Type.Value;
  *(undefined3 *)&(__return_storage_ptr__->EvaluationRange).LowerBound.field_0x1 = uVar6;
  (__return_storage_ptr__->EvaluationRange).LowerBound.Value.FrameNumber = (FFrameNumber)FVar7.Value
  ;
  *(undefined8 *)&(__return_storage_ptr__->EvaluationRange).LowerBound.Value.SubFrame = uVar3;
  EVar8 = (this->LastRange).TypedValue.Direction;
  FVar7.Value = (this->LastRange).TypedValue.TimeOverride.Value;
  (__return_storage_ptr__->EvaluationRange).UpperBound.Value = FVar4;
  __return_storage_ptr__->CurrentFrameRate = FVar5;
  __return_storage_ptr__->Direction = EVar8;
  __return_storage_ptr__->TimeOverride = (FFrameNumber)FVar7.Value;
  return __return_storage_ptr__;
}

// Reset @ 1461cd430

void __thiscall
FMovieScenePlaybackPosition::Reset(FMovieScenePlaybackPosition *this,FFrameTime param_1)

{
  this->CurrentPosition = param_1;
  if ((this->PreviousPlayEvalPosition).bIsSet != false) {
    (this->PreviousPlayEvalPosition).bIsSet = false;
  }
  if ((this->LastRange).bIsSet != false) {
    (this->LastRange).bIsSet = false;
  }
  return;
}

// SetTimeBase @ 1461d2ea0

void __thiscall
FMovieScenePlaybackPosition::SetTimeBase
          (FMovieScenePlaybackPosition *this,FFrameRate param_1,FFrameRate param_2,
          EMovieSceneEvaluationType param_3)

{
  int iVar1;
  FFrameTime FVar2;
  FFrameNumber local_res8;
  float fStackX_c;
  
  iVar1 = (this->InputRate).Denominator;
  if ((0 < iVar1) &&
     (((this->InputRate).Numerator != param_1.Numerator || (iVar1 != param_1.Denominator)))) {
    ConvertFrameTime((FFrameTime)&local_res8,(FFrameRate)this->CurrentPosition,this->InputRate);
    if (param_3 == FrameLocked) {
      fStackX_c = 0.0;
    }
    FVar2.SubFrame = fStackX_c;
    FVar2.FrameNumber.Value = local_res8.Value;
    this->CurrentPosition = FVar2;
    if ((this->PreviousPlayEvalPosition).bIsSet != false) {
      (this->PreviousPlayEvalPosition).bIsSet = false;
    }
    if ((this->LastRange).bIsSet != false) {
      (this->LastRange).bIsSet = false;
    }
  }
  this->InputRate = param_1;
  this->EvaluationType = param_3;
  this->OutputRate = param_2;
  return;
}

