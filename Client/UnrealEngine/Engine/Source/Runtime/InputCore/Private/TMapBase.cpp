// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputCore
// Functions: 2

// GetKeys<TSizedDefaultAllocator<32>_> @ 14238cd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FKey,TSharedPtr<FKeyDetails,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FKey,TSharedPtr<FKeyDetails,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>_>
           *this,TArray<FKey,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FKey *pFVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TMapBase<FKey,TSharedPtr<FKeyDetails,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>_>
  *pTVar6;
  bool bVar7;
  FNameEntryId FVar8;
  int iVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  ForElementType<unsigned_int> FVar21;
  uint *puVar22;
  FName FVar23;
  longlong lVar24;
  undefined1 auStackY_1a8 [32];
  FKey local_158;
  undefined4 local_140;
  uint uStack_13c;
  uint uStack_138;
  undefined4 uStack_134;
  TMapBase<FKey,TSharedPtr<FKeyDetails,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>_>
  *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined4 local_108;
  int local_104;
  int local_100;
  TMapBase<FKey,TSharedPtr<FKeyDetails,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>_>
  *local_f8;
  uint uStack_f0;
  uint uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  ulonglong uVar20;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  piVar1 = &param_1->ArrayMax;
  pFVar2 = (FKey *)(param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<FKey,int>(pFVar2,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FKey,int>(pFVar2,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  uVar20 = 0;
  FVar23.ComparisonIndex.Value = 1;
  FVar23.Number = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  uVar18 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_158.KeyName.ComparisonIndex.Value = 1;
  local_158.KeyName.Number = 0;
  uVar14 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar14 == 0) goto LAB_14238cff9;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar14);
  uVar15 = 1;
  if (3 < uVar14) {
    uVar13 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_108 = (undefined4)lVar12;
    uVar15 = 1 << ((byte)lVar12 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar15 <= (int)local_50)) goto LAB_14238cff9;
  local_50 = uVar15;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar15 != 0) {
    uVar14 = uVar15;
    if (uVar15 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar14 = 0;
        goto LAB_14238ce45;
      }
    }
    else {
LAB_14238ce45:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar14,4);
    }
    if (0 < (int)uVar15) {
      uVar19 = (ulonglong)uVar15;
      uVar13 = uVar20;
      do {
        FVar11.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_58.Data;
        }
        uVar10 = uVar13 & (longlong)(int)uVar15 - 1U;
        uVar13 = uVar13 + 1;
        *(undefined4 *)(FVar11.Data + uVar10 * 4) = 0xffffffff;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  if (local_50 != 0) {
    local_158.KeyDetails.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)(local_98 + 0x10);
    local_158.KeyDetails.Object._4_4_ = 1;
    local_158.KeyDetails.Object._0_4_ = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    uVar13 = uVar20;
    if (local_70 != 0) {
      FVar21 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar21 = local_78;
      }
      uVar14 = *(uint *)FVar21;
      uVar19 = uVar20;
      while (uVar14 == 0) {
        uStack_138 = (int)uVar19 + 0x20;
        uVar19 = (ulonglong)uStack_138;
        iVar9 = (int)uVar13;
        local_158.KeyDetails.Object._0_4_ = iVar9 + 1;
        uVar13 = (ulonglong)(uint)local_158.KeyDetails.Object;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 <
            (int)(uint)local_158.KeyDetails.Object) goto LAB_14238cf52;
        uVar14 = ((uint *)((longlong)FVar21 + 4))[iVar9];
      }
      local_158.KeyDetails.Object._4_4_ = -uVar14 & uVar14;
      uVar13 = (ulonglong)local_158.KeyDetails.Object._4_4_ * 2 + 1;
      lVar12 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_104 = (int)lVar12;
      uStack_13c = local_104 + -1 + uStack_138;
      uVar13 = (ulonglong)uStack_13c;
      if ((int)local_70 < (int)uStack_13c) {
LAB_14238cf52:
        uVar13 = (ulonglong)local_70;
        uStack_13c = local_70;
      }
    }
    local_140 = 0xffffffff;
    local_c8 = (longlong *)local_98;
    local_c0._padding_ =
         CONCAT44(local_158.KeyDetails.Object._4_4_,(uint)local_158.KeyDetails.Object);
    local_c0.CurrentBitIndex = uStack_13c;
    local_c0.UnvisitedBitMask = 0xffffffff;
    local_c0._28_4_ = uStack_134;
    local_c0.BaseBitIndex = uStack_138;
    FVar23 = local_158.KeyName;
    local_c0.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)
         local_158.KeyDetails.SharedReferenceCount.ReferenceController;
    if ((int)uVar13 < (int)local_70) {
      do {
        puVar17 = (undefined8 *)((longlong)(int)uVar13 * 0x20 + *local_c8);
        uVar3 = *puVar17;
        uVar14 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar14 = local_50 - 1 & uVar14 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar17 + 0x1c) = uVar14;
        FVar11.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_58.Data;
        }
        uVar19 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar14;
        *(undefined4 *)(puVar17 + 3) = *(undefined4 *)(FVar11.Data + uVar19 * 4);
        *(int *)(FVar11.Data + uVar19 * 4) = (int)uVar13;
        local_c0.UnvisitedBitMask = local_c0.UnvisitedBitMask & ~local_c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c0);
        uVar13 = (ulonglong)(uint)local_c0.CurrentBitIndex;
        FVar23 = local_158.KeyName;
      } while (local_c0.CurrentBitIndex < (local_c0.Array)->NumBits);
    }
  }
