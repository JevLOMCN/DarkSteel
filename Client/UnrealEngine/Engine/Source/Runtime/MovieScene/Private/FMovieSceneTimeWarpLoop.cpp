// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 7

// StaticStruct @ 146244a90

UScriptStruct * __cdecl FMovieSceneTimeWarpLoop::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpLoop.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpLoop.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoop,(UObject *)pUVar1,
                         L"MovieSceneTimeWarpLoop");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpLoop.OuterSingleton;
}

// ComputeTraversedHull @ 1462a7760

TRange<FFrameTime> * __thiscall
FMovieSceneTimeWarpLoop::ComputeTraversedHull
          (FMovieSceneTimeWarpLoop *this,TRange<FFrameTime> *__return_storage_ptr__,
          TRange<FFrameTime> *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  TRange<FFrameTime> *pTVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  uint local_c8;
  int iStack_c4;
  float local_c0;
  undefined4 local_b0;
  int iStack_ac;
  uint local_a0;
  uint local_90;
  char local_50;
  char local_44;
  
  uVar8 = local_90;
  local_a0 = CONCAT31(local_a0._1_3_,1);
  iVar4 = (this->Duration).Value;
  local_90 = local_90 & 0xffffff00;
  bVar9 = TRange<FFrameTime>::IsEmpty(param_1);
  if (bVar9) {
    (__return_storage_ptr__->LowerBound).Type.Value = '\x01';
    (__return_storage_ptr__->LowerBound).Value.FrameNumber = 0;
    (__return_storage_ptr__->LowerBound).Value.SubFrame = 0.0;
    (__return_storage_ptr__->UpperBound).Type.Value = '\0';
    (__return_storage_ptr__->UpperBound).Value.FrameNumber = 0;
    (__return_storage_ptr__->UpperBound).Value.SubFrame = 0.0;
    return __return_storage_ptr__;
  }
  uVar1 = (param_1->LowerBound).Type;
  if ((uVar1 != '\x02') && (uVar2 = (param_1->UpperBound).Type, uVar2 != '\x02')) {
    uVar3._0_1_ = (param_1->LowerBound).Type;
    uVar3._1_3_ = *(undefined3 *)&(param_1->LowerBound).field_0x1;
    uVar3._4_4_ = (param_1->LowerBound).Value.FrameNumber;
    fVar5 = (param_1->LowerBound).Value.SubFrame;
    local_b0 = (undefined4)uVar3;
    uVar14._0_1_ = (param_1->UpperBound).Type;
    uVar14._1_3_ = *(undefined3 *)&(param_1->UpperBound).field_0x1;
    uVar14._4_4_ = (param_1->UpperBound).Value.FrameNumber;
    local_c0 = (param_1->UpperBound).Value.SubFrame;
    local_c8 = (uint)uVar14;
    if (((undefined1)uVar3 == '\x02') &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TRange<FFrameTime> *)(*pcVar7)();
      return pTVar11;
    }
    iVar10 = (int)uVar3._4_4_ / (this->Duration).Value -
             ((uint)(CONCAT44(fVar5,uVar3._4_4_) >> 0x1f) & 1);
    iVar12 = uVar3._4_4_ - iVar10 * (this->Duration).Value;
    if (((undefined1)uVar3 == '\x02') &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,0x73,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TRange<FFrameTime> *)(*pcVar7)();
      return pTVar11;
    }
    if (((local_c8 & 0xff) == 2) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TRange<FFrameTime> *)(*pcVar7)();
      return pTVar11;
    }
    iVar6 = (this->Duration).Value;
    iVar13 = (int)uVar14._4_4_ / iVar6 - ((uint)(CONCAT44(local_c0,uVar14._4_4_) >> 0x1f) & 1);
    iStack_c4 = uVar14._4_4_ - iVar13 * iVar6;
    if (((local_c8 & 0xff) == 2) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,0x73,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TRange<FFrameTime> *)(*pcVar7)();
      return pTVar11;
    }
    if (((local_c8 & 0xff) == 2) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TRange<FFrameTime> *)(*pcVar7)();
      return pTVar11;
    }
    if (((iStack_c4 == 0) && (local_c0 == 0.0)) && ((uVar14 & 0xff) == 0)) {
      iVar13 = iVar13 + -1;
      local_c8 = local_90;
      local_c0 = 0.0;
      iStack_c4 = iVar4;
    }
    if (iVar10 == iVar13) {
      (__return_storage_ptr__->LowerBound).Type =
           (TEnumAsByte<ERangeBoundTypes::Type>)(char)local_b0;
      *(int3 *)&(__return_storage_ptr__->LowerBound).field_0x1 = (int3)((uint)local_b0 >> 8);
      (__return_storage_ptr__->LowerBound).Value.FrameNumber = (FFrameNumber)iVar12;
      uVar14 = CONCAT44(iStack_c4,local_c8);
      (__return_storage_ptr__->LowerBound).Value.SubFrame = fVar5;
      goto LAB_1462a7aac;
    }
    if ((iVar13 - iVar10) + -1 < 1) {
      if (((undefined1)uVar3 == '\x02') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar11 = (TRange<FFrameTime> *)(*pcVar7)();
        return pTVar11;
      }
      if (((char)local_c8 == '\x02') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar11 = (TRange<FFrameTime> *)(*pcVar7)();
        return pTVar11;
      }
      if ((iStack_c4 <= iVar12) && ((iStack_c4 != iVar12 || (local_c0 <= fVar5)))) {
        uVar14 = (ulonglong)local_a0;
        (__return_storage_ptr__->LowerBound).Type =
             (TEnumAsByte<ERangeBoundTypes::Type>)(char)uVar14;
        *(int3 *)&(__return_storage_ptr__->LowerBound).field_0x1 = (int3)(uVar14 >> 8);
        (__return_storage_ptr__->LowerBound).Value.FrameNumber = (FFrameNumber)(int)(uVar14 >> 0x20)
        ;
        uVar14 = CONCAT44(iStack_c4,local_c8);
        (__return_storage_ptr__->LowerBound).Value.SubFrame = 0.0;
        goto LAB_1462a7aac;
      }
    }
  }
  uVar14 = (ulonglong)local_a0;
  (__return_storage_ptr__->LowerBound).Type = (TEnumAsByte<ERangeBoundTypes::Type>)(char)uVar14;
  *(int3 *)&(__return_storage_ptr__->LowerBound).field_0x1 = (int3)(uVar14 >> 8);
  (__return_storage_ptr__->LowerBound).Value.FrameNumber = (FFrameNumber)(int)(uVar14 >> 0x20);
  uVar14 = CONCAT44(iVar4,uVar8) & 0xffffffffffffff00;
  (__return_storage_ptr__->LowerBound).Value.SubFrame = 0.0;
  local_c0 = 0.0;
