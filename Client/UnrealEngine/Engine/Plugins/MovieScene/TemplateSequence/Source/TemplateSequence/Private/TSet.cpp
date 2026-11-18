// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 14

// Emplace<TPairInitializer<FGuid_const_&,FName_const_&>_> @ 14ac67240

FSetElementId __thiscall
TSet<TTuple<FGuid,FName>,TDefaultMapHashableKeyFuncs<FGuid,FName,0>,FDefaultSetAllocator>::
Emplace<TPairInitializer<FGuid_const_&,FName_const_&>_>
          (TSet<TTuple<FGuid,FName>,TDefaultMapHashableKeyFuncs<FGuid,FName,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FGuid_const_&,FName_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  char *in_R9;
  undefined1 *puVar12;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar6 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar2);
    iVar6 = iVar6 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  puVar12 = &(this->Elements).field_0x8;
  TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer != (FGuid *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    uVar4 = (*(undefined8 **)param_2)[1];
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = uVar4;
    uVar4 = *puVar3;
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->A = (int)uVar4;
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->B = (int)((ulonglong)uVar4 >> 0x20);
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->C = 0xffffffff;
  }
  uVar7 = CityHash64(local_48.Pointer,0x10);
  bVar13 = false;
  if (*(int *)puVar12 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FGuid>(this,(uint)uVar7,local_48.Pointer);
    bVar13 = iVar6 != -1;
    if (bVar13) {
      memmove((void *)((longlong)iVar6 * 0x20 + *(longlong *)&this->Elements),local_48.Pointer,0x18)
      ;
      TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar9 = *(int *)puVar12 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= this->HashSize)) {
      uVar9 = this->HashSize - 1U & (uint)uVar7;
      ((FGuid *)((longlong)local_48.Pointer + 0x10))->D = uVar9;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      ((FGuid *)((longlong)local_48.Pointer + 0x10))->C = *(uint *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>_const_&>_> @ 14ac67430

FSetElementId __thiscall
TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
::
EmplaceByHash<TKeyInitializer<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>_const_&>_>
          (TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TKeyInitializer<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>_const_&>
          *param_2,bool *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  void *pvVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar9;
  undefined8 *_Src;
  int iVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  uVar11 = (uint)param_2;
  iVar12 = 1;
  if (iVar10 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar4 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar4 + 4 + (longlong)iVar6 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar4 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  _Src = (undefined8 *)0x0;
  if (local_48.Pointer != (undefined8 *)0x0) {
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_3;
    *(undefined8 *)((longlong)local_48.Pointer + 0x10) = 0;
    *(uint *)((longlong)local_48.Pointer + 8) = uVar11;
    if (*(void **)((longlong)local_48.Pointer + 0x10) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)local_48.Pointer + 0x10));
    }
    *(undefined8 *)((longlong)local_48.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0x1c) = 2;
    *(undefined4 *)((longlong)local_48.Pointer + 0x20) = 0xffffffff;
    _Src = local_48.Pointer;
  }
  iVar10 = *(int *)&(this->Elements).field_0x8;
  bVar13 = false;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if ((iVar10 - iVar6 != 1) && (iVar10 != iVar6)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar11) * 4);
    if (iVar10 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        lVar1 = lVar4 + (longlong)iVar10 * 0x28;
        uVar3 = *(undefined4 *)(lVar4 + (longlong)iVar10 * 0x28);
        if ((((short)uVar3 == (short)*(undefined4 *)_Src) &&
            ((short)((uint)uVar3 >> 0x10) == (short)((uint)*(undefined4 *)_Src >> 0x10))) &&
           (*(int *)(lVar1 + 4) == *(int *)((longlong)_Src + 4))) {
          bVar13 = iVar10 != -1;
          if (bVar13) {
            pvVar5 = *(void **)(lVar4 + 0x10 + (longlong)iVar10 * 0x28);
            if (pvVar5 != (void *)0x0) {
              FMemory::Free(pvVar5);
            }
            memmove((void *)(lVar4 + (longlong)iVar10 * 0x28),_Src,0x20);
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar1 + 0x20);
      } while (iVar10 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar13;
  }
  if (bVar13 == false) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar12 <= this->HashSize)) {
      uVar11 = this->HashSize - 1U & uVar11;
      *(uint *)((longlong)_Src + 0x24) = uVar11;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar11;
      *(undefined4 *)(_Src + 4) = *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_48.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>_const_&>_> @ 14ac676b0

FSetElementId __thiscall
TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>,FDefaultSetAllocator>
::
EmplaceByHash<TKeyInitializer<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>_const_&>_>
          (TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TKeyInitializer<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>_const_&>
          *param_2,bool *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  TSparseSetElement<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>_>
  *pTVar12;
  bool *in_stack_00000028;
  int local_78 [2];
  FSparseArrayAllocationInfo local_70 [3];
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar1 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar7 * 0x48);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,local_70,iVar7);
  if (local_70[0].Pointer ==
      (TSparseSetElement<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>_>
       *)0x0) {
    pTVar12 = (TSparseSetElement<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>_>
               *)0x0;
  }
  else {
    puVar4 = *(undefined8 **)param_3;
    uVar5 = puVar4[1];
    *(undefined8 *)local_70[0].Pointer = *puVar4;
    *(undefined8 *)((longlong)local_70[0].Pointer + 8) = uVar5;
    uVar5 = puVar4[3];
    *(undefined8 *)((longlong)local_70[0].Pointer + 0x10) = puVar4[2];
    *(undefined8 *)((longlong)local_70[0].Pointer + 0x18) = uVar5;
    *(undefined8 *)((longlong)local_70[0].Pointer + 0x30) = 0;
    *(undefined8 *)((longlong)local_70[0].Pointer + 0x20) = 0;
    *(undefined8 *)((longlong)local_70[0].Pointer + 0x28) = 0;
    if (*(void **)((longlong)local_70[0].Pointer + 0x30) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)local_70[0].Pointer + 0x30));
    }
    *(undefined8 *)((longlong)local_70[0].Pointer + 0x30) = 0;
    *(undefined4 *)((longlong)local_70[0].Pointer + 0x38) = 0;
    *(undefined4 *)((longlong)local_70[0].Pointer + 0x3c) = 2;
    *(undefined4 *)((longlong)local_70[0].Pointer + 0x40) = 0xffffffff;
    pTVar12 = local_70[0].Pointer;
  }
  local_78[0] = local_70[0].Index;
  bVar6 = TryReplaceExisting(this,(uint)param_2,pTVar12,local_78,in_stack_00000028);
  if (!bVar6) {
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
    if ((0 < (int)uVar9) && (this->HashSize < iVar11)) {
      this->HashSize = iVar11;
      Rehash(this);
      *(int *)CONCAT44(in_register_00000014,param_1) = local_78[0];
      return (FSetElementId)param_1;
    }
    uVar9 = this->HashSize - 1U & (uint)param_2;
    *(uint *)&pTVar12->field_0x44 = uVar9;
    FVar10 = (this->Hash).SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
    *(undefined4 *)&pTVar12->field_0x40 = *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
    *(int *)((longlong)FVar10 + uVar8 * 4) = local_78[0];
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_78[0];
  return (FSetElementId)param_1;
}

