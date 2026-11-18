// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 19

// StaticStruct @ 1463eab80

UScriptStruct * __cdecl FAnimNode_RandomPlayer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RandomPlayer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_RandomPlayer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer,(UObject *)pUVar1,
                         L"AnimNode_RandomPlayer");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_RandomPlayer.OuterSingleton;
}

// FAnimNode_RandomPlayer @ 146404cf0

FAnimNode_RandomPlayer * __thiscall
FAnimNode_RandomPlayer::FAnimNode_RandomPlayer(FAnimNode_RandomPlayer *this)

{
  this->_padding_ = (longlong)&___7FAnimNode_RandomPlayer__6B_;
  this->_padding_ = 0;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  (this->ValidEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidEntries).ArrayNum = 0;
  (this->ValidEntries).ArrayMax = 0;
  (this->NormalizedPlayChances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalizedPlayChances).ArrayNum = 0;
  (this->NormalizedPlayChances).ArrayMax = 0;
  (this->PlayData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayData).ArrayNum = 0;
  (this->PlayData).ArrayMax = 0;
  this->CurrentPlayDataIndex = 0;
  (this->ShuffleList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShuffleList).ArrayNum = 0;
  (this->ShuffleList).ArrayMax = 0;
  (this->RandomStream).InitialSeed = 0;
  (this->RandomStream).Seed = 0;
  this->BlendWeight = 0.0;
  this->bShuffleMode = false;
  return this;
}

// AdvanceToNextSequence @ 146415820

void __thiscall FAnimNode_RandomPlayer::AdvanceToNextSequence(FAnimNode_RandomPlayer *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  iVar4 = GetNextValidEntryIndex(this);
  uVar6 = this->CurrentPlayDataIndex + 1U & 0x80000001;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
  }
  this->CurrentPlayDataIndex = uVar6;
  uVar5 = 0;
  if ((int)uVar6 < (this->PlayData).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = (this->PlayData).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x38;
  uVar6 = this->CurrentPlayDataIndex + 1U & 0x80000001;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
  }
  uVar5 = 0;
  if ((int)uVar6 < (this->PlayData).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->PlayData).AllocatorInstance.Data;
  *(undefined4 *)(pFVar7 + 0x20) = 0x3f800000;
  FAlphaBlend::Reset((FAlphaBlend *)(*(longlong *)pFVar7 + 0x20));
  InitPlayData(this,(FRandomAnimPlayData *)(pFVar1 + (longlong)(int)uVar6 * 0x38),iVar4,0.0);
  return;
}

// BuildShuffleList @ 146418ec0