LAB_1462a7aac:
  (__return_storage_ptr__->UpperBound).Type = (TEnumAsByte<ERangeBoundTypes::Type>)(char)uVar14;
  *(int3 *)&(__return_storage_ptr__->UpperBound).field_0x1 = (int3)(uVar14 >> 8);
  (__return_storage_ptr__->UpperBound).Value.FrameNumber = (FFrameNumber)(int)(uVar14 >> 0x20);
  (__return_storage_ptr__->UpperBound).Value.SubFrame = local_c0;
  return __return_storage_ptr__;
}

// ExtractBoundariesWithinRange @ 1462ac7e0

bool __thiscall
FMovieSceneTimeWarpLoop::ExtractBoundariesWithinRange
          (FMovieSceneTimeWarpLoop *this,TRange<FFrameTime> *param_1,
          TFunctionRef<bool___cdecl(FFrameTime)> *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulonglong local_res10 [2];
  undefined4 local_res24;
  char local_68;
  char local_5c;
  
  uVar1 = (param_1->LowerBound).Type;
  if (uVar1 == '\x02') {
    iVar11 = -0x80000000;
  }
  else {
    if (((param_1->LowerBound).Type.Value == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    iVar11 = (param_1->LowerBound).Value.FrameNumber.Value;
  }
  uVar2 = (param_1->UpperBound).Type;
  if (uVar2 == '\x02') {
    iVar12 = 0x7fffffff;
  }
  else {
    if (((param_1->UpperBound).Type.Value == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    iVar12 = (param_1->UpperBound).Value.FrameNumber.Value;
  }
  dVar6 = __real_c1e0000000000000;
  dVar5 = __real_41dfffffffc00000;
  local_res24 = 0;
  iVar3 = (this->Duration).Value;
  iVar10 = iVar11 / (this->Duration).Value + (iVar11 >> 0x1f);
  do {
    if (iVar12 / iVar3 + (iVar12 >> 0x1f) < iVar10) {
      return true;
    }
    auVar14._0_8_ = (double)(this->Duration).Value;
    auVar14._8_8_ = 0;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (double)iVar10 * auVar14._0_8_;
    auVar15 = roundpd(auVar14,auVar15,1);
    dVar13 = auVar15._0_8_;
    if (dVar5 <= auVar15._0_8_) {
      dVar13 = dVar5;
    }
    if (dVar13 <= dVar6) {
      dVar13 = dVar6;
    }
    if (iVar11 <= (int)dVar13) {
      local_res10[0] = (ulonglong)(uint)(int)dVar13;
      cVar9 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res10);
      if (cVar9 == '\0') {
        return false;
      }
    }
    iVar10 = iVar10 + 1;
  } while( true );
}

// InverseRemapTimeCycled @ 1462b3700

TOptional<FFrameTime> * __thiscall
FMovieSceneTimeWarpLoop::InverseRemapTimeCycled
          (FMovieSceneTimeWarpLoop *this,TOptional<FFrameTime> *__return_storage_ptr__,
          FFrameTime param_1,FFrameTime param_2,FInverseTransformTimeParams *param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  FFrameNumber FVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  FFrameTime local_res18;
  
  fVar2 = ::FFrameTime::MaxSubframe;
  FVar6 = param_1.FrameNumber.Value;
  if (((FVar6.Value < 0) || ((this->Duration).Value <= FVar6.Value)) &&
     ((param_3->Flags & Cycle) == 0)) {
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  }
  iVar1 = (this->Duration).Value;
  iVar9 = (int)((longlong)
                ((ulonglong)(uint)(param_2.FrameNumber.Value.Value >> 0x1f) << 0x20 |
                (ulonglong)param_2 & 0xffffffff) / (longlong)iVar1) -
          ((uint)((ulonglong)param_2 >> 0x1f) & 1);
  iVar8 = param_2.FrameNumber.Value.Value - iVar9 * iVar1;
  local_res18.SubFrame = param_1.SubFrame;
  local_res18.SubFrame = local_res18.SubFrame - param_2.SubFrame;
  auVar12 = roundps(in_XMM2,ZEXT416((uint)local_res18.SubFrame),1);
  local_res18.SubFrame = local_res18.SubFrame - auVar12._0_4_;
  if (::FFrameTime::MaxSubframe <= local_res18.SubFrame) {
    local_res18.SubFrame = ::FFrameTime::MaxSubframe;
  }
  iVar7 = (FVar6.Value - iVar8) + (int)auVar12._0_4_;
  if (local_res18.SubFrame <= 0.0) {
    local_res18.SubFrame = 0.0;
  }
  iVar3 = iVar7 / iVar1 + (iVar7 >> 0x1f);
  iVar5 = (iVar3 + iVar9) * iVar1;
  fVar14 = param_2.SubFrame + 0.0;
  iVar9 = (int)fVar14;
  fVar10 = fVar14;
  if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar14)) {
    auVar12._4_4_ = fVar14;
    auVar12._0_4_ = fVar14;
    auVar12._8_8_ = 0;
    uVar4 = movmskps(iVar5,auVar12);
    fVar10 = (float)(int)(iVar9 - (uVar4 & 1));
  }
  fVar13 = fVar14 - fVar10;
  if (::FFrameTime::MaxSubframe <= fVar14 - fVar10) {
    fVar13 = ::FFrameTime::MaxSubframe;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  iVar8 = ((int)ROUND((fVar14 + fVar14) - __real_3f000000) >> 1) + iVar8;
  fVar13 = fVar13 + local_res18.SubFrame;
  fVar14 = (fVar13 + fVar13) - __real_3f000000;
  iVar9 = (int)fVar13;
  fVar10 = fVar13;
  if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar13)) {
    auVar11._4_4_ = fVar13;
    auVar11._0_4_ = fVar13;
    auVar11._8_8_ = 0;
    uVar4 = movmskps(iVar8,auVar11);
    fVar10 = (float)(int)(iVar9 - (uVar4 & 1));
  }
  __return_storage_ptr__->bIsSet = true;
  local_res18.SubFrame = fVar13 - fVar10;
  if (fVar2 <= fVar13 - fVar10) {
    local_res18.SubFrame = fVar2;
  }
  if (local_res18.SubFrame <= 0.0) {
    local_res18.SubFrame = 0.0;
  }
  local_res18.FrameNumber.Value =
       ((int)ROUND(fVar14) >> 1) + iVar8 + iVar5 + (iVar7 - iVar3 * iVar1);
  __return_storage_ptr__->TypedValue = local_res18;
  return __return_storage_ptr__;
}

