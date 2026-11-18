// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// AnimUpdateRateSetParams @ 147931f00

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FAnimUpdateRateManager::AnimUpdateRateSetParams
          (FAnimUpdateRateParametersTracker *param_1,float param_2,bool param_3,float param_4,
          int param_5,bool param_6,bool param_7)

{
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this;
  undefined1 *puVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  EUpdateRateShiftBucket EVar5;
  byte bVar6;
  int iVar7;
  AActor *this_00;
  code *pcVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  AController *pAVar11;
  UClass *pUVar12;
  int *piVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uchar uVar19;
  uint *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint local_res18 [2];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  TPairInitializer<int_const_&,int_const_&> local_b0;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  undefined4 uStack_84;
  int *local_78;
  uint *local_70;
  undefined4 local_4c;
  
  if (((param_1->RegisteredComponents).ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = *(AActor **)(*(longlong *)(param_1->RegisteredComponents).AllocatorInstance.Data + 0xa8)
  ;
  if ((this_00 == (AActor *)0x0) ||
     (pAVar11 = AActor::GetInstigatorController(this_00), pAVar11 == (AController *)0x0)) {
LAB_147931fb3:
    pAVar11 = (AController *)0x0;
  }
  else {
    pUVar12 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar15 = (int)pUVar12->_padding_;
    if ((*(int *)(pAVar11->_padding_ + 0x38) < iVar15) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pAVar11->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar12->_padding_)) goto LAB_147931fb3;
  }
  iVar15 = param_5;
  if ((param_6 == false) || (param_7 != false)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (param_3) {
    if ((pAVar11 == (AController *)0x0) && (!bVar10)) {
      local_res18[0] = 1;
      if ((param_1->UpdateRateParameters).bShouldUseLodMap == '\0') {
        iVar15 = (param_1->UpdateRateParameters).BaseVisibleDistanceFactorThesholds.ArrayNum;
        uVar18 = 0;
        local_res18[0] = iVar15 + 1;
        uVar17 = local_res18[0];
        if (0 < iVar15) {
          lVar16 = 0;
          do {
            uVar17 = 0;
            if ((int)uVar18 <
                (param_1->UpdateRateParameters).BaseVisibleDistanceFactorThesholds.ArrayNum) {
              uVar17 = ~uVar18 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar18 = uVar18 + 1;
            pFVar3 = (param_1->UpdateRateParameters).BaseVisibleDistanceFactorThesholds.
                     AllocatorInstance.Data + lVar16;
            uVar17 = uVar18;
            TStack_d0.Array =
                 (TBitArray<FDefaultBitArrayAllocator> *)
                 CONCAT44(TStack_d0.Array._4_4_,TStack_d0.Array._0_4_);
          } while ((param_4 < *(float *)pFVar3 || param_4 == *(float *)pFVar3) &&
                  (lVar16 = lVar16 + 4, uVar17 = local_res18[0],
                  TStack_d0.Array =
                       (TBitArray<FDefaultBitArrayAllocator> *)
                       CONCAT44(TStack_d0.Array._4_4_,TStack_d0.Array._0_4_),
                  (int)uVar18 <
                  (param_1->UpdateRateParameters).BaseVisibleDistanceFactorThesholds.ArrayNum));
        }
      }
      else {
        this = &(param_1->UpdateRateParameters).LODToFrameSkipMap;
        piVar13 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                  Find((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                        *)this,param_5);
        if (piVar13 == (int *)0x0) {
          uVar17 = local_res18[0];
          TStack_d0.Array =
               (TBitArray<FDefaultBitArrayAllocator> *)
               CONCAT44(TStack_d0.Array._4_4_,TStack_d0.Array._0_4_);
          if (0 < *(int *)&(param_1->UpdateRateParameters).LODToFrameSkipMap.field_0x8 -
                  *(int *)&(param_1->UpdateRateParameters).LODToFrameSkipMap.field_0x34) {
            iVar7 = *(int *)&(param_1->UpdateRateParameters).LODToFrameSkipMap.field_0x28;
            local_98 = &(param_1->UpdateRateParameters).LODToFrameSkipMap.field_0x10;
            iStack_a0 = 0;
            local_88 = 0;
            uStack_9c = 1;
            TStack_d0.CurrentBitIndex = 0;
            if (iVar7 != 0) {
              puVar20 = *(uint **)&(param_1->UpdateRateParameters).LODToFrameSkipMap.field_0x20;
              if (puVar20 == (uint *)0x0) {
                puVar20 = (uint *)local_98;
              }
              uStack_9c = *puVar20;
              while (uStack_9c == 0) {
                iStack_a0 = iStack_a0 + 1;
                local_88 = local_88 + 0x20;
                uStack_9c = 1;
                TStack_d0.CurrentBitIndex = iVar7;
                if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0)
                goto LAB_14793217f;
                uStack_9c = puVar20[iStack_a0];
              }
              uStack_9c = -uStack_9c & uStack_9c;
              uVar4 = (ulonglong)uStack_9c * 2 + 1;
              lVar16 = 0x3f;
              if (uVar4 != 0) {
                for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              TStack_d0.CurrentBitIndex = (int)lVar16 + -1 + local_88;
              if (iVar7 < TStack_d0.CurrentBitIndex) {
                TStack_d0.CurrentBitIndex = iVar7;
              }
            }
LAB_14793217f:
            uStack_84 = local_4c;
            uStack_90 = 0xffffffff;
            TStack_d0._padding_ = CONCAT44(uStack_9c,iStack_a0);
            TStack_d0.UnvisitedBitMask = 0xffffffff;
            TStack_d0._28_4_ = local_4c;
            TStack_d0.BaseBitIndex = local_88;
            uVar17 = 1;
            local_b0.Value = (int *)this;
            iStack_8c = TStack_d0.CurrentBitIndex;
            TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_98;
            if (TStack_d0.CurrentBitIndex <
                *(int *)&(param_1->UpdateRateParameters).LODToFrameSkipMap.field_0x28) {
              do {
                lVar14 = (longlong)TStack_d0.CurrentBitIndex;
                lVar16 = *(longlong *)&this->field_0x0;
                if ((*(int *)(lVar16 + lVar14 * 0x10) < iVar15) &&
                   (local_res18[0] = uVar17, (int)uVar17 < *(int *)(lVar16 + 4 + lVar14 * 0x10))) {
                  local_res18[0] = *(uint *)(lVar16 + 4 + lVar14 * 0x10);
                }
                TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
                iVar15 = param_5;
                uVar17 = local_res18[0];
              } while (TStack_d0.CurrentBitIndex < (TStack_d0.Array)->NumBits);
            }
            local_78 = &param_5;
            local_70 = local_res18;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)this,&local_b0,(bool *)&local_78);
            uVar17 = local_res18[0] + 1;
          }
        }
        else {
          uVar17 = *piVar13 + 1;
          TStack_d0.Array =
               (TBitArray<FDefaultBitArrayAllocator> *)
               CONCAT44(TStack_d0.Array._4_4_,TStack_d0.Array._0_4_);
        }
      }
      local_res18[0] = uVar17;
      pTVar9 = CVarForceAnimRate.Ref;
      bVar10 = IsInParallelGameThread();
      if (!bVar10) {
        bVar10 = IsInGameThread();
        if (!bVar10) {
          bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007945>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6c9,"GetShadowIndex() == 0");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
      }
      if (pTVar9->ShadowedValue[0] != 0) {
        local_res18[0] = pTVar9->ShadowedValue[0];
      }
      if ((param_7 != false) && (1 < (int)local_res18[0])) {
        fVar23 = (float)(int)local_res18[0] * TargetFrameTimeForUpdateRate;
        if (param_1->AnimUpdateRateShiftTag == '\0') {
          EVar5 = (param_1->UpdateRateParameters).ShiftBucket;
          FShiftBucketParameters::ShiftTagBuckets[EVar5] =
               FShiftBucketParameters::ShiftTagBuckets[EVar5] + '\x01';
          param_1->AnimUpdateRateShiftTag = FShiftBucketParameters::ShiftTagBuckets[EVar5];
        }
        fVar22 = (param_1->UpdateRateParameters).TickedPoseOffestTime;
        if ((param_1->UpdateRateParameters).OptimizeMode == TrailMode) {
          fVar22 = 0.0;
        }
        bVar6 = (param_1->UpdateRateParameters).field_0x2;
        fVar22 = fVar22 - param_2;
        (param_1->UpdateRateParameters).ThisTickDelta = param_2;
        (param_1->UpdateRateParameters).OptimizeMode = LookAheadMode;
        (param_1->UpdateRateParameters).bInterpolateSkippedFrames = '\x01';
        (param_1->UpdateRateParameters).TickedPoseOffestTime = fVar22;
        if (fVar22 < 0.0) {
          fVar21 = (float)((uint)fVar22 ^ __xmm_80000000800000008000000080000000);
          if ((float)((uint)fVar22 ^ __xmm_80000000800000008000000080000000) <= fVar23) {
            fVar21 = fVar23;
          }
          (param_1->UpdateRateParameters).AdditionalTime = fVar21;
          (param_1->UpdateRateParameters).TickedPoseOffestTime = fVar22 + fVar21;
          if (fVar22 + fVar21 < 0.0) {
            FGenericPlatformMisc::LowLevelOutputDebugStringf
                      (L"TPO Time: %.3f | Orig TPO Time: %.3f | DT: %.3f | LookAheadAmount: %.3f\n")
            ;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("bValid",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkinnedMeshComponent.cpp"
                                ,0x166f,L"");
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          puVar2 = &(param_1->UpdateRateParameters).field_0x2;
          (param_1->UpdateRateParameters).bSkipUpdate = '\0';
          (param_1->UpdateRateParameters).bSkipEvaluation = '\0';
          return;
        }
        (param_1->UpdateRateParameters).AdditionalTime = 0.0;
        (param_1->UpdateRateParameters).field_0x2 = bVar6 | 0x19;
        return;
      }
      uVar19 = param_1->AnimUpdateRateShiftTag;
      if (uVar19 == '\0') {
        EVar5 = (param_1->UpdateRateParameters).ShiftBucket;
        FShiftBucketParameters::ShiftTagBuckets[EVar5] =
             FShiftBucketParameters::ShiftTagBuckets[EVar5] + '\x01';
        uVar19 = FShiftBucketParameters::ShiftTagBuckets[EVar5];
        param_1->AnimUpdateRateShiftTag = uVar19;
      }
      bVar10 = true;
      uVar17 = local_res18[0];
      uVar18 = local_res18[0];
      goto LAB_147932438;
    }
    uVar19 = param_1->AnimUpdateRateShiftTag;
    if (uVar19 == '\0') {
      EVar5 = (param_1->UpdateRateParameters).ShiftBucket;
      FShiftBucketParameters::ShiftTagBuckets[EVar5] =
           FShiftBucketParameters::ShiftTagBuckets[EVar5] + '\x01';
      uVar19 = FShiftBucketParameters::ShiftTagBuckets[EVar5];
      param_1->AnimUpdateRateShiftTag = uVar19;
    }
    uVar17 = 1;
    uVar18 = 1;
  }
  else {
    if ((pAVar11 != (AController *)0x0) || (bVar10)) {
      uVar17 = 1;
    }
    else {
      uVar17 = (param_1->UpdateRateParameters).BaseNonRenderedUpdateRate;
    }
    uVar19 = param_1->AnimUpdateRateShiftTag;
    uVar18 = (param_1->UpdateRateParameters).BaseNonRenderedUpdateRate;
    if (uVar19 == '\0') {
      EVar5 = (param_1->UpdateRateParameters).ShiftBucket;
      FShiftBucketParameters::ShiftTagBuckets[EVar5] =
           FShiftBucketParameters::ShiftTagBuckets[EVar5] + '\x01';
      uVar19 = FShiftBucketParameters::ShiftTagBuckets[EVar5];
      param_1->AnimUpdateRateShiftTag = uVar19;
    }
  }
  bVar10 = false;
LAB_147932438:
  FAnimUpdateRateParameters::SetTrailMode
            (&param_1->UpdateRateParameters,param_2,uVar19,uVar17,uVar18,bVar10);
  return;
}

// AnimUpdateRateTick @ 147932470

void __cdecl
FAnimUpdateRateManager::AnimUpdateRateTick
          (FAnimUpdateRateParametersTracker *param_1,float param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  byte bVar8;
  int iVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  bool local_res8;
  undefined1 local_res20 [8];
  
  bVar10 = false;
  local_res8 = true;
  pFVar7 = (param_1->RegisteredComponents).AllocatorInstance.Data;
  bVar8 = 0;
  iVar2 = (param_1->RegisteredComponents).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  fVar12 = 0.0;
  iVar9 = 0x7fffffff;
  while( true ) {
    if ((param_1->RegisteredComponents).ArrayNum != iVar2) {
      `TCheckedPointerIterator<USkinnedMeshComponent_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar7 == pFVar1) break;
    plVar3 = *(longlong **)pFVar7;
    cVar4 = (**(code **)(*plVar3 + 0x560))(plVar3);
    if (cVar4 == '\0') {
      pFVar7 = pFVar7 + 8;
    }
    else {
      fVar11 = *(float *)(plVar3 + 0xf7);
      if (*(float *)(plVar3 + 0xf7) <= fVar12) {
        fVar11 = fVar12;
      }
      bVar10 = (bool)(bVar10 | *(byte *)(plVar3 + 0x101) >> 6 & 1);
      bVar5 = (**(code **)(*plVar3 + 0xc38))(plVar3);
      bVar8 = bVar8 | bVar5;
      bVar5 = (**(code **)(*plVar3 + 0xc40))(plVar3);
      local_res8 = (bool)(local_res8 & bVar5);
      iVar6 = *(int *)(((ulonglong)((byte)~(param_1->UpdateRateParameters).field_0x2 & 4) | 0x7b0) +
                      (longlong)plVar3);
      if (iVar9 < iVar6) {
        iVar6 = iVar9;
      }
      pFVar7 = pFVar7 + 8;
      fVar12 = fVar11;
      iVar9 = iVar6;
    }
  }
  AnimUpdateRateSetParams(param_1,param_2,bVar10,fVar12,iVar9,(bool)(bVar8 & param_3),local_res8);
  return;
}

// B @ 1479348a0

wchar_t * __cdecl FAnimUpdateRateManager::B(bool param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"false";
  if (param_1) {
    pwVar1 = L"true";
  }
  return pwVar1;
}

// CleanupUpdateRateParametersRef @ 147939310

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FAnimUpdateRateManager::CleanupUpdateRateParametersRef(USkinnedMeshComponent *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*> *pTVar4;
  USkinnedMeshComponent *pUVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  void *pvVar11;
  uint uVar12;
  longlong *plVar13;
  USkinnedMeshComponent *local_res8;
  void *local_res10;
  USkinnedMeshComponent *local_res18;
  USkinnedMeshComponent *local_res20;
  longlong *plVar10;
  
  pUVar5 = (USkinnedMeshComponent *)param_1->_padding_;
  if ((USkinnedMeshComponent *)param_1->_padding_ == (USkinnedMeshComponent *)0x0) {
    pUVar5 = param_1;
  }
  local_res8 = param_1;
  local_res18 = pUVar5;
  pTVar4 = TSet<TTuple<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*>,TDefaultMapHashableKeyFuncs<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*>,TDefaultMapHashableKeyFuncs<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*,0>,FDefaultSetAllocator>
                   *)&ActorToUpdateRateParams,(UObject *)pUVar5);
  plVar6 = (longlong *)0x0;
  plVar9 = (longlong *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*> *)0x0)
  {
    plVar9 = plVar6;
  }
  if (plVar9 != (longlong *)0x0) {
    pvVar11 = (void *)*plVar9;
    local_res10 = pvVar11;
    if (((*(USkinnedMeshComponent ***)((longlong)pvVar11 + 0x90) <= &local_res8) &&
        (&local_res8 <
         *(USkinnedMeshComponent ***)((longlong)pvVar11 + 0x90) + *(int *)((longlong)pvVar11 + 0x9c)
        )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), param_1 = local_res8, bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = *(int *)((longlong)pvVar11 + 0x98);
    local_res20 = pUVar5;
    if (iVar1 != 0) {
      plVar9 = *(longlong **)((longlong)pvVar11 + 0x90);
      bVar3 = (USkinnedMeshComponent *)*plVar9 != param_1;
      plVar10 = plVar6;
      plVar13 = plVar6;
      do {
        uVar7 = (uint)plVar10;
        uVar8 = uVar7;
        do {
          plVar6 = (longlong *)((longlong)plVar6 + 1);
          uVar8 = uVar8 + 1;
          plVar10 = (longlong *)(ulonglong)uVar8;
          if ((longlong)iVar1 <= (longlong)plVar6) break;
        } while (bVar3 == ((USkinnedMeshComponent *)plVar9[(longlong)plVar6] != param_1));
        if (bVar3 != false) {
          uVar12 = (uint)plVar13;
          if (uVar12 != uVar7) {
            memmove(plVar9 + (int)uVar12,plVar9 + (int)uVar7,(longlong)(int)(uVar8 - uVar7) << 3);
            param_1 = local_res8;
          }
          plVar13 = (longlong *)(ulonglong)(uVar12 + (uVar8 - uVar7));
        }
        bVar3 = (bool)(bVar3 ^ 1);
      } while ((longlong)plVar6 < (longlong)iVar1);
      *(int *)((longlong)local_res10 + 0x98) = (int)plVar13;
      local_res20 = local_res18;
      pvVar11 = local_res10;
      if ((int)plVar13 != 0) {
        return;
      }
    }
    if (ActorToUpdateRateParams._8_4_ != ActorToUpdateRateParams._52_4_) {
      uVar8 = ((uint)((ulonglong)local_res20 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res20 >> 4)
              ) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      TSet<TTuple<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*>,TDefaultMapHashableKeyFuncs<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObject_const_*>
                ((TSet<TTuple<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*>,TDefaultMapHashableKeyFuncs<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*,0>,FDefaultSetAllocator>
                  *)&ActorToUpdateRateParams,uVar8 >> 0x10 ^ uVar8,(UObject **)&local_res20);
    }
    if (pvVar11 != (void *)0x0) {
      if (*(void **)((longlong)pvVar11 + 0x90) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar11 + 0x90));
      }
      *(undefined4 *)((longlong)pvVar11 + 0x78) = 0;
      if (*(void **)((longlong)pvVar11 + 0x70) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar11 + 0x70));
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)((longlong)pvVar11 + 0x30));
      if (*(void **)((longlong)pvVar11 + 0x20) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar11 + 0x20));
      }
      ::operator_delete(pvVar11,0xa0);
    }
  }
  return;
}

// GetMapIndexForComponent @ 14794a020

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __cdecl FAnimUpdateRateManager::GetMapIndexForComponent(USkinnedMeshComponent *param_1)

{
  USkinnedMeshComponent *pUVar1;
  
  pUVar1 = (USkinnedMeshComponent *)param_1->_padding_;
  if ((USkinnedMeshComponent *)param_1->_padding_ == (USkinnedMeshComponent *)0x0) {
    pUVar1 = param_1;
  }
  return (UObject *)pUVar1;
}

// GetUpdateRateParameters @ 147950450

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAnimUpdateRateParameters * __cdecl
FAnimUpdateRateManager::GetUpdateRateParameters(USkinnedMeshComponent *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  USkinnedMeshComponent *pUVar4;
  bool bVar5;
  float fVar6;
  TTuple<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*> *pTVar7;
  FAnimUpdateRateParameters *this;
  FAnimUpdateRateParameters *pFVar8;
  FAnimUpdateRateParameters *pFVar9;
  USkinnedMeshComponent *local_res8;
  TKeyInitializer<UObject_*_const_&> local_res10;
  USkinnedMeshComponent *local_res18;
  USkinnedMeshComponent **local_res20;
  FReadAccessScope local_38;
  
  if (param_1 == (USkinnedMeshComponent *)0x0) {
    return (FAnimUpdateRateParameters *)0x0;
  }
  local_res18 = (USkinnedMeshComponent *)param_1->_padding_;
  if ((USkinnedMeshComponent *)param_1->_padding_ == (USkinnedMeshComponent *)0x0) {
    local_res18 = param_1;
  }
  local_res8 = param_1;
  pTVar7 = TSet<TTuple<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*>,TDefaultMapHashableKeyFuncs<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*>,TDefaultMapHashableKeyFuncs<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*,0>,FDefaultSetAllocator>
                   *)&ActorToUpdateRateParams,(UObject *)local_res18);
  pFVar9 = (FAnimUpdateRateParameters *)0x0;
  pFVar8 = (FAnimUpdateRateParameters *)&pTVar7->field_0x8;
  if (pTVar7 == (TTuple<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*> *)0x0)
  {
    pFVar8 = pFVar9;
  }
  if (pFVar8 == (FAnimUpdateRateParameters *)0x0) {
    local_res20 = &local_res18;
    TSet<TTuple<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*>,TDefaultMapHashableKeyFuncs<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<UObject_*_const_&>_>
              ((TSet<TTuple<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*>,TDefaultMapHashableKeyFuncs<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*,0>,FDefaultSetAllocator>
                *)&ActorToUpdateRateParams,&local_res10,(bool *)&local_res20);
    pFVar8 = (FAnimUpdateRateParameters *)
             (ActorToUpdateRateParams._0_8_ + ((longlong)(int)local_res10.Key * 3 + 1) * 8);
    this = ::operator_new(0xa0);
    if (this != (FAnimUpdateRateParameters *)0x0) {
      FAnimUpdateRateParameters::FAnimUpdateRateParameters(this);
      this[1].OptimizeMode = TrailMode;
      this[1].ShiftBucket = ShiftBucket0;
      *(undefined2 *)&this[1].field_0x2 = 0;
      *(undefined1 *)&this[1].UpdateRate = 0;
      this[1].EvaluationRate = 0;
      this[1].TickedPoseOffestTime = 0.0;
      this[1].AdditionalTime = 0.0;
      this[1].ThisTickDelta = 0.0;
      pFVar9 = this;
    }
    *(FAnimUpdateRateParameters **)pFVar8 = pFVar9;
  }
  if ((pFVar8 == (FAnimUpdateRateParameters *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExistingTrackerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkinnedMeshComponent.cpp"
                         ,0xe2,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FAnimUpdateRateParameters *)(*pcVar3)();
    return pFVar8;
  }
  pFVar8 = *(FAnimUpdateRateParameters **)pFVar8;
  if ((pFVar8 == (FAnimUpdateRateParameters *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExistingTracker",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkinnedMeshComponent.cpp"
                         ,0xe4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FAnimUpdateRateParameters *)(*pcVar3)();
    return pFVar8;
  }
  piVar1 = &pFVar8[1].EvaluationRate;
  if (((*(USkinnedMeshComponent ***)piVar1 <= &local_res8) &&
      (&local_res8 < *(USkinnedMeshComponent ***)piVar1 + (int)pFVar8[1].ThisTickDelta)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FAnimUpdateRateParameters *)(*pcVar3)();
    return pFVar8;
  }
  fVar6 = pFVar8[1].AdditionalTime;
  if (fVar6 == pFVar8[1].ThisTickDelta) {
    fVar6 = (float)UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)piVar1,(int *)&pFVar8[1].ThisTickDelta);
  }
  pUVar4 = local_res8;
  pFVar8[1].AdditionalTime = (float)((int)fVar6 + 1);
  *(USkinnedMeshComponent **)(*(longlong *)piVar1 + (longlong)(int)fVar6 * 8) = local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &local_res8->OnAnimUpdateRateParamsCreated,&local_38);
  if ((*(int *)&(pUVar4->OnAnimUpdateRateParamsCreated).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(pUVar4->OnAnimUpdateRateParamsCreated).field_0x8,
     plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,pFVar8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  return pFVar8;
}

// TickUpdateRateParameters @ 147975630

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FAnimUpdateRateManager::TickUpdateRateParameters
          (USkinnedMeshComponent *param_1,float param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FAnimUpdateRateParametersTracker *pFVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  TTuple<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*> *pTVar11;
  USkinnedMeshComponent *pUVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  byte bVar16;
  float fVar17;
  float fVar18;
  bool local_res8;
  undefined1 local_res20 [8];
  
  auVar5._8_8_ = 0;
  auVar5._0_8_ = GFrameCounter;
  pUVar12 = (USkinnedMeshComponent *)param_1->_padding_;
  if ((USkinnedMeshComponent *)param_1->_padding_ == (USkinnedMeshComponent *)0x0) {
    pUVar12 = param_1;
  }
  uVar13 = (int)GFrameCounter + SUB164(auVar5 / ZEXT816(0xffffffff),0);
  pTVar11 = TSet<TTuple<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*>,TDefaultMapHashableKeyFuncs<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*>,TDefaultMapHashableKeyFuncs<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*,0>,FDefaultSetAllocator>
                    *)&ActorToUpdateRateParams,(UObject *)pUVar12);
  if (pTVar11 == (TTuple<UObject_*,FAnimUpdateRateManager::FAnimUpdateRateParametersTracker_*> *)0x0
     ) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar3 = *(FAnimUpdateRateParametersTracker **)&pTVar11->field_0x8;
  if (uVar13 != pFVar3->AnimUpdateRateFrameCount) {
    bVar7 = false;
    bVar16 = 0;
    pFVar3->AnimUpdateRateFrameCount = uVar13;
    pFVar14 = (pFVar3->RegisteredComponents).AllocatorInstance.Data;
    iVar2 = (pFVar3->RegisteredComponents).ArrayNum;
    local_res8 = true;
    pFVar1 = pFVar14 + (longlong)iVar2 * 8;
    fVar18 = 0.0;
    iVar15 = 0x7fffffff;
    while( true ) {
      if ((pFVar3->RegisteredComponents).ArrayNum != iVar2) {
        `TCheckedPointerIterator<USkinnedMeshComponent_*_const,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res20);
      }
      if (pFVar14 == pFVar1) break;
      plVar4 = *(longlong **)pFVar14;
      cVar8 = (**(code **)(*plVar4 + 0x560))(plVar4);
      if (cVar8 == '\0') {
        pFVar14 = pFVar14 + 8;
      }
      else {
        fVar17 = *(float *)(plVar4 + 0xf7);
        if (*(float *)(plVar4 + 0xf7) <= fVar18) {
          fVar17 = fVar18;
        }
        bVar7 = (bool)(bVar7 | *(byte *)(plVar4 + 0x101) >> 6 & 1);
        bVar9 = (**(code **)(*plVar4 + 0xc38))(plVar4);
        bVar16 = bVar16 | bVar9;
        bVar9 = (**(code **)(*plVar4 + 0xc40))(plVar4);
        local_res8 = (bool)(local_res8 & bVar9);
        iVar10 = *(int *)(((ulonglong)((byte)~(pFVar3->UpdateRateParameters).field_0x2 & 4) | 0x7b0)
                         + (longlong)plVar4);
        if (iVar15 < iVar10) {
          iVar10 = iVar15;
        }
        pFVar14 = pFVar14 + 8;
        fVar18 = fVar17;
        iVar15 = iVar10;
      }
    }
    AnimUpdateRateSetParams(pFVar3,param_2,bVar7,fVar18,iVar15,(bool)(bVar16 & param_3),local_res8);
  }
  return;
}

