// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 9

// GetEvaluationFieldTime @ 14613ab50

FFrameNumber __thiscall
FMovieSceneEvaluationRange::GetEvaluationFieldTime(FMovieSceneEvaluationRange *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *in_RDX;
  TEnumAsByte<ERangeBoundTypes::Type> TVar4;
  longlong lVar5;
  FFrameNumber FStackX_c;
  FFrameNumber FStackX_1c;
  TRange<FFrameNumber> local_18;
  
  TimeRangeToNumberRange(&local_18,&this->EvaluationRange);
  if (this->Direction == Forwards) {
    TVar4 = local_18.UpperBound.Type.Value;
    if (TVar4.Value == '\x02') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InUpperBound.IsOpen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                         ,0x44,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return (FFrameNumber)iVar3;
      }
    }
    lVar5 = 0;
    if (TVar4.Value == '\x01') {
      lVar5 = 4;
    }
    iVar3 = *(int *)((longlong)
                     &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                      ::__l2::Offsets + lVar5);
    if (TVar4.Value == '\x02') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return (FFrameNumber)iVar3;
      }
    }
    FStackX_c = local_18.UpperBound.Value.Value;
    FStackX_1c.Value = FStackX_c.Value + -1;
  }
  else {
    TVar4 = local_18.LowerBound.Type.Value;
    if (TVar4.Value == '\x02') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InLowerBound.IsOpen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                         ,0x2c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return (FFrameNumber)iVar3;
      }
    }
    lVar5 = 0;
    if (TVar4.Value == '\0') {
      lVar5 = 4;
    }
    iVar3 = *(int *)((longlong)
                     &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                      ::__l2::Offsets + lVar5);
    if (TVar4.Value == '\x02') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return (FFrameNumber)iVar3;
      }
    }
    FStackX_1c = local_18.LowerBound.Value.Value;
  }
  *in_RDX = FStackX_1c.Value + iVar3;
  return (FFrameNumber)(int)in_RDX;
}

// FMovieSceneEvaluationRange @ 14617eee0

/* WARNING: Removing unreachable block (ram,0x00014617f059) */

