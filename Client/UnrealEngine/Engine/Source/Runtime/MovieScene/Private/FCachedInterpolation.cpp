// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 20

// FCachedInterpolation @ 146092b00

FCachedInterpolation * __thiscall
UE::MovieScene::Interpolation::FCachedInterpolation::FCachedInterpolation
          (FCachedInterpolation *this,FCachedInterpolationRange *param_1,FConstantValue *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&param_2->Origin;
  (this->Data)._padding_ = (longlong)param_2->Value;
  (this->Data)._padding_ = lVar1;
  (this->Data).TypeIndex = '\x01';
  this->Range = *param_1;
  return this;
}

// FCachedInterpolation @ 146092b20

FCachedInterpolation * __thiscall
UE::MovieScene::Interpolation::FCachedInterpolation::FCachedInterpolation
          (FCachedInterpolation *this,FCachedInterpolationRange *param_1,
          FCubicBezierInterpolation *param_2)

{
  double dVar1;
  longlong lVar2;
  
  dVar1 = param_2->P0;
  (this->Data)._padding_ = (longlong)param_2->DX;
  (this->Data)._padding_ = (longlong)dVar1;
  dVar1 = param_2->P2;
  (this->Data)._padding_ = (longlong)param_2->P1;
  (this->Data)._padding_ = (longlong)dVar1;
  lVar2 = *(longlong *)&param_2->Origin;
  (this->Data)._padding_ = (longlong)param_2->P3;
  (this->Data)._padding_ = lVar2;
  (this->Data).TypeIndex = '\x06';
  this->Range = *param_1;
  return this;
}

// FCachedInterpolation @ 146092b50

FCachedInterpolation * __thiscall
UE::MovieScene::Interpolation::FCachedInterpolation::FCachedInterpolation
          (FCachedInterpolation *this,FCachedInterpolationRange *param_1,
          FCubicInterpolation *param_2)

{
  double dVar1;
  longlong lVar2;
  
  dVar1 = param_2->B;
  (this->Data)._padding_ = (longlong)param_2->A;
  (this->Data)._padding_ = (longlong)dVar1;
  dVar1 = param_2->Constant;
  (this->Data)._padding_ = (longlong)param_2->C;
  (this->Data)._padding_ = (longlong)dVar1;
  lVar2 = *(longlong *)&param_2->Origin;
  (this->Data)._padding_ = (longlong)param_2->DX;
  (this->Data)._padding_ = lVar2;
  (this->Data).TypeIndex = '\x04';
  this->Range = *param_1;
  return this;
}

// FCachedInterpolation @ 146092b80

FCachedInterpolation * __thiscall
UE::MovieScene::Interpolation::FCachedInterpolation::FCachedInterpolation
          (FCachedInterpolation *this,FCachedInterpolationRange *param_1,
          FLinearInterpolation *param_2)

{
  double dVar1;
  
  dVar1 = param_2->Constant;
  (this->Data)._padding_ = (longlong)param_2->Coefficient;
  (this->Data)._padding_ = (longlong)dVar1;
  (this->Data)._padding_ = *(longlong *)&param_2->Origin;
  (this->Data).TypeIndex = '\x02';
  this->Range = *param_1;
  return this;
}

// FCachedInterpolation @ 146092bb0

FCachedInterpolation * __thiscall
UE::MovieScene::Interpolation::FCachedInterpolation::FCachedInterpolation
          (FCachedInterpolation *this,FCachedInterpolationRange *param_1,
          FQuadraticInterpolation *param_2)

{
  double dVar1;
  longlong lVar2;
  
  dVar1 = param_2->B;
  (this->Data)._padding_ = (longlong)param_2->A;
  (this->Data)._padding_ = (longlong)dVar1;
  lVar2 = *(longlong *)&param_2->Origin;
  (this->Data)._padding_ = (longlong)param_2->Constant;
  (this->Data)._padding_ = lVar2;
  (this->Data).TypeIndex = '\x03';
  this->Range = *param_1;
  return this;
}

// FCachedInterpolation @ 146092be0

FCachedInterpolation * __thiscall
UE::MovieScene::Interpolation::FCachedInterpolation::FCachedInterpolation
          (FCachedInterpolation *this,FCachedInterpolationRange *param_1,
          FQuarticInterpolation *param_2)

{
  double dVar1;
  
  dVar1 = param_2->B;
  (this->Data)._padding_ = (longlong)param_2->A;
  (this->Data)._padding_ = (longlong)dVar1;
  dVar1 = param_2->D;
  (this->Data)._padding_ = (longlong)param_2->C;
  (this->Data)._padding_ = (longlong)dVar1;
  dVar1 = param_2->DX;
  (this->Data)._padding_ = (longlong)param_2->Constant;
  (this->Data)._padding_ = (longlong)dVar1;
  (this->Data)._padding_ = *(longlong *)&param_2->Origin;
  (this->Data).TypeIndex = '\x05';
  this->Range = *param_1;
  return this;
}

// FCachedInterpolation @ 146092c20

FCachedInterpolation * __thiscall
UE::MovieScene::Interpolation::FCachedInterpolation::FCachedInterpolation
          (FCachedInterpolation *this,FCachedInterpolationRange *param_1,
          FWeightedCubicInterpolation *param_2)

{
  double dVar1;
  longlong lVar2;
  
  dVar1 = param_2->StartKeyValue;
  (this->Data)._padding_ = (longlong)param_2->DX;
  (this->Data)._padding_ = (longlong)dVar1;
  dVar1 = param_2->StartKeyTanY;
  (this->Data)._padding_ = (longlong)param_2->NormalizedStartTanDX;
  (this->Data)._padding_ = (longlong)dVar1;
  dVar1 = param_2->EndKeyValue;
  (this->Data)._padding_ = (longlong)param_2->StartWeight;
  (this->Data)._padding_ = (longlong)dVar1;
  dVar1 = param_2->EndKeyTanY;
  (this->Data)._padding_ = (longlong)param_2->NormalizedEndTanDX;
  (this->Data)._padding_ = (longlong)dVar1;
  lVar2 = *(longlong *)&param_2->Origin;
  (this->Data)._padding_ = (longlong)param_2->EndWeight;
  (this->Data)._padding_ = lVar2;
  (this->Data).TypeIndex = '\a';
  this->Range = *param_1;
  return this;
}

// FCachedInterpolation @ 146092c60

FCachedInterpolation * __thiscall
UE::MovieScene::Interpolation::FCachedInterpolation::FCachedInterpolation
          (FCachedInterpolation *this)

{
  (this->Data).TypeIndex = '\0';
  (this->Range).Start = 0;
  (this->Range).End = -1;
  return this;
}

// operator= @ 146099880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCachedInterpolation * __thiscall
UE::MovieScene::Interpolation::FCachedInterpolation::operator=
          (FCachedInterpolation *this,FCachedInterpolation *param_1)

{
  code *pcVar1;
  bool bVar2;
  FCachedInterpolation *pFVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  byte local_18;
  undefined7 uStack_17;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (param_1 != this) {
    local_18 = (param_1->Data).TypeIndex;
    uVar4 = (ulonglong)local_18;
    if (7 < uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FCachedInterpolation *)(*pcVar1)();
        return pFVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[uVar4])(&local_68,param_1);
    (this->Data)._padding_ = local_68;
    (this->Data)._padding_ = lStack_60;
    (this->Data)._padding_ = local_58;
    (this->Data)._padding_ = lStack_50;
    (this->Data)._padding_ = local_48;
    (this->Data)._padding_ = lStack_40;
    (this->Data)._padding_ = local_38;
    (this->Data)._padding_ = lStack_30;
    (this->Data)._padding_ = local_28;
    (this->Data)._padding_ = lStack_20;
    *(ulonglong *)&(this->Data).TypeIndex = CONCAT71(uStack_17,local_18);
  }
  this->Range = param_1->Range;
  return this;
}