LAB_14238cff9:
  FVar8 = FVar23.ComparisonIndex.Value;
  uVar14 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if (*piVar1 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar14,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar14 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar13 = uVar20;
  local_d8 = uVar18;
  if (uVar14 != 0) {
    puVar22 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar13 = (ulonglong)uVar14;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)TStack_128.Array;
    }
    uVar15 = *puVar22;
    uVar19 = uVar20;
    while( true ) {
      uVar18 = (uint)uVar20;
      local_d8 = (uint)uVar19;
      if (uVar15 != 0) break;
      lVar12 = (longlong)(int)uVar18;
      local_d8 = local_d8 + 0x20;
      uVar19 = (ulonglong)local_d8;
      uVar18 = uVar18 + 1;
      uVar20 = (ulonglong)uVar18;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_14238d09f;
      uVar15 = puVar22[lVar12 + 1];
    }
    FVar8.Value = -uVar15 & uVar15;
    uVar20 = (ulonglong)FVar8.Value * 2 + 1;
    lVar12 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_100 = (int)lVar12;
    uVar15 = (local_d8 - 1) + local_100;
    if ((int)uVar14 < (int)uVar15) {
      uVar15 = uVar14;
    }
    uVar13 = (ulonglong)uVar15;
  }
LAB_14238d09f:
  uStack_dc = (uint)uVar13;
  uStack_e0 = 0xffffffff;
  TStack_128._padding_ = CONCAT44(FVar8.Value,uVar18);
  TStack_128.UnvisitedBitMask = 0xffffffff;
  TStack_128._28_4_ = uStack_dc;
  TStack_128.BaseBitIndex = local_d8;
  local_130 = this;
  local_f8 = this;
  uStack_f0 = uVar18;
  uStack_ec = FVar8.Value;
  local_e8 = (undefined1 *)TStack_128.Array;
  uStack_d4 = uStack_dc;
  TStack_128.CurrentBitIndex = uStack_dc;
  if ((int)uStack_dc < (int)uVar14) {
    do {
      pTVar6 = local_130;
      lVar12 = *(longlong *)&(local_130->Pairs).Elements;
      lVar24 = (longlong)(int)uVar13 * 0x30;
      uVar3 = *(undefined8 *)(lVar12 + lVar24);
      uVar14 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
      if (local_98._8_4_ != local_64) {
        FVar11.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_58.Data;
        }
        iVar9 = *(int *)(FVar11.Data +
                        (ulonglong)(local_50 - 1 & uVar14 + (int)((ulonglong)uVar3 >> 0x20)) * 4);
        if (iVar9 != -1) {
          do {
            if (*(longlong *)(local_98._0_8_ + (longlong)iVar9 * 0x20) ==
                *(longlong *)(lVar12 + lVar24)) goto LAB_14238d241;
            iVar9 = *(int *)(local_98._0_8_ + (longlong)iVar9 * 0x20 + 0x18);
          } while (iVar9 != -1);
        }
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      pFVar16 = (FScriptContainerElement *)(*(longlong *)&(pTVar6->Pairs).Elements + lVar24);
      if (((pFVar4 <= pFVar16) && (pFVar16 < pFVar4 + (longlong)*piVar1 * 0x18)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar9 = (*pcVar5)();
        return iVar9;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x18;
      *(undefined8 *)pFVar4 = *(undefined8 *)pFVar16;
      *(undefined8 *)(pFVar4 + 8) = *(undefined8 *)(pFVar16 + 8);
      lVar12 = *(longlong *)(pFVar16 + 0x10);
      *(longlong *)(pFVar4 + 0x10) = lVar12;
      if (lVar12 != 0) {
        LOCK();
        *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
        UNLOCK();
      }
      TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator>::Emplace<FKey_const_&>
                ((TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)local_98,&local_158,
                 (bool *)((longlong)TStack_128.CurrentBitIndex * 0x30 +
                         *(longlong *)&(pTVar6->Pairs).Elements));
LAB_14238d241:
      TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
      uVar13 = (ulonglong)(uint)TStack_128.CurrentBitIndex;
    } while (TStack_128.CurrentBitIndex < (TStack_128.Array)->NumBits);
  }
  iVar9 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar9;
}

// FindKey @ 14238f9b0

/* WARNING: Type propagation algorithm not settling */

uint * __thiscall
TMapBase<unsigned_int,FKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FKey,0>_>::
FindKey(TMapBase<unsigned_int,FKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FKey,0>_>
        *this,FKey *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TMapBase<unsigned_int,FKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FKey,0>_>
  *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  iStack_38 = 0;
  uStack_34 = 1;
  local_20 = 0;
  iStack_24 = 0;
  if (iVar2 != 0) {
    puVar5 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar5 == (uint *)0x0) {
      puVar5 = (uint *)TStack_60.Array;
    }
    uVar3 = *puVar5;
    while (uVar3 == 0) {
      lVar4 = (longlong)iStack_38;
      local_20 = local_20 + 0x20;
      iStack_38 = iStack_38 + 1;
      iStack_24 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_14238fa49;
      uVar3 = puVar5[lVar4 + 1];
    }
    uStack_34 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_34 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_24 = (int)lVar4 + -1 + local_20;
    if (iVar2 < iStack_24) {
      iStack_24 = iVar2;
    }
  }
LAB_14238fa49:
  uStack_28 = 0xffffffff;
  iStack_1c = TStack_60.CurrentBitIndex;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = local_20;
  local_40 = this;
  local_30 = (undefined1 *)TStack_60.Array;
  TStack_60._padding_._0_4_ = iStack_38;
  TStack_60._padding_._4_4_ = uStack_34;
  TStack_60.CurrentBitIndex = iStack_24;
  if (iStack_24 < iVar2) {
    do {
      puVar5 = (uint *)(*(longlong *)&(this->Pairs).Elements +
                       (longlong)TStack_60.CurrentBitIndex * 0x28);
      if (*(FName *)(puVar5 + 2) == param_1->KeyName) {
        return puVar5;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return (uint *)0x0;
}