FMovieSceneEvaluationRange * __thiscall
FMovieSceneEvaluationRange::FMovieSceneEvaluationRange
          (FMovieSceneEvaluationRange *this,FFrameTime param_1,FFrameTime param_2,FFrameRate param_3
          ,bool param_4,EPlayDirection param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FFrameNumber FVar4;
  FFrameNumber FVar5;
  FFrameNumber FVar6;
  undefined1 in_XMM2 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fStackX_c;
  float fStackX_14;
  undefined4 local_38;
  undefined1 local_2c [4];
  FFrameTime FStack_28;
  undefined1 local_20 [4];
  FFrameTime FStack_1c;
  
  FVar5 = param_2.FrameNumber.Value;
  FVar4 = param_1.FrameNumber.Value;
  fStackX_c = param_1.SubFrame;
  fStackX_14 = param_2.SubFrame;
  if ((FVar4.Value == FVar5.Value) && (fStackX_c == fStackX_14)) {
    (this->EvaluationRange).LowerBound.Type.Value = '\x01';
    (this->EvaluationRange).LowerBound.Value = param_1;
    (this->EvaluationRange).UpperBound.Type.Value = '\x01';
    (this->EvaluationRange).UpperBound.Value = param_1;
  }
  else {
    if ((FVar4.Value < FVar5.Value) || ((FVar4.Value == FVar5.Value && (fStackX_c < fStackX_14)))) {
      if (param_4) {
        local_2c[0] = 1;
        FStack_28 = param_2;
      }
      else {
        local_20[0] = 0;
        FStack_1c = param_2;
      }
      (this->EvaluationRange).LowerBound.Type = '\x01';
      *(undefined3 *)&(this->EvaluationRange).LowerBound.field_0x1 = local_38._1_3_;
      (this->EvaluationRange).LowerBound.Value.FrameNumber = (FFrameNumber)FVar4.Value;
      (this->EvaluationRange).LowerBound.Value.SubFrame = fStackX_c;
      puVar3 = (undefined8 *)local_20;
      if (param_4) {
        puVar3 = (undefined8 *)local_2c;
      }
      local_38 = (undefined4)*puVar3;
      FVar6.Value = (int)((ulonglong)*puVar3 >> 0x20);
      fVar8 = *(float *)(puVar3 + 1);
    }
    else {
      local_38 = CONCAT31(local_38._1_3_,1);
      puVar3 = (undefined8 *)local_20;
      if (param_4) {
        local_20[0] = 1;
        FStack_1c = param_2;
      }
      else {
        local_2c[0] = 0;
        FStack_28 = param_2;
        puVar3 = (undefined8 *)local_2c;
      }
      uVar2 = *puVar3;
      fVar8 = *(float *)(puVar3 + 1);
      (this->EvaluationRange).LowerBound.Type = (TEnumAsByte<ERangeBoundTypes::Type>)(char)uVar2;
      *(int3 *)&(this->EvaluationRange).LowerBound.field_0x1 = (int3)((ulonglong)uVar2 >> 8);
      (this->EvaluationRange).LowerBound.Value.FrameNumber =
           (FFrameNumber)(int)((ulonglong)uVar2 >> 0x20);
      (this->EvaluationRange).LowerBound.Value.SubFrame = fVar8;
      FVar6.Value = FVar4.Value;
      fVar8 = fStackX_c;
    }
    (this->EvaluationRange).UpperBound.Type = (TEnumAsByte<ERangeBoundTypes::Type>)(char)local_38;
    *(int3 *)&(this->EvaluationRange).UpperBound.field_0x1 = (int3)((uint)local_38 >> 8);
    (this->EvaluationRange).UpperBound.Value.FrameNumber = (FFrameNumber)FVar6.Value;
    (this->EvaluationRange).UpperBound.Value.SubFrame = fVar8;
  }
  this->CurrentFrameRate = param_3;
  (this->TimeOverride).Value = -0x80000000;
  auVar7 = roundps(in_XMM2,ZEXT416((uint)(fStackX_c - fStackX_14)),1);
  fVar8 = (fStackX_c - fStackX_14) - auVar7._0_4_;
  if (::FFrameTime::MaxSubframe <= fVar8) {
    fVar8 = ::FFrameTime::MaxSubframe;
  }
  iVar1 = (int)auVar7._0_4_ + (FVar4.Value - FVar5.Value);
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (0 < iVar1) {
LAB_14617f03d:
    this->Direction = Forwards;
    return this;
  }
  if (iVar1 == 0) {
    if (0.0 < fVar8) goto LAB_14617f03d;
  }
  else if (iVar1 < 0) goto code_r0x00014617f075;
  if (0.0 <= fVar8) {
    this->Direction = param_5;
    return this;
  }
code_r0x00014617f075:
  this->Direction = Backwards;
  return this;
}

// FMovieSceneEvaluationRange @ 14617f090

FMovieSceneEvaluationRange * __thiscall
FMovieSceneEvaluationRange::FMovieSceneEvaluationRange
          (FMovieSceneEvaluationRange *this,FFrameTime param_1,FFrameRate param_2)

{
  (this->EvaluationRange).LowerBound.Type.Value = '\x01';
  (this->EvaluationRange).LowerBound.Value = param_1;
  (this->EvaluationRange).UpperBound.Type.Value = '\x01';
  (this->EvaluationRange).UpperBound.Value = param_1;
  this->CurrentFrameRate = param_2;
  (this->TimeOverride).Value = -0x80000000;
  this->Direction = Forwards;
  return this;
}

// FMovieSceneEvaluationRange @ 14617f0c0

FMovieSceneEvaluationRange * __thiscall
FMovieSceneEvaluationRange::FMovieSceneEvaluationRange
          (FMovieSceneEvaluationRange *this,TRange<FFrameTime> *param_1,FFrameRate param_2,
          EPlayDirection param_3)

