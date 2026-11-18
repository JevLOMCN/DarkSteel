// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraSimCaching
// Functions: 3

// Emplace<TPairInitializer<FMovieSceneSharedDataId_const_&,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_&&>_> @ 14ea21d60

FSetElementId __thiscall
TSet<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>,TDefaultMapHashableKeyFuncs<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FMovieSceneSharedDataId_const_&,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_&&>_>
          (TSet<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>,TDefaultMapHashableKeyFuncs<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FMovieSceneSharedDataId_const_&,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  uint uVar13;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar1 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar8 * 0x38 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar8);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>_>
       *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(undefined4 *)local_38.Pointer = **(undefined4 **)param_2;
    bVar6 = *(undefined1 *)((longlong)local_38.Pointer + 0x28) & 0xfe;
    *(byte *)((longlong)local_38.Pointer + 0x28) = bVar6 | 2;
    if ((*(byte *)(puVar4 + 4) & 1) != 0) {
      *(byte *)((longlong)local_38.Pointer + 0x28) = bVar6 | 3;
      *(byte *)(puVar4 + 4) = *(byte *)(puVar4 + 4) & 0xfe;
      *(undefined1 *)((longlong)local_38.Pointer + 0x28) =
           *(undefined1 *)((longlong)local_38.Pointer + 0x28) ^
           (*(byte *)(puVar4 + 4) ^ *(undefined1 *)((longlong)local_38.Pointer + 0x28)) & 2;
      uVar5 = puVar4[1];
      *(undefined8 *)((longlong)local_38.Pointer + 8) = *puVar4;
      *(undefined8 *)((longlong)local_38.Pointer + 0x10) = uVar5;
      uVar5 = puVar4[3];
      *(undefined8 *)((longlong)local_38.Pointer + 0x18) = puVar4[2];
      *(undefined8 *)((longlong)local_38.Pointer + 0x20) = uVar5;
    }
    *(undefined4 *)((longlong)local_38.Pointer + 0x30) = 0xffffffff;
  }
  uVar13 = *(uint *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  bVar7 = TryReplaceExisting(this,uVar13,local_38.Pointer,local_res8,in_R9);
  if (!bVar7) {
    uVar10 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar10) {
      uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= this->HashSize)) {
      uVar13 = this->HashSize - 1U & uVar13;
      *(uint *)((longlong)local_38.Pointer + 0x34) = uVar13;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar13;
      *(undefined4 *)((longlong)local_38.Pointer + 0x30) =
           *(undefined4 *)((longlong)FVar11 + uVar9 * 4);
      *(int *)((longlong)FVar11 + uVar9 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Rehash @ 14ea246d0

void __thiscall
TSet<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>,TDefaultMapHashableKeyFuncs<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>,TDefaultMapHashableKeyFuncs<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
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
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ea247ac;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ea247ac:
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
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x38 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[0xd] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[0xc] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// TryReplaceExisting @ 14ea24c90

bool __thiscall
TSet<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>,TDefaultMapHashableKeyFuncs<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>,TDefaultMapHashableKeyFuncs<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  void *_Dst;
  uint uVar14;
  bool bVar15;
  
  iVar13 = *(int *)&(this->Elements).field_0x8;
  bVar15 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar13 - iVar4 != 1) && (iVar13 != iVar4)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar13 != -1) {
      lVar5 = *(longlong *)&this->Elements;
      do {
        if (*(int *)((longlong)iVar13 * 0x38 + lVar5) == *(int *)param_2) {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            _Dst = (void *)((longlong)iVar13 * 0x38 + lVar5);
            bVar3 = *(byte *)((longlong)_Dst + 0x28);
            if ((bVar3 & 1) != 0) {
              puVar11 = (undefined8 *)((longlong)_Dst + 8);
              if ((bVar3 & 2) == 0) {
                puVar11 = *(undefined8 **)((longlong)_Dst + 8);
              }
              *(byte *)((longlong)_Dst + 0x28) = bVar3 & 0xfe;
              (**(code **)*puVar11)(puVar11,0);
              if ((*(byte *)((longlong)_Dst + 0x28) & 2) == 0) {
                FMemory::Free(*(void **)((longlong)_Dst + 8));
              }
            }
            memmove(_Dst,param_2,0x30);
            iVar4 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar5 = *(longlong *)&this->Elements;
            bVar3 = (byte)iVar4 & 0x1f;
            uVar14 = 1 << bVar3 | 1U >> 0x20 - bVar3;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar2 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            if (((*(uint *)(puVar10 + lVar2) & uVar14) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x38 + lVar5) = iVar4;
            }
            uVar9 = 0xffffffff;
            *(undefined4 *)((longlong)iVar4 * 0x38 + lVar5) = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar9 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            *(undefined4 *)((longlong)iVar4 * 0x38 + 4 + lVar5) = uVar9;
            puVar10 = &(this->Elements).field_0x34;
            *(int *)puVar10 = *(int *)puVar10 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar4;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar14;
            *param_3 = iVar13;
          }
          break;
        }
        iVar13 = *(int *)((longlong)iVar13 * 0x38 + 0x30 + lVar5);
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