// FindIndexByHash<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>_> @ 14ac67890

int __thiscall
TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>_>
          (TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID> *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&this->Elements + (longlong)iVar3 * 0x28;
        uVar2 = *(undefined4 *)(*(longlong *)&this->Elements + (longlong)iVar3 * 0x28);
        if ((((short)uVar2 == (short)*(undefined4 *)param_2) &&
            ((short)((uint)uVar2 >> 0x10) == (short)((uint)*(undefined4 *)param_2 >> 0x10))) &&
           (*(int *)(lVar1 + 4) == *(int *)&param_2->field_0x4)) {
          return iVar3;
        }
        iVar3 = *(int *)(lVar1 + 0x20);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>_> @ 14ac67920

int __thiscall
TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>,FDefaultSetAllocator>
::FindIndexByHash<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>_>
          (TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName> *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar4 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        lVar3 = (longlong)iVar4;
        uVar1 = *(undefined4 *)(lVar2 + lVar3 * 0x48);
        if (((((short)uVar1 == (short)*(undefined4 *)param_2) &&
             ((short)((uint)uVar1 >> 0x10) == (short)((uint)*(undefined4 *)param_2 >> 0x10))) &&
            (*(int *)(lVar2 + 4 + lVar3 * 0x48) == *(int *)&param_2->field_0x4)) &&
           ((((*(int *)(lVar2 + 0x14 + lVar3 * 0x48) == *(int *)&param_2->field_0x14 &&
              *(int *)(lVar2 + 0xc + lVar3 * 0x48) == *(int *)&param_2->field_0xc) &&
             *(int *)(lVar2 + 0x10 + lVar3 * 0x48) == *(int *)&param_2->field_0x10) &&
             *(int *)(lVar2 + 8 + lVar3 * 0x48) == *(int *)&param_2->field_0x8 &&
            (*(longlong *)(lVar2 + 0x18 + lVar3 * 0x48) == *(longlong *)&param_2->field_0x18)))) {
          return iVar4;
        }
        iVar4 = *(int *)(lVar2 + 0x40 + lVar3 * 0x48);
      } while (iVar4 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FGuid> @ 14ac679e0

int __thiscall
TSet<TTuple<FGuid,FName>,TDefaultMapHashableKeyFuncs<FGuid,FName,0>,FDefaultSetAllocator>::
FindIndexByHash<FGuid>
          (TSet<TTuple<FGuid,FName>,TDefaultMapHashableKeyFuncs<FGuid,FName,0>,FDefaultSetAllocator>
           *this,uint param_1,FGuid *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&this->Elements);
        if (((param_2->D == puVar2[3] && param_2->C == puVar2[2]) && param_2->B == puVar2[1]) &&
            param_2->A == *puVar2) {
          return uVar1;
        }
        uVar1 = puVar2[6];
      } while (uVar1 != 0xffffffff);
    }
  }
  return -1;
}

