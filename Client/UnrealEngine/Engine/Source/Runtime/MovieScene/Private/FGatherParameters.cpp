// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// CreateForSubData @ 1460b9530

FGatherParameters * __thiscall
FGatherParameters::CreateForSubData
          (FGatherParameters *this,FGatherParameters *__return_storage_ptr__,
          FMovieSceneSubSequenceData *param_1,FMovieSceneSequenceID param_2)

{
  undefined1 uVar1;
  int iVar2;
  FFrameTime FVar3;
  TRangeBound<FFrameNumber> TVar4;
  code *pcVar5;
  TRangeBound<FFrameNumber> TVar6;
  bool bVar7;
  TRange<FFrameTime> *pTVar8;
  FGatherParameters *pFVar9;
  FFrameNumber FVar10;
  longlong lVar11;
  longlong lVar12;
  TEnumAsByte<ERangeBoundTypes::Type> TVar13;
  uint local_res10;
  uint local_res18;
  TRangeBound<FFrameNumber> local_f0;
  TRangeBound<FFrameNumber> TStack_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  float fStack_b4;
  FFrameNumber FStack_ac;
  FFrameNumber FStack_a4;
  char local_a0;
  FTransformTimeParams local_90;
  FTransformTimeParams local_78;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  TRange<FFrameTime> local_50;
  
  lVar12 = 0;
  local_res10 = CONCAT31(local_res10._1_3_,2);
  TVar4.Value.Value = 0;
  TVar4._0_4_ = local_res10;
  (__return_storage_ptr__->RootClampRange).LowerBound = TVar4;
  local_res18 = CONCAT31(local_res18._1_3_,2);
  TVar6.Value.Value = 0;
  TVar6._0_4_ = local_res18;
  (__return_storage_ptr__->RootClampRange).UpperBound = TVar6;
  TVar4 = (__return_storage_ptr__->RootClampRange).LowerBound;
  TVar6 = (__return_storage_ptr__->RootClampRange).UpperBound;
  __return_storage_ptr__->Flags = None;
  (__return_storage_ptr__->LocalClampRange).LowerBound = TVar4;
  (__return_storage_ptr__->LocalClampRange).UpperBound = TVar6;
  (__return_storage_ptr__->RootToSequenceTransform).LinearTransform.TimeScale = 1.0;
  (__return_storage_ptr__->RootToSequenceTransform).LinearTransform.Offset.FrameNumber = 0;
  (__return_storage_ptr__->RootToSequenceTransform).LinearTransform.Offset.SubFrame = 0.0;
  (__return_storage_ptr__->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RootToSequenceTransform).NestedTransforms.ArrayNum = 0;
  (__return_storage_ptr__->RootToSequenceTransform).NestedTransforms.ArrayMax = 0;
  (__return_storage_ptr__->StartTimeBreadcrumbs).Breadcrumbs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->StartTimeBreadcrumbs).Breadcrumbs.ArrayNum = 0;
  (__return_storage_ptr__->StartTimeBreadcrumbs).Breadcrumbs.ArrayMax = 0;
  (__return_storage_ptr__->StartTimeBreadcrumbs).Mode = Sparse;
  (__return_storage_ptr__->EndTimeBreadcrumbs).Breadcrumbs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->EndTimeBreadcrumbs).Breadcrumbs.ArrayNum = 0;
  (__return_storage_ptr__->EndTimeBreadcrumbs).Breadcrumbs.ArrayMax = 0;
  (__return_storage_ptr__->EndTimeBreadcrumbs).Mode = Sparse;
  __return_storage_ptr__->HierarchicalBias = 0;
  __return_storage_ptr__->AccumulatedFlags = None;
  (__return_storage_ptr__->SequenceID).Value = param_2.Value;
  TVar4 = (this->RootClampRange).UpperBound;
  (__return_storage_ptr__->RootClampRange).LowerBound = (this->RootClampRange).LowerBound;
  (__return_storage_ptr__->RootClampRange).UpperBound = TVar4;
  pTVar8 = FMovieSceneSequenceTransform::ComputeTraversedHull
                     (&param_1->RootToSequenceTransform,&local_50,&this->RootClampRange);
  local_f0.Type.Value = 2;
  local_f0 = (TRangeBound<FFrameNumber>)((ulonglong)local_f0 & 0xffffffff);
  TStack_e8.Type.Value = 2;
  TStack_e8 = (TRangeBound<FFrameNumber>)((ulonglong)TStack_e8 & 0xffffffff);
  if ((pTVar8->LowerBound).Type.Value != '\x02') {
    uVar1 = (pTVar8->LowerBound).Type;
    FVar3 = (pTVar8->LowerBound).Value;
    FVar10 = FVar3.FrameNumber.Value;
    if ((uVar1 == '\x01') && (fStack_b4 = FVar3.SubFrame, fStack_b4 == 0.0)) {
      local_e0 = CONCAT31(local_e0._1_3_,1);
      local_f0.Value.Value = FVar10.Value;
      local_f0._0_4_ = local_e0;
    }
    else {
      local_d8 = CONCAT31(local_d8._1_3_,1);
      local_f0.Value.Value = FVar10.Value + 1;
      local_f0._0_4_ = local_d8;
    }
  }
  if ((pTVar8->UpperBound).Type.Value != '\x02') {
    TStack_e8 = (TRangeBound<FFrameNumber>)
                (CONCAT44((pTVar8->UpperBound).Value.FrameNumber.Value,local_d0) &
                0xffffffffffffff00);
  }
  (__return_storage_ptr__->LocalClampRange).LowerBound = local_f0;
  (__return_storage_ptr__->LocalClampRange).UpperBound = TStack_e8;
  __return_storage_ptr__->Flags = this->Flags;
  FMovieSceneSequenceTransform::operator=
            (&__return_storage_ptr__->RootToSequenceTransform,&param_1->RootToSequenceTransform);
  FMovieSceneTransformBreadcrumbs::operator=
            (&__return_storage_ptr__->StartTimeBreadcrumbs,&this->StartTimeBreadcrumbs);
  FMovieSceneTransformBreadcrumbs::operator=
            (&__return_storage_ptr__->EndTimeBreadcrumbs,&this->EndTimeBreadcrumbs);
  local_90.bIgnoreClamps = '\0';
  local_90.Breadcrumbs = (FMovieSceneTransformBreadcrumbs *)0x0;
  local_90.CycleCount = (TOptional<int> *)0x0;
  UE::MovieScene::FTransformTimeParams::AppendBreadcrumbs
            (&local_90,&__return_storage_ptr__->StartTimeBreadcrumbs);
  TVar4 = (param_1->ParentPlayRange).Value.LowerBound;
  TVar13 = TVar4.Type.Value;
  if ((TVar13.Value == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InLowerBound.IsOpen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                         ,0x2c,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FGatherParameters *)(*pcVar5)();
    return pFVar9;
  }
  lVar11 = lVar12;
  if (TVar13.Value == '\0') {
    lVar11 = 4;
  }
  iVar2 = *(int *)((longlong)
                   &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                    ::__l2::Offsets + lVar11);
  if ((TVar13.Value == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FGatherParameters *)(*pcVar5)();
    return pFVar9;
  }
  FStack_ac = TVar4.Value.Value;
  FMovieSceneSequenceTransform::TransformTime
            (&__return_storage_ptr__->RootToSequenceTransform,(FFrameTime)local_60,
             (FTransformTimeParams *)(ulonglong)(uint)(FStack_ac.Value + iVar2));
  local_78.bIgnoreClamps = '\0';
  local_78.Breadcrumbs = (FMovieSceneTransformBreadcrumbs *)0x0;
  local_78.CycleCount = (TOptional<int> *)0x0;
  UE::MovieScene::FTransformTimeParams::AppendBreadcrumbs
            (&local_78,&__return_storage_ptr__->EndTimeBreadcrumbs);
  TVar4 = (param_1->ParentPlayRange).Value.UpperBound;
  TVar13 = TVar4.Type.Value;
  if ((TVar13.Value == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InUpperBound.IsOpen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                         ,0x44,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FGatherParameters *)(*pcVar5)();
    return pFVar9;
  }
  if (TVar13.Value == '\x01') {
    lVar12 = 4;
  }
  iVar2 = *(int *)((longlong)
                   &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                    ::__l2::Offsets + lVar12);
  if ((TVar13.Value == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FGatherParameters *)(*pcVar5)();
    return pFVar9;
  }
  FStack_a4 = TVar4.Value.Value;
  FMovieSceneSequenceTransform::TransformTime
            (&__return_storage_ptr__->RootToSequenceTransform,(FFrameTime)local_58,
             (FTransformTimeParams *)(ulonglong)(uint)(FStack_a4.Value + iVar2));
  __return_storage_ptr__->HierarchicalBias = param_1->HierarchicalBias;
  __return_storage_ptr__->AccumulatedFlags = param_1->AccumulatedFlags;
  __return_storage_ptr__->NetworkMask = this->NetworkMask;
  return __return_storage_ptr__;
}

