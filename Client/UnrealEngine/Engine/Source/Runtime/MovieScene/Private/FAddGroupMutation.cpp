// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// CreateMutation @ 14612a7a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FAddGroupMutation::CreateMutation
          (FAddGroupMutation *this,FEntityManager *param_1,FComponentMask *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  UMovieSceneEntityGroupingSystem *pUVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res20 [8];
  int local_90;
  uint uStack_8c;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_68;
  int local_48;
  
  pUVar5 = this->System;
  local_90 = 0;
  iVar3 = *(int *)&(pUVar5->GroupHandlers).field_0x28;
  puVar2 = &(pUVar5->GroupHandlers).field_0x10;
  uStack_8c = 1;
  iStack_7c = 0;
  iStack_78 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(pUVar5->GroupHandlers).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar2;
    }
    uVar10 = *puVar12;
    iStack_78 = 0;
    local_90 = 0;
    while (uVar10 == 0) {
      iStack_78 = iStack_78 + 0x20;
      lVar8 = (longlong)local_90;
      local_90 = local_90 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_90) goto LAB_14612a86a;
      uVar10 = puVar12[lVar8 + 1];
    }
    uStack_8c = -uVar10 & uVar10;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_7c = (int)lVar8 + -1 + iStack_78;
    if (iVar3 < iStack_7c) {
LAB_14612a86a:
      iStack_7c = iVar3;
    }
  }
  uVar10 = *(uint *)&(pUVar5->GroupHandlers).field_0x28;
  local_48 = *(int *)&(pUVar5->GroupHandlers).field_0x8 -
             *(int *)&(pUVar5->GroupHandlers).field_0x34;
  local_68._padding_ = CONCAT44(uStack_8c,local_90);
  iVar9 = (int)uVar10 >> 5;
  local_68.CurrentBitIndex = iStack_7c;
  local_68.UnvisitedBitMask = 0xffffffff;
  local_68._28_4_ = uStack_74;
  local_68.BaseBitIndex = iStack_78;
  uVar13 = uVar10 & 0xffffffe0;
  local_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(pUVar5->GroupHandlers).field_0x28;
  if (uVar10 != uVar4) {
    puVar11 = *(undefined1 **)&(pUVar5->GroupHandlers).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar2;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar9 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar9;
      uVar13 = uVar13 + 0x20;
      iVar9 = iVar9 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14612a950;
      uVar10 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_14612a950:
  while( true ) {
    if (*(int *)&(pUVar5->GroupHandlers).field_0x8 - *(int *)&(pUVar5->GroupHandlers).field_0x34 !=
        local_48) {
      `TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if ((local_68.CurrentBitIndex == uVar10) &&
       (local_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    bVar7 = FEntityComponentFilter::Match
                      ((FEntityComponentFilter *)
                       ((longlong)local_68.CurrentBitIndex * 0x188 + 0x108 +
                       *(longlong *)&pUVar5->GroupHandlers),param_2);
    if (bVar7) {
      FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->BuiltInComponents->Group);
      return;
    }
    local_68.UnvisitedBitMask = local_68.UnvisitedBitMask & ~local_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_68);
  }
  return;
}

// InitializeAllocation @ 14613e820

void __thiscall
UE::MovieScene::FAddGroupMutation::InitializeAllocation
          (FAddGroupMutation *this,FEntityAllocation *param_1,FComponentMask *param_2)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint local_60;
  undefined1 local_58 [32];
  longlong *local_38;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  lVar5 = 0;
  FEntityAllocation::WriteComponents<UE::MovieScene::FEntityGroupID>
            (param_1,(TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FEntityGroupID>_> *)
                     local_58,this->BuiltInComponents->Group,(FEntityAllocationWriteContext)0x0);
  TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
  ::CreateConstIterator(&this->System->GroupHandlers,(TConstIterator *)&local_38);
  iVar4 = -1;
  if (local_30.CurrentBitIndex < (local_30.Array)->NumBits) {
    do {
      iVar4 = local_30.CurrentBitIndex;
      bVar3 = FEntityComponentFilter::Match
                        ((FEntityComponentFilter *)
                         (*local_38 + 0x108 + (longlong)local_30.CurrentBitIndex * 0x188),param_2);
      if (bVar3) {
        if (iVar4 != -1) goto LAB_14613e912;
        break;
      }
      local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      iVar4 = -1;
    } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3774488813879951216>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityGroupingSystem.cpp"
                     ,0x90,"PolicyKey.IsValid()");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14613e912:
  uVar1 = param_1->Size;
  if ((ulonglong)uVar1 != 0) {
    do {
      lVar5 = lVar5 + 1;
      *(ulonglong *)local_58._24_8_ = CONCAT44(0xffffffff,iVar4);
      local_60 = local_60 & 0xffffff00;
      *(uint *)(local_58._24_8_ + 8) = local_60;
      local_58._24_8_ = (undefined8 *)(local_58._24_8_ + 0xc);
    } while (lVar5 < (longlong)(ulonglong)uVar1);
  }
  if (local_58._0_8_ != 0) {
    if ((ulonglong)local_58._8_8_ < *(ulonglong *)(local_58._0_8_ + 0x28)) {
      local_58._8_8_ = *(ulonglong *)(local_58._0_8_ + 0x28);
    }
    *(undefined8 *)(local_58._0_8_ + 0x28) = local_58._8_8_;
    LOCK();
    *(int *)(local_58._0_8_ + 0x30) = *(int *)(local_58._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_58._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_58._0_8_ + 0x20));
    }
  }
  return;
}

