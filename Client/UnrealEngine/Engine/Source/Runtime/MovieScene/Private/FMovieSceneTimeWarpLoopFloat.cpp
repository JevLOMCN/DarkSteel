// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 7

// StaticStruct @ 146244b10

UScriptStruct * __cdecl FMovieSceneTimeWarpLoopFloat::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpLoopFloat.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpLoopFloat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoopFloat,(UObject *)pUVar1,
                         L"MovieSceneTimeWarpLoopFloat");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpLoopFloat.OuterSingleton;
}

// ComputeTraversedHull @ 1462a7ae0

TRange<FFrameTime> * __thiscall
FMovieSceneTimeWarpLoopFloat::ComputeTraversedHull
          (FMovieSceneTimeWarpLoopFloat *this,TRange<FFrameTime> *__return_storage_ptr__,
          TRange<FFrameTime> *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  FFrameTime FVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uchar uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  FFrameTime FVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  int iVar16;
  TRange<FFrameTime> *pTVar17;
  FFrameTime FVar18;
  FFrameNumber FVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 in_XMM2 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  float fStack_ac;
  float fStack_a4;
  char local_a0;
  char local_94;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  
  dVar14 = __real_c1e0000000000000;
  dVar13 = __real_41dfffffffc00000;
  uVar31 = SUB84(__real_41dfffffffc00000,0);
  uVar32 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
  auVar29._8_8_ = 0;
  auVar29._0_8_ = (double)this->Duration;
  auVar29 = roundpd(in_XMM2,auVar29,1);
  uVar33 = SUB84(__real_c1e0000000000000,0);
  uVar34 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
  uVar22 = auVar29._0_4_;
  uVar27 = auVar29._4_4_;
  if (__real_41dfffffffc00000 <= auVar29._0_8_) {
    uVar22 = uVar31;
    uVar27 = uVar32;
  }
  if ((double)CONCAT44(uVar27,uVar22) <= __real_c1e0000000000000) {
    uVar22 = uVar33;
    uVar27 = uVar34;
  }
  fVar23 = (float)((double)this->Duration - auVar29._0_8_);
  if (::FFrameTime::MaxSubframe <= fVar23) {
    fVar23 = ::FFrameTime::MaxSubframe;
  }
  if (fVar23 <= 0.0) {
    fVar23 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar23) {
    fVar23 = ::FFrameTime::MaxSubframe;
  }
  if (fVar23 <= 0.0) {
    fVar23 = 0.0;
  }
  uVar1 = (param_1->LowerBound).Type;
  if ((uVar1 == '\x02') || (uVar2 = (param_1->UpperBound).Type, uVar2 == '\x02')) {
    (__return_storage_ptr__->LowerBound).Type.Value = '\x01';
    (__return_storage_ptr__->LowerBound).Value.FrameNumber = 0;
    (__return_storage_ptr__->LowerBound).Value.SubFrame = 0.0;
    FVar3.SubFrame = fVar23;
    FVar3.FrameNumber.Value = (int)(double)CONCAT44(uVar27,uVar22);
    (__return_storage_ptr__->UpperBound).Type.Value = '\0';
    (__return_storage_ptr__->UpperBound).Value = FVar3;
    return __return_storage_ptr__;
  }
  if (((param_1->LowerBound).Type.Value == '\x02') &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type != ERangeBoundTypes::Open",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                          ,99,L""), bVar15)) {
    pcVar4 = (code *)swi(3);
    pTVar17 = (TRange<FFrameTime> *)(*pcVar4)();
    return pTVar17;
  }
  dVar12 = __real_3fe0000000000000;
  fVar24 = this->Duration;
  FVar3 = (param_1->LowerBound).Value;
  fStack_ac = FVar3.SubFrame;
  dVar30 = (double)FVar3.FrameNumber.Value.Value + (double)fStack_ac;
  iVar20 = (int)((longlong)ROUND((dVar30 + dVar30) / (double)fVar24 - __real_3fe0000000000000) >> 1)
  ;
  dVar30 = dVar30 - (double)((float)iVar20 * fVar24);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar30;
  auVar29 = roundpd(ZEXT416((uint)fVar24),auVar5,1);
  uVar25 = auVar29._0_4_;
  uVar28 = auVar29._4_4_;
  if (dVar13 <= auVar29._0_8_) {
    uVar25 = uVar31;
    uVar28 = uVar32;
  }
  if ((double)CONCAT44(uVar28,uVar25) <= dVar14) {
    uVar25 = uVar33;
    uVar28 = uVar34;
  }
  iVar21 = (int)(double)CONCAT44(uVar28,uVar25);
  fVar24 = (float)(dVar30 - auVar29._0_8_);
  if (::FFrameTime::MaxSubframe <= fVar24) {
    fVar24 = ::FFrameTime::MaxSubframe;
  }
  if (fVar24 <= 0.0) {
    fVar24 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar24) {
    fVar24 = ::FFrameTime::MaxSubframe;
  }
  if (fVar24 <= 0.0) {
    fVar24 = 0.0;
  }
  if (((param_1->UpperBound).Type.Value == '\x02') &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type != ERangeBoundTypes::Open",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                          ,99,L""), bVar15)) {
    pcVar4 = (code *)swi(3);
    pTVar17 = (TRange<FFrameTime> *)(*pcVar4)();
    return pTVar17;
  }
  FVar3 = (param_1->UpperBound).Value;
  fVar26 = this->Duration;
  fStack_a4 = FVar3.SubFrame;
  dVar30 = (double)fStack_a4 + (double)FVar3.FrameNumber.Value.Value;
  iVar16 = (int)((longlong)ROUND((dVar30 + dVar30) / (double)fVar26 - dVar12) >> 1);
  dVar30 = dVar30 - (double)((float)iVar16 * fVar26);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar30;
  auVar29 = roundpd(ZEXT416((uint)fVar26),auVar6,1);
  uVar25 = auVar29._0_4_;
  uVar28 = auVar29._4_4_;
  if (dVar13 <= auVar29._0_8_) {
    uVar25 = uVar31;
    uVar28 = uVar32;
  }
  if ((double)CONCAT44(uVar28,uVar25) <= dVar14) {
    uVar25 = uVar33;
    uVar28 = uVar34;
  }
  FVar19.Value = (int)(double)CONCAT44(uVar28,uVar25);
  fVar26 = (float)(dVar30 - auVar29._0_8_);
  if (::FFrameTime::MaxSubframe <= fVar26) {
    fVar26 = ::FFrameTime::MaxSubframe;
  }
  if (fVar26 <= 0.0) {
    fVar26 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar26) {
    fVar26 = ::FFrameTime::MaxSubframe;
  }
  if (fVar26 <= 0.0) {
    fVar26 = 0.0;
  }
  if (iVar20 == iVar16) {
    uVar22 = *(undefined4 *)&param_1->LowerBound;
    uVar7 = (param_1->UpperBound).Type.Value;
    uVar8 = (param_1->UpperBound).field_0x1;
    uVar9 = (param_1->UpperBound).field_0x2;
    uVar10 = (param_1->UpperBound).field_0x3;
    if (((param_1->LowerBound).Type.Value == '\x02') &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,0x73,L""), bVar15)) {
      pcVar4 = (code *)swi(3);
      pTVar17 = (TRange<FFrameTime> *)(*pcVar4)();
      return pTVar17;
    }
    uStack_84 = (undefined1)iVar21;
    uStack_83 = (undefined1)((uint)iVar21 >> 8);
    uStack_82 = (undefined1)((uint)iVar21 >> 0x10);
    uStack_81 = (undefined1)((uint)iVar21 >> 0x18);
    if ((uVar7 == '\x02') &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,0x73,L""), bVar15)) {
      pcVar4 = (code *)swi(3);
      pTVar17 = (TRange<FFrameTime> *)(*pcVar4)();
      return pTVar17;
    }
    FVar11.SubFrame = fVar26;
    FVar11.FrameNumber.Value = FVar19.Value;
    (__return_storage_ptr__->LowerBound).Type = (TEnumAsByte<ERangeBoundTypes::Type>)(char)uVar22;
    *(int3 *)&(__return_storage_ptr__->LowerBound).field_0x1 = (int3)((uint)uVar22 >> 8);
    (__return_storage_ptr__->LowerBound).Value.FrameNumber =
         (FFrameNumber)
         (int)(CONCAT17(uStack_81,CONCAT16(uStack_82,CONCAT15(uStack_83,CONCAT14(uStack_84,uVar22)))
                       ) >> 0x20);
    *(ulonglong *)&(__return_storage_ptr__->LowerBound).Value.SubFrame =
         CONCAT17(uVar10,CONCAT16(uVar9,CONCAT15(uVar8,CONCAT14(uVar7,fVar24))));
    (__return_storage_ptr__->UpperBound).Value = FVar11;
    return __return_storage_ptr__;
  }
  if ((iVar16 - iVar20) + -1 < 1) {
    FVar18.SubFrame = fVar26;
    FVar18.FrameNumber.Value = FVar19.Value;
    if ((FVar19.Value <= iVar21) && ((FVar19.Value != iVar21 || (fVar26 <= fVar24)))) {
      (__return_storage_ptr__->LowerBound).Type.Value = '\x01';
      (__return_storage_ptr__->LowerBound).Value.FrameNumber = 0;
      (__return_storage_ptr__->LowerBound).Value.SubFrame = 0.0;
      (__return_storage_ptr__->UpperBound).Type.Value = '\0';
      goto LAB_1462a7e3f;
    }
  }
  (__return_storage_ptr__->LowerBound).Type.Value = '\x01';
  (__return_storage_ptr__->LowerBound).Value.FrameNumber = 0;
  (__return_storage_ptr__->LowerBound).Value.SubFrame = 0.0;
  FVar18.SubFrame = fVar23;
  FVar18.FrameNumber.Value = (int)(double)CONCAT44(uVar27,uVar22);
  (__return_storage_ptr__->UpperBound).Type.Value = '\0';
