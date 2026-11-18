// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraAnimNotifies
// Functions: 3

// Emplace<TKeyInitializer<UMeshComponent_*_&&>_> @ 14a0683c0

FSetElementId __thiscall
TSet<TTuple<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo>,TDefaultMapHashableKeyFuncs<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<UMeshComponent_*_&&>_>
          (TSet<TTuple<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo>,TDefaultMapHashableKeyFuncs<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<UMeshComponent_*_&&> *param_1,bool *param_2)

{
  undefined1 *this_00;
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  undefined1 *puVar10;
  char *in_R9;
  bool bVar11;
  FSparseArrayAllocationInfo local_38;
  
  iVar4 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar4 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    this_00 = &(this->Elements).field_0x10;
    iVar4 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    uVar5 = iVar4 >> 0x1f & 0x1f;
    iVar4 = iVar4 + uVar5;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = this_00;
    }
    *(uint *)(puVar10 + (longlong)(iVar4 >> 5) * 4) =
         *(uint *)(puVar10 + (longlong)(iVar4 >> 5) * 4) &
         ~(1 << (((byte)iVar4 & 0x1f) - (char)uVar5 & 0x1f));
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar4 = iVar4 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar3);
  if (local_38.Pointer != (ulonglong *)0x0) {
    *(ulonglong *)local_38.Pointer = **(ulonglong **)param_2;
    *(ulonglong *)((longlong)local_38.Pointer + 8) = 0x3f800000;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  uVar6 = *(ulonglong *)local_38.Pointer;
  bVar11 = false;
  uVar5 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar4 = *(int *)&(this->Elements).field_0x8;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((iVar4 - iVar3 != 1) && (iVar4 != iVar3)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar4 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(ulonglong *)(lVar2 + (longlong)iVar4 * 0x18) == uVar6) {
          bVar11 = iVar4 != -1;
          if (bVar11) {
            memmove((void *)(lVar2 + (longlong)iVar4 * 0x18),local_38.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar4;
          }
          break;
        }
        iVar4 = *(int *)(lVar2 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)local_38.Pointer + 0x14) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_38.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// RemoveImpl<UMeshComponent_const_*> @ 14a068ac0

int __thiscall
TSet<TTuple<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo>,TDefaultMapHashableKeyFuncs<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,0>,FDefaultSetAllocator>
::RemoveImpl<UMeshComponent_const_*>
          (TSet<TTuple<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo>,TDefaultMapHashableKeyFuncs<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,UMeshComponent **param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  undefined1 *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while (lVar7 = (longlong)(int)uVar6 * 0x18,
        *(UMeshComponent **)(lVar7 + *(longlong *)&this->Elements) != *param_2) {
    uVar6 = *(uint *)(lVar7 + 0x10 + *(longlong *)&this->Elements);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14a068ba7;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
LAB_14a068ba7:
  FVar5 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + lVar7;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar7 + 0x14) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar8 = *(uint *)(lVar7 + 0x10);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar1 * 0x18 + 0x10);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// Rehash @ 14a06a040

void __thiscall
TSet<TTuple<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo>,TDefaultMapHashableKeyFuncs<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo>,TDefaultMapHashableKeyFuncs<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,0>,FDefaultSetAllocator>
         *this)

{
  ForElementType<FSetElementId> *this_00;
  int *piVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  this_00 = &this->Hash;
  uVar6 = this->HashSize;
  uVar11 = (ulonglong)uVar6;
  piVar1 = &this->HashSize;
  if ((this->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  if ((uVar6 != 0) &&
     (TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,uVar6,4), 0 < (int)uVar6)) {
    uVar8 = uVar10;
    do {
      FVar3 = (this->Hash).SecondaryData;
      FVar7 = (ForElementType<FSetElementId>)this_00;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar7 = FVar3;
      }
      uVar5 = uVar8 & (longlong)(int)uVar6 - 1U;
      uVar8 = uVar8 + 1;
      *(undefined4 *)((longlong)FVar7 + uVar5 * 4) = 0xffffffff;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar6 != 0) {
      puVar12 = *(uint **)&(this->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_40.Array;
      }
      uVar2 = *puVar12;
      uVar11 = uVar10;
      while (uVar2 == 0) {
        iVar9 = (int)uVar10;
        uStack_50 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_50;
        local_68 = iVar9 + 1;
        uVar10 = (ulonglong)local_68;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_14a06a17b;
        uVar2 = puVar12[(longlong)iVar9 + 1];
      }
      uStack_64 = -uVar2 & uVar2;
      uVar11 = (ulonglong)uStack_64 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_54 = (int)lVar4 + -1 + uStack_50;
      uVar10 = (ulonglong)uStack_54;
      if ((int)uVar6 < (int)uStack_54) {
LAB_14a06a17b:
        uVar10 = (ulonglong)uVar6;
        uStack_54 = uVar6;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = uStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    if ((int)uVar10 < (int)uVar6) {
      do {
        iVar9 = (int)uVar10;
        lVar4 = *(longlong *)&this->Elements + (longlong)iVar9 * 0x18;
        uVar11 = *(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar9 * 0x18);
        uVar6 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = (uVar6 >> 0x10 ^ uVar6) & *piVar1 - 1U;
        *(uint *)(lVar4 + 0x14) = uVar6;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)this_00;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar11 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)FVar7 + uVar11 * 4);
        *(int *)((longlong)FVar7 + uVar11 * 4) = iVar9;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
        uVar10 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

