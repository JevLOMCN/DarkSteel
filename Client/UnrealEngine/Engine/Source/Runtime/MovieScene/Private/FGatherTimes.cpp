// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// Run @ 146152b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FGatherTimes::Run(FGatherTimes *this)

{
  ForElementType<UE::MovieScene::FEvaluatedTime> *pFVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  FInstanceRegistry *pFVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ForElementType<UE::MovieScene::FEvaluatedTime> FVar11;
  void *_Dst;
  longlong lVar12;
  ForElementType<UE::MovieScene::FEvaluatedTime> FVar13;
  uint uVar14;
  longlong lVar15;
  uint *puVar16;
  ulonglong local_res10;
  float fStackX_1c;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  FVar13 = (ForElementType<UE::MovieScene::FEvaluatedTime>)this->EvaluatedTimes;
  pFVar1 = (ForElementType<UE::MovieScene::FEvaluatedTime> *)((longlong)FVar13 + 0x108);
  iVar9 = *(int *)pFVar1->InlineData;
  uVar10 = *(uint *)&(this->InstanceRegistry->Instances).field_0x8;
  if (iVar9 < (int)uVar10) {
    iVar8 = Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FEvaluatedTime>_>
                      (0x10,8,uVar10 - iVar9,
                       (ForElementType<UE::MovieScene::FEvaluatedTime> *)FVar13,(int *)pFVar1,
                       (int *)((longlong)FVar13 + 0x10c));
    FVar11 = *(ForElementType<UE::MovieScene::FEvaluatedTime> *)((longlong)FVar13 + 0x100);
    if (*(ForElementType<UE::MovieScene::FEvaluatedTime> *)((longlong)FVar13 + 0x100) ==
        (ForElementType<UE::MovieScene::FEvaluatedTime>)0x0) {
      FVar11 = FVar13;
    }
    DefaultConstructItems<UE::MovieScene::FEvaluatedTime,int>
              ((void *)((longlong)FVar11 + (longlong)iVar8 * 0x10),uVar10 - iVar9);
  }
  else {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if ((int)uVar10 < iVar9) {
      uVar14 = iVar9 - uVar10;
      if (((int)(uVar14 | uVar10) < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar14 != 0) {
        FVar11 = *(ForElementType<UE::MovieScene::FEvaluatedTime> *)((longlong)FVar13 + 0x100);
        if (*(ForElementType<UE::MovieScene::FEvaluatedTime> *)((longlong)FVar13 + 0x100) ==
            (ForElementType<UE::MovieScene::FEvaluatedTime>)0x0) {
          FVar11 = FVar13;
        }
        _Dst = (void *)((longlong)FVar11 + (longlong)(int)uVar10 * 0x10);
        iVar9 = (*(int *)pFVar1->InlineData - uVar10) - uVar14;
        if (iVar9 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar14 * 0x10 + (longlong)_Dst),(longlong)iVar9 << 4)
          ;
        }
        *(uint *)pFVar1->InlineData = *(int *)pFVar1->InlineData - uVar14;
        Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FEvaluatedTime>_>
                  (0x10,8,(ForElementType<UE::MovieScene::FEvaluatedTime> *)FVar13,
                   *(int *)pFVar1->InlineData,(int *)((longlong)FVar13 + 0x10c));
      }
    }
  }
  pFVar4 = this->InstanceRegistry;
  local_78 = 0;
  uVar10 = *(uint *)&(pFVar4->Instances).field_0x28;
  local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar4->Instances).field_0x10;
  uStack_74 = 1;
  uStack_64 = 0;
  iStack_60 = 0;
  if (uVar10 != 0) {
    puVar16 = *(uint **)&(pFVar4->Instances).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)local_50.Array;
    }
    uVar14 = *puVar16;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar14 == 0) {
      iStack_60 = iStack_60 + 0x20;
      lVar12 = (longlong)local_78;
      local_78 = local_78 + 1;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < local_78)
      goto LAB_146152d4b;
      uVar14 = puVar16[lVar12 + 1];
    }
    uStack_74 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_74 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uStack_64 = iStack_60 + -1 + (int)lVar12;
    if ((int)uVar10 < (int)uStack_64) {
LAB_146152d4b:
      uStack_64 = uVar10;
    }
  }
  local_50._padding_ = CONCAT44(uStack_74,local_78);
  local_50.UnvisitedBitMask = 0xffffffff;
  local_50.CurrentBitIndex = uStack_64;
  local_50._28_4_ = uStack_5c;
  local_50.BaseBitIndex = iStack_60;
  if ((int)uStack_64 < (int)uVar10) {
    do {
      lVar12 = (longlong)local_50.CurrentBitIndex * 0x140 + *(longlong *)&pFVar4->Instances;
      if (*(uint *)(lVar12 + 0x8c) == 0x80000000) {
        if (*(int *)(lVar12 + 0x88) == 0) {
          lVar15 = lVar12 + 0x74;
          if ((*(char *)(lVar12 + 0x74) == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else {
          if ((*(char *)(lVar12 + 0x68) == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar15 = lVar12 + 0x68;
        }
        local_res10 = *(ulonglong *)(lVar15 + 4);
      }
      else {
        local_res10 = (ulonglong)*(uint *)(lVar12 + 0x8c);
      }
      uVar5 = *(undefined8 *)(lVar12 + 0x80);
      lVar12 = (longlong)local_50.CurrentBitIndex;
      FVar13 = (ForElementType<UE::MovieScene::FEvaluatedTime>)this->EvaluatedTimes;
      fStackX_1c = (float)(local_res10 >> 0x20);
      iVar9 = (int)((ulonglong)uVar5 >> 0x20);
      uVar10 = 0;
      if (local_50.CurrentBitIndex < *(int *)((longlong)FVar13 + 0x108)) {
        uVar10 = (uint)~local_50.CurrentBitIndex >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(ForElementType<UE::MovieScene::FEvaluatedTime> *)((longlong)FVar13 + 0x100) !=
          (ForElementType<UE::MovieScene::FEvaluatedTime>)0x0) {
        FVar13 = *(ForElementType<UE::MovieScene::FEvaluatedTime> *)((longlong)FVar13 + 0x100);
      }
      puVar2 = (ulonglong *)((longlong)FVar13 + lVar12 * 0x10);
      *puVar2 = local_res10;
      puVar2[1] = (ulonglong)
                  (((double)((longlong)(int)local_res10 * (longlong)iVar9) +
                   (double)fStackX_1c * (double)iVar9) / (double)(int)uVar5);
      local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
  }
  return;
}