void __thiscall FAnimNode_RandomPlayer::BuildShuffleList(FAnimNode_RandomPlayer *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int local_58 [8];
  
  uVar10 = (this->ValidEntries).ArrayNum;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar1 = &(this->ShuffleList).ArrayMax;
  uVar11 = 0;
  uVar16 = 0;
  (this->ShuffleList).ArrayNum = 0;
  if (*piVar1 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar10,&(this->ShuffleList).AllocatorInstance,0,piVar1);
  }
  iVar2 = (this->ValidEntries).ArrayNum;
  local_58[0] = 0;
  if (0 < iVar2) {
    do {
      pFVar5 = (this->ShuffleList).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_58) &&
          ((FScriptContainerElement *)local_58 < pFVar5 + (longlong)*piVar1 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (this->ShuffleList).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->ShuffleList).AllocatorInstance,piVar1);
      }
      (this->ShuffleList).ArrayNum = iVar9 + 1;
      *(int *)((this->ShuffleList).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_58[0];
      local_58[0] = local_58[0] + 1;
    } while (local_58[0] < iVar2);
  }
  fVar7 = __real_3f800000;
  iVar9 = (this->ShuffleList).ArrayNum;
  iVar2 = iVar9 + -1;
  uVar13 = uVar11;
  if (0 < (longlong)iVar2) {
    do {
      iVar12 = (int)uVar13;
      iVar14 = iVar12;
      if (0 < iVar9) {
        uVar10 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
        (this->RandomStream).Seed = uVar10;
        iVar14 = (int)(((float)(uVar10 >> 9 | 0x3f800000) - fVar7) * (float)iVar9) + iVar12;
      }
      if ((iVar14 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0xce6,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar3 = (this->ShuffleList).ArrayNum;
      if (((iVar3 <= iVar12) || (iVar3 <= iVar14)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0xce7,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (iVar12 != iVar14) {
        pFVar5 = (this->ShuffleList).AllocatorInstance.Data;
        uVar4 = *(undefined4 *)(pFVar5 + uVar11 * 4);
        *(undefined4 *)(pFVar5 + uVar11 * 4) = *(undefined4 *)(pFVar5 + (longlong)iVar14 * 4);
        *(undefined4 *)(pFVar5 + (longlong)iVar14 * 4) = uVar4;
      }
      iVar9 = iVar9 + -1;
      uVar11 = uVar11 + 1;
      uVar13 = (ulonglong)(iVar12 + 1);
    } while ((longlong)uVar11 < (longlong)iVar2);
  }
  iVar2 = (this->ShuffleList).ArrayNum;
  if (1 < iVar2) {
    uVar10 = uVar16;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar10 = ~(iVar2 - 1U) >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(int *)((this->ShuffleList).AllocatorInstance.Data +
                (longlong)(this->ShuffleList).ArrayNum * 4 + -4) == param_1) {
      uVar15 = (this->ShuffleList).ArrayNum - 1;
      uVar10 = uVar15;
      if (0 < (int)uVar15) {
        uVar10 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
        (this->RandomStream).Seed = uVar10;
        uVar16 = (uint)(((float)(uVar10 >> 9 | 0x3f800000) - fVar7) * (float)(int)uVar15);
        uVar10 = uVar16;
      }
      if (((int)uVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0xce6,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar2 = (this->ShuffleList).ArrayNum;
      if (((iVar2 <= (int)uVar16) || (iVar2 <= (int)uVar15)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0xce7,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar16 != uVar15) {
        pFVar5 = (this->ShuffleList).AllocatorInstance.Data;
        uVar4 = *(undefined4 *)(pFVar5 + (longlong)(int)uVar16 * 4);
        *(undefined4 *)(pFVar5 + (longlong)(int)uVar16 * 4) =
             *(undefined4 *)(pFVar5 + (longlong)(int)uVar15 * 4);
        *(undefined4 *)(pFVar5 + (longlong)(int)uVar15 * 4) = uVar4;
      }
    }
  }
  return;
}

// ClearCachedBlendWeight @ 14641efc0

void __thiscall FAnimNode_RandomPlayer::ClearCachedBlendWeight(FAnimNode_RandomPlayer *this)

{
  this->BlendWeight = 0.0;
  return;
}

// Evaluate_AnyThread @ 14643d080

void __thiscall
FAnimNode_RandomPlayer::Evaluate_AnyThread(FAnimNode_RandomPlayer *this,FPoseContext *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  FAnimInstanceProxy *this_00;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FBoneContainer *pFVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  float local_res18;
  undefined4 local_res1c;
  FBaseCompactPose<TMemStackAllocator<0>_> local_2e8;
  FBaseCompactPose<TMemStackAllocator<0>_> FStack_2d0;
  FBlendedCurve local_2b8;
  FBlendedCurve local_298;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> local_278;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> local_238;
  double local_1f8;
  byte local_1f0;
  undefined8 local_1ec;
  undefined4 local_1e4;
  undefined1 local_1e0;
  void *local_1d8;
  undefined8 local_1d0;
  void *local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b7;
  double local_1b0;
  byte local_1a8;
  undefined8 local_1a4;
  undefined4 local_19c;
  undefined1 local_198;
  void *local_190;
  undefined8 local_188;
  void *local_180;
  undefined8 local_178;
  undefined1 local_16f;
  double local_168;
  byte local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined1 local_150;
  void *local_148;
  undefined8 local_140;
  void *local_138;
  undefined8 local_130;
  undefined1 local_127;
  float *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  FBlendedCurve *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  FBaseCompactPose<TMemStackAllocator<0>_> *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  TArrayView<float_const_,int> local_d8;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> local_c8;
  TArrayView<FBlendedCurve_const_,int> local_b8;
  TArrayView<FCompactPose_const_,int> local_a8;
  FAnimationPoseData local_98;
  FAnimationPoseData local_80;
  FAnimationPoseData local_68;
  FAnimationPoseData local_50;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RandomPlayer::Evaluate_AnyThread");
  if ((this->ValidEntries).ArrayNum != 0) {
    uVar9 = this->CurrentPlayDataIndex;
    uVar7 = 0;
    if ((int)uVar9 < (this->PlayData).ArrayNum) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar1 = (this->PlayData).AllocatorInstance.Data;
    lVar10 = (longlong)(int)uVar9 * 0x38;
    uVar9 = this->CurrentPlayDataIndex + 1U & 0x80000001;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
    }
    uVar7 = 0;
    if ((int)uVar9 < (this->PlayData).ArrayNum) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar2 = (this->PlayData).AllocatorInstance.Data;
    lVar11 = (longlong)(int)uVar9 * 0x38;
    plVar3 = (longlong *)**(undefined8 **)(pFVar1 + lVar10);
    bVar6 = FMath::TIsNearlyEqualByULP<float,unsigned_int,2147483648>
                      (*(float *)(pFVar1 + lVar10 + 0x20),__real_3f800000,4);
    if (bVar6) {
      FAnimationPoseData::FAnimationPoseData(&local_50,param_1);
      local_168 = (double)*(float *)(pFVar1 + lVar10 + 0xc);
      local_154 = *(undefined4 *)(pFVar1 + lVar10 + 0x18);
      local_160 = *(byte *)(param_1->_padding_ + 0x801) >> 1 & 1;
      local_15c = *(undefined8 *)(pFVar1 + lVar10 + 0x10);
      local_150 = 0 < *(int *)(pFVar1 + lVar10 + 0x24);
      local_148 = (void *)0x0;
      local_140 = 0;
      local_138 = (void *)0x0;
      local_130 = 0;
      local_127 = 0;
      (**(code **)(*plVar3 + 0x330))(plVar3,&local_50,&local_168);
      if (local_138 != (void *)0x0) {
        FMemory::Free(local_138);
      }
      if (local_148 != (void *)0x0) {
        FMemory::Free(local_148);
      }
    }
    else {
      this_00 = (FAnimInstanceProxy *)param_1->_padding_;
      local_2e8._padding_ = 0;
      local_2e8._padding_ = 0;
      FStack_2d0._padding_ = 0;
      FStack_2d0.BoneContainer = (FBoneContainer *)0x0;
      local_2b8._0_8_ = 0;
      local_2b8._8_8_ = 0;
      local_2b8._16_1_ = 0;
      local_2b8._24_8_ = 0;
      local_298._0_8_ = 0;
      local_298._8_8_ = 0;
      local_298._16_1_ = 0;
      local_298._24_8_ = 0;
      local_278.UniqueTypedBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_278.UniqueTypedBoneIndices.ArrayNum = 0;
      local_278.UniqueTypedBoneIndices.ArrayMax = 0;
      local_278.AttributeIdentifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_278.AttributeIdentifiers.ArrayNum = 0;
      local_278.AttributeIdentifiers.ArrayMax = 0;
      local_278.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_278.Values.ArrayNum = 0;
      local_278.Values.ArrayMax = 0;
      local_278.UniqueTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_278.UniqueTypes.ArrayNum = 0;
      local_278.UniqueTypes.ArrayMax = 0;
      local_238.UniqueTypedBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_238.UniqueTypedBoneIndices.ArrayNum = 0;
      local_238.UniqueTypedBoneIndices.ArrayMax = 0;
      local_238.AttributeIdentifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_238.AttributeIdentifiers.ArrayNum = 0;
      local_238.AttributeIdentifiers.ArrayMax = 0;
      local_238.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_238.Values.ArrayNum = 0;
      local_238.Values.ArrayMax = 0;
      local_238.UniqueTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_238.UniqueTypes.ArrayNum = 0;
      local_238.UniqueTypes.ArrayMax = 0;
      local_2e8.BoneContainer = (FBoneContainer *)0x0;
      FStack_2d0._padding_ = 0;
      pFVar8 = FAnimInstanceProxy::GetRequiredBones(this_00);
      FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer(&local_2e8,pFVar8);
      FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer(&FStack_2d0,pFVar8);
      FBlendedCurve::InitFrom(&local_2b8,pFVar8);
      FBlendedCurve::InitFrom(&local_298,pFVar8);
      local_res18 = *(float *)(pFVar1 + lVar10 + 0x20);
      local_res1c = *(undefined4 *)(pFVar2 + lVar11 + 0x20);
      plVar4 = (longlong *)**(undefined8 **)(pFVar2 + lVar11);
      FAnimationPoseData::FAnimationPoseData
                (&local_98,(FCompactPose *)&local_2e8,&local_2b8,
                 (FStackAttributeContainer *)&local_278);
      FAnimationPoseData::FAnimationPoseData
                (&local_80,(FCompactPose *)&FStack_2d0,&local_298,
                 (FStackAttributeContainer *)&local_238);
      local_1f8 = (double)*(float *)(pFVar1 + lVar10 + 0xc);
      local_1f0 = this_00->bShouldExtractRootMotion;
      local_1e4 = *(undefined4 *)(pFVar1 + lVar10 + 0x18);
      local_1e0 = 0 < *(int *)(pFVar1 + lVar10 + 0x24);
      local_1ec = *(undefined8 *)(pFVar1 + lVar10 + 0x10);
      local_1d8 = (void *)0x0;
      local_1d0 = 0;
      local_1c8 = (void *)0x0;
      local_1c0 = 0;
      local_1b7 = 0;
      (**(code **)(*plVar3 + 0x330))(plVar3,&local_98,&local_1f8);
      if (local_1c8 != (void *)0x0) {
        FMemory::Free(local_1c8);
      }
      if (local_1d8 != (void *)0x0) {
        FMemory::Free(local_1d8);
      }
      local_1b0 = (double)*(float *)(pFVar2 + lVar11 + 0xc);
      local_190 = (void *)0x0;
      local_1a8 = this_00->bShouldExtractRootMotion;
      local_188 = 0;
      local_19c = *(undefined4 *)(pFVar2 + lVar11 + 0x18);
      local_198 = 0 < *(int *)(pFVar2 + lVar11 + 0x24);
      local_1a4 = *(undefined8 *)(pFVar2 + lVar11 + 0x10);
      local_180 = (void *)0x0;
      local_178 = 0;
      local_16f = 0;
      (**(code **)(*plVar4 + 0x330))(plVar4,&local_80,&local_1b0);
      if (local_180 != (void *)0x0) {
        FMemory::Free(local_180);
      }
      if (local_190 != (void *)0x0) {
        FMemory::Free(local_190);
      }
      FAnimationPoseData::FAnimationPoseData(&local_68,param_1);
      local_118 = &local_res18;
      uStack_110 = 2;
      local_d8._12_4_ = uStack_10c;
      local_d8.ArrayNum = 2;
      local_108 = &local_278;
      local_f8 = &local_2b8;
      local_e8 = &local_2e8;
      uStack_100 = 2;
      local_c8._12_4_ = uStack_fc;
      local_c8.ArrayNum = 2;
      uStack_f0 = 2;
      local_b8._12_4_ = uStack_ec;
      local_b8.ArrayNum = 2;
      uStack_e0 = 2;
      local_a8._12_4_ = uStack_dc;
      local_a8.ArrayNum = 2;
      local_d8.DataPtr = local_118;
      local_c8.DataPtr = (FStackAttributeContainer *)local_108;
      local_b8.DataPtr = local_f8;
      local_a8.DataPtr = (FCompactPose *)local_e8;
      FAnimationRuntime::BlendPosesTogether(&local_a8,&local_b8,&local_c8,&local_d8,&local_68);
      UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
      ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>(&local_238);
      UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
      ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>(&local_278);
    }
    FStatsHierarchical::EndMeasurement();
    return;
  }
  if (param_1->bExpectsAdditivePose != false) {
    FCompactPose::ResetToAdditiveIdentity(&param_1->Pose);
    FStatsHierarchical::EndMeasurement();
    return;
  }
  FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
            ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
             *(FBoneContainer **)&(param_1->Pose).field_0x10);
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146445550

void __thiscall
FAnimNode_RandomPlayer::GatherDebugData(FAnimNode_RandomPlayer *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  FName local_res10;
  FString local_38;
  FString local_28 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RandomPlayer::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RandomPlayer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_RandomPlayer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer,(UObject *)pUVar1,
                         L"AnimNode_RandomPlayer");
  }
  local_res10 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_RandomPlayer.OuterSingleton)->
                       _padding_;
  ::FName::ToString(&local_res10,&local_38);
  ::FString::PrintfImpl(local_28,L"%s<W:%.1f%%> %s");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  _Src.Data = local_28[0].Data.AllocatorInstance.Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28[0].Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28[0].Data.ArrayNum,0,(ForAnyElementType *)&local_38,
               local_28[0].Data.ArrayNum,&local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_28[0].Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_38,true);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetAccumulatedTime @ 146447110

float __thiscall FAnimNode_RandomPlayer::GetAccumulatedTime(FAnimNode_RandomPlayer *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  
  if ((this->ValidEntries).ArrayNum < 1) {
    return 0.0;
  }
  uVar1 = this->CurrentPlayDataIndex;
  uVar4 = 0;
  if ((int)uVar1 < (this->PlayData).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  return *(float *)((this->PlayData).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x38 + 0xc);
}

// GetAnimAsset @ 146447790

UAnimationAsset * __thiscall FAnimNode_RandomPlayer::GetAnimAsset(FAnimNode_RandomPlayer *this)

{
  uint uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UAnimationAsset *pUVar6;
  
  if (0 < (this->ValidEntries).ArrayNum) {
    uVar1 = this->CurrentPlayDataIndex;
    uVar5 = 0;
    if ((int)uVar1 < (this->PlayData).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar6 = (UAnimationAsset *)(*pcVar3)();
        return pUVar6;
      }
    }
    puVar2 = *(undefined8 **)((this->PlayData).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x38)
    ;
    if (puVar2 != (undefined8 *)0x0) {
      return (UAnimationAsset *)*puVar2;
    }
  }
  return (UAnimationAsset *)0x0;
}

// GetCachedBlendWeight @ 1464486d0

float __thiscall FAnimNode_RandomPlayer::GetCachedBlendWeight(FAnimNode_RandomPlayer *this)

{
  return this->BlendWeight;
}

// GetDeltaTimeRecord @ 146449970

FDeltaTimeRecord * __thiscall
FAnimNode_RandomPlayer::GetDeltaTimeRecord(FAnimNode_RandomPlayer *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDeltaTimeRecord *pFVar5;
  
  if ((this->ValidEntries).ArrayNum < 1) {
    return (FDeltaTimeRecord *)0x0;
  }
  uVar1 = this->CurrentPlayDataIndex;
  uVar4 = 0;
  if ((int)uVar1 < (this->PlayData).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDeltaTimeRecord *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FDeltaTimeRecord *)
         ((this->PlayData).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x38 + 0x10);
}

// GetIgnoreForRelevancyTest @ 14644afc0

bool __thiscall FAnimNode_RandomPlayer::GetIgnoreForRelevancyTest(FAnimNode_RandomPlayer *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  undefined1 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_bIgnoreForRelevancyTest.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bIgnoreForRelevancyTest,"bIgnoreForRelevancyTest");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_RandomPlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_RandomPlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer,(UObject *)pUVar6,
                           L"AnimNode_RandomPlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bIgnoreForRelevancyTest,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_RandomPlayer.OuterSingleton);
    CachedId_bIgnoreForRelevancyTest.Id = pFVar7->Id;
    CachedId_bIgnoreForRelevancyTest.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bIgnoreForRelevancyTest.Index;
  FVar2 = CachedId_bIgnoreForRelevancyTest.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (bool)*puVar8;
}