LAB_1462a7e3f:
  (__return_storage_ptr__->UpperBound).Value = FVar18;
  return __return_storage_ptr__;
}

// ExtractBoundariesWithinRange @ 1462ac970

bool __thiscall
FMovieSceneTimeWarpLoopFloat::ExtractBoundariesWithinRange
          (FMovieSceneTimeWarpLoopFloat *this,TRange<FFrameTime> *param_1,
          TFunctionRef<bool___cdecl(FFrameTime)> *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  uint uVar10;
  ulonglong uVar11;
  double dVar12;
  undefined1 auVar13 [16];
  float fVar14;
  double dVar15;
  undefined1 in_XMM2 [16];
  double dVar16;
  double dVar17;
  undefined8 local_res10;
  char local_78;
  char local_6c;
  
  dVar6 = __real_c1e0000000000000;
  uVar1 = (param_1->LowerBound).Type;
  dVar4 = __real_c1e0000000000000;
  if (uVar1 != '\x02') {
    if (((param_1->LowerBound).Type.Value == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    dVar4 = (double)(param_1->LowerBound).Value.SubFrame +
            (double)(param_1->LowerBound).Value.FrameNumber.Value;
  }
  dVar5 = __real_41dfffffffc00000;
  uVar2 = (param_1->UpperBound).Type;
  dVar17 = __real_41dfffffffc00000;
  if (uVar2 != '\x02') {
    if (((param_1->UpperBound).Type.Value == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    dVar17 = (double)(param_1->UpperBound).Value.SubFrame +
             (double)(param_1->UpperBound).Value.FrameNumber.Value;
  }
  dVar17 = (dVar17 + dVar17) / (double)this->Duration - __real_3fe0000000000000;
  uVar11 = (longlong)
           ROUND((__real_4000000000000000 / (double)this->Duration) * dVar4 -
                 __real_3fe0000000000000) >> 1;
  uVar10 = (uint)uVar11;
  do {
    if ((int)((longlong)ROUND(dVar17) >> 1) < (int)uVar10) {
      return true;
    }
    dVar16 = (double)((float)(int)uVar11 * this->Duration);
    if (dVar4 <= dVar16) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = dVar16;
      in_XMM2 = roundpd(in_XMM2,auVar13,1);
      dVar15 = in_XMM2._0_8_;
      dVar12 = dVar15;
      if (dVar5 <= dVar15) {
        dVar12 = dVar5;
      }
      if (dVar12 <= dVar6) {
        dVar12 = dVar6;
      }
      fVar14 = (float)(dVar16 - dVar15);
      if (::FFrameTime::MaxSubframe <= (float)(dVar16 - dVar15)) {
        fVar14 = ::FFrameTime::MaxSubframe;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      if (::FFrameTime::MaxSubframe <= fVar14) {
        fVar14 = ::FFrameTime::MaxSubframe;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      local_res10 = CONCAT44(fVar14,(int)dVar12);
      cVar9 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res10);
      if (cVar9 == '\0') {
        return false;
      }
    }
    uVar10 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar10;
  } while( true );
}

// InverseRemapTimeCycled @ 1462b38e0

TOptional<FFrameTime> * __thiscall
FMovieSceneTimeWarpLoopFloat::InverseRemapTimeCycled
          (FMovieSceneTimeWarpLoopFloat *this,TOptional<FFrameTime> *__return_storage_ptr__,
          FFrameTime param_1,FFrameTime param_2,FInverseTransformTimeParams *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  float fVar5;
  FFrameNumber FVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 in_XMM2 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  FFrameTime local_res18;
  float fStack_44;
  
  FVar6 = param_1.FrameNumber.Value;
  if (-1 < FVar6.Value) {
    dVar3 = (double)this->Duration;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = dVar3;
    auVar10 = roundpd(in_XMM2,auVar11,1);
    uVar7 = auVar10._0_4_;
    uVar8 = auVar10._4_4_;
    if (__real_41dfffffffc00000 <= auVar10._0_8_) {
      uVar7 = SUB84(__real_41dfffffffc00000,0);
      uVar8 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
    }
    if ((double)CONCAT44(uVar8,uVar7) <= __real_c1e0000000000000) {
      uVar7 = SUB84(__real_c1e0000000000000,0);
      uVar8 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
    }
    fStack_44 = param_1.SubFrame;
    fVar5 = fStack_44;
    if (FVar6.Value < (int)(double)CONCAT44(uVar8,uVar7)) {
LAB_1462b3979:
      fStack_44 = param_2.SubFrame;
      dVar2 = (double)param_2.FrameNumber.Value.Value + (double)fStack_44;
      dVar12 = FGenericPlatformMath::Fmod((double)fVar5 + (double)FVar6.Value,dVar3);
      __return_storage_ptr__->bIsSet = true;
      dVar12 = (double)((float)(int)((longlong)
                                     ROUND((dVar2 + dVar2) / dVar3 - __real_3fe0000000000000) >> 1)
                       * this->Duration) + dVar12;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = dVar12;
      auVar11 = roundpd(auVar10,auVar1,1);
      uVar7 = auVar11._0_4_;
      uVar8 = auVar11._4_4_;
      if (__real_41dfffffffc00000 <= auVar11._0_8_) {
        uVar7 = SUB84(__real_41dfffffffc00000,0);
        uVar8 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
      }
      local_res18.SubFrame = (float)(dVar12 - auVar11._0_8_);
      if ((double)CONCAT44(uVar8,uVar7) <= __real_c1e0000000000000) {
        uVar7 = SUB84(__real_c1e0000000000000,0);
        uVar8 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
      }
      if (::FFrameTime::MaxSubframe <= local_res18.SubFrame) {
        local_res18.SubFrame = ::FFrameTime::MaxSubframe;
      }
      if (local_res18.SubFrame <= 0.0) {
        local_res18.SubFrame = 0.0;
      }
      if (::FFrameTime::MaxSubframe <= local_res18.SubFrame) {
        local_res18.SubFrame = ::FFrameTime::MaxSubframe;
      }
      if (local_res18.SubFrame <= 0.0) {
        local_res18.SubFrame = 0.0;
      }
      local_res18.FrameNumber.Value = (int)(double)CONCAT44(uVar8,uVar7);
      __return_storage_ptr__->TypedValue = local_res18;
      return __return_storage_ptr__;
    }
    if (FVar6.Value == (int)(double)CONCAT44(uVar8,uVar7)) {
      fVar9 = (float)(dVar3 - auVar10._0_8_);
      if (::FFrameTime::MaxSubframe <= fVar9) {
        fVar9 = ::FFrameTime::MaxSubframe;
      }
      auVar10 = ZEXT416((uint)fVar9);
      if (fVar9 <= 0.0) {
        auVar10 = ZEXT816(0) << 0x20;
      }
      if (::FFrameTime::MaxSubframe <= auVar10._0_4_) {
        auVar10._0_4_ = ::FFrameTime::MaxSubframe;
      }
      if (auVar10._0_4_ <= 0.0) {
        auVar4._12_4_ = 0;
        auVar4._0_12_ = auVar10._4_12_;
        auVar10 = auVar4 << 0x20;
      }
      if (fStack_44 <= auVar10._0_4_) goto LAB_1462b3979;
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// InverseRemapTimeWithinRange @ 1462b4120

bool __thiscall
FMovieSceneTimeWarpLoopFloat::InverseRemapTimeWithinRange
          (FMovieSceneTimeWarpLoopFloat *this,FFrameTime param_1,FFrameTime param_2,
          FFrameTime param_3,TFunctionRef<bool___cdecl(FFrameTime)> *param_4)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  FFrameNumber FVar14;
  FFrameNumber FVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined1 in_XMM2 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fStackX_c;
  undefined8 local_res10;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8 [23];
  
  FVar15 = param_3.FrameNumber.Value;
  FVar14 = param_2.FrameNumber.Value;
  fStackX_c = param_2.SubFrame;
  fVar40 = fStackX_c;
  local_res10._4_4_ = param_3.SubFrame;
  if ((FVar15.Value <= FVar14.Value) &&
     (((FVar14.Value != FVar15.Value || (local_res10._4_4_ <= fStackX_c)) &&
      (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6351983814461357789>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneTimeWarpVariantPayloads.cpp"
                          ,0x123,"RangeStart < RangeEnd"), bVar5)))) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  fVar4 = __real_3f000000;
  fVar26 = this->Duration;
  dVar31 = (double)fVar26;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = dVar31;
  auVar33 = roundpd(in_XMM2,auVar33,1);
  dVar19 = auVar33._0_8_;
  dVar34 = dVar19;
  if (__real_41dfffffffc00000 <= dVar19) {
    dVar34 = __real_41dfffffffc00000;
  }
  if (dVar34 <= __real_c1e0000000000000) {
    dVar34 = __real_c1e0000000000000;
  }
  iVar18 = (int)dVar34;
  fStackX_c = param_1.SubFrame;
  fVar42 = (float)(dVar31 - dVar19);
  if (::FFrameTime::MaxSubframe <= (float)(dVar31 - dVar19)) {
    fVar42 = ::FFrameTime::MaxSubframe;
  }
  dVar34 = (double)param_1.FrameNumber.Value.Value + (double)fStackX_c;
  if (fVar42 <= 0.0) {
    fVar42 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar42) {
    fVar42 = ::FFrameTime::MaxSubframe;
  }
  if (fVar42 <= 0.0) {
    fVar42 = 0.0;
  }
  iVar11 = (int)((longlong)
                 ROUND((__real_4000000000000000 / dVar31) * dVar34 - __real_3fe0000000000000) >> 1);
  dVar34 = dVar34 - (double)((float)iVar11 * fVar26);
  auVar39._8_8_ = 0;
  auVar39._0_8_ = dVar34;
  auVar33 = roundpd(auVar33,auVar39,1);
  dVar20 = auVar33._0_8_;
  dVar19 = dVar20;
  if (__real_41dfffffffc00000 <= dVar20) {
    dVar19 = __real_41dfffffffc00000;
  }
  fVar43 = (float)(dVar34 - dVar20);
  if (dVar19 <= __real_c1e0000000000000) {
    dVar19 = __real_c1e0000000000000;
  }
  iVar16 = (int)dVar19;
  if (::FFrameTime::MaxSubframe <= fVar43) {
    fVar43 = ::FFrameTime::MaxSubframe;
  }
  if (fVar43 <= 0.0) {
    fVar43 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar43) {
    fVar43 = ::FFrameTime::MaxSubframe;
  }
  if (fVar43 <= 0.0) {
    fVar43 = 0.0;
  }
  auVar38._0_8_ =
       (__real_4000000000000000 / dVar31) * ((double)FVar14.Value + (double)fVar40) -
       __real_3fe0000000000000;
  auVar38._8_8_ = 0;
  iVar17 = (int)((longlong)ROUND(auVar38._0_8_) >> 1);
  dVar34 = ((double)FVar14.Value + (double)fVar40) - (double)((float)iVar17 * fVar26);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = dVar34;
  auVar39 = roundpd(auVar38,auVar21,1);
  dVar20 = auVar39._0_8_;
  dVar19 = dVar20;
  if (__real_41dfffffffc00000 <= dVar20) {
    dVar19 = __real_41dfffffffc00000;
  }
  if (dVar19 <= __real_c1e0000000000000) {
    dVar19 = __real_c1e0000000000000;
  }
  dVar35 = (double)FVar15.Value + (double)local_res10._4_4_;
  iVar13 = (int)((longlong)ROUND((dVar35 + dVar35) / dVar31 - __real_3fe0000000000000) >> 1);
  dVar35 = dVar35 - (double)((float)iVar13 * fVar26);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = dVar35;
  auVar33 = roundpd(auVar33,auVar22,1);
  dVar31 = auVar33._0_8_;
  auVar37._0_8_ = dVar35 - dVar31;
  auVar37._8_8_ = 0;
  if (__real_41dfffffffc00000 <= dVar31) {
    dVar31 = __real_41dfffffffc00000;
  }
  if (dVar31 <= __real_c1e0000000000000) {
    dVar31 = __real_c1e0000000000000;
  }
  fVar40 = (float)auVar37._0_8_;
  if (::FFrameTime::MaxSubframe <= (float)auVar37._0_8_) {
    fVar40 = ::FFrameTime::MaxSubframe;
  }
  auVar23 = ZEXT416((uint)fVar40);
  if (fVar40 <= 0.0) {
    auVar23 = ZEXT816(0) << 0x20;
  }
  if (::FFrameTime::MaxSubframe <= auVar23._0_4_) {
    auVar23._0_4_ = ::FFrameTime::MaxSubframe;
  }
  if (auVar23._0_4_ <= 0.0) {
    auVar2._12_4_ = 0;
    auVar2._0_12_ = auVar23._4_12_;
    auVar23 = auVar2 << 0x20;
  }
  dVar32 = ((double)fVar42 + (double)iVar18) * (double)iVar11;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = dVar32;
  auVar33 = roundpd(auVar37,auVar24,1);
  dVar36 = auVar33._0_8_;
  dVar35 = dVar36;
  if (__real_41dfffffffc00000 <= dVar36) {
    dVar35 = __real_41dfffffffc00000;
  }
  fVar40 = (float)(dVar32 - dVar36);
  if (dVar35 <= __real_c1e0000000000000) {
    dVar35 = __real_c1e0000000000000;
  }
  if (::FFrameTime::MaxSubframe <= fVar40) {
    fVar40 = ::FFrameTime::MaxSubframe;
  }
  if (fVar40 <= 0.0) {
    fVar40 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar40) {
    fVar40 = ::FFrameTime::MaxSubframe;
  }
  if (fVar40 <= 0.0) {
    fVar40 = 0.0;
  }
  fVar40 = fVar40 + fVar43;
  iVar8 = ((int)ROUND((fVar40 + fVar40) - __real_3f000000) >> 1) + iVar16;
  iVar12 = (int)dVar35 + iVar8;
  iVar10 = (int)fVar40;
  fVar26 = fVar40;
  if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar40)) {
    auVar28._4_4_ = fVar40;
    auVar28._0_4_ = fVar40;
    auVar28._8_8_ = 0;
    uVar9 = movmskps(iVar8,auVar28);
    fVar26 = (float)(int)(iVar10 - (uVar9 & 1));
  }
  fVar41 = fVar40 - fVar26;
  if (::FFrameTime::MaxSubframe <= fVar40 - fVar26) {
    fVar41 = ::FFrameTime::MaxSubframe;
  }
  if (fVar41 <= 0.0) {
    fVar41 = 0.0;
  }
  local_res10 = CONCAT44(fVar41,iVar12);
  if ((iVar11 == iVar17) && (iVar16 <= (int)dVar19)) {
    fVar40 = __real_40000000;
    fVar26 = __real_40000000;
    if (iVar16 != (int)dVar19) goto joined_r0x0001462b44d8;
    fVar26 = (float)(dVar34 - dVar20);
    if (::FFrameTime::MaxSubframe <= fVar26) {
      fVar26 = ::FFrameTime::MaxSubframe;
    }
    auVar25 = ZEXT416((uint)fVar26);
    if (fVar26 <= 0.0) {
      auVar25 = ZEXT816(0) << 0x20;
    }
    if (::FFrameTime::MaxSubframe <= auVar25._0_4_) {
      auVar25._0_4_ = ::FFrameTime::MaxSubframe;
    }
    if (auVar25._0_4_ <= 0.0) {
      auVar3._12_4_ = 0;
      auVar3._0_12_ = auVar25._4_12_;
      auVar25 = auVar3 << 0x20;
    }
    fVar26 = __real_40000000;
    if (fVar43 < auVar25._0_4_) goto joined_r0x0001462b44d8;
  }
  local_108 = local_res10;
  cVar7 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_108);
  fVar40 = __real_40000000;
  fVar26 = __real_40000000;
  if (cVar7 == '\0') {
    return false;
  }
joined_r0x0001462b44d8:
  do {
    __real_40000000 = fVar26;
    fVar26 = __real_40000000;
    iVar11 = iVar11 + 1;
    if (iVar13 <= iVar11) {
      if ((iVar13 != iVar17) &&
         ((iVar16 < (int)dVar31 || ((iVar16 == (int)dVar31 && (fVar43 < auVar23._0_4_)))))) {
        fVar42 = fVar42 + fVar41;
        iVar18 = ((int)ROUND(fVar42 * __real_40000000 - fVar4) >> 1) + iVar18;
        iVar11 = (int)fVar42;
        fVar26 = fVar42;
        if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar42)) {
          auVar30._4_4_ = fVar42;
          auVar30._0_4_ = fVar42;
          auVar30._8_8_ = 0;
          uVar9 = movmskps(iVar18,auVar30);
          fVar26 = (float)(int)(iVar11 - (uVar9 & 1));
        }
        local_res10 = CONCAT44(fVar42 - fVar26,iVar12 + iVar18);
        local_f8[0] = local_res10;
        __real_40000000 = fVar40;
        cVar7 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_f8);
        return cVar7 != '\0';
      }
      __real_40000000 = fVar40;
      return true;
    }
    fVar41 = fVar42 + fVar41;
    iVar8 = ((int)ROUND(fVar41 * __real_40000000 - fVar4) >> 1) + iVar18;
    iVar12 = iVar12 + iVar8;
    iVar10 = (int)fVar41;
    fVar27 = fVar41;
    if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar41)) {
      auVar29._4_4_ = fVar41;
      auVar29._0_4_ = fVar41;
      auVar29._8_8_ = 0;
      uVar9 = movmskps(iVar8,auVar29);
      fVar27 = (float)(int)(iVar10 - (uVar9 & 1));
    }
    fVar41 = fVar41 - fVar27;
    local_res10 = CONCAT44(fVar41,iVar12);
    local_100 = local_res10;
    __real_40000000 = fVar40;
    cVar7 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_100);
    fVar40 = __real_40000000;
  } while (cVar7 != '\0');
  return false;
}

