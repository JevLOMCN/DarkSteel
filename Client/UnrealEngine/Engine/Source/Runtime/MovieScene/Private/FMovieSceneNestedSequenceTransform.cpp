// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 19

// StaticStruct @ 146167a60

UScriptStruct * __cdecl FMovieSceneNestedSequenceTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNestedSequenceTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneNestedSequenceTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform,
                         (UObject *)pUVar1,L"MovieSceneNestedSequenceTransform");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneNestedSequenceTransform.OuterSingleton;
}

// FMovieSceneNestedSequenceTransform @ 14617fcf0

FMovieSceneNestedSequenceTransform * __thiscall
FMovieSceneNestedSequenceTransform::FMovieSceneNestedSequenceTransform
          (FMovieSceneNestedSequenceTransform *this,FMovieSceneNestedSequenceTransform *param_1)

{
  FWeakObjectPtr FVar1;
  
  FVar1 = (param_1->TimeScale).Variant.WeakCustomGetter.WeakPtr;
  *(undefined8 *)(this->TimeScale).Variant.Data = *(undefined8 *)(param_1->TimeScale).Variant.Data;
  (this->TimeScale).Variant.WeakCustomGetter.WeakPtr = FVar1;
  this->Offset = param_1->Offset;
  this->Warping = param_1->Warping;
  return this;
}

// FMovieSceneNestedSequenceTransform @ 14617fd10

FMovieSceneNestedSequenceTransform * __thiscall
FMovieSceneNestedSequenceTransform::FMovieSceneNestedSequenceTransform
          (FMovieSceneNestedSequenceTransform *this,FMovieSceneNestedSequenceTransform *param_1)

{
  FMovieSceneNumericVariant::ShallowCopy
            ((FMovieSceneNumericVariant *)param_1,(FMovieSceneNumericVariant *)this);
  this->Offset = param_1->Offset;
  this->Warping = param_1->Warping;
  return this;
}

// FMovieSceneNestedSequenceTransform @ 14617fd50

FMovieSceneNestedSequenceTransform * __thiscall
FMovieSceneNestedSequenceTransform::FMovieSceneNestedSequenceTransform
          (FMovieSceneNestedSequenceTransform *this)

{
  FMovieSceneNumericVariant::FMovieSceneNumericVariant
            ((FMovieSceneNumericVariant *)this,__real_3ff0000000000000);
  (this->Offset).FrameNumber = 0;
  (this->Offset).SubFrame = 0.0;
  (this->Warping).Start = 0;
  (this->Warping).End = 0;
  return this;
}

// ~FMovieSceneNestedSequenceTransform @ 146185350

void __thiscall
FMovieSceneNestedSequenceTransform::~FMovieSceneNestedSequenceTransform
          (FMovieSceneNestedSequenceTransform *this)

{
  return;
}

// operator= @ 1461867f0

FMovieSceneNestedSequenceTransform * __thiscall
FMovieSceneNestedSequenceTransform::operator=
          (FMovieSceneNestedSequenceTransform *this,FMovieSceneNestedSequenceTransform *param_1)

{
  FWeakObjectPtr FVar1;
  
  FVar1 = (param_1->TimeScale).Variant.WeakCustomGetter.WeakPtr;
  *(undefined8 *)(this->TimeScale).Variant.Data = *(undefined8 *)(param_1->TimeScale).Variant.Data;
  (this->TimeScale).Variant.WeakCustomGetter.WeakPtr = FVar1;
  this->Offset = param_1->Offset;
  this->Warping = param_1->Warping;
  return this;
}

// operator= @ 146186810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieSceneNestedSequenceTransform * __thiscall
FMovieSceneNestedSequenceTransform::operator=
          (FMovieSceneNestedSequenceTransform *this,FMovieSceneNestedSequenceTransform *param_1)

{
  FWeakObjectPtr FVar1;
  FMovieSceneNumericVariant *pFVar2;
  undefined1 auStack_48 [32];
  FMovieSceneNumericVariant local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  pFVar2 = FMovieSceneNumericVariant::ShallowCopy((FMovieSceneNumericVariant *)param_1,&local_28);
  FVar1 = (pFVar2->WeakCustomGetter).WeakPtr;
  *(undefined8 *)(this->TimeScale).Variant.Data = *(undefined8 *)pFVar2->Data;
  (this->TimeScale).Variant.WeakCustomGetter.WeakPtr = FVar1;
  this->Offset = param_1->Offset;
  this->Warping = param_1->Warping;
  return this;
}

// operator() @ 146188490