// GetNextValidEntryIndex @ 14644bd20

int __thiscall FAnimNode_RandomPlayer::GetNextValidEntryIndex(FAnimNode_RandomPlayer *this)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  if ((this->ValidEntries).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ValidEntries.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_RandomPlayer.cpp"
                       ,0x18e,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      iVar5 = (*pcVar1)();
      return iVar5;
    }
  }
  if (this->bShuffleMode != false) {
    if ((this->ShuffleList).ArrayNum < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
    }
    iVar5 = (this->ShuffleList).ArrayNum;
    iVar7 = iVar5 + -1;
    iVar5 = *(int *)((this->ShuffleList).AllocatorInstance.Data + (longlong)iVar5 * 4 + -4);
    (this->ShuffleList).ArrayNum = iVar7;
    if (iVar7 == 0) {
      BuildShuffleList(this,iVar5);
    }
    return iVar5;
  }
  uVar6 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
  (this->RandomStream).Seed = uVar6;
  uVar8 = (this->NormalizedPlayChances).ArrayNum;
  iVar5 = 0;
  if (0 < (int)uVar8) {
    do {
      iVar7 = (uVar8 >> 1) + iVar5;
      iVar3 = iVar7 + (uVar8 & 1);
      if ((float)(uVar6 >> 9 | 0x3f800000) - __real_3f800000 <
          *(float *)((this->NormalizedPlayChances).AllocatorInstance.Data + (longlong)iVar7 * 4)) {
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      uVar2 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar2 != 0);
  }
  return iVar5;
}

