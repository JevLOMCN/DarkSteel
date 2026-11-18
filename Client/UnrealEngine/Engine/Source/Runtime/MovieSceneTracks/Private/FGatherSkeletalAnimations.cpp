// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// ForEachAllocation @ 146830c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::MovieScene::FGatherSkeletalAnimations::ForEachAllocation
          (FGatherSkeletalAnimations *this,FEntityAllocationProxy *param_1,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TRead<UE::MovieScene::FRootInstanceHandle> param_3,
          TRead<UE::MovieScene::FInstanceHandle> param_4,TRead<UObject_*> param_5,
          TRead<FMovieSceneSkeletalAnimationComponentData> param_6,TReadOptional<FFrameTime> param_7
          ,TReadOptional<double> param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  UObject *pUVar6;
  ulonglong uVar7;
  FSkeletalAnimationSystemData *this_00;
  ForElementType<UE::MovieScene::FActiveSkeletalAnimation> *pFVar8;
  code *pcVar9;
  ulonglong uVar10;
  float fVar11;
  UMovieSceneSkeletalAnimationSection *this_01;
  bool bVar12;
  int iVar13;
  FEntityAllocation *pFVar14;
  FComponentMask *pFVar15;
  UClass *pUVar16;
  FFrameTime FVar17;
  UWorld *this_02;
  ForElementType<UE::MovieScene::FActiveSkeletalAnimation> FVar18;
  ForElementType<UE::MovieScene::FActiveSkeletalAnimation> FVar19;
  ForElementType<UE::MovieScene::FActiveSkeletalAnimation> *pFVar20;
  FString *pFVar21;
  byte bVar22;
  FFrameNumber FVar23;
  longlong lVar24;
  ForElementType<UE::MovieScene::FActiveSkeletalAnimation> *pFVar25;
  wchar_t *pwVar26;
  int iVar27;
  longlong lVar28;
  longlong lVar29;
  FFrameTime FVar30;
  wchar_t *pwVar31;
  ForElementType<UE::MovieScene::FActiveSkeletalAnimation> FVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  byte local_328;
  byte local_327;
  undefined1 local_326;
  undefined1 local_325;
  undefined1 local_324;
  undefined1 local_323 [3];
  UObject *local_320;
  longlong local_318;
  UObject *local_310;
  longlong local_308;
  ulonglong local_300;
  UMovieSceneSkeletalAnimationSection *local_2f8;
  longlong local_2f0;
  UAnimSequenceBase *local_2e8;
  float local_2e0;
  FWeakObjectPtr local_2dc;
  UObject *local_2d0;
  FFrameTime local_2c8;
  FMovieSceneSkeletalAnimationParams *local_2c0;
  int local_2b8;
  float local_2b4;
  char local_2b0;
  int local_2a8;
  float local_2a4;
  char local_2a0;
  undefined1 local_298 [16];
  longlong lStack_288;
  longlong local_280;
  longlong lStack_278;
  longlong local_270;
  FMovieSceneTimeTransform local_268;
  undefined1 local_258 [56];
  Type local_220;
  FFrameNumber local_21c;
  int local_218;
  byte local_214;
  FFrameTime local_210;
  FMovieSceneEntityID local_208;
  FRootInstanceHandle FStack_206;
  double local_200;
  float local_1f8;
  float local_1f4;
  Type local_1f0;
  byte local_1ec;
  int local_1e8;
  uchar auStack_1e4 [20];
  longlong *local_1d0;
  float local_1c8;
  undefined4 uStack_1c4;
  float local_1c0;
  uchar auStack_1bc [4];
  int local_1b8;
  int iStack_1b4;
  float local_1b0;
  undefined4 uStack_1ac;
  uchar auStack_1a8 [4];
  uint uStack_1a4;
  uchar local_1a0 [8];
  UObject *local_198;
  undefined1 local_190 [40];
  FFrameTime local_168;
  uchar local_160;
  FFrameTime local_158;
  uchar local_150;
  float local_148;
  uint local_13c;
  FFrameTime local_130;
  TRange<FFrameTime> local_120;
  TRange<FFrameTime> local_108;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8 [7];
  
  local_190._16_8_ = FBuiltInComponentTypes::Get();
  pFVar14 = FEntityAllocationProxy::GetAllocation(param_1);
  fVar11 = __real_3f000000;
  local_190._8_8_ = ZEXT28(pFVar14->Size);
  if (pFVar14->Size != 0) {
    uVar39 = (undefined4)__real_3ff0000000000000;
    uVar10 = (ulonglong)__real_3ff0000000000000 >> 0x20;
    local_2f0 = 0;
    do {
      lVar28 = local_2f0;
      uVar3 = *(ushort *)((longlong)param_2 + local_2f0 * 2);
      pUVar6 = *(UObject **)((longlong)param_5 + local_2f0 * 8);
      uVar37 = uVar39;
      uVar38 = (int)uVar10;
      if (param_8 != (TReadOptional<double>)0x0) {
        uVar2 = *(undefined8 *)((longlong)param_8 + local_2f0 * 8);
        uVar37 = (int)uVar2;
        uVar38 = (int)((ulonglong)uVar2 >> 0x20);
      }
      local_2d0 = pUVar6;
      pFVar15 = FEntityAllocationProxy::GetAllocationType(param_1);
      uVar4 = (((<unnamed_type_Tags> *)(local_190._16_8_ + 0x120))->RestoreState).Value;
      if (((uVar4 == 0xffff) || ((pFVar15->Bits).NumBits <= (int)(uint)uVar4)) ||
         (local_328 = 8,
         (*(uint *)(pFVar15->Bits).AllocatorInstance.InlineData[uVar4 >> 5].Pad >> (uVar4 & 0x1f) &
         1) == 0)) {
        local_328 = 0;
      }
      lVar24 = (ulonglong)*(ushort *)((longlong)param_4 + lVar28 * 4) * 0x140;
      lVar28 = *(longlong *)&this->InstanceRegistry->Instances;
      local_1d0 = (longlong *)(lVar28 + 0x68 + lVar24);
      local_2f8 = *(UMovieSceneSkeletalAnimationSection **)((longlong)param_6 + local_2f0 * 8);
      local_2c0 = &local_2f8->Params;
      local_318 = lVar24;
      local_308 = lVar28;
      if (pUVar6 == (UObject *)0x0) {
        pFVar21 = GetTypeName<USkeletalMeshComponent>(&local_b8);
        if ((pFVar21->Data).ArrayNum == 0) {
          pwVar31 = L"";
        }
        else {
          pwVar31 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar31);
      }
      pUVar16 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar13 = (int)pUVar16->_padding_;
      if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar13) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar13 * 8) !=
          &pUVar16->_padding_)) {
        pFVar21 = GetTypeName<USkeletalMeshComponent>(local_a8);
        pwVar31 = L"";
        if ((pFVar21->Data).ArrayNum == 0) {
          pwVar26 = L"";
        }
        else {
          pwVar26 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
        }
        pFVar21 = GetFullNameForCastLogError<UObject>(&local_c8,pUVar6);
        if ((pFVar21->Data).ArrayNum != 0) {
          pwVar31 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar31,pwVar26);
      }
      local_2e8 = UMovieSceneSkeletalAnimationSection::GetPlaybackAnimation(local_2f8);
      if (local_2e8 != (UAnimSequenceBase *)0x0) {
        if (param_7 == (TReadOptional<FFrameTime>)0x0) {
          uVar5 = *(uint *)(lVar24 + 0x8c + lVar28);
          if (uVar5 == 0x80000000) {
            if (*(int *)(lVar24 + 0x88 + lVar28) == 0) {
              if ((*(char *)(lVar24 + 0x74 + lVar28) == '\x02') &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Type != ERangeBoundTypes::Open",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                      ,99,L""), bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar29 = lVar28 + 0x78;
            }
            else {
              if ((*(char *)(lVar24 + 0x68 + lVar28) == '\x02') &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Type != ERangeBoundTypes::Open",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                      ,99,L""), bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar29 = lVar28 + 0x6c;
            }
            FVar30 = *(FFrameTime *)(lVar29 + lVar24);
            local_2c8 = FVar30;
          }
          else {
            local_2c8.SubFrame = 0.0;
            local_2c8.FrameNumber.Value = uVar5;
            FVar30 = local_2c8;
          }
        }
        else {
          local_130 = *(FFrameTime *)((longlong)param_7 + local_2f0 * 8);
          FVar30 = local_130;
        }
        if (*(int *)(lVar24 + 0x88 + lVar28) == 0) {
          if ((*(char *)(lVar24 + 0x68 + lVar28) == '\x02') &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar28 = lVar28 + 0x6c;
        }
        else {
          if ((*(char *)(lVar24 + 0x74 + lVar28) == '\x02') &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar28 = lVar28 + 0x78;
        }
        uVar7 = *(ulonglong *)&local_2f8->field_0xb0;
        FVar17 = *(FFrameTime *)(lVar28 + lVar24);
        local_300 = uVar7 >> 0x20;
        if ((char)uVar7 != '\x01') {
          if (((char)uVar7 == '\x02') &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_300 = (ulonglong)((int)(uVar7 >> 0x20) + 1);
        }
        uVar7 = *(ulonglong *)&local_2f8->field_0xb8;
        local_310 = (UObject *)(uVar7 >> 0x20);
        FVar23.Value = (int)(uVar7 >> 0x20);
        if ((char)uVar7 == '\x01') {
          FVar23.Value = FVar23.Value + 1;
        }
        else if (((char)uVar7 == '\x02') &&
                (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Type != ERangeBoundTypes::Open",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                     ,99,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_320 = local_2d0;
        pUVar6 = local_320;
        if (local_2c0->bLinearPlaybackWhenScaled != false) {
          pUVar16 = Z_Construct_UClass_UMovieScene_NoRegister();
          local_310 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)local_2f8,pUVar16);
          local_190._24_8_ = Z_Construct_UClass_UMovieSceneScalingAnchors_NoRegister();
          if ((GC::GIsIncrementalReachabilityPending != false) &&
             ((UClass *)local_190._24_8_ != (UClass *)0x0)) {
            GC::MarkAsReachable((UObject *)local_190._24_8_);
          }
          local_310 = FMovieSceneDecorationContainer::FindDecoration
                                ((FMovieSceneDecorationContainer *)&local_310[2].field_0x10,
                                 (TSubclassOf<UObject> *)(local_190 + 0x18));
          pUVar6 = local_2d0;
          if (local_310 != (UObject *)0x0) {
            pUVar16 = Z_Construct_UClass_UMovieSceneScalingAnchors_NoRegister();
            iVar13 = (int)pUVar16->_padding_;
            if ((*(int *)(*(longlong *)&local_310->field_0x10 + 0x38) < iVar13) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&local_310->field_0x10 + 0x30) + (longlong)iVar13 * 8)
                != &pUVar16->_padding_)) {
              pFVar21 = GetTypeName<UMovieSceneScalingAnchors>(&local_e8);
              pwVar31 = L"";
              if ((pFVar21->Data).ArrayNum == 0) {
                pwVar26 = L"";
              }
              else {
                pwVar26 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
              }
              pFVar21 = GetFullNameForCastLogError<UObject>(&local_d8,local_310);
              if ((pFVar21->Data).ArrayNum != 0) {
                pwVar31 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(pwVar31,pwVar26);
            }
            local_320 = local_2d0;
            local_326 = 0xf;
            (**(code **)(*(longlong *)local_310 + 0x2d0))
                      (local_310,&local_158,FVar30,FVar30,&local_326);
            if (local_150 != '\0') {
              FVar30 = local_158;
            }
            local_325 = 0xf;
            (**(code **)(*(longlong *)local_310 + 0x2d0))
                      (local_310,&local_168,FVar17,FVar17,&local_325);
            local_1c8 = (float)local_300;
            if (local_160 != '\0') {
              FVar17 = local_168;
            }
            uStack_1c4 = 0;
            auStack_1bc[0] = '\0';
            auStack_1bc[1] = '\0';
            auStack_1bc[2] = '\0';
            auStack_1bc[3] = '\0';
            local_324 = 0xf;
            local_1c0 = local_1c8;
            (**(code **)(*(longlong *)local_310 + 0x2d0))
                      (local_310,&local_2b8,local_300 & 0xffffffff,local_300 & 0xffffffff,&local_324
                      );
            if (local_2b0 != '\0') {
              iVar13 = local_2b8;
              if (fVar11 <= local_2b4) {
                iVar13 = local_2b8 + 1;
              }
              local_300 = CONCAT44(local_300._4_4_,iVar13);
            }
            iStack_1b4 = 0;
            auStack_1e4[0] = '\0';
            auStack_1e4[1] = '\0';
            auStack_1e4[2] = '\0';
            auStack_1e4[3] = '\0';
            local_323[0] = 0xf;
            local_1e8 = FVar23.Value;
            local_1b8 = FVar23.Value;
            (**(code **)(*(longlong *)local_310 + 0x2d0))
                      (local_310,&local_2a8,FVar23.Value,FVar23.Value,local_323);
            pUVar6 = local_320;
            if ((local_2a0 != '\0') && (FVar23.Value = local_2a8, fVar11 <= local_2a4)) {
              FVar23.Value = local_2a8 + 1;
            }
          }
        }
        local_320 = pUVar6;
        dVar33 = FMovieSceneSkeletalAnimationParams::MapTimeToAnimation
                           (local_2c0,local_300._0_4_,FVar23,FVar30,
                            *(FFrameRate *)(local_318 + 0x80 + local_308),local_2e8);
        fVar36 = (float)dVar33;
        dVar33 = FMovieSceneSkeletalAnimationParams::MapTimeToAnimation
                           (local_2c0,local_300._0_4_,FVar23,FVar17,
                            *(FFrameRate *)(local_318 + 0x80 + local_308),local_2e8);
        fVar34 = (float)dVar33;
        lVar24 = (ulonglong)*(ushort *)((longlong)param_3 + local_2f0 * 4) * 0x140;
        lVar28 = *(longlong *)&this->InstanceRegistry->Instances;
        uVar2 = *(undefined8 *)(lVar24 + 0x80 + lVar28);
        if ((*(byte *)(lVar24 + 0xe4 + lVar28) & 1) == 0) {
          puVar1 = (undefined8 *)(lVar24 + 0x68 + lVar28);
          local_120.LowerBound._0_8_ = *puVar1;
          local_120._8_8_ = puVar1[1];
          local_120.UpperBound.Value = *(FFrameTime *)(lVar24 + 0x78 + lVar28);
          FVar17 = TRange<FFrameTime>::Size<FFrameTime>(&local_120);
          lVar28 = *(longlong *)FVar17;
        }
        else {
          auStack_1e4[4] = '\0';
          auStack_1e4[5] = '\0';
          auStack_1e4[6] = '\0';
          auStack_1e4[7] = '\0';
          auStack_1e4[8] = '\0';
          auStack_1e4[9] = '\0';
          auStack_1e4[10] = '\0';
          auStack_1e4[0xb] = '\0';
          lVar28 = 0;
        }
        pUVar6 = local_2d0;
        iVar13 = *(int *)(local_318 + 0xd8 + local_308);
        local_300 = CONCAT44(local_300._4_4_,iVar13);
        if (((iVar13 == 4) || (iVar13 - 2U < 2)) ||
           ((local_190._36_4_ = (undefined4)((ulonglong)lVar28 >> 0x20),
            iVar27 = (int)((ulonglong)uVar2 >> 0x20),
            ((float)((longlong)(int)lVar28 * (longlong)iVar27) +
            (float)local_190._36_4_ * (float)iVar27) / (float)(int)uVar2 == 0.0 && (iVar13 != 0))))
        {
          local_327 = 4;
        }
        else {
          local_327 = 0;
        }
        local_190._32_8_ = lVar28;
        lVar28 = (**(code **)(*(longlong *)local_2d0 + 0x180))(local_2d0);
        if (lVar28 != 0) {
          this_02 = (UWorld *)(**(code **)(*(longlong *)pUVar6 + 0x180))(pUVar6);
          UWorld::HasBegunPlay(this_02);
        }
        this_00 = this->SystemData;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(local_320);
        }
        local_2dc.ObjectIndex = 0;
        local_2dc.ObjectSerialNumber = 0;
        local_198 = local_320;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(local_320);
        }
        FWeakObjectPtr::operator=(&local_2dc,(FObjectPtr)&local_198);
        FVar18 = (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)
                 TMapBase<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations,0>_>
                 ::FindOrAddImpl<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>_>
                           ((TMapBase<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations,0>_>
                             *)this_00,local_2dc.ObjectSerialNumber ^ local_2dc.ObjectIndex,
                            (TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_2dc);
        local_148 = (float)((uint)local_148 & 0xffffff00);
        local_1b0 = local_148;
        uStack_1ac._0_1_ = false;
        uStack_1ac._1_3_ = 0;
        auStack_1a8[0] = '\0';
        auStack_1a8[1] = '\0';
        auStack_1a8[2] = '\0';
        auStack_1a8[3] = '\0';
        local_1a0[0] = '\0';
        local_1a0[1] = '\0';
        local_1a0[2] = '\0';
        local_1a0[3] = '\0';
        local_1a0[4] = '\0';
        local_1a0[5] = '\0';
        local_1a0[6] = '\0';
        local_1a0[7] = '\0';
        local_13c = local_13c & 0xffffff00;
        uStack_1a4 = local_13c;
        local_108.LowerBound._0_8_ = ZEXT48((uint)local_148);
        local_108._8_8_ = (ulonglong)local_13c << 0x20;
        auStack_1e4[0xc] = '<';
        auStack_1e4[0xd] = '\0';
        auStack_1e4[0xe] = '\0';
        auStack_1e4[0xf] = '\0';
        auStack_1e4[0x10] = '\x01';
        auStack_1e4[0x11] = '\0';
        auStack_1e4[0x12] = '\0';
        auStack_1e4[0x13] = '\0';
        local_108.UpperBound.Value.FrameNumber.Value = 0;
        local_108.UpperBound.Value.SubFrame = 0.0;
        FMovieSceneEvaluationRange::FMovieSceneEvaluationRange
                  ((FMovieSceneEvaluationRange *)(local_298 + 8),&local_108,(FFrameRate)0x10000003c,
                   Forwards);
        local_268.TimeScale = 1.0;
        local_268.Offset.FrameNumber.Value = 0;
        local_268.Offset.SubFrame = 0.0;
        local_258._0_8_ = (FMovieSceneNestedSequenceTransform *)0x0;
        local_258._8_8_ = 0;
        FMovieSceneWarpCounter::FMovieSceneWarpCounter((FMovieSceneWarpCounter *)(local_258 + 0x10))
        ;
        local_214 = local_214 & 0x80;
        local_220 = Stopped;
        local_218 = 0;
        local_210.FrameNumber.Value = 0;
        local_210.SubFrame = 0.0;
        FStack_206._2_2_ = 0;
        local_298._0_8_ = local_2f8;
        local_21c.Value = -0x80000000;
        local_208.Value = 0xffff;
        FStack_206._0_2_ = 0xffff;
        local_298._8_8_ = *local_1d0;
        lStack_288 = local_1d0[1];
        local_280 = local_1d0[2];
        lStack_278 = local_1d0[3];
        local_270 = local_1d0[4];
        local_268._0_8_ = *(undefined8 *)(local_318 + 0x90 + local_308);
        local_268.Offset.SubFrame = *(float *)(local_318 + 0x98 + local_308);
        local_2e8 = (UAnimSequenceBase *)(local_308 + 0xa0 + local_318);
        if ((UAnimSequenceBase *)local_258 != local_2e8) {
          DestructItems<FMovieSceneNestedSequenceTransform,int>
                    ((FMovieSceneNestedSequenceTransform *)local_258._0_8_,local_258._8_4_);
          local_258._8_4_ = (undefined4)local_2e8->_padding_;
          local_2e8 = (UAnimSequenceBase *)local_2e8->_padding_;
          local_320 = (UObject *)CONCAT44(local_320._4_4_,local_258._8_4_);
          if ((local_258._8_4_ == 0) && (local_258._12_4_ == 0)) {
            local_258._8_8_ = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,local_258._8_4_,local_258._12_4_,(ForAnyElementType *)local_258,
                       local_258._8_4_,(int *)(local_258 + 0xc));
            ConstructItems<FMovieSceneNestedSequenceTransform,FMovieSceneNestedSequenceTransform,int>
                      ((void *)local_258._0_8_,(FMovieSceneNestedSequenceTransform *)local_2e8,
                       (int)local_320);
          }
        }
        FMovieSceneWarpCounter::operator=
                  ((FMovieSceneWarpCounter *)(local_258 + 0x10),
                   (FMovieSceneWarpCounter *)(local_308 + 0xb0 + local_318));
        local_220 = *(Type *)(local_318 + 0xd8 + local_308);
        local_21c.Value = *(int *)(local_318 + 0xdc + local_308);
        local_218 = *(int *)(local_318 + 0xe0 + local_308);
        local_214 = *(byte *)(local_318 + 0xe4 + local_308) & 1 | local_214 & 0xfe;
        local_214 = (local_214 ^ *(byte *)(local_318 + 0xe4 + local_308)) & 2 ^ local_214;
        local_214 = (local_214 ^ *(byte *)(local_318 + 0xe4 + local_308)) & 4 ^ local_214;
        local_214 = (local_214 ^ *(byte *)(local_318 + 0xe4 + local_308)) & 8 ^ local_214;
        local_214 = (local_214 ^ *(byte *)(local_318 + 0xe4 + local_308)) & 0x10 ^ local_214;
        local_214 = (local_214 ^ *(byte *)(local_318 + 0xe4 + local_308)) & 0x20 ^ local_214;
        local_214 = (local_214 ^ *(byte *)(local_318 + 0xe4 + local_308)) & 0x40 ^ local_214;
        local_200 = (double)CONCAT44(uVar38,uVar37);
        uVar37 = *(undefined4 *)((longlong)param_3 + local_2f0 * 4);
        FStack_206._0_2_ = SUB42(uVar37,0);
        FStack_206._2_2_ = SUB42((uint)uVar37 >> 0x10,0);
        bVar22 = 1;
        local_1f0 = local_300._0_4_;
        if (local_300._0_4_ == Playing) {
          bVar22 = 3;
        }
        local_1ec = bVar22 | local_1ec & 0xe0 | local_328 | local_327;
        FVar32 = *(ForElementType<UE::MovieScene::FActiveSkeletalAnimation> *)
                  ((longlong)FVar18 + 0x160);
        FVar19 = FVar18;
        if (FVar32 != (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)0x0) {
          FVar19 = FVar32;
        }
        local_210 = FVar30;
        local_208.Value = uVar3;
        local_1f8 = fVar34;
        local_1f4 = fVar36;
        if ((ulonglong)FVar19 <= local_298) {
          FVar19 = FVar18;
          if (FVar32 != (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)0x0) {
            FVar19 = FVar32;
          }
          if ((local_298 <
               (undefined1 *)
               ((longlong)*(int *)((longlong)FVar18 + 0x16c) * 0xb0 + (longlong)FVar19)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar13 = *(int *)((longlong)FVar18 + 0x168);
        if (iVar13 == *(int *)((longlong)FVar18 + 0x16c)) {
          iVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FActiveSkeletalAnimation>_>
                             (0x8b0,(ForElementType<UE::MovieScene::FActiveSkeletalAnimation> *)
                                    FVar18,(int *)((longlong)FVar18 + 0x16c));
        }
        *(int *)((longlong)FVar18 + 0x168) = iVar13 + 1;
        FVar32 = FVar18;
        if (*(ForElementType<UE::MovieScene::FActiveSkeletalAnimation> *)((longlong)FVar18 + 0x160)
            != (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)0x0) {
          FVar32 = *(ForElementType<UE::MovieScene::FActiveSkeletalAnimation> *)
                    ((longlong)FVar18 + 0x160);
        }
        FActiveSkeletalAnimation::FActiveSkeletalAnimation
                  ((FActiveSkeletalAnimation *)((longlong)iVar13 * 0xb0 + (longlong)FVar32),
                   (FActiveSkeletalAnimation *)local_298);
        bVar12 = FMotionVectorSimulation::IsEnabled();
        if (bVar12) {
          GetSimulatedMotionVectorTime((FMovieSceneContext *)local_190);
          uVar2 = local_190._0_8_;
          this_01 = local_2f8;
          dVar33 = FMovieSceneSkeletalAnimationParams::MapTimeToAnimation
                             (&local_2f8->Params,(UMovieSceneSection *)local_2f8,
                              (FFrameTime)local_190._0_8_,
                              *(FFrameRate *)(local_318 + 0x80 + local_308),(UAnimSequenceBase *)0x0
                             );
          local_2e0 = 1.0;
          fVar35 = (float)dVar33;
          FMovieSceneFloatChannel::Evaluate(&(this_01->Params).Weight,(FFrameTime)uVar2,&local_2e0);
          fVar34 = UMovieSceneSection::EvaluateEasing
                             ((UMovieSceneSection *)this_01,(FFrameTime)uVar2);
          pFVar25 = (ForElementType<UE::MovieScene::FActiveSkeletalAnimation> *)
                    ((longlong)FVar18 + 0x170);
          local_200 = (double)(fVar34 * local_2e0);
          pFVar8 = *(ForElementType<UE::MovieScene::FActiveSkeletalAnimation> **)
                    ((longlong)FVar18 + 0x2d0);
          pFVar20 = pFVar25;
          if (pFVar8 != (ForElementType<UE::MovieScene::FActiveSkeletalAnimation> *)0x0) {
            pFVar20 = pFVar8;
          }
          local_1f8 = fVar36;
          local_1f4 = fVar35;
          if (pFVar20 <= (ForElementType<UE::MovieScene::FActiveSkeletalAnimation> *)local_298) {
            pFVar20 = pFVar25;
            if (pFVar8 != (ForElementType<UE::MovieScene::FActiveSkeletalAnimation> *)0x0) {
              pFVar20 = pFVar8;
            }
            if ((local_298 <
                 pFVar20->InlineData + (longlong)*(int *)((longlong)FVar18 + 0x2dc) * 0xb0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          iVar13 = *(int *)((longlong)FVar18 + 0x2d8);
          if (iVar13 == *(int *)((longlong)FVar18 + 0x2dc)) {
            iVar13 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FActiveSkeletalAnimation>_>
                               (0x8b0,pFVar25,(int *)((longlong)FVar18 + 0x2dc));
          }
          *(int *)((longlong)FVar18 + 0x2d8) = iVar13 + 1;
          if (*(ForElementType<UE::MovieScene::FActiveSkeletalAnimation> **)
               ((longlong)FVar18 + 0x2d0) !=
              (ForElementType<UE::MovieScene::FActiveSkeletalAnimation> *)0x0) {
            pFVar25 = *(ForElementType<UE::MovieScene::FActiveSkeletalAnimation> **)
                       ((longlong)FVar18 + 0x2d0);
          }
          FActiveSkeletalAnimation::FActiveSkeletalAnimation
                    ((FActiveSkeletalAnimation *)(pFVar25->InlineData + (longlong)iVar13 * 0xb0),
                     (FActiveSkeletalAnimation *)local_298);
        }
        FMovieSceneWarpCounter::~FMovieSceneWarpCounter
                  ((FMovieSceneWarpCounter *)(local_258 + 0x10));
        DestructItems<FMovieSceneNestedSequenceTransform,int>
                  ((FMovieSceneNestedSequenceTransform *)local_258._0_8_,local_258._8_4_);
        if ((FMovieSceneNestedSequenceTransform *)local_258._0_8_ !=
            (FMovieSceneNestedSequenceTransform *)0x0) {
          FMemory::Free((void *)local_258._0_8_);
        }
      }
      local_2f0 = local_2f0 + 1;
    } while (local_2f0 < (longlong)local_190._8_8_);
  }
  return;
}

// PreTask @ 146857540

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FGatherSkeletalAnimations::PreTask(FGatherSkeletalAnimations *this)

{
  FSkeletalAnimationSystemData::ResetSkeletalAnimations(this->SystemData);
  return;
}