{
  FFrameTime FVar1;
  undefined8 uVar2;
  TEnumAsByte<ERangeBoundTypes::Type> TVar3;
  undefined3 uVar4;
  FFrameNumber FVar5;
  
  TVar3.Value = (param_1->LowerBound).Type.Value;
  uVar4 = *(undefined3 *)&(param_1->LowerBound).field_0x1;
  FVar5.Value = (param_1->LowerBound).Value.FrameNumber.Value;
  uVar2 = *(undefined8 *)&(param_1->LowerBound).Value.SubFrame;
  this->CurrentFrameRate = param_2;
  FVar1 = (param_1->UpperBound).Value;
  (this->EvaluationRange).LowerBound.Type = (TEnumAsByte<ERangeBoundTypes::Type>)TVar3.Value;
  *(undefined3 *)&(this->EvaluationRange).LowerBound.field_0x1 = uVar4;
  (this->EvaluationRange).LowerBound.Value.FrameNumber = (FFrameNumber)FVar5.Value;
  *(undefined8 *)&(this->EvaluationRange).LowerBound.Value.SubFrame = uVar2;
  this->Direction = param_3;
  (this->EvaluationRange).UpperBound.Value = FVar1;
  (this->TimeOverride).Value = -0x80000000;
  return this;
}

// GetTraversedFrameNumberRange @ 1461b46b0

TRange<FFrameNumber> * __thiscall
FMovieSceneEvaluationRange::GetTraversedFrameNumberRange
          (FMovieSceneEvaluationRange *this,TRange<FFrameNumber> *__return_storage_ptr__)

{
  undefined1 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  TRangeBound<FFrameNumber> TVar4;
  bool bVar5;
  TRange<FFrameNumber> *pTVar6;
  undefined4 local_res8;
  undefined4 local_res10;
  char local_28;
  char local_1c;
  
  (__return_storage_ptr__->LowerBound).Type.Value = '\x02';
  (__return_storage_ptr__->LowerBound).Value.Value = 0;
  (__return_storage_ptr__->UpperBound).Value.Value = 0;
  (__return_storage_ptr__->UpperBound).Type.Value = '\x02';
  uVar1 = (this->EvaluationRange).LowerBound.Type;
  if (uVar1 != '\x02') {
    if ((this->EvaluationRange).LowerBound.Type.Value == '\x02') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TRange<FFrameNumber> *)(*pcVar3)();
        return pTVar6;
      }
    }
    local_res8 = CONCAT31(local_res8._1_3_,1);
    TVar4.Value.Value = (this->EvaluationRange).LowerBound.Value.FrameNumber.Value;
    TVar4._0_4_ = local_res8;
    __return_storage_ptr__->LowerBound = TVar4;
  }
  uVar2 = (this->EvaluationRange).UpperBound.Type;
  if (uVar2 != '\x02') {
    if ((this->EvaluationRange).UpperBound.Type.Value == '\x02') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TRange<FFrameNumber> *)(*pcVar3)();
        return pTVar6;
      }
    }
    __return_storage_ptr__->UpperBound =
         (TRangeBound<FFrameNumber>)
         (CONCAT44((this->EvaluationRange).UpperBound.Value.FrameNumber.Value + 1,local_res10) &
         0xffffffffffffff00);
  }
  return __return_storage_ptr__;
}

// NumberRangeToTimeRange @ 1461bf190

TRange<FFrameTime> * __cdecl
FMovieSceneEvaluationRange::NumberRangeToTimeRange
          (TRange<FFrameTime> *__return_storage_ptr__,TRange<FFrameNumber> *param_1)