// GetPlayData @ 14644c400

FRandomAnimPlayData * __thiscall
FAnimNode_RandomPlayer::GetPlayData(FAnimNode_RandomPlayer *this,ERandomDataIndexType param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FRandomAnimPlayData *pFVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = this->CurrentPlayDataIndex;
  iVar1 = (this->PlayData).ArrayNum;
  if (param_1 != Current) {
    uVar6 = uVar6 + 1 & 0x80000001;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
    }
    uVar5 = 0;
    if ((int)uVar6 < iVar1) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FRandomAnimPlayData *)(*pcVar2)();
        return pFVar4;
      }
    }
    return (FRandomAnimPlayData *)
           ((this->PlayData).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x38);
  }
  uVar5 = 0;
  if ((int)uVar6 < iVar1) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRandomAnimPlayData *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FRandomAnimPlayData *)
         ((this->PlayData).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x38);
}

// GetPlayData @ 14644c4f0

FRandomAnimPlayData * __thiscall
FAnimNode_RandomPlayer::GetPlayData(FAnimNode_RandomPlayer *this,ERandomDataIndexType param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FRandomAnimPlayData *pFVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = this->CurrentPlayDataIndex;
  iVar1 = (this->PlayData).ArrayNum;
  if (param_1 != Current) {
    uVar6 = uVar6 + 1 & 0x80000001;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
    }
    uVar5 = 0;
    if ((int)uVar6 < iVar1) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FRandomAnimPlayData *)(*pcVar2)();
        return pFVar4;
      }
    }
    return (FRandomAnimPlayData *)
           ((this->PlayData).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x38);
  }
  uVar5 = 0;
  if ((int)uVar6 < iVar1) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRandomAnimPlayData *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FRandomAnimPlayData *)
         ((this->PlayData).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x38);
}

