// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 4

// CacheIsValidForPlayback @ 14dbbf3c0

bool __cdecl Chaos::FClothingCacheSchema::CacheIsValidForPlayback(UChaosCache *param_1)

{
  if (((param_1->TrackToParticle).ArrayNum < 1) && ((param_1->ChannelCurveToParticle).ArrayNum < 1))
  {
    return false;
  }
  return true;
}

// LoadCacheData @ 14dc06720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
Chaos::FClothingCacheSchema::LoadCacheData
          (UChaosCache *param_1,double param_2,FClothingSimulationCacheData *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  float fVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  FName FVar8;
  FName FVar9;
  longlong *plVar10;
  undefined4 uVar11;
  bool bVar12;
  uint uVar13;
  FName *pFVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  FName *pFVar18;
  longlong lVar19;
  uint uVar20;
  FName *pFVar21;
  uint *puVar22;
  ForElementType<unsigned_int> FVar23;
  FName *pFVar24;
  longlong lVar25;
  uint uVar26;
  FName *pFVar27;
  longlong lVar28;
  FName *pFVar29;
  undefined1 auStackY_388 [32];
  undefined1 local_347 [3];
  undefined4 local_344;
  FName *local_340;
  FName *local_338;
  FName *local_330;
  FName *local_328;
  FName *local_318;
  FCacheEvaluationContext local_310;
  int local_2e8;
  undefined1 local_2e4 [20];
  int iStack_2d0;
  uint uStack_2cc;
  TBitArray<FDefaultBitArrayAllocator> *local_2c8;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  int local_2b8;
  undefined4 uStack_2b4;
  int iStack_2b0;
  undefined4 uStack_2ac;
  longlong *local_2a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2a0;
  undefined8 uStack_280;
  undefined4 *local_278;
  longlong local_270;
  undefined4 local_24c;
  undefined1 local_248 [208];
  int local_178;
  longlong local_170;
  int local_168;
  TBitArray<FDefaultBitArrayAllocator> local_160;
  int local_13c;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  void *local_d0;
  undefined4 local_c8;
  double local_b8 [2];
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_310.TickRecord = (FPlaybackTickRecord *)local_118;
  local_e8 = ___xmm_00000000ffffffff0000008000000000;
  uStack_e0 = _UNK_150631d98;
  pFVar21 = (FName *)0x0;
  local_b8 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_98 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_78 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_a8 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_118._4_4_ = (undefined4)param_2;
  local_118._0_4_ = 0;
  local_118._8_8_ = 0;
  local_88 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_108 = 0;
  local_f0 = 0;
  local_d0 = (void *)0x0;
  local_c8 = 0;
  local_68 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_310.EvaluationIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_310.EvaluationIndices.ArrayNum = 0;
  local_310.EvaluationIndices.ArrayMax = 0;
  local_310.bEvaluateTransform = false;
  local_310.bEvaluateCurves = false;
  local_310.bEvaluateEvents = false;
  local_310.bEvaluateChannels = true;
  local_310.bEvaluateNamedTransforms = true;
  UChaosCache::Evaluate
            (param_1,(FCacheEvaluationResult *)local_248,&local_310,
             (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0);
  FVar8 = VelocityXName;
  uVar13 = ::GetTypeHash(VelocityXName.ComparisonIndex.Value);
  FVar9 = VelocityYName;
  pFVar14 = pFVar21;
  if (local_248._144_4_ != local_248._188_4_) {
    puVar16 = local_248 + 0xc0;
    if ((undefined1 *)local_248._200_8_ != (undefined1 *)0x0) {
      puVar16 = (undefined1 *)local_248._200_8_;
    }
    uVar13 = *(uint *)(puVar16 + (ulonglong)(local_178 - 1U & FVar8.Number + uVar13) * 4);
    while ((pFVar14 = pFVar21, uVar13 != 0xffffffff &&
           (pFVar14 = (FName *)((longlong)(int)uVar13 * 0x20 + local_248._136_8_), *pFVar14 != FVar8
           ))) {
      uVar13 = pFVar14[3].ComparisonIndex.Value;
    }
  }
  pFVar24 = pFVar14 + 1;
  if (pFVar14 == (FName *)0x0) {
    pFVar24 = pFVar21;
  }
  local_328 = pFVar24;
  uVar13 = ::GetTypeHash(VelocityYName.ComparisonIndex.Value);
  FVar8 = VelocityZName;
  pFVar14 = pFVar21;
  if (local_248._144_4_ != local_248._188_4_) {
    puVar16 = local_248 + 0xc0;
    if ((undefined1 *)local_248._200_8_ != (undefined1 *)0x0) {
      puVar16 = (undefined1 *)local_248._200_8_;
    }
    uVar13 = *(uint *)(puVar16 + (ulonglong)(local_178 - 1U & FVar9.Number + uVar13) * 4);
    while ((pFVar14 = pFVar21, uVar13 != 0xffffffff &&
           (pFVar14 = (FName *)((longlong)(int)uVar13 * 0x20 + local_248._136_8_), *pFVar14 != FVar9
           ))) {
      uVar13 = pFVar14[3].ComparisonIndex.Value;
    }
  }
  pFVar29 = pFVar14 + 1;
  if (pFVar14 == (FName *)0x0) {
    pFVar29 = pFVar21;
  }
  uVar13 = ::GetTypeHash(VelocityZName.ComparisonIndex.Value);
  FVar9 = PositionXName;
  pFVar14 = pFVar21;
  if (local_248._144_4_ != local_248._188_4_) {
    puVar16 = local_248 + 0xc0;
    if ((undefined1 *)local_248._200_8_ != (undefined1 *)0x0) {
      puVar16 = (undefined1 *)local_248._200_8_;
    }
    uVar13 = *(uint *)(puVar16 + (ulonglong)(local_178 - 1U & FVar8.Number + uVar13) * 4);
    while ((pFVar14 = pFVar21, uVar13 != 0xffffffff &&
           (pFVar14 = (FName *)((longlong)(int)uVar13 * 0x20 + local_248._136_8_), *pFVar14 != FVar8
           ))) {
      uVar13 = pFVar14[3].ComparisonIndex.Value;
    }
  }
  pFVar27 = pFVar14 + 1;
  if (pFVar14 == (FName *)0x0) {
    pFVar27 = pFVar21;
  }
  local_318 = pFVar27;
  uVar13 = ::GetTypeHash(PositionXName.ComparisonIndex.Value);
  FVar8 = PositionYName;
  pFVar14 = pFVar21;
  if (local_248._144_4_ != local_248._188_4_) {
    puVar16 = local_248 + 0xc0;
    if ((undefined1 *)local_248._200_8_ != (undefined1 *)0x0) {
      puVar16 = (undefined1 *)local_248._200_8_;
    }
    uVar13 = *(uint *)(puVar16 + (ulonglong)(local_178 - 1U & FVar9.Number + uVar13) * 4);
    while ((pFVar14 = pFVar21, uVar13 != 0xffffffff &&
           (pFVar14 = (FName *)((longlong)(int)uVar13 * 0x20 + local_248._136_8_), *pFVar14 != FVar9
           ))) {
      uVar13 = pFVar14[3].ComparisonIndex.Value;
    }
  }
  pFVar18 = pFVar14 + 1;
  if (pFVar14 == (FName *)0x0) {
    pFVar18 = pFVar21;
  }
  local_340 = pFVar18;
  uVar13 = ::GetTypeHash(PositionYName.ComparisonIndex.Value);
  FVar9 = PositionZName;
  pFVar14 = pFVar21;
  if (local_248._144_4_ != local_248._188_4_) {
    puVar16 = local_248 + 0xc0;
    if ((undefined1 *)local_248._200_8_ != (undefined1 *)0x0) {
      puVar16 = (undefined1 *)local_248._200_8_;
    }
    uVar13 = *(uint *)(puVar16 + (ulonglong)(local_178 - 1U & FVar8.Number + uVar13) * 4);
    while ((pFVar14 = pFVar21, uVar13 != 0xffffffff &&
           (pFVar14 = (FName *)((longlong)(int)uVar13 * 0x20 + local_248._136_8_), *pFVar14 != FVar8
           ))) {
      uVar13 = pFVar14[3].ComparisonIndex.Value;
    }
  }
  pFVar21 = pFVar14 + 1;
  if (pFVar14 == (FName *)0x0) {
    pFVar21 = (FName *)0x0;
  }
  local_338 = pFVar21;
  uVar13 = ::GetTypeHash(PositionZName.ComparisonIndex.Value);
  uVar11 = local_248._16_4_;
  if (local_248._144_4_ != local_248._188_4_) {
    puVar16 = local_248 + 0xc0;
    if ((undefined1 *)local_248._200_8_ != (undefined1 *)0x0) {
      puVar16 = (undefined1 *)local_248._200_8_;
    }
    uVar13 = *(uint *)(puVar16 + (ulonglong)(local_178 - 1U & FVar9.Number + uVar13) * 4);
    while (uVar13 != 0xffffffff) {
      pFVar14 = (FName *)((longlong)(int)uVar13 * 0x20 + local_248._136_8_);
      if (*pFVar14 == FVar9) goto LAB_14dc06b6b;
      uVar13 = pFVar14[3].ComparisonIndex.Value;
    }
  }
  pFVar14 = (FName *)0x0;
LAB_14dc06b6b:
  local_330 = pFVar14 + 1;
  if (pFVar14 == (FName *)0x0) {
    local_330 = (FName *)0x0;
  }
  if (((pFVar18 == (FName *)0x0) || (pFVar21 == (FName *)0x0)) || (local_330 == (FName *)0x0)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (((pFVar24 == (FName *)0x0) || (pFVar29 == (FName *)0x0)) || (pFVar27 == (FName *)0x0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (bVar12) {
    pTVar3 = &param_3->CacheIndices;
    iVar17 = local_248._16_4_;
    if (pTVar3 != (TArray<int,TSizedDefaultAllocator<32>_> *)(local_248 + 8)) {
      piVar1 = &(param_3->CacheIndices).ArrayMax;
      (param_3->CacheIndices).ArrayNum = local_248._16_4_;
      if ((local_248._16_4_ == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_248._16_4_,*piVar1,&pTVar3->AllocatorInstance,local_248._16_4_,piVar1);
        iVar17 = local_248._16_4_;
        if (uVar11 != 0) {
          memcpy((pTVar3->AllocatorInstance).Data,(void *)local_248._8_8_,(longlong)(int)uVar11 << 2
                );
          iVar17 = local_248._16_4_;
        }
      }
    }
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&param_3->CachedPositions,iVar17,Default);
    uVar13 = 0;
    iVar15 = 0;
    if (bVar7) {
      iVar15 = iVar17;
    }
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&param_3->CachedVelocities,iVar15,Default);
    local_2e4._4_8_ = SEXT48(iVar17);
    if (0 < iVar17) {
      lVar28 = 0;
      lVar19 = 0;
      lVar25 = 0;
      do {
        uVar20 = ~uVar13 >> 0x1f;
        uVar26 = 0;
        if ((int)uVar13 < (int)local_340[1].ComparisonIndex.Value) {
          uVar26 = uVar20;
        }
        if ((uVar26 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar4 = *(float *)((longlong)*local_340 + lVar25);
        uVar26 = 0;
        if ((int)uVar13 < (param_3->CachedPositions).ArrayNum) {
          uVar26 = uVar20;
        }
        if ((uVar26 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(double *)((param_3->CachedPositions).AllocatorInstance.Data + lVar19) = (double)fVar4;
        uVar26 = 0;
        if ((int)uVar13 < (int)local_338[1].ComparisonIndex.Value) {
          uVar26 = uVar20;
        }
        if ((uVar26 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar4 = *(float *)((longlong)*local_338 + lVar28 * 4);
        uVar26 = 0;
        if ((int)uVar13 < (param_3->CachedPositions).ArrayNum) {
          uVar26 = uVar20;
        }
        if ((uVar26 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(double *)((param_3->CachedPositions).AllocatorInstance.Data + lVar19 + 8) = (double)fVar4;
        uVar26 = 0;
        if ((int)uVar13 < (int)local_330[1].ComparisonIndex.Value) {
          uVar26 = uVar20;
        }
        if ((uVar26 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar4 = *(float *)((longlong)*local_330 + lVar28 * 4);
        uVar26 = 0;
        if ((int)uVar13 < (param_3->CachedPositions).ArrayNum) {
          uVar26 = uVar20;
        }
        if ((uVar26 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(double *)((param_3->CachedPositions).AllocatorInstance.Data + lVar19 + 0x10) =
             (double)fVar4;
        if (bVar7) {
          uVar26 = 0;
          if ((int)uVar13 < (int)local_328[1].ComparisonIndex.Value) {
            uVar26 = uVar20;
          }
          if ((uVar26 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar4 = *(float *)((longlong)*local_328 + lVar28 * 4);
          uVar26 = 0;
          if ((int)uVar13 < (param_3->CachedVelocities).ArrayNum) {
            uVar26 = uVar20;
          }
          if ((uVar26 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(double *)((param_3->CachedVelocities).AllocatorInstance.Data + lVar19) = (double)fVar4;
          uVar26 = 0;
          if ((int)uVar13 < (int)pFVar29[1].ComparisonIndex.Value) {
            uVar26 = uVar20;
          }
          if ((uVar26 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar4 = *(float *)((longlong)*pFVar29 + lVar28 * 4);
          uVar26 = 0;
          if ((int)uVar13 < (param_3->CachedVelocities).ArrayNum) {
            uVar26 = uVar20;
          }
          if ((uVar26 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(double *)((param_3->CachedVelocities).AllocatorInstance.Data + lVar19 + 8) =
               (double)fVar4;
          uVar26 = 0;
          if ((int)uVar13 < (int)local_318[1].ComparisonIndex.Value) {
            uVar26 = uVar20;
          }
          if ((uVar26 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar4 = *(float *)((longlong)*local_318 + lVar28 * 4);
          uVar26 = 0;
          if ((int)uVar13 < (param_3->CachedVelocities).ArrayNum) {
            uVar26 = uVar20;
          }
          if ((uVar26 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(double *)((param_3->CachedVelocities).AllocatorInstance.Data + lVar19 + 0x10) =
               (double)fVar4;
        }
        uVar13 = uVar13 + 1;
        lVar28 = lVar28 + 1;
        lVar19 = lVar19 + 0x18;
        lVar25 = lVar25 + 4;
      } while (lVar28 < (longlong)local_2e4._4_8_);
    }
  }
  TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
           *)&param_3->CachedReferenceSpaceTransforms);
  uVar13 = local_160.NumBits;
  iStack_2d0 = 0;
  uStack_2cc = 1;
  local_2b8 = 0;
  uStack_2bc = 0;
  if (local_160.NumBits != 0) {
    FVar23 = (ForElementType<unsigned_int>)(local_248 + 0xe8);
    if (local_160.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar23 = local_160.AllocatorInstance.SecondaryData;
    }
    uVar26 = *(uint *)FVar23;
    local_2b8 = 0;
    while (uVar26 == 0) {
      lVar19 = (longlong)iStack_2d0;
      local_2b8 = local_2b8 + 0x20;
      iStack_2d0 = iStack_2d0 + 1;
      uStack_2bc = local_160.NumBits;
      if ((int)((local_160.NumBits - 1U) + ((int)(local_160.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iStack_2d0) goto LAB_14dc07130;
      uVar26 = *(uint *)((longlong)FVar23 + (lVar19 + 1) * 4);
    }
    uStack_2cc = -uVar26 & uVar26;
    uVar2 = (ulonglong)uStack_2cc * 2 + 1;
    lVar19 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_2e8 = (int)lVar19;
    uStack_2bc = local_2b8 + -1 + local_2e8;
    if (local_160.NumBits < (int)uStack_2bc) {
      uStack_2bc = local_160.NumBits;
    }
  }
LAB_14dc07130:
  local_2e4._12_8_ = local_248 + 0xd8;
  uStack_2b4 = local_24c;
  local_2c8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_248 + 0xe8);
  iStack_2b0 = local_168 - local_13c;
  uVar26 = local_160.NumBits & 0xffffffe0;
  uStack_2c0 = 0xffffffff;
  bVar6 = (byte)local_160.NumBits;
  TStack_2a0.CurrentBitIndex = uStack_2bc;
  TStack_2a0.UnvisitedBitMask = 0xffffffff;
  TStack_2a0._padding_ = CONCAT44(uStack_2cc,iStack_2d0);
  iVar17 = local_160.NumBits >> 5;
  TStack_2a0._28_4_ = local_24c;
  TStack_2a0.BaseBitIndex = local_2b8;
  uStack_280 = CONCAT44(uStack_2ac,iStack_2b0);
  local_2a8 = (longlong *)local_2e4._12_8_;
  TStack_2a0.Array = local_2c8;
  if ((local_160.NumBits < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar13 != local_160.NumBits) {
    puVar22 = (uint *)(local_248 + 0xe8);
    if (local_160.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      puVar22 = (uint *)local_160.AllocatorInstance.SecondaryData;
    }
    uVar13 = -1 << (bVar6 & 0x1f) & puVar22[iVar17];
    while (uVar13 == 0) {
      lVar19 = (longlong)iVar17;
      uVar26 = uVar26 + 0x20;
      iVar17 = iVar17 + 1;
      uVar13 = local_160.NumBits;
      if ((int)((local_160.NumBits - 1U) + ((int)(local_160.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iVar17) goto LAB_14dc07270;
      uVar13 = puVar22[lVar19 + 1];
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar13 = (uVar26 - 1) + (int)lVar19;
    if (local_160.NumBits < (int)uVar13) {
      uVar13 = local_160.NumBits;
    }
  }
LAB_14dc07270:
  while( true ) {
    plVar10 = local_2a8;
    if ((int)local_2a8[1] - *(int *)((longlong)local_2a8 + 0x34) != (int)uStack_280) {
      `TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_347);
    }
    if (((TStack_2a0.CurrentBitIndex == uVar13) &&
        (TStack_2a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_248 + 0xe8))) &&
       (plVar10 == (longlong *)(local_248 + 0xd8))) break;
    lVar19 = *plVar10;
    lVar25 = (longlong)TStack_2a0.CurrentBitIndex * 0x80;
    if (*(uint *)(lVar25 + lVar19) == ReferenceTransformsName.ComparisonIndex.Value) {
      local_344 = *(undefined4 *)(lVar25 + 4 + lVar19);
      local_278 = &local_344;
      local_270 = lVar19 + 0x10 + lVar25;
      TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_&&,UE::Math::TTransform<double>_const_&>_>
                ((TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                  *)&param_3->CachedReferenceSpaceTransforms,
                 (TPairInitializer<int_&&,UE::Math::TTransform<double>_const_&> *)local_2e4,
                 (bool *)&local_278);
    }
    TStack_2a0.UnvisitedBitMask = TStack_2a0.UnvisitedBitMask & ~TStack_2a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2a0);
  }
  FCacheEvaluationResult::~FCacheEvaluationResult((FCacheEvaluationResult *)local_248);
  if (local_310.EvaluationIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.EvaluationIndices.AllocatorInstance.Data);
  }
  local_c8 = 0;
  if (local_d0 != (void *)0x0) {
    FMemory::Free(local_d0);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_118 + 8));
  return;
}

// PlaybackPreSolve @ 14dc085e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Chaos::FClothingCacheSchema::PlaybackPreSolve
          (UChaosCache *param_1,double param_2,FPlaybackTickRecord *param_3,
          FClothingSimulationSolver *param_4)

{
  longlong lVar1;
  double *pdVar2;
  TVector<float,3> *pTVar3;
  FEvolution *pFVar4;
  FClothingSimulationCloth *this;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  FName FVar12;
  FName FVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  longlong *plVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar20;
  TVector<float,3> *pTVar21;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar22;
  FSolverParticlesRange *pFVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  FName *pFVar27;
  FClothingSimulationCloth **ppFVar28;
  undefined1 *puVar29;
  FName *pFVar30;
  FName *pFVar31;
  longlong lVar32;
  uint uVar33;
  FName *pFVar34;
  float *pfVar35;
  FName *pFVar36;
  FName *pFVar37;
  longlong lVar38;
  FName *pFVar39;
  longlong lVar40;
  undefined4 uVar41;
  double dVar42;
  double dVar54;
  undefined1 auVar43 [16];
  double dVar55;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar56;
  double dVar57;
  double dVar65;
  undefined1 auVar58 [16];
  double dVar66;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  double dVar76;
  undefined1 auVar77 [16];
  double dVar81;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auStack_468 [32];
  longlong local_448;
  longlong local_440;
  undefined1 local_438 [4];
  int local_434;
  FName *local_430;
  TBitArray<FDefaultBitArrayAllocator> *local_428;
  FName *local_420;
  FName *local_418;
  FName *local_410;
  FName *local_408;
  FName *local_400;
  int local_3f8;
  int iStack_3f4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3f0;
  FCacheEvaluationContext local_3d0;
  FClothingSimulationSolver *local_3a8;
  longlong *local_3a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_398;
  undefined8 uStack_378;
  TArrayView<Chaos::FClothingSimulationCloth_const_*_const,int> local_370;
  undefined1 local_360 [40];
  int local_338;
  undefined4 uStack_334;
  double local_330;
  double local_328;
  double local_320;
  undefined1 local_318 [16];
  double local_308;
  double local_300;
  double dStack_2f8;
  double local_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  longlong local_2b0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2a8;
  undefined1 local_2a0 [16];
  TArrayView<Chaos::TVector<float,3>,int> local_288;
  undefined1 local_278 [208];
  int local_1a8;
  longlong local_1a0;
  int local_198;
  TBitArray<FDefaultBitArrayAllocator> local_190;
  int local_16c;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_468;
  pFVar37 = (FName *)0x0;
  local_3d0.EvaluationIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3d0.EvaluationIndices.ArrayNum = 0;
  local_3d0.EvaluationIndices.ArrayMax = 0;
  local_3d0.bEvaluateTransform = false;
  local_3d0.bEvaluateCurves = false;
  local_3d0.bEvaluateEvents = false;
  local_3d0.bEvaluateChannels = true;
  local_3d0.bEvaluateNamedTransforms = true;
  local_3d0.TickRecord = param_3;
  local_3a8 = param_4;
  UChaosCache::Evaluate
            (param_1,(FCacheEvaluationResult *)local_278,&local_3d0,
             (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0);
  FVar12 = VelocityXName;
  uVar17 = ::GetTypeHash(VelocityXName.ComparisonIndex.Value);
  FVar13 = VelocityYName;
  pFVar27 = pFVar37;
  if (local_278._144_4_ != local_278._188_4_) {
    puVar29 = local_278 + 0xc0;
    if ((undefined1 *)local_278._200_8_ != (undefined1 *)0x0) {
      puVar29 = (undefined1 *)local_278._200_8_;
    }
    uVar17 = *(uint *)(puVar29 + (ulonglong)(local_1a8 - 1U & FVar12.Number + uVar17) * 4);
    while ((pFVar27 = pFVar37, uVar17 != 0xffffffff &&
           (pFVar27 = (FName *)((longlong)(int)uVar17 * 0x20 + local_278._136_8_),
           *pFVar27 != FVar12))) {
      uVar17 = pFVar27[3].ComparisonIndex.Value;
    }
  }
  pFVar36 = pFVar27 + 1;
  if (pFVar27 == (FName *)0x0) {
    pFVar36 = pFVar37;
  }
  local_430 = pFVar36;
  uVar17 = ::GetTypeHash(VelocityYName.ComparisonIndex.Value);
  FVar12 = VelocityZName;
  pFVar27 = pFVar37;
  if (local_278._144_4_ != local_278._188_4_) {
    puVar29 = local_278 + 0xc0;
    if ((undefined1 *)local_278._200_8_ != (undefined1 *)0x0) {
      puVar29 = (undefined1 *)local_278._200_8_;
    }
    uVar17 = *(uint *)(puVar29 + (ulonglong)(local_1a8 - 1U & FVar13.Number + uVar17) * 4);
    while ((pFVar27 = pFVar37, uVar17 != 0xffffffff &&
           (pFVar27 = (FName *)((longlong)(int)uVar17 * 0x20 + local_278._136_8_),
           *pFVar27 != FVar13))) {
      uVar17 = pFVar27[3].ComparisonIndex.Value;
    }
  }
  pFVar39 = pFVar27 + 1;
  if (pFVar27 == (FName *)0x0) {
    pFVar39 = pFVar37;
  }
  local_420 = pFVar39;
  uVar17 = ::GetTypeHash(VelocityZName.ComparisonIndex.Value);
  FVar13 = PositionXName;
  pFVar27 = pFVar37;
  if (local_278._144_4_ != local_278._188_4_) {
    puVar29 = local_278 + 0xc0;
    if ((undefined1 *)local_278._200_8_ != (undefined1 *)0x0) {
      puVar29 = (undefined1 *)local_278._200_8_;
    }
    uVar17 = *(uint *)(puVar29 + (ulonglong)(local_1a8 - 1U & FVar12.Number + uVar17) * 4);
    while ((pFVar27 = pFVar37, uVar17 != 0xffffffff &&
           (pFVar27 = (FName *)((longlong)(int)uVar17 * 0x20 + local_278._136_8_),
           *pFVar27 != FVar12))) {
      uVar17 = pFVar27[3].ComparisonIndex.Value;
    }
  }
  pFVar31 = pFVar27 + 1;
  if (pFVar27 == (FName *)0x0) {
    pFVar31 = pFVar37;
  }
  local_418 = pFVar31;
  uVar17 = ::GetTypeHash(PositionXName.ComparisonIndex.Value);
  FVar12 = PositionYName;
  pFVar27 = pFVar37;
  if (local_278._144_4_ != local_278._188_4_) {
    puVar29 = local_278 + 0xc0;
    if ((undefined1 *)local_278._200_8_ != (undefined1 *)0x0) {
      puVar29 = (undefined1 *)local_278._200_8_;
    }
    uVar17 = *(uint *)(puVar29 + (ulonglong)(local_1a8 - 1U & FVar13.Number + uVar17) * 4);
    while ((pFVar27 = pFVar37, uVar17 != 0xffffffff &&
           (pFVar27 = (FName *)((longlong)(int)uVar17 * 0x20 + local_278._136_8_),
           *pFVar27 != FVar13))) {
      uVar17 = pFVar27[3].ComparisonIndex.Value;
    }
  }
  pFVar34 = pFVar27 + 1;
  if (pFVar27 == (FName *)0x0) {
    pFVar34 = pFVar37;
  }
  local_410 = pFVar34;
  uVar17 = ::GetTypeHash(PositionYName.ComparisonIndex.Value);
  FVar13 = PositionZName;
  pFVar27 = pFVar37;
  if (local_278._144_4_ != local_278._188_4_) {
    puVar29 = local_278 + 0xc0;
    if ((undefined1 *)local_278._200_8_ != (undefined1 *)0x0) {
      puVar29 = (undefined1 *)local_278._200_8_;
    }
    uVar17 = *(uint *)(puVar29 + (ulonglong)(local_1a8 - 1U & FVar12.Number + uVar17) * 4);
    while ((pFVar27 = pFVar37, uVar17 != 0xffffffff &&
           (pFVar27 = (FName *)((longlong)(int)uVar17 * 0x20 + local_278._136_8_),
           *pFVar27 != FVar12))) {
      uVar17 = pFVar27[3].ComparisonIndex.Value;
    }
  }
  pFVar30 = pFVar27 + 1;
  if (pFVar27 == (FName *)0x0) {
    pFVar30 = pFVar37;
  }
  local_408 = pFVar30;
  uVar17 = ::GetTypeHash(PositionZName.ComparisonIndex.Value);
  if (local_278._144_4_ != local_278._188_4_) {
    puVar29 = local_278 + 0xc0;
    if ((undefined1 *)local_278._200_8_ != (undefined1 *)0x0) {
      puVar29 = (undefined1 *)local_278._200_8_;
    }
    uVar17 = *(uint *)(puVar29 + (ulonglong)(local_1a8 - 1U & FVar13.Number + uVar17) * 4);
    while (uVar17 != 0xffffffff) {
      pFVar27 = (FName *)((longlong)(int)uVar17 * 0x20 + local_278._136_8_);
      if (*pFVar27 == FVar13) goto LAB_14dc08992;
      uVar17 = pFVar27[3].ComparisonIndex.Value;
    }
  }
  pFVar27 = (FName *)0x0;
LAB_14dc08992:
  local_400 = pFVar27 + 1;
  if (pFVar27 == (FName *)0x0) {
    local_400 = (FName *)0x0;
  }
  local_3f8 = local_278._16_4_;
  iStack_3f4 = local_278._20_4_;
  if ((((pFVar36 != (FName *)0x0) && (pFVar39 != (FName *)0x0)) && (pFVar31 != (FName *)0x0)) &&
     (((pFVar34 != (FName *)0x0 && (pFVar30 != (FName *)0x0)) &&
      ((local_400 != (FName *)0x0 && ((int)local_278._16_8_ != 0)))))) {
    pTVar20 = FClothingSimulationSolver::GetParticleXsView(param_4,&local_288,0);
    pTVar3 = pTVar20->DataPtr;
    pTVar21 = FClothingSimulationSolver::GetParticleVs(param_4,0);
    pFVar4 = (param_4->Evolution).Ptr;
    if (pFVar4 == (FEvolution *)0x0) {
      local_434 = (int)(((param_4->PBDEvolution).Ptr)->MParticles)._padding_;
    }
    else {
      local_434 = (int)(pFVar4->Particles)._padding_;
    }
    uVar17 = 0;
    local_428 = (TBitArray<FDefaultBitArrayAllocator> *)pTVar21;
    if (0 < local_3f8) {
      lVar32 = 0;
      lVar38 = 0;
      do {
        uVar33 = ~uVar17 >> 0x1f;
        uVar18 = 0;
        if ((int)uVar17 < (int)local_278._16_8_) {
          uVar18 = uVar33;
        }
        if (uVar18 == 0) {
          local_440 = (longlong)(int)local_278._16_8_;
          local_448 = (longlong)(int)uVar17;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        auVar47._4_4_ = *(int *)(local_278._8_8_ + lVar38);
        if ((local_434 <= auVar47._4_4_) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("ParticleIndex < NumParticles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingCacheSchema.cpp"
                                ,0x62,L""), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar18 = local_430[1].ComparisonIndex.Value;
        uVar19 = 0;
        if ((int)uVar17 < (int)uVar18) {
          uVar19 = uVar33;
        }
        if (uVar19 == 0) {
          local_448 = (longlong)(int)uVar17;
          local_440 = (longlong)(int)uVar18;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        *(undefined4 *)(pTVar21 + auVar47._4_4_) =
             *(undefined4 *)((longlong)*local_430 + lVar32 * 4);
        uVar18 = local_420[1].ComparisonIndex.Value;
        uVar19 = 0;
        if ((int)uVar17 < (int)uVar18) {
          uVar19 = uVar33;
        }
        if (uVar19 == 0) {
          local_448 = (longlong)(int)uVar17;
          local_440 = (longlong)(int)uVar18;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        *(undefined4 *)&pTVar21[auVar47._4_4_].field_0x4 =
             *(undefined4 *)((longlong)*local_420 + lVar32 * 4);
        uVar18 = local_418[1].ComparisonIndex.Value;
        uVar19 = 0;
        if ((int)uVar17 < (int)uVar18) {
          uVar19 = uVar33;
        }
        if (uVar19 == 0) {
          local_448 = (longlong)(int)uVar17;
          local_440 = (longlong)(int)uVar18;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        *(undefined4 *)&pTVar21[auVar47._4_4_].field_0x8 =
             *(undefined4 *)((longlong)*local_418 + lVar32 * 4);
        uVar18 = local_410[1].ComparisonIndex.Value;
        uVar19 = 0;
        if ((int)uVar17 < (int)uVar18) {
          uVar19 = uVar33;
        }
        if (uVar19 == 0) {
          local_448 = (longlong)(int)uVar17;
          local_440 = (longlong)(int)uVar18;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        *(undefined4 *)(pTVar3 + auVar47._4_4_) = *(undefined4 *)((longlong)*local_410 + lVar32 * 4)
        ;
        uVar18 = local_408[1].ComparisonIndex.Value;
        uVar19 = 0;
        if ((int)uVar17 < (int)uVar18) {
          uVar19 = uVar33;
        }
        if (uVar19 == 0) {
          local_448 = (longlong)(int)uVar17;
          local_440 = (longlong)(int)uVar18;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        *(undefined4 *)&pTVar3[auVar47._4_4_].field_0x4 =
             *(undefined4 *)((longlong)*local_408 + lVar32 * 4);
        uVar18 = local_400[1].ComparisonIndex.Value;
        uVar19 = 0;
        if ((int)uVar17 < (int)uVar18) {
          uVar19 = uVar33;
        }
        if (uVar19 == 0) {
          local_448 = (longlong)(int)uVar17;
          local_440 = (longlong)(int)uVar18;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        uVar17 = uVar17 + 1;
        lVar38 = lVar38 + 4;
        lVar1 = lVar32 * 4;
        lVar32 = lVar32 + 1;
        *(undefined4 *)&pTVar3[auVar47._4_4_].field_0x8 =
             *(undefined4 *)((longlong)*local_400 + lVar1);
        param_4 = local_3a8;
      } while (lVar32 < (int)_local_3f8);
    }
    pTVar14 = local_428;
    FClothingSimulationSolver::GetCloths(param_4,&local_370);
    local_3f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_278 + 0xe8);
    local_3f0._padding_._0_4_ = 0;
    local_3f0._padding_._4_4_ = 1;
    local_3f0.UnvisitedBitMask = 0xffffffff;
    local_3f0.CurrentBitIndex = 0;
    local_3f0.BaseBitIndex = 0;
    if (local_190.NumBits != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3f0);
    }
    TStack_398._padding_ = CONCAT44(local_3f0._padding_._4_4_,(undefined4)local_3f0._padding_);
    local_3a0 = (longlong *)(local_278 + 0xd8);
    TStack_398.CurrentBitIndex = local_3f0.CurrentBitIndex;
    TStack_398.UnvisitedBitMask = local_3f0.UnvisitedBitMask;
    TStack_398._28_4_ = local_3f0._28_4_;
    TStack_398.BaseBitIndex = local_3f0.BaseBitIndex;
    local_338 = local_198 - local_16c;
    local_360._16_8_ = local_3f0.Array;
    uStack_378 = CONCAT44(uStack_334,local_338);
    TStack_398.Array = local_3f0.Array;
    local_360._0_8_ = local_3a0;
    local_360._8_8_ = TStack_398._padding_;
    local_360._24_8_ = TStack_398._16_8_;
    local_360._32_8_ = TStack_398._24_8_;
    pTVar22 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_360,
                         (TBitArray<FDefaultBitArrayAllocator> *)(local_278 + 0xe8),
                         local_190.NumBits);
    uVar19 = _UNK_15061cc8c;
    uVar33 = _UNK_15061cc88;
    uVar18 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar17 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    local_2b0 = pTVar22->_padding_;
    local_428 = pTVar22->Array;
    auVar47._0_4_ = pTVar22->UnvisitedBitMask;
    auVar47._4_4_ = pTVar22->CurrentBitIndex;
    auVar47._8_4_ = pTVar22->BaseBitIndex;
    auVar47._12_4_ = *(undefined4 *)&pTVar22->field_0x1c;
    local_430 = (FName *)CONCAT44(local_430._4_4_,auVar47._4_4_);
    dVar76 = __real_3f1a36e2e0000000;
    pTStack_2a8 = local_428;
    local_2a0 = auVar47;
    while( true ) {
      plVar15 = local_3a0;
      if ((int)local_3a0[1] - *(int *)((longlong)local_3a0 + 0x34) != (int)uStack_378) {
        local_438[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_438);
      }
      if (((TStack_398.CurrentBitIndex == auVar47._4_4_) && (TStack_398.Array == local_428)) &&
         (plVar15 == (longlong *)(local_278 + 0xd8))) break;
      lVar32 = *plVar15;
      lVar38 = (longlong)TStack_398.CurrentBitIndex * 0x80;
      if (*(uint *)(lVar38 + lVar32) == ReferenceTransformsName.ComparisonIndex.Value) {
        for (ppFVar28 = local_370.DataPtr; ppFVar28 != local_370.DataPtr + local_370.ArrayNum;
            ppFVar28 = ppFVar28 + 1) {
          this = *ppFVar28;
          if (this->GroupId == *(uint *)(lVar38 + 4 + lVar32)) {
            if (this != (FClothingSimulationCloth *)0x0) {
              lVar1 = lVar38 + lVar32;
              pdVar2 = (double *)(lVar38 + 0x40 + lVar32);
              dVar42 = *(double *)&(this->ReferenceSpaceTransform).field_0x30 - *pdVar2;
              dVar54 = *(double *)&(this->ReferenceSpaceTransform).field_0x38 - pdVar2[1];
              pdVar2 = (double *)(lVar38 + 0x30 + lVar32);
              dVar56 = *(double *)&(this->ReferenceSpaceTransform).field_0x20 - *pdVar2;
              dVar65 = *(double *)&(this->ReferenceSpaceTransform).field_0x28 - pdVar2[1];
              auVar43._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) & uVar18,
                                    SUB84(dVar42,0) & uVar17);
              auVar43._8_4_ = SUB84(dVar54,0) & uVar33;
              auVar43._12_4_ = (uint)((ulonglong)dVar54 >> 0x20) & uVar19;
              lVar40 = -(ulonglong)(dVar76 < auVar43._8_8_);
              auVar58._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) & uVar18,
                                    SUB84(dVar56,0) & uVar17);
              auVar58._8_4_ = SUB84(dVar65,0) & uVar33;
              auVar58._12_4_ = (uint)((ulonglong)dVar65 >> 0x20) & uVar19;
              auVar75._8_4_ = (int)lVar40;
              auVar75._0_8_ = -(ulonglong)(dVar76 < auVar43._0_8_);
              auVar75._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
              uVar24 = movmskpd((int)ppFVar28,auVar75);
              auVar68._8_8_ = -(ulonglong)(dVar76 < auVar58._8_8_);
              auVar68._0_8_ = -(ulonglong)(dVar76 < auVar58._0_8_);
              auVar47._4_4_ = movmskpd(local_370.ArrayNum,auVar68);
              local_330 = dVar76;
              if ((uVar24 & 0x3fffffff) == 0 && auVar47._4_4_ == 0) {
                dVar42 = *(double *)&(this->ReferenceSpaceTransform).field_0x10;
                dVar54 = *(double *)&(this->ReferenceSpaceTransform).field_0x18;
                dVar56 = *(double *)&(this->ReferenceSpaceTransform).field_0x8;
                dVar65 = dVar42 - *(double *)(lVar1 + 0x20);
                dVar55 = dVar54 - *(double *)(lVar1 + 0x28);
                dVar42 = dVar42 + *(double *)(lVar1 + 0x20);
                dVar54 = dVar54 + *(double *)(lVar1 + 0x28);
                dVar57 = *(double *)&this->ReferenceSpaceTransform - *(double *)(lVar1 + 0x10);
                dVar66 = dVar56 - *(double *)(lVar1 + 0x18);
                dVar73 = *(double *)&this->ReferenceSpaceTransform + *(double *)(lVar1 + 0x10);
                dVar56 = dVar56 + *(double *)(lVar1 + 0x18);
                auVar44._0_8_ =
                     (double)CONCAT44((uint)((ulonglong)dVar65 >> 0x20) & uVar18,
                                      SUB84(dVar65,0) & uVar17);
                auVar44._8_4_ = SUB84(dVar55,0) & uVar33;
                auVar44._12_4_ = (uint)((ulonglong)dVar55 >> 0x20) & uVar19;
                auVar59._0_8_ =
                     (double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) & uVar18,
                                      SUB84(dVar57,0) & uVar17);
                auVar59._8_4_ = SUB84(dVar66,0) & uVar33;
                auVar59._12_4_ = (uint)((ulonglong)dVar66 >> 0x20) & uVar19;
                lVar40 = -(ulonglong)(dVar76 < auVar44._8_8_);
                auVar6._8_4_ = (int)lVar40;
                auVar6._0_8_ = -(ulonglong)(dVar76 < auVar44._0_8_);
                auVar6._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
                iVar25 = movmskpd(0,auVar6);
                auVar74._0_8_ =
                     (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) & uVar18,
                                      SUB84(dVar42,0) & uVar17);
                auVar74._8_4_ = SUB84(dVar54,0) & uVar33;
                auVar74._12_4_ = (uint)((ulonglong)dVar54 >> 0x20) & uVar19;
                lVar40 = -(ulonglong)(dVar76 < auVar59._8_8_);
                auVar7._8_4_ = (int)lVar40;
                auVar7._0_8_ = -(ulonglong)(dVar76 < auVar59._0_8_);
                auVar7._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
                uVar24 = movmskpd(auVar47._4_4_,auVar7);
                uVar26 = iVar25 << 2 | uVar24;
                local_328 = dVar76;
                if (uVar26 != 0) {
                  lVar40 = -(ulonglong)(dVar76 < auVar74._8_8_);
                  auVar8._8_4_ = (int)lVar40;
                  auVar8._0_8_ = -(ulonglong)(dVar76 < auVar74._0_8_);
                  auVar8._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
                  uVar26 = movmskpd(uVar26,auVar8);
                  auVar69._8_8_ =
                       -(ulonglong)
                        (dVar76 < (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) & uVar19,
                                                   SUB84(dVar56,0) & uVar33));
                  auVar69._0_8_ =
                       -(ulonglong)
                        (dVar76 < (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) & uVar18,
                                                   SUB84(dVar73,0) & uVar17));
                  uVar24 = movmskpd(uVar24,auVar69);
                  if ((uVar26 & 0x3fffffff) != 0 || uVar24 != 0) goto LAB_14dc09015;
                }
                pdVar2 = (double *)(lVar38 + 0x60 + lVar32);
                dVar42 = *(double *)&(this->ReferenceSpaceTransform).field_0x50 - *pdVar2;
                dVar54 = *(double *)&(this->ReferenceSpaceTransform).field_0x58 - pdVar2[1];
                pdVar2 = (double *)(lVar38 + 0x50 + lVar32);
                dVar56 = *(double *)&(this->ReferenceSpaceTransform).field_0x40 - *pdVar2;
                dVar65 = *(double *)&(this->ReferenceSpaceTransform).field_0x48 - pdVar2[1];
                auVar45._0_8_ =
                     (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) & uVar18,
                                      SUB84(dVar42,0) & uVar17);
                auVar45._8_4_ = SUB84(dVar54,0) & uVar33;
                auVar45._12_4_ = (uint)((ulonglong)dVar54 >> 0x20) & uVar19;
                lVar32 = -(ulonglong)(dVar76 < auVar45._8_8_);
                auVar60._0_8_ =
                     (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) & uVar18,
                                      SUB84(dVar56,0) & uVar17);
                auVar60._8_4_ = SUB84(dVar65,0) & uVar33;
                auVar60._12_4_ = (uint)((ulonglong)dVar65 >> 0x20) & uVar19;
                auVar9._8_4_ = (int)lVar32;
                auVar9._0_8_ = -(ulonglong)(dVar76 < auVar45._0_8_);
                auVar9._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
                uVar26 = movmskpd(0,auVar9);
                auVar70._8_8_ = -(ulonglong)(dVar76 < auVar60._8_8_);
                auVar70._0_8_ = -(ulonglong)(dVar76 < auVar60._0_8_);
                auVar47._4_4_ = movmskpd(uVar24,auVar70);
                local_320 = dVar76;
                if ((uVar26 & 0x3fffffff) == 0 && auVar47._4_4_ == 0) goto LAB_14dc093b2;
              }
LAB_14dc09015:
              auVar47._4_4_ = FClothingSimulationCloth::GetParticleRangeId(this,param_4);
              pFVar4 = (param_4->Evolution).Ptr;
              if (pFVar4 != (FEvolution *)0x0) {
                pFVar23 = Softs::FEvolution::GetSoftBodyParticles(pFVar4,auVar47._4_4_);
                auVar47._4_4_ = *(int *)&pFVar23->field_0x10;
              }
              UE::Math::TTransform<double>::GetRelativeTransform
                        ((TTransform<double> *)&this->ReferenceSpaceTransform,&local_148,
                         (TTransform<double> *)(lVar1 + 0x10));
              iVar25 = FClothingSimulationCloth::GetNumParticles(this,param_4);
              iVar25 = iVar25 + auVar47._4_4_;
              if ((local_434 < iVar25) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("GlobalOffset + NumClothParticles <= NumParticles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingCacheSchema.cpp"
                                      ,0x8c,L""), bVar16)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar32 = (longlong)auVar47._4_4_;
              if (lVar32 < iVar25) {
                pfVar35 = (float *)&pTVar3[lVar32].field_0x8;
                lVar38 = (longlong)pTVar14 - (longlong)pTVar3;
                lVar32 = iVar25 - lVar32;
                do {
                  dVar76 = *(double *)&(param_4->LocalSpaceLocation).field_0x8;
                  dVar42 = *(double *)&(param_4->LocalSpaceLocation).field_0x10;
                  dVar56 = local_148.Rotation.ZW.m128d_f64[1];
                  dVar73 = (double)((float)*(double *)&param_4->LocalSpaceLocation + pfVar35[-2]);
                  dVar54 = (double)((float)dVar76 + pfVar35[-1]);
                  local_308 = (double)((float)dVar42 + *pfVar35);
                  dVar67 = local_148.Rotation.XY.m128d_f64[0];
                  dVar57 = local_308 * local_148.Scale3D.ZW.m128d_f64[0];
                  dVar66 = local_148.Scale3D.ZW.m128d_f64[1] * 0.0;
                  dVar65 = local_148.Scale3D.XY.m128d_f64[0] * dVar73;
                  dVar55 = local_148.Scale3D.XY.m128d_f64[1] * dVar54;
                  uVar41 = (undefined4)((ulonglong)dVar55 >> 0x20);
                  local_318._8_4_ = SUB84(dVar54,0);
                  local_318._0_8_ = dVar73;
                  local_318._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
                  dVar73 = local_148.Rotation.XY.m128d_f64[1];
                  dVar54 = local_148.Rotation.ZW.m128d_f64[0];
                  auVar82._8_4_ = SUB84(dVar55,0);
                  auVar82._0_8_ = dVar65;
                  auVar82._12_4_ = uVar41;
                  auVar46._8_4_ = SUB84(dVar55,0);
                  auVar46._0_8_ = dVar65;
                  auVar46._12_4_ = uVar41;
                  auVar83._0_8_ = auVar82._8_8_ * dVar67 - dVar73 * dVar65;
                  auVar83._8_8_ = dVar57 * dVar73 - dVar54 * dVar55;
                  auVar11._8_4_ = SUB84(dVar66,0);
                  auVar11._0_8_ = dVar57;
                  auVar11._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
                  auVar47 = blendpd(auVar46,auVar11,2);
                  auVar77._8_4_ = SUB84(auVar83._8_8_,0);
                  auVar77._0_8_ = auVar83._0_8_;
                  auVar77._12_4_ = (int)((ulonglong)auVar83._8_8_ >> 0x20);
                  auVar75 = blendpd((undefined1  [16])local_148.Rotation.XY.m128d_f64,
                                    (undefined1  [16])local_148.Rotation.ZW.m128d_f64,2);
                  auVar48._0_8_ = auVar47._0_8_ * dVar54 - auVar75._0_8_ * dVar57;
                  auVar48._8_8_ = auVar47._8_8_ * dVar56 - auVar75._8_8_ * dVar66;
                  auVar47 = blendpd(auVar83,auVar48,2);
                  dVar66 = auVar77._8_8_ + auVar77._8_8_;
                  dVar81 = auVar48._0_8_ + auVar48._0_8_;
                  auVar84._0_8_ = auVar47._0_8_ + auVar47._0_8_;
                  auVar84._8_8_ = auVar47._8_8_ + auVar47._8_8_;
                  auVar61._8_4_ = SUB84(dVar81,0);
                  auVar61._0_8_ = dVar66;
                  uVar41 = (undefined4)((ulonglong)dVar81 >> 0x20);
                  auVar61._12_4_ = uVar41;
                  auVar49._8_4_ = SUB84(dVar81,0);
                  auVar49._0_8_ = dVar66;
                  auVar49._12_4_ = uVar41;
                  auVar47 = blendpd(auVar49,auVar84,2);
                  auVar62._0_8_ = auVar61._8_8_ * dVar67 - dVar66 * dVar73;
                  auVar62._8_8_ = auVar84._0_8_ * dVar73 - dVar81 * dVar54;
                  auVar50._0_8_ = auVar47._0_8_ * dVar54 - auVar84._0_8_ * auVar75._0_8_;
                  auVar50._8_8_ = auVar47._8_8_ * dVar56 - auVar84._8_8_ * auVar75._8_8_;
                  auVar47 = blendpd(auVar62,auVar50,2);
                  local_300 = dVar66 * dVar56 + dVar65 + auVar62._8_8_ +
                              local_148.Translation.XY.m128d_f64[0];
                  dStack_2f8 = dVar81 * dVar56 + dVar55 + auVar50._0_8_ +
                               local_148.Translation.XY.m128d_f64[1];
                  local_2f0 = auVar84._0_8_ * dVar56 + dVar57 + auVar47._0_8_ +
                              local_148.Translation.ZW.m128d_f64[0];
                  pfVar35[-2] = (float)(local_300 - *(double *)&param_4->LocalSpaceLocation);
                  pfVar35[-1] = (float)(dStack_2f8 - dVar76);
                  *pfVar35 = (float)(local_2f0 - dVar42);
                  dVar76 = (double)*(float *)((longlong)pfVar35 + lVar38 + -8);
                  dVar42 = (double)*(float *)(lVar38 + -4 + (longlong)pfVar35);
                  local_2d8 = (double)*(float *)(lVar38 + (longlong)pfVar35);
                  dVar55 = local_148.Scale3D.XY.m128d_f64[0] * dVar76;
                  dVar57 = local_148.Scale3D.XY.m128d_f64[1] * dVar42;
                  local_2e8._8_4_ = SUB84(dVar42,0);
                  local_2e8._0_8_ = dVar76;
                  local_2e8._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
                  auVar78._8_4_ = SUB84(dVar57,0);
                  auVar78._0_8_ = dVar55;
                  uVar41 = (undefined4)((ulonglong)dVar57 >> 0x20);
                  auVar78._12_4_ = uVar41;
                  dVar65 = local_2d8 * local_148.Scale3D.ZW.m128d_f64[0];
                  dVar76 = local_148.Scale3D.ZW.m128d_f64[1] * 0.0;
                  auVar51._8_4_ = SUB84(dVar57,0);
                  auVar51._0_8_ = dVar55;
                  auVar51._12_4_ = uVar41;
                  auVar10._8_4_ = SUB84(dVar76,0);
                  auVar10._0_8_ = dVar65;
                  auVar10._12_4_ = (int)((ulonglong)dVar76 >> 0x20);
                  auVar47 = blendpd(auVar51,auVar10,2);
                  auVar75 = blendpd((undefined1  [16])local_148.Rotation.XY.m128d_f64,
                                    (undefined1  [16])local_148.Rotation.ZW.m128d_f64,2);
                  auVar79._0_8_ = auVar78._8_8_ * dVar67 - dVar73 * dVar55;
                  auVar79._8_8_ = dVar65 * dVar73 - dVar54 * dVar57;
                  auVar52._0_8_ = auVar47._0_8_ * dVar54 - auVar75._0_8_ * dVar65;
                  auVar52._8_8_ = auVar47._8_8_ * dVar56 - auVar75._8_8_ * dVar76;
                  dVar76 = auVar79._8_8_ + auVar79._8_8_;
                  dVar42 = auVar52._0_8_ + auVar52._0_8_;
                  uVar41 = (undefined4)((ulonglong)dVar42 >> 0x20);
                  auVar47 = blendpd(auVar79,auVar52,2);
                  auVar71._8_4_ = SUB84(dVar42,0);
                  auVar71._0_8_ = dVar76;
                  auVar71._12_4_ = uVar41;
                  auVar53._8_4_ = local_148.Rotation.ZW.m128d_f64[1]._0_4_;
                  auVar53._0_8_ = dVar56;
                  auVar53._12_4_ = local_148.Rotation.ZW.m128d_f64[1]._4_4_;
                  auVar80._0_8_ = auVar47._0_8_ + auVar47._0_8_;
                  auVar80._8_8_ = auVar47._8_8_ + auVar47._8_8_;
                  auVar63._8_4_ = SUB84(dVar42,0);
                  auVar63._0_8_ = dVar76;
                  auVar63._12_4_ = uVar41;
                  auVar47 = blendpd(auVar63,auVar80,2);
                  auVar72._0_8_ = auVar71._8_8_ * dVar67 - dVar73 * dVar76;
                  auVar72._8_8_ = auVar80._0_8_ * dVar73 - dVar54 * dVar42;
                  auVar64._0_8_ = auVar47._0_8_ * dVar54 - auVar75._0_8_ * auVar80._0_8_;
                  auVar64._8_8_ = auVar47._8_8_ * dVar56 - auVar75._8_8_ * auVar80._8_8_;
                  local_2d0 = dVar56 * dVar76 + dVar55 + auVar72._8_8_;
                  dStack_2c8 = auVar53._8_8_ * dVar42 + dVar57 + auVar64._0_8_;
                  *(float *)((longlong)pfVar35 + lVar38 + -8) = (float)local_2d0;
                  auVar47 = blendpd(auVar72,auVar64,2);
                  *(float *)(lVar38 + -4 + (longlong)pfVar35) = (float)dStack_2c8;
                  local_2c0 = dVar56 * auVar80._0_8_ + dVar65 + auVar47._0_8_;
                  *(float *)(lVar38 + (longlong)pfVar35) = (float)local_2c0;
                  pfVar35 = pfVar35 + 3;
                  lVar32 = lVar32 + -1;
                  dVar76 = __real_3f1a36e2e0000000;
                } while (lVar32 != 0);
              }
LAB_14dc093b2:
              auVar47._4_4_ = (int)local_430;
            }
            break;
          }
        }
      }
      TStack_398.UnvisitedBitMask = TStack_398.UnvisitedBitMask & ~TStack_398._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_398);
    }
  }
  FCacheEvaluationResult::~FCacheEvaluationResult((FCacheEvaluationResult *)local_278);
  if (local_3d0.EvaluationIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d0.EvaluationIndices.AllocatorInstance.Data);
  }
  return;
}

// RecordPostSolve @ 14dc0ab00

void __cdecl
Chaos::FClothingCacheSchema::RecordPostSolve
          (FClothingSimulationSolver *param_1,FPendingFrameWrite *param_2,double param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
  *this;
  TVector<float,3> *pTVar5;
  FEvolution *pFVar6;
  FClothingSimulationCloth *this_00;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar9;
  TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
  *this_01;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar15;
  FSolverParticlesRange *pFVar16;
  FScriptContainerElement *pFVar17;
  ulonglong uVar18;
  int local_188 [2];
  ForAnyElementType local_180;
  undefined8 local_178;
  ForAnyElementType local_170;
  undefined8 local_168;
  ForAnyElementType local_160;
  undefined8 local_158;
  ForAnyElementType local_150;
  undefined8 local_148;
  ForAnyElementType local_140;
  undefined8 local_138;
  ForAnyElementType local_130;
  int local_128;
  int local_124;
  uint local_120;
  uint local_11c;
  ulonglong local_118;
  longlong local_110;
  FScriptContainerElement *local_108;
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  TPairInitializer<FName_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&> local_e8;
  TVector<float,3> *local_d8;
  TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
  *local_d0;
  uint *local_c8;
  TRigidTransform<double,3> *local_c0;
  FName *local_b8;
  ForAnyElementType *local_b0;
  FName *local_a8;
  ForAnyElementType *local_a0;
  FName *local_98;
  ForAnyElementType *local_90;
  FName *local_88;
  ForAnyElementType *local_80;
  FName *local_78;
  ForAnyElementType *local_70;
  FName *local_68;
  ForAnyElementType *local_60;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_58;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_48;
  
  pFVar6 = (param_1->Evolution).Ptr;
  if (pFVar6 == (FEvolution *)0x0) {
    iVar11 = TPBDActiveView<Chaos::Softs::FSolverParticles>::GetActiveSize
                       (&((param_1->PBDEvolution).Ptr)->MParticlesActiveView);
  }
  else {
    iVar11 = Softs::FEvolution::NumActiveParticles(pFVar6);
  }
  if (0 < iVar11) {
    pTVar15 = FClothingSimulationSolver::GetParticleXsView(param_1,&local_58,0);
    local_e8.Value = (TArray<float,TSizedDefaultAllocator<32>_> *)pTVar15->DataPtr;
    pTVar15 = FClothingSimulationSolver::GetParticleVsView(param_1,&local_48,0);
    uVar18 = 0;
    pTVar1 = &param_2->PendingChannelsIndices;
    piVar2 = &(param_2->PendingChannelsIndices).ArrayMax;
    local_118 = 0;
    local_d8 = pTVar15->DataPtr;
    local_124 = 0;
    local_130.Data = (FScriptContainerElement *)0x0;
    local_128 = 0;
    local_140.Data = (FScriptContainerElement *)0x0;
    local_138 = 0;
    local_150.Data = (FScriptContainerElement *)0x0;
    local_148 = 0;
    local_160.Data = (FScriptContainerElement *)0x0;
    local_158 = 0;
    local_170.Data = (FScriptContainerElement *)0x0;
    local_168 = 0;
    local_180.Data = (FScriptContainerElement *)0x0;
    local_178 = 0;
    if (*piVar2 < iVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar11,&pTVar1->AllocatorInstance,(param_2->PendingChannelsIndices).ArrayNum,
                 piVar2);
    }
    if (local_124 < iVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar11,&local_130,local_128,&local_124);
    }
    if (local_138._4_4_ < iVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar11,&local_140,(int)local_138,(int *)((longlong)&local_138 + 4));
    }
    if (local_148._4_4_ < iVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar11,&local_150,(int)local_148,(int *)((longlong)&local_148 + 4));
    }
    if (local_158._4_4_ < iVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar11,&local_160,(int)local_158,(int *)((longlong)&local_158 + 4));
    }
    if (local_168._4_4_ < iVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar11,&local_170,(int)local_168,(int *)((longlong)&local_168 + 4));
    }
    if (local_178._4_4_ < iVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar11,&local_180,(int)local_178,(int *)((longlong)&local_178 + 4));
    }
    iVar11 = (param_1->Cloths).ArrayNum;
    pFVar17 = (param_1->Cloths).AllocatorInstance.Data;
    local_108 = pFVar17;
    if ((iVar11 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (0 < iVar11) {
      local_d0 = (TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                  *)&param_2->PendingNamedTransformData;
      local_110 = 0;
      do {
        this_01 = local_d0;
        iVar14 = (int)uVar18;
        if ((iVar14 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_00 = *(FClothingSimulationCloth **)pFVar17;
        local_11c = this_00->GroupId;
        local_120 = ReferenceTransformsName.ComparisonIndex.Value;
        local_c8 = &local_120;
        local_c0 = &this_00->ReferenceSpaceTransform;
        TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,UE::Math::TTransform<double>_const_&>_>
                  (this_01,(TPairInitializer<FName_const_&,UE::Math::TTransform<double>_const_&> *)
                           local_100,(bool *)&local_c8);
        iVar12 = FClothingSimulationCloth::GetParticleRangeId(this_00,param_1);
        iVar13 = FClothingSimulationCloth::GetNumParticles(this_00,param_1);
        pFVar6 = (param_1->Evolution).Ptr;
        if (pFVar6 != (FEvolution *)0x0) {
          pFVar16 = Softs::FEvolution::GetSoftBodyParticles(pFVar6,iVar12);
          iVar12 = *(int *)&pFVar16->field_0x10;
        }
        pTVar9 = local_e8.Value;
        iVar13 = iVar12 + iVar13;
        local_188[0] = iVar12;
        if (iVar12 < iVar13) {
          do {
            pTVar5 = local_d8 + iVar12;
            pFVar17 = (FScriptContainerElement *)
                      ((longlong)&pTVar9->AllocatorInstance + (longlong)iVar12 * 0xc);
            pFVar7 = (pTVar1->AllocatorInstance).Data;
            local_188[0] = iVar12;
            if (((pFVar7 <= (FScriptContainerElement *)local_188) &&
                ((FScriptContainerElement *)local_188 < pFVar7 + (longlong)*piVar2 * 4)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar14 = (param_2->PendingChannelsIndices).ArrayNum;
            if (iVar14 == *piVar2) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar1->AllocatorInstance,piVar2);
            }
            (param_2->PendingChannelsIndices).ArrayNum = iVar14 + 1;
            *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_188[0];
            if (((local_130.Data <= pTVar5) &&
                (pTVar5 < (TVector<float,3> *)(local_130.Data + (longlong)local_124 * 4))) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (local_128 == local_124) {
              local_128 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_130,&local_124);
            }
            iVar14 = local_128 + 1;
            puVar3 = &pTVar5->field_0x4;
            *(undefined4 *)(local_130.Data + (longlong)local_128 * 4) = *(undefined4 *)pTVar5;
            local_128 = iVar14;
            if (((local_140.Data <= puVar3) &&
                (puVar3 < local_140.Data + (longlong)local_138._4_4_ * 4)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar14 = (int)local_138;
            if ((int)local_138 == local_138._4_4_) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_140,(int *)((longlong)&local_138 + 4));
            }
            local_138 = CONCAT44(local_138._4_4_,iVar14 + 1);
            puVar4 = &pTVar5->field_0x8;
            *(undefined4 *)(local_140.Data + (longlong)iVar14 * 4) = *(undefined4 *)puVar3;
            if (((local_150.Data <= puVar4) &&
                (puVar4 < local_150.Data + (longlong)local_148._4_4_ * 4)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar14 = (int)local_148;
            if ((int)local_148 == local_148._4_4_) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_150,(int *)((longlong)&local_148 + 4));
            }
            local_148 = CONCAT44(local_148._4_4_,iVar14 + 1);
            *(undefined4 *)(local_150.Data + (longlong)iVar14 * 4) = *(undefined4 *)puVar4;
            if (((local_160.Data <= pFVar17) &&
                (pFVar17 < local_160.Data + (longlong)local_158._4_4_ * 4)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar14 = (int)local_158;
            if ((int)local_158 == local_158._4_4_) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_160,(int *)((longlong)&local_158 + 4));
            }
            local_158 = CONCAT44(local_158._4_4_,iVar14 + 1);
            pFVar7 = pFVar17 + 4;
            *(undefined4 *)(local_160.Data + (longlong)iVar14 * 4) = *(undefined4 *)pFVar17;
            if (((local_170.Data <= pFVar7) &&
                (pFVar7 < local_170.Data + (longlong)local_168._4_4_ * 4)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar14 = (int)local_168;
            if ((int)local_168 == local_168._4_4_) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_170,(int *)((longlong)&local_168 + 4));
            }
            local_168 = CONCAT44(local_168._4_4_,iVar14 + 1);
            pFVar17 = pFVar17 + 8;
            *(undefined4 *)(local_170.Data + (longlong)iVar14 * 4) = *(undefined4 *)pFVar7;
            if (((local_180.Data <= pFVar17) &&
                (pFVar17 < local_180.Data + (longlong)local_178._4_4_ * 4)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar14 = (int)local_178;
            if ((int)local_178 == local_178._4_4_) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_180,(int *)((longlong)&local_178 + 4));
            }
            local_178 = CONCAT44(local_178._4_4_,iVar14 + 1);
            *(undefined4 *)(local_180.Data + (longlong)iVar14 * 4) = *(undefined4 *)pFVar17;
            iVar12 = local_188[0] + 1;
          } while (iVar12 < iVar13);
          iVar14 = (int)local_118;
          local_188[0] = iVar12;
        }
        uVar18 = (ulonglong)(iVar14 + 1U);
        local_110 = local_110 + 1;
        pFVar17 = local_108 + 8;
        local_118 = uVar18;
        local_108 = pFVar17;
      } while ((int)(iVar14 + 1U) < iVar11);
    }
    local_b8 = &VelocityXName;
    this = &param_2->PendingChannelsData;
    local_b0 = &local_130;
    TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&>_>
              ((TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FName_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&>
                        *)(local_100 + 4),(bool *)&local_b8);
    local_a8 = &VelocityYName;
    local_a0 = &local_140;
    TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&>_>
              ((TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FName_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&>
                        *)local_f8,(bool *)&local_a8);
    local_98 = &VelocityZName;
    local_90 = &local_150;
    TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&>_>
              ((TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FName_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&>
                        *)(local_f8 + 4),(bool *)&local_98);
    local_88 = &PositionXName;
    local_80 = &local_160;
    TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&>_>
              ((TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FName_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&>
                        *)local_f0,(bool *)&local_88);
    local_78 = &PositionYName;
    local_70 = &local_170;
    TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&>_>
              ((TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FName_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&>
                        *)(local_f0 + 4),(bool *)&local_78);
    local_68 = &PositionZName;
    local_60 = &local_180;
    TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&>_>
              ((TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this,&local_e8,(bool *)&local_68);
    if (local_180.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data);
    }
    if (local_170.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data);
    }
    if (local_160.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data);
    }
    if (local_150.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data);
    }
    if (local_140.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data);
    }
    if ((TVector<float,3> *)local_130.Data != (TVector<float,3> *)0x0) {
      FMemory::Free(local_130.Data);
    }
  }
  return;
}