// ComputeDerivative @ 1460b5b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::Interpolation::FCachedInterpolation> * __thiscall
UE::MovieScene::Interpolation::FCachedInterpolation::ComputeDerivative
          (FCachedInterpolation *this,
          TOptional<UE::MovieScene::Interpolation::FCachedInterpolation> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  uchar uVar3;
  FCachedInterpolationRange FVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  FQuadraticInterpolation *pFVar9;
  FCachedInterpolation *pFVar10;
  FCachedInterpolation *pFVar11;
  undefined1 auStack_c8 [32];
  FQuadraticInterpolation local_a8;
  undefined4 uStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uchar local_28;
  FCachedInterpolationRange local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  uVar3 = (this->Data).TypeIndex;
  pFVar11 = (FCachedInterpolation *)0x0;
  pFVar10 = this;
  if (uVar3 != '\x01') {
    pFVar10 = pFVar11;
  }
  if (pFVar10 == (FCachedInterpolation *)0x0) {
    pFVar10 = this;
    if (uVar3 != '\x02') {
      pFVar10 = pFVar11;
    }
    if (pFVar10 == (FCachedInterpolation *)0x0) {
      pFVar10 = this;
      if (uVar3 != '\x03') {
        pFVar10 = pFVar11;
      }
      if (pFVar10 == (FCachedInterpolation *)0x0) {
        pFVar10 = this;
        if (uVar3 != '\x04') {
          pFVar10 = pFVar11;
        }
        if (pFVar10 == (FCachedInterpolation *)0x0) {
          pFVar10 = this;
          if (uVar3 != '\x05') {
            pFVar10 = pFVar11;
          }
          if (pFVar10 != (FCachedInterpolation *)0x0) {
            uStack_80 = (undefined4)(pFVar10->Data)._padding_;
            dVar1 = (double)(pFVar10->Data)._padding_;
            lVar7 = (pFVar10->Data)._padding_;
            local_58 = (undefined4)(pFVar10->Data)._padding_;
            uStack_54 = *(undefined4 *)((longlong)&(pFVar10->Data)._padding_ + 4);
            dVar2 = (double)(pFVar10->Data)._padding_ * __real_4008000000000000;
            local_20 = this->Range;
            local_68._8_4_ = (int)lVar7;
            local_68._0_8_ = dVar1 + dVar1;
            local_68._12_4_ = (int)((ulonglong)lVar7 >> 0x20);
            local_28 = '\x04';
            local_78._8_4_ = SUB84(dVar2,0);
            local_78._0_8_ = (double)(pFVar10->Data)._padding_ * __real_4010000000000000;
            local_78._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
            uStack_50 = uStack_80;
            TOptional<UE::MovieScene::Interpolation::FCachedInterpolation>::
            TOptional<UE::MovieScene::Interpolation::FCachedInterpolation>
                      (__return_storage_ptr__,(FCachedInterpolation *)local_78);
            return __return_storage_ptr__;
          }
          pFVar10 = this;
          if (uVar3 != '\x06') {
            pFVar10 = pFVar11;
          }
          if (pFVar10 == (FCachedInterpolation *)0x0) {
            __return_storage_ptr__->bIsSet = false;
            return __return_storage_ptr__;
          }
          pFVar9 = FCubicBezierInterpolation::Derivative
                             ((FCubicBezierInterpolation *)pFVar10,&local_a8);
          local_78._0_8_ = pFVar9->A;
          local_78._8_8_ = pFVar9->B;
          local_68._0_8_ = pFVar9->Constant;
          local_68._8_4_ = pFVar9->Origin;
          local_68._12_4_ = *(undefined4 *)&pFVar9->field_0x1c;
        }
        else {
          dVar1 = (double)(pFVar10->Data)._padding_;
          local_a8.Origin.Value = (int)(pFVar10->Data)._padding_;
          dVar2 = (double)(pFVar10->Data)._padding_;
          local_68._12_4_ = local_a8._28_4_;
          local_68._8_4_ = local_a8.Origin.Value;
          local_68._0_8_ = (double)(pFVar10->Data)._padding_ / dVar1;
          local_78._8_8_ = (dVar2 + dVar2) / (dVar1 * dVar1);
          local_78._0_8_ =
               ((double)(pFVar10->Data)._padding_ * __real_4008000000000000) /
               (dVar1 * dVar1 * dVar1);
        }
        local_20 = this->Range;
        local_28 = '\x03';
        TOptional<UE::MovieScene::Interpolation::FCachedInterpolation>::
        TOptional<UE::MovieScene::Interpolation::FCachedInterpolation>
                  (__return_storage_ptr__,(FCachedInterpolation *)local_78);
      }
      else {
        dVar1 = (double)(pFVar10->Data)._padding_;
        lVar8 = (pFVar10->Data)._padding_;
        dVar1 = dVar1 + dVar1;
        lVar7 = (pFVar10->Data)._padding_;
        FVar4 = this->Range;
        (__return_storage_ptr__->TypedValue).Data.TypeIndex = '\x02';
        auVar5._8_4_ = (int)lVar7;
        auVar5._0_8_ = dVar1;
        auVar5._12_4_ = (int)((ulonglong)lVar7 >> 0x20);
        (__return_storage_ptr__->TypedValue).Data._padding_ = (longlong)dVar1;
        (__return_storage_ptr__->TypedValue).Data._padding_ = auVar5._8_8_;
        (__return_storage_ptr__->TypedValue).Data._padding_ =
             CONCAT44(local_a8.Constant._4_4_,(int)lVar8);
        (__return_storage_ptr__->TypedValue).Range = FVar4;
        __return_storage_ptr__->bIsSet = true;
      }
    }
    else {
      lVar7 = (pFVar10->Data)._padding_;
      lVar8 = (pFVar10->Data)._padding_;
      uVar6 = *(undefined4 *)((longlong)&(pFVar10->Data)._padding_ + 4);
      FVar4 = this->Range;
      (__return_storage_ptr__->TypedValue).Data.TypeIndex = '\x01';
      *(int *)&(__return_storage_ptr__->TypedValue).Data._padding_ = (int)lVar8;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->TypedValue).Data._padding_ + 4) = uVar6;
      *(int *)&(__return_storage_ptr__->TypedValue).Data._padding_ = (int)lVar7;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->TypedValue).Data._padding_ + 4) =
           local_a8.B._4_4_;
      (__return_storage_ptr__->TypedValue).Range = FVar4;
      __return_storage_ptr__->bIsSet = true;
    }
  }
  else {
    lVar7 = (pFVar10->Data)._padding_;
    FVar4 = this->Range;
    (__return_storage_ptr__->TypedValue).Data.TypeIndex = '\x01';
    (__return_storage_ptr__->TypedValue).Data._padding_ = 0;
    (__return_storage_ptr__->TypedValue).Data._padding_ = CONCAT44(local_a8.B._4_4_,(int)lVar7);
    (__return_storage_ptr__->TypedValue).Range = FVar4;
    __return_storage_ptr__->bIsSet = true;
  }
  return __return_storage_ptr__;
}

// ComputeExtents @ 1460b5f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FInterpolationExtents * __thiscall
UE::MovieScene::Interpolation::FCachedInterpolation::ComputeExtents
          (FCachedInterpolation *this,FInterpolationExtents *__return_storage_ptr__,
          FFrameTime param_1,FFrameTime param_2)