bool __thiscall
`FMovieSceneNestedSequenceTransform::ExtractBoundariesWithinRange'::__l2::<lambda_1>::operator()
          (void *this,FFrameTime param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 in_XMM2 [16];
  undefined1 auVar3 [16];
  float fStackX_c;
  FFrameTime local_res10 [3];
  
  local_res10[0].SubFrame = param_1.SubFrame;
  fStackX_c = (float)((ulonglong)*(undefined8 *)(*(longlong *)this + 0x10) >> 0x20);
  auVar3 = roundps(in_XMM2,ZEXT416((uint)(local_res10[0].SubFrame - fStackX_c)),1);
  local_res10[0].FrameNumber = param_1.FrameNumber.Value;
  local_res10[0].SubFrame = (local_res10[0].SubFrame - fStackX_c) - auVar3._0_4_;
  local_res10[0].FrameNumber.Value =
       local_res10[0].FrameNumber.Value +
       ((int)auVar3._0_4_ - (int)*(undefined8 *)(*(longlong *)this + 0x10));
  bVar1 = TRange<FFrameTime>::Contains((TRange<FFrameTime> *)((longlong)this + 8),local_res10);
  if (bVar1) {
    uVar2 = (**(code **)((longlong)this + 0x20))(*(undefined8 *)((longlong)this + 0x28),local_res10)
    ;
    return (bool)uVar2;
  }
  return true;
}

// ComputeTraversedHull @ 146197d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TRange<FFrameTime> * __thiscall
FMovieSceneNestedSequenceTransform::ComputeTraversedHull
          (FMovieSceneNestedSequenceTransform *this,TRange<FFrameTime> *__return_storage_ptr__,
          TRange<FFrameTime> *param_1)

{
  code *pcVar1;
  FFrameTime *pFVar2;
  undefined8 uVar3;
  FFrameTime FVar4;
  undefined3 uVar5;
  FFrameNumber FVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  uchar uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  uchar uVar14;
  bool bVar15;
  FMovieSceneTimeWarpFixedFrame FVar16;
  int iVar17;
  uint uVar18;
  FMovieSceneTimeWarpClampFloat FVar19;
  FMovieSceneTimeWarpLoopFloat FVar20;
  FMovieSceneTimeWarpClamp FVar21;
  FMovieSceneTimeWarpLoop FVar22;
  FMovieSceneTimeWarpFrameRate FVar23;
  undefined4 extraout_var;
  undefined2 extraout_var_04;
  FFrameTime FVar24;
  TRange<FFrameTime> *pTVar25;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  UMovieSceneTimeWarpGetter *pUVar26;
  undefined8 *puVar27;
  int iVar28;
  FFrameNumber FVar29;
  double dVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 auStack_1f8 [32];
  FFrameTime local_1d8;
  TRange<FFrameTime> local_1d0;
  FFrameTime local_1b0;
  int local_1a8;
  float fStack_1a4;
  FFrameRate local_1a0;
  TRange<FFrameTime> local_198;
  uchar local_180;
  undefined1 uStack_17f;
  undefined1 uStack_17e;
  undefined1 uStack_17d;
  FFrameTime FStack_17c;
  uchar uStack_174;
  undefined1 uStack_173;
  undefined1 uStack_172;
  undefined1 uStack_171;
  FFrameTime local_170;
  undefined4 local_168;
  undefined4 local_15c;
  FFrameTime local_138;
  FMovieSceneTimeTransform local_130;
  undefined1 local_120 [8];
  undefined1 local_118 [8];
  TRange<FFrameTime> local_110;
  TRange<FFrameTime> local_f8;
  TRange<FFrameTime> local_e0;
  TRange<FFrameTime> local_c8;
  TRange<FFrameTime> local_b0;
  undefined1 local_98 [32];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  if (((*(ulonglong *)(this->TimeScale).Variant.Data & 0xfff8000000000000) != 0xfff8000000000000) ||
     (uVar14 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this),
     uVar14 == 0xff)) {
    dVar30 = FMovieSceneTimeWarpVariant::AsFixedPlayRate(&this->TimeScale);
    local_130.Offset = this->Offset;
    local_130.TimeScale = (float)dVar30;
    if (((float)((uint)local_130.TimeScale & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
         __real_322bcc77) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("!FMath::IsNearlyZero(TimeScale)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneTimeTransform.h"
                            ,0x2c,
                            L"It is invalid to create a linear transformation with a zero timescale. This case should be handled externally by FMovieSceneTimeWarpVariant and FLAG_Zero."
                           ), bVar15)) {
      pcVar1 = (code *)swi(3);
      pTVar25 = (TRange<FFrameTime> *)(*pcVar1)();
      return pTVar25;
    }
    operator*<FFrameTime>(&local_198,param_1,&local_130);
    fVar31 = local_198.LowerBound.Value.SubFrame;
    FVar6.Value = local_198.LowerBound.Value.FrameNumber.Value;
    if ((local_198.UpperBound.Type.Value != '\x02') && (local_198.LowerBound.Type.Value != '\x02'))
    {
      FVar24.SubFrame = local_198.LowerBound.Value.SubFrame;
      FVar24.FrameNumber.Value = local_198.LowerBound.Value.FrameNumber.Value;
      if ((local_198.UpperBound.Type.Value == '\x02') &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar15)) {
        pcVar1 = (code *)swi(3);
        pTVar25 = (TRange<FFrameTime> *)(*pcVar1)();
        return pTVar25;
      }
      local_1d8 = local_198.UpperBound.Value;
      FVar4 = local_1d8;
      FVar29 = local_198.UpperBound.Value.FrameNumber.Value;
      local_1d8.SubFrame = local_198.UpperBound.Value.SubFrame;
      fVar35 = local_1d8.SubFrame;
      if ((FVar29.Value < FVar6.Value) ||
         ((FVar6.Value == FVar29.Value && (local_1d8.SubFrame < fVar31)))) {
        local_1d8 = FVar4;
        if ((local_198.UpperBound.Type.Value == '\x02') &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar15)) {
          pcVar1 = (code *)swi(3);
          pTVar25 = (TRange<FFrameTime> *)(*pcVar1)();
          return pTVar25;
        }
        if ((local_198.LowerBound.Type.Value == '\x02') &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,0x73,L""), bVar15)) {
          pcVar1 = (code *)swi(3);
          pTVar25 = (TRange<FFrameTime> *)(*pcVar1)();
          return pTVar25;
        }
        local_198.LowerBound.Value.FrameNumber.Value = FVar29.Value;
        local_198.LowerBound.Value.SubFrame = fVar35;
        local_198.UpperBound.Value = FVar24;
        if ((local_198.UpperBound.Type.Value == '\x02') &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,0x73,L""), bVar15)) {
          pcVar1 = (code *)swi(3);
          pTVar25 = (TRange<FFrameTime> *)(*pcVar1)();
          return pTVar25;
        }
      }
    }
    local_1d0.LowerBound.Value.FrameNumber.Value = local_198.LowerBound.Value.FrameNumber.Value;
    local_1d0.LowerBound.Type.Value = local_198.LowerBound.Type.Value;
    local_1d0.LowerBound._1_3_ = local_198.LowerBound._1_3_;
    local_1d0.UpperBound.Type.Value = local_198.UpperBound.Type.Value;
    local_1d0.UpperBound._1_3_ = local_198.UpperBound._1_3_;
    local_1d0.LowerBound.Value.SubFrame = local_198.LowerBound.Value.SubFrame;
LAB_1461983ed:
    (__return_storage_ptr__->LowerBound).Type =
         (TEnumAsByte<ERangeBoundTypes::Type>)local_1d0.LowerBound.Type.Value;
    *(int3 *)&(__return_storage_ptr__->LowerBound).field_0x1 = local_1d0.LowerBound._1_3_;
    (__return_storage_ptr__->LowerBound).Value.FrameNumber =
         (FFrameNumber)local_1d0.LowerBound.Value.FrameNumber.Value;
    *(undefined8 *)&(__return_storage_ptr__->LowerBound).Value.SubFrame = local_1d0._8_8_;
    (__return_storage_ptr__->UpperBound).Value = local_198.UpperBound.Value;
    return __return_storage_ptr__;
  }
  if (uVar14 == '\x01') {
    FVar16 = FMovieSceneTimeWarpVariant::AsFixedTime(&this->TimeScale);
    local_1d8.SubFrame = (this->Offset).SubFrame;
    local_1d8.SubFrame = local_1d8.SubFrame + 0.0;
    iVar17 = ((int)ROUND((local_1d8.SubFrame + local_1d8.SubFrame) - __real_3f000000) >> 1) +
             (this->Offset).FrameNumber.Value +
             *(int *)CONCAT44(extraout_var,FVar16.FrameNumber.Value);
    iVar28 = (int)local_1d8.SubFrame;
    fVar31 = local_1d8.SubFrame;
    if ((iVar28 != -0x80000000) && ((float)iVar28 != local_1d8.SubFrame)) {
      auVar32._4_4_ = local_1d8.SubFrame;
      auVar32._0_4_ = local_1d8.SubFrame;
      auVar32._8_8_ = 0;
      uVar18 = movmskps(iVar17,auVar32);
      fVar31 = (float)(int)(iVar28 - (uVar18 & 1));
    }
    fVar35 = local_1d8.SubFrame - fVar31;
    if (::FFrameTime::MaxSubframe <= local_1d8.SubFrame - fVar31) {
      fVar35 = ::FFrameTime::MaxSubframe;
    }
    if (fVar35 <= 0.0) {
      fVar35 = 0.0;
    }
    (__return_storage_ptr__->LowerBound).Type = '\x01';
    *(undefined3 *)&(__return_storage_ptr__->LowerBound).field_0x1 = local_168._1_3_;
    (__return_storage_ptr__->LowerBound).Value.FrameNumber = (FFrameNumber)iVar17;
    (__return_storage_ptr__->LowerBound).Value.SubFrame = fVar35;
    (__return_storage_ptr__->UpperBound).Type = '\x01';
    *(undefined3 *)&(__return_storage_ptr__->UpperBound).field_0x1 = local_15c._1_3_;
    (__return_storage_ptr__->UpperBound).Value.FrameNumber = (FFrameNumber)iVar17;
    (__return_storage_ptr__->UpperBound).Value.SubFrame = fVar35;
    return __return_storage_ptr__;
  }
  if (uVar14 == '\x02') {
    FVar23 = FMovieSceneTimeWarpVariant::AsFrameRate(&this->TimeScale);
    FMovieSceneTimeWarpFrameRate::GetFrameRate
              ((FMovieSceneTimeWarpFrameRate *)CONCAT26(extraout_var_04,FVar23));
    fVar31 = __real_3f000000;
    uVar14 = (param_1->LowerBound).Type.Value;
    uStack_17f = (param_1->LowerBound).field_0x1;
    uStack_17e = (param_1->LowerBound).field_0x2;
    uStack_17d = (param_1->LowerBound).field_0x3;
    pFVar2 = &(param_1->LowerBound).Value;
    local_1b0 = *pFVar2;
    uStack_174 = (param_1->UpperBound).Type.Value;
    uStack_173 = (param_1->UpperBound).field_0x1;
    uStack_172 = (param_1->UpperBound).field_0x2;
    uStack_171 = (param_1->UpperBound).field_0x3;
    local_170 = (param_1->UpperBound).Value;
    uVar37 = (char)(pFVar2->FrameNumber).Value;
    uVar38 = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.FrameNumber.Value + 1);
    uVar39 = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.FrameNumber.Value + 2);
    uVar40 = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.FrameNumber.Value + 3);
    uVar41 = *(undefined1 *)&(param_1->LowerBound).Value.SubFrame;
    uVar42 = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.SubFrame + 1);
    uVar43 = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.SubFrame + 2);
    uVar44 = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.SubFrame + 3);
    local_180 = uVar14;
    FStack_17c = local_1b0;
    if (uVar14 != '\x02') {
      local_1d8.SubFrame = (this->Offset).SubFrame;
      fVar36 = local_1d8.SubFrame + local_1b0.SubFrame;
      local_1d8.FrameNumber.Value =
           ((int)ROUND((fVar36 + fVar36) - __real_3f000000) >> 1) + (int)*(undefined7 *)pFVar2 +
           (this->Offset).FrameNumber.Value;
      iVar17 = (int)fVar36;
      fVar35 = fVar36;
      if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar36)) {
        auVar33._4_4_ = fVar36;
        auVar33._0_4_ = fVar36;
        auVar33._8_8_ = 0;
        uVar18 = movmskps(local_1d8.FrameNumber.Value,auVar33);
        fVar35 = (float)(int)(iVar17 - (uVar18 & 1));
      }
      local_1d8.SubFrame = fVar36 - fVar35;
      if (::FFrameTime::MaxSubframe <= fVar36 - fVar35) {
        local_1d8.SubFrame = ::FFrameTime::MaxSubframe;
      }
      if (local_1d8.SubFrame <= 0.0) {
        local_1d8.SubFrame = 0.0;
      }
      FVar24 = ConvertFrameTime((FFrameTime)local_120,(FFrameRate)local_1d8,local_1a0);
      if ((uVar14 == '\x02') &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,0x73,L""), bVar15)) {
        pcVar1 = (code *)swi(3);
        pTVar25 = (TRange<FFrameTime> *)(*pcVar1)();
        return pTVar25;
      }
      FStack_17c = *(FFrameTime *)FVar24;
      uVar37 = (undefined1)FStack_17c.FrameNumber.Value;
      uVar38 = FStack_17c.FrameNumber.Value._1_1_;
      uVar39 = FStack_17c.FrameNumber.Value._2_1_;
      uVar40 = FStack_17c.FrameNumber.Value._3_1_;
      uVar41 = FStack_17c.SubFrame._0_1_;
      uVar42 = FStack_17c.SubFrame._1_1_;
      uVar43 = FStack_17c.SubFrame._2_1_;
      uVar44 = FStack_17c.SubFrame._3_1_;
    }
    uVar13 = uStack_171;
    uVar12 = uStack_172;
    uVar11 = uStack_173;
    uVar10 = uStack_174;
    uVar9 = uStack_17d;
    uVar8 = uStack_17e;
    uVar7 = uStack_17f;
    uVar14 = local_180;
    if (uStack_174 != '\x02') {
      local_1b0 = this->Offset;
      local_1d8.SubFrame = local_170.SubFrame;
      fVar36 = local_1b0.SubFrame + local_1d8.SubFrame;
      iVar17 = (int)fVar36;
      fVar35 = fVar36;
      if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar36)) {
        auVar34._4_4_ = fVar36;
        auVar34._0_4_ = fVar36;
        auVar34._8_8_ = 0;
        uVar18 = movmskps(local_1b0.FrameNumber.Value.Value,auVar34);
        fVar35 = (float)(int)(iVar17 - (uVar18 & 1));
      }
      local_1d8.SubFrame = fVar36 - fVar35;
      if (::FFrameTime::MaxSubframe <= fVar36 - fVar35) {
        local_1d8.SubFrame = ::FFrameTime::MaxSubframe;
      }
      if (local_1d8.SubFrame <= 0.0) {
        local_1d8.SubFrame = 0.0;
      }
      local_1d8.FrameNumber.Value =
           ((int)ROUND((fVar36 + fVar36) - fVar31) >> 1) + local_1b0.FrameNumber.Value.Value +
           local_170.FrameNumber.Value.Value;
      local_170 = ConvertFrameTime((FFrameTime)local_118,(FFrameRate)local_1d8,local_1a0);
      local_170 = *(FFrameTime *)local_170;
    }
    (__return_storage_ptr__->LowerBound).Type.Value = uVar14;
    (__return_storage_ptr__->LowerBound).field_0x1 = uVar7;
    (__return_storage_ptr__->LowerBound).field_0x2 = uVar8;
    (__return_storage_ptr__->LowerBound).field_0x3 = uVar9;
    *(undefined1 *)&(__return_storage_ptr__->LowerBound).Value.FrameNumber.Value = uVar37;
    *(undefined1 *)((longlong)&(__return_storage_ptr__->LowerBound).Value.FrameNumber.Value + 1) =
         uVar38;
    *(undefined1 *)((longlong)&(__return_storage_ptr__->LowerBound).Value.FrameNumber.Value + 2) =
         uVar39;
    *(undefined1 *)((longlong)&(__return_storage_ptr__->LowerBound).Value.FrameNumber.Value + 3) =
         uVar40;
    *(undefined1 *)&(__return_storage_ptr__->LowerBound).Value.SubFrame = uVar41;
    *(undefined1 *)((longlong)&(__return_storage_ptr__->LowerBound).Value.SubFrame + 1) = uVar42;
    *(undefined1 *)((longlong)&(__return_storage_ptr__->LowerBound).Value.SubFrame + 2) = uVar43;
    *(undefined1 *)((longlong)&(__return_storage_ptr__->LowerBound).Value.SubFrame + 3) = uVar44;
    (__return_storage_ptr__->UpperBound).Type.Value = uVar10;
    (__return_storage_ptr__->UpperBound).field_0x1 = uVar11;
    (__return_storage_ptr__->UpperBound).field_0x2 = uVar12;
    (__return_storage_ptr__->UpperBound).field_0x3 = uVar13;
    (__return_storage_ptr__->UpperBound).Value = local_170;
    return __return_storage_ptr__;
  }
  UE::MovieScene::TranslateRange(&local_1d0,param_1,this->Offset);
  if (uVar14 == '\0') {
    pUVar26 = FMovieSceneTimeWarpVariant::AsCustom(&this->TimeScale);
    local_198.UpperBound.Value = local_1d0.UpperBound.Value;
    if (pUVar26 != (UMovieSceneTimeWarpGetter *)0x0) {
      puVar27 = (undefined8 *)(**(code **)(pUVar26->_padding_ + 0x2c8))(pUVar26,local_98,&local_1d0)
      ;
      local_1d0.LowerBound._0_8_ = *puVar27;
      local_1d0._8_8_ = puVar27[1];
      local_198.UpperBound.Value = *(FFrameTime *)(puVar27 + 2);
    }
    goto LAB_1461983ed;
  }
  if (uVar14 == '\x03') {
    FVar22 = FMovieSceneTimeWarpVariant::AsLoop(&this->TimeScale);
    pTVar25 = FMovieSceneTimeWarpLoop::ComputeTraversedHull
                        ((FMovieSceneTimeWarpLoop *)CONCAT44(extraout_var_03,FVar22.Duration.Value),
                         &local_c8,&local_1d0);
  }
  else if (uVar14 == '\x04') {
    FVar21 = FMovieSceneTimeWarpVariant::AsClamp(&this->TimeScale);
    pTVar25 = FMovieSceneTimeWarpClamp::ComputeTraversedHull
                        ((FMovieSceneTimeWarpClamp *)CONCAT44(extraout_var_02,FVar21.Max.Value),
                         &local_e0,&local_1d0);
  }
  else if (uVar14 == '\x05') {
    FVar20 = FMovieSceneTimeWarpVariant::AsLoopFloat(&this->TimeScale);
    pTVar25 = FMovieSceneTimeWarpLoopFloat::ComputeTraversedHull
                        ((FMovieSceneTimeWarpLoopFloat *)CONCAT44(extraout_var_01,FVar20.Duration),
                         &local_f8,&local_1d0);
  }
  else {
    if (uVar14 != '\x06') goto LAB_1461981b8;
    FVar19 = FMovieSceneTimeWarpVariant::AsClampFloat(&this->TimeScale);
    pTVar25 = FMovieSceneTimeWarpClampFloat::ComputeTraversedHull
                        ((FMovieSceneTimeWarpClampFloat *)CONCAT44(extraout_var_00,FVar19.Max),
                         &local_110,&local_1d0);
  }
  local_1d0.LowerBound.Type.Value = (pTVar25->LowerBound).Type.Value;
  local_1d0.LowerBound._1_3_ = *(undefined3 *)&(pTVar25->LowerBound).field_0x1;
  local_1d0.LowerBound.Value.FrameNumber.Value = (pTVar25->LowerBound).Value.FrameNumber.Value;
  local_1d0._8_8_ = *(undefined8 *)&(pTVar25->LowerBound).Value.SubFrame;
  local_1d0.UpperBound.Value = (pTVar25->UpperBound).Value;
LAB_1461981b8:
  local_138 = this->Offset;
  if (local_138.SubFrame == 0.0) {
    local_1a8 = -local_138.FrameNumber.Value.Value;
    fStack_1a4 = 0.0;
  }
  else {
    local_1a8 = ~local_138.FrameNumber.Value.Value;
    fStack_1a4 = __real_3f800000 - local_138.SubFrame;
    if (::FFrameTime::MaxSubframe <= __real_3f800000 - local_138.SubFrame) {
      fStack_1a4 = ::FFrameTime::MaxSubframe;
    }
    if (fStack_1a4 <= 0.0) {
      fStack_1a4 = 0.0;
    }
  }
  FVar4.SubFrame = fStack_1a4;
  FVar4.FrameNumber.Value = local_1a8;
  pTVar25 = UE::MovieScene::TranslateRange(&local_b0,&local_1d0,FVar4);
  uVar5 = *(undefined3 *)&(pTVar25->LowerBound).field_0x1;
  FVar6.Value = (pTVar25->LowerBound).Value.FrameNumber.Value;
  uVar3 = *(undefined8 *)&(pTVar25->LowerBound).Value.SubFrame;
  FVar24 = (pTVar25->UpperBound).Value;
  (__return_storage_ptr__->LowerBound).Type =
       (TEnumAsByte<ERangeBoundTypes::Type>)(pTVar25->LowerBound).Type.Value;
  *(undefined3 *)&(__return_storage_ptr__->LowerBound).field_0x1 = uVar5;
  (__return_storage_ptr__->LowerBound).Value.FrameNumber = (FFrameNumber)FVar6.Value;
  *(undefined8 *)&(__return_storage_ptr__->LowerBound).Value.SubFrame = uVar3;
  (__return_storage_ptr__->UpperBound).Value = FVar24;
  return __return_storage_ptr__;
}

// ExtractBoundariesWithinRange @ 1461a57c0

bool __thiscall
FMovieSceneNestedSequenceTransform::ExtractBoundariesWithinRange
          (FMovieSceneNestedSequenceTransform *this,TRange<FFrameTime> *param_1,
          TFunctionRef<bool___cdecl(FFrameTime)> *param_2)

{
  uchar uVar1;
  bool bVar2;
  FMovieSceneTimeWarpLoopFloat FVar3;
  FMovieSceneTimeWarpLoop FVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  code *local_48;
  FMovieSceneNestedSequenceTransform **local_40;
  FMovieSceneNestedSequenceTransform *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  FFrameTime local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((*(ulonglong *)(this->TimeScale).Variant.Data & 0xfff8000000000000) == 0xfff8000000000000) {
    uVar1 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this);
    local_18 = *(undefined8 *)param_2;
    local_20 = (param_1->UpperBound).Value;
    local_10 = *(undefined8 *)&param_2->field_0x8;
    local_30._0_1_ = (param_1->LowerBound).Type;
    local_30._1_3_ = *(undefined3 *)&(param_1->LowerBound).field_0x1;
    local_30._4_4_ = (param_1->LowerBound).Value.FrameNumber;
    uStack_28 = *(undefined8 *)&(param_1->LowerBound).Value.SubFrame;
    local_38 = this;
    if (uVar1 == '\x03') {
      FVar4 = FMovieSceneTimeWarpVariant::AsLoop(&this->TimeScale);
      local_40 = &local_38;
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FMovieSceneNestedSequenceTransform::ExtractBoundariesWithinRange'::__l2::<lambda_1>,bool,FFrameTime>
                 ::Call;
      bVar2 = FMovieSceneTimeWarpLoop::ExtractBoundariesWithinRange
                        ((FMovieSceneTimeWarpLoop *)CONCAT44(extraout_var_00,FVar4.Duration.Value),
                         param_1,(TFunctionRef<bool___cdecl(FFrameTime)> *)&local_48);
      return bVar2;
    }
    if (uVar1 == '\x05') {
      FVar3 = FMovieSceneTimeWarpVariant::AsLoopFloat(&this->TimeScale);
      local_40 = &local_38;
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FMovieSceneNestedSequenceTransform::ExtractBoundariesWithinRange'::__l2::<lambda_1>,bool,FFrameTime>
                 ::Call;
      bVar2 = FMovieSceneTimeWarpLoopFloat::ExtractBoundariesWithinRange
                        ((FMovieSceneTimeWarpLoopFloat *)CONCAT44(extraout_var,FVar3.Duration),
                         param_1,(TFunctionRef<bool___cdecl(FFrameTime)> *)&local_48);
      return bVar2;
    }
  }
  return false;
}

// GetWarpDomain @ 1461b4bd0

TOptional<UE::MovieScene::ETimeWarpChannelDomain> __thiscall
FMovieSceneNestedSequenceTransform::GetWarpDomain(FMovieSceneNestedSequenceTransform *this)

{
  uchar uVar1;
  undefined1 uVar2;
  UMovieSceneTimeWarpGetter *pUVar3;
  undefined1 *in_RDX;
  
  if ((*(ulonglong *)(this->TimeScale).Variant.Data & 0xfff8000000000000) == 0xfff8000000000000) {
    uVar1 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this);
    if (uVar1 == '\0') {
      pUVar3 = FMovieSceneTimeWarpVariant::AsCustom(&this->TimeScale);
      if (pUVar3 != (UMovieSceneTimeWarpGetter *)0x0) {
        uVar2 = (**(code **)(pUVar3->_padding_ + 0x2e0))(pUVar3);
        *in_RDX = uVar2;
        in_RDX[1] = 1;
        return SUB82(in_RDX,0);
      }
    }
  }
  in_RDX[1] = 0;
  return SUB82(in_RDX,0);
}

// Inverse @ 1461bac70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieSceneInverseNestedSequenceTransform * __thiscall
FMovieSceneNestedSequenceTransform::Inverse
          (FMovieSceneNestedSequenceTransform *this,
          FMovieSceneInverseNestedSequenceTransform *__return_storage_ptr__)

{
  code *pcVar1;
  double dVar2;
  FWeakObjectPtr FVar3;
  double dVar4;
  uchar uVar5;
  bool bVar6;
  FFrameNumber FVar7;
  uint uVar8;
  FMovieSceneNumericVariant *pFVar9;
  FMovieSceneInverseNestedSequenceTransform *pFVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auStack_78 [40];
  FFrameTime local_50;
  FMovieSceneNumericVariant local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (((*(ulonglong *)(this->TimeScale).Variant.Data & 0xfff8000000000000) == 0xfff8000000000000) &&
     (uVar5 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this),
     uVar5 != 0xff)) {
    FMovieSceneNumericVariant::FMovieSceneNumericVariant
              ((FMovieSceneNumericVariant *)__return_storage_ptr__,__real_3ff0000000000000);
    (__return_storage_ptr__->Offset).FrameNumber = 0;
    (__return_storage_ptr__->Offset).SubFrame = 0.0;
    __return_storage_ptr__->Offset = this->Offset;
    pFVar9 = FMovieSceneNumericVariant::ShallowCopy((FMovieSceneNumericVariant *)this,&local_48);
    FVar3 = (pFVar9->WeakCustomGetter).WeakPtr;
    *(undefined8 *)(__return_storage_ptr__->TimeScale).Variant.Data = *(undefined8 *)pFVar9->Data;
    (__return_storage_ptr__->TimeScale).Variant.WeakCustomGetter.WeakPtr = FVar3;
    return __return_storage_ptr__;
  }
  dVar2 = FMovieSceneTimeWarpVariant::AsFixedPlayRate(&this->TimeScale);
  if (((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3e45798ee2308c3a) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FMath::IsNearlyZero(PlayRate)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneSequenceTransform.cpp"
                         ,0x1b7,
                         L"Play rate cannot be zero! This should be expressed as a nullptr TimeScale with FLAG_Zero."
                        ), bVar6)) {
    pcVar1 = (code *)swi(3);
    pFVar10 = (FMovieSceneInverseNestedSequenceTransform *)(*pcVar1)();
    return pFVar10;
  }
  dVar4 = __real_3ff0000000000000;
  FMovieSceneNumericVariant::FMovieSceneNumericVariant
            ((FMovieSceneNumericVariant *)__return_storage_ptr__,__real_3ff0000000000000);
  (__return_storage_ptr__->Offset).FrameNumber = 0;
  (__return_storage_ptr__->Offset).SubFrame = 0.0;
  local_50.SubFrame = (this->Offset).SubFrame;
  FVar7 = (this->Offset).FrameNumber;
  if (local_50.SubFrame == 0.0) {
    uVar8 = -FVar7.Value;
    fVar11 = 0.0;
  }
  else {
    uVar8 = ~FVar7.Value;
    fVar11 = __real_3f800000 - local_50.SubFrame;
    if (::FFrameTime::MaxSubframe <= __real_3f800000 - local_50.SubFrame) {
      fVar11 = ::FFrameTime::MaxSubframe;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
  }
  dVar15 = ((double)fVar11 + (double)(int)uVar8) * (dVar4 / dVar2);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar15;
  auVar14 = roundpd(in_XMM2,auVar14,1);
  uVar12 = auVar14._0_4_;
  uVar13 = auVar14._4_4_;
  if (__real_41dfffffffc00000 <= auVar14._0_8_) {
    uVar12 = SUB84(__real_41dfffffffc00000,0);
    uVar13 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
  }
  if ((double)CONCAT44(uVar13,uVar12) <= __real_c1e0000000000000) {
    uVar12 = SUB84(__real_c1e0000000000000,0);
    uVar13 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
  }
  local_50.SubFrame = (float)(dVar15 - auVar14._0_8_);
  if (::FFrameTime::MaxSubframe <= local_50.SubFrame) {
    local_50.SubFrame = ::FFrameTime::MaxSubframe;
  }
  if (local_50.SubFrame <= 0.0) {
    local_50.SubFrame = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= local_50.SubFrame) {
    local_50.SubFrame = ::FFrameTime::MaxSubframe;
  }
  if (local_50.SubFrame <= 0.0) {
    local_50.SubFrame = 0.0;
  }
  local_50.FrameNumber.Value = (int)(double)CONCAT44(uVar13,uVar12);
  __return_storage_ptr__->Offset = local_50;
  FMovieSceneTimeWarpVariant::Set(&__return_storage_ptr__->TimeScale,dVar4 / dVar2);
  return __return_storage_ptr__;
}

// IsIdentity @ 1461bbc30

bool __thiscall
FMovieSceneNestedSequenceTransform::IsIdentity(FMovieSceneNestedSequenceTransform *this)

{
  uchar uVar1;
  double dVar2;
  float fStackX_c;
  
  if (((this->Offset).FrameNumber.Value == 0) &&
     (fStackX_c = (this->Offset).SubFrame, fStackX_c == 0.0)) {
    if (((*(ulonglong *)(this->TimeScale).Variant.Data & 0xfff8000000000000) == 0xfff8000000000000)
       && (uVar1 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this),
          uVar1 != 0xff)) {
      return false;
    }
    dVar2 = FMovieSceneTimeWarpVariant::AsFixedPlayRate(&this->TimeScale);
    if (dVar2 == __real_3ff0000000000000) {
      return true;
    }
  }
  return false;
}

// IsLooping @ 1461bbd60

bool __thiscall
FMovieSceneNestedSequenceTransform::IsLooping(FMovieSceneNestedSequenceTransform *this)

{
  uchar uVar1;
  
  if ((*(ulonglong *)(this->TimeScale).Variant.Data & 0xfff8000000000000) != 0xfff8000000000000) {
    return false;
  }
  uVar1 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this);
  return uVar1 == '\x03';
}

// PostSerialize @ 1461c3890

void __thiscall
FMovieSceneNestedSequenceTransform::PostSerialize
          (FMovieSceneNestedSequenceTransform *this,FArchive *param_1)

{
  ulonglong uVar1;
  UMovieSceneNumericVariantGetter *apUStackX_8 [4];
  
  if ((param_1->field_0x28 & 1) == 0) {
    return;
  }
  uVar1 = *(ulonglong *)(this->TimeScale).Variant.Data;
  if (((uVar1 & 0xfff8000000000000) == 0xfff8000000000000) && ((uVar1 >> 0x30 & 7) == 0)) {
    apUStackX_8[0] = FMovieSceneNumericVariant::GetCustomPtr((FMovieSceneNumericVariant *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (apUStackX_8[0] != (UMovieSceneNumericVariantGetter *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)apUStackX_8[0]);
    }
    FWeakObjectPtr::operator=
              (&(this->TimeScale).Variant.WeakCustomGetter.WeakPtr,(FObjectPtr)apUStackX_8);
    *(ulonglong *)(this->TimeScale).Variant.Data = *(ulonglong *)(this->TimeScale).Variant.Data | 1;
  }
  return;
}

// SupportsBoundaries @ 1461d5bf0

bool __thiscall
FMovieSceneNestedSequenceTransform::SupportsBoundaries(FMovieSceneNestedSequenceTransform *this)

{
  uchar uVar1;
  
  if ((*(ulonglong *)(this->TimeScale).Variant.Data & 0xfff8000000000000) != 0xfff8000000000000) {
    return false;
  }
  uVar1 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this);
  if (uVar1 != '\x03') {
    return uVar1 == '\x05';
  }
  return true;
}

// ToString @ 1461d7090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneNestedSequenceTransform::ToString
          (FMovieSceneNestedSequenceTransform *this,TStringBuilderBase<wchar_t> *param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uchar uVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  FMovieSceneTimeWarpFrameRate FVar8;
  FString *pFVar9;
  undefined2 extraout_var;
  UMovieSceneTimeWarpGetter *pUVar10;
  FFrameNumber FVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  double dVar15;
  undefined1 auVar17 [16];
  double dVar16;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar27 [16];
  undefined1 auStack_238 [32];
  int local_218;
  float fStack_214;
  uint local_210;
  float fStack_20c;
  int local_208;
  float fStack_204;
  uint local_200;
  float fStack_1fc;
  uint local_1f8;
  float fStack_1f4;
  uint local_1f0;
  float fStack_1ec;
  FFrameTime local_1e8;
  int local_1e0;
  uint local_1dc;
  uint local_1d8;
  float local_1d4;
  float local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  FName local_1a0 [2];
  FFrameTime local_190;
  undefined8 local_188;
  undefined8 local_180;
  FFrameTime local_178;
  FFrameTime local_170;
  undefined8 local_168;
  FFrameTime local_160;
  FFrameTime local_158;
  undefined8 local_150;
  FFrameTime local_148;
  undefined8 local_140;
  undefined8 local_138;
  FName local_130;
  FMovieSceneTimeTransform local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_238;
  if ((*(ulonglong *)(this->TimeScale).Variant.Data & 0xfff8000000000000) == 0xfff8000000000000) {
    uVar4 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this);
    bVar5 = uVar4 + 1;
    if (bVar5 < 8) goto LAB_1461d7103;
    goto LAB_1461d79c7;
  }
  bVar5 = 0;
LAB_1461d7103:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar5) {
  case 0:
    local_128.TimeScale = FMovieSceneTimeWarpVariant::AsFixedPlayRateFloat(&this->TimeScale);
    local_128.Offset = this->Offset;
    if (((float)((uint)local_128.TimeScale & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
         __real_322bcc77) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!FMath::IsNearlyZero(TimeScale)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneTimeTransform.h"
                           ,0x2c,
                           L"It is invalid to create a linear transformation with a zero timescale. This case should be handled externally by FMovieSceneTimeWarpVariant and FLAG_Zero."
                          ), bVar6)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar9 = ::LexToString(&local_68,&local_128);
    iVar7 = (pFVar9->Data).ArrayNum;
    iVar13 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar13 = 0;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (param_1,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar13);
    local_78.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    goto LAB_1461d7a37;
  case 1:
    pUVar10 = FMovieSceneTimeWarpVariant::AsCustom(&this->TimeScale);
    if (pUVar10 != (UMovieSceneTimeWarpGetter *)0x0) {
      local_1a0[0] = (FName)pUVar10->_padding_;
      ::FName::ToString(local_1a0,&local_88);
      iVar7 = local_88.Data.ArrayNum + -1;
      if (local_88.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (param_1,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar7);
      local_118.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      break;
    }
    goto LAB_1461d79c7;
  case 2:
    FMovieSceneTimeWarpVariant::AsFixedTime(&this->TimeScale);
    local_1e8 = this->Offset;
    local_210 = ((int)ROUND((local_1e8.SubFrame + local_1e8.SubFrame) - __real_3f000000) >> 1) +
                local_1e8.FrameNumber.Value.Value + local_1e0;
    iVar7 = (int)local_1e8.SubFrame;
    fVar20 = local_1e8.SubFrame;
    if ((iVar7 != -0x80000000) && ((float)iVar7 != local_1e8.SubFrame)) {
      auVar22._4_4_ = local_1e8.SubFrame;
      auVar22._0_4_ = local_1e8.SubFrame;
      auVar22._8_8_ = 0;
      uVar12 = movmskps(local_1e8.FrameNumber.Value.Value,auVar22);
      fVar20 = (float)(int)(iVar7 - (uVar12 & 1));
    }
    fStack_20c = local_1e8.SubFrame - fVar20;
    if (::FFrameTime::MaxSubframe <= local_1e8.SubFrame - fVar20) {
      fStack_20c = ::FFrameTime::MaxSubframe;
    }
    if (fStack_20c <= 0.0) {
      fStack_20c = 0.0;
    }
    local_140 = CONCAT44(fStack_20c,local_210);
    ::FString::PrintfImpl(&local_118,L"Frame: %d Subframe: %f");
    TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"Fixed Frame: %s");
    break;
  case 3:
    FVar8 = FMovieSceneTimeWarpVariant::AsFrameRate(&this->TimeScale);
    FMovieSceneTimeWarpFrameRate::GetFrameRate
              ((FMovieSceneTimeWarpFrameRate *)CONCAT26(extraout_var,FVar8));
    TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"Frame Rate: [%i/%i]");
    goto LAB_1461d79c7;
  case 4:
    FMovieSceneTimeWarpVariant::AsLoop(&this->TimeScale);
    fVar20 = __real_3f800000;
    local_1b8._4_4_ = (this->Offset).SubFrame;
    FVar11 = (this->Offset).FrameNumber;
    if (local_1b8._4_4_ == 0.0) {
      uVar12 = -FVar11.Value;
      fVar14 = 0.0;
    }
    else {
      uVar12 = ~FVar11.Value;
      fVar14 = __real_3f800000 - local_1b8._4_4_;
      if (::FFrameTime::MaxSubframe <= __real_3f800000 - local_1b8._4_4_) {
        fVar14 = ::FFrameTime::MaxSubframe;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
    }
    local_1b8 = (ulonglong)local_1dc;
    fVar14 = fVar14 + 0.0;
    local_208 = ((int)ROUND((fVar14 + fVar14) - __real_3f000000) >> 1) + local_1dc + uVar12;
    iVar7 = (int)fVar14;
    fVar21 = fVar14;
    if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar14)) {
      auVar23._4_4_ = fVar14;
      auVar23._0_4_ = fVar14;
      auVar23._8_8_ = 0;
      uVar12 = movmskps(local_1dc,auVar23);
      fVar21 = (float)(int)(iVar7 - (uVar12 & 1));
    }
    fStack_204 = fVar14 - fVar21;
    if (::FFrameTime::MaxSubframe <= fVar14 - fVar21) {
      fStack_204 = ::FFrameTime::MaxSubframe;
    }
    if (fStack_204 <= 0.0) {
      fStack_204 = 0.0;
    }
    local_138 = CONCAT44(fStack_204,local_208);
    ::FString::PrintfImpl(&local_f8,L"Frame: %d Subframe: %f");
    local_190 = this->Offset;
    if (local_190.SubFrame == 0.0) {
      local_200 = -local_190.FrameNumber.Value.Value;
      fStack_1fc = 0.0;
    }
    else {
      local_200 = ~local_190.FrameNumber.Value.Value;
      fStack_1fc = fVar20 - local_190.SubFrame;
      if (::FFrameTime::MaxSubframe <= fVar20 - local_190.SubFrame) {
        fStack_1fc = ::FFrameTime::MaxSubframe;
      }
      if (fStack_1fc <= 0.0) {
        fStack_1fc = 0.0;
      }
    }
    local_188 = CONCAT44(fStack_1fc,local_200);
    ::FString::PrintfImpl(&local_108,L"Frame: %d Subframe: %f");
    TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"Loop [%s:%s)");
    local_118.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
      local_118.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
    }
    break;
  case 5:
    FMovieSceneTimeWarpVariant::AsClamp(&this->TimeScale);
    fVar20 = __real_3f800000;
    local_1c0._4_4_ = (this->Offset).SubFrame;
    FVar11 = (this->Offset).FrameNumber;
    if (local_1c0._4_4_ == 0.0) {
      uVar12 = -FVar11.Value;
      fVar14 = 0.0;
    }
    else {
      uVar12 = ~FVar11.Value;
      fVar14 = __real_3f800000 - local_1c0._4_4_;
      if (::FFrameTime::MaxSubframe <= __real_3f800000 - local_1c0._4_4_) {
        fVar14 = ::FFrameTime::MaxSubframe;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
    }
    local_1c0 = (ulonglong)local_1d8;
    fVar14 = fVar14 + 0.0;
    local_218 = ((int)ROUND((fVar14 + fVar14) - __real_3f000000) >> 1) + local_1d8 + uVar12;
    iVar7 = (int)fVar14;
    fVar21 = fVar14;
    if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar14)) {
      auVar24._4_4_ = fVar14;
      auVar24._0_4_ = fVar14;
      auVar24._8_8_ = 0;
      uVar12 = movmskps(local_1d8,auVar24);
      fVar21 = (float)(int)(iVar7 - (uVar12 & 1));
    }
    fStack_214 = fVar14 - fVar21;
    if (::FFrameTime::MaxSubframe <= fVar14 - fVar21) {
      fStack_214 = ::FFrameTime::MaxSubframe;
    }
    if (fStack_214 <= 0.0) {
      fStack_214 = 0.0;
    }
    local_180 = CONCAT44(fStack_214,local_218);
    ::FString::PrintfImpl(&local_d8,L"Frame: %d Subframe: %f");
    local_178 = this->Offset;
    if (local_178.SubFrame == 0.0) {
      local_1f8 = -local_178.FrameNumber.Value.Value;
      fStack_1f4 = 0.0;
    }
    else {
      local_1f8 = ~local_178.FrameNumber.Value.Value;
      fStack_1f4 = fVar20 - local_178.SubFrame;
      if (::FFrameTime::MaxSubframe <= fVar20 - local_178.SubFrame) {
        fStack_1f4 = ::FFrameTime::MaxSubframe;
      }
      if (fStack_1f4 <= 0.0) {
        fStack_1f4 = 0.0;
      }
    }
    local_1b0 = CONCAT44(fStack_1f4,local_1f8);
    ::FString::PrintfImpl(&local_e8,L"Frame: %d Subframe: %f");
    TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"Clamp [%s:%s)");
    local_118.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      local_118.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
    }
    break;
  case 6:
    FMovieSceneTimeWarpVariant::AsLoopFloat(&this->TimeScale);
    fVar20 = __real_3f800000;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (double)local_1d4;
    auVar27 = roundpd(in_XMM2,auVar17,1);
    dVar15 = auVar27._0_8_;
    dVar16 = dVar15;
    if (__real_41dfffffffc00000 <= dVar15) {
      dVar16 = __real_41dfffffffc00000;
    }
    if (dVar16 <= __real_c1e0000000000000) {
      dVar16 = __real_c1e0000000000000;
    }
    iVar7 = (int)dVar16;
    fVar14 = (float)((double)local_1d4 - dVar15);
    if (::FFrameTime::MaxSubframe <= fVar14) {
      fVar14 = ::FFrameTime::MaxSubframe;
    }
    auVar18 = ZEXT416((uint)fVar14);
    if (fVar14 <= 0.0) {
      auVar18 = ZEXT816(0) << 0x20;
    }
    if (::FFrameTime::MaxSubframe <= auVar18._0_4_) {
      auVar18._0_4_ = ::FFrameTime::MaxSubframe;
    }
    if (auVar18._0_4_ <= 0.0) {
      auVar2._12_4_ = 0;
      auVar2._0_12_ = auVar18._4_12_;
      auVar18 = auVar2 << 0x20;
    }
    local_1b0 = CONCAT44(auVar18._0_4_,iVar7);
    local_170 = this->Offset;
    if (local_170.SubFrame == 0.0) {
      uVar12 = -local_170.FrameNumber.Value.Value;
      fVar14 = 0.0;
    }
    else {
      uVar12 = ~local_170.FrameNumber.Value.Value;
      fVar14 = __real_3f800000 - local_170.SubFrame;
      if (::FFrameTime::MaxSubframe <= __real_3f800000 - local_170.SubFrame) {
        fVar14 = ::FFrameTime::MaxSubframe;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
    }
    fVar14 = fVar14 + auVar18._0_4_;
    local_218 = ((int)ROUND((fVar14 + fVar14) - __real_3f000000) >> 1) + uVar12 + iVar7;
    iVar13 = (int)fVar14;
    fVar21 = fVar14;
    if ((iVar13 != -0x80000000) && ((float)iVar13 != fVar14)) {
      auVar25._4_4_ = fVar14;
      auVar25._0_4_ = fVar14;
      auVar25._8_8_ = 0;
      uVar12 = movmskps(iVar7,auVar25);
      fVar21 = (float)(int)(iVar13 - (uVar12 & 1));
    }
    fStack_214 = fVar14 - fVar21;
    if (::FFrameTime::MaxSubframe <= fVar14 - fVar21) {
      fStack_214 = ::FFrameTime::MaxSubframe;
    }
    if (fStack_214 <= 0.0) {
      fStack_214 = 0.0;
    }
    local_168 = CONCAT44(fStack_214,local_218);
    ::FString::PrintfImpl(&local_b8,L"Frame: %d Subframe: %f");
    local_160 = this->Offset;
    if (local_160.SubFrame == 0.0) {
      local_1f0 = -local_160.FrameNumber.Value.Value;
      fStack_1ec = 0.0;
    }
    else {
      local_1f0 = ~local_160.FrameNumber.Value.Value;
      fStack_1ec = fVar20 - local_160.SubFrame;
      if (::FFrameTime::MaxSubframe <= fVar20 - local_160.SubFrame) {
        fStack_1ec = ::FFrameTime::MaxSubframe;
      }
      if (fStack_1ec <= 0.0) {
        fStack_1ec = 0.0;
      }
    }
    local_1c8 = CONCAT44(fStack_1ec,local_1f0);
    ::FString::PrintfImpl(&local_c8,L"Frame: %d Subframe: %f");
    TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"Loop [%s:%s)");
    local_118.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      local_118.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    }
    break;
  case 7:
    FMovieSceneTimeWarpVariant::AsClampFloat(&this->TimeScale);
    fVar20 = __real_3f800000;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = (double)local_1d0;
    auVar27 = roundpd(in_XMM2,auVar27,1);
    dVar15 = auVar27._0_8_;
    dVar16 = dVar15;
    if (__real_41dfffffffc00000 <= dVar15) {
      dVar16 = __real_41dfffffffc00000;
    }
    if (dVar16 <= __real_c1e0000000000000) {
      dVar16 = __real_c1e0000000000000;
    }
    iVar7 = (int)dVar16;
    fVar14 = (float)((double)local_1d0 - dVar15);
    if (::FFrameTime::MaxSubframe <= fVar14) {
      fVar14 = ::FFrameTime::MaxSubframe;
    }
    auVar19 = ZEXT416((uint)fVar14);
    if (fVar14 <= 0.0) {
      auVar19 = ZEXT816(0) << 0x20;
    }
    if (::FFrameTime::MaxSubframe <= auVar19._0_4_) {
      auVar19._0_4_ = ::FFrameTime::MaxSubframe;
    }
    if (auVar19._0_4_ <= 0.0) {
      auVar3._12_4_ = 0;
      auVar3._0_12_ = auVar19._4_12_;
      auVar19 = auVar3 << 0x20;
    }
    local_1c8 = CONCAT44(auVar19._0_4_,iVar7);
    local_158 = this->Offset;
    if (local_158.SubFrame == 0.0) {
      uVar12 = -local_158.FrameNumber.Value.Value;
      fVar14 = 0.0;
    }
    else {
      uVar12 = ~local_158.FrameNumber.Value.Value;
      fVar14 = __real_3f800000 - local_158.SubFrame;
      if (::FFrameTime::MaxSubframe <= __real_3f800000 - local_158.SubFrame) {
        fVar14 = ::FFrameTime::MaxSubframe;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
    }
    fVar14 = fVar14 + auVar19._0_4_;
    local_218 = ((int)ROUND((fVar14 + fVar14) - __real_3f000000) >> 1) + uVar12 + iVar7;
    iVar13 = (int)fVar14;
    fVar21 = fVar14;
    if ((iVar13 != -0x80000000) && ((float)iVar13 != fVar14)) {
      auVar26._4_4_ = fVar14;
      auVar26._0_4_ = fVar14;
      auVar26._8_8_ = 0;
      uVar12 = movmskps(iVar7,auVar26);
      fVar21 = (float)(int)(iVar13 - (uVar12 & 1));
    }
    fStack_214 = fVar14 - fVar21;
    if (::FFrameTime::MaxSubframe <= fVar14 - fVar21) {
      fStack_214 = ::FFrameTime::MaxSubframe;
    }
    if (fStack_214 <= 0.0) {
      fStack_214 = 0.0;
    }
    local_150 = CONCAT44(fStack_214,local_218);
    ::FString::PrintfImpl(&local_98,L"Frame: %d Subframe: %f");
    local_148 = this->Offset;
    if (local_148.SubFrame == 0.0) {
      local_210 = -local_148.FrameNumber.Value.Value;
      fStack_20c = 0.0;
    }
    else {
      local_210 = ~local_148.FrameNumber.Value.Value;
      fStack_20c = fVar20 - local_148.SubFrame;
      if (::FFrameTime::MaxSubframe <= fVar20 - local_148.SubFrame) {
        fStack_20c = ::FFrameTime::MaxSubframe;
      }
      if (fStack_20c <= 0.0) {
        fStack_20c = 0.0;
      }
    }
    local_1a8 = CONCAT44(fStack_20c,local_210);
    ::FString::PrintfImpl(&local_a8,L"Frame: %d Subframe: %f");
    TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"Clamp [%s:%s)");
    local_118.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      local_118.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    }
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
LAB_1461d79c7:
  local_1a0[0].ComparisonIndex.Value = *(uint *)&(this->Offset).FrameNumber;
  local_1a0[0].Number = (uint)(this->Offset).SubFrame;
  local_1e8.FrameNumber.Value = 0;
  local_1e8.SubFrame = 0.0;
  local_1a8 = 0;
  if ((local_1a0[0].ComparisonIndex.Value != 0) || ((float)local_1a0[0].Number != 0.0)) {
    local_130 = local_1a0[0];
    ::FString::PrintfImpl(&local_78,L"Frame: %d Subframe: %f");
    TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L" + %s");
LAB_1461d7a37:
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// TransformTime @ 1461d8b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FFrameTime __thiscall
FMovieSceneNestedSequenceTransform::TransformTime
          (FMovieSceneNestedSequenceTransform *this,FFrameTime param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  float fVar3;
  uchar uVar4;
  byte bVar5;
  bool bVar6;
  FMovieSceneTimeWarpFixedFrame FVar7;
  FMovieSceneTimeWarpLoop FVar8;
  FMovieSceneTimeWarpClamp FVar9;
  FMovieSceneTimeWarpLoopFloat FVar10;
  FMovieSceneTimeWarpClampFloat FVar11;
  uint uVar12;
  FMovieSceneTimeWarpFrameRate FVar13;
  FFrameTime FVar14;
  undefined4 extraout_var;
  undefined2 extraout_var_04;
  FFrameRate FVar15;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  FFrameTime FVar16;
  UMovieSceneTimeWarpGetter *pUVar17;
  int iVar18;
  FMovieSceneTimeTransform *in_R8;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_b8 [32];
  FFrameTime local_98;
  float fStack_8c;
  float local_78;
  FFrameTime local_74;
  undefined1 local_64 [8];
  undefined1 local_5c [8];
  undefined1 local_54 [8];
  undefined1 local_4c [12];
  FFrameTime local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((*(ulonglong *)(this->TimeScale).Variant.Data & 0xfff8000000000000) == 0xfff8000000000000) {
    uVar4 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this);
    bVar5 = uVar4 + 1;
    if (7 < bVar5) goto LAB_1461d909c;
  }
  else {
    bVar5 = 0;
  }
  iVar18 = (int)in_R8;
  fStack_8c = (float)((ulonglong)in_R8 >> 0x20);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar5) {
  case 0:
    local_78 = FMovieSceneTimeWarpVariant::AsFixedPlayRateFloat(&this->TimeScale);
    local_74 = this->Offset;
    if (((float)((uint)local_78 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!FMath::IsNearlyZero(TimeScale)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneTimeTransform.h"
                           ,0x2c,
                           L"It is invalid to create a linear transformation with a zero timescale. This case should be handled externally by FMovieSceneTimeWarpVariant and FLAG_Zero."
                          ), bVar6)) {
      pcVar2 = (code *)swi(3);
      FVar14 = (FFrameTime)(*pcVar2)();
      return FVar14;
    }
    ::operator*(param_1,in_R8);
    return param_1;
  case 1:
    pUVar17 = FMovieSceneTimeWarpVariant::AsCustom(&this->TimeScale);
    if (pUVar17 != (UMovieSceneTimeWarpGetter *)0x0) {
      local_98.SubFrame = (this->Offset).SubFrame;
      fStack_8c = local_98.SubFrame + fStack_8c;
      local_98.FrameNumber.Value =
           ((int)ROUND((fStack_8c + fStack_8c) - __real_3f000000) >> 1) + iVar18 +
           (this->Offset).FrameNumber.Value;
      iVar18 = (int)fStack_8c;
      fVar19 = fStack_8c;
      if ((iVar18 != -0x80000000) && ((float)iVar18 != fStack_8c)) {
        auVar24._4_4_ = fStack_8c;
        auVar24._0_4_ = fStack_8c;
        auVar24._8_8_ = 0;
        uVar12 = movmskps(local_98.FrameNumber.Value,auVar24);
        fVar19 = (float)(int)(iVar18 - (uVar12 & 1));
      }
      local_98.SubFrame = fStack_8c - fVar19;
      if (::FFrameTime::MaxSubframe <= fStack_8c - fVar19) {
        local_98.SubFrame = ::FFrameTime::MaxSubframe;
      }
      if (local_98.SubFrame <= 0.0) {
        local_98.SubFrame = 0.0;
      }
      (**(code **)(pUVar17->_padding_ + 0x2c0))(pUVar17,param_1,local_98);
      return param_1;
    }
LAB_1461d909c:
    *(FMovieSceneTimeTransform **)param_1 = in_R8;
    return param_1;
  case 2:
    FVar7 = FMovieSceneTimeWarpVariant::AsFixedTime(&this->TimeScale);
    local_98.SubFrame = 0.0;
    local_98.FrameNumber.Value = *(uint *)CONCAT44(extraout_var,FVar7.FrameNumber.Value);
    ::operator+(param_1,local_98);
    return param_1;
  case 3:
    FVar13 = FMovieSceneTimeWarpVariant::AsFrameRate(&this->TimeScale);
    FVar15 = FMovieSceneTimeWarpFrameRate::GetFrameRate
                       ((FMovieSceneTimeWarpFrameRate *)CONCAT26(extraout_var_04,FVar13));
    local_98.SubFrame = (this->Offset).SubFrame;
    fStack_8c = local_98.SubFrame + fStack_8c;
    local_98.FrameNumber.Value =
         ((int)ROUND((fStack_8c + fStack_8c) - __real_3f000000) >> 1) + iVar18 +
         (this->Offset).FrameNumber.Value;
    iVar18 = (int)fStack_8c;
    fVar19 = fStack_8c;
    if ((iVar18 != -0x80000000) && ((float)iVar18 != fStack_8c)) {
      auVar20._4_4_ = fStack_8c;
      auVar20._0_4_ = fStack_8c;
      auVar20._8_8_ = 0;
      uVar12 = movmskps(local_98.FrameNumber.Value,auVar20);
      fVar19 = (float)(int)(iVar18 - (uVar12 & 1));
    }
    local_98.SubFrame = fStack_8c - fVar19;
    if (::FFrameTime::MaxSubframe <= fStack_8c - fVar19) {
      local_98.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (local_98.SubFrame <= 0.0) {
      local_98.SubFrame = 0.0;
    }
    ConvertFrameTime(param_1,(FFrameRate)local_98,*(FFrameRate *)FVar15);
    return param_1;
  case 4:
    FVar14 = this->Offset;
    FVar8 = FMovieSceneTimeWarpVariant::AsLoop(&this->TimeScale);
    local_98.SubFrame = (this->Offset).SubFrame;
    local_98.SubFrame = local_98.SubFrame + fStack_8c;
    local_98.FrameNumber.Value =
         ((int)ROUND((local_98.SubFrame + local_98.SubFrame) - __real_3f000000) >> 1) + iVar18 +
         (this->Offset).FrameNumber.Value;
    iVar18 = (int)local_98.SubFrame;
    fVar19 = local_98.SubFrame;
    if ((iVar18 != -0x80000000) && ((float)iVar18 != local_98.SubFrame)) {
      auVar21._4_4_ = local_98.SubFrame;
      auVar21._0_4_ = local_98.SubFrame;
      auVar21._8_8_ = 0;
      uVar12 = movmskps(local_98.FrameNumber.Value,auVar21);
      fVar19 = (float)(int)(iVar18 - (uVar12 & 1));
    }
    fVar3 = local_98.SubFrame - fVar19;
    if (::FFrameTime::MaxSubframe <= local_98.SubFrame - fVar19) {
      fVar3 = ::FFrameTime::MaxSubframe;
    }
    auVar25 = ZEXT416((uint)fVar3);
    if (fVar3 <= 0.0) {
      auVar25 = ZEXT816(0) << 0x20;
    }
    local_98.SubFrame = (float)auVar25._0_4_;
    local_40 = FVar14;
    FVar16 = FMovieSceneTimeWarpLoop::LoopTime
                       ((FMovieSceneTimeWarpLoop *)CONCAT44(extraout_var_00,FVar8.Duration.Value),
                        (FFrameTime)local_64);
    break;
  case 5:
    FVar14 = this->Offset;
    FVar9 = FMovieSceneTimeWarpVariant::AsClamp(&this->TimeScale);
    local_98.SubFrame = (this->Offset).SubFrame;
    local_98.SubFrame = local_98.SubFrame + fStack_8c;
    local_98.FrameNumber.Value =
         ((int)ROUND((local_98.SubFrame + local_98.SubFrame) - __real_3f000000) >> 1) + iVar18 +
         (this->Offset).FrameNumber.Value;
    iVar18 = (int)local_98.SubFrame;
    fVar19 = local_98.SubFrame;
    if ((iVar18 != -0x80000000) && ((float)iVar18 != local_98.SubFrame)) {
      auVar22._4_4_ = local_98.SubFrame;
      auVar22._0_4_ = local_98.SubFrame;
      auVar22._8_8_ = 0;
      uVar12 = movmskps(local_98.FrameNumber.Value,auVar22);
      fVar19 = (float)(int)(iVar18 - (uVar12 & 1));
    }
    fVar3 = local_98.SubFrame - fVar19;
    if (::FFrameTime::MaxSubframe <= local_98.SubFrame - fVar19) {
      fVar3 = ::FFrameTime::MaxSubframe;
    }
    auVar25 = ZEXT416((uint)fVar3);
    if (fVar3 <= 0.0) {
      auVar25 = ZEXT816(0) << 0x20;
    }
    local_98.SubFrame = (float)auVar25._0_4_;
    local_40 = FVar14;
    FVar16 = FMovieSceneTimeWarpClamp::Clamp
                       ((FMovieSceneTimeWarpClamp *)CONCAT44(extraout_var_01,FVar9.Max.Value),
                        (FFrameTime)local_5c);
    break;
  case 6:
    FVar14 = this->Offset;
    FVar10 = FMovieSceneTimeWarpVariant::AsLoopFloat(&this->TimeScale);
    local_98.SubFrame = (this->Offset).SubFrame;
    local_98.SubFrame = local_98.SubFrame + fStack_8c;
    local_98.FrameNumber.Value =
         ((int)ROUND((local_98.SubFrame + local_98.SubFrame) - __real_3f000000) >> 1) + iVar18 +
         (this->Offset).FrameNumber.Value;
    iVar18 = (int)local_98.SubFrame;
    fVar19 = local_98.SubFrame;
    if ((iVar18 != -0x80000000) && ((float)iVar18 != local_98.SubFrame)) {
      auVar23._4_4_ = local_98.SubFrame;
      auVar23._0_4_ = local_98.SubFrame;
      auVar23._8_8_ = 0;
      uVar12 = movmskps(local_98.FrameNumber.Value,auVar23);
      fVar19 = (float)(int)(iVar18 - (uVar12 & 1));
    }
    fVar3 = local_98.SubFrame - fVar19;
    if (::FFrameTime::MaxSubframe <= local_98.SubFrame - fVar19) {
      fVar3 = ::FFrameTime::MaxSubframe;
    }
    auVar25 = ZEXT416((uint)fVar3);
    if (fVar3 <= 0.0) {
      auVar25 = ZEXT816(0) << 0x20;
    }
    local_98.SubFrame = (float)auVar25._0_4_;
    local_40 = FVar14;
    FVar16 = FMovieSceneTimeWarpLoopFloat::LoopTime
                       ((FMovieSceneTimeWarpLoopFloat *)CONCAT44(extraout_var_02,FVar10.Duration),
                        (FFrameTime)local_54);
    break;
  case 7:
    FVar14 = this->Offset;
    FVar11 = FMovieSceneTimeWarpVariant::AsClampFloat(&this->TimeScale);
    local_98.SubFrame = (this->Offset).SubFrame;
    local_98.SubFrame = local_98.SubFrame + fStack_8c;
    local_98.FrameNumber.Value =
         ((int)ROUND((local_98.SubFrame + local_98.SubFrame) - __real_3f000000) >> 1) + iVar18 +
         (this->Offset).FrameNumber.Value;
    iVar18 = (int)local_98.SubFrame;
    fVar19 = local_98.SubFrame;
    if ((iVar18 != -0x80000000) && ((float)iVar18 != local_98.SubFrame)) {
      auVar25._4_4_ = local_98.SubFrame;
      auVar25._0_4_ = local_98.SubFrame;
      auVar25._8_8_ = 0;
      uVar12 = movmskps(local_98.FrameNumber.Value,auVar25);
      fVar19 = (float)(int)(iVar18 - (uVar12 & 1));
    }
    fVar3 = local_98.SubFrame - fVar19;
    if (::FFrameTime::MaxSubframe <= local_98.SubFrame - fVar19) {
      fVar3 = ::FFrameTime::MaxSubframe;
    }
    auVar25 = ZEXT416((uint)fVar3);
    if (fVar3 <= 0.0) {
      auVar25 = ZEXT816(0) << 0x20;
    }
    local_98.SubFrame = (float)auVar25._0_4_;
    local_40 = FVar14;
    FVar16 = FMovieSceneTimeWarpClampFloat::Clamp
                       ((FMovieSceneTimeWarpClampFloat *)CONCAT44(extraout_var_03,FVar11.Max),
                        (FFrameTime)local_4c);
  }
  uVar1 = *(undefined8 *)FVar16;
  local_98.SubFrame = (float)((ulonglong)uVar1 >> 0x20);
  auVar25 = roundps(auVar25,ZEXT416((uint)(local_98.SubFrame - local_40.SubFrame)),1);
  fVar19 = (local_98.SubFrame - local_40.SubFrame) - auVar25._0_4_;
  *(float *)((longlong)param_1 + 4) = fVar19;
  *(int *)param_1 = (int)auVar25._0_4_ + ((int)uVar1 - FVar14.FrameNumber.Value);
  if (::FFrameTime::MaxSubframe <= fVar19) {
    fVar19 = ::FFrameTime::MaxSubframe;
  }
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  *(float *)((longlong)param_1 + 4) = fVar19;
  return param_1;
}

// TransformTime @ 1461d9100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FFrameTime __thiscall
FMovieSceneNestedSequenceTransform::TransformTime
          (FMovieSceneNestedSequenceTransform *this,FFrameTime param_1,FTransformTimeParams *param_2
          )

{
  undefined4 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  uchar uVar4;
  byte bVar5;
  bool bVar6;
  FMovieSceneTimeWarpFixedFrame FVar7;
  FMovieSceneTimeWarpLoop FVar8;
  FMovieSceneTimeWarpClamp FVar9;
  FMovieSceneTimeWarpLoopFloat FVar10;
  FMovieSceneTimeWarpClampFloat FVar11;
  uint uVar12;
  FMovieSceneTimeWarpFrameRate FVar13;
  undefined4 extraout_var;
  undefined2 extraout_var_05;
  FFrameRate FVar14;
  undefined4 extraout_var_00;
  FFrameTime FVar15;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  FFrameTime FVar16;
  UMovieSceneTimeWarpGetter *pUVar17;
  int iVar18;
  longlong in_R9;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auStack_e8 [32];
  FFrameTime local_c8;
  undefined8 local_c0;
  undefined4 local_b4 [5];
  float local_a0;
  FFrameTime local_9c;
  undefined1 local_8c [8];
  undefined1 local_84 [8];
  undefined1 local_7c [8];
  undefined1 local_74 [8];
  undefined1 local_6c [12];
  FFrameTime local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((*(ulonglong *)(this->TimeScale).Variant.Data & 0xfff8000000000000) == 0xfff8000000000000) {
    uVar4 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this);
    bVar5 = uVar4 + 1;
    if (bVar5 < 8) goto LAB_1461d9162;
    goto LAB_1461d97dc;
  }
  bVar5 = 0;
LAB_1461d9162:
  iVar18 = (int)param_2;
  local_c0._4_4_ = (float)((ulonglong)param_2 >> 0x20);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar5) {
  case 0:
    local_a0 = FMovieSceneTimeWarpVariant::AsFixedPlayRateFloat(&this->TimeScale);
    local_9c = this->Offset;
    if (((float)((uint)local_a0 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!FMath::IsNearlyZero(TimeScale)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneTimeTransform.h"
                           ,0x2c,
                           L"It is invalid to create a linear transformation with a zero timescale. This case should be handled externally by FMovieSceneTimeWarpVariant and FLAG_Zero."
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      FVar15 = (FFrameTime)(*pcVar3)();
      return FVar15;
    }
    ::operator*(param_1,(FMovieSceneTimeTransform *)param_2);
    break;
  case 1:
    pUVar17 = FMovieSceneTimeWarpVariant::AsCustom(&this->TimeScale);
    if (pUVar17 != (UMovieSceneTimeWarpGetter *)0x0) {
      local_c8.SubFrame = (this->Offset).SubFrame;
      local_c0._4_4_ = local_c8.SubFrame + local_c0._4_4_;
      local_c8.FrameNumber.Value =
           ((int)ROUND((local_c0._4_4_ + local_c0._4_4_) - __real_3f000000) >> 1) + iVar18 +
           (this->Offset).FrameNumber.Value;
      iVar18 = (int)local_c0._4_4_;
      fVar19 = local_c0._4_4_;
      if ((iVar18 != -0x80000000) && ((float)iVar18 != local_c0._4_4_)) {
        auVar25._4_4_ = local_c0._4_4_;
        auVar25._0_4_ = local_c0._4_4_;
        auVar25._8_8_ = 0;
        uVar12 = movmskps(local_c8.FrameNumber.Value,auVar25);
        fVar19 = (float)(int)(iVar18 - (uVar12 & 1));
      }
      local_c8.SubFrame = local_c0._4_4_ - fVar19;
      if (::FFrameTime::MaxSubframe <= local_c0._4_4_ - fVar19) {
        local_c8.SubFrame = ::FFrameTime::MaxSubframe;
      }
      if (local_c8.SubFrame <= 0.0) {
        local_c8.SubFrame = 0.0;
      }
      local_60 = (FFrameTime)param_2;
      (**(code **)(pUVar17->_padding_ + 0x2c0))(pUVar17,param_1,local_c8);
      return param_1;
    }
    goto LAB_1461d97dc;
  case 2:
    FVar7 = FMovieSceneTimeWarpVariant::AsFixedTime(&this->TimeScale);
    local_c8.SubFrame = 0.0;
    local_c8.FrameNumber.Value = *(uint *)CONCAT44(extraout_var,FVar7.FrameNumber.Value);
    ::operator+(param_1,local_c8);
    break;
  case 3:
    FVar13 = FMovieSceneTimeWarpVariant::AsFrameRate(&this->TimeScale);
    FVar14 = FMovieSceneTimeWarpFrameRate::GetFrameRate
                       ((FMovieSceneTimeWarpFrameRate *)CONCAT26(extraout_var_05,FVar13));
    local_c8.SubFrame = (this->Offset).SubFrame;
    local_c0._4_4_ = local_c8.SubFrame + local_c0._4_4_;
    local_c8.FrameNumber.Value =
         ((int)ROUND((local_c0._4_4_ + local_c0._4_4_) - __real_3f000000) >> 1) + iVar18 +
         (this->Offset).FrameNumber.Value;
    iVar18 = (int)local_c0._4_4_;
    fVar19 = local_c0._4_4_;
    if ((iVar18 != -0x80000000) && ((float)iVar18 != local_c0._4_4_)) {
      auVar20._4_4_ = local_c0._4_4_;
      auVar20._0_4_ = local_c0._4_4_;
      auVar20._8_8_ = 0;
      uVar12 = movmskps(local_c8.FrameNumber.Value,auVar20);
      fVar19 = (float)(int)(iVar18 - (uVar12 & 1));
    }
    local_c8.SubFrame = local_c0._4_4_ - fVar19;
    if (::FFrameTime::MaxSubframe <= local_c0._4_4_ - fVar19) {
      local_c8.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (local_c8.SubFrame <= 0.0) {
      local_c8.SubFrame = 0.0;
    }
    local_c0 = param_2;
    ConvertFrameTime(param_1,(FFrameRate)local_c8,*(FFrameRate *)FVar14);
    break;
  case 4:
    puVar1 = *(undefined4 **)(in_R9 + 8);
    if (puVar1 == (undefined4 *)0x0) {
      FVar15 = this->Offset;
      FVar8 = FMovieSceneTimeWarpVariant::AsLoop(&this->TimeScale);
      local_c8.SubFrame = (this->Offset).SubFrame;
      local_c8.SubFrame = local_c8.SubFrame + local_c0._4_4_;
      local_c8.FrameNumber.Value =
           ((int)ROUND((local_c8.SubFrame + local_c8.SubFrame) - __real_3f000000) >> 1) + iVar18 +
           (this->Offset).FrameNumber.Value;
      iVar18 = (int)local_c8.SubFrame;
      fVar19 = local_c8.SubFrame;
      if ((iVar18 != -0x80000000) && ((float)iVar18 != local_c8.SubFrame)) {
        auVar22._4_4_ = local_c8.SubFrame;
        auVar22._0_4_ = local_c8.SubFrame;
        auVar22._8_8_ = 0;
        uVar12 = movmskps(local_c8.FrameNumber.Value,auVar22);
        fVar19 = (float)(int)(iVar18 - (uVar12 & 1));
      }
      fVar27 = local_c8.SubFrame - fVar19;
      if (::FFrameTime::MaxSubframe <= local_c8.SubFrame - fVar19) {
        fVar27 = ::FFrameTime::MaxSubframe;
      }
      auVar26 = ZEXT416((uint)fVar27);
      if (fVar27 <= 0.0) {
        auVar26 = ZEXT816(0) << 0x20;
      }
      local_c8.SubFrame = (float)auVar26._0_4_;
      local_60 = FVar15;
      FVar16 = FMovieSceneTimeWarpLoop::LoopTime
                         ((FMovieSceneTimeWarpLoop *)CONCAT44(extraout_var_01,FVar8.Duration.Value),
                          (FFrameTime)local_84);
      uVar2 = *(undefined8 *)FVar16;
      local_c8.SubFrame = (float)((ulonglong)uVar2 >> 0x20);
      auVar26 = roundps(auVar26,ZEXT416((uint)(local_c8.SubFrame - local_60.SubFrame)),1);
      fVar27 = (local_c8.SubFrame - local_60.SubFrame) - auVar26._0_4_;
      *(float *)((longlong)param_1 + 4) = fVar27;
      *(int *)param_1 = (int)auVar26._0_4_ + ((int)uVar2 - FVar15.FrameNumber.Value);
      fVar19 = ::FFrameTime::MaxSubframe;
      if (fVar27 <= ::FFrameTime::MaxSubframe) {
        fVar19 = fVar27;
      }
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      *(float *)((longlong)param_1 + 4) = fVar19;
    }
    else {
      if (local_b4 != puVar1) {
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
      }
      FVar15 = this->Offset;
      FVar8 = FMovieSceneTimeWarpVariant::AsLoop(&this->TimeScale);
      if ((*(char *)(*(longlong *)(in_R9 + 8) + 4) == '\0') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        FVar15 = (FFrameTime)(*pcVar3)();
        return FVar15;
      }
      local_c8.SubFrame = (this->Offset).SubFrame;
      local_c8.SubFrame = local_c8.SubFrame + local_c0._4_4_;
      local_c8.FrameNumber.Value =
           ((int)ROUND((local_c8.SubFrame + local_c8.SubFrame) - __real_3f000000) >> 1) + iVar18 +
           (this->Offset).FrameNumber.Value;
      iVar18 = (int)local_c8.SubFrame;
      fVar19 = local_c8.SubFrame;
      if ((iVar18 != -0x80000000) && ((float)iVar18 != local_c8.SubFrame)) {
        auVar21._4_4_ = local_c8.SubFrame;
        auVar21._0_4_ = local_c8.SubFrame;
        auVar21._8_8_ = 0;
        uVar12 = movmskps(local_c8.FrameNumber.Value,auVar21);
        fVar19 = (float)(int)(iVar18 - (uVar12 & 1));
      }
      fVar27 = local_c8.SubFrame - fVar19;
      if (::FFrameTime::MaxSubframe <= local_c8.SubFrame - fVar19) {
        fVar27 = ::FFrameTime::MaxSubframe;
      }
      auVar26 = ZEXT416((uint)fVar27);
      if (fVar27 <= 0.0) {
        auVar26 = ZEXT816(0) << 0x20;
      }
      local_c8.SubFrame = (float)auVar26._0_4_;
      local_60 = FVar15;
      FVar16 = FMovieSceneTimeWarpLoop::LoopTime
                         ((FMovieSceneTimeWarpLoop *)CONCAT44(extraout_var_00,FVar8.Duration.Value),
                          (FFrameTime)local_8c,(int *)local_c8);
      uVar2 = *(undefined8 *)FVar16;
      local_c8.SubFrame = (float)((ulonglong)uVar2 >> 0x20);
      auVar26 = roundps(auVar26,ZEXT416((uint)(local_c8.SubFrame - local_60.SubFrame)),1);
      fVar19 = (local_c8.SubFrame - local_60.SubFrame) - auVar26._0_4_;
      *(float *)((longlong)param_1 + 4) = fVar19;
      *(int *)param_1 = (int)auVar26._0_4_ + ((int)uVar2 - FVar15.FrameNumber.Value);
      if (::FFrameTime::MaxSubframe <= fVar19) {
        fVar19 = ::FFrameTime::MaxSubframe;
      }
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      *(float *)((longlong)param_1 + 4) = fVar19;
    }
    break;
  case 5:
    if ((*(byte *)(in_R9 + 0x10) & 1) == 0) {
      FVar15 = this->Offset;
      FVar9 = FMovieSceneTimeWarpVariant::AsClamp(&this->TimeScale);
      local_c8.SubFrame = (this->Offset).SubFrame;
      local_c8.SubFrame = local_c8.SubFrame + local_c0._4_4_;
      local_c8.FrameNumber.Value =
           ((int)ROUND((local_c8.SubFrame + local_c8.SubFrame) - __real_3f000000) >> 1) + iVar18 +
           (this->Offset).FrameNumber.Value;
      iVar18 = (int)local_c8.SubFrame;
      fVar19 = local_c8.SubFrame;
      if ((iVar18 != -0x80000000) && ((float)iVar18 != local_c8.SubFrame)) {
        auVar23._4_4_ = local_c8.SubFrame;
        auVar23._0_4_ = local_c8.SubFrame;
        auVar23._8_8_ = 0;
        uVar12 = movmskps(local_c8.FrameNumber.Value,auVar23);
        fVar19 = (float)(int)(iVar18 - (uVar12 & 1));
      }
      fVar27 = local_c8.SubFrame - fVar19;
      if (::FFrameTime::MaxSubframe <= local_c8.SubFrame - fVar19) {
        fVar27 = ::FFrameTime::MaxSubframe;
      }
      auVar26 = ZEXT416((uint)fVar27);
      if (fVar27 <= 0.0) {
        auVar26 = ZEXT816(0) << 0x20;
      }
      local_c8.SubFrame = (float)auVar26._0_4_;
      local_60 = FVar15;
      FVar16 = FMovieSceneTimeWarpClamp::Clamp
                         ((FMovieSceneTimeWarpClamp *)CONCAT44(extraout_var_02,FVar9.Max.Value),
                          (FFrameTime)local_7c);
      goto LAB_1461d959c;
    }
    goto LAB_1461d97dc;
  case 6:
    FVar15 = this->Offset;
    FVar10 = FMovieSceneTimeWarpVariant::AsLoopFloat(&this->TimeScale);
    local_c8.SubFrame = (this->Offset).SubFrame;
    local_c8.SubFrame = local_c8.SubFrame + local_c0._4_4_;
    local_c8.FrameNumber.Value =
         ((int)ROUND((local_c8.SubFrame + local_c8.SubFrame) - __real_3f000000) >> 1) + iVar18 +
         (this->Offset).FrameNumber.Value;
    iVar18 = (int)local_c8.SubFrame;
    fVar19 = local_c8.SubFrame;
    if ((iVar18 != -0x80000000) && ((float)iVar18 != local_c8.SubFrame)) {
      auVar24._4_4_ = local_c8.SubFrame;
      auVar24._0_4_ = local_c8.SubFrame;
      auVar24._8_8_ = 0;
      uVar12 = movmskps(local_c8.FrameNumber.Value,auVar24);
      fVar19 = (float)(int)(iVar18 - (uVar12 & 1));
    }
    fVar27 = local_c8.SubFrame - fVar19;
    if (::FFrameTime::MaxSubframe <= local_c8.SubFrame - fVar19) {
      fVar27 = ::FFrameTime::MaxSubframe;
    }
    auVar26 = ZEXT416((uint)fVar27);
    if (fVar27 <= 0.0) {
      auVar26 = ZEXT816(0) << 0x20;
    }
    local_c8.SubFrame = (float)auVar26._0_4_;
    local_60 = FVar15;
    FVar16 = FMovieSceneTimeWarpLoopFloat::LoopTime
                       ((FMovieSceneTimeWarpLoopFloat *)CONCAT44(extraout_var_03,FVar10.Duration),
                        (FFrameTime)local_74);
LAB_1461d959c:
    uVar2 = *(undefined8 *)FVar16;
    local_c8.SubFrame = (float)((ulonglong)uVar2 >> 0x20);
    auVar26 = roundps(auVar26,ZEXT416((uint)(local_c8.SubFrame - local_60.SubFrame)),1);
    fVar19 = (local_c8.SubFrame - local_60.SubFrame) - auVar26._0_4_;
    *(float *)((longlong)param_1 + 4) = fVar19;
    *(int *)param_1 = (int)auVar26._0_4_ + ((int)uVar2 - FVar15.FrameNumber.Value);
    if (::FFrameTime::MaxSubframe <= fVar19) {
      fVar19 = ::FFrameTime::MaxSubframe;
    }
    if (fVar19 <= 0.0) {
      fVar19 = 0.0;
    }
    *(float *)((longlong)param_1 + 4) = fVar19;
    break;
  case 7:
    if ((*(byte *)(in_R9 + 0x10) & 1) == 0) {
      FVar15 = this->Offset;
      FVar11 = FMovieSceneTimeWarpVariant::AsClampFloat(&this->TimeScale);
      local_c8.SubFrame = (this->Offset).SubFrame;
      local_c8.SubFrame = local_c8.SubFrame + local_c0._4_4_;
      local_c8.FrameNumber.Value =
           ((int)ROUND((local_c8.SubFrame + local_c8.SubFrame) - __real_3f000000) >> 1) + iVar18 +
           (this->Offset).FrameNumber.Value;
      iVar18 = (int)local_c8.SubFrame;
      fVar19 = local_c8.SubFrame;
      if ((iVar18 != -0x80000000) && ((float)iVar18 != local_c8.SubFrame)) {
        auVar26._4_4_ = local_c8.SubFrame;
        auVar26._0_4_ = local_c8.SubFrame;
        auVar26._8_8_ = 0;
        uVar12 = movmskps(local_c8.FrameNumber.Value,auVar26);
        fVar19 = (float)(int)(iVar18 - (uVar12 & 1));
      }
      fVar27 = local_c8.SubFrame - fVar19;
      if (::FFrameTime::MaxSubframe <= local_c8.SubFrame - fVar19) {
        fVar27 = ::FFrameTime::MaxSubframe;
      }
      auVar26 = ZEXT416((uint)fVar27);
      if (fVar27 <= 0.0) {
        auVar26 = ZEXT816(0) << 0x20;
      }
      local_c8.SubFrame = (float)auVar26._0_4_;
      local_60 = FVar15;
      FVar16 = FMovieSceneTimeWarpClampFloat::Clamp
                         ((FMovieSceneTimeWarpClampFloat *)CONCAT44(extraout_var_04,FVar11.Max),
                          (FFrameTime)local_6c);
      goto LAB_1461d959c;
    }
LAB_1461d97dc:
    *(FTransformTimeParams **)param_1 = param_2;
  }
  return param_1;
}

