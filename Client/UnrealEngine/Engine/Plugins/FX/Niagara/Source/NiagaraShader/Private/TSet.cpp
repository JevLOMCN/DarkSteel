// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 4

// Emplace<TPairInitializer<FNiagaraShaderMapId_const_&,FNiagaraShaderMap_*_&&>_> @ 148ded800

FSetElementId __thiscall
TSet<TTuple<FNiagaraShaderMapId,FNiagaraShaderMap_*>,TDefaultMapHashableKeyFuncs<FNiagaraShaderMapId,FNiagaraShaderMap_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FNiagaraShaderMapId_const_&,FNiagaraShaderMap_*_&&>_>
          (TSet<TTuple<FNiagaraShaderMapId,FNiagaraShaderMap_*>,TDefaultMapHashableKeyFuncs<FNiagaraShaderMapId,FNiagaraShaderMap_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FNiagaraShaderMapId_const_&,FNiagaraShaderMap_*_&&> *param_1,
          bool *param_2)

{
  undefined1 *this_00;
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  FNiagaraShaderMapId *this_01;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  char *in_R9;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar5 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x90,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    this_00 = &(this->Elements).field_0x10;
    iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
    puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
    uVar11 = iVar5 >> 0x1f & 0x1f;
    iVar5 = iVar5 + uVar11;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = this_00;
    }
    *(uint *)(puVar12 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar12 + (longlong)(iVar5 >> 5) * 4) &
         ~(1 << (((byte)iVar5 & 0x1f) - (char)uVar11 & 0x1f));
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar5 = iVar5 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar6 * 0x90);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x90) = 0xffffffff;
    }
  }
  TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  if (local_48.Pointer != (FNiagaraShaderMapId *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    FNiagaraShaderMapId::FNiagaraShaderMapId(local_48.Pointer,*(FNiagaraShaderMapId **)param_2);
    uVar4 = *puVar3;
    (((FNiagaraShaderMapId *)((longlong)local_48.Pointer + 0x80))->CompilerVersionID).A = (int)uVar4
    ;
    (((FNiagaraShaderMapId *)((longlong)local_48.Pointer + 0x80))->CompilerVersionID).B =
         (int)((ulonglong)uVar4 >> 0x20);
    (((FNiagaraShaderMapId *)((longlong)local_48.Pointer + 0x80))->CompilerVersionID).C = 0xffffffff
    ;
  }
  bVar13 = false;
  uVar11 = *(uint *)((FSHAHash *)((longlong)local_48.Pointer + 0x38))->Hash;
  iVar5 = local_48.Index;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FNiagaraShaderMapId>(this,uVar11,local_48.Pointer);
    bVar13 = iVar6 != -1;
    if (bVar13) {
      this_01 = (FNiagaraShaderMapId *)((longlong)iVar6 * 0x90 + *(longlong *)&this->Elements);
      FNiagaraShaderMapId::~FNiagaraShaderMapId(this_01);
      memmove(this_01,local_48.Pointer,0x88);
      TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      iVar5 = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
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
      uVar11 = this->HashSize - 1U & uVar11;
      (((FNiagaraShaderMapId *)((longlong)local_48.Pointer + 0x80))->CompilerVersionID).D = uVar11;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar11;
      (((FNiagaraShaderMapId *)((longlong)local_48.Pointer + 0x80))->CompilerVersionID).C =
           *(uint *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = iVar5;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar5;
  return (FSetElementId)(int)param_1;
}

// FindIndexByHash<FNiagaraShaderMapId> @ 148dee840

int __thiscall
TSet<TTuple<FNiagaraShaderMapId,FNiagaraShaderMap_*>,TDefaultMapHashableKeyFuncs<FNiagaraShaderMapId,FNiagaraShaderMap_*,0>,FDefaultSetAllocator>
::FindIndexByHash<FNiagaraShaderMapId>
          (TSet<TTuple<FNiagaraShaderMapId,FNiagaraShaderMap_*>,TDefaultMapHashableKeyFuncs<FNiagaraShaderMapId,FNiagaraShaderMap_*,0>,FDefaultSetAllocator>
           *this,uint param_1,FNiagaraShaderMapId *param_2)

{
  int iVar1;
  bool bVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x90 + 0x88 + *(longlong *)&this->Elements))
    {
      bVar2 = FNiagaraShaderMapId::operator==
                        ((FNiagaraShaderMapId *)
                         (*(longlong *)&this->Elements + (longlong)iVar1 * 0x90),param_2);
      if (bVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// RemoveImpl<FNiagaraShaderMapId> @ 148def620

int __thiscall
TSet<TTuple<FNiagaraShaderMapId,FNiagaraShaderMap_*>,TDefaultMapHashableKeyFuncs<FNiagaraShaderMapId,FNiagaraShaderMap_*,0>,FDefaultSetAllocator>
::RemoveImpl<FNiagaraShaderMapId>
          (TSet<TTuple<FNiagaraShaderMapId,FNiagaraShaderMap_*>,TDefaultMapHashableKeyFuncs<FNiagaraShaderMapId,FNiagaraShaderMap_*,0>,FDefaultSetAllocator>
           *this,uint param_1,FNiagaraShaderMapId *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  longlong lVar7;
  FNiagaraShaderMapId *this_00;
  undefined1 *puVar8;
  uint *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    this_00 = (FNiagaraShaderMapId *)(*(longlong *)&this->Elements + (longlong)(int)uVar6 * 0x90);
    bVar3 = FNiagaraShaderMapId::operator==(this_00,param_2);
    if (bVar3) break;
    uVar6 = this_00[1].CompilerVersionID.C;
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
    puVar8 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar8 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_148def70f;
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
LAB_148def70f:
  FVar5 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + (longlong)(int)uVar6 * 0x90;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar9 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar7 + 0x8c) * 4);
  while( true ) {
    uVar1 = *puVar9;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar9 = *(uint *)(lVar7 + 0x88);
      TSparseArray<TSparseSetElement<TTuple<FNiagaraShaderMapId,FNiagaraShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar9 = (uint *)(*(longlong *)&this->Elements + 0x88 + (longlong)(int)uVar1 * 0x90);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// Rehash @ 148e0bf80

void __thiscall
TSet<TTuple<FNiagaraShaderMapId,FNiagaraShaderMap_*>,TDefaultMapHashableKeyFuncs<FNiagaraShaderMapId,FNiagaraShaderMap_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FNiagaraShaderMapId,FNiagaraShaderMap_*>,TDefaultMapHashableKeyFuncs<FNiagaraShaderMapId,FNiagaraShaderMap_*,0>,FDefaultSetAllocator>
         *this)

{
  ForElementType<FSetElementId> *this_00;
  int *piVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint *puVar12;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  this_00 = &this->Hash;
  uVar9 = this->HashSize;
  uVar10 = (ulonglong)uVar9;
  piVar1 = &this->HashSize;
  if ((this->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->Hash).SecondaryData,0,0,4);
  }
  uVar8 = 0;
  if ((uVar9 != 0) &&
     (TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,uVar9,4), 0 < (int)uVar9)) {
    uVar6 = uVar8;
    do {
      FVar3 = (this->Hash).SecondaryData;
      FVar5 = (ForElementType<FSetElementId>)this_00;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar5 = FVar3;
      }
      uVar4 = uVar6 & (longlong)(int)uVar9 - 1U;
      uVar6 = uVar6 + 1;
      *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (*piVar1 != 0) {
    uVar9 = *(uint *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar9 != 0) {
      puVar12 = *(uint **)&(this->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_40.Array;
      }
      uVar2 = *puVar12;
      uVar10 = uVar8;
      while (uVar2 == 0) {
        iVar7 = (int)uVar8;
        uStack_50 = (int)uVar10 + 0x20;
        uVar10 = (ulonglong)uStack_50;
        local_68 = iVar7 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_148e0c0bb;
        uVar2 = puVar12[(longlong)iVar7 + 1];
      }
      uStack_64 = -uVar2 & uVar2;
      uVar10 = (ulonglong)uStack_64 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uStack_54 = (int)lVar11 + -1 + uStack_50;
      uVar8 = (ulonglong)uStack_54;
      if ((int)uVar9 < (int)uStack_54) {
LAB_148e0c0bb:
        uVar8 = (ulonglong)uVar9;
        uStack_54 = uVar9;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = uStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    if ((int)uVar8 < (int)uVar9) {
      do {
        lVar11 = (longlong)(int)uVar8 * 0x90 + *(longlong *)&this->Elements;
        uVar9 = *piVar1 - 1U & *(uint *)(lVar11 + 0x38);
        *(uint *)(lVar11 + 0x8c) = uVar9;
        FVar3 = (this->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)this_00;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar3;
        }
        uVar10 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(lVar11 + 0x88) = *(undefined4 *)((longlong)FVar5 + uVar10 * 4);
        *(int *)((longlong)FVar5 + uVar10 * 4) = (int)uVar8;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
        uVar8 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