{
  TRangeBound<FFrameNumber> TVar1;
  uint uVar2;
  TEnumAsByte<ERangeBoundTypes::Type> TVar3;
  uint local_18;
  
  (__return_storage_ptr__->LowerBound).Type.Value = '\x02';
  (__return_storage_ptr__->LowerBound).Value.FrameNumber = 0;
  (__return_storage_ptr__->LowerBound).Value.SubFrame = 0.0;
  (__return_storage_ptr__->UpperBound).Value.FrameNumber = 0;
  (__return_storage_ptr__->UpperBound).Value.SubFrame = 0.0;
  (__return_storage_ptr__->UpperBound).Type.Value = '\x02';
  TVar1 = param_1->LowerBound;
  TVar3 = TVar1.Type.Value;
  if (TVar3.Value != '\x02') {
    uVar2 = local_18 >> 8;
    local_18 = local_18 & 0xffffff00;
    if (TVar3.Value != '\0') {
      local_18 = CONCAT31((int3)uVar2,1);
    }
    (__return_storage_ptr__->LowerBound).Type = (TEnumAsByte<ERangeBoundTypes::Type>)(char)local_18;
    *(int3 *)&(__return_storage_ptr__->LowerBound).field_0x1 = (int3)(local_18 >> 8);
    (__return_storage_ptr__->LowerBound).Value.FrameNumber = (FFrameNumber)TVar1.Value.Value;
    (__return_storage_ptr__->LowerBound).Value.SubFrame = 0.0;
  }
  TVar1 = param_1->UpperBound;
  TVar3 = TVar1.Type.Value;
  if (TVar3.Value != '\x02') {
    uVar2 = local_18 >> 8;
    local_18 = local_18 & 0xffffff00;
    if (TVar3.Value != '\0') {
      local_18 = CONCAT31((int3)uVar2,1);
    }
    (__return_storage_ptr__->UpperBound).Type = (TEnumAsByte<ERangeBoundTypes::Type>)(char)local_18;
    *(int3 *)&(__return_storage_ptr__->UpperBound).field_0x1 = (int3)(local_18 >> 8);
    (__return_storage_ptr__->UpperBound).Value.FrameNumber = (FFrameNumber)TVar1.Value.Value;
    (__return_storage_ptr__->UpperBound).Value.SubFrame = 0.0;
  }
  return __return_storage_ptr__;
}

// ResetRange @ 1461cda10

void __thiscall
FMovieSceneEvaluationRange::ResetRange(FMovieSceneEvaluationRange *this,TRange<FFrameTime> *param_1)