// LoopTime @ 1462b5870

FFrameTime __thiscall
FMovieSceneTimeWarpLoopFloat::LoopTime(FMovieSceneTimeWarpLoopFloat *this,FFrameTime param_1)

{
  int in_R8D;
  float in_register_00000084;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  float fVar4;
  double dVar5;
  
  fVar4 = this->Duration;
  dVar5 = (double)in_R8D + (double)in_register_00000084;
  dVar5 = dVar5 - (double)((float)(int)((longlong)
                                        ROUND((dVar5 + dVar5) / (double)fVar4 -
                                              __real_3fe0000000000000) >> 1) * fVar4);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar5;
  auVar3 = roundpd(ZEXT416((uint)fVar4),auVar3,1);
  uVar1 = auVar3._0_4_;
  uVar2 = auVar3._4_4_;
  if (__real_41dfffffffc00000 <= auVar3._0_8_) {
    uVar1 = SUB84(__real_41dfffffffc00000,0);
    uVar2 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
  }
  fVar4 = (float)(dVar5 - auVar3._0_8_);
  if ((double)CONCAT44(uVar2,uVar1) <= __real_c1e0000000000000) {
    uVar1 = SUB84(__real_c1e0000000000000,0);
    uVar2 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
  }
  if (::FFrameTime::MaxSubframe <= fVar4) {
    fVar4 = ::FFrameTime::MaxSubframe;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(int *)param_1 = (int)(double)CONCAT44(uVar2,uVar1);
  if (::FFrameTime::MaxSubframe <= fVar4) {
    fVar4 = ::FFrameTime::MaxSubframe;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(float *)((longlong)param_1 + 4) = fVar4;
  return param_1;
}

// LoopTime @ 1462b5920

FFrameTime __thiscall
FMovieSceneTimeWarpLoopFloat::LoopTime
          (FMovieSceneTimeWarpLoopFloat *this,FFrameTime param_1,int *param_2)

{
  int iVar1;
  int *in_R9;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 in_XMM2 [16];
  undefined1 auVar4 [16];
  float fVar5;
  double dVar6;
  float fStackX_1c;
  
  fStackX_1c = (float)((ulonglong)param_2 >> 0x20);
  dVar6 = (double)(int)param_2 + (double)fStackX_1c;
  iVar1 = (int)((longlong)ROUND((dVar6 + dVar6) / (double)this->Duration - __real_3fe0000000000000)
               >> 1);
  *in_R9 = iVar1;
  dVar6 = dVar6 - (double)((float)iVar1 * this->Duration);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar6;
  auVar4 = roundpd(in_XMM2,auVar4,1);
  uVar2 = auVar4._0_4_;
  uVar3 = auVar4._4_4_;
  if (__real_41dfffffffc00000 <= auVar4._0_8_) {
    uVar2 = SUB84(__real_41dfffffffc00000,0);
    uVar3 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
  }
  fVar5 = (float)(dVar6 - auVar4._0_8_);
  if ((double)CONCAT44(uVar3,uVar2) <= __real_c1e0000000000000) {
    uVar2 = SUB84(__real_c1e0000000000000,0);
    uVar3 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
  }
  if (::FFrameTime::MaxSubframe <= fVar5) {
    fVar5 = ::FFrameTime::MaxSubframe;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(int *)param_1 = (int)(double)CONCAT44(uVar3,uVar2);
  if (::FFrameTime::MaxSubframe <= fVar5) {
    fVar5 = ::FFrameTime::MaxSubframe;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)((longlong)param_1 + 4) = fVar5;
  return param_1;
}

