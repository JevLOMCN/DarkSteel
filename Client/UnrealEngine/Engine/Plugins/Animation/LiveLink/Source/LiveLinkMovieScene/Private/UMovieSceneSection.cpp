// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 1

// ExpandToFrame @ 14d0a7780

void __thiscall UMovieSceneSection::ExpandToFrame(UMovieSceneSection *this,FFrameNumber param_1)

{
  TRangeBound<FFrameNumber> TVar1;
  code *pcVar2;
  TRangeBound<FFrameNumber> TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  TEnumAsByte<ERangeBoundTypes::Type> TVar7;
  uint uVar8;
  TRangeBound<FFrameNumber> *pTVar9;
  FFrameNumber FVar10;
  FFrameNumber FVar11;
  FFrameNumber FStackX_c;
  TRangeBound<FFrameNumber> local_res18;
  TRangeBound<FFrameNumber> local_res20;
  TRange<FFrameNumber> local_58;
  TRange<FFrameNumber> local_48;
  undefined8 local_38;
  TRangeBound<FFrameNumber> TStack_30;
  
  TVar1 = (this->SectionRange).Value.LowerBound;
  if (TVar1.Type.Value.Value == '\x02') {
    FVar11.Value = 0;
  }
  else {
    uVar8 = TVar1._0_4_ & 0xff;
    FStackX_c = TVar1.Value.Value;
    if (TVar1.Type.Value.Value == '\x01') {
      if ((uVar8 == 2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      if ((uVar8 == 2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FStackX_c.Value = FStackX_c.Value + 1;
    }
    TVar1 = (this->SectionRange).Value.LowerBound;
    FVar10 = TVar1.Value.Value;
    TVar7 = TVar1.Type.Value;
    if (TVar7.Value != '\x01') {
      if ((TVar7.Value == '\x02') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar10.Value = FVar10.Value + 1;
    }
    FVar11.Value = param_1.Value;
    if (FVar10.Value < param_1.Value) {
      FVar11.Value = FVar10.Value;
    }
    FVar11.Value = FVar11.Value - FStackX_c.Value;
  }
  TVar1 = (this->SectionRange).Value.LowerBound;
  TVar3 = (this->SectionRange).Value.UpperBound;
  pcVar2 = *(code **)(this->_padding_ + 0x2c8);
  local_58.LowerBound.Type.Value = '\x01';
  local_58.LowerBound._1_3_ = local_res18._1_3_;
  local_58.UpperBound.Type.Value = '\x01';
  local_58.UpperBound._1_3_ = local_res20._1_3_;
  local_48.LowerBound._0_4_ = TVar1._0_4_;
  local_48.LowerBound.Value = TVar1.Value.Value;
  local_48.UpperBound._0_4_ = TVar3._0_4_;
  local_48.UpperBound.Value = TVar3.Value.Value;
  local_58.LowerBound.Value.Value = param_1.Value;
  local_58.UpperBound.Value.Value = param_1.Value;
  bVar6 = TRange<FFrameNumber>::IsEmpty(&local_48);
  if (bVar6) {
    local_38 = CONCAT44(local_58.LowerBound.Value.Value,local_58.LowerBound._0_4_);
    TStack_30.Value.Value = local_58.UpperBound.Value.Value;
    TStack_30.Type.Value = local_58.UpperBound.Type.Value;
    TStack_30._1_3_ = local_58.UpperBound._1_3_;
  }
  else {
    bVar6 = TRange<FFrameNumber>::IsEmpty(&local_58);
    if (bVar6) {
      local_38 = CONCAT44(local_48.LowerBound.Value.Value,local_48.LowerBound._0_4_);
      TStack_30.Value.Value = local_48.UpperBound.Value.Value;
      TStack_30.Type.Value = local_48.UpperBound.Type.Value;
      TStack_30._1_3_ = local_48.UpperBound._1_3_;
    }
    else {
      if (local_48.UpperBound.Type.Value == '\x02') {
        pTVar9 = &local_48.UpperBound;
      }
      else if (local_58.UpperBound.Type.Value == '\x02') {
        pTVar9 = &local_58.UpperBound;
      }
      else if (local_58.UpperBound.Value.Value < local_48.UpperBound.Value.Value) {
        pTVar9 = &local_48.UpperBound;
      }
      else if (local_48.UpperBound.Value.Value < local_58.UpperBound.Value.Value) {
        pTVar9 = &local_58.UpperBound;
      }
      else {
        pTVar9 = &local_48.UpperBound;
        if (local_48.UpperBound.Type.Value != '\x01') {
          pTVar9 = &local_58.UpperBound;
        }
      }
      uVar5 = CONCAT44(local_48.LowerBound.Value.Value,local_48.LowerBound._0_4_);
      local_38 = uVar5;
      if ((((local_48.LowerBound.Type.Value != '\x02') &&
           (uVar4 = CONCAT44(local_58.LowerBound.Value.Value,local_58.LowerBound._0_4_),
           local_38 = uVar4, local_58.LowerBound.Type.Value != '\x02')) &&
          (local_38 = uVar5, local_58.LowerBound.Value.Value <= local_48.LowerBound.Value.Value)) &&
         ((local_38 = uVar4, local_48.LowerBound.Value.Value <= local_58.LowerBound.Value.Value &&
          (local_48.LowerBound.Type.Value == '\x01')))) {
        local_38 = uVar5;
      }
      TStack_30 = *pTVar9;
    }
  }
  (*pcVar2)(this,&local_38);
  if (FVar11.Value != 0) {
    FixupRelativeKeyframes(this,FVar11);
  }
  return;
}

