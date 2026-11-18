// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 13

// Emplace<TPairInitializer<FObjectKey_&&,FMovieSceneMediaPlayerPriority_const_&>_> @ 14ea65880

FSetElementId __thiscall
TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FObjectKey_&&,FMovieSceneMediaPlayerPriority_const_&>_>
          (TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FObjectKey_&&,FMovieSceneMediaPlayerPriority_const_&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  int iVar12;
  char *in_R9;
  uint uVar13;
  undefined1 *puVar14;
  bool bVar15;
  FSparseArrayAllocationInfo local_48;
  
  iVar12 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar12 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar12 = iVar12 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  puVar14 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (int *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = *puVar3;
    *(int *)((longlong)local_48.Pointer + 0x10) = -1;
  }
  uVar9 = *(uint *)((longlong)local_48.Pointer + 4);
  uVar8 = *(int *)local_48.Pointer - uVar9 ^ uVar9 >> 0xd;
  bVar15 = false;
  uVar6 = (-0x61c88647 - uVar8) - uVar9 ^ uVar8 << 8;
  uVar13 = (uVar9 - uVar8) - uVar6 ^ uVar6 >> 0xd;
  uVar8 = (uVar8 - uVar13) - uVar6 ^ uVar13 >> 0xc;
  uVar6 = (uVar6 - uVar8) - uVar13 ^ uVar8 << 0x10;
  uVar13 = (uVar13 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar8 = (uVar8 - uVar13) - uVar6 ^ uVar13 >> 3;
  uVar6 = (uVar6 - uVar8) - uVar13 ^ uVar8 << 10;
  iVar12 = *(int *)puVar14;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar6 = (uVar13 - uVar6) - uVar8 ^ uVar6 >> 0xf;
  if ((iVar12 - iVar4 != 1) && (iVar12 != iVar4)) {
    FVar10 = (this->Hash).SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar12 = *(int *)((longlong)FVar10 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        lVar5 = (longlong)iVar12;
        if ((*(int *)(lVar2 + lVar5 * 0x18) == *(int *)local_48.Pointer) &&
           (*(uint *)(lVar2 + 4 + lVar5 * 0x18) == uVar9)) {
          bVar15 = iVar12 != -1;
          if (bVar15) {
            memmove((void *)(lVar2 + (longlong)iVar12 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar12;
          }
          break;
        }
        iVar12 = *(int *)(lVar2 + 0x10 + lVar5 * 0x18);
      } while (iVar12 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar15;
  }
  if (bVar15 == false) {
    uVar9 = *(int *)puVar14 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar6;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(int *)((longlong)local_48.Pointer + 0x10) = *(int *)((longlong)FVar10 + uVar7 * 4);
      *(int *)((longlong)FVar10 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FObjectKey_const_&,UMediaPlayer_*_const_&>_> @ 14ea65b20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FSetElementId __thiscall
TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FObjectKey_const_&,UMediaPlayer_*_const_&>_>
          (TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FObjectKey_const_&,UMediaPlayer_*_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  int iVar12;
  char *in_R9;
  uint uVar13;
  undefined1 *puVar14;
  bool bVar15;
  FSparseArrayAllocationInfo local_48;
  
  iVar12 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar12 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar12 = iVar12 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  puVar14 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (int *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = *puVar3;
    *(int *)((longlong)local_48.Pointer + 0x10) = -1;
  }
  uVar9 = *(uint *)((longlong)local_48.Pointer + 4);
  uVar8 = *(int *)local_48.Pointer - uVar9 ^ uVar9 >> 0xd;
  bVar15 = false;
  uVar6 = (-0x61c88647 - uVar8) - uVar9 ^ uVar8 << 8;
  uVar13 = (uVar9 - uVar8) - uVar6 ^ uVar6 >> 0xd;
  uVar8 = (uVar8 - uVar13) - uVar6 ^ uVar13 >> 0xc;
  uVar6 = (uVar6 - uVar8) - uVar13 ^ uVar8 << 0x10;
  uVar13 = (uVar13 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar8 = (uVar8 - uVar13) - uVar6 ^ uVar13 >> 3;
  uVar6 = (uVar6 - uVar8) - uVar13 ^ uVar8 << 10;
  iVar12 = *(int *)puVar14;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar6 = (uVar13 - uVar6) - uVar8 ^ uVar6 >> 0xf;
  if ((iVar12 - iVar4 != 1) && (iVar12 != iVar4)) {
    FVar10 = (this->Hash).SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar12 = *(int *)((longlong)FVar10 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        lVar5 = (longlong)iVar12;
        if ((*(int *)(lVar2 + lVar5 * 0x18) == *(int *)local_48.Pointer) &&
           (*(uint *)(lVar2 + 4 + lVar5 * 0x18) == uVar9)) {
          bVar15 = iVar12 != -1;
          if (bVar15) {
            memmove((void *)(lVar2 + (longlong)iVar12 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar12;
          }
          break;
        }
        iVar12 = *(int *)(lVar2 + 0x10 + lVar5 * 0x18);
      } while (iVar12 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar15;
  }
  if (bVar15 == false) {
    uVar9 = *(int *)puVar14 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar6;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(int *)((longlong)local_48.Pointer + 0x10) = *(int *)((longlong)FVar10 + uVar7 * 4);
      *(int *)((longlong)FVar10 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FSharedPersistentDataKey_const_&,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_&&>_> @ 14ea65dc0

FSetElementId __thiscall
TSet<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FSharedPersistentDataKey_const_&,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_&&>_>
          (TSet<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FSharedPersistentDataKey_const_&,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  char *in_R9;
  undefined1 *puVar13;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar8 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar6 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  puVar13 = &(this->Elements).field_0x8;
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  if (local_48.Pointer != (FSharedPersistentDataKey *)0x0) {
    puVar3 = *(undefined8 **)param_2;
    puVar4 = *(undefined8 **)(param_2 + 8);
    uVar5 = puVar3[1];
    *(undefined8 *)local_48.Pointer = *puVar3;
    (((FMovieSceneEvaluationOperand *)((longlong)local_48.Pointer + 4))->ObjectBindingID).B =
         (int)uVar5;
    (((FMovieSceneEvaluationOperand *)((longlong)local_48.Pointer + 4))->ObjectBindingID).C =
         (int)((ulonglong)uVar5 >> 0x20);
    *(undefined8 *)
     &(((FMovieSceneEvaluationOperand *)((longlong)local_48.Pointer + 4))->ObjectBindingID).D =
         puVar3[2];
    uVar5 = *puVar4;
    ((FSharedPersistentDataKey *)((longlong)local_48.Pointer + 0x18))->UniqueId =
         (FMovieSceneSharedDataId)(int)uVar5;
    (((FSharedPersistentDataKey *)((longlong)local_48.Pointer + 0x18))->Operand).ObjectBindingID.A =
         (int)((ulonglong)uVar5 >> 0x20);
    *puVar4 = 0;
    (((FSharedPersistentDataKey *)((longlong)local_48.Pointer + 0x18))->Operand).ObjectBindingID.B =
         0xffffffff;
  }
  uVar7 = ::GetTypeHash(local_48.Pointer);
  bVar14 = false;
  if (*(int *)puVar13 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar8 = FindIndexByHash<FSharedPersistentDataKey>(this,uVar7,local_48.Pointer);
    bVar14 = iVar8 != -1;
    if (bVar14) {
      lVar2 = *(longlong *)&this->Elements;
      puVar3 = *(undefined8 **)(lVar2 + 0x18 + (longlong)iVar8 * 0x28);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      memmove((void *)(lVar2 + (longlong)iVar8 * 0x28),local_48.Pointer,0x20);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar8;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar10 = *(int *)puVar13 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar10) {
      uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & uVar7;
      (((FSharedPersistentDataKey *)((longlong)local_48.Pointer + 0x18))->Operand).ObjectBindingID.C
           = uVar7;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      (((FSharedPersistentDataKey *)((longlong)local_48.Pointer + 0x18))->Operand).ObjectBindingID.B
           = *(uint *)((longlong)FVar11 + uVar9 * 4);
      *(int *)((longlong)FVar11 + uVar9 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// FindIndexByHash<FSharedPersistentDataKey> @ 14ea66070

int __thiscall
TSet<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FSharedPersistentDataKey>
          (TSet<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FSharedPersistentDataKey *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar2 = (longlong)iVar3;
        if (((*(uint *)(lVar1 + lVar2 * 0x28) == (param_2->UniqueId).UniqueId) &&
            (*(uint *)(lVar1 + 0x14 + lVar2 * 0x28) == (param_2->Operand).SequenceID.Value)) &&
           (((*(uint *)(lVar1 + 0x10 + lVar2 * 0x28) == (param_2->Operand).ObjectBindingID.D &&
             *(uint *)(lVar1 + 0xc + lVar2 * 0x28) == (param_2->Operand).ObjectBindingID.C) &&
            *(uint *)(lVar1 + 8 + lVar2 * 0x28) == (param_2->Operand).ObjectBindingID.B) &&
            *(uint *)(lVar1 + 4 + lVar2 * 0x28) == (param_2->Operand).ObjectBindingID.A)) {
          return iVar3;
        }
        iVar3 = *(int *)(lVar1 + 0x20 + lVar2 * 0x28);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// RemoveImpl<FObjectKey> @ 14ea66de0

int __thiscall
TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
::RemoveImpl<FObjectKey>
          (TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
           *this,uint param_1,FObjectKey *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  undefined1 *puVar10;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar7 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)&this->Elements;
  while ((lVar8 = (longlong)(int)uVar7 * 0x18, *(int *)(lVar8 + lVar2) != param_2->ObjectIndex ||
         (*(int *)(lVar8 + 4 + lVar2) != param_2->ObjectSerialNumber))) {
    uVar7 = *(uint *)(lVar8 + 0x10 + lVar2);
    if (uVar7 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_14ea66ed0;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_14ea66ed0:
  FVar6 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar9 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar8 + 0x14) * 4);
  while( true ) {
    uVar1 = *puVar9;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar7) {
      *puVar9 = *(uint *)(lVar8 + 0x10);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar9 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar1 * 0x18 + 0x10);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// Rehash @ 14ea6e390

void __thiscall
TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  uint uVar11;
  uint *puVar12;
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
      puVar12 = *(uint **)&(this->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_30.Array;
      }
      uVar6 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar7 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ea6e46c;
        uVar6 = puVar12[lVar7 + 1];
      }
      uStack_54 = -uVar6 & uVar6;
      uVar8 = (ulonglong)uStack_54 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_44 = (int)lVar7 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_14ea6e46c:
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
        piVar2 = (int *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        uVar6 = piVar2[1];
        uVar9 = *piVar2 - uVar6 ^ uVar6 >> 0xd;
        uVar5 = (-0x61c88647 - uVar9) - uVar6 ^ uVar9 << 8;
        uVar11 = (uVar6 - uVar5) - uVar9 ^ uVar5 >> 0xd;
        uVar9 = (uVar9 - uVar11) - uVar5 ^ uVar11 >> 0xc;
        uVar6 = (uVar5 - uVar9) - uVar11 ^ uVar9 << 0x10;
        uVar11 = (uVar11 - uVar6) - uVar9 ^ uVar6 >> 5;
        uVar5 = (uVar9 - uVar11) - uVar6 ^ uVar11 >> 3;
        uVar6 = (uVar6 - uVar5) - uVar11 ^ uVar5 << 10;
        uVar6 = ((uVar11 - uVar6) - uVar5 ^ uVar6 >> 0xf) & *piVar1 - 1U;
        piVar2[5] = uVar6;
        FVar4 = (this->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar4;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        piVar2[4] = *(int *)((longlong)FVar10 + uVar8 * 4);
        *(int *)((longlong)FVar10 + uVar8 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ea6e5a0

void __thiscall
TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  uint uVar11;
  uint *puVar12;
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
      puVar12 = *(uint **)&(this->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_30.Array;
      }
      uVar6 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar7 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ea6e67c;
        uVar6 = puVar12[lVar7 + 1];
      }
      uStack_54 = -uVar6 & uVar6;
      uVar8 = (ulonglong)uStack_54 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_44 = (int)lVar7 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_14ea6e67c:
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
        piVar2 = (int *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        uVar6 = piVar2[1];
        uVar9 = *piVar2 - uVar6 ^ uVar6 >> 0xd;
        uVar5 = (-0x61c88647 - uVar9) - uVar6 ^ uVar9 << 8;
        uVar11 = (uVar6 - uVar5) - uVar9 ^ uVar5 >> 0xd;
        uVar9 = (uVar9 - uVar11) - uVar5 ^ uVar11 >> 0xc;
        uVar6 = (uVar5 - uVar9) - uVar11 ^ uVar9 << 0x10;
        uVar11 = (uVar11 - uVar6) - uVar9 ^ uVar6 >> 5;
        uVar5 = (uVar9 - uVar11) - uVar6 ^ uVar11 >> 3;
        uVar6 = (uVar6 - uVar5) - uVar11 ^ uVar5 << 10;
        uVar6 = ((uVar11 - uVar6) - uVar5 ^ uVar6 >> 0xf) & *piVar1 - 1U;
        piVar2[5] = uVar6;
        FVar4 = (this->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar4;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        piVar2[4] = *(int *)((longlong)FVar10 + uVar8 * 4);
        *(int *)((longlong)FVar10 + uVar8 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ea6e7b0

void __thiscall
TSet<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  FSharedPersistentDataKey *pFVar2;
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
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ea6e887;
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
LAB_14ea6e887:
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
        pFVar2 = (FSharedPersistentDataKey *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28);
        uVar5 = ::GetTypeHash(pFVar2);
        uVar5 = *piVar1 - 1U & uVar5;
        pFVar2[1].Operand.ObjectBindingID.C = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        pFVar2[1].Operand.ObjectBindingID.B = *(uint *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar3;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 14ea6e940

void __thiscall
TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>::
RehashOrLink(TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
             *this,uint param_1,TSparseSetElement<TTuple<FName,FVariant>_> *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x24 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x20 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RemoveByIndex @ 14ea6e9d0

void __thiscall
TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
::RemoveByIndex(TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
                *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<FSetElementId> FVar5;
  undefined1 *puVar6;
  int *piVar7;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Elements).field_0x28)) {
    puVar6 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_14ea6ea42;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14ea6ea42:
  lVar1 = *(longlong *)&this->Elements + (longlong)param_1 * 0x18;
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar5 + (longlong)*(int *)(lVar1 + 0x14) * 4);
  while( true ) {
    iVar2 = *piVar7;
    if (iVar2 == -1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iVar2 == param_1) break;
    piVar7 = (int *)(*(longlong *)&this->Elements + (longlong)iVar2 * 0x18 + 0x10);
  }
  *piVar7 = *(int *)(lVar1 + 0x10);
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// Reset @ 14ea6ed50

void __thiscall
TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// TryReplaceExisting @ 14ea70870

bool __thiscall
TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>::
TryReplaceExisting(TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
                   *this,uint param_1,TSparseSetElement<TTuple<FName,FVariant>_> *param_2,
                  int *param_3,bool *param_4)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  bVar6 = false;
  iVar4 = *(int *)&(this->Elements).field_0x8;
  iVar1 = *(int *)&(this->Elements).field_0x34;
  if ((iVar4 - iVar1 != 1) && (iVar4 != iVar1)) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar4 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar4 * 0x28) == *(longlong *)param_2) {
          bVar6 = iVar4 != -1;
          if (bVar6) {
            pvVar3 = *(void **)(lVar2 + 0x10 + (longlong)iVar4 * 0x28);
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
            memmove((void *)(lVar2 + (longlong)iVar4 * 0x28),param_2,0x20);
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,*param_3,1);
            *param_3 = iVar4;
          }
          break;
        }
        iVar4 = *(int *)(lVar2 + 0x20 + (longlong)iVar4 * 0x28);
      } while (iVar4 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar6;
  }
  return bVar6;
}

// UnhashElements @ 14ea709a0

void __thiscall
TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14ea70a9b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14ea70a9b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ea70b90;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14ea70b90:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FObjectKey,UMediaPlayer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x14 + (longlong)local_60.CurrentBitIndex * 0x18) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