// InitPlayData @ 146454ca0

void __thiscall
FAnimNode_RandomPlayer::InitPlayData
          (FAnimNode_RandomPlayer *this,FRandomAnimPlayData *param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  FRandomPlayerSequenceEntry *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  uVar7 = 0;
  if (param_2 < (this->ValidEntries).ArrayNum) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  fVar5 = __real_3f800000;
  pFVar3 = *(FRandomPlayerSequenceEntry **)
            ((this->ValidEntries).AllocatorInstance.Data + (longlong)param_2 * 8);
  param_1->Entry = pFVar3;
  param_1->BlendWeight = param_3;
  fVar1 = pFVar3->MaxPlayRate;
  fVar2 = pFVar3->MinPlayRate;
  uVar7 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
  (this->RandomStream).Seed = uVar7;
  param_1->PlayRate = ((float)(uVar7 >> 9 | 0x3f800000) - fVar5) * (fVar1 - fVar2) + fVar2;
  iVar9 = pFVar3->MinLoopCount;
  iVar8 = (pFVar3->MaxLoopCount - iVar9) + 1;
  if (iVar8 < 1) {
    iVar8 = 0;
  }
  else {
    uVar7 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
    (this->RandomStream).Seed = uVar7;
    iVar8 = (int)(((float)(uVar7 >> 9 | 0x3f800000) - fVar5) * (float)iVar8);
  }
  iVar8 = iVar8 + iVar9;
  param_1->PlayStartTime = 0.0;
  param_1->CurrentPlayTime = 0.0;
  iVar9 = 0x7fffffff;
  if (iVar8 < 0x7fffffff) {
    iVar9 = iVar8;
  }
  (param_1->DeltaTimeRecord).Delta = 0.0;
  (param_1->DeltaTimeRecord).Previous = 0.0;
  iVar8 = 0;
  if (0 < iVar9) {
    iVar8 = iVar9;
  }
  param_1->RemainingLoops = iVar8;
  *(undefined4 *)&(param_1->DeltaTimeRecord).bPreviousIsValid = 0;
  (param_1->MarkerTickRecord).PreviousMarker.MarkerIndex = -2;
  (param_1->MarkerTickRecord).NextMarker.MarkerIndex = -2;
  return;
}

// Initialize_AnyThread @ 146459e50