{
  undefined8 uVar1;
  undefined3 uVar2;
  FFrameNumber FVar3;
  undefined1 local_res8 [8];
  
  if ((this->TimeOverride).Value != -0x80000000) {
    `FMovieSceneEvaluationRange::ResetRange'::__l2::<lambda_1>::operator()(local_res8);
  }
  uVar2 = *(undefined3 *)&(param_1->LowerBound).field_0x1;
  FVar3.Value = (param_1->LowerBound).Value.FrameNumber.Value;
  uVar1 = *(undefined8 *)&(param_1->LowerBound).Value.SubFrame;
  (this->EvaluationRange).LowerBound.Type =
       (TEnumAsByte<ERangeBoundTypes::Type>)(param_1->LowerBound).Type.Value;
  *(undefined3 *)&(this->EvaluationRange).LowerBound.field_0x1 = uVar2;
  (this->EvaluationRange).LowerBound.Value.FrameNumber = (FFrameNumber)FVar3.Value;
  *(undefined8 *)&(this->EvaluationRange).LowerBound.Value.SubFrame = uVar1;
  (this->EvaluationRange).UpperBound.Value = (param_1->UpperBound).Value;
  return;
}

// TimeRangeToNumberRange @ 1461d5d80

TRange<FFrameNumber> * __cdecl
FMovieSceneEvaluationRange::TimeRangeToNumberRange
          (TRange<FFrameNumber> *__return_storage_ptr__,TRange<FFrameTime> *param_1)

{
  FFrameTime *pFVar1;
  undefined1 uVar2;
  code *pcVar3;
  TRangeBound<FFrameNumber> TVar4;
  bool bVar5;
  bool bVar6;
  TRange<FFrameNumber> *pTVar7;
  FFrameTime FVar8;
  FFrameNumber FVar9;
  undefined4 local_res8;
  float fStackX_14;
  undefined4 local_res18;
  FFrameTime local_78 [2];
  undefined8 local_68;
  float local_60;
  undefined8 local_5c;
  float local_54;
  undefined8 local_50;
  float local_48;
  char local_44;
  
  (__return_storage_ptr__->LowerBound).Type.Value = '\x02';
  (__return_storage_ptr__->LowerBound).Value.Value = 0;
  bVar5 = false;
  (__return_storage_ptr__->UpperBound).Value.Value = 0;
  (__return_storage_ptr__->UpperBound).Type.Value = '\x02';
  local_68._0_1_ = (param_1->UpperBound).Type;
  local_68._1_3_ = *(undefined3 *)&(param_1->UpperBound).field_0x1;
  local_68._4_4_ = (param_1->UpperBound).Value.FrameNumber;
  local_60 = (param_1->UpperBound).Value.SubFrame;
  if ((undefined1)local_68 == '\x02') {
    FVar9.Value = local_78[0].FrameNumber.Value;
    goto LAB_1461d5f29;
  }
  if ((param_1->UpperBound).Type.Value == '\x02') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TRange<FFrameNumber> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pFVar1 = &(param_1->UpperBound).Value;
  if (pFVar1 == local_78) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TRange<FFrameNumber> *)(*pcVar3)();
      return pTVar7;
    }
  }
  else {
    local_78[0] = *pFVar1;
  }
  bVar5 = pFVar1 != local_78;
  if (local_78[0].SubFrame == 0.0) {
    local_5c._0_1_ = (param_1->UpperBound).Type;
    local_5c._1_3_ = *(undefined3 *)&(param_1->UpperBound).field_0x1;
    local_5c._4_4_ = (param_1->UpperBound).Value.FrameNumber;
    local_54 = (param_1->UpperBound).Value.SubFrame;
    if ((undefined1)local_5c == '\x01') goto LAB_1461d5e77;
    FVar9.Value = local_78[0].FrameNumber.Value;
  }
  else {
LAB_1461d5e77:
    if (pFVar1 == local_78) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TRange<FFrameNumber> *)(*pcVar3)();
        return pTVar7;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TRange<FFrameNumber> *)(*pcVar3)();
        return pTVar7;
      }
    }
    FVar9.Value = local_78[0].FrameNumber.Value + 1;
  }
  if (pFVar1 == local_78) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TRange<FFrameNumber> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->UpperBound =
       (TRangeBound<FFrameNumber>)(CONCAT44(FVar9.Value,local_res8) & 0xffffffffffffff00);
LAB_1461d5f29:
  local_50._0_1_ = (param_1->LowerBound).Type;
  local_50._1_3_ = *(undefined3 *)&(param_1->LowerBound).field_0x1;
  local_50._4_4_ = (param_1->LowerBound).Value.FrameNumber;
  local_48 = (param_1->LowerBound).Value.SubFrame;
  if ((undefined1)local_50 != '\x02') {
    if ((param_1->LowerBound).Type.Value == '\x02') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TRange<FFrameNumber> *)(*pcVar3)();
        return pTVar7;
      }
    }
    FVar8 = (param_1->LowerBound).Value;
    fStackX_14 = FVar8.SubFrame;
    if ((fStackX_14 == 0.0) && (uVar2 = (param_1->LowerBound).Type, uVar2 != '\0')) {
      FVar8 = (FFrameTime)((ulonglong)FVar8 & 0xffffffff);
    }
    else if ((!bVar5) || (FVar8.FrameNumber.Value.Value < FVar9.Value)) {
      FVar8.FrameNumber.Value = FVar8.FrameNumber.Value.Value + 1;
      FVar8.SubFrame = 0.0;
    }
    local_res18 = CONCAT31(local_res18._1_3_,1);
    TVar4.Value.Value = FVar8.FrameNumber.Value.Value;
    TVar4._0_4_ = local_res18;
    __return_storage_ptr__->LowerBound = TVar4;
  }
  return __return_storage_ptr__;
}

// operator() @ 1504e6160

bool __thiscall `FMovieSceneEvaluationRange::ResetRange'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6542399969758806081>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6542399969758806081>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

