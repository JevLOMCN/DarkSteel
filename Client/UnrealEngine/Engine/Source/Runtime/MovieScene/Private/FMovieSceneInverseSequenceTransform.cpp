// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 13

// StaticStruct @ 1461619c0

UScriptStruct * __cdecl FMovieSceneInverseSequenceTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneInverseSequenceTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneInverseSequenceTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform,
                         (UObject *)pUVar1,L"MovieSceneInverseSequenceTransform");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneInverseSequenceTransform.OuterSingleton;
}

// operator() @ 146188aa0

bool __thiscall
`FMovieSceneInverseSequenceTransform::TransformFiniteRangeWithinRange'::__l2::<lambda_1>::operator()
          (void *this,FFrameTime param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FFrameTime local_res10 [3];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if (((FFrameTime *)pFVar2->Data <= local_res10) &&
     (local_res10 < (FFrameTime *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(FFrameTime *)(pFVar2->Data + (longlong)iVar6 * 8) = local_res10[0];
  return true;
}

// operator() @ 146188be0

bool __thiscall
`FMovieSceneInverseSequenceTransform::TransformFiniteRangeWithinRange'::__l2::<lambda_2>::operator()
          (void *this,FFrameTime param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FFrameTime local_res10 [3];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if (((FFrameTime *)pFVar2->Data <= local_res10) &&
     (local_res10 < (FFrameTime *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(FFrameTime *)(pFVar2->Data + (longlong)iVar6 * 8) = local_res10[0];
  return true;
}

// operator() @ 146188ef0

bool __thiscall
`FMovieSceneInverseSequenceTransform::RecursiveTransformTimeWithinRange'::__l11::<lambda_2>::
operator()(void *this,FFrameTime param_1)

{
  int iVar1;
  FMovieSceneInverseSequenceTransform *this_00;
  FFrameTime *pFVar2;
  FFrameTime *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_3c;
  TArrayView<FFrameTime_const_,int> local_38;
  TArrayView<FFrameTime_const_,int> local_28;
  
  this_00 = *(FMovieSceneInverseSequenceTransform **)this;
  iVar1 = *(int *)((longlong)this + 0x38);
  pFVar2 = *(FFrameTime **)((longlong)this + 0x30);
  if (iVar1 + -1 < iVar1) {
    iVar1 = iVar1 + -1;
  }
  iVar7 = 0;
  if (0 < iVar1) {
    iVar7 = iVar1;
  }
  if (iVar7 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar1 = *(int *)((longlong)this + 0x28);
  if (iVar1 + -1 < iVar1) {
    iVar1 = iVar1 + -1;
  }
  pFVar3 = *(FFrameTime **)((longlong)this + 0x20);
  iVar8 = 0;
  if (0 < iVar1) {
    iVar8 = iVar1;
  }
  if (iVar8 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  local_38._12_4_ = local_28._12_4_;
  local_38.ArrayNum = iVar7;
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iVar8;
  local_38.DataPtr = pFVar2;
  local_28.DataPtr = pFVar3;
  bVar5 = FMovieSceneInverseSequenceTransform::RecursiveTransformTimeWithinRange
                    (this_00,*(int *)((longlong)this + 0x18) + 1,param_1,
                     (TFunctionRef<bool___cdecl(FFrameTime)> *)((longlong)this + 8),&local_28,
                     &local_38);
  return bVar5;
}

// AsLegacyLinearTimeTransform @ 146194200

FMovieSceneTimeTransform * __thiscall
FMovieSceneInverseSequenceTransform::AsLegacyLinearTimeTransform
          (FMovieSceneInverseSequenceTransform *this,
          FMovieSceneTimeTransform *__return_storage_ptr__)

{
  FMovieSceneNumericVariant *pFVar1;
  int iVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  uchar uVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  FMovieSceneTimeTransform *pFVar15;
  undefined8 uVar16;
  FMovieSceneNumericVariant *this_00;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar23 [16];
  double dVar24;
  float fVar25;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  int local_res18;
  undefined4 uStackX_1c;
  FFrameNumber local_res20;
  float fStackX_24;
  float fStack_f4;
  float fStack_ec;
  FMovieSceneTimeTransform local_e8 [14];
  
  dVar10 = __real_c1e0000000000000;
  dVar9 = __real_41dfffffffc00000;
  fVar8 = __real_3f000000;
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar6 = __real_3f800000;
  fVar5 = __real_322bcc77;
  this_00 = (FMovieSceneNumericVariant *)(this->NestedTransforms).AllocatorInstance.Data;
  iVar2 = (this->NestedTransforms).ArrayNum;
  pFVar1 = (FMovieSceneNumericVariant *)((longlong)this_00 + (longlong)iVar2 * 0x18);
  local_e8[0].TimeScale = __real_3f800000;
  local_e8[0].Offset.FrameNumber.Value = 0;
  local_e8[0].Offset.SubFrame = 0.0;
  fVar25 = __real_3f800000;
  do {
    if ((this->NestedTransforms).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMovieSceneInverseNestedSequenceTransform_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar1) {
      ::operator*(__return_storage_ptr__,&this->LinearTransform,local_e8);
      return __return_storage_ptr__;
    }
    if (((*(ulonglong *)this_00->Data & 0xfff8000000000000) != 0xfff8000000000000) ||
       (uVar11 = FMovieSceneNumericVariant::GetTypeBits(this_00), uVar11 == 0xff)) {
      fVar17 = FMovieSceneTimeWarpVariant::AsFixedPlayRateFloat
                         ((FMovieSceneTimeWarpVariant *)this_00);
      if (((float)((uint)fVar17 & uVar7) <= fVar5) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!FMath::IsNearlyZero(PlayRate)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneSequenceTransform.cpp"
                              ,0x1c8,
                              L"Play rate cannot be zero! This should be expressed as a nullptr TimeScale with FLAG_Zero."
                             ), bVar12)) {
        pcVar3 = (code *)swi(3);
        pFVar15 = (FMovieSceneTimeTransform *)(*pcVar3)();
        return pFVar15;
      }
      fVar17 = FMovieSceneTimeWarpVariant::AsFixedPlayRateFloat
                         ((FMovieSceneTimeWarpVariant *)this_00);
      uVar16 = *(undefined8 *)this_00[1].Data;
      if (((float)((uint)fVar17 & uVar7) <= fVar5) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!FMath::IsNearlyZero(TimeScale)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneTimeTransform.h"
                              ,0x2c,
                              L"It is invalid to create a linear transformation with a zero timescale. This case should be handled externally by FMovieSceneTimeWarpVariant and FLAG_Zero."
                             ), bVar12)) {
        pcVar3 = (code *)swi(3);
        pFVar15 = (FMovieSceneTimeTransform *)(*pcVar3)();
        return pFVar15;
      }
      if (fVar25 != fVar6) {
        iVar13 = _finite((double)fVar25);
        if (iVar13 != 0) {
          fStack_f4 = (float)((ulonglong)uVar16 >> 0x20);
          dVar24 = ((double)(int)uVar16 + (double)fStack_f4) * (double)fVar25;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = dVar24;
          auVar23 = roundpd(in_XMM2,auVar23,1);
          dVar19 = auVar23._0_8_;
          dVar20 = dVar19;
          if (dVar9 <= dVar19) {
            dVar20 = dVar9;
          }
          if (dVar20 <= dVar10) {
            dVar20 = dVar10;
          }
          local_res18 = (int)dVar20;
          fVar18 = (float)(dVar24 - dVar19);
          if (::FFrameTime::MaxSubframe <= fVar18) {
            fVar18 = ::FFrameTime::MaxSubframe;
          }
          auVar21 = ZEXT416((uint)fVar18);
          if (fVar18 <= 0.0) {
            auVar21 = ZEXT816(0) << 0x20;
          }
          if (::FFrameTime::MaxSubframe <= auVar21._0_4_) {
            auVar21._0_4_ = ::FFrameTime::MaxSubframe;
          }
          if (auVar21._0_4_ <= 0.0) {
            auVar4._12_4_ = 0;
            auVar4._0_12_ = auVar21._4_12_;
            auVar21 = auVar4 << 0x20;
          }
          uStackX_1c = auVar21._0_4_;
          uVar16 = CONCAT44(uStackX_1c,local_res18);
        }
      }
      local_res10._4_4_ = (float)((ulonglong)uVar16 >> 0x20);
      fStack_ec = local_e8[0].Offset.SubFrame;
      local_res10._4_4_ = local_res10._4_4_ + fStack_ec;
      fVar25 = fVar17 * fVar25;
      local_res20.Value =
           ((int)ROUND((local_res10._4_4_ + local_res10._4_4_) - fVar8) >> 1) + (int)uVar16 +
           local_e8[0].Offset.FrameNumber.Value;
      iVar13 = (int)local_res10._4_4_;
      fVar17 = local_res10._4_4_;
      if ((iVar13 != -0x80000000) && ((float)iVar13 != local_res10._4_4_)) {
        auVar22._4_4_ = local_res10._4_4_;
        auVar22._0_4_ = local_res10._4_4_;
        auVar22._8_8_ = 0;
        uVar14 = movmskps(local_res20.Value,auVar22);
        fVar17 = (float)(int)(iVar13 - (uVar14 & 1));
      }
      fVar18 = local_res10._4_4_ - fVar17;
      if (::FFrameTime::MaxSubframe <= local_res10._4_4_ - fVar17) {
        fVar18 = ::FFrameTime::MaxSubframe;
      }
      in_XMM2 = ZEXT416((uint)fVar18);
      if (fVar18 <= 0.0) {
        in_XMM2 = ZEXT816(0) << 0x20;
      }
      fStackX_24 = in_XMM2._0_4_;
      local_res10 = uVar16;
      if (((float)((uint)fVar25 & uVar7) <= fVar5) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!FMath::IsNearlyZero(TimeScale)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneTimeTransform.h"
                              ,0x2c,
                              L"It is invalid to create a linear transformation with a zero timescale. This case should be handled externally by FMovieSceneTimeWarpVariant and FLAG_Zero."
                             ), bVar12)) {
        pcVar3 = (code *)swi(3);
        pFVar15 = (FMovieSceneTimeTransform *)(*pcVar3)();
        return pFVar15;
      }
      local_e8[0].Offset.SubFrame = fStackX_24;
      local_e8[0].Offset.FrameNumber.Value = local_res20.Value;
      local_e8[0].TimeScale = fVar25;
    }
    this_00 = (FMovieSceneNumericVariant *)&this_00[1].WeakCustomGetter;
  } while( true );
}

// RecursiveTransformTimeWithinRange @ 1461c4a90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FMovieSceneInverseSequenceTransform::RecursiveTransformTimeWithinRange
          (FMovieSceneInverseSequenceTransform *this,int param_1,FFrameTime param_2,
          TFunctionRef<bool___cdecl(FFrameTime)> *param_3,TArrayView<FFrameTime_const_,int> *param_4
          ,TArrayView<FFrameTime_const_,int> *param_5)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  uchar uVar10;
  uint uVar11;
  FFrameTime *pFVar12;
  FFrameTime FVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  FMovieSceneInverseNestedSequenceTransform *this_00;
  longlong lVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  undefined1 in_XMM3 [16];
  float fStackX_c;
  undefined1 local_res10 [8];
  FFrameTime local_138;
  float fStack_12c;
  undefined8 local_120;
  code *local_118;
  FMovieSceneInverseSequenceTransform **local_110;
  undefined1 local_108 [16];
  FMovieSceneInverseSequenceTransform *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  uint local_e0;
  FFrameTime *local_d8;
  undefined8 uStack_d0;
  FFrameTime *local_c8;
  undefined8 uStack_c0;
  
  dVar7 = __real_c1e0000000000000;
  dVar6 = __real_41dfffffffc00000;
  fVar5 = __real_3f000000;
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar3 = __real_3f800000;
  fVar2 = __real_322bcc77;
  uVar17 = (ulonglong)param_1;
  if (param_1 < (this->NestedTransforms).ArrayNum) {
    lVar18 = uVar17 * 0x18;
    do {
      uVar16 = (uint)uVar17;
      uVar11 = 0;
      if ((int)uVar16 < (this->NestedTransforms).ArrayNum) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar1 = (code *)swi(3);
        uVar9 = (*pcVar1)();
        return (bool)uVar9;
      }
      this_00 = (FMovieSceneInverseNestedSequenceTransform *)
                ((this->NestedTransforms).AllocatorInstance.Data + lVar18);
      if (((*(ulonglong *)(this_00->TimeScale).Variant.Data & 0xfff8000000000000) ==
           0xfff8000000000000) &&
         (uVar10 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this_00),
         uVar10 != 0xff)) {
        if ((0 < param_4->ArrayNum) && (0 < param_5->ArrayNum)) {
LAB_1461c4bfb:
          local_d8 = param_4->DataPtr;
          uStack_d0 = *(undefined8 *)&param_4->ArrayNum;
          local_c8 = param_5->DataPtr;
          uStack_c0 = *(undefined8 *)&param_5->ArrayNum;
          local_f0 = *(undefined8 *)param_3;
          local_e8 = *(undefined8 *)&param_3->field_0x8;
          local_f8 = this;
          local_e0 = uVar16;
          pFVar12 = TArrayView<FFrameTime_const_,int>::Last(param_5,0);
          FVar13 = *pFVar12;
          pFVar12 = TArrayView<FFrameTime_const_,int>::Last(param_4,0);
          local_110 = &local_f8;
          local_118 = UE::Core::Private::Function::
                      TFunctionRefCaller<`FMovieSceneInverseSequenceTransform::RecursiveTransformTimeWithinRange'::__l11::<lambda_2>,bool,FFrameTime>
                      ::Call;
          bVar8 = FMovieSceneInverseNestedSequenceTransform::TransformTimeWithinRange
                            (this_00,param_2,(TFunctionRef<bool___cdecl(FFrameTime)> *)&local_118,
                             *pFVar12,FVar13);
          return bVar8;
        }
        local_res10[0] = 0;
        bVar8 = `FMovieSceneInverseSequenceTransform::RecursiveTransformTimeWithinRange'::__l9::
                <lambda_1>::operator()(local_res10);
        local_138 = param_2;
        if (bVar8) goto LAB_1461c4bfb;
      }
      else {
        fVar19 = FMovieSceneTimeWarpVariant::AsFixedPlayRateFloat
                           ((FMovieSceneTimeWarpVariant *)this_00);
        if (((float)((uint)fVar19 & uVar4) <= fVar2) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!FMath::IsNearlyZero(PlayRate)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneSequenceTransform.cpp"
                               ,0x1c8,
                               L"Play rate cannot be zero! This should be expressed as a nullptr TimeScale with FLAG_Zero."
                              ), bVar8)) {
          pcVar1 = (code *)swi(3);
          uVar9 = (*pcVar1)();
          return (bool)uVar9;
        }
        fVar19 = FMovieSceneTimeWarpVariant::AsFixedPlayRateFloat
                           ((FMovieSceneTimeWarpVariant *)this_00);
        local_138 = this_00->Offset;
        if (((float)((uint)fVar19 & uVar4) <= fVar2) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!FMath::IsNearlyZero(TimeScale)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneTimeTransform.h"
                               ,0x2c,
                               L"It is invalid to create a linear transformation with a zero timescale. This case should be handled externally by FMovieSceneTimeWarpVariant and FLAG_Zero."
                              ), bVar8)) {
          pcVar1 = (code *)swi(3);
          uVar9 = (*pcVar1)();
          return (bool)uVar9;
        }
        fStackX_c = local_138.SubFrame;
        fStack_12c = param_2.SubFrame;
        if (fVar19 == fVar3) {
          fStackX_c = fStackX_c + fStack_12c;
          local_138.FrameNumber.Value =
               ((int)ROUND((fStackX_c + fStackX_c) - fVar5) >> 1) +
               local_138.FrameNumber.Value.Value + param_2.FrameNumber.Value.Value;
          iVar14 = (int)fStackX_c;
          fVar19 = fStackX_c;
          if ((iVar14 != -0x80000000) && ((float)iVar14 != fStackX_c)) {
            auVar22._4_4_ = fStackX_c;
            auVar22._0_4_ = fStackX_c;
            auVar22._8_8_ = 0;
            uVar11 = movmskps(local_138.FrameNumber.Value,auVar22);
            fVar19 = (float)(int)(iVar14 - (uVar11 & 1));
          }
          local_138.SubFrame = fStackX_c - fVar19;
          if (::FFrameTime::MaxSubframe <= fStackX_c - fVar19) {
            local_138.SubFrame = ::FFrameTime::MaxSubframe;
          }
          if (local_138.SubFrame <= 0.0) {
            local_138.SubFrame = 0.0;
          }
        }
        else {
          iVar14 = _finite((double)fVar19);
          if (iVar14 != 0) {
            dVar24 = ((double)param_2.FrameNumber.Value.Value + (double)fStack_12c) * (double)fVar19
            ;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = dVar24;
            in_XMM3 = roundpd(in_XMM3,auVar20,1);
            dVar25 = in_XMM3._0_8_;
            if (dVar6 <= dVar25) {
              in_XMM3._0_8_ = dVar6;
            }
            fVar19 = (float)(dVar24 - dVar25);
            if (in_XMM3._0_8_ <= dVar7) {
              in_XMM3._0_8_ = dVar7;
            }
            if (::FFrameTime::MaxSubframe <= fVar19) {
              fVar19 = ::FFrameTime::MaxSubframe;
            }
            if (fVar19 <= 0.0) {
              fVar19 = 0.0;
            }
            if (::FFrameTime::MaxSubframe <= fVar19) {
              fVar19 = ::FFrameTime::MaxSubframe;
            }
            if (fVar19 <= 0.0) {
              fVar19 = 0.0;
            }
            fVar19 = fVar19 + fStackX_c;
            iVar14 = ((int)ROUND((fVar19 + fVar19) - fVar5) >> 1) +
                     local_138.FrameNumber.Value.Value;
            iVar15 = (int)fVar19;
            fVar21 = fVar19;
            if ((iVar15 != -0x80000000) && ((float)iVar15 != fVar19)) {
              auVar23._4_4_ = fVar19;
              auVar23._0_4_ = fVar19;
              auVar23._8_8_ = 0;
              uVar11 = movmskps(iVar14,auVar23);
              fVar21 = (float)(int)(iVar15 - (uVar11 & 1));
            }
            local_138.SubFrame = fVar19 - fVar21;
            if (::FFrameTime::MaxSubframe <= fVar19 - fVar21) {
              local_138.SubFrame = ::FFrameTime::MaxSubframe;
            }
            if (local_138.SubFrame <= 0.0) {
              local_138.SubFrame = 0.0;
            }
            local_138.FrameNumber.Value = (int)in_XMM3._0_8_ + iVar14;
          }
        }
      }
      uVar17 = (ulonglong)(uVar16 + 1);
      lVar18 = lVar18 + 0x18;
      param_2 = local_138;
    } while ((int)(uVar16 + 1) < (this->NestedTransforms).ArrayNum);
  }
  FVar13 = ::operator*((FFrameTime)local_108,(FMovieSceneTimeTransform *)param_2);
  local_120 = *(undefined8 *)FVar13;
  uVar9 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_120);
  return (bool)uVar9;
}

// TransformFiniteRangeWithinRange @ 1461d7e70

bool __thiscall
FMovieSceneInverseSequenceTransform::TransformFiniteRangeWithinRange
          (FMovieSceneInverseSequenceTransform *this,TRange<FFrameTime> *param_1,
          TFunctionRef<bool___cdecl(TRange<FFrameTime>)> *param_2,
          FMovieSceneTransformBreadcrumbs *param_3,FMovieSceneTransformBreadcrumbs *param_4)

{
  TRangeBound<FFrameTime> *pTVar1;
  FFrameTime FVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  float fVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  TRange<FFrameTime> *pTVar10;
  FFrameTime *pFVar11;
  FFrameNumber FVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  FFrameTime **local_res8;
  FFrameTime **local_res10;
  TFunctionRef<bool___cdecl(TRange<FFrameTime>)> *local_res18;
  float fStack_1f4;
  FFrameTime *local_1f0;
  undefined8 local_1e8;
  FFrameTime *local_1e0;
  undefined8 local_1d8;
  FFrameTime local_1d0;
  uint local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  uint local_1bc;
  int iStack_1b8;
  float fStack_1b4;
  TRangeBound<FFrameTime> local_1b0;
  TRangeBound<FFrameTime> TStack_1a4;
  TRangeBound<FFrameTime> local_198;
  TRangeBound<FFrameTime> TStack_18c;
  uint local_180;
  int iStack_17c;
  float local_178;
  undefined8 local_170;
  undefined4 uStack_168;
  uint uStack_164;
  FFrameNumber FStack_160;
  float fStack_15c;
  uint local_158;
  int iStack_154;
  float local_150;
  uint local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  uint local_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined8 local_130;
  float local_128;
  undefined8 local_124;
  float local_11c;
  code *local_118;
  FFrameTime ***local_110;
  code *local_108;
  FFrameTime ***local_100;
  undefined4 local_f8;
  int iStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  FFrameTime local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  TRangeBound<FFrameTime> local_b8;
  TRangeBound<FFrameTime> TStack_ac;
  uint local_98;
  int iStack_94;
  float fStack_90;
  uint uStack_8c;
  undefined8 local_88;
  TRange<FFrameTime> local_78 [2];
  
  local_130._0_1_ = (param_1->LowerBound).Type;
  local_130._1_3_ = *(undefined3 *)&(param_1->LowerBound).field_0x1;
  local_130._4_4_ = (param_1->LowerBound).Value.FrameNumber;
  pTVar1 = &param_1->UpperBound;
  local_128 = (param_1->LowerBound).Value.SubFrame;
  local_res18 = param_2;
  if ((undefined1)local_130 == '\x02') {
LAB_1461d7ec8:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InRange.GetLowerBound().IsOpen() && !InRange.GetUpperBound().IsOpen()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneSequenceTransform.cpp"
                       ,0x2c8,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
  }
  else {
    local_124._0_1_ = pTVar1->Type;
    local_124._1_3_ = *(undefined3 *)&pTVar1->field_0x1;
    local_124._4_4_ = (pTVar1->Value).FrameNumber;
    local_11c = (param_1->UpperBound).Value.SubFrame;
    if ((undefined1)local_124 == '\x02') goto LAB_1461d7ec8;
  }
  if ((this->NestedTransforms).ArrayNum == 0) {
    pTVar10 = operator*<FFrameTime>(local_78,param_1,&this->LinearTransform);
    local_f8 = *(undefined4 *)&pTVar10->LowerBound;
    iStack_f4 = (pTVar10->LowerBound).Value.FrameNumber.Value;
    fStack_f0 = (pTVar10->LowerBound).Value.SubFrame;
    uStack_ec = *(undefined4 *)&pTVar10->UpperBound;
    local_e8 = (pTVar10->UpperBound).Value;
    uVar8 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_f8);
    return (bool)uVar8;
  }
  local_1e0 = (FFrameTime *)0x0;
  local_1d8 = 0;
  local_1f0 = (FFrameTime *)0x0;
  local_1e8 = 0;
  local_res8 = &local_1e0;
  local_110 = &local_res8;
  local_118 = UE::Core::Private::Function::
              TFunctionRefCaller<`FMovieSceneInverseSequenceTransform::TransformFiniteRangeWithinRange'::__l2::<lambda_1>,bool,FFrameTime>
              ::Call;
  if (((param_1->LowerBound).Type.Value == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  TransformTimeWithinRange
            (this,(param_1->LowerBound).Value,(TFunctionRef<bool___cdecl(FFrameTime)> *)&local_118,
             param_3,param_4);
  local_res10 = &local_1f0;
  local_100 = &local_res10;
  local_108 = UE::Core::Private::Function::
              TFunctionRefCaller<`FMovieSceneInverseSequenceTransform::TransformFiniteRangeWithinRange'::__l2::<lambda_2>,bool,FFrameTime>
              ::Call;
  if (((pTVar1->Type).Value == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  TransformTimeWithinRange
            (this,(param_1->UpperBound).Value,(TFunctionRef<bool___cdecl(FFrameTime)> *)&local_108,
             param_3,param_4);
  AlgoImpl::IntroSortInternal<FFrameTime,int,FIdentityFunctor,TLess<void>_>
            (local_1e0,(int)local_1d8,local_res8._0_1_,(TLess<void>)local_res8._0_1_);
  AlgoImpl::IntroSortInternal<FFrameTime,int,FIdentityFunctor,TLess<void>_>
            (local_1f0,(int)local_1e8,local_res8._0_1_,(TLess<void>)local_res8._0_1_);
  uVar15 = 0;
  uVar14 = 0;
  if (0 < (int)local_1e8) {
    lVar17 = 0;
    do {
      if (0 < (int)local_1d8) {
        FVar2 = *local_1e0;
        uVar13 = 0;
        if ((int)uVar14 < (int)local_1e8) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        FVar12 = FVar2.FrameNumber.Value;
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        local_1d0 = *(FFrameTime *)((longlong)&(local_1f0->FrameNumber).Value + lVar17);
        param_2 = local_res18;
        if (FVar12.Value < local_1d0.FrameNumber.Value.Value) break;
        if (local_1d0.FrameNumber.Value.Value == FVar12.Value) {
          fStack_1f4 = FVar2.SubFrame;
          if (fStack_1f4 <= local_1d0.SubFrame) break;
        }
      }
      local_170._0_1_ = (param_1->LowerBound).Type;
      local_170._1_3_ = *(undefined3 *)&(param_1->LowerBound).field_0x1;
      local_170._4_4_ = (param_1->LowerBound).Value.FrameNumber;
      uVar3 = *(undefined8 *)&(param_1->LowerBound).Value.SubFrame;
      FVar2 = (param_1->UpperBound).Value;
      FStack_160 = FVar2.FrameNumber.Value;
      fStack_15c = FVar2.SubFrame;
      uStack_168 = (undefined4)uVar3;
      uStack_164 = (uint)((ulonglong)uVar3 >> 0x20);
      if ((int)uVar14 < (int)local_1e8 + -1) {
        local_150 = fStack_15c;
        local_158 = uStack_164;
        iStack_154 = FStack_160.Value;
        uVar13 = 0;
        if ((int)(uVar14 + 1) < (int)local_1e8) {
          uVar13 = ~(uVar14 + 1) >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        pFVar11 = local_1f0;
        cVar9 = (char)uStack_164;
        uVar13 = uStack_164 & 0xff;
        if ((uVar13 == 2) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,0x73,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        uVar3 = *(undefined8 *)((longlong)&pFVar11[1].FrameNumber.Value + lVar17);
        iStack_154 = (int)uVar3;
        local_150 = (float)((ulonglong)uVar3 >> 0x20);
        iVar18 = iStack_154;
        uStack_1c4 = iStack_154;
        uStack_1c0 = local_150;
        if (uVar13 == 0) {
          local_1c8 = CONCAT31(local_1c8._1_3_,1);
          uStack_168 = local_150;
          uVar13 = local_1c8;
        }
        else if (cVar9 == '\x01') {
          local_1c8 = (uint)local_1c8._1_3_ << 8;
          uStack_168 = local_150;
          uVar13 = local_1c8;
        }
        else {
          local_1c8 = local_158;
          uStack_168 = local_150;
          uVar13 = local_158;
        }
      }
      else {
        uStack_144 = 0;
        local_148 = CONCAT31(local_148._1_3_,2);
        iVar18 = 0;
        local_140 = 0;
        uStack_168 = 0;
        uVar13 = local_148;
      }
      local_170 = CONCAT44(iVar18,uVar13);
      uVar13 = 0;
      if ((int)uVar14 < (int)local_1e8) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      pFVar11 = local_1f0;
      if (((char)uStack_164 == '\x02') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,0x73,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      local_c8 = *(undefined8 *)((longlong)&(pFVar11->FrameNumber).Value + lVar17);
      FStack_160.Value = (int)local_c8;
      fStack_15c = (float)((ulonglong)local_c8 >> 0x20);
      local_d8 = (undefined4)local_170;
      uStack_d4 = local_170._4_4_;
      uStack_d0 = uStack_168;
      uStack_cc = uStack_164;
      cVar9 = (**(code **)local_res18)(*(undefined8 *)&local_res18->field_0x8,&local_d8);
      if (cVar9 == '\0') goto LAB_1461d88cd;
      uVar14 = uVar14 + 1;
      lVar17 = lVar17 + 8;
      param_2 = local_res18;
    } while ((int)uVar14 < (int)local_1e8);
  }
  if (0 < (int)local_1d8) {
    lVar17 = (longlong)(int)uVar14;
    lVar16 = 0;
    do {
      if ((int)local_1e8 <= (int)uVar14) {
        lVar17 = (longlong)(int)uVar15 * 8;
        goto LAB_1461d8620;
      }
      uVar13 = 0;
      if ((int)uVar15 < (int)local_1d8) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      local_198.Type.Value = (param_1->LowerBound).Type.Value;
      local_198._1_3_ = *(undefined3 *)&(param_1->LowerBound).field_0x1;
      local_198.Value = (param_1->LowerBound).Value;
      TStack_18c.Type.Value = (param_1->UpperBound).Type.Value;
      TStack_18c._1_3_ = *(undefined3 *)&(param_1->UpperBound).field_0x1;
      TStack_18c.Value = (param_1->UpperBound).Value;
      FVar2 = *(FFrameTime *)((longlong)&(local_1e0->FrameNumber).Value + lVar16);
      if (((param_1->LowerBound).Type.Value == '\x02') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,0x73,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      local_198.Value = FVar2;
      if ((int)uVar14 < (int)local_1e8) {
        fStack_1f4 = FVar2.SubFrame;
        fVar6 = fStack_1f4;
        do {
          uVar13 = 0;
          if ((int)uVar14 < (int)local_1e8) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          FVar12 = local_1f0[lVar17].FrameNumber;
          if ((FVar2.FrameNumber.Value.Value <= FVar12.Value) &&
             ((FVar12.Value != FVar2.FrameNumber.Value.Value ||
              (fStack_1f4 = local_1f0[lVar17].SubFrame, fVar6 < fStack_1f4)))) break;
          uVar14 = uVar14 + 1;
          lVar17 = lVar17 + 1;
        } while ((int)uVar14 < (int)local_1e8);
      }
      if ((int)uVar14 < (int)local_1e8) {
        uVar13 = 0;
        if ((int)uVar14 < (int)local_1e8) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        pFVar11 = local_1f0;
        if ((TStack_18c.Type.Value == '\x02') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,0x73,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        FVar2 = pFVar11[lVar17];
        TStack_18c.Value = FVar2;
        if ((local_198.Type.Value != '\x02') && (TStack_18c.Type.Value != '\x02')) {
          if ((local_198.Type.Value == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          local_1d0 = FVar2;
          if (FVar2.FrameNumber.Value.Value < local_198.Value.FrameNumber.Value.Value)
          goto LAB_1461d85a9;
          if (local_198.Value.FrameNumber.Value.Value == FVar2.FrameNumber.Value.Value) {
            fStack_1f4 = local_198.Value.SubFrame;
            local_1d0.SubFrame = FVar2.SubFrame;
            bVar7 = local_1d0.SubFrame < fStack_1f4;
            if (bVar7) goto LAB_1461d85a9;
          }
          pFVar11 = TRangeBound<FFrameTime>::GetValue(&TStack_18c);
          FVar2 = *pFVar11;
          local_1d0 = FVar2;
          pFVar11 = TRangeBound<FFrameTime>::GetValue(&local_198);
          if ((*pFVar11).FrameNumber.Value == FVar2.FrameNumber.Value.Value) {
            fStack_1f4 = (*pFVar11).SubFrame;
            if ((fStack_1f4 == local_1d0.SubFrame) &&
               ((local_198.Type.Value == '\0' || (TStack_18c.Type.Value == '\0'))))
            goto LAB_1461d85a9;
          }
        }
        local_b8.Type.Value = local_198.Type.Value;
        local_b8._1_3_ = local_198._1_3_;
        local_b8.Value.FrameNumber.Value = local_198.Value.FrameNumber.Value;
        local_b8.Value.SubFrame = local_198.Value.SubFrame;
        TStack_ac.Type.Value = TStack_18c.Type.Value;
        TStack_ac._1_3_ = TStack_18c._1_3_;
        TStack_ac.Value = TStack_18c.Value;
        cVar9 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_b8);
        if (cVar9 == '\0') goto LAB_1461d88cd;
      }
LAB_1461d85a9:
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 8;
      uVar14 = uVar14 + 1;
      lVar17 = lVar17 + 1;
    } while ((int)uVar15 < (int)local_1d8);
  }
LAB_1461d85c0:
  if (local_1f0 != (FFrameTime *)0x0) {
    FMemory::Free(local_1f0);
  }
  if (local_1e0 != (FFrameTime *)0x0) {
    FMemory::Free(local_1e0);
  }
  return true;
LAB_1461d8620:
  do {
    uVar3._0_1_ = (param_1->LowerBound).Type;
    uVar3._1_3_ = *(undefined3 *)&(param_1->LowerBound).field_0x1;
    uVar3._4_4_ = (param_1->LowerBound).Value.FrameNumber;
    uVar5 = *(undefined8 *)&(param_1->LowerBound).Value.SubFrame;
    FVar2 = (param_1->UpperBound).Value;
    TStack_1a4.Value.FrameNumber = FVar2.FrameNumber.Value;
    TStack_1a4.Value.SubFrame = FVar2.SubFrame;
    local_1b0._0_4_ = SUB84(uVar3,0);
    local_1b0.Value.SubFrame = (float)uVar5;
    TStack_1a4._0_4_ = SUB84((ulonglong)uVar5 >> 0x20,0);
    uVar14 = 0;
    if ((int)uVar15 < (int)local_1d8) {
      uVar14 = ~uVar15 >> 0x1f;
    }
    local_1b0.Value.FrameNumber.Value = uVar3._4_4_;
    if ((uVar14 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    pFVar11 = local_1e0;
    if ((local_1b0.Type.Value == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,0x73,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    uVar3 = *(undefined8 *)((longlong)&(pFVar11->FrameNumber).Value + lVar17);
    local_1b0.Value.FrameNumber.Value = (int)uVar3;
    local_1b0.Value.SubFrame = (float)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar15 < (int)local_1d8 + -1) {
      local_178 = local_1b0.Value.SubFrame;
      local_180 = local_1b0._0_4_;
      iStack_17c = local_1b0.Value.FrameNumber.Value;
      uVar14 = 0;
      if ((int)(uVar15 + 1) < (int)local_1d8) {
        uVar14 = ~(uVar15 + 1) >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      pFVar11 = local_1e0;
      cVar9 = (char)local_180;
      uVar14 = local_180 & 0xff;
      if ((uVar14 == 2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,0x73,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      uVar3 = *(undefined8 *)((longlong)&pFVar11[1].FrameNumber.Value + lVar17);
      iStack_17c = (int)uVar3;
      local_178 = (float)((ulonglong)uVar3 >> 0x20);
      FVar12.Value = iStack_17c;
      iStack_1b8 = iStack_17c;
      fStack_1b4 = local_178;
      if (uVar14 == 0) {
        local_1bc = CONCAT31(local_1bc._1_3_,1);
        TStack_1a4.Value.SubFrame = local_178;
        TStack_1a4._0_4_ = local_1bc;
      }
      else if (cVar9 == '\x01') {
        local_1bc = (uint)local_1bc._1_3_ << 8;
        TStack_1a4.Value.SubFrame = local_178;
        TStack_1a4._0_4_ = local_1bc;
      }
      else {
        local_1bc = local_180;
        TStack_1a4.Value.SubFrame = local_178;
        TStack_1a4._0_4_ = local_180;
      }
    }
    else {
      uStack_138 = 0;
      local_13c = CONCAT31(local_13c._1_3_,2);
      FVar12.Value = 0;
      local_134 = 0;
      TStack_1a4.Value.SubFrame = 0.0;
      TStack_1a4._0_4_ = local_13c;
    }
    fVar6 = TStack_1a4.Value.SubFrame;
    TStack_1a4.Value.FrameNumber.Value = FVar12.Value;
    if ((local_1b0.Type.Value == '\x02') || (TStack_1a4.Type.Value == '\x02')) {
LAB_1461d8889:
      local_88 = CONCAT44(TStack_1a4.Value.SubFrame,TStack_1a4.Value.FrameNumber.Value);
      local_98 = local_1b0._0_4_;
      iStack_94 = local_1b0.Value.FrameNumber.Value;
      fStack_90 = local_1b0.Value.SubFrame;
      uStack_8c = TStack_1a4._0_4_;
      cVar9 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_98);
      if (cVar9 == '\0') {
LAB_1461d88cd:
        if (local_1f0 != (FFrameTime *)0x0) {
          FMemory::Free(local_1f0);
        }
        if (local_1e0 != (FFrameTime *)0x0) {
          FMemory::Free(local_1e0);
        }
        return false;
      }
    }
    else {
      FVar2.SubFrame = TStack_1a4.Value.SubFrame;
      FVar2.FrameNumber.Value = FVar12.Value;
      if ((local_1b0.Type.Value == '\x02') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      local_1d0 = FVar2;
      if ((local_1b0.Value.FrameNumber.Value <= FVar12.Value) &&
         ((local_1b0.Value.FrameNumber.Value != FVar12.Value || (local_1b0.Value.SubFrame <= fVar6))
         )) {
        pFVar11 = TRangeBound<FFrameTime>::GetValue(&TStack_1a4);
        FVar2 = *pFVar11;
        local_1d0 = FVar2;
        pFVar11 = TRangeBound<FFrameTime>::GetValue(&local_1b0);
        if ((*pFVar11).FrameNumber.Value == FVar2.FrameNumber.Value.Value) {
          fStack_1f4 = (*pFVar11).SubFrame;
          if ((fStack_1f4 == local_1d0.SubFrame) &&
             ((local_1b0.Type.Value == '\0' || (TStack_1a4.Type.Value == '\0'))))
          goto LAB_1461d88b6;
        }
        goto LAB_1461d8889;
      }
    }
LAB_1461d88b6:
    uVar15 = uVar15 + 1;
    lVar17 = lVar17 + 8;
  } while ((int)uVar15 < (int)local_1d8);
  goto LAB_1461d85c0;
}

// TransformTimeWithinRange @ 1461da3e0

bool __thiscall
FMovieSceneInverseSequenceTransform::TransformTimeWithinRange
          (FMovieSceneInverseSequenceTransform *this,FFrameTime param_1,
          TFunctionRef<bool___cdecl(FFrameTime)> *param_2,FMovieSceneTransformBreadcrumbs *param_3,
          FMovieSceneTransformBreadcrumbs *param_4)

{
  int iVar1;
  int iVar2;
  FFrameTime *pFVar3;
  FFrameTime *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 uStack_3c;
  TArrayView<FFrameTime_const_,int> local_38;
  TArrayView<FFrameTime_const_,int> local_28;
  
  iVar1 = (param_4->Breadcrumbs).ArrayNum;
  pFVar3 = (FFrameTime *)(param_4->Breadcrumbs).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  pFVar4 = (FFrameTime *)(param_3->Breadcrumbs).AllocatorInstance.Data;
  iVar2 = (param_3->Breadcrumbs).ArrayNum;
  if (iVar2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  local_38._12_4_ = local_28._12_4_;
  local_38.ArrayNum = iVar1;
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iVar2;
  local_38.DataPtr = pFVar3;
  local_28.DataPtr = pFVar4;
  bVar6 = RecursiveTransformTimeWithinRange(this,0,param_1,param_2,&local_28,&local_38);
  return bVar6;
}

// TryTransformTime @ 1461db770

TOptional<FFrameTime> * __thiscall
FMovieSceneInverseSequenceTransform::TryTransformTime
          (FMovieSceneInverseSequenceTransform *this,TOptional<FFrameTime> *__return_storage_ptr__,
          FFrameTime param_1)

{
  FMovieSceneInverseNestedSequenceTransform *pFVar1;
  int iVar2;
  FFrameTime FVar3;
  FMovieSceneInverseNestedSequenceTransform *this_00;
  FInverseTransformTimeParams local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined1 local_res20 [8];
  TOptional<FFrameTime> local_48;
  
  iVar2 = (this->NestedTransforms).ArrayNum;
  this_00 = (FMovieSceneInverseNestedSequenceTransform *)
            (this->NestedTransforms).AllocatorInstance.Data;
  local_res8[0].Flags = Cycle|AnyDirection;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if ((this->NestedTransforms).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMovieSceneInverseNestedSequenceTransform_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res10);
    }
    if (this_00 == pFVar1) break;
    local_res18 = 0;
    FMovieSceneInverseNestedSequenceTransform::TryTransformTime
              (this_00,&local_48,param_1,(FFrameTime)0x0,local_res8);
    if (local_48.bIsSet == false) {
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
    this_00 = this_00 + 1;
    param_1 = local_48.TypedValue;
  }
  FVar3 = ::operator*((FFrameTime)local_res20,(FMovieSceneTimeTransform *)param_1);
  __return_storage_ptr__->TypedValue = *(FFrameTime *)FVar3;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// TryTransformTime @ 1461db830

TOptional<FFrameTime> * __thiscall
FMovieSceneInverseSequenceTransform::TryTransformTime
          (FMovieSceneInverseSequenceTransform *this,TOptional<FFrameTime> *__return_storage_ptr__,
          FFrameTime param_1,FInverseTransformTimeParams *param_2)

{
  FMovieSceneInverseNestedSequenceTransform *pFVar1;
  int iVar2;
  FFrameTime FVar3;
  FMovieSceneInverseNestedSequenceTransform *this_00;
  undefined1 local_res8 [8];
  TOptional<FFrameTime> local_48;
  
  iVar2 = (this->NestedTransforms).ArrayNum;
  this_00 = (FMovieSceneInverseNestedSequenceTransform *)
            (this->NestedTransforms).AllocatorInstance.Data;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if ((this->NestedTransforms).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMovieSceneInverseNestedSequenceTransform_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar1) break;
    FMovieSceneInverseNestedSequenceTransform::TryTransformTime
              (this_00,&local_48,param_1,(FFrameTime)0x0,param_2);
    if (local_48.bIsSet == false) {
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
    this_00 = this_00 + 1;
    param_1 = local_48.TypedValue;
  }
  FVar3 = ::operator*((FFrameTime)local_res8,(FMovieSceneTimeTransform *)param_1);
  __return_storage_ptr__->bIsSet = true;
  __return_storage_ptr__->TypedValue = *(FFrameTime *)FVar3;
  return __return_storage_ptr__;
}

// TryTransformTime @ 1461db900

TOptional<FFrameTime> * __thiscall
FMovieSceneInverseSequenceTransform::TryTransformTime
          (FMovieSceneInverseSequenceTransform *this,TOptional<FFrameTime> *__return_storage_ptr__,
          FFrameTime param_1,FMovieSceneTransformBreadcrumbs *param_2)

{
  FMovieSceneInverseNestedSequenceTransform *pFVar1;
  uint uVar2;
  code *pcVar3;
  uchar uVar4;
  bool bVar5;
  TOptional<FFrameTime> *pTVar6;
  FFrameTime FVar7;
  int iVar8;
  FMovieSceneInverseNestedSequenceTransform *this_00;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 local_res10 [8];
  FInverseTransformTimeParams local_res18 [16];
  FFrameTime local_70;
  undefined1 local_60 [8];
  TOptional<FFrameTime> local_58 [2];
  
  this_00 = (FMovieSceneInverseNestedSequenceTransform *)
            (this->NestedTransforms).AllocatorInstance.Data;
  uVar2 = (this->NestedTransforms).ArrayNum;
  uVar9 = (ulonglong)(int)uVar2;
  iVar8 = (param_2->Breadcrumbs).ArrayNum + -1;
  local_res18[0].Flags = Cycle|AnyDirection;
  lVar10 = (longlong)iVar8;
  pFVar1 = this_00 + uVar9;
  while( true ) {
    if ((this->NestedTransforms).ArrayNum != (int)uVar9) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FMovieSceneInverseNestedSequenceTransform_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res10);
    }
    if (this_00 == pFVar1) break;
    local_70.FrameNumber.Value = 0;
    local_70.SubFrame = 0.0;
    if ((((param_2->Mode == Dense) ||
         (((*(ulonglong *)(this_00->TimeScale).Variant.Data & 0xfff8000000000000) ==
           0xfff8000000000000 &&
          (uVar4 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this_00),
          uVar4 != 0xff)))) && (-1 < iVar8)) && (iVar8 < (param_2->Breadcrumbs).ArrayNum)) {
      if ((iVar8 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TOptional<FFrameTime> *)(*pcVar3)();
        return pTVar6;
      }
      local_70 = *(FFrameTime *)((param_2->Breadcrumbs).AllocatorInstance.Data + lVar10 * 8);
      lVar10 = lVar10 + -1;
      iVar8 = iVar8 + -1;
    }
    FMovieSceneInverseNestedSequenceTransform::TryTransformTime
              (this_00,local_58,param_1,local_70,local_res18);
    if (local_58[0].bIsSet == false) {
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
    this_00 = this_00 + 1;
    uVar9 = (ulonglong)uVar2;
    param_1 = local_58[0].TypedValue;
  }
  FVar7 = ::operator*((FFrameTime)local_60,(FMovieSceneTimeTransform *)param_1);
  __return_storage_ptr__->bIsSet = false;
  __return_storage_ptr__->TypedValue = *(FFrameTime *)FVar7;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// TryTransformTime @ 1461dbaa0

TOptional<FFrameTime> * __thiscall
FMovieSceneInverseSequenceTransform::TryTransformTime
          (FMovieSceneInverseSequenceTransform *this,TOptional<FFrameTime> *__return_storage_ptr__,
          FFrameTime param_1,FMovieSceneTransformBreadcrumbs *param_2,
          FInverseTransformTimeParams *param_3)

{
  FMovieSceneInverseNestedSequenceTransform *pFVar1;
  uint uVar2;
  code *pcVar3;
  uchar uVar4;
  bool bVar5;
  TOptional<FFrameTime> *pTVar6;
  FFrameTime FVar7;
  int iVar8;
  FMovieSceneInverseNestedSequenceTransform *this_00;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 local_res18 [16];
  FFrameTime local_60;
  undefined1 local_50 [8];
  TOptional<FFrameTime> local_48;
  
  this_00 = (FMovieSceneInverseNestedSequenceTransform *)
            (this->NestedTransforms).AllocatorInstance.Data;
  uVar2 = (this->NestedTransforms).ArrayNum;
  uVar9 = (ulonglong)(int)uVar2;
  iVar8 = (param_2->Breadcrumbs).ArrayNum + -1;
  lVar10 = (longlong)iVar8;
  pFVar1 = this_00 + uVar9;
  while( true ) {
    if ((this->NestedTransforms).ArrayNum != (int)uVar9) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FMovieSceneInverseNestedSequenceTransform_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res18);
    }
    if (this_00 == pFVar1) break;
    local_60.FrameNumber.Value = 0;
    local_60.SubFrame = 0.0;
    if ((((param_2->Mode == Dense) ||
         (((*(ulonglong *)(this_00->TimeScale).Variant.Data & 0xfff8000000000000) ==
           0xfff8000000000000 &&
          (uVar4 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this_00),
          uVar4 != 0xff)))) && (-1 < iVar8)) && (iVar8 < (param_2->Breadcrumbs).ArrayNum)) {
      if ((iVar8 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TOptional<FFrameTime> *)(*pcVar3)();
        return pTVar6;
      }
      local_60 = *(FFrameTime *)((param_2->Breadcrumbs).AllocatorInstance.Data + lVar10 * 8);
      lVar10 = lVar10 + -1;
      iVar8 = iVar8 + -1;
    }
    FMovieSceneInverseNestedSequenceTransform::TryTransformTime
              (this_00,&local_48,param_1,local_60,param_3);
    if (local_48.bIsSet == false) {
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
    this_00 = this_00 + 1;
    uVar9 = (ulonglong)uVar2;
    param_1 = local_48.TypedValue;
  }
  FVar7 = ::operator*((FFrameTime)local_50,(FMovieSceneTimeTransform *)param_1);
  __return_storage_ptr__->bIsSet = true;
  __return_storage_ptr__->TypedValue = *(FFrameTime *)FVar7;
  return __return_storage_ptr__;
}

// operator() @ 1504e62f0

bool __thiscall
`FMovieSceneInverseSequenceTransform::RecursiveTransformTimeWithinRange'::__l9::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7015242943829115564>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7015242943829115564>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