void __thiscall
FAnimNode_RandomPlayer::Initialize_AnyThread
          (FAnimNode_RandomPlayer *this,FAnimationInitializeContext *param_1)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FExposedValueHandler *this_00;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined1 local_res8 [8];
  LARGE_INTEGER local_res18 [2];
  FScriptContainerElement *local_78 [8];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RandomPlayer::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  uVar16 = (this->Entries).ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &(this->ValidEntries).ArrayMax;
  uVar14 = 0;
  (this->ValidEntries).ArrayNum = 0;
  if (*piVar1 != uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar16,&(this->ValidEntries).AllocatorInstance,0,piVar1);
  }
  fVar17 = __real_322bcc77;
  uVar16 = 0;
  uVar15 = uVar14;
  if (0 < (this->Entries).ArrayNum) {
    do {
      uVar11 = (uint)uVar15;
      uVar12 = uVar16;
      if ((int)uVar11 < (this->Entries).ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_78[0] = (this->Entries).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x50;
      if ((*(longlong *)local_78[0] != 0) &&
         ((this->bShuffleMode != false || (fVar17 < *(float *)(local_78[0] + 8))))) {
        pFVar5 = (this->ValidEntries).AllocatorInstance.Data;
        if ((pFVar5 <= (FScriptContainerElement *)local_78) &&
           (((FScriptContainerElement *)local_78 < pFVar5 + (longlong)*piVar1 * 8 &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)))) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar9 = (this->ValidEntries).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->ValidEntries).AllocatorInstance,piVar1);
        }
        (this->ValidEntries).ArrayNum = iVar9 + 1;
        *(FScriptContainerElement **)
         ((this->ValidEntries).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_78[0];
      }
      uVar15 = (ulonglong)(uVar11 + 1);
    } while ((int)(uVar11 + 1) < (this->Entries).ArrayNum);
  }
  iVar9 = (this->ValidEntries).ArrayNum;
  if (iVar9 != 0) {
    uVar12 = (this->NormalizedPlayChances).ArrayNum;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    piVar1 = &(this->NormalizedPlayChances).ArrayMax;
    (this->NormalizedPlayChances).ArrayNum = 0;
    if (*piVar1 != uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar12,&(this->NormalizedPlayChances).AllocatorInstance,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar9,&(this->NormalizedPlayChances).AllocatorInstance,
               &(this->NormalizedPlayChances).ArrayNum,piVar1);
    pFVar13 = (this->ValidEntries).AllocatorInstance.Data;
    iVar10 = (this->ValidEntries).ArrayNum;
    fVar18 = 0.0;
    pFVar5 = pFVar13 + (longlong)iVar10 * 8;
    while( true ) {
      if ((this->ValidEntries).ArrayNum != iVar10) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FRandomPlayerSequenceEntry_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar13 == pFVar5) break;
      lVar6 = *(longlong *)pFVar13;
      iVar4 = *(int *)(lVar6 + 0x10);
      fVar18 = fVar18 + *(float *)(lVar6 + 8);
      if (iVar4 < *(int *)(lVar6 + 0xc)) {
        *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0xc);
        *(int *)(lVar6 + 0xc) = iVar4;
      }
      fVar3 = *(float *)(lVar6 + 0x18);
      if (fVar3 < *(float *)(lVar6 + 0x14)) {
        *(float *)(lVar6 + 0x18) = *(float *)(lVar6 + 0x14);
        *(float *)(lVar6 + 0x14) = fVar3;
      }
      FAlphaBlend::Reset((FAlphaBlend *)(lVar6 + 0x20));
      pFVar13 = pFVar13 + 8;
    }
    if (this->bShuffleMode == false) {
      if ((fVar18 <= fVar17) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("SumChances > (1.e-8f)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_RandomPlayer.cpp"
                             ,0x56,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar17 = 0.0;
      uVar15 = uVar14;
      if (0 < iVar9) {
        do {
          uVar11 = (uint)uVar14;
          uVar12 = uVar16;
          if ((int)uVar11 < (this->ValidEntries).ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar12 = uVar16;
          if ((int)uVar11 < (this->NormalizedPlayChances).ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          fVar17 = fVar17 + *(float *)(*(longlong *)
                                        ((this->ValidEntries).AllocatorInstance.Data + uVar15 * 8) +
                                      8) / fVar18;
          if ((uVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar14 = (ulonglong)(uVar11 + 1);
          *(float *)((this->NormalizedPlayChances).AllocatorInstance.Data + uVar15 * 4) = fVar17;
          uVar15 = uVar15 + 1;
        } while ((longlong)uVar15 < (longlong)iVar9);
      }
      uVar11 = iVar9 - 1;
      uVar12 = uVar16;
      if ((int)uVar11 < (this->NormalizedPlayChances).ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined4 *)
       ((this->NormalizedPlayChances).AllocatorInstance.Data + (longlong)(int)uVar11 * 4) =
           0x3f800000;
    }
    else {
      BuildShuffleList(this,-1);
    }
    QueryPerformanceCounter(local_res18);
    piVar1 = &(this->PlayData).ArrayMax;
    piVar2 = &(this->PlayData).ArrayNum;
    (this->RandomStream).InitialSeed = local_res18[0].s.LowPart;
    (this->RandomStream).Seed = local_res18[0].s.LowPart;
    *piVar2 = 0;
    if (*piVar1 != 2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,2,&(this->PlayData).AllocatorInstance,0,piVar1);
    }
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,2,&(this->PlayData).AllocatorInstance,piVar2,piVar1);
    DefaultConstructItems<FRandomAnimPlayData,int>
              ((this->PlayData).AllocatorInstance.Data + (longlong)iVar9 * 0x38,2);
    iVar9 = GetNextValidEntryIndex(this);
    iVar10 = GetNextValidEntryIndex(this);
    uVar12 = this->CurrentPlayDataIndex;
    uVar11 = uVar16;
    if ((int)uVar12 < *piVar2) {
      uVar11 = ~uVar12 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    InitPlayData(this,(FRandomAnimPlayData *)
                      ((this->PlayData).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x38),iVar9
                 ,__real_3f800000);
    uVar12 = this->CurrentPlayDataIndex + 1U & 0x80000001;
    if ((int)uVar12 < 0) {
      uVar12 = (uVar12 - 1 | 0xfffffffe) + 1;
    }
    if ((int)uVar12 < *piVar2) {
      uVar16 = ~uVar12 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    InitPlayData(this,(FRandomAnimPlayData *)
                      ((this->PlayData).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x38),
                 iVar10,0.0);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// SetIgnoreForRelevancyTest @ 146469440

bool __thiscall
FAnimNode_RandomPlayer::SetIgnoreForRelevancyTest(FAnimNode_RandomPlayer *this,bool param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  void *pvVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_bIgnoreForRelevancyTest.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bIgnoreForRelevancyTest,"bIgnoreForRelevancyTest");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_RandomPlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_RandomPlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer,(UObject *)pUVar6,
                           L"AnimNode_RandomPlayer");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bIgnoreForRelevancyTest,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_RandomPlayer.OuterSingleton);
    CachedId_bIgnoreForRelevancyTest.Id = pFVar7->Id;
    CachedId_bIgnoreForRelevancyTest.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bIgnoreForRelevancyTest.Index;
  FVar2 = CachedId_bIgnoreForRelevancyTest.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pvVar8 = FAnimNodeData::GetInstanceData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if (pvVar8 == (void *)0x0) {
    return false;
  }
  *(bool *)pvVar8 = param_1;
  return true;
}

// Update_AnyThread @ 146478830

void __thiscall
FAnimNode_RandomPlayer::Update_AnyThread
          (FAnimNode_RandomPlayer *this,FAnimationUpdateContext *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FExposedValueHandler *this_00;
  FAnimSyncGroupScope *this_01;
  FAnimSyncDebugInfo *pFVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  FAnimSyncParams local_1a8;
  FAnimSyncParams local_198;
  FAnimSyncDebugInfo local_188;
  FAnimSyncDebugInfo local_178;
  FAnimTickRecord local_168;
  FAnimTickRecord local_e8;
  
  this->BlendWeight = param_1->CurrentWeight;
  FStatsHierarchical::BeginMeasurement("FAnimNode_RandomPlayer::Update_AnyThread");
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  if ((this->ValidEntries).ArrayNum == 0) goto LAB_146478eb6;
  uVar11 = this->CurrentPlayDataIndex;
  uVar10 = 0;
  if ((int)uVar11 < (this->PlayData).ArrayNum) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar12 = (this->PlayData).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x38;
  uVar11 = this->CurrentPlayDataIndex + 1U & 0x80000001;
  if ((int)uVar11 < 0) {
    uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
  }
  uVar10 = 0;
  if ((int)uVar11 < (this->PlayData).ArrayNum) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar16 = *(float *)(pFVar12 + 0x14);
  pFVar13 = (this->PlayData).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x38;
  plVar2 = (longlong *)**(undefined8 **)pFVar12;
  if (*(float *)(pFVar12 + 0xc) <= fVar16 && fVar16 != *(float *)(pFVar12 + 0xc)) {
    fVar14 = (float)(**(code **)(*plVar2 + 0x2c0))(plVar2);
    fVar16 = fVar16 - fVar14;
  }
  fVar14 = *(float *)(pFVar12 + 8);
  if ((fVar14 <= fVar16) ||
     (*(float *)(pFVar12 + 0xc) <= fVar14 && fVar14 != *(float *)(pFVar12 + 0xc))) {
    bVar7 = false;
  }
  else {
    *(int *)(pFVar12 + 0x24) = *(int *)(pFVar12 + 0x24) + -1;
    bVar7 = true;
  }
  fVar16 = __real_3727c5ac;
  bVar6 = false;
  if (*(int *)(pFVar12 + 0x24) < 1) {
    lVar3 = *(longlong *)pFVar13;
    if (*(longlong *)pFVar12 == lVar3) {
      if (*(int *)(pFVar12 + 0x24) < 0) {
        uVar1 = *(undefined4 *)(pFVar12 + 0xc);
        *(undefined4 *)(pFVar13 + 0xc) = uVar1;
        *(undefined4 *)(pFVar13 + 8) = uVar1;
        goto LAB_146478a89;
      }
    }
    else {
      if ((*(float *)(lVar3 + 0x28) <= 0.0) || (*(float *)(lVar3 + 0x2c) <= __real_3727c5ac)) {
        fVar14 = *(float *)(pFVar12 + 0xc) - fVar14;
        if (fVar14 < 0.0) {
          fVar15 = (float)(**(code **)(*plVar2 + 0x2c0))(plVar2);
          fVar14 = fVar14 + fVar15;
        }
        fVar15 = (float)(**(code **)(*plVar2 + 0x2c0))(plVar2);
        if ((*(float *)(lVar3 + 0x28) <= fVar15 - fVar14 &&
             fVar15 - fVar14 != *(float *)(lVar3 + 0x28)) && (!bVar7)) goto LAB_146478a94;
      }
      FAlphaBlend::Update((FAlphaBlend *)(lVar3 + 0x20),param_1->DeltaTime);
      bVar7 = FAlphaBlend::IsComplete((FAlphaBlend *)(lVar3 + 0x20));
      if (bVar7) {
        *(undefined4 *)(pFVar13 + 8) = *(undefined4 *)(pFVar13 + 0xc);
LAB_146478a89:
        bVar6 = true;
      }
      else {
        fVar14 = *(float *)(lVar3 + 0x38);
        if (fVar14 < __real_3f800000) {
          fVar15 = __real_3f800000 - fVar14;
          *(float *)(pFVar13 + 0x20) = fVar14;
          *(float *)(pFVar12 + 0x20) = fVar15;
        }
      }
    }
  }
LAB_146478a94:
  *(undefined4 *)(pFVar12 + 0x14) = *(undefined4 *)(pFVar12 + 0xc);
  pFVar12[0x18] = (FScriptContainerElement)0x1;
  *(undefined4 *)(pFVar13 + 0x14) = *(undefined4 *)(pFVar13 + 0xc);
  pFVar13[0x18] = (FScriptContainerElement)0x1;
  if (bVar6) {
    iVar8 = GetNextValidEntryIndex(this);
    uVar11 = this->CurrentPlayDataIndex + 1U & 0x80000001;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
    }
    this->CurrentPlayDataIndex = uVar11;
    uVar10 = 0;
    if ((int)uVar11 < (this->PlayData).ArrayNum) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar12 = (this->PlayData).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x38;
    uVar11 = this->CurrentPlayDataIndex + 1U & 0x80000001;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
    }
    uVar10 = 0;
    if ((int)uVar11 < (this->PlayData).ArrayNum) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar13 = (this->PlayData).AllocatorInstance.Data;
    *(undefined4 *)(pFVar12 + 0x20) = 0x3f800000;
    FAlphaBlend::Reset((FAlphaBlend *)(*(longlong *)pFVar12 + 0x20));
    InitPlayData(this,(FRandomAnimPlayData *)(pFVar13 + (longlong)(int)uVar11 * 0x38),iVar8,0.0);
    uVar11 = this->CurrentPlayDataIndex;
    uVar10 = 0;
    if ((int)uVar11 < (this->PlayData).ArrayNum) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar12 = (this->PlayData).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x38;
    uVar11 = this->CurrentPlayDataIndex + 1U & 0x80000001;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
    }
    uVar10 = 0;
    if ((int)uVar11 < (this->PlayData).ArrayNum) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar13 = (this->PlayData).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x38;
  }
  FAnimTickRecord::FAnimTickRecord
            (&local_e8,(UAnimSequenceBase *)**(undefined8 **)pFVar12,true,*(float *)(pFVar12 + 0x1c)
             ,false,this->BlendWeight * *(float *)(pFVar12 + 0x20),(float *)(pFVar12 + 0xc),
             (FMarkerTickRecord *)(pFVar12 + 0x28));
  local_e8.DeltaTimeRecord = (FDeltaTimeRecord *)(pFVar12 + 0x10);
  FAnimTickRecord::GatherContextData(&local_e8,param_1);
  this_01 = FAnimationBaseContext::GetMessageChecked<UE::Anim::FAnimSyncGroupScope>
                      ((FAnimationBaseContext *)param_1);
  pFVar9 = UE::Anim::FAnimSyncDebugInfo::FAnimSyncDebugInfo
                     (&local_188,(FAnimationBaseContext *)param_1);
  local_1a8.GroupName.ComparisonIndex.Value = 0;
  local_1a8.GroupName.Number = 0;
  local_1a8.Role = CanBeLeader;
  local_1a8.Method = DoNotSync;
  local_1a8.bOverridePositionWhenJoiningSyncGroupAsLeader = false;
  UE::Anim::FAnimSyncGroupScope::AddTickRecord(this_01,&local_e8,&local_1a8,pFVar9);
  FAnimTrace::OutputAnimTickRecord((FAnimationBaseContext *)param_1,&local_e8);
  if (fVar16 < *(float *)(pFVar13 + 0x20)) {
    FAnimTickRecord::FAnimTickRecord
              (&local_168,(UAnimSequenceBase *)**(undefined8 **)pFVar13,true,
               *(float *)(pFVar13 + 0x1c),false,*(float *)(pFVar13 + 0x20) * this->BlendWeight,
               (float *)(pFVar13 + 0xc),(FMarkerTickRecord *)(pFVar13 + 0x28));
    local_168.DeltaTimeRecord = (FDeltaTimeRecord *)(pFVar13 + 0x10);
    FAnimTickRecord::GatherContextData(&local_168,param_1);
    pFVar9 = UE::Anim::FAnimSyncDebugInfo::FAnimSyncDebugInfo
                       (&local_178,(FAnimationBaseContext *)param_1);
    local_198.GroupName.ComparisonIndex.Value = 0;
    local_198.GroupName.Number = 0;
    local_198.Role = CanBeLeader;
    local_198.Method = DoNotSync;
    local_198.bOverridePositionWhenJoiningSyncGroupAsLeader = false;
    UE::Anim::FAnimSyncGroupScope::AddTickRecord(this_01,&local_168,&local_198,pFVar9);
    FAnimTrace::OutputAnimTickRecord((FAnimationBaseContext *)param_1,&local_168);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.ContextData.SharedReferenceCount.ReferenceController);
  }
  pUVar4 = (UObject *)**(undefined8 **)pFVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Current Sequence",pUVar4);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Current Weight",*(float *)(pFVar12 + 0x20));
  pUVar4 = (UObject *)**(undefined8 **)pFVar13;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Next Sequence",pUVar4);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Next Weight",*(float *)(pFVar13 + 0x20));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.ContextData.SharedReferenceCount.ReferenceController);
LAB_146478eb6:
  FStatsHierarchical::EndMeasurement();
  return;
}