// RemoveImpl<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>_> @ 14ac6dac0

int __thiscall
TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
::RemoveImpl<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>_>
          (TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID> *param_2)

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
  while( true ) {
    lVar8 = (longlong)(int)uVar7 * 0x28;
    if ((((short)*(undefined4 *)(lVar8 + lVar2) == (short)*(undefined4 *)param_2) &&
        ((short)((uint)*(undefined4 *)(lVar8 + lVar2) >> 0x10) ==
         (short)((uint)*(undefined4 *)param_2 >> 0x10))) &&
       (*(int *)(lVar8 + 4 + lVar2) == *(int *)&param_2->field_0x4)) break;
    uVar7 = *(uint *)(lVar8 + 0x20 + lVar2);
    if (uVar7 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
    if (*(int *)&(this->Elements).field_0x28 <= (int)uVar7) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_14ac6dbdd;
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
LAB_14ac6dbdd:
  FVar6 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar9 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar8 + 0x24) * 4);
  while( true ) {
    uVar1 = *puVar9;
    if (uVar1 == 0xffffffff) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    if (uVar1 == uVar7) break;
    puVar9 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar1 * 0x28 + 0x20);
  }
  *puVar9 = *(uint *)(lVar8 + 0x20);
  TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this->Elements,uVar7,1);
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,uVar7,1);
  return 1;
}

// RemoveImpl<FGuid> @ 14ac6dc90