// InverseRemapTimeWithinRange @ 1462b3db0

bool __thiscall
FMovieSceneTimeWarpLoop::InverseRemapTimeWithinRange
          (FMovieSceneTimeWarpLoop *this,FFrameTime param_1,FFrameTime param_2,FFrameTime param_3,
          TFunctionRef<bool___cdecl(FFrameTime)> *param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  
  fVar18 = __real_3f000000;
  iVar6 = (this->Duration).Value;
  iVar8 = (int)((longlong)
                ((ulonglong)(uint)(param_1.FrameNumber.Value.Value >> 0x1f) << 0x20 |
                (ulonglong)param_1 & 0xffffffff) / (longlong)iVar6) -
          ((uint)((ulonglong)param_1 >> 0x1f) & 1);
  iVar10 = param_1.FrameNumber.Value.Value - iVar6 * iVar8;
  local_res8._4_4_ = param_1.SubFrame;
  fVar1 = local_res8._4_4_;
  local_res8 = CONCAT44(local_res8._4_4_,iVar10);
  local_res18 = local_res8;
  iVar5 = (int)((longlong)
                ((ulonglong)(uint)(param_3.FrameNumber.Value.Value >> 0x1f) << 0x20 |
                (ulonglong)param_3 & 0xffffffff) / (longlong)iVar6);
  iVar13 = (int)((longlong)
                 ((ulonglong)(uint)(param_2.FrameNumber.Value.Value >> 0x1f) << 0x20 |
                 (ulonglong)param_2 & 0xffffffff) / (longlong)iVar6) -
           ((uint)((ulonglong)param_2 >> 0x1f) & 1);
  iVar15 = iVar5 - ((uint)((ulonglong)param_3 >> 0x1f) & 1);
  iVar11 = param_2.FrameNumber.Value.Value - iVar6 * iVar13;
  local_res8._4_4_ = param_2.SubFrame;
  fVar16 = local_res8._4_4_;
  iVar12 = param_3.FrameNumber.Value.Value - iVar6 * iVar15;
  local_res8._4_4_ = param_3.SubFrame;
  if ((iVar15 < iVar13) ||
     ((iVar14 = iVar13, iVar7 = iVar11, fVar17 = fVar16, fVar9 = local_res8._4_4_, iVar13 == iVar15
      && ((iVar12 < iVar11 || ((iVar12 == iVar11 && (local_res8._4_4_ < fVar16)))))))) {
    iVar14 = iVar15;
    iVar15 = iVar13;
    iVar5 = iVar13;
    iVar7 = iVar12;
    fVar17 = local_res8._4_4_;
    iVar12 = iVar11;
    fVar9 = fVar16;
  }
  iVar11 = ((int)ROUND((fVar1 + fVar1) - __real_3f000000) >> 1) + iVar6 * iVar8 + iVar10;
  iVar13 = (int)fVar1;
  fVar16 = fVar1;
  if ((iVar13 != -0x80000000) && ((float)iVar13 != fVar1)) {
    auVar19._4_4_ = fVar1;
    auVar19._0_4_ = fVar1;
    auVar19._8_8_ = 0;
    uVar4 = movmskps(iVar5,auVar19);
    fVar16 = (float)(int)(iVar13 - (uVar4 & 1));
  }
  fVar22 = fVar1 - fVar16;
  if (::FFrameTime::MaxSubframe <= fVar1 - fVar16) {
    fVar22 = ::FFrameTime::MaxSubframe;
  }
  if (fVar22 <= 0.0) {
    fVar22 = 0.0;
  }
  local_res8 = CONCAT44(fVar22,iVar11);
  if (((iVar8 != iVar14) || (iVar7 < iVar10)) ||
     ((fVar16 = __real_40000000, fVar2 = __real_40000000, iVar10 == iVar7 && (fVar17 <= fVar1)))) {
    local_res10 = local_res8;
    cVar3 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_res10);
    fVar16 = __real_40000000;
    fVar2 = __real_40000000;
    if (cVar3 == '\0') {
      return false;
    }
  }
  do {
    __real_40000000 = fVar2;
    fVar2 = __real_40000000;
    iVar8 = iVar8 + 1;
    if (iVar15 <= iVar8) {
      if ((iVar15 != iVar14) && ((iVar10 < iVar12 || ((iVar10 == iVar12 && (fVar1 < fVar9)))))) {
        iVar6 = ((int)ROUND(fVar22 * __real_40000000 - fVar18) >> 1) + iVar6;
        iVar8 = (int)fVar22;
        fVar18 = fVar22;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar22)) {
          auVar21._4_4_ = fVar22;
          auVar21._0_4_ = fVar22;
          auVar21._8_8_ = 0;
          uVar4 = movmskps(iVar6,auVar21);
          fVar18 = (float)(int)(iVar8 - (uVar4 & 1));
        }
        local_res8 = CONCAT44(fVar22 - fVar18,iVar11 + iVar6);
        __real_40000000 = fVar16;
        local_res10._0_4_ = iVar12;
        local_res10._4_4_ = fVar9;
        cVar3 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_res8);
        return cVar3 != '\0';
      }
      __real_40000000 = fVar16;
      return true;
    }
    iVar5 = ((int)ROUND(fVar22 * __real_40000000 - fVar18) >> 1) + iVar6;
    iVar11 = iVar11 + iVar5;
    iVar13 = (int)fVar22;
    fVar17 = fVar22;
    if ((iVar13 != -0x80000000) && ((float)iVar13 != fVar22)) {
      auVar20._4_4_ = fVar22;
      auVar20._0_4_ = fVar22;
      auVar20._8_8_ = 0;
      uVar4 = movmskps(iVar5,auVar20);
      fVar17 = (float)(int)(iVar13 - (uVar4 & 1));
    }
    fVar22 = fVar22 - fVar17;
    local_res8 = CONCAT44(fVar22,iVar11);
    local_res10 = local_res8;
    __real_40000000 = fVar16;
    cVar3 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_res10);
    fVar16 = __real_40000000;
  } while (cVar3 != '\0');
  return false;
}