{
  double dVar1;
  longlong lVar2;
  uchar uVar3;
  FFrameTime FVar4;
  code *pcVar5;
  FFrameTime FVar6;
  FFrameTime FVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FFrameNumber FVar11;
  FInterpolationExtents *pFVar12;
  FCachedInterpolation *pFVar13;
  uint uVar14;
  FFrameNumber FVar15;
  FFrameNumber FVar16;
  FCachedInterpolation *pFVar17;
  FCachedInterpolation *pFVar18;
  FCachedInterpolation *pFVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 in_XMM2 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  FFrameTime local_res18;
  FFrameTime local_res20;
  undefined1 auStackY_1f8 [32];
  float fStack_1c4;
  float fStack_1b4;
  float fStack_1ac;
  uint local_1a8;
  float fStack_19c;
  FFrameTime local_198;
  FFrameTime local_190;
  FCachedInterpolation *local_188;
  int local_180;
  undefined4 uStack_17c;
  FFrameTime local_178 [2];
  FFrameTime local_168 [2];
  FLinearInterpolation local_158;
  FInterpolationExtents *local_140;
  FFrameTime *local_138;
  FFrameTime *local_130;
  FQuadraticInterpolation local_128;
  undefined1 local_108 [16];
  double local_f8;
  double local_f0;
  double local_e8;
  FFrameNumber local_e0;
  FQuadraticInterpolation local_d8;
  FFrameTime local_b8 [3];
  ulonglong local_a0;
  
  local_a0 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  __return_storage_ptr__->MinValue = 1.7976931348623157e+308;
  pFVar19 = (FCachedInterpolation *)0x0;
  __return_storage_ptr__->MaxValue = -1.7976931348623157e+308;
  (__return_storage_ptr__->MinValueTime).FrameNumber = 0;
  (__return_storage_ptr__->MinValueTime).SubFrame = 0.0;
  (__return_storage_ptr__->MaxValueTime).FrameNumber = 0;
  (__return_storage_ptr__->MaxValueTime).SubFrame = 0.0;
  uVar3 = (this->Data).TypeIndex;
  pFVar13 = this;
  if (uVar3 != '\x01') {
    pFVar13 = pFVar19;
  }
  local_res18 = param_1;
  local_res20 = param_2;
  if (pFVar13 == (FCachedInterpolation *)0x0) {
    pFVar13 = this;
    if (uVar3 != '\x02') {
      pFVar13 = pFVar19;
    }
    iVar9 = 0;
    FVar11 = param_1.FrameNumber.Value;
    FVar15 = param_2.FrameNumber.Value;
    fStack_1c4 = param_1.SubFrame;
    fVar26 = fStack_1c4;
    fStack_1c4 = param_2.SubFrame;
    if (pFVar13 == (FCachedInterpolation *)0x0) {
      pFVar13 = this;
      if (uVar3 != '\x03') {
        pFVar13 = pFVar19;
      }
      if (pFVar13 == (FCachedInterpolation *)0x0) {
        pFVar13 = this;
        if (uVar3 != '\x04') {
          pFVar13 = pFVar19;
        }
        if (pFVar13 != (FCachedInterpolation *)0x0) {
          dVar1 = FCubicInterpolation::Evaluate((FCubicInterpolation *)pFVar13,param_1);
          FVar4 = local_res20;
          if (dVar1 < __return_storage_ptr__->MinValue) {
            __return_storage_ptr__->MinValue = dVar1;
            __return_storage_ptr__->MinValueTime = param_1;
          }
          if (__return_storage_ptr__->MaxValue <= dVar1 && dVar1 != __return_storage_ptr__->MaxValue
             ) {
            __return_storage_ptr__->MaxValue = dVar1;
            __return_storage_ptr__->MaxValueTime = param_1;
          }
          dVar1 = FCubicInterpolation::Evaluate((FCubicInterpolation *)pFVar13,local_res20);
          if (dVar1 < __return_storage_ptr__->MinValue) {
            __return_storage_ptr__->MinValue = dVar1;
            __return_storage_ptr__->MinValueTime = FVar4;
          }
          if (__return_storage_ptr__->MaxValue <= dVar1 && dVar1 != __return_storage_ptr__->MaxValue
             ) {
            __return_storage_ptr__->MaxValue = dVar1;
            __return_storage_ptr__->MaxValueTime = FVar4;
          }
          dVar1 = (double)(pFVar13->Data)._padding_;
          local_128.Origin.Value = (int)(pFVar13->Data)._padding_;
          local_178[0].FrameNumber.Value = 0;
          local_178[0].SubFrame = 0.0;
          local_178[1].FrameNumber.Value = 0;
          local_178[1].SubFrame = 0.0;
          local_128.A = ((double)(pFVar13->Data)._padding_ * __real_4008000000000000) /
                        (dVar1 * dVar1 * dVar1);
          dVar22 = (double)(pFVar13->Data)._padding_;
          local_128.Constant = (double)(pFVar13->Data)._padding_ / dVar1;
          local_128.B = (dVar22 + dVar22) / (dVar1 * dVar1);
          iVar9 = FQuadraticInterpolation::SolveWithin
                            (&local_128,local_res18,local_res20,0.0,local_178);
          if ((2 < iVar9) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumSolutions <= 2",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneInterpolation.cpp"
                                 ,0xb6,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            pFVar12 = (FInterpolationExtents *)(*pcVar5)();
            return pFVar12;
          }
          if (0 < iVar9) {
            do {
              FVar4 = local_178[(longlong)pFVar19];
              dVar1 = FCubicInterpolation::Evaluate((FCubicInterpolation *)pFVar13,FVar4);
              if (dVar1 < __return_storage_ptr__->MinValue) {
                __return_storage_ptr__->MinValue = dVar1;
                __return_storage_ptr__->MinValueTime = FVar4;
              }
              if (__return_storage_ptr__->MaxValue <= dVar1 &&
                  dVar1 != __return_storage_ptr__->MaxValue) {
                __return_storage_ptr__->MaxValue = dVar1;
                __return_storage_ptr__->MaxValueTime = FVar4;
              }
              pFVar19 = (FCachedInterpolation *)((longlong)&(pFVar19->Data)._padding_ + 1);
            } while ((longlong)pFVar19 < (longlong)iVar9);
          }
          goto LAB_1460b69f8;
        }
        pFVar13 = this;
        if (uVar3 != '\x05') {
          pFVar13 = pFVar19;
        }
        local_188 = pFVar13;
        if (pFVar13 != (FCachedInterpolation *)0x0) {
          dVar1 = FQuarticInterpolation::Evaluate((FQuarticInterpolation *)pFVar13,param_1);
          FVar4 = local_res20;
          if (dVar1 < __return_storage_ptr__->MinValue) {
            __return_storage_ptr__->MinValue = dVar1;
            __return_storage_ptr__->MinValueTime = param_1;
          }
          if (__return_storage_ptr__->MaxValue <= dVar1 && dVar1 != __return_storage_ptr__->MaxValue
             ) {
            __return_storage_ptr__->MaxValue = dVar1;
            __return_storage_ptr__->MaxValueTime = param_1;
          }
          dVar1 = FQuarticInterpolation::Evaluate((FQuarticInterpolation *)pFVar13,local_res20);
          FVar7 = local_res20;
          FVar6 = local_res18;
          if (dVar1 < __return_storage_ptr__->MinValue) {
            __return_storage_ptr__->MinValue = dVar1;
            __return_storage_ptr__->MinValueTime = FVar4;
          }
          if (__return_storage_ptr__->MaxValue <= dVar1 && dVar1 != __return_storage_ptr__->MaxValue
             ) {
            __return_storage_ptr__->MaxValue = dVar1;
            __return_storage_ptr__->MaxValueTime = FVar4;
          }
          local_e8 = (double)(pFVar13->Data)._padding_;
          local_e0.Value = (int)(pFVar13->Data)._padding_;
          dVar1 = (double)(pFVar13->Data)._padding_ * _UNK_15076bb08;
          local_b8[0].FrameNumber.Value = 0;
          local_b8[0].SubFrame = 0.0;
          local_b8[1].FrameNumber.Value = 0;
          local_b8[1].SubFrame = 0.0;
          local_b8[2].FrameNumber.Value = 0;
          local_b8[2].SubFrame = 0.0;
          local_1a8 = 0;
          local_108._8_4_ = SUB84(dVar1,0);
          local_108._0_8_ =
               (double)(pFVar13->Data)._padding_ * ___xmm_40080000000000004010000000000000;
          local_108._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
          local_f8 = (double)(pFVar13->Data)._padding_;
          local_f8 = local_f8 + local_f8;
          local_f0 = (double)(pFVar13->Data)._padding_;
          iVar10 = FCubicInterpolation::Solve((FCubicInterpolation *)local_108,0.0,local_b8);
          if (0 < (longlong)iVar10) {
            fStack_1c4 = FVar6.SubFrame;
            pFVar13 = pFVar19;
            pFVar17 = pFVar19;
            pFVar18 = pFVar19;
            do {
              if (((FCachedInterpolation *)&DAT_00000002 < pFVar17) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index<MinN",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneInterpolation.h"
                                     ,0x4c,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                pFVar12 = (FInterpolationExtents *)(*pcVar5)();
                return pFVar12;
              }
              FVar15 = FVar6.FrameNumber.Value;
              FVar11 = local_b8[(longlong)pFVar17].FrameNumber;
              if ((FVar15.Value < FVar11.Value) ||
                 ((FVar11.Value == FVar15.Value &&
                  (fStack_19c = local_b8[(longlong)pFVar17].SubFrame, fStack_1c4 <= fStack_19c)))) {
                if (((FCachedInterpolation *)&DAT_00000002 < pFVar17) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index<MinN",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneInterpolation.h"
                                       ,0x4c,L""), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  pFVar12 = (FInterpolationExtents *)(*pcVar5)();
                  return pFVar12;
                }
                FVar15 = FVar7.FrameNumber.Value;
                FVar11 = local_b8[(longlong)pFVar17].FrameNumber;
                if (FVar11.Value < FVar15.Value) {
LAB_1460b6717:
                  uVar14 = (uint)pFVar13;
                  if (pFVar17 != pFVar18) {
                    if (((FCachedInterpolation *)&DAT_00000002 < pFVar17) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Index<MinN",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneInterpolation.h"
                                           ,0x4c,L""), bVar8)) {
                      pcVar5 = (code *)swi(3);
                      pFVar12 = (FInterpolationExtents *)(*pcVar5)();
                      return pFVar12;
                    }
                    FVar4 = local_b8[(longlong)pFVar17];
                    if ((2 < (longlong)pFVar18) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Index<MinN",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneInterpolation.h"
                                           ,0x4c,L""), bVar8)) {
                      pcVar5 = (code *)swi(3);
                      pFVar12 = (FInterpolationExtents *)(*pcVar5)();
                      return pFVar12;
                    }
                    local_b8[(longlong)pFVar18] = FVar4;
                    uVar14 = local_1a8;
                  }
                  local_1a8 = uVar14 + 1;
                  pFVar13 = (FCachedInterpolation *)(ulonglong)local_1a8;
                  pFVar18 = (FCachedInterpolation *)((longlong)&(pFVar18->Data)._padding_ + 1);
                }
                else if (FVar11.Value == FVar15.Value) {
                  fStack_19c = local_b8[(longlong)pFVar17].SubFrame;
                  fStack_1b4 = FVar7.SubFrame;
                  if (fStack_19c <= fStack_1b4) goto LAB_1460b6717;
                }
              }
              pFVar17 = (FCachedInterpolation *)((longlong)&(pFVar17->Data)._padding_ + 1);
              iVar9 = (int)pFVar13;
            } while ((longlong)pFVar17 < (longlong)iVar10);
            pFVar13 = local_188;
            if ((3 < iVar9) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NumSolutions <= 3",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneInterpolation.cpp"
                                   ,0xc5,L""), pFVar13 = local_188, bVar8)) {
              pcVar5 = (code *)swi(3);
              pFVar12 = (FInterpolationExtents *)(*pcVar5)();
              return pFVar12;
            }
          }
          if (0 < iVar9) {
            do {
              FVar4 = local_b8[(longlong)pFVar19];
              dVar1 = FQuarticInterpolation::Evaluate((FQuarticInterpolation *)pFVar13,FVar4);
              if (dVar1 < __return_storage_ptr__->MinValue) {
                __return_storage_ptr__->MinValue = dVar1;
                __return_storage_ptr__->MinValueTime = FVar4;
              }
              if (__return_storage_ptr__->MaxValue <= dVar1 &&
                  dVar1 != __return_storage_ptr__->MaxValue) {
                __return_storage_ptr__->MaxValue = dVar1;
                __return_storage_ptr__->MaxValueTime = FVar4;
              }
              pFVar19 = (FCachedInterpolation *)((longlong)&(pFVar19->Data)._padding_ + 1);
            } while ((longlong)pFVar19 < (longlong)iVar9);
          }
          goto LAB_1460b69f8;
        }
        pFVar13 = this;
        if (uVar3 != '\x06') {
          pFVar13 = pFVar19;
        }
        if (pFVar13 != (FCachedInterpolation *)0x0) {
          dVar1 = FCubicBezierInterpolation::Evaluate((FCubicBezierInterpolation *)pFVar13,param_1);
          FVar4 = local_res20;
          if (dVar1 < __return_storage_ptr__->MinValue) {
            __return_storage_ptr__->MinValue = dVar1;
            __return_storage_ptr__->MinValueTime = param_1;
          }
          if (__return_storage_ptr__->MaxValue <= dVar1 && dVar1 != __return_storage_ptr__->MaxValue
             ) {
            __return_storage_ptr__->MaxValue = dVar1;
            __return_storage_ptr__->MaxValueTime = param_1;
          }
          dVar1 = FCubicBezierInterpolation::Evaluate
                            ((FCubicBezierInterpolation *)pFVar13,local_res20);
          if (dVar1 < __return_storage_ptr__->MinValue) {
            __return_storage_ptr__->MinValue = dVar1;
            __return_storage_ptr__->MinValueTime = FVar4;
          }
          if (__return_storage_ptr__->MaxValue <= dVar1 && dVar1 != __return_storage_ptr__->MaxValue
             ) {
            __return_storage_ptr__->MaxValue = dVar1;
            __return_storage_ptr__->MaxValueTime = FVar4;
          }
          FCubicBezierInterpolation::Derivative((FCubicBezierInterpolation *)pFVar13,&local_d8);
          local_168[0].FrameNumber.Value = 0;
          local_168[0].SubFrame = 0.0;
          local_168[1].FrameNumber.Value = 0;
          local_168[1].SubFrame = 0.0;
          iVar9 = FQuadraticInterpolation::SolveWithin
                            (&local_d8,local_res18,local_res20,0.0,local_168);
          if ((2 < iVar9) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumSolutions <= 2",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneInterpolation.cpp"
                                 ,0xd7,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            pFVar12 = (FInterpolationExtents *)(*pcVar5)();
            return pFVar12;
          }
          if (0 < iVar9) {
            do {
              FVar4 = local_168[(longlong)pFVar19];
              dVar1 = FCubicBezierInterpolation::Evaluate
                                ((FCubicBezierInterpolation *)pFVar13,FVar4);
              if (dVar1 < __return_storage_ptr__->MinValue) {
                __return_storage_ptr__->MinValue = dVar1;
                __return_storage_ptr__->MinValueTime = FVar4;
              }
              if (__return_storage_ptr__->MaxValue <= dVar1 &&
                  dVar1 != __return_storage_ptr__->MaxValue) {
                __return_storage_ptr__->MaxValue = dVar1;
                __return_storage_ptr__->MaxValueTime = FVar4;
              }
              pFVar19 = (FCachedInterpolation *)((longlong)&(pFVar19->Data)._padding_ + 1);
            } while ((longlong)pFVar19 < (longlong)iVar9);
          }
          goto LAB_1460b69f8;
        }
        if (uVar3 != '\a') {
          this = pFVar19;
        }
        if (this == (FCachedInterpolation *)0x0) goto LAB_1460b69f8;
        dVar1 = FWeightedCubicInterpolation::Evaluate((FWeightedCubicInterpolation *)this,param_1);
        FVar4 = local_res20;
        if (dVar1 < __return_storage_ptr__->MinValue) {
          __return_storage_ptr__->MinValue = dVar1;
          __return_storage_ptr__->MinValueTime = param_1;
        }
        if (__return_storage_ptr__->MaxValue <= dVar1 && dVar1 != __return_storage_ptr__->MaxValue)
        {
          __return_storage_ptr__->MaxValue = dVar1;
          __return_storage_ptr__->MaxValueTime = param_1;
        }
        dVar1 = FWeightedCubicInterpolation::Evaluate
                          ((FWeightedCubicInterpolation *)this,local_res20);
        uVar20 = SUB84(dVar1,0);
        uVar21 = (undefined4)((ulonglong)dVar1 >> 0x20);
        if (dVar1 < __return_storage_ptr__->MinValue) {
          __return_storage_ptr__->MinValue = dVar1;
          __return_storage_ptr__->MinValueTime = FVar4;
        }
        if (dVar1 < __return_storage_ptr__->MaxValue || dVar1 == __return_storage_ptr__->MaxValue)
        goto LAB_1460b69f8;
        __return_storage_ptr__->MaxValueTime = FVar4;
      }
      else {
        dVar1 = (double)(pFVar13->Data)._padding_;
        uVar30 = SUB84(dVar1,0);
        uVar31 = (undefined4)((ulonglong)dVar1 >> 0x20);
        dVar22 = (double)(pFVar13->Data)._padding_;
        uVar28 = SUB84(dVar22,0);
        uVar29 = (undefined4)((ulonglong)dVar22 >> 0x20);
        dVar24 = (double)(pFVar13->Data)._padding_;
        uVar20 = SUB84(dVar24,0);
        uVar21 = (undefined4)((ulonglong)dVar24 >> 0x20);
        auVar25 = roundps(in_XMM2,ZEXT416((uint)(fVar26 - 0.0)),1);
        fVar27 = (fVar26 - 0.0) - auVar25._0_4_;
        if (::FFrameTime::MaxSubframe <= fVar27) {
          fVar27 = ::FFrameTime::MaxSubframe;
        }
        if (fVar27 <= 0.0) {
          fVar27 = 0.0;
        }
        dVar23 = (double)((int)auVar25._0_4_ + (FVar11.Value - (int)(pFVar13->Data)._padding_)) +
                 (double)fVar27;
        dVar24 = (dVar23 * dVar1 + dVar22) * dVar23 + dVar24;
        dVar1 = __return_storage_ptr__->MinValue;
        if (dVar24 < __return_storage_ptr__->MinValue) {
          __return_storage_ptr__->MinValue = dVar24;
          __return_storage_ptr__->MinValueTime = param_1;
          lVar2 = (pFVar13->Data)._padding_;
          uVar20 = (undefined4)lVar2;
          uVar21 = (undefined4)((ulonglong)lVar2 >> 0x20);
          lVar2 = (pFVar13->Data)._padding_;
          uVar28 = (undefined4)lVar2;
          uVar29 = (undefined4)((ulonglong)lVar2 >> 0x20);
          lVar2 = (pFVar13->Data)._padding_;
          uVar30 = (undefined4)lVar2;
          uVar31 = (undefined4)((ulonglong)lVar2 >> 0x20);
          dVar1 = dVar24;
        }
        dVar22 = __return_storage_ptr__->MaxValue;
        if (__return_storage_ptr__->MaxValue < dVar24) {
          __return_storage_ptr__->MaxValue = dVar24;
          __return_storage_ptr__->MaxValueTime = param_1;
          lVar2 = (pFVar13->Data)._padding_;
          uVar20 = (undefined4)lVar2;
          uVar21 = (undefined4)((ulonglong)lVar2 >> 0x20);
          lVar2 = (pFVar13->Data)._padding_;
          uVar28 = (undefined4)lVar2;
          uVar29 = (undefined4)((ulonglong)lVar2 >> 0x20);
          lVar2 = (pFVar13->Data)._padding_;
          uVar30 = (undefined4)lVar2;
          uVar31 = (undefined4)((ulonglong)lVar2 >> 0x20);
          dVar22 = dVar24;
        }
        auVar25 = roundps(auVar25,ZEXT416((uint)(fStack_1c4 - 0.0)),1);
        fVar27 = (fStack_1c4 - 0.0) - auVar25._0_4_;
        if (::FFrameTime::MaxSubframe <= fVar27) {
          fVar27 = ::FFrameTime::MaxSubframe;
        }
        if (fVar27 <= 0.0) {
          fVar27 = 0.0;
        }
        dVar24 = (double)((int)auVar25._0_4_ + (FVar15.Value - (int)(pFVar13->Data)._padding_)) +
                 (double)fVar27;
        dVar24 = (dVar24 * (double)CONCAT44(uVar31,uVar30) + (double)CONCAT44(uVar29,uVar28)) *
                 dVar24 + (double)CONCAT44(uVar21,uVar20);
        if (dVar24 < dVar1) {
          __return_storage_ptr__->MinValue = dVar24;
          __return_storage_ptr__->MinValueTime = param_2;
        }
        if (dVar22 < dVar24) {
          __return_storage_ptr__->MaxValue = dVar24;
          __return_storage_ptr__->MaxValueTime = param_2;
        }
        local_158.Coefficient = (double)(pFVar13->Data)._padding_;
        local_158.Constant = (double)(pFVar13->Data)._padding_;
        local_158.Coefficient = local_158.Coefficient + local_158.Coefficient;
        local_158.Origin.Value = (int)(pFVar13->Data)._padding_;
        local_198.FrameNumber.Value = 0;
        local_198.SubFrame = 0.0;
        FVar4 = param_1;
        local_190 = param_2;
        if (local_158.Constant != 0.0) {
          iVar9 = FLinearInterpolation::Solve(&local_158,0.0,&local_198);
          if (iVar9 != 1) goto LAB_1460b69f8;
          fStack_1c4 = local_198.SubFrame;
          if (((local_198.FrameNumber.Value <= FVar11.Value) &&
              ((local_198.FrameNumber.Value != FVar11.Value || (fStack_1c4 < fVar26)))) ||
             ((FVar4 = local_198, FVar15.Value <= local_198.FrameNumber.Value &&
              ((local_198.FrameNumber.Value != FVar15.Value || (local_190.SubFrame <= fStack_1c4))))
             )) goto LAB_1460b69f8;
        }
        local_198 = FVar4;
        FVar4 = local_198;
        dVar1 = FQuadraticInterpolation::Evaluate((FQuadraticInterpolation *)pFVar13,local_198);
        uVar20 = SUB84(dVar1,0);
        uVar21 = (undefined4)((ulonglong)dVar1 >> 0x20);
        if (dVar1 < __return_storage_ptr__->MinValue) {
          __return_storage_ptr__->MinValue = dVar1;
          __return_storage_ptr__->MinValueTime = FVar4;
        }
        if (dVar1 < __return_storage_ptr__->MaxValue || dVar1 == __return_storage_ptr__->MaxValue)
        goto LAB_1460b69f8;
        __return_storage_ptr__->MaxValueTime = FVar4;
      }
      __return_storage_ptr__->MaxValue = (double)CONCAT44(uVar21,uVar20);
    }
    else {
      local_180 = (int)(pFVar13->Data)._padding_;
      dVar1 = (double)(pFVar13->Data)._padding_;
      uVar28 = SUB84(dVar1,0);
      uVar29 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar22 = (double)(pFVar13->Data)._padding_;
      uVar20 = SUB84(dVar22,0);
      uVar21 = (undefined4)((ulonglong)dVar22 >> 0x20);
      uStack_17c = 0;
      auVar25 = roundps(in_XMM2,ZEXT416((uint)(fVar26 - 0.0)),1);
      fVar26 = (fVar26 - 0.0) - auVar25._0_4_;
      if (::FFrameTime::MaxSubframe <= fVar26) {
        fVar26 = ::FFrameTime::MaxSubframe;
      }
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      dVar22 = ((double)((int)auVar25._0_4_ + (FVar11.Value - local_180)) + (double)fVar26) * dVar1
               + dVar22;
      dVar1 = __return_storage_ptr__->MinValue;
      if (dVar22 < __return_storage_ptr__->MinValue) {
        __return_storage_ptr__->MinValue = dVar22;
        __return_storage_ptr__->MinValueTime = param_1;
        lVar2 = (pFVar13->Data)._padding_;
        uVar20 = (undefined4)lVar2;
        uVar21 = (undefined4)((ulonglong)lVar2 >> 0x20);
        lVar2 = (pFVar13->Data)._padding_;
        uVar28 = (undefined4)lVar2;
        uVar29 = (undefined4)((ulonglong)lVar2 >> 0x20);
        dVar1 = dVar22;
      }
      dVar24 = __return_storage_ptr__->MaxValue;
      if (__return_storage_ptr__->MaxValue < dVar22) {
        __return_storage_ptr__->MaxValue = dVar22;
        __return_storage_ptr__->MaxValueTime = param_1;
        lVar2 = (pFVar13->Data)._padding_;
        uVar20 = (undefined4)lVar2;
        uVar21 = (undefined4)((ulonglong)lVar2 >> 0x20);
        lVar2 = (pFVar13->Data)._padding_;
        uVar28 = (undefined4)lVar2;
        uVar29 = (undefined4)((ulonglong)lVar2 >> 0x20);
        dVar24 = dVar22;
      }
      local_190.FrameNumber.Value = (int)(pFVar13->Data)._padding_;
      local_190.SubFrame = 0.0;
      auVar25 = roundps(auVar25,ZEXT416((uint)(fStack_1c4 - 0.0)),1);
      fVar26 = (fStack_1c4 - 0.0) - auVar25._0_4_;
      if (::FFrameTime::MaxSubframe <= fVar26) {
        fVar26 = ::FFrameTime::MaxSubframe;
      }
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      dVar22 = ((double)((int)auVar25._0_4_ + (FVar15.Value - local_190.FrameNumber.Value)) +
               (double)fVar26) * (double)CONCAT44(uVar29,uVar28) + (double)CONCAT44(uVar21,uVar20);
      if (dVar22 < dVar1) {
        __return_storage_ptr__->MinValue = dVar22;
        __return_storage_ptr__->MinValueTime = param_2;
      }
      if (dVar24 < dVar22) {
        __return_storage_ptr__->MaxValue = dVar22;
        __return_storage_ptr__->MaxValueTime = param_2;
      }
    }
  }
  else {
    dVar1 = (double)(pFVar13->Data)._padding_;
    dVar22 = __return_storage_ptr__->MinValue;
    if (dVar1 < __return_storage_ptr__->MinValue) {
      __return_storage_ptr__->MinValue = dVar1;
      __return_storage_ptr__->MinValueTime = param_1;
      dVar22 = dVar1;
    }
    dVar24 = __return_storage_ptr__->MaxValue;
    if (__return_storage_ptr__->MaxValue < dVar1) {
      __return_storage_ptr__->MaxValue = dVar1;
      __return_storage_ptr__->MaxValueTime = param_1;
      dVar24 = dVar1;
    }
    dVar1 = (double)(pFVar13->Data)._padding_;
    if (dVar1 < dVar22) {
      __return_storage_ptr__->MinValue = dVar1;
      __return_storage_ptr__->MinValueTime = param_2;
    }
    if (dVar24 < dVar1) {
      __return_storage_ptr__->MaxValue = dVar1;
      __return_storage_ptr__->MaxValueTime = param_2;
    }
  }