// TransformLocalRange @ 1460fa460

void __thiscall
FGatherParameters::TransformLocalRange
          (FGatherParameters *this,TRange<FFrameNumber> *param_1,
          TFunctionRef<bool___cdecl(TRange<FFrameTime>)> *param_2)

{
  TRangeBound<FFrameNumber> TVar1;
  code *pcVar2;
  undefined8 uVar3;
  FFrameTime FVar4;
  undefined4 uVar5;
  FFrameNumber FVar6;
  float fVar7;
  FFrameNumber FVar8;
  undefined4 uVar9;
  int iVar10;
  float fVar11;
  bool bVar12;
  FFrameTime FVar13;
  TRange<FFrameTime> *pTVar14;
  uint *puVar15;
  TEnumAsByte<ERangeBoundTypes::Type> TVar16;
  undefined8 local_res20;
  TRange<FFrameTime> local_1d8;
  ulonglong local_1c0;
  int local_1b8;
  undefined4 uStack_1b4;
  undefined1 local_1b0 [8];
  FMovieSceneTimeTransform local_1a8;
  uint local_198;
  undefined8 uStack_194;
  uint local_18c;
  uint local_180;
  int iStack_17c;
  float fStack_178;
  uint local_174;
  int iStack_170;
  float fStack_16c;
  FMovieSceneInverseSequenceTransform local_168;
  TRangeBound<FFrameNumber> local_148;
  TRangeBound<FFrameNumber> local_140;
  undefined8 local_138;
  TOptional<FFrameTime> local_130;
  TOptional<FFrameTime> local_120;
  TFunctionRef<bool___cdecl(TRange<FFrameTime>)> local_110;
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  uint local_c8;
  int iStack_c4;
  float fStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  TRange<FFrameTime> local_68;
  TRange<FFrameTime> local_50;
  TRange<FFrameTime> local_38;
  
  UE::MovieScene::ConvertToFrameTimeRange(&local_1d8,param_1);
  FMovieSceneSequenceTransform::Inverse(&this->RootToSequenceTransform,&local_168);
  if (local_168.NestedTransforms.ArrayNum == 0) {
    local_1a8.TimeScale = local_168.LinearTransform.TimeScale;
    local_1a8.Offset.FrameNumber.Value = local_168.LinearTransform.Offset.FrameNumber.Value;
    local_1a8.Offset.SubFrame = local_168.LinearTransform.Offset.SubFrame;
    if (local_1d8.LowerBound.Type.Value != '\x02') {
      FVar13 = ::operator*((FFrameTime)local_100,
                           (FMovieSceneTimeTransform *)
                           CONCAT44(local_1d8.LowerBound.Value.SubFrame,
                                    local_1d8.LowerBound.Value.FrameNumber.Value));
      if ((local_1d8.LowerBound.Type.Value == '\x02') &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,0x73,L""), bVar12)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_1d8.LowerBound.Value.FrameNumber.Value = (int)*(undefined8 *)FVar13;
      local_1d8.LowerBound.Value.SubFrame = (float)((ulonglong)*(undefined8 *)FVar13 >> 0x20);
    }
    TVar16.Value = local_1d8.UpperBound.Type.Value;
    if (local_1d8.UpperBound.Type.Value != '\x02') {
      FVar13 = ::operator*((FFrameTime)local_f8,
                           (FMovieSceneTimeTransform *)
                           CONCAT44(local_1d8.UpperBound.Value.SubFrame,
                                    local_1d8.UpperBound.Value.FrameNumber.Value));
      TVar16.Value = local_1d8.UpperBound.Type.Value;
      if (local_1d8.UpperBound.Type.Value == '\x02') {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,0x73,L"");
        if (bVar12) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TVar16.Value = local_1d8.UpperBound.Type.Value;
      }
      local_1d8.UpperBound.Value.FrameNumber.Value = (int)*(undefined8 *)FVar13;
      local_1d8.UpperBound.Value.SubFrame = (float)((ulonglong)*(undefined8 *)FVar13 >> 0x20);
    }
    fVar11 = local_1d8.UpperBound.Value.SubFrame;
    FVar8.Value = local_1d8.UpperBound.Value.FrameNumber.Value;
    uVar9 = local_1d8.LowerBound._0_4_;
    if ((local_1d8.LowerBound.Type.Value != '\x02') && (TVar16.Value != '\x02')) {
      uVar3 = CONCAT44(local_1d8.UpperBound.Value.SubFrame,
                       local_1d8.UpperBound.Value.FrameNumber.Value);
      if ((local_1d8.LowerBound.Type.Value == '\x02') &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar12)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar7 = local_1d8.LowerBound.Value.SubFrame;
      FVar6.Value = local_1d8.LowerBound.Value.FrameNumber.Value;
      uVar5 = local_1d8.LowerBound._0_4_;
      local_res20 = uVar3;
      if ((FVar8.Value < local_1d8.LowerBound.Value.FrameNumber.Value) ||
         ((uVar9 = local_1d8.LowerBound._0_4_,
          local_1d8.LowerBound.Value.FrameNumber.Value == FVar8.Value &&
          (fVar11 < local_1d8.LowerBound.Value.SubFrame)))) {
        local_1d8.LowerBound.Type.Value = local_1d8.UpperBound.Type.Value;
        local_1d8.LowerBound._1_3_ = local_1d8.UpperBound._1_3_;
        uVar9 = local_1d8.LowerBound._0_4_;
        local_1d8.LowerBound.Value.FrameNumber.Value = local_1d8.UpperBound.Value.FrameNumber.Value;
        local_1d8.LowerBound.Type.Value = (uchar)uVar5;
        local_1d8.LowerBound._1_3_ = SUB43(uVar5,1);
        local_1d8.UpperBound.Type.Value = local_1d8.LowerBound.Type.Value;
        local_1d8.UpperBound._1_3_ = local_1d8.LowerBound._1_3_;
        local_1d8.UpperBound.Value.FrameNumber.Value = FVar6.Value;
        local_1d8.LowerBound.Value.SubFrame = local_1d8.UpperBound.Value.SubFrame;
        local_1d8.UpperBound.Value.SubFrame = fVar7;
      }
    }
    local_1d8.LowerBound._0_4_ = uVar9;
    local_e8 = CONCAT44(local_1d8.LowerBound.Value.FrameNumber.Value,local_1d8.LowerBound._0_4_);
    uStack_e0 = CONCAT44(local_1d8.UpperBound._0_4_,local_1d8.LowerBound.Value.SubFrame);
    puVar15 = (uint *)&local_e8;
    local_d8 = CONCAT44(local_1d8.UpperBound.Value.SubFrame,
                        local_1d8.UpperBound.Value.FrameNumber.Value);
  }
  else {
    if ((local_1d8.LowerBound.Type.Value == '\x02') || (local_1d8.UpperBound.Type.Value == '\x02'))
    {
      pTVar14 = UE::MovieScene::ConvertToFrameTimeRange(&local_68,&this->RootClampRange);
      pTVar14 = FMovieSceneSequenceTransform::ComputeTraversedHull
                          (&this->RootToSequenceTransform,&local_50,pTVar14);
      pTVar14 = TRange<FFrameTime>::Intersection(&local_38,&local_1d8,pTVar14);
      local_1d8.LowerBound._0_4_ = *(undefined4 *)&pTVar14->LowerBound;
      local_1d8.LowerBound.Value.FrameNumber.Value = (pTVar14->LowerBound).Value.FrameNumber.Value;
      local_1d8.LowerBound.Value.SubFrame = (pTVar14->LowerBound).Value.SubFrame;
      local_1d8.UpperBound._0_4_ = *(undefined4 *)&pTVar14->UpperBound;
      FVar13 = (pTVar14->UpperBound).Value;
      local_1d8.UpperBound.Value.FrameNumber = FVar13.FrameNumber.Value;
      local_1d8.UpperBound.Value.SubFrame = FVar13.SubFrame;
    }
    if (local_1d8.LowerBound.Type.Value == '\x02') {
      TVar1 = (this->RootClampRange).LowerBound;
      TVar16 = TVar1.Type.Value;
      if (TVar16.Value != '\x02') {
        local_148 = TVar1;
        FMovieSceneSequenceTransform::TransformTime
                  (&this->RootToSequenceTransform,(FFrameTime)&local_res20);
        uVar3 = uStack_194;
        uStack_194._0_4_ = (int)local_res20;
        local_1d8.LowerBound.Value.FrameNumber.Value = (int)uStack_194;
        uStack_194._4_4_ = (float)((ulonglong)local_res20 >> 0x20);
        local_1d8.LowerBound.Value.SubFrame = uStack_194._4_4_;
        if (TVar16.Value == '\x01') {
          uStack_194 = local_res20;
          local_198 = CONCAT31(local_198._1_3_,1);
          local_1d8.LowerBound._0_4_ = local_198;
        }
        else {
          local_18c = local_18c & 0xffffff00;
          local_1d8.LowerBound._0_4_ = local_18c;
          uStack_194 = uVar3;
        }
      }
    }
    iVar10 = iStack_17c;
    fVar11 = fStack_178;
    if (local_1d8.UpperBound.Type.Value == '\x02') {
      TVar1 = (this->RootClampRange).UpperBound;
      if (TVar1.Type.Value.Value != '\x02') {
        local_140.Value = TVar1.Value.Value;
        local_1b8 = local_140.Value.Value;
        uStack_1b4 = 0;
        local_140 = TVar1;
        FMovieSceneSequenceTransform::TransformTime
                  (&this->RootToSequenceTransform,(FFrameTime)local_1b0);
        fVar11 = fStack_178;
        iVar10 = iStack_17c;
        iStack_17c = local_1b0._0_4_;
        fStack_178 = local_1b0._4_4_;
        local_1d8.UpperBound.Value.FrameNumber.Value = iStack_17c;
        local_1d8.UpperBound.Value.SubFrame = fStack_178;
        if (TVar1.Type.Value.Value == '\x01') {
          local_180 = CONCAT31(local_180._1_3_,1);
          local_1d8.UpperBound._0_4_ = local_180;
          iVar10 = iStack_17c;
          fVar11 = fStack_178;
        }
        else {
          local_174 = local_174 & 0xffffff00;
          local_1d8.UpperBound._0_4_ = local_174;
          iStack_170 = iStack_17c;
          fStack_16c = fStack_178;
        }
      }
    }
    fStack_178 = fVar11;
    iStack_17c = iVar10;
    fVar11 = local_1d8.UpperBound.Value.SubFrame;
    FVar8.Value = local_1d8.UpperBound.Value.FrameNumber.Value;
    if (local_1d8.LowerBound.Type.Value != '\x02') {
      bVar12 = local_1d8.UpperBound.Type.Value != '\x02';
      if (bVar12) {
        uVar3 = CONCAT44(local_1d8.UpperBound.Value.SubFrame,
                         local_1d8.UpperBound.Value.FrameNumber.Value);
        if ((local_1d8.LowerBound.Type.Value == '\x02') &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar12)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar7 = local_1d8.UpperBound.Value.SubFrame;
        FVar6.Value = local_1d8.LowerBound.Value.FrameNumber.Value;
        uVar9 = local_1d8.LowerBound._0_4_;
        local_1c0 = CONCAT44(local_1d8.LowerBound.Value.SubFrame,
                             local_1d8.LowerBound.Value.FrameNumber.Value);
        local_138 = uVar3;
        if ((FVar8.Value < local_1d8.LowerBound.Value.FrameNumber.Value) ||
           ((local_1d8.LowerBound.Value.FrameNumber.Value == FVar8.Value &&
            (fVar11 < local_1d8.LowerBound.Value.SubFrame)))) {
          local_1d8.UpperBound.Value.SubFrame = local_1d8.LowerBound.Value.SubFrame;
          local_1d8.LowerBound.Type.Value = local_1d8.UpperBound.Type.Value;
          local_1d8.LowerBound._1_3_ = local_1d8.UpperBound._1_3_;
          local_1d8.LowerBound.Value.FrameNumber.Value =
               local_1d8.UpperBound.Value.FrameNumber.Value;
          local_1d8.LowerBound.Value.SubFrame = fVar7;
          local_1d8.UpperBound._0_4_ = uVar9;
          local_1d8.UpperBound.Value.FrameNumber.Value = FVar6.Value;
        }
      }
      if (local_1d8.LowerBound.Type.Value != '\x02') {
        if (local_1d8.UpperBound.Type.Value != '\x02') {
          local_110._0_8_ = *(undefined8 *)param_2;
          local_110._8_8_ = *(undefined8 *)&param_2->field_0x8;
          FMovieSceneInverseSequenceTransform::TransformFiniteRangeWithinRange
                    (&local_168,&local_1d8,&local_110,&this->StartTimeBreadcrumbs,
                     &this->EndTimeBreadcrumbs);
          goto LAB_1460fa9de;
        }
        if ((local_1d8.LowerBound.Type.Value == '\x02') &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar12)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar13.SubFrame = local_1d8.LowerBound.Value.SubFrame;
        FVar13.FrameNumber.Value = local_1d8.LowerBound.Value.FrameNumber.Value;
        FMovieSceneInverseSequenceTransform::TryTransformTime
                  (&local_168,&local_120,FVar13,&this->StartTimeBreadcrumbs);
        if (local_120.bIsSet == false) goto LAB_1460fa9de;
        local_1c0 = (ulonglong)(uint)local_120.TypedValue.FrameNumber.Value;
        if ((local_1d8.LowerBound.Type.Value == '\x02') &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,0x73,L""), bVar12)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar15 = (uint *)&local_88;
        local_78 = CONCAT44(local_1d8.UpperBound.Value.SubFrame,
                            local_1d8.UpperBound.Value.FrameNumber.Value);
        local_1d8.LowerBound.Value.FrameNumber.Value = (int)local_1c0;
        local_1d8.LowerBound.Value.SubFrame = (float)(local_1c0 >> 0x20);
        local_88 = CONCAT44(local_1d8.LowerBound.Value.FrameNumber.Value,local_1d8.LowerBound._0_4_)
        ;
        uStack_80 = CONCAT44(local_1d8.UpperBound._0_4_,local_1d8.LowerBound.Value.SubFrame);
        goto LAB_1460fa9d5;
      }
    }
    if (local_1d8.UpperBound.Type.Value == '\x02') {
      local_b8 = CONCAT44(local_1d8.UpperBound.Value.SubFrame,
                          local_1d8.UpperBound.Value.FrameNumber.Value);
      puVar15 = &local_c8;
      local_c8 = local_1d8.LowerBound._0_4_;
      iStack_c4 = local_1d8.LowerBound.Value.FrameNumber.Value;
      fStack_c0 = local_1d8.LowerBound.Value.SubFrame;
      uStack_bc = local_1d8.UpperBound._0_4_;
    }
    else {
      FVar4.SubFrame = local_1d8.UpperBound.Value.SubFrame;
      FVar4.FrameNumber.Value = local_1d8.UpperBound.Value.FrameNumber.Value;
      FMovieSceneInverseSequenceTransform::TryTransformTime
                (&local_168,&local_130,FVar4,&this->EndTimeBreadcrumbs);
      if (local_130.bIsSet == false) goto LAB_1460fa9de;
      local_1c0 = (ulonglong)(uint)local_130.TypedValue.FrameNumber.Value;
      if ((local_1d8.UpperBound.Type.Value == '\x02') &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,0x73,L""), bVar12)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar15 = (uint *)&local_a8;
      local_a8 = CONCAT44(local_1d8.LowerBound.Value.FrameNumber.Value,local_1d8.LowerBound._0_4_);
      uStack_a0 = CONCAT44(local_1d8.UpperBound._0_4_,local_1d8.LowerBound.Value.SubFrame);
      local_1d8.UpperBound.Value.FrameNumber.Value = (int)local_1c0;
      local_1d8.UpperBound.Value.SubFrame = (float)(local_1c0 >> 0x20);
      local_98 = local_1c0;
    }
  }
LAB_1460fa9d5:
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,puVar15);
LAB_1460fa9de:
  if (local_168.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.NestedTransforms.AllocatorInstance.Data);
  }
  return;
}