// LoopTime @ 1462b57f0

FFrameTime __thiscall
FMovieSceneTimeWarpLoop::LoopTime(FMovieSceneTimeWarpLoop *this,FFrameTime param_1)

{
  int iVar1;
  ulonglong in_R8;
  undefined8 local_res8;
  
  iVar1 = (this->Duration).Value;
  local_res8 = CONCAT44((int)(in_R8 >> 0x20),
                        (int)in_R8 -
                        ((int)((longlong)
                               ((ulonglong)(uint)((int)in_R8 >> 0x1f) << 0x20 | in_R8 & 0xffffffff)
                              / (longlong)iVar1) - ((uint)(in_R8 >> 0x1f) & 1)) * iVar1);
  *(undefined8 *)param_1 = local_res8;
  return param_1;
}

// LoopTime @ 1462b5830

FFrameTime __thiscall
FMovieSceneTimeWarpLoop::LoopTime(FMovieSceneTimeWarpLoop *this,FFrameTime param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *in_R9;
  undefined8 local_res18;
  
  iVar1 = (this->Duration).Value;
  local_res18._0_4_ = (int)param_2;
  iVar2 = (int)local_res18 / iVar1 + ((int)local_res18 >> 0x1f);
  *in_R9 = iVar2;
  local_res18 = CONCAT44((int)((ulonglong)param_2 >> 0x20),(int)local_res18 - iVar2 * iVar1);
  *(undefined8 *)param_1 = local_res18;
  return param_1;
}

