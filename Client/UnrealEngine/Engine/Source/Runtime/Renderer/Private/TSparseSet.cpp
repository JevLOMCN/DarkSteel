// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// Emplace<FDistanceFieldAssetState_const_&> @ 144855ab0

FSetElementId __thiscall
TSparseSet<FDistanceFieldAssetState,TFDistanceFieldAssetStateFuncs,FDefaultSparseSetAllocator>::
Emplace<FDistanceFieldAssetState_const_&>
          (TSparseSet<FDistanceFieldAssetState,TFDistanceFieldAssetStateFuncs,FDefaultSparseSetAllocator>
           *this,FDistanceFieldAssetState *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  FDistanceFieldVolumeData *pFVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  FDistanceFieldAssetMipState *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  int iVar11;
  char *in_R9;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar11 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar11 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xe8,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar11 = iVar11 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0xe8 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0xe8 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<232,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<232,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (FDistanceFieldAssetState *)0x0) {
    FDistanceFieldAssetState::FDistanceFieldAssetState
              (local_48.Pointer,(FDistanceFieldAssetState *)param_2);
    *(undefined4 *)&((FDistanceFieldAssetState *)((longlong)local_48.Pointer + 0xe0))->BuiltData =
         0xffffffff;
  }
  pFVar3 = *(FDistanceFieldVolumeData **)local_48.Pointer;
  bVar12 = false;
  uVar5 = ((uint)((ulonglong)pFVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar3 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar11 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((iVar11 - iVar4 != 1) && (iVar11 != iVar4)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar11 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar11 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(FDistanceFieldVolumeData **)((longlong)iVar11 * 0xe8 + lVar2) == pFVar3) {
          bVar12 = iVar11 != -1;
          if (bVar12) {
            _Dst = (void *)((longlong)iVar11 * 0xe8 + lVar2);
            pFVar6 = *(FDistanceFieldAssetMipState **)((longlong)_Dst + 0xd0);
            if (*(FDistanceFieldAssetMipState **)((longlong)_Dst + 0xd0) ==
                (FDistanceFieldAssetMipState *)0x0) {
              pFVar6 = (FDistanceFieldAssetMipState *)((longlong)_Dst + 0x10);
            }
            DestructItems<FDistanceFieldAssetMipState,int>(pFVar6,*(int *)((longlong)_Dst + 0xd8));
            if (*(void **)((longlong)_Dst + 0xd0) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0xd0));
            }
            memmove(_Dst,local_48.Pointer,0xe0);
            TSparseArrayBase<232,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<232,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar11;
          }
          break;
        }
        iVar11 = *(int *)((longlong)iVar11 * 0xe8 + 0xe0 + lVar2);
      } while (iVar11 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)
                &((FDistanceFieldAssetState *)((longlong)local_48.Pointer + 0xe0))->BuiltData + 4) =
           uVar5;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)&((FDistanceFieldAssetState *)((longlong)local_48.Pointer + 0xe0))->BuiltData =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->BuiltData = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// TSparseSet<FDistanceFieldAssetState,TFDistanceFieldAssetStateFuncs,FDefaultSparseSetAllocator> @ 14485b390

TSparseSet<FDistanceFieldAssetState,TFDistanceFieldAssetStateFuncs,FDefaultSparseSetAllocator> *
__thiscall
TSparseSet<FDistanceFieldAssetState,TFDistanceFieldAssetStateFuncs,FDefaultSparseSetAllocator>::
TSparseSet<FDistanceFieldAssetState,TFDistanceFieldAssetStateFuncs,FDefaultSparseSetAllocator>
          (TSparseSet<FDistanceFieldAssetState,TFDistanceFieldAssetStateFuncs,FDefaultSparseSetAllocator>
           *this,TSparseSet<FDistanceFieldAssetState,TFDistanceFieldAssetStateFuncs,FDefaultSparseSetAllocator>
                 *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  (this->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = 0;
  if (this != param_1) {
    TSparseArray<TSparseSetElement<FDistanceFieldAssetState>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,0);
    if (*(void **)&this->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&this->Elements);
    }
    _Src = &(param_1->Elements).field_0x10;
    *(undefined8 *)&this->Elements = *(undefined8 *)&param_1->Elements;
    _Dst = &(this->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)&(this->Elements).field_0x8 = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)&(this->Elements).field_0xc = *(undefined4 *)&(param_1->Elements).field_0xc;
    *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->Elements).field_0x20 = *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)&(this->Elements).field_0x28 = *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)&(this->Elements).field_0x2c = *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
  }
  if ((param_1->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->Hash).InlineData = *(undefined4 *)(param_1->Hash).InlineData;
  }
  FVar2 = (this->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->Hash).SecondaryData = (param_1->Hash).SecondaryData;
  (param_1->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = param_1->HashSize;
  param_1->HashSize = 0;
  return this;
}

// FindId @ 144879a80

FSetElementId __thiscall
TSparseSet<FDistanceFieldAssetState,TFDistanceFieldAssetStateFuncs,FDefaultSparseSetAllocator>::
FindId(TSparseSet<FDistanceFieldAssetState,TFDistanceFieldAssetStateFuncs,FDefaultSparseSetAllocator>
       *this,FDistanceFieldVolumeData *param_1)

{
  int iVar1;
  ForElementType<FSetElementId> FVar2;
  ulonglong in_R8;
  uint uVar3;
  
  uVar3 = ((uint)(in_R8 >> 0x14) & 0xffff ^ (uint)(in_R8 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar2 = (this->Hash).SecondaryData;
    if (FVar2 == (ForElementType<FSetElementId>)0x0) {
      FVar2 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar1 = *(int *)((longlong)FVar2 +
                    (ulonglong)(this->HashSize - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar1 * 0xe8 + *(longlong *)&this->Elements) == in_R8) {
          *(int *)&param_1->_padding_ = iVar1;
          return (FSetElementId)(int)param_1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0xe8 + 0xe0 + *(longlong *)&this->Elements);
      } while (iVar1 != -1);
    }
  }
  *(undefined4 *)&param_1->_padding_ = 0xffffffff;
  return (FSetElementId)(int)param_1;
}

// Rehash @ 144890e60

void __thiscall
TSparseSet<FDistanceFieldAssetState,TFDistanceFieldAssetStateFuncs,FDefaultSparseSetAllocator>::
Rehash(TSparseSet<FDistanceFieldAssetState,TFDistanceFieldAssetStateFuncs,FDefaultSparseSetAllocator>
       *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
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
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_144890f3c;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_144890f3c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0xe8 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0xe4) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 0x1c) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