int __thiscall
TSet<TTuple<FGuid,FName>,TDefaultMapHashableKeyFuncs<FGuid,FName,0>,FDefaultSetAllocator>::
RemoveImpl<FGuid>(TSet<TTuple<FGuid,FName>,TDefaultMapHashableKeyFuncs<FGuid,FName,0>,FDefaultSetAllocator>
                  *this,uint param_1,FGuid *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar9 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar9 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)&this->Elements;
  while (lVar7 = (longlong)(int)uVar9 * 0x20,
        ((param_2->D != *(uint *)(lVar7 + 0xc + lVar2) || param_2->C != *(uint *)(lVar7 + 8 + lVar2)
         ) || param_2->B != *(uint *)(lVar7 + 4 + lVar2)) || param_2->A != *(uint *)(lVar7 + lVar2))
  {
    uVar9 = *(uint *)(lVar7 + 0x18 + lVar2);
    if (uVar9 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar9 & 0x1f) & 1) != 0) goto LAB_14ac6dd9d;
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
LAB_14ac6dd9d:
  FVar6 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + lVar7;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar7 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar9) {
      *puVar8 = *(uint *)(lVar7 + 0x18);
      TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar9,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// Rehash @ 14ac7e0e0

void __thiscall
TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
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
      uVar8 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ac7e1bc;
        uVar8 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_14ac7e1bc:
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
        uVar2 = *(ushort *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28);
        lVar5 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28;
        uVar8 = (*(int *)(lVar5 + 4) + (uint)(uVar2 >> 2) + (uint)uVar2 * 0x40 + -0x61c88647 ^
                (uint)uVar2) & *piVar1 - 1U;
        *(uint *)(lVar5 + 0x24) = uVar8;
        FVar4 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar4;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ac7e2a0

void __thiscall
TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulong64 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ForElementType<FSetElementId> FVar10;
  uint uVar11;
  uint *puVar12;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = *(uint **)&(this->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_40.Array;
      }
      uVar6 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar6 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar8 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14ac7e377;
        uVar6 = puVar12[lVar8 + 1];
      }
      uStack_64 = -uVar6 & uVar6;
      uVar9 = (ulonglong)uStack_64 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_54 = (int)lVar8 + -1 + iStack_50;
      if (iVar3 < iStack_54) {
LAB_14ac7e377:
        iStack_54 = iVar3;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = local_40.CurrentBitIndex;
        uVar2 = *(ushort *)
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x48);
        lVar8 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x48;
        uVar11 = *(int *)(lVar8 + 4) + (uint)uVar2 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ (uint)uVar2;
        uVar7 = CityHash64((char *)(lVar8 + 8),0x10);
        uVar11 = (uVar11 >> 2) + uVar11 * 0x40 + -0x61c88647 + (int)uVar7 ^ uVar11;
        uVar4 = *(undefined8 *)(lVar8 + 0x18);
        uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        uVar6 = *piVar1 - 1U &
                (uVar6 + 0x9e3779b9 +
                 (int)((ulonglong)uVar4 >> 0x20) + uVar11 * 0x40 + (uVar11 >> 2) ^ uVar11);
        *(uint *)(lVar8 + 0x44) = uVar6;
        FVar5 = (this->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar5;
        }
        uVar9 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(lVar8 + 0x40) = *(undefined4 *)((longlong)FVar10 + uVar9 * 4);
        *(int *)((longlong)FVar10 + uVar9 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ac7e4b0

void __thiscall
TSet<TTuple<FGuid,FName>,TDefaultMapHashableKeyFuncs<FGuid,FName,0>,FDefaultSetAllocator>::Rehash
          (TSet<TTuple<FGuid,FName>,TDefaultMapHashableKeyFuncs<FGuid,FName,0>,FDefaultSetAllocator>
           *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  ulong64 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
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
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar9 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ac7e587;
        uVar9 = puVar10[lVar5 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ac7e587:
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
        iVar2 = local_30.CurrentBitIndex;
        pcVar8 = (char *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x20);
        uVar4 = CityHash64(pcVar8,0x10);
        uVar9 = *piVar1 - 1U & (uint)uVar4;
        *(uint *)(pcVar8 + 0x1c) = uVar9;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(pcVar8 + 0x18) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Reset @ 14ac7e9e0

void __thiscall
TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x8);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// TryReplaceExisting @ 14ac80860

bool __thiscall
TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  code *pcVar7;
  byte bVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  uint uVar14;
  bool bVar15;
  
  bVar15 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar11 = FindIndexByHash<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>_>
                       (this,param_1,
                        (TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>
                         *)param_2);
    bVar15 = iVar11 != -1;
    if (bVar15) {
      lVar5 = *(longlong *)&this->Elements;
      pvVar6 = *(void **)(lVar5 + 0x30 + (longlong)iVar11 * 0x48);
      if (pvVar6 != (void *)0x0) {
        FMemory::Free(pvVar6);
      }
      memmove((void *)(lVar5 + (longlong)iVar11 * 0x48),param_2,0x40);
      iVar4 = *param_3;
      puVar1 = &(this->Elements).field_0x10;
      lVar5 = *(longlong *)&this->Elements;
      bVar8 = (byte)iVar4 & 0x1f;
      uVar14 = 1 << bVar8 | 1U >> 0x20 - bVar8;
      if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      puVar13 = *(undefined1 **)&(this->Elements).field_0x20;
      lVar3 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      if (((*(uint *)(puVar13 + lVar3) & uVar14) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      if (*(int *)&(this->Elements).field_0x34 != 0) {
        *(int *)(lVar5 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x48) = iVar4;
      }
      puVar2 = (undefined4 *)(lVar5 + (longlong)iVar4 * 0x48);
      uVar12 = 0xffffffff;
      *puVar2 = 0xffffffff;
      if (0 < *(int *)&(this->Elements).field_0x34) {
        uVar12 = *(undefined4 *)&(this->Elements).field_0x30;
      }
      puVar2[1] = uVar12;
      puVar13 = &(this->Elements).field_0x34;
      *(int *)puVar13 = *(int *)puVar13 + 1;
      *(int *)&(this->Elements).field_0x30 = iVar4;
      if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      puVar13 = *(undefined1 **)&(this->Elements).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      *(uint *)(puVar13 + lVar3) = *(uint *)(puVar13 + lVar3) & ~uVar14;
      *param_3 = iVar11;
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// UnhashElements @ 14ac80b40

void __thiscall
TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14ac80c3b;
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
LAB_14ac80c3b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ac80d30;
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
LAB_14ac80d30:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x44 + (longlong)local_60.CurrentBitIndex * 0x48) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