LAB_1460b69f8:
  FVar15 = local_res18.FrameNumber.Value;
  FVar11 = (__return_storage_ptr__->MinValueTime).FrameNumber;
  fStack_1ac = (__return_storage_ptr__->MinValueTime).SubFrame;
  fStack_1b4 = local_res18.SubFrame;
  fVar26 = fStack_1b4;
  if ((FVar15.Value < FVar11.Value) ||
     ((FVar11.Value == FVar15.Value && (fStack_1b4 <= fStack_1ac)))) {
    FVar16 = local_res20.FrameNumber.Value;
    fStack_1b4 = local_res20.SubFrame;
    if ((FVar11.Value < FVar16.Value) ||
       ((FVar11.Value == FVar16.Value && (fStack_1ac <= fStack_1b4)))) {
      FVar11 = (__return_storage_ptr__->MaxValueTime).FrameNumber;
      fStack_1ac = (__return_storage_ptr__->MaxValueTime).SubFrame;
      if ((FVar15.Value < FVar11.Value) ||
         ((FVar11.Value == FVar15.Value && (fVar26 <= fStack_1ac)))) {
        if (FVar11.Value < FVar16.Value) {
          return __return_storage_ptr__;
        }
        if ((FVar11.Value == FVar16.Value) && (fStack_1ac <= fStack_1b4)) {
          return __return_storage_ptr__;
        }
      }
    }
  }
  local_138 = &local_res18;
  local_130 = &local_res20;
  local_140 = __return_storage_ptr__;
  `UE::MovieScene::Interpolation::FCachedInterpolation::ComputeExtents'::__l2::<lambda_1>::
  operator()(&local_140);
  return __return_storage_ptr__;
}

// ComputeExtents @ 1460b6ad0

FInterpolationExtents * __thiscall
UE::MovieScene::Interpolation::FCachedInterpolation::ComputeExtents
          (FCachedInterpolation *this,FInterpolationExtents *__return_storage_ptr__)

{
  FFrameTime FVar1;
  FFrameTime FVar2;
  
  FVar1.SubFrame = 0.0;
  FVar1.FrameNumber.Value = (this->Range).End.Value;
  FVar2.SubFrame = 0.0;
  FVar2.FrameNumber.Value = (this->Range).Start.Value;
  ComputeExtents(this,__return_storage_ptr__,FVar2,FVar1);
  return __return_storage_ptr__;
}

// ComputeIntegral @ 1460b6ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::Interpolation::FCachedInterpolation> * __thiscall
UE::MovieScene::Interpolation::FCachedInterpolation::ComputeIntegral
          (FCachedInterpolation *this,
          TOptional<UE::MovieScene::Interpolation::FCachedInterpolation> *__return_storage_ptr__,
          double param_1)

{
  uchar uVar1;
  FCachedInterpolationRange FVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  FCachedInterpolation *pFVar15;
  TOptional<UE::MovieScene::Interpolation::FCachedInterpolation> *pTVar16;
  FCachedInterpolation *pFVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_168 [52];
  undefined4 uStack_134;
  undefined4 uStack_12c;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  longlong local_e0;
  uchar local_c0;
  FCachedInterpolationRange local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  longlong local_80;
  uchar local_60;
  FCachedInterpolationRange local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_168;
  pFVar17 = (FCachedInterpolation *)0x0;
  uVar1 = (this->Data).TypeIndex;
  pFVar15 = this;
  if (uVar1 != '\x01') {
    pFVar15 = pFVar17;
  }
  if (pFVar15 == (FCachedInterpolation *)0x0) {
    pFVar15 = this;
    if (uVar1 != '\x02') {
      pFVar15 = pFVar17;
    }
    if (pFVar15 == (FCachedInterpolation *)0x0) {
      pFVar15 = this;
      if (uVar1 != '\x03') {
        pFVar15 = pFVar17;
      }
      if (pFVar15 == (FCachedInterpolation *)0x0) {
        pFVar15 = this;
        if (uVar1 != '\x04') {
          pFVar15 = pFVar17;
        }
        if (pFVar15 == (FCachedInterpolation *)0x0) {
          pFVar15 = this;
          if (uVar1 != '\x05') {
            pFVar15 = pFVar17;
          }
          if (pFVar15 == (FCachedInterpolation *)0x0) {
            pFVar15 = this;
            if (uVar1 != '\x06') {
              pFVar15 = pFVar17;
            }
            if (pFVar15 != (FCachedInterpolation *)0x0) {
              dVar6 = (double)(pFVar15->Data)._padding_;
              local_118 = (undefined4)(pFVar15->Data)._padding_;
              dVar8 = (double)(pFVar15->Data)._padding_;
              local_58 = this->Range;
              local_60 = '\x05';
              dVar20 = (double)(pFVar15->Data)._padding_ * __real_4008000000000000;
              dVar18 = (double)(pFVar15->Data)._padding_;
              dVar19 = (((dVar18 * __real_4008000000000000 - dVar8 * __real_4018000000000000) +
                        dVar20) / (dVar6 * dVar6)) * __real_3fd5555555555555;
              local_90._8_4_ = (undefined4)__real_3ff0000000000000;
              local_90._0_8_ = param_1;
              local_90._12_4_ = __real_3ff0000000000000._4_4_;
              local_80 = CONCAT44(uStack_114,local_118);
              local_b0._8_4_ = SUB84(dVar19,0);
              local_b0._0_8_ =
                   ((((dVar8 * __real_4008000000000000 - dVar18) - dVar20) +
                    (double)(pFVar15->Data)._padding_) / (dVar6 * dVar6 * dVar6)) *
                   __real_3fd0000000000000;
              local_b0._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
              local_a0._8_4_ = SUB84(dVar18,0);
              local_a0._0_8_ = (dVar8 - dVar18) * (__real_3ff8000000000000 / dVar6);
              local_a0._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
              TOptional<UE::MovieScene::Interpolation::FCachedInterpolation>::
              TOptional<UE::MovieScene::Interpolation::FCachedInterpolation>
                        (__return_storage_ptr__,(FCachedInterpolation *)local_b0);
              return __return_storage_ptr__;
            }
          }
          else {
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneInterpolation.cpp"
                                ,0x14d,
                                L"Unable to compute the integral of a quartic. Although the math is easy, quintic curves are practically impossible to solve."
                               );
            if (bVar14) {
              pcVar3 = (code *)swi(3);
              pTVar16 = (TOptional<UE::MovieScene::Interpolation::FCachedInterpolation> *)
                        (*pcVar3)();
              return pTVar16;
            }
          }
          __return_storage_ptr__->bIsSet = false;
        }
        else {
          dVar6 = (double)(pFVar15->Data)._padding_;
          local_c0 = '\x05';
          dVar8 = dVar6 * (double)(pFVar15->Data)._padding_;
          local_118 = (undefined4)(pFVar15->Data)._padding_;
          dVar18 = dVar6 * (double)(pFVar15->Data)._padding_ * __real_3fd5555555555555;
          local_b8 = this->Range;
          local_110._8_4_ = SUB84(dVar18,0);
          local_110._0_8_ = dVar6 * (double)(pFVar15->Data)._padding_ * __real_3fd0000000000000;
          local_110._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
          local_f0._8_4_ = SUB84(dVar6,0);
          local_f0._0_8_ = param_1;
          local_f0._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
          local_e0 = CONCAT44(uStack_114,local_118);
          local_100._8_4_ = SUB84(dVar8,0);
          local_100._0_8_ = dVar6 * (double)(pFVar15->Data)._padding_ * __real_3fe0000000000000;
          local_100._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
          TOptional<UE::MovieScene::Interpolation::FCachedInterpolation>::
          TOptional<UE::MovieScene::Interpolation::FCachedInterpolation>
                    (__return_storage_ptr__,(FCachedInterpolation *)local_110);
        }
      }
      else {
        lVar10 = (pFVar15->Data)._padding_;
        uVar9 = *(undefined4 *)((longlong)&(pFVar15->Data)._padding_ + 4);
        lVar11 = (pFVar15->Data)._padding_;
        dVar6 = (double)(pFVar15->Data)._padding_ * __real_3fd5555555555555;
        FVar2 = this->Range;
        dVar8 = (double)(pFVar15->Data)._padding_ * __real_3fe0000000000000;
        (__return_storage_ptr__->TypedValue).Data.TypeIndex = '\x04';
        uVar13 = __real_3ff0000000000000._4_4_;
        uVar12 = (undefined4)__real_3ff0000000000000;
        auVar5._8_4_ = SUB84(dVar8,0);
        auVar5._0_8_ = dVar6;
        auVar5._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        (__return_storage_ptr__->TypedValue).Data._padding_ = (longlong)dVar6;
        (__return_storage_ptr__->TypedValue).Data._padding_ = auVar5._8_8_;
        *(int *)&(__return_storage_ptr__->TypedValue).Data._padding_ = (int)lVar10;
        *(undefined4 *)((longlong)&(__return_storage_ptr__->TypedValue).Data._padding_ + 4) = uVar9;
        (__return_storage_ptr__->TypedValue).Data._padding_ = (longlong)param_1;
        *(undefined4 *)&(__return_storage_ptr__->TypedValue).Data._padding_ = uVar12;
        *(undefined4 *)((longlong)&(__return_storage_ptr__->TypedValue).Data._padding_ + 4) = uVar13
        ;
        *(int *)&(__return_storage_ptr__->TypedValue).Data._padding_ = (int)lVar11;
        *(undefined4 *)((longlong)&(__return_storage_ptr__->TypedValue).Data._padding_ + 4) =
             uStack_11c;
        (__return_storage_ptr__->TypedValue).Range = FVar2;
        __return_storage_ptr__->bIsSet = true;
      }
    }
    else {
      lVar10 = (pFVar15->Data)._padding_;
      lVar11 = (pFVar15->Data)._padding_;
      dVar6 = (double)(pFVar15->Data)._padding_ * __real_3fe0000000000000;
      FVar2 = this->Range;
      (__return_storage_ptr__->TypedValue).Data.TypeIndex = '\x03';
      auVar4._8_4_ = (int)lVar10;
      auVar4._0_8_ = dVar6;
      auVar4._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
      (__return_storage_ptr__->TypedValue).Data._padding_ = (longlong)dVar6;
      (__return_storage_ptr__->TypedValue).Data._padding_ = auVar4._8_8_;
      auVar7._8_4_ = (int)lVar11;
      auVar7._0_8_ = param_1;
      auVar7._12_4_ = uStack_12c;
      (__return_storage_ptr__->TypedValue).Data._padding_ = (longlong)param_1;
      (__return_storage_ptr__->TypedValue).Data._padding_ = auVar7._8_8_;
      (__return_storage_ptr__->TypedValue).Range = FVar2;
      __return_storage_ptr__->bIsSet = true;
    }
  }
  else {
    lVar10 = (pFVar15->Data)._padding_;
    lVar11 = (pFVar15->Data)._padding_;
    uVar9 = *(undefined4 *)((longlong)&(pFVar15->Data)._padding_ + 4);
    FVar2 = this->Range;
    (__return_storage_ptr__->TypedValue).Data.TypeIndex = '\x02';
    *(int *)&(__return_storage_ptr__->TypedValue).Data._padding_ = (int)lVar11;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->TypedValue).Data._padding_ + 4) = uVar9;
    (__return_storage_ptr__->TypedValue).Data._padding_ = (longlong)param_1;
    (__return_storage_ptr__->TypedValue).Data._padding_ = CONCAT44(uStack_134,(int)lVar10);
    (__return_storage_ptr__->TypedValue).Range = FVar2;
    __return_storage_ptr__->bIsSet = true;
  }
  return __return_storage_ptr__;
}

// Evaluate @ 1460c2330

bool __thiscall
UE::MovieScene::Interpolation::FCachedInterpolation::Evaluate
          (FCachedInterpolation *this,FFrameTime param_1,double *param_2)

{
  uchar uVar1;
  FCachedInterpolation *pFVar2;
  FCachedInterpolation *pFVar3;
  undefined1 in_XMM2 [16];
  undefined1 auVar4 [16];
  float fVar5;
  double dVar6;
  float fStackX_c;
  
  uVar1 = (this->Data).TypeIndex;
  pFVar3 = (FCachedInterpolation *)0x0;
  pFVar2 = this;
  if (uVar1 != '\x01') {
    pFVar2 = pFVar3;
  }
  if (pFVar2 != (FCachedInterpolation *)0x0) {
    *param_2 = (double)(pFVar2->Data)._padding_;
    return true;
  }
  pFVar2 = this;
  if (uVar1 != '\x02') {
    pFVar2 = pFVar3;
  }
  fStackX_c = param_1.SubFrame;
  if (pFVar2 != (FCachedInterpolation *)0x0) {
    auVar4 = roundps(in_XMM2,ZEXT416((uint)(fStackX_c - 0.0)),1);
    fVar5 = (fStackX_c - 0.0) - auVar4._0_4_;
    if (::FFrameTime::MaxSubframe <= fVar5) {
      fVar5 = ::FFrameTime::MaxSubframe;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    *param_2 = ((double)((int)auVar4._0_4_ +
                        (param_1.FrameNumber.Value.Value - (int)(pFVar2->Data)._padding_)) +
               (double)fVar5) * (double)(pFVar2->Data)._padding_ + (double)(pFVar2->Data)._padding_;
    return true;
  }
  pFVar2 = this;
  if (uVar1 != '\x03') {
    pFVar2 = pFVar3;
  }
  if (pFVar2 != (FCachedInterpolation *)0x0) {
    auVar4 = roundps(in_XMM2,ZEXT416((uint)(fStackX_c - 0.0)),1);
    fVar5 = (fStackX_c - 0.0) - auVar4._0_4_;
    if (::FFrameTime::MaxSubframe <= fVar5) {
      fVar5 = ::FFrameTime::MaxSubframe;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    dVar6 = (double)((int)auVar4._0_4_ +
                    (param_1.FrameNumber.Value.Value - (int)(pFVar2->Data)._padding_)) +
            (double)fVar5;
    *param_2 = (dVar6 * (double)(pFVar2->Data)._padding_ + (double)(pFVar2->Data)._padding_) * dVar6
               + (double)(pFVar2->Data)._padding_;
    return true;
  }
  pFVar2 = this;
  if (uVar1 != '\x04') {
    pFVar2 = pFVar3;
  }
  if (pFVar2 != (FCachedInterpolation *)0x0) {
    dVar6 = FCubicInterpolation::Evaluate((FCubicInterpolation *)pFVar2,param_1);
    *param_2 = dVar6;
    return true;
  }
  pFVar2 = this;
  if (uVar1 != '\x05') {
    pFVar2 = pFVar3;
  }
  if (pFVar2 != (FCachedInterpolation *)0x0) {
    dVar6 = FQuarticInterpolation::Evaluate((FQuarticInterpolation *)pFVar2,param_1);
    *param_2 = dVar6;
    return true;
  }
  pFVar2 = this;
  if (uVar1 != '\x06') {
    pFVar2 = pFVar3;
  }
  if (pFVar2 != (FCachedInterpolation *)0x0) {
    dVar6 = FCubicBezierInterpolation::Evaluate((FCubicBezierInterpolation *)pFVar2,param_1);
    *param_2 = dVar6;
    return true;
  }
  if (uVar1 != '\a') {
    this = pFVar3;
  }
  if (this != (FCachedInterpolation *)0x0) {
    dVar6 = FWeightedCubicInterpolation::Evaluate((FWeightedCubicInterpolation *)this,param_1);
    *param_2 = dVar6;
    return true;
  }
  return false;
}

// GetRange @ 1460d0190

FCachedInterpolationRange __thiscall
UE::MovieScene::Interpolation::FCachedInterpolation::GetRange(FCachedInterpolation *this)

{
  FCachedInterpolationRange in_RDX;
  
  *(FCachedInterpolationRange *)in_RDX = this->Range;
  return in_RDX;
}

// InverseEvaluate @ 1460d75a0

int __thiscall
UE::MovieScene::Interpolation::FCachedInterpolation::InverseEvaluate
          (FCachedInterpolation *this,double param_1,TInterpSolutions<FFrameTime,4> param_2)

{
  uchar uVar1;
  FFrameTime FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FFrameNumber FVar8;
  char *pcVar9;
  FCachedInterpolation *pFVar10;
  FCachedInterpolation *pFVar11;
  TInterpSolutions<FFrameTime,4> TVar12;
  FCachedInterpolation *pFVar13;
  float fStack_4c;
  float fStack_44;
  
  uVar1 = (this->Data).TypeIndex;
  pFVar11 = (FCachedInterpolation *)0x0;
  iVar7 = 0;
  pFVar10 = this;
  if (uVar1 != '\x01') {
    pFVar10 = pFVar11;
  }
  iVar6 = 0;
  if (pFVar10 != (FCachedInterpolation *)0x0) {
    if (param_1 == (double)(pFVar10->Data)._padding_) {
      iVar5 = (this->Range).Start.Value;
      if ((iVar5 == -0x80000000) && (iVar5 = (this->Range).End.Value, iVar5 == -0x80000000)) {
        (param_2.Array)->FrameNumber = 0;
        (param_2.Array)->SubFrame = 0.0;
        iVar6 = 1;
      }
      else {
        (param_2.Array)->SubFrame = 0.0;
        iVar6 = 1;
        ((param_2.Array)->FrameNumber).Value = iVar5;
      }
    }
    goto LAB_1460d771c;
  }
  pFVar10 = this;
  if (uVar1 != '\x02') {
    pFVar10 = pFVar11;
  }
  if (pFVar10 == (FCachedInterpolation *)0x0) {
    pFVar10 = this;
    if (uVar1 != '\x03') {
      pFVar10 = pFVar11;
    }
    if (pFVar10 == (FCachedInterpolation *)0x0) {
      pFVar10 = this;
      if (uVar1 != '\x04') {
        pFVar10 = pFVar11;
      }
      if (pFVar10 == (FCachedInterpolation *)0x0) {
        pFVar10 = this;
        if (uVar1 != '\x05') {
          pFVar10 = pFVar11;
        }
        if (pFVar10 == (FCachedInterpolation *)0x0) {
          pFVar10 = this;
          if (uVar1 != '\x06') {
            pFVar10 = pFVar11;
          }
          if (pFVar10 == (FCachedInterpolation *)0x0) {
            pFVar10 = this;
            if (uVar1 != '\a') {
              pFVar10 = pFVar11;
            }
            if ((pFVar10 == (FCachedInterpolation *)0x0) ||
               (iVar6 = FWeightedCubicInterpolation::Solve
                                  ((FWeightedCubicInterpolation *)pFVar10,param_1,param_2),
               iVar6 < 3)) goto LAB_1460d771c;
            iVar5 = 0x1b2;
          }
          else {
            iVar6 = FCubicBezierInterpolation::Solve
                              ((FCubicBezierInterpolation *)pFVar10,param_1,param_2);
            if (iVar6 < 3) goto LAB_1460d771c;
            iVar5 = 0x1ad;
          }
          goto LAB_1460d76fc;
        }
        iVar6 = FQuarticInterpolation::Solve((FQuarticInterpolation *)pFVar10,param_1,param_2);
        if (iVar6 < 5) goto LAB_1460d771c;
        iVar5 = 0x1a8;
        pcVar9 = "NumSolutions <= 4";
      }
      else {
        iVar6 = FCubicInterpolation::Solve
                          ((FCubicInterpolation *)pFVar10,param_1,
                           (TInterpSolutions<FFrameTime,3>)param_2.Array);
        if (iVar6 < 4) goto LAB_1460d771c;
        iVar5 = 0x1a3;
        pcVar9 = "NumSolutions <= 3";
      }
    }
    else {
      iVar6 = FQuadraticInterpolation::Solve
                        ((FQuadraticInterpolation *)pFVar10,param_1,
                         (TInterpSolutions<FFrameTime,2>)param_2.Array);
      if (iVar6 < 3) goto LAB_1460d771c;
      iVar5 = 0x19e;
LAB_1460d76fc:
      pcVar9 = "NumSolutions <= 2";
    }
  }
  else {
    iVar6 = FLinearInterpolation::Solve
                      ((FLinearInterpolation *)pFVar10,param_1,
                       (TInterpSolutions<FFrameTime,1>)param_2.Array);
    if (iVar6 < 2) goto LAB_1460d771c;
    iVar5 = 0x199;
    pcVar9 = "NumSolutions <= 1";
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar9,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneInterpolation.cpp"
                     ,iVar5,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar7 = (*pcVar3)();
    return iVar7;
  }
LAB_1460d771c:
  pFVar10 = pFVar11;
  TVar12.Array = param_2.Array;
  pFVar13 = pFVar11;
  if (0 < iVar6) {
    do {
      iVar7 = (this->Range).Start.Value;
      if (((FCachedInterpolation *)&DAT_00000003 < pFVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index<MinN",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneInterpolation.h"
                             ,0x4c,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
      FVar8 = param_2.Array[(longlong)pFVar10].FrameNumber;
      if ((iVar7 < FVar8.Value) ||
         ((FVar8.Value == iVar7 &&
          (fStack_4c = param_2.Array[(longlong)pFVar10].SubFrame, 0.0 <= fStack_4c)))) {
        iVar7 = (this->Range).End.Value;
        if (((FCachedInterpolation *)&DAT_00000003 < pFVar10) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index<MinN",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneInterpolation.h"
                               ,0x4c,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar7 = (*pcVar3)();
          return iVar7;
        }
        FVar8 = param_2.Array[(longlong)pFVar10].FrameNumber;
        if ((FVar8.Value < iVar7) ||
           ((FVar8.Value == iVar7 &&
            (fStack_44 = param_2.Array[(longlong)pFVar10].SubFrame, fStack_44 <= 0.0)))) {
          if (pFVar10 != pFVar13) {
            if (((FCachedInterpolation *)&DAT_00000003 < pFVar10) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index<MinN",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneInterpolation.h"
                                   ,0x4c,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              iVar7 = (*pcVar3)();
              return iVar7;
            }
            FVar2 = param_2.Array[(longlong)pFVar10];
            if ((3 < (longlong)pFVar13) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index<MinN",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneInterpolation.h"
                                   ,0x4c,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              iVar7 = (*pcVar3)();
              return iVar7;
            }
            *TVar12.Array = FVar2;
          }
          pFVar11 = (FCachedInterpolation *)(ulonglong)((int)pFVar11 + 1);
          pFVar13 = (FCachedInterpolation *)((longlong)&(pFVar13->Data)._padding_ + 1);
          TVar12.Array = TVar12.Array + 1;
        }
      }
      iVar7 = (int)pFVar11;
      pFVar10 = (FCachedInterpolation *)((longlong)&(pFVar10->Data)._padding_ + 1);
    } while ((longlong)pFVar10 < (longlong)iVar6);
  }
  return iVar7;
}

// IsCacheValidForTime @ 1460d8930

bool __thiscall
UE::MovieScene::Interpolation::FCachedInterpolation::IsCacheValidForTime
          (FCachedInterpolation *this,FFrameNumber param_1)

{
  int iVar1;
  
  if (((this->Range).Start.Value <= param_1.Value) &&
     ((iVar1 = (this->Range).End.Value, param_1.Value < iVar1 || (iVar1 == 0x7fffffff)))) {
    return true;
  }
  return false;
}

// IsValid @ 1460d9380

bool __thiscall
UE::MovieScene::Interpolation::FCachedInterpolation::IsValid(FCachedInterpolation *this)

{
  return (this->Range).Start.Value < (this->Range).End.Value;
}

// Offset @ 1460da810

void __thiscall
UE::MovieScene::Interpolation::FCachedInterpolation::Offset
          (FCachedInterpolation *this,double param_1)

{
  uchar uVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  FCachedInterpolation *pFVar5;
  FCachedInterpolation *pFVar6;
  
  uVar1 = (this->Data).TypeIndex;
  pFVar6 = (FCachedInterpolation *)0x0;
  pFVar5 = this;
  if (uVar1 != '\x01') {
    pFVar5 = pFVar6;
  }
  if (pFVar5 != (FCachedInterpolation *)0x0) {
    (pFVar5->Data)._padding_ = (longlong)(param_1 + (double)(pFVar5->Data)._padding_);
    return;
  }
  pFVar5 = this;
  if (uVar1 != '\x02') {
    pFVar5 = pFVar6;
  }
  if (pFVar5 != (FCachedInterpolation *)0x0) {
    (pFVar5->Data)._padding_ = (longlong)(param_1 + (double)(pFVar5->Data)._padding_);
    return;
  }
  pFVar5 = this;
  if (uVar1 != '\x03') {
    pFVar5 = pFVar6;
  }
  if (pFVar5 != (FCachedInterpolation *)0x0) {
    (pFVar5->Data)._padding_ = (longlong)(param_1 + (double)(pFVar5->Data)._padding_);
    return;
  }
  pFVar5 = this;
  if (uVar1 != '\x04') {
    pFVar5 = pFVar6;
  }
  if (pFVar5 != (FCachedInterpolation *)0x0) {
    (pFVar5->Data)._padding_ = (longlong)(param_1 + (double)(pFVar5->Data)._padding_);
    return;
  }
  pFVar5 = this;
  if (uVar1 != '\x05') {
    pFVar5 = pFVar6;
  }
  if (pFVar5 != (FCachedInterpolation *)0x0) {
    (pFVar5->Data)._padding_ = (longlong)(param_1 + (double)(pFVar5->Data)._padding_);
    return;
  }
  pFVar5 = this;
  if (uVar1 != '\x06') {
    pFVar5 = pFVar6;
  }
  if (pFVar5 != (FCachedInterpolation *)0x0) {
    (pFVar5->Data)._padding_ = (longlong)(param_1 + (double)(pFVar5->Data)._padding_);
    (pFVar5->Data)._padding_ = (longlong)(param_1 + (double)(pFVar5->Data)._padding_);
    dVar3 = (double)(pFVar5->Data)._padding_ + param_1;
    dVar4 = (double)(pFVar5->Data)._padding_ + param_1;
    auVar2._8_4_ = SUB84(dVar4,0);
    auVar2._0_8_ = dVar3;
    auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    (pFVar5->Data)._padding_ = (longlong)dVar3;
    (pFVar5->Data)._padding_ = auVar2._8_8_;
    return;
  }
  if (uVar1 != '\a') {
    this = pFVar6;
  }
  if (this != (FCachedInterpolation *)0x0) {
    (this->Data)._padding_ = (longlong)(param_1 + (double)(this->Data)._padding_);
    (this->Data)._padding_ = (longlong)(param_1 + (double)(this->Data)._padding_);
  }
  return;
}

// operator() @ 1504e2900

bool __thiscall
`UE::MovieScene::Interpolation::FCachedInterpolation::ComputeExtents'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5286752962079620889>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5286752962079620889>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

