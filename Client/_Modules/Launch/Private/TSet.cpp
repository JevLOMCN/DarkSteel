// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 2

// Emplace<FFileInPakFileHistoryHelper::FFileInPakFileHistory> @ 148d995c0

FSetElementId __thiscall
TSet<FFileInPakFileHistoryHelper::FFileInPakFileHistory,DefaultKeyFuncs<FFileInPakFileHistoryHelper::FFileInPakFileHistory,0>,FDefaultSetAllocator>
::Emplace<FFileInPakFileHistoryHelper::FFileInPakFileHistory>
          (TSet<FFileInPakFileHistoryHelper::FFileInPakFileHistory,DefaultKeyFuncs<FFileInPakFileHistoryHelper::FFileInPakFileHistory,0>,FDefaultSetAllocator>
           *this,FFileInPakFileHistory *param_1,bool *param_2)

{
  undefined8 *_Dst;
  int iVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FFileInPakFileHistory *_Src;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  char *in_R9;
  FSparseArrayAllocationInfo local_48;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  _Src = (FFileInPakFileHistory *)0x0;
  if (local_48.Pointer != (FFileInPakFileHistory *)0x0) {
    ((local_48.Pointer)->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ((local_48.Pointer)->Data).AllocatorInstance.Data = *(FScriptContainerElement **)param_2;
    param_2[0] = false;
    param_2[1] = false;
    param_2[2] = false;
    param_2[3] = false;
    param_2[4] = false;
    param_2[5] = false;
    param_2[6] = false;
    param_2[7] = false;
    ((local_48.Pointer)->Data).ArrayNum = *(int *)(param_2 + 8);
    ((local_48.Pointer)->Data).ArrayMax = *(int *)(param_2 + 0xc);
    param_2[8] = false;
    param_2[9] = false;
    param_2[10] = false;
    param_2[0xb] = false;
    param_2[0xc] = false;
    param_2[0xd] = false;
    param_2[0xe] = false;
    param_2[0xf] = false;
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).AllocatorInstance.Data =
         *(FScriptContainerElement **)(param_2 + 0x10);
    param_2[0x10] = false;
    param_2[0x11] = false;
    param_2[0x12] = false;
    param_2[0x13] = false;
    param_2[0x14] = false;
    param_2[0x15] = false;
    param_2[0x16] = false;
    param_2[0x17] = false;
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).ArrayNum = *(int *)(param_2 + 0x18);
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).ArrayMax = *(int *)(param_2 + 0x1c);
    param_2[0x18] = false;
    param_2[0x19] = false;
    param_2[0x1a] = false;
    param_2[0x1b] = false;
    param_2[0x1c] = false;
    param_2[0x1d] = false;
    param_2[0x1e] = false;
    param_2[0x1f] = false;
    *(undefined4 *)
     &(((FFileInPakFileHistory *)((longlong)local_48.Pointer + 0x20))->PakFileName).Data.
      AllocatorInstance.Data = 0xffffffff;
    _Src = local_48.Pointer;
  }
  uVar7 = ::GetTypeHash(_Src);
  iVar1 = *(int *)&(this->Elements).field_0x8;
  bVar5 = false;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if ((iVar1 - iVar6 != 1) && (iVar1 != iVar6)) {
    FVar10 = (this->Hash).SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar10 + (ulonglong)(this->HashSize - 1U & uVar7) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x28 + 0x20 + *(longlong *)&this->Elements))
    {
      bVar5 = ::operator==((FFileInPakFileHistory *)
                           (*(longlong *)&this->Elements + (longlong)iVar1 * 0x28),_Src);
      if (bVar5) {
        bVar5 = iVar1 != -1;
        if (bVar5) {
          _Dst = (undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar1 * 0x28);
          pvVar4 = *(void **)(*(longlong *)&this->Elements + 0x10 + (longlong)iVar1 * 0x28);
          if (pvVar4 != (void *)0x0) {
            FMemory::Free(pvVar4);
          }
          pvVar4 = (void *)*_Dst;
          if (pvVar4 != (void *)0x0) {
            FMemory::Free(pvVar4);
          }
          memmove(_Dst,_Src,0x20);
          TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,local_48.Index,1);
          local_48.Index = iVar1;
        }
        goto LAB_148d99739;
      }
    }
    bVar5 = false;
  }
LAB_148d99739:
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar5;
  }
  if (bVar5 == false) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & uVar7;
      *(uint *)((longlong)&_Src[1].PakFileName.Data.AllocatorInstance.Data + 4) = uVar7;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)&_Src[1].PakFileName.Data.AllocatorInstance.Data =
           *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&(param_1->PakFileName).Data.AllocatorInstance.Data = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Rehash @ 148db1870

void __thiscall
TSet<FFileInPakFileHistoryHelper::FFileInPakFileHistory,DefaultKeyFuncs<FFileInPakFileHistoryHelper::FFileInPakFileHistory,0>,FDefaultSetAllocator>
::Rehash(TSet<FFileInPakFileHistoryHelper::FFileInPakFileHistory,DefaultKeyFuncs<FFileInPakFileHistoryHelper::FFileInPakFileHistory,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  FFileInPakFileHistory *pFVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar5 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_148db1947;
        uVar5 = puVar9[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_148db1947:
        iStack_44 = iVar3;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        iVar3 = local_30.CurrentBitIndex;
        pFVar2 = (FFileInPakFileHistory *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28);
        uVar5 = ::GetTypeHash(pFVar2);
        uVar5 = *piVar1 - 1U & uVar5;
        *(uint *)((longlong)&pFVar2[1].PakFileName.Data.AllocatorInstance.Data + 4) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)&pFVar2[1].PakFileName.Data.AllocatorInstance.Data =
             *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar3;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

