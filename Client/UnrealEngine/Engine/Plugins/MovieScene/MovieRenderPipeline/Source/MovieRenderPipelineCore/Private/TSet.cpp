// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 159

// Emplace<UMovieGraphConfig_*_const_&> @ 14dc6c830

FSetElementId __thiscall
TSet<UMovieGraphConfig_*,DefaultKeyFuncs<UMovieGraphConfig_*,0>,FDefaultSetAllocator>::
Emplace<UMovieGraphConfig_*_const_&>
          (TSet<UMovieGraphConfig_*,DefaultKeyFuncs<UMovieGraphConfig_*,0>,FDefaultSetAllocator>
           *this,UMovieGraphConfig **param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  char *in_R9;
  undefined1 *puVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x10);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  puVar10 = &(this->Elements).field_0x8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (ulonglong *)0x0) {
    *(ulonglong *)local_48.Pointer = *(ulonglong *)param_2;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
  }
  uVar5 = *(ulonglong *)local_48.Pointer;
  bVar11 = false;
  uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar9 = *(int *)puVar10;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  if ((iVar9 - iVar3 != 1) && (iVar9 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar9 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar9 * 0x10) == uVar5) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            *(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar9 * 0x10) = uVar5;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)puVar10 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0xc) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 8) = *(undefined4 *)((longlong)FVar7 + uVar5 * 4)
      ;
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)param_1 = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<UMovieGraphNode_*_const_&> @ 14dc6ca50

FSetElementId __thiscall
TSet<UMovieGraphNode_*,DefaultKeyFuncs<UMovieGraphNode_*,0>,FDefaultSetAllocator>::
Emplace<UMovieGraphNode_*_const_&>
          (TSet<UMovieGraphNode_*,DefaultKeyFuncs<UMovieGraphNode_*,0>,FDefaultSetAllocator> *this,
          UMovieGraphNode **param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  char *in_R9;
  undefined1 *puVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x10);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  puVar10 = &(this->Elements).field_0x8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (ulonglong *)0x0) {
    *(ulonglong *)local_48.Pointer = *(ulonglong *)param_2;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
  }
  uVar5 = *(ulonglong *)local_48.Pointer;
  bVar11 = false;
  uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar9 = *(int *)puVar10;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  if ((iVar9 - iVar3 != 1) && (iVar9 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar9 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar9 * 0x10) == uVar5) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            *(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar9 * 0x10) = uVar5;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)puVar10 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0xc) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 8) = *(undefined4 *)((longlong)FVar7 + uVar5 * 4)
      ;
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)param_1 = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TObjectPtr<UMovieGraphNode>_> @ 14dc6cdd0

FSetElementId __thiscall
TSet<TObjectPtr<UMovieGraphNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphNode>,0>,FDefaultSetAllocator>
::Emplace<TObjectPtr<UMovieGraphNode>_>
          (TSet<TObjectPtr<UMovieGraphNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphNode>,0>,FDefaultSetAllocator>
           *this,TObjectPtr<UMovieGraphNode> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  char *in_R9;
  int iVar10;
  bool bVar11;
  TObjectPtr<UMovieGraphNode_const_>_u_0 local_res8;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x10);
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (undefined8 *)0x0) {
    pUVar3 = *(UObject **)param_2;
    *(UObject **)local_48.Pointer = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    *(undefined4 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
  }
  pUVar3 = *(UObject **)local_48.Pointer;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  bVar11 = false;
  uVar5 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  iVar10 = local_48.Index;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    local_res8.DebugPtr = *(UMovieGraphNode **)local_48.Pointer;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (UMovieGraphNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    iVar4 = FindIndexByHash<TObjectPtr<UMovieGraphNode_const_>_>
                      (this,uVar5,(TObjectPtr<UMovieGraphNode_const_> *)&local_res8.ObjectPtr);
    bVar11 = iVar4 != -1;
    if (bVar11) {
      *(undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar4 * 0x10) =
           *(undefined8 *)local_48.Pointer;
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      iVar10 = iVar4;
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
      *(uint *)((longlong)local_48.Pointer + 0xc) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 8) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4)
      ;
      *(int *)((longlong)FVar8 + uVar6 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->field0_0x0 = iVar10;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<FName_const_&>_> @ 14dc6d000

FSetElementId __thiscall
TSet<TTuple<FName,FMovieGraphEvaluatedBranchConfig>,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<FName_const_&>_>
          (TSet<TTuple<FName,FMovieGraphEvaluatedBranchConfig>,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<FName_const_&> *param_1,bool *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  void *_Dst;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  char *in_R9;
  int iVar9;
  bool bVar10;
  FSparseArrayAllocationInfo local_48;
  
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_48);
  if (local_48.Pointer != (TTuple<FName,FMovieGraphEvaluatedBranchConfig> *)0x0) {
    TKeyInitializer<FName_const_&>::
    operator<FName,FMovieGraphEvaluatedBranchConfig>_TTuple<FName,FMovieGraphEvaluatedBranchConfig>
              ((TKeyInitializer<FName_const_&> *)param_2,local_48.Pointer);
    *(undefined4 *)((longlong)local_48.Pointer + 0x58) = 0xffffffff;
  }
  uVar2 = *(undefined8 *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar10 = false;
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  uVar4 = uVar4 + (int)((ulonglong)uVar2 >> 0x20);
  if ((iVar8 - iVar1 != 1) && (iVar8 != iVar1)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar8 * 0x60 + lVar3) == *(longlong *)local_48.Pointer) {
          bVar10 = iVar8 != -1;
          if (bVar10) {
            _Dst = (void *)((longlong)iVar8 * 0x60 + lVar3);
            *(undefined4 *)((longlong)_Dst + 0x50) = 0;
            if (*(void **)((longlong)_Dst + 0x48) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x48));
            }
            TSparseArray<TSparseSetElement<TTuple<FString,FMovieGraphEvaluatedSettingsStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FString,FMovieGraphEvaluatedSettingsStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<FString,FMovieGraphEvaluatedSettingsStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)((longlong)_Dst + 8));
            memmove(_Dst,local_48.Pointer,0x58);
            TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x60 + 0x58 + lVar3);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar10;
  }
  if (bVar10 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)&((TTuple<FName,FMovieGraphEvaluatedBranchConfig> *)
                ((longlong)local_48.Pointer + 0x58))->field_0x4 = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x58) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<TObjectPtr<UMovieGraphConfig_const_>_&&>_> @ 14dc6d1f0

FSetElementId __thiscall
TSet<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<TObjectPtr<UMovieGraphConfig_const_>_&&>_>
          (TSet<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<TObjectPtr<UMovieGraphConfig_const_>_&&> *param_2,
          bool *param_3)

{
  longlong *this_00;
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  bool bVar8;
  TObjectPtr<UMovieGraphConfig_const_>_u_0 local_res8;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_48;
  
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_48);
  if (local_48.Pointer !=
      (TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo> *)
      0x0) {
    TKeyInitializer<TObjectPtr<UMovieGraphConfig_const_>_&&>::
    operator<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>_TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>
              ((TKeyInitializer<TObjectPtr<UMovieGraphConfig_const_>_&&> *)param_3,local_48.Pointer)
    ;
    *(undefined4 *)((longlong)local_48.Pointer + 0x58) = 0xffffffff;
  }
  bVar8 = false;
  iVar7 = 1;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    local_res8.ObjectPtr.field0_0x0 = *(FObjectPtr *)local_48.Pointer;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (UMovieGraphConfig *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    iVar3 = FindIndexByHash<TObjectPtr<UMovieGraphConfig_const_>_>
                      (this,(uint)param_2,
                       (TObjectPtr<UMovieGraphConfig_const_> *)&local_res8.ObjectPtr);
    bVar8 = iVar3 != -1;
    if (bVar8) {
      local_res8.DebugPtr =
           (UMovieGraphConfig *)((longlong)iVar3 * 0x60 + *(longlong *)&this->Elements);
      this_00 = &(local_res8.DebugPtr)->_padding_;
      ((local_res8.DebugPtr)->Variables).ArrayNum = 0;
      pFVar1 = ((local_res8.DebugPtr)->Variables).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this_00);
      memmove(local_res8.DebugPtr,local_48.Pointer,0x58);
      TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar3;
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar8;
  }
  if (bVar8 == false) {
    uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar5) {
      uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & (uint)param_2;
      *(uint *)&((TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>
                  *)((longlong)local_48.Pointer + 0x58))->field_0x4 = uVar5;
      FVar6 = (this->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar4 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x58) =
           *(undefined4 *)((longlong)FVar6 + uVar4 * 4);
      *(int *)((longlong)FVar6 + uVar4 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar7;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_48.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FString_&&>_> @ 14dc6d390

FSetElementId __thiscall
TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FString_&&>_>
          (TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FString_&&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  undefined4 in_register_00000014;
  TSparseSetElement<TTuple<FString,FMovieGraphEvaluatedSettingsStack>_> *_Src;
  bool bVar7;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if (iVar6 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  _Src = (TSparseSetElement<TTuple<FString,FMovieGraphEvaluatedSettingsStack>_> *)0x0;
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FString,FMovieGraphEvaluatedSettingsStack>_> *)0x0) {
    puVar3 = *(undefined8 **)param_3;
    *(undefined8 *)local_38.Pointer = 0;
    *(undefined8 *)local_38.Pointer = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = *(undefined4 *)(puVar3 + 1);
    *(undefined4 *)((longlong)local_38.Pointer + 0xc) = *(undefined4 *)((longlong)puVar3 + 0xc);
    puVar3[1] = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x20) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  bVar7 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FString>(this,(uint)param_2,(FString *)_Src);
    bVar7 = iVar6 != -1;
    if (bVar7) {
      puVar3 = (undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar6 * 0x28);
      pvVar4 = *(void **)(*(longlong *)&this->Elements + 0x10 + (longlong)iVar6 * 0x28);
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      pvVar4 = (void *)*puVar3;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      memmove(puVar3,_Src,0x20);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar6;
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar7;
  }
  if (bVar7 == false) {
    RehashOrLink(this,(uint)param_2,_Src,local_38.Index);
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FString_&&>_> @ 14dc6d540

FSetElementId __thiscall
TSet<TTuple<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FString_&&>_>
          (TSet<TTuple<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FString_&&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 in_register_00000014;
  FString *_Src;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  undefined1 *puVar11;
  bool bVar12;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_48;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar6 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  _Src = (FString *)0x0;
  if (local_48.Pointer != (FString *)0x0) {
    puVar3 = *(undefined8 **)param_3;
    ((local_48.Pointer)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    ((local_48.Pointer)->AllocatorInstance).Data = (FScriptContainerElement *)*puVar3;
    *puVar3 = 0;
    (local_48.Pointer)->ArrayNum = *(int *)(puVar3 + 1);
    (local_48.Pointer)->ArrayMax = *(int *)((longlong)puVar3 + 0xc);
    puVar3[1] = 0;
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).ArrayNum = 0;
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).ArrayMax = 0;
    *(undefined4 *)&(((FString *)((longlong)local_48.Pointer + 0x20))->Data).AllocatorInstance.Data
         = 0xffffffff;
    _Src = local_48.Pointer;
  }
  bVar12 = false;
  if (*(int *)puVar11 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FString>(this,(uint)param_2,_Src);
    bVar12 = iVar6 != -1;
    if (bVar12) {
      puVar3 = (undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar6 * 0x28);
      pvVar4 = *(void **)(*(longlong *)&this->Elements + 0x10 + (longlong)iVar6 * 0x28);
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      pvVar4 = (void *)*puVar3;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      memmove(puVar3,_Src,0x20);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar6;
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar12;
  }
  if (bVar12 == false) {
    uVar8 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
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
      uVar8 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)&_Src[2].Data.AllocatorInstance.Data + 4) = uVar8;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)&_Src[2].Data.AllocatorInstance.Data =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_48.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FString_const_&>_> @ 14dc6d760

FSetElementId __thiscall
TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FString_const_&>_>
          (TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FString_const_&> *param_2,bool *param_3)

{
  undefined8 *_Dst;
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 in_register_00000014;
  TSparseSetElement<TTuple<FString,FMovieGraphEvaluatedSettingsStack>_> *_Src;
  bool bVar6;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if (iVar5 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar5 = iVar5 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer ==
      (TSparseSetElement<TTuple<FString,FMovieGraphEvaluatedSettingsStack>_> *)0x0) {
    _Src = (TSparseSetElement<TTuple<FString,FMovieGraphEvaluatedSettingsStack>_> *)0x0;
  }
  else {
    ::FString::FString(local_38.Pointer,*(FString **)param_3);
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x20) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  bVar6 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar5 = FindIndexByHash<FString>(this,(uint)param_2,(FString *)_Src);
    bVar6 = iVar5 != -1;
    if (bVar6) {
      _Dst = (undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar5 * 0x28);
      pvVar3 = *(void **)(*(longlong *)&this->Elements + 0x10 + (longlong)iVar5 * 0x28);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      pvVar3 = (void *)*_Dst;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      memmove(_Dst,_Src,0x20);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar5;
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar6;
  }
  if (bVar6 == false) {
    RehashOrLink(this,(uint)param_2,_Src,local_38.Index);
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// FindIndexByHash<TObjectPtr<UMovieGraphConfig_const_>_> @ 14dc6db40

int __thiscall
TSet<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo,0>,FDefaultSetAllocator>
::FindIndexByHash<TObjectPtr<UMovieGraphConfig_const_>_>
          (TSet<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,TObjectPtr<UMovieGraphConfig_const_> *param_2)

{
  int iVar1;
  UMovieGraphConfig *pUVar2;
  UMovieGraphConfig *pUVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)(*(longlong *)&this->Elements + 0x58 + (longlong)iVar1 * 0x60))
    {
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UMovieGraphConfig *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      pUVar3 = *(UMovieGraphConfig **)((longlong)iVar1 * 0x60 + *(longlong *)&this->Elements);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UMovieGraphConfig *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      if (pUVar3 == pUVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<TObjectPtr<UMovieGraphNode_const_>_> @ 14dc6dc10

int __thiscall
TSet<TObjectPtr<UMovieGraphNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphNode>,0>,FDefaultSetAllocator>
::FindIndexByHash<TObjectPtr<UMovieGraphNode_const_>_>
          (TSet<TObjectPtr<UMovieGraphNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphNode>,0>,FDefaultSetAllocator>
           *this,uint param_1,TObjectPtr<UMovieGraphNode_const_> *param_2)

{
  int iVar1;
  UMovieGraphNode *pUVar2;
  UMovieGraphNode *pUVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar1 * 0x10)) {
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMovieGraphNode *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      pUVar3 = *(UMovieGraphNode **)(*(longlong *)&this->Elements + (longlong)iVar1 * 0x10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMovieGraphNode *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      if (pUVar3 == pUVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14dc6dce0

int __thiscall
TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      iVar4 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar2 * 0x28);
      lVar1 = (longlong)iVar2 * 0x28;
      iVar3 = (param_2->Data).ArrayNum;
      if (iVar4 == iVar3) {
        if (iVar4 < 2) {
          return iVar2;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*(longlong *)&this->Elements + lVar1),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar6 = iVar4 == 0;
      }
      else {
        bVar6 = iVar4 + iVar3 == 1;
      }
      if (bVar6) {
        return iVar2;
      }
      iVar2 = *(int *)(lVar1 + 0x20 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14dc6ddb0

int __thiscall
TSet<TTuple<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      iVar4 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar2 * 0x28);
      lVar1 = (longlong)iVar2 * 0x28;
      iVar3 = (param_2->Data).ArrayNum;
      if (iVar4 == iVar3) {
        if (iVar4 < 2) {
          return iVar2;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*(longlong *)&this->Elements + lVar1),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar6 = iVar4 == 0;
      }
      else {
        bVar6 = iVar4 + iVar3 == 1;
      }
      if (bVar6) {
        return iVar2;
      }
      iVar2 = *(int *)(lVar1 + 0x20 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator> @ 14dc71f90

TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
::
TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
          (TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
           *this,TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
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
    TSparseArray<TSparseSetElement<TTuple<FString,FMovieGraphEvaluatedSettingsStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// operator= @ 14dc74b60

TSet<TObjectPtr<UMovieGraphNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphNode>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TObjectPtr<UMovieGraphNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphNode>,0>,FDefaultSetAllocator>
::operator=(TSet<TObjectPtr<UMovieGraphNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphNode>,0>,FDefaultSetAllocator>
            *this,TSet<TObjectPtr<UMovieGraphNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphNode>,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSet<TObjectPtr<UMovieGraphNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphNode>,0>,FDefaultSetAllocator>
  *pTVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  if (this == param_1) {
    return this;
  }
  UE::Core::Private::
  CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
  iVar6 = *(int *)&(param_1->Elements).field_0x8;
  lVar11 = (longlong)iVar6;
  TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this->Elements,iVar6);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar6,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
             (int *)&(this->Elements).field_0xc);
  puVar2 = &(this->Elements).field_0x10;
  puVar1 = &(param_1->Elements).field_0x10;
  *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
  *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
  if (puVar2 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar12 = 0;
  if (0 < iVar6) {
    uVar10 = 1;
    puVar9 = (undefined4 *)(*(longlong *)&this->Elements + 8);
    lVar13 = *(longlong *)&param_1->Elements - *(longlong *)&this->Elements;
    do {
      if ((iVar12 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar12)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSet<TObjectPtr<UMovieGraphNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphNode>,0>,FDefaultSetAllocator>
                    *)(*pcVar4)();
          return pTVar7;
        }
      }
      puVar2 = *(undefined1 **)&(param_1->Elements).field_0x20;
      puVar8 = puVar1;
      if (puVar2 != (undefined1 *)0x0) {
        puVar8 = puVar2;
      }
      iVar6 = iVar12;
      if (iVar12 < 0) {
        iVar6 = iVar12 + 0x1f;
      }
      if ((*(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) & uVar10) == 0) {
        puVar9[-2] = *(undefined4 *)((longlong)puVar9 + lVar13 + -8);
        puVar9[-1] = *(undefined4 *)(lVar13 + -4 + (longlong)puVar9);
      }
      else {
        pUVar3 = *(UObject **)((longlong)puVar9 + lVar13 + -8);
        *(UObject **)(puVar9 + -2) = pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        *puVar9 = *(undefined4 *)(lVar13 + (longlong)puVar9);
        puVar9[1] = *(undefined4 *)(lVar13 + 4 + (longlong)puVar9);
      }
      iVar12 = iVar12 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      puVar9 = puVar9 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return this;
}

// operator= @ 14dc74d00

TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
::operator=(TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
            *this,TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
  *pTVar6;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>
  *pTVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  
  if (this == param_1) {
    return this;
  }
  UE::Core::Private::
  CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
  iVar5 = *(int *)&(param_1->Elements).field_0x8;
  lVar10 = (longlong)iVar5;
  TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this->Elements,iVar5);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (200,8,iVar5,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
             (int *)&(this->Elements).field_0xc);
  puVar2 = &(this->Elements).field_0x10;
  puVar1 = &(param_1->Elements).field_0x10;
  *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
  *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
  if (puVar2 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar8 = 0;
  if (0 < iVar5) {
    puVar11 = (undefined4 *)(*(longlong *)&this->Elements + 0xc0);
    uVar9 = 1;
    lVar13 = *(longlong *)&param_1->Elements - *(longlong *)&this->Elements;
    do {
      if (((iVar8 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
                  *)(*pcVar3)();
        return pTVar6;
      }
      puVar2 = *(undefined1 **)&(param_1->Elements).field_0x20;
      puVar12 = puVar1;
      if (puVar2 != (undefined1 *)0x0) {
        puVar12 = puVar2;
      }
      pTVar7 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>
                *)(lVar13 + -0xc0 + (longlong)puVar11);
      iVar5 = iVar8;
      if (iVar8 < 0) {
        iVar5 = iVar8 + 0x1f;
      }
      if ((*(uint *)(puVar12 + (longlong)(iVar5 >> 5) * 4) & uVar9) == 0) {
        puVar11[-0x30] = *(undefined4 *)pTVar7;
        puVar11[-0x2f] = *(undefined4 *)(lVar13 + -0xbc + (longlong)puVar11);
      }
      else {
        UE::Core::Private::Tuple::
        TTupleBase<TIntegerSequence<unsigned_int,0,1>,FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>
        ::
        TTupleBase<TIntegerSequence<unsigned_int,0,1>,FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>
                  ((TTupleBase<TIntegerSequence<unsigned_int,0,1>,FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>
                    *)(puVar11 + -0x30),pTVar7);
        *puVar11 = *(undefined4 *)(lVar13 + (longlong)puVar11);
        puVar11[1] = *(undefined4 *)(lVar13 + 4 + (longlong)puVar11);
      }
      iVar8 = iVar8 + 1;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      puVar11 = puVar11 + 0x32;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return this;
}

// Rehash @ 14dc855e0

void __thiscall
TSet<UMovieGraphConfig_*,DefaultKeyFuncs<UMovieGraphConfig_*,0>,FDefaultSetAllocator>::Rehash
          (TSet<UMovieGraphConfig_*,DefaultKeyFuncs<UMovieGraphConfig_*,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14dc856bc;
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
LAB_14dc856bc:
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
                 ((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0xc) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dc857a0

void __thiscall
TSet<UMovieGraphNode_*,DefaultKeyFuncs<UMovieGraphNode_*,0>,FDefaultSetAllocator>::Rehash
          (TSet<UMovieGraphNode_*,DefaultKeyFuncs<UMovieGraphNode_*,0>,FDefaultSetAllocator> *this)

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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14dc8587c;
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
LAB_14dc8587c:
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
                 ((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0xc) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dc85960

void __thiscall
TSet<TObjectPtr<UMovieGraphNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphNode>,0>,FDefaultSetAllocator>
::Rehash(TSet<TObjectPtr<UMovieGraphNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphNode>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  UObject *pUVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
  uint *puVar10;
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
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14dc85a37;
        uVar5 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14dc85a37:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_ = CONCAT44(uStack_64,local_68);
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        pUVar3 = (UObject *)*puVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        uVar5 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = (uVar5 >> 0x10 ^ uVar5) & *piVar1 - 1U;
        *(uint *)((longlong)puVar9 + 0xc) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dc85b30

void __thiscall
TSet<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  UObject *pUVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
  uint *puVar10;
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
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14dc85c07;
        uVar5 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14dc85c07:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_ = CONCAT44(uStack_64,local_68);
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0x60 + *(longlong *)&this->Elements);
        pUVar3 = (UObject *)*puVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        uVar5 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = (uVar5 >> 0x10 ^ uVar5) & *piVar1 - 1U;
        *(uint *)((longlong)puVar9 + 0x5c) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 0xb) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dc85d10

void __thiscall
TSet<TTuple<FName,FMovieGraphEvaluatedBranchConfig>,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,FMovieGraphEvaluatedBranchConfig>,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
  uint *puVar10;
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
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14dc85de7;
        uVar5 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14dc85de7:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0x60 + *(longlong *)&this->Elements);
        uVar3 = *puVar9;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar9 + 0x5c) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 0xb) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dc85ec0

void __thiscall
TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  ForElementType<FSetElementId> FVar11;
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
    iVar7 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar7 != 0) {
      puVar12 = *(uint **)&(this->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_40.Array;
      }
      uVar6 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar6 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar9 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14dc85f97;
        uVar6 = puVar12[lVar9 + 1];
      }
      uStack_64 = -uVar6 & uVar6;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_54 = (int)lVar9 + -1 + iStack_50;
      if (iVar7 < iStack_54) {
LAB_14dc85f97:
        iStack_54 = iVar7;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar7) {
      do {
        iVar5 = local_40.CurrentBitIndex;
        puVar2 = (undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x28);
        iVar3 = *(int *)(*(longlong *)&this->Elements + 8 +
                        (longlong)local_40.CurrentBitIndex * 0x28);
        iVar7 = iVar3 + -1;
        if (iVar3 == 0) {
          pwVar10 = L"";
          iVar7 = 0;
        }
        else {
          pwVar10 = (wchar_t *)*puVar2;
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
        uVar6 = *piVar1 - 1U & uVar6;
        *(uint *)((longlong)puVar2 + 0x24) = uVar6;
        FVar4 = (this->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar4;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)FVar11 + uVar8 * 4);
        *(int *)((longlong)FVar11 + uVar8 * 4) = iVar5;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dc86070

void __thiscall
TSet<TTuple<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  ForElementType<FSetElementId> FVar11;
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
    iVar7 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar7 != 0) {
      puVar12 = *(uint **)&(this->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_40.Array;
      }
      uVar6 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar6 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar9 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14dc86147;
        uVar6 = puVar12[lVar9 + 1];
      }
      uStack_64 = -uVar6 & uVar6;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_54 = (int)lVar9 + -1 + iStack_50;
      if (iVar7 < iStack_54) {
LAB_14dc86147:
        iStack_54 = iVar7;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar7) {
      do {
        iVar5 = local_40.CurrentBitIndex;
        puVar2 = (undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x28);
        iVar3 = *(int *)(*(longlong *)&this->Elements + 8 +
                        (longlong)local_40.CurrentBitIndex * 0x28);
        iVar7 = iVar3 + -1;
        if (iVar3 == 0) {
          pwVar10 = L"";
          iVar7 = 0;
        }
        else {
          pwVar10 = (wchar_t *)*puVar2;
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
        uVar6 = *piVar1 - 1U & uVar6;
        *(uint *)((longlong)puVar2 + 0x24) = uVar6;
        FVar4 = (this->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar4;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)FVar11 + uVar8 * 4);
        *(int *)((longlong)FVar11 + uVar8 * 4) = iVar5;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 14dc86220

void __thiscall
TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<FString,FMovieGraphEvaluatedSettingsStack>_> *param_2,
              int param_3)

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

// Append<FDefaultSetAllocator> @ 14dc9f600

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::
Append<FDefaultSetAllocator>
          (TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator> *this
          ,TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>
           *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  int local_res18;
  TObjectPtr<AActor> local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  uVar12 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  uVar6 = 1;
  uVar9 = (uVar12 - *(int *)&(param_1->Elements).field_0x34) +
          *(int *)&(param_1->Elements).field_0x8;
  if (uVar12 < uVar9) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,uVar9);
    if (uVar9 < 4) {
      iVar5 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_res10 = (undefined4)lVar8;
      iVar5 = 1 << ((byte)lVar8 & 0x1f);
    }
    if ((this->HashSize == 0) || (this->HashSize < iVar5)) {
      this->HashSize = iVar5;
      Rehash(this);
    }
  }
  iVar5 = *(int *)&(param_1->Elements).field_0x28;
  iVar10 = 0;
  puVar2 = &(param_1->Elements).field_0x10;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar5 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar2;
    }
    uVar9 = *puVar14;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14dc9f70d;
      uVar9 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar5 < iVar7) {
      iVar7 = iVar5;
    }
  }
LAB_14dc9f70d:
  uVar9 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar9 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar6,iVar10);
  TStack_70.CurrentBitIndex = iVar7;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_70._28_4_ = iVar7;
  TStack_70.BaseBitIndex = iVar13;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar9 < 0) || (iVar5 < (int)uVar9)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar2;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14dc9f811;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar12;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_14dc9f811:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar9) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    Emplace<TObjectPtr<AActor>_const_&>
              (this,&local_res20,
               (bool *)((longlong)TStack_70.CurrentBitIndex * 0x10 + *(longlong *)&param_1->Elements
                       ));
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// Append<FDefaultSetAllocator> @ 14dc9f8a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
::Append<FDefaultSetAllocator>
          (TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
           *this,TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                 *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  int local_res18;
  TObjectPtr<UActorComponent> local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  uVar12 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  uVar6 = 1;
  uVar9 = (uVar12 - *(int *)&(param_1->Elements).field_0x34) +
          *(int *)&(param_1->Elements).field_0x8;
  if (uVar12 < uVar9) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,uVar9);
    if (uVar9 < 4) {
      iVar5 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_res10 = (undefined4)lVar8;
      iVar5 = 1 << ((byte)lVar8 & 0x1f);
    }
    if ((this->HashSize == 0) || (this->HashSize < iVar5)) {
      this->HashSize = iVar5;
      Rehash(this);
    }
  }
  iVar5 = *(int *)&(param_1->Elements).field_0x28;
  iVar10 = 0;
  puVar2 = &(param_1->Elements).field_0x10;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar5 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar2;
    }
    uVar9 = *puVar14;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14dc9f9ad;
      uVar9 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar5 < iVar7) {
      iVar7 = iVar5;
    }
  }
LAB_14dc9f9ad:
  uVar9 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar9 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar6,iVar10);
  TStack_70.CurrentBitIndex = iVar7;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_70._28_4_ = iVar7;
  TStack_70.BaseBitIndex = iVar13;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar9 < 0) || (iVar5 < (int)uVar9)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar2;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14dc9fab1;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar12;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_14dc9fab1:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar9) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    Emplace<TObjectPtr<UActorComponent>_const_&>
              (this,&local_res20,
               (bool *)((longlong)TStack_70.CurrentBitIndex * 0x10 + *(longlong *)&param_1->Elements
                       ));
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// Emplace<TObjectPtr<AActor>_const_&> @ 14dca19d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSetElementId __thiscall
TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::
Emplace<TObjectPtr<AActor>_const_&>
          (TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator> *this
          ,TObjectPtr<AActor> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  char *in_R9;
  int iVar10;
  bool bVar11;
  TObjectPtr<AActor_const_>_u_0 local_res8;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x10);
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (undefined8 *)0x0) {
    pUVar3 = *(UObject **)param_2;
    *(UObject **)local_48.Pointer = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    *(undefined4 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
  }
  pUVar3 = *(UObject **)local_48.Pointer;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  bVar11 = false;
  uVar5 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  iVar10 = local_48.Index;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    local_res8.DebugPtr = *(AActor **)local_48.Pointer;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    iVar4 = FindIndexByHash<TObjectPtr<AActor_const_>_>
                      (this,uVar5,(TObjectPtr<AActor_const_> *)&local_res8.ObjectPtr);
    bVar11 = iVar4 != -1;
    if (bVar11) {
      *(undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar4 * 0x10) =
           *(undefined8 *)local_48.Pointer;
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      iVar10 = iVar4;
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
      *(uint *)((longlong)local_48.Pointer + 0xc) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 8) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4)
      ;
      *(int *)((longlong)FVar8 + uVar6 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->field0_0x0 = iVar10;
  return (FSetElementId)(int)param_1;
}

// Emplace<TObjectPtr<UActorComponent>_const_&> @ 14dca1c00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSetElementId __thiscall
TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
::Emplace<TObjectPtr<UActorComponent>_const_&>
          (TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
           *this,TObjectPtr<UActorComponent> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  char *in_R9;
  int iVar10;
  bool bVar11;
  TObjectPtr<UActorComponent_const_>_u_0 local_res8;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x10);
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (undefined8 *)0x0) {
    pUVar3 = *(UObject **)param_2;
    *(UObject **)local_48.Pointer = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    *(undefined4 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
  }
  pUVar3 = *(UObject **)local_48.Pointer;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  bVar11 = false;
  uVar5 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  iVar10 = local_48.Index;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    local_res8.DebugPtr = *(UActorComponent **)local_48.Pointer;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (UActorComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    iVar4 = FindIndexByHash<TObjectPtr<UActorComponent_const_>_>
                      (this,uVar5,(TObjectPtr<UActorComponent_const_> *)&local_res8.ObjectPtr);
    bVar11 = iVar4 != -1;
    if (bVar11) {
      *(undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar4 * 0x10) =
           *(undefined8 *)local_48.Pointer;
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      iVar10 = iVar4;
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
      *(uint *)((longlong)local_48.Pointer + 0xc) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 8) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4)
      ;
      *(int *)((longlong)FVar8 + uVar6 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->field0_0x0 = iVar10;
  return (FSetElementId)(int)param_1;
}

// Emplace<FMovieGraphRenderDataIdentifier_const_&> @ 14dca1e30

FSetElementId __thiscall
TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
::Emplace<FMovieGraphRenderDataIdentifier_const_&>
          (TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
           *this,FMovieGraphRenderDataIdentifier *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  bool *in_R9;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_88;
  FMovieGraphRenderDataIdentifier local_78;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x50);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_88,iVar5);
  if (local_88.Pointer != (TSparseSetElement<FMovieGraphRenderDataIdentifier> *)0x0) {
    *(undefined8 *)local_88.Pointer = *(undefined8 *)param_2;
    ::FString::FString((FString *)((longlong)local_88.Pointer + 8),(FString *)(param_2 + 8));
    ::FString::FString((FString *)((longlong)local_88.Pointer + 0x18),(FString *)(param_2 + 0x18));
    ::FString::FString((FString *)((longlong)local_88.Pointer + 0x28),(FString *)(param_2 + 0x28));
    ::FString::FString((FString *)((longlong)local_88.Pointer + 0x38),(FString *)(param_2 + 0x38));
    *(undefined4 *)((longlong)local_88.Pointer + 0x48) = 0xffffffff;
  }
  local_res8[0] = local_88.Index;
  local_78.RootBranchName = *(FName *)local_88.Pointer;
  ::FString::FString(&local_78.LayerName,(FString *)((longlong)local_88.Pointer + 8));
  ::FString::FString(&local_78.RendererName,(FString *)((longlong)local_88.Pointer + 0x18));
  ::FString::FString(&local_78.SubResourceName,(FString *)((longlong)local_88.Pointer + 0x28));
  ::FString::FString(&local_78.CameraName,(FString *)((longlong)local_88.Pointer + 0x38));
  uVar6 = ::GetTypeHash(&local_78);
  bVar4 = TryReplaceExisting(this,uVar6,local_88.Pointer,(int *)local_res8,in_R9);
  if (!bVar4) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)local_88.Pointer + 0x4c) = uVar6;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_88.Pointer + 0x48) =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(uint *)((longlong)FVar9 + uVar7 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  (param_1->RootBranchName).ComparisonIndex.Value = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TObjectPtr<UMovieGraphFileOutputNode>_> @ 14dca2040

FSetElementId __thiscall
TSet<TObjectPtr<UMovieGraphFileOutputNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphFileOutputNode>,0>,FDefaultSetAllocator>
::Emplace<TObjectPtr<UMovieGraphFileOutputNode>_>
          (TSet<TObjectPtr<UMovieGraphFileOutputNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphFileOutputNode>,0>,FDefaultSetAllocator>
           *this,TObjectPtr<UMovieGraphFileOutputNode> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  char *in_R9;
  int iVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar10 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x10);
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer != (undefined8 *)0x0) {
    pUVar3 = *(UObject **)param_2;
    *(UObject **)local_48.Pointer = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    *(undefined4 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
  }
  iVar10 = local_48.Index;
  pUVar3 = *(UObject **)local_48.Pointer;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  bVar12 = false;
  uVar6 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    pUVar3 = *(UObject **)local_48.Pointer;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    iVar10 = local_48.Index;
    if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      for (iVar5 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
          iVar5 != -1; iVar5 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar5 * 0x10))
      {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        pUVar4 = *(UObject **)(*(longlong *)&this->Elements + (longlong)iVar5 * 0x10);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        if (pUVar4 == pUVar3) {
          bVar12 = iVar5 != -1;
          iVar10 = local_48.Index;
          if (bVar12) {
            *(undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar5 * 0x10) =
                 *(undefined8 *)local_48.Pointer;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar10 = iVar5;
          }
          goto LAB_14dca2214;
        }
      }
      bVar12 = false;
      iVar10 = local_48.Index;
    }
  }
LAB_14dca2214:
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
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)local_48.Pointer + 0xc) = uVar6;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_48.Pointer + 8) = *(undefined4 *)((longlong)FVar9 + uVar7 * 4)
      ;
      *(int *)((longlong)FVar9 + uVar7 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->field0_0x0 = iVar10;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<UClass_*_&,TObjectPtr<UMovieGraphBurnInWidget>_&>_> @ 14dca22f0

FSetElementId __thiscall
TSet<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<UClass_*_&,TObjectPtr<UMovieGraphBurnInWidget>_&>_>
          (TSet<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UClass_*_&,TObjectPtr<UMovieGraphBurnInWidget>_&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  UObject *pUVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  char *in_R9;
  int iVar11;
  bool bVar12;
  TObjectPtr<UClass_const_>_u_0 local_res8;
  FSparseArrayAllocationInfo local_48;
  
  iVar11 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar11 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar11 = iVar11 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    pUVar4 = (UObject *)**(undefined8 **)param_2;
    *(UObject **)local_48.Pointer = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pUVar4 = (UObject *)*puVar3;
    *(UObject **)((longlong)local_48.Pointer + 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  pUVar4 = *(UObject **)local_48.Pointer;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  bVar12 = false;
  uVar6 = ((uint)((ulonglong)pUVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar4 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  iVar11 = local_48.Index;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    local_res8.DebugPtr = *(UClass **)local_48.Pointer;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    iVar5 = FindIndexByHash<TObjectPtr<UClass_const_>_>
                      (this,uVar6,(TObjectPtr<UClass_const_> *)&local_res8.ObjectPtr);
    bVar12 = iVar5 != -1;
    if (bVar12) {
      memmove((void *)(*(longlong *)&this->Elements + (longlong)iVar5 * 0x18),local_48.Pointer,0x10)
      ;
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      iVar11 = iVar5;
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
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar6;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_48.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = iVar11;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar11;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams_&,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState_&&>_> @ 14dca2540

FSetElementId __thiscall
TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams_&,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState_&&>_>
          (TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams_&,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  void *_Dst;
  int iVar9;
  char *in_R9;
  bool bVar10;
  FSparseArrayAllocationInfo local_a8;
  TIntPoint<int>_u_0 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar5 = iVar5 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x68 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x68 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_a8,iVar3);
  if (local_a8.Pointer !=
      (TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>
       *)0x0) {
    TPairInitializer<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams_&,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState_&&>
    ::
    operator<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>_TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>
              ((TPairInitializer<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams_&,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState_&&>
                *)param_2,local_a8.Pointer);
    *(undefined4 *)((longlong)local_a8.Pointer + 0x60) = 0xffffffff;
  }
  local_98._s_0 = *(TIntPoint<int>_u_0_s_0 *)local_a8.Pointer;
  uStack_90 = *(undefined8 *)((longlong)local_a8.Pointer + 8);
  local_88 = *(undefined8 *)((longlong)local_a8.Pointer + 0x10);
  ::FString::FString(&local_80,(FString *)((longlong)local_a8.Pointer + 0x18));
  ::FString::FString(&local_70,(FString *)((longlong)local_a8.Pointer + 0x28));
  ::FString::FString(&local_60,(FString *)((longlong)local_a8.Pointer + 0x38));
  ::FString::FString(&local_50,(FString *)((longlong)local_a8.Pointer + 0x48));
  uVar4 = UE::MovieGraph::DefaultRenderer::GetTypeHash
                    ((FMovieGraphImagePreviewDataPoolParams *)&local_98._s_0);
  bVar10 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar5 = FindIndexByHash<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams>
                      (this,uVar4,local_a8.Pointer);
    bVar10 = iVar5 != -1;
    if (bVar10) {
      _Dst = (void *)((longlong)iVar5 * 0x68 + *(longlong *)&this->Elements);
      if (*(void **)((longlong)_Dst + 0x48) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x48));
      }
      if (*(void **)((longlong)_Dst + 0x38) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x38));
      }
      if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x28));
      }
      if (*(void **)((longlong)_Dst + 0x18) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x18));
      }
      memmove(_Dst,local_a8.Pointer,0x60);
      TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_a8.Index,1);
      local_a8.Index = iVar5;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar10;
  }
  if (bVar10 == false) {
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
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)&((TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>
                  *)((longlong)local_a8.Pointer + 0x60))->field_0x4 = uVar4;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_a8.Pointer + 0x60) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_a8.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_a8.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams_&,TObjectPtr<UTextureRenderTarget2D>_const_&>_> @ 14dca27c0

FSetElementId __thiscall
TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams_&,TObjectPtr<UTextureRenderTarget2D>_const_&>_>
          (TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams_&,TObjectPtr<UTextureRenderTarget2D>_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  void *_Dst;
  int iVar9;
  char *in_R9;
  bool bVar10;
  FSparseArrayAllocationInfo local_a8;
  TIntPoint<int>_u_0 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar5 = iVar5 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x68 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x68 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_a8,iVar3);
  if (local_a8.Pointer !=
      (TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>
       *)0x0) {
    TPairInitializer<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams_&,TObjectPtr<UTextureRenderTarget2D>_const_&>
    ::
    operator<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>_TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>
              ((TPairInitializer<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams_&,TObjectPtr<UTextureRenderTarget2D>_const_&>
                *)param_2,local_a8.Pointer);
    *(undefined4 *)((longlong)local_a8.Pointer + 0x60) = 0xffffffff;
  }
  local_98._s_0 = *(TIntPoint<int>_u_0_s_0 *)local_a8.Pointer;
  uStack_90 = *(undefined8 *)((longlong)local_a8.Pointer + 8);
  local_88 = *(undefined8 *)((longlong)local_a8.Pointer + 0x10);
  ::FString::FString(&local_80,(FString *)((longlong)local_a8.Pointer + 0x18));
  ::FString::FString(&local_70,(FString *)((longlong)local_a8.Pointer + 0x28));
  ::FString::FString(&local_60,(FString *)((longlong)local_a8.Pointer + 0x38));
  ::FString::FString(&local_50,(FString *)((longlong)local_a8.Pointer + 0x48));
  uVar4 = UE::MovieGraph::DefaultRenderer::GetTypeHash
                    ((FMovieGraphImagePreviewDataPoolParams *)&local_98._s_0);
  bVar10 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar5 = FindIndexByHash<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams>
                      (this,uVar4,local_a8.Pointer);
    bVar10 = iVar5 != -1;
    if (bVar10) {
      _Dst = (void *)((longlong)iVar5 * 0x68 + *(longlong *)&this->Elements);
      if (*(void **)((longlong)_Dst + 0x48) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x48));
      }
      if (*(void **)((longlong)_Dst + 0x38) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x38));
      }
      if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x28));
      }
      if (*(void **)((longlong)_Dst + 0x18) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x18));
      }
      memmove(_Dst,local_a8.Pointer,0x60);
      TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_a8.Index,1);
      local_a8.Index = iVar5;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar10;
  }
  if (bVar10 == false) {
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
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)&((TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>
                  *)((longlong)local_a8.Pointer + 0x60))->field_0x4 = uVar4;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_a8.Pointer + 0x60) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_a8.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_a8.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FMovieGraphRenderDataIdentifier_const_&,int_&&>_> @ 14dca2a40

FSetElementId __thiscall
TSet<TTuple<FMovieGraphRenderDataIdentifier,int>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,int,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FMovieGraphRenderDataIdentifier_const_&,int_&&>_>
          (TSet<TTuple<FMovieGraphRenderDataIdentifier,int>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,int,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FMovieGraphRenderDataIdentifier_const_&,int_&&> *param_1,
          bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  char *in_R9;
  void *_Dst;
  FSparseArrayAllocationInfo local_98;
  FMovieGraphRenderDataIdentifier local_88;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x58 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x58 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_98,iVar5);
  if (local_98.Pointer != (TTuple<FMovieGraphRenderDataIdentifier,int> *)0x0) {
    TPairInitializer<FMovieGraphRenderDataIdentifier_const_&,int_&&>::
    operator<FMovieGraphRenderDataIdentifier,int>_TTuple<FMovieGraphRenderDataIdentifier,int>
              ((TPairInitializer<FMovieGraphRenderDataIdentifier_const_&,int_&&> *)param_2,
               local_98.Pointer);
    *(undefined4 *)((longlong)local_98.Pointer + 0x50) = 0xffffffff;
  }
  local_88.RootBranchName = *(FName *)local_98.Pointer;
  ::FString::FString(&local_88.LayerName,(FString *)((longlong)local_98.Pointer + 8));
  ::FString::FString(&local_88.RendererName,(FString *)((longlong)local_98.Pointer + 0x18));
  ::FString::FString(&local_88.SubResourceName,(FString *)((longlong)local_98.Pointer + 0x28));
  ::FString::FString(&local_88.CameraName,(FString *)((longlong)local_98.Pointer + 0x38));
  uVar6 = ::GetTypeHash(&local_88);
  iVar1 = *(int *)&(this->Elements).field_0x8;
  bVar4 = false;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if ((iVar1 - iVar5 != 1) && (iVar1 != iVar5)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x58 + 0x50 + *(longlong *)&this->Elements))
    {
      bVar4 = FMovieGraphRenderDataIdentifier::operator==
                        ((FMovieGraphRenderDataIdentifier *)
                         (*(longlong *)&this->Elements + (longlong)iVar1 * 0x58),local_98.Pointer);
      if (bVar4) {
        bVar4 = iVar1 != -1;
        if (bVar4) {
          _Dst = (void *)((longlong)iVar1 * 0x58 + *(longlong *)&this->Elements);
          if (*(void **)((longlong)_Dst + 0x38) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)_Dst + 0x38));
          }
          if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)_Dst + 0x28));
          }
          if (*(void **)((longlong)_Dst + 0x18) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)_Dst + 0x18));
          }
          if (*(void **)((longlong)_Dst + 8) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)_Dst + 8));
          }
          memmove(_Dst,local_98.Pointer,0x50);
          TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,local_98.Index,1);
          local_98.Index = iVar1;
        }
        goto LAB_14dca2bbf;
      }
    }
    bVar4 = false;
  }
LAB_14dca2bbf:
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar4;
  }
  if (bVar4 == false) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)&((TTuple<FMovieGraphRenderDataIdentifier,int> *)((longlong)local_98.Pointer + 0x50))
                ->field_0x4 = uVar6;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_98.Pointer + 0x50) =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_98.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_98.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams_const_&,TSharedPtr<FMoviePipelineSurfaceQueue,1>_const_&>_> @ 14dca2cf0

FSetElementId __thiscall
TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams_const_&,TSharedPtr<FMoviePipelineSurfaceQueue,1>_const_&>_>
          (TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams_const_&,TSharedPtr<FMoviePipelineSurfaceQueue,1>_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  TIntPoint<int>_u_0 *pTVar3;
  TIntPoint<int>_u_0 TVar4;
  bool *pbVar5;
  EPixelFormat *pEVar6;
  bool *pbVar7;
  undefined1 *puVar8;
  FRenderTargetInitParams *_Src;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ForElementType<FSetElementId> FVar14;
  int iVar15;
  char *in_R9;
  undefined1 *puVar16;
  undefined4 uVar17;
  bool bVar18;
  TIntPoint<int>_u_0 local_48;
  FRenderTargetInitParams *pFStack_40;
  
  iVar11 = *(int *)&(this->Elements).field_0x34;
  iVar15 = 1;
  if (iVar11 == 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar9 = *(int *)&(this->Elements).field_0x30;
    iVar11 = iVar11 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar9 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  puVar16 = &(this->Elements).field_0x8;
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,(FSparseArrayAllocationInfo *)&local_48._s_0,iVar9);
  _Src = pFStack_40;
  uVar17 = local_48._s_0.X;
  if (pFStack_40 != (FRenderTargetInitParams *)0x0) {
    pTVar3 = *(TIntPoint<int>_u_0 **)(param_2 + 8);
    TVar4 = (*(TIntPoint<int>_u_0 **)param_2)[1];
    (pFStack_40->Size).field0_0x0 = **(TIntPoint<int>_u_0 **)param_2;
    *(TIntPoint<int>_u_0 *)&pFStack_40->TargetGamma = TVar4;
    pFStack_40[1].Size.field0_0x0 = *pTVar3;
    TVar4 = pTVar3[1];
    *(TIntPoint<int>_u_0 *)&pFStack_40[1].TargetGamma = TVar4;
    if (TVar4 != (TIntPoint<int>_u_0)0x0) {
      LOCK();
      *(int *)((longlong)TVar4 + 8) = *(int *)((longlong)TVar4 + 8) + 1;
      UNLOCK();
    }
    pFStack_40[2].Size.field0_0x0._s_0.X = -1;
  }
  local_48._s_0 = *(TIntPoint<int>_u_0_s_0 *)&(pFStack_40->Size).field0_0x0;
  pbVar5 = &pFStack_40->bForceLinearGamma;
  pEVar6 = &pFStack_40->PixelFormat;
  pbVar7 = &pFStack_40->bIncludeInPreviewWindow;
  puVar8 = &pFStack_40->field_0xf;
  pFStack_40._0_4_ = pFStack_40->TargetGamma;
  pFStack_40._4_1_ = *pbVar5;
  pFStack_40._5_1_ = *pEVar6;
  pFStack_40._6_1_ = *pbVar7;
  pFStack_40._7_1_ = *puVar8;
  uVar10 = UE::MovieGraph::DefaultRenderer::GetTypeHash((FRenderTargetInitParams *)&local_48._s_0);
  bVar18 = false;
  if (*(int *)puVar16 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar11 = FindIndexByHash<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams>
                       (this,uVar10,_Src);
    bVar18 = iVar11 != -1;
    if (bVar18) {
      lVar2 = *(longlong *)&this->Elements;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(lVar2 + 0x18 + (longlong)iVar11 * 0x28));
      memmove((void *)(lVar2 + (longlong)iVar11 * 0x28),_Src,0x20);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar17,1);
      uVar17 = iVar11;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar18;
  }
  if (bVar18 == false) {
    uVar13 = *(int *)puVar16 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar13) {
      uVar12 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar15 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar13 < 1) || (iVar15 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & uVar10;
      _Src[2].Size.field0_0x0._s_0.Y = uVar10;
      FVar14 = (this->Hash).SecondaryData;
      if (FVar14 == (ForElementType<FSetElementId>)0x0) {
        FVar14 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar12 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      _Src[2].Size.field0_0x0._s_0.X = *(int *)((longlong)FVar14 + uVar12 * 4);
      *(undefined4 *)((longlong)FVar14 + uVar12 * 4) = uVar17;
    }
    else {
      this->HashSize = iVar15;
      Rehash(this);
    }
  }
  *(undefined4 *)&param_1->Key = uVar17;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_const_&,TObjectPtr<UMovieGraphQuickRenderModeSettings>_&&>_> @ 14dca2f00

FSetElementId __thiscall
TSet<TTuple<FName,TObjectPtr<UMovieGraphQuickRenderModeSettings>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMovieGraphQuickRenderModeSettings>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FName_const_&,TObjectPtr<UMovieGraphQuickRenderModeSettings>_&&>_>
          (TSet<TTuple<FName,TObjectPtr<UMovieGraphQuickRenderModeSettings>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMovieGraphQuickRenderModeSettings>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_const_&,TObjectPtr<UMovieGraphQuickRenderModeSettings>_&&>
                 *param_1,bool *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  UObject *pUVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  char *in_R9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar9 = iVar9 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar10 = *(int *)(lVar1 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar10;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar10 * 0x18) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (longlong *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    pUVar3 = (UObject *)*puVar2;
    *(UObject **)((longlong)local_48.Pointer + 8) = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  iVar9 = *(int *)puVar11;
  bVar13 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 + (int)((ulonglong)lVar1 >> 0x20);
  iVar10 = local_48.Index;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar9 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar9 * 0x18) == *(longlong *)local_48.Pointer) {
          bVar13 = iVar9 != -1;
          if (bVar13) {
            memmove((void *)(lVar1 + (longlong)iVar9 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar10 = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(lVar1 + 0x10 + (longlong)iVar9 * 0x18);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar7 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar12 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar10;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,FStringFormatArg_&&>_> @ 14dca3140

FSetElementId __thiscall
TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_const_&,FStringFormatArg_&&>_>
          (TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,FStringFormatArg_&&> *param_1,bool *param_2)

{
  FStringFormatArg *pFVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  wchar_t *pwVar7;
  ForElementType<FSetElementId> FVar8;
  char cVar9;
  FString *_Src;
  longlong lVar10;
  char *in_R9;
  int iVar11;
  undefined8 *_Dst;
  int iVar12;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar4 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar4 == 0) {
    iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar2 = *(int *)&(this->Elements).field_0x30;
    iVar4 = iVar4 + -1;
    lVar10 = *(longlong *)&this->Elements;
    iVar11 = *(int *)((longlong)iVar2 * 0x38 + 4 + lVar10);
    *(int *)&(this->Elements).field_0x30 = iVar11;
    *(int *)&(this->Elements).field_0x34 = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar11 * 0x38 + lVar10) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar2);
  if (local_48.Pointer == (FString *)0x0) {
    _Src = (FString *)0x0;
  }
  else {
    pFVar1 = *(FStringFormatArg **)(param_2 + 8);
    ::FString::FString(local_48.Pointer,*(FString **)param_2);
    (((FString *)((longlong)local_48.Pointer + 0x20))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (((FString *)((longlong)local_48.Pointer + 0x20))->Data).ArrayNum = 0;
    (((FString *)((longlong)local_48.Pointer + 0x20))->Data).ArrayMax = 0;
    FStringFormatArg::operator=((FStringFormatArg *)((longlong)local_48.Pointer + 0x10),pFVar1);
    *(undefined4 *)&(((FString *)((longlong)local_48.Pointer + 0x30))->Data).AllocatorInstance.Data
         = 0xffffffff;
    _Src = local_48.Pointer;
  }
  iVar4 = 0;
  iVar2 = (_Src->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(_Src->Data).AllocatorInstance.Data;
    iVar4 = iVar2 + -1;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar7);
  iVar4 = *(int *)&(this->Elements).field_0x8;
  cVar9 = '\0';
  iVar2 = *(int *)&(this->Elements).field_0x34;
  iVar11 = local_48.Index;
  if ((iVar4 - iVar2 != 1) && (iVar4 != iVar2)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar11 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar3) * 4);
    while (iVar11 != -1) {
      iVar4 = (_Src->Data).ArrayNum;
      lVar10 = (longlong)iVar11 * 0x38;
      iVar2 = *(int *)(*(longlong *)&this->Elements + 8 + lVar10);
      if (iVar2 == iVar4) {
        if (1 < iVar2) {
          iVar4 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(*(longlong *)&this->Elements + lVar10),
                             (wchar_t *)(_Src->Data).AllocatorInstance.Data);
          bVar13 = iVar4 == 0;
          goto LAB_14dca32b4;
        }
LAB_14dca3326:
        cVar9 = '\x01';
        _Dst = (undefined8 *)((longlong)iVar11 * 0x38 + *(longlong *)&this->Elements);
        if ((void *)_Dst[4] != (void *)0x0) {
          FMemory::Free((void *)_Dst[4]);
        }
        if ((void *)*_Dst != (void *)0x0) {
          FMemory::Free((void *)*_Dst);
        }
        memmove(_Dst,_Src,0x30);
        TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized
                  ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)this,local_48.Index,1);
        goto LAB_14dca32d1;
      }
      bVar13 = iVar2 + iVar4 == 1;
LAB_14dca32b4:
      if (bVar13) goto LAB_14dca3326;
      iVar11 = *(int *)(*(longlong *)&this->Elements + 0x30 + lVar10);
    }
    cVar9 = '\0';
    iVar11 = local_48.Index;
  }
LAB_14dca32d1:
  if (in_R9 != (char *)0x0) {
    *in_R9 = cVar9;
  }
  if (cVar9 == '\0') {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar12 <= this->HashSize)) {
      uVar3 = this->HashSize - 1U & uVar3;
      *(uint *)((longlong)&_Src[3].Data.AllocatorInstance.Data + 4) = uVar3;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar3;
      *(undefined4 *)&_Src[3].Data.AllocatorInstance.Data =
           *(undefined4 *)((longlong)FVar8 + uVar5 * 4);
      *(int *)((longlong)FVar8 + uVar5 * 4) = iVar11;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar11;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<enum_EMovieGraphQuickRenderMode_const_&,FName_const_&>_> @ 14dca33d0

FSetElementId __thiscall
TSet<TTuple<enum_EMovieGraphQuickRenderMode,FName>,TDefaultMapHashableKeyFuncs<enum_EMovieGraphQuickRenderMode,FName,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<enum_EMovieGraphQuickRenderMode_const_&,FName_const_&>_>
          (void *this,TPairInitializer<EMovieGraphQuickRenderMode_const_&,FName_const_&> *param_1,
          bool *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  char *in_R9;
  bool bVar11;
  FSparseArrayAllocationInfo local_38;
  
  iVar10 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar6 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar4 = *(int *)(*(longlong *)this + 4 + (longlong)iVar6 * 0x14);
    *(int *)((longlong)this + 0x30) = iVar4;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar4 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar6);
  if (local_38.Pointer != (byte *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 8);
    *(byte *)local_38.Pointer = **(byte **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 4) = *puVar5;
    pbVar2 = (byte *)((longlong)local_38.Pointer + 0xc);
    pbVar2[0] = 0xff;
    pbVar2[1] = 0xff;
    pbVar2[2] = 0xff;
    pbVar2[3] = 0xff;
  }
  bVar11 = false;
  bVar3 = *(byte *)local_38.Pointer;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar9 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar9 = (longlong)this + 0x38;
    }
    iVar6 = *(int *)(lVar9 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)bVar3) *
                             4);
    if (iVar6 != -1) {
      lVar9 = *(longlong *)this;
      do {
        if (*(byte *)(lVar9 + (longlong)iVar6 * 0x14) == bVar3) {
          bVar11 = iVar6 != -1;
          if (bVar11) {
            memmove((void *)(lVar9 + (longlong)iVar6 * 0x14),local_38.Pointer,0xc);
            TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,local_38.Index,1);
            local_38.Index = iVar6;
          }
          break;
        }
        iVar6 = *(int *)(lVar9 + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar8 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)((longlong)this + 0x48))) {
      uVar8 = *(int *)((longlong)this + 0x48) - 1U & (uint)bVar3;
      *(uint *)((longlong)local_38.Pointer + 0x10) = uVar8;
      lVar9 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar9 = (longlong)this + 0x38;
      }
      uVar7 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (ulonglong)uVar8;
      *(undefined4 *)((longlong)local_38.Pointer + 0xc) = *(undefined4 *)(lVar9 + uVar7 * 4);
      *(int *)(lVar9 + uVar7 * 4) = local_38.Index;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<TSoftObjectPtr<UPrimitiveComponent>_&&>_> @ 14dca3730

FSetElementId __thiscall
TSet<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<TSoftObjectPtr<UPrimitiveComponent>_&&>_>
          (TSet<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<TSoftObjectPtr<UPrimitiveComponent>_&&> *param_2,
          bool *param_3)

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
  TSparseSetElement<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>_>
  *pTVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  int local_res8 [2];
  bool *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar1 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar7 * 0x40 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar7);
  pTVar10 = (TSparseSetElement<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>_>
             *)0x0;
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    puVar4 = *(undefined8 **)param_3;
    *(undefined8 *)local_38.Pointer = *puVar4;
    uVar5 = puVar4[2];
    *(undefined8 *)((longlong)local_38.Pointer + 8) = puVar4[1];
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = uVar5;
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = puVar4[3];
    puVar4[3] = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x20) = *(undefined4 *)(puVar4 + 4);
    *(undefined4 *)((longlong)local_38.Pointer + 0x24) = *(undefined4 *)((longlong)puVar4 + 0x24);
    puVar4[4] = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x28) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x30) = 0;
    DestructItems<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,int>
              ((TTuple<int,TSoftObjectPtr<UMaterialInterface>_> *)0x0,0);
    *(undefined4 *)((longlong)local_38.Pointer + 0x38) = 0xffffffff;
    pTVar10 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  bVar6 = TryReplaceExisting(this,(uint)param_2,pTVar10,local_res8,in_stack_00000028);
  if (!bVar6) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar12 <= this->HashSize)) {
      uVar9 = this->HashSize - 1U & (uint)param_2;
      *(uint *)&pTVar10->field_0x3c = uVar9;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(undefined4 *)&pTVar10->field_0x38 = *(undefined4 *)((longlong)FVar11 + uVar8 * 4);
      *(int *)((longlong)FVar11 + uVar8 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_res8[0];
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FSoftClassPath_&&>_> @ 14dca3910

FSetElementId __thiscall
TSet<TTuple<FSoftClassPath,FMovieGraphStringArray>,TDefaultMapHashableKeyFuncs<FSoftClassPath,FMovieGraphStringArray,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FSoftClassPath_&&>_>
          (TSet<TTuple<FSoftClassPath,FMovieGraphStringArray>,TDefaultMapHashableKeyFuncs<FSoftClassPath,FMovieGraphStringArray,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FSoftClassPath_&&> *param_2,bool *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  FName *pFVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 in_register_00000014;
  FSoftObjectPath *_Src;
  ForElementType<FSetElementId> FVar10;
  void *_Dst;
  int iVar11;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar1 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar7 * 0x38 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar7);
  _Src = (FSoftObjectPath *)0x0;
  if (local_38.Pointer != (FSoftObjectPath *)0x0) {
    pFVar4 = *(FName **)param_3;
    FVar5 = pFVar4[1];
    (local_38.Pointer)->PackageName = *pFVar4;
    (local_38.Pointer)->AssetName = FVar5;
    (((FUtf8String *)((longlong)local_38.Pointer + 0x10))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (((FUtf8String *)((longlong)local_38.Pointer + 0x10))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)pFVar4[2];
    pFVar4[2].ComparisonIndex = 0;
    pFVar4[2].Number = 0;
    (((FUtf8String *)((longlong)local_38.Pointer + 0x10))->Data).ArrayNum =
         pFVar4[3].ComparisonIndex.Value;
    (((FUtf8String *)((longlong)local_38.Pointer + 0x10))->Data).ArrayMax = pFVar4[3].Number;
    pFVar4[3].ComparisonIndex = 0;
    pFVar4[3].Number = 0;
    (((FSoftObjectPath *)((longlong)local_38.Pointer + 0x20))->AssetPath).PackageName.
    ComparisonIndex = 0;
    (((FSoftObjectPath *)((longlong)local_38.Pointer + 0x20))->AssetPath).PackageName.Number = 0;
    (((FSoftObjectPath *)((longlong)local_38.Pointer + 0x20))->AssetPath).AssetName.ComparisonIndex
         = 0;
    (((FSoftObjectPath *)((longlong)local_38.Pointer + 0x20))->AssetPath).AssetName.Number = 0;
    DestructItems<FString,int>((FString *)0x0,0);
    *(undefined4 *)
     &(((FSoftObjectPath *)((longlong)local_38.Pointer + 0x20))->SubPathString).Data.
      AllocatorInstance.Data = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar1 = *(int *)&(this->Elements).field_0x8;
  bVar6 = false;
  iVar7 = *(int *)&(this->Elements).field_0x34;
  if ((iVar1 - iVar7 != 1) && (iVar1 != iVar7)) {
    FVar10 = (this->Hash).SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar10 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x38 + 0x30 + *(longlong *)&this->Elements))
    {
      bVar6 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)(*(longlong *)&this->Elements + (longlong)iVar1 * 0x38),
                         _Src);
      if (bVar6) {
        bVar6 = iVar1 != -1;
        if (bVar6) {
          _Dst = (void *)((longlong)iVar1 * 0x38 + *(longlong *)&this->Elements);
          DestructItems<FString,int>
                    (*(FString **)((longlong)_Dst + 0x20),*(int *)((longlong)_Dst + 0x28));
          if (*(void **)((longlong)_Dst + 0x20) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)_Dst + 0x20));
          }
          if (*(void **)((longlong)_Dst + 0x10) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)_Dst + 0x10));
          }
          memmove(_Dst,_Src,0x30);
          TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,local_38.Index,1);
          local_38.Index = iVar1;
        }
        goto LAB_14dca3a78;
      }
    }
    bVar6 = false;
  }
LAB_14dca3a78:
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar6;
  }
  if (bVar6 == false) {
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
      uVar9 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)&_Src[1].SubPathString.Data.AllocatorInstance.Data + 4) = uVar9;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(undefined4 *)&_Src[1].SubPathString.Data.AllocatorInstance.Data =
           *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<int_const_&>_> @ 14dca3ba0

FSetElementId __thiscall
TSet<TTuple<int,UE::MovieGraph::FRenderTimeStatistics>,TDefaultMapHashableKeyFuncs<int,UE::MovieGraph::FRenderTimeStatistics,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<int_const_&>_>
          (TSet<TTuple<int,UE::MovieGraph::FRenderTimeStatistics>,TDefaultMapHashableKeyFuncs<int,UE::MovieGraph::FRenderTimeStatistics,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<int_const_&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  bool bVar10;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar7 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar2);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  puVar9 = &(this->Elements).field_0x8;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar3);
  if (local_38.Pointer != (int *)0x0) {
    *(int *)local_38.Pointer = **(int **)param_3;
    ((int *)((longlong)local_38.Pointer + 8))[0] = 0;
    ((int *)((longlong)local_38.Pointer + 8))[1] = 0;
    ((int *)((longlong)local_38.Pointer + 0x10))[0] = 0;
    ((int *)((longlong)local_38.Pointer + 0x10))[1] = 0;
    *(int *)((longlong)local_38.Pointer + 0x18) = -1;
  }
  iVar8 = *(int *)puVar9;
  bVar10 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar8 != -1) {
      do {
        if (*(int *)((longlong)iVar8 * 0x20 + *(longlong *)&this->Elements) ==
            *(int *)local_38.Pointer) {
          bVar10 = iVar8 != -1;
          if (bVar10) {
            memmove((void *)((longlong)iVar8 * 0x20 + *(longlong *)&this->Elements),local_38.Pointer
                    ,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *(longlong *)&this->Elements);
      } while (iVar8 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar10;
  }
  if (bVar10 == false) {
    uVar5 = *(int *)puVar9 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar5) {
      uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0x1c) = uVar5;
      FVar6 = (this->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar4 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(int *)((longlong)local_38.Pointer + 0x18) = *(int *)((longlong)FVar6 + uVar4 * 4);
      *(int *)((longlong)FVar6 + uVar4 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar7;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<UMovieGraphFileOutputNode_*_const_&>_> @ 14dca3dc0

FSetElementId __thiscall
TSet<TTuple<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<UMovieGraphFileOutputNode_*_const_&>_>
          (TSet<TTuple<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<UMovieGraphFileOutputNode_*_const_&> *param_2,
          bool *param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  ulonglong uVar3;
  uint uVar4;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_48;
  
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_48);
  if (local_48.Pointer !=
      (TTuple<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>_>
       *)0x0) {
    TKeyInitializer<UMovieGraphFileOutputNode_*_const_&>::
    operator<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>_>_TTuple<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>_>
              ((TKeyInitializer<UMovieGraphFileOutputNode_*_const_&> *)param_3,local_48.Pointer);
    *(undefined4 *)((longlong)local_48.Pointer + 0x58) = 0xffffffff;
  }
  iVar6 = *(int *)&(this->Elements).field_0x8;
  bVar8 = false;
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar7 = 1;
  if ((iVar6 - iVar1 != 1) && (iVar6 != iVar1)) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 +
                    ((ulonglong)(this->HashSize - 1) & (ulonglong)param_2 & 0xffffffff) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar6 * 0x60 + lVar2) == *(longlong *)local_48.Pointer) {
          bVar8 = iVar6 != -1;
          if (bVar8) {
            _Dst = (void *)((longlong)iVar6 * 0x60 + lVar2);
            *(undefined4 *)((longlong)_Dst + 0x50) = 0;
            if (*(void **)((longlong)_Dst + 0x48) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x48));
            }
            TSparseArray<TSparseSetElement<FMovieGraphRenderDataIdentifier>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<FMovieGraphRenderDataIdentifier>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<FMovieGraphRenderDataIdentifier>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)((longlong)_Dst + 8));
            memmove(_Dst,local_48.Pointer,0x58);
            TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar6;
          }
          break;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x60 + 0x58 + lVar2);
      } while (iVar6 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar8;
  }
  if (bVar8 == false) {
    uVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar4) {
      uVar3 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & (uint)param_2;
      *(uint *)&((TTuple<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>_>
                  *)((longlong)local_48.Pointer + 0x58))->field_0x4 = uVar4;
      FVar5 = (this->Hash).SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x58) =
           *(undefined4 *)((longlong)FVar5 + uVar3 * 4);
      *(int *)((longlong)FVar5 + uVar3 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar7;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_48.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&>_> @ 14dca3f90

FSetElementId __thiscall
TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&>_>
          (TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&> *param_2,
          bool *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int local_res8 [2];
  bool *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (200,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar5 * 200 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 200 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<200,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<200,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>_>
       *)0x0) {
    TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&>::
    operator<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>_TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>
              ((TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&> *)param_3,local_38.Pointer)
    ;
    *(undefined4 *)((longlong)local_38.Pointer + 0xc0) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  bVar4 = TryReplaceExisting(this,(uint)param_2,local_38.Pointer,local_res8,in_stack_00000028);
  if (!bVar4) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0xc4) = uVar7;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0xc0) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_res8[0];
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&>_> @ 14dca4120

FSetElementId __thiscall
TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&>_>
          (TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&> *param_2,
          bool *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  FName *pFVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar10;
  void *_Dst;
  int iVar11;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar1 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar7 * 0x58 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x58 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar7);
  if (local_38.Pointer != (FMovieGraphRenderDataIdentifier *)0x0) {
    pFVar4 = *(FName **)param_3;
    *local_38.Pointer = *pFVar4;
    ::FString::FString((FString *)((longlong)local_38.Pointer + 8),(FString *)(pFVar4 + 1));
    ::FString::FString((FString *)((longlong)local_38.Pointer + 0x18),(FString *)(pFVar4 + 3));
    ::FString::FString((FString *)((longlong)local_38.Pointer + 0x28),(FString *)(pFVar4 + 5));
    ::FString::FString((FString *)((longlong)local_38.Pointer + 0x38),(FString *)(pFVar4 + 7));
    (((FMovieGraphRenderDataIdentifier *)((longlong)local_38.Pointer + 0x48))->RootBranchName).
    ComparisonIndex = 0;
    (((FMovieGraphRenderDataIdentifier *)((longlong)local_38.Pointer + 0x48))->RootBranchName).
    Number = 0;
    *(undefined4 *)
     &(((FMovieGraphRenderDataIdentifier *)((longlong)local_38.Pointer + 0x48))->LayerName).Data.
      AllocatorInstance.Data = 0xffffffff;
  }
  iVar1 = *(int *)&(this->Elements).field_0x8;
  bVar6 = false;
  iVar7 = *(int *)&(this->Elements).field_0x34;
  if ((iVar1 - iVar7 != 1) && (iVar1 != iVar7)) {
    FVar10 = (this->Hash).SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar10 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x58 + 0x50 + *(longlong *)&this->Elements))
    {
      bVar6 = FMovieGraphRenderDataIdentifier::operator==
                        ((FMovieGraphRenderDataIdentifier *)
                         (*(longlong *)&this->Elements + (longlong)iVar1 * 0x58),local_38.Pointer);
      if (bVar6) {
        bVar6 = iVar1 != -1;
        if (bVar6) {
          _Dst = (void *)((longlong)iVar1 * 0x58 + *(longlong *)&this->Elements);
          puVar5 = *(undefined8 **)((longlong)_Dst + 0x48);
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5,1);
          }
          if (*(void **)((longlong)_Dst + 0x38) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)_Dst + 0x38));
          }
          if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)_Dst + 0x28));
          }
          if (*(void **)((longlong)_Dst + 0x18) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)_Dst + 0x18));
          }
          if (*(void **)((longlong)_Dst + 8) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)_Dst + 8));
          }
          memmove(_Dst,local_38.Pointer,0x50);
          TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,local_38.Index,1);
          local_38.Index = iVar1;
        }
        goto LAB_14dca4288;
      }
    }
    bVar6 = false;
  }
LAB_14dca4288:
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar6;
  }
  if (bVar6 == false) {
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
      uVar9 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)
                &(((FMovieGraphRenderDataIdentifier *)((longlong)local_38.Pointer + 0x48))->
                 LayerName).Data.AllocatorInstance.Data + 4) = uVar9;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(undefined4 *)
       &(((FMovieGraphRenderDataIdentifier *)((longlong)local_38.Pointer + 0x48))->LayerName).Data.
        AllocatorInstance.Data = *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// FindIndexByHash<TObjectPtr<AActor_const_>_> @ 14dca4840

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::
FindIndexByHash<TObjectPtr<AActor_const_>_>
          (TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator> *this
          ,uint param_1,TObjectPtr<AActor_const_> *param_2)

{
  int iVar1;
  AActor *pAVar2;
  AActor *pAVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar1 * 0x10)) {
      pAVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar2 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar2);
      }
      pAVar3 = *(AActor **)(*(longlong *)&this->Elements + (longlong)iVar1 * 0x10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar3 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar3);
      }
      if (pAVar3 == pAVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<TObjectPtr<UClass_const_>_> @ 14dca4910

int __thiscall
TSet<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>,0>,FDefaultSetAllocator>
::FindIndexByHash<TObjectPtr<UClass_const_>_>
          (TSet<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>,0>,FDefaultSetAllocator>
           *this,uint param_1,TObjectPtr<UClass_const_> *param_2)

{
  int iVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)(*(longlong *)&this->Elements + 0x10 + (longlong)iVar1 * 0x18))
    {
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      pUVar3 = *(UClass **)((longlong)iVar1 * 0x18 + *(longlong *)&this->Elements);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      if (pUVar3 == pUVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams> @ 14dca49e0

int __thiscall
TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
::FindIndexByHash<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams>
          (TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
           *this,uint param_1,FMovieGraphImagePreviewDataPoolParams *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x68 + 0x60 + *(longlong *)&this->Elements))
    {
      lVar2 = *(longlong *)&this->Elements;
      lVar4 = (longlong)iVar1 * 0x68;
      if ((((*(int *)(lVar4 + lVar2) == (param_2->RenderInitParams).Size.field0_0x0._s_0.X) &&
           (*(int *)(lVar4 + 4 + lVar2) == (param_2->RenderInitParams).Size.field0_0x0._s_0.Y)) &&
          ((param_2->RenderInitParams).TargetGamma == *(float *)(lVar4 + 8 + lVar2))) &&
         ((((bool)*(char *)(lVar4 + 0xc + lVar2) == (param_2->RenderInitParams).bForceLinearGamma &&
           (*(EPixelFormat *)(lVar4 + 0xd + lVar2) == (param_2->RenderInitParams).PixelFormat)) &&
          (((bool)*(char *)(lVar4 + 0xe + lVar2) ==
            (param_2->RenderInitParams).bIncludeInPreviewWindow &&
           (bVar3 = FMovieGraphRenderDataIdentifier::operator==
                              ((FMovieGraphRenderDataIdentifier *)(lVar4 + lVar2 + 0x10),
                               &param_2->Identifier), bVar3)))))) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams> @ 14dca4ad0

int __thiscall
TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState,0>,FDefaultSetAllocator>
::FindIndexByHash<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams>
          (TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState,0>,FDefaultSetAllocator>
           *this,uint param_1,FMovieGraphImagePreviewDataPoolParams *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x68 + 0x60 + *(longlong *)&this->Elements))
    {
      lVar2 = *(longlong *)&this->Elements;
      lVar4 = (longlong)iVar1 * 0x68;
      if ((((*(int *)(lVar4 + lVar2) == (param_2->RenderInitParams).Size.field0_0x0._s_0.X) &&
           (*(int *)(lVar4 + 4 + lVar2) == (param_2->RenderInitParams).Size.field0_0x0._s_0.Y)) &&
          ((param_2->RenderInitParams).TargetGamma == *(float *)(lVar4 + 8 + lVar2))) &&
         ((((bool)*(char *)(lVar4 + 0xc + lVar2) == (param_2->RenderInitParams).bForceLinearGamma &&
           (*(EPixelFormat *)(lVar4 + 0xd + lVar2) == (param_2->RenderInitParams).PixelFormat)) &&
          (((bool)*(char *)(lVar4 + 0xe + lVar2) ==
            (param_2->RenderInitParams).bIncludeInPreviewWindow &&
           (bVar3 = FMovieGraphRenderDataIdentifier::operator==
                              ((FMovieGraphRenderDataIdentifier *)(lVar4 + lVar2 + 0x10),
                               &param_2->Identifier), bVar3)))))) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<FMovieGraphRenderDataIdentifier> @ 14dca4bc0

int __thiscall
TSet<TTuple<FMovieGraphRenderDataIdentifier,int>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,int,0>,FDefaultSetAllocator>
::FindIndexByHash<FMovieGraphRenderDataIdentifier>
          (TSet<TTuple<FMovieGraphRenderDataIdentifier,int>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,int,0>,FDefaultSetAllocator>
           *this,uint param_1,FMovieGraphRenderDataIdentifier *param_2)

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
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x58 + 0x50 + *(longlong *)&this->Elements))
    {
      bVar2 = FMovieGraphRenderDataIdentifier::operator==
                        ((FMovieGraphRenderDataIdentifier *)
                         (*(longlong *)&this->Elements + (longlong)iVar1 * 0x58),param_2);
      if (bVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<FMovieGraphRenderDataIdentifier> @ 14dca4c60

int __thiscall
TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
::FindIndexByHash<FMovieGraphRenderDataIdentifier>
          (TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
           *this,uint param_1,FMovieGraphRenderDataIdentifier *param_2)

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
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 200 + 0xc0 + *(longlong *)&this->Elements))
    {
      bVar2 = FMovieGraphRenderDataIdentifier::operator==
                        ((FMovieGraphRenderDataIdentifier *)
                         (*(longlong *)&this->Elements + (longlong)iVar1 * 200),param_2);
      if (bVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams> @ 14dca4d00

int __thiscall
TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
::FindIndexByHash<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams>
          (TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,FRenderTargetInitParams *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar4 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar2 = (longlong)iVar4;
        if ((((*(int *)(lVar1 + lVar2 * 0x28) == (param_2->Size).field0_0x0._s_0.X) &&
             (*(int *)(lVar1 + 4 + lVar2 * 0x28) == (param_2->Size).field0_0x0._s_0.Y)) &&
            (param_2->TargetGamma == *(float *)(lVar1 + 8 + lVar2 * 0x28))) &&
           ((((bool)*(char *)(lVar1 + 0xc + lVar2 * 0x28) == param_2->bForceLinearGamma &&
             (*(EPixelFormat *)(lVar1 + 0xd + lVar2 * 0x28) == param_2->PixelFormat)) &&
            ((bool)*(char *)(lVar1 + 0xe + lVar2 * 0x28) == param_2->bIncludeInPreviewWindow)))) {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x20 + lVar2 * 0x28);
      } while (iVar4 != -1);
    }
  }
  return -1;
}

// Move<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_> @ 14dcab800

void __cdecl
TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::
Move<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_>
          (TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>
           *param_1,
          TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>
          *param_2)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (param_1 != param_2) {
    if (*(void **)&param_1->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->Elements);
    }
    _Src = &(param_2->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = *(undefined8 *)&param_2->Elements;
    _Dst = &(param_1->Elements).field_0x10;
    *(undefined8 *)&param_2->Elements = 0;
    *(undefined4 *)&(param_1->Elements).field_0x8 = *(undefined4 *)&(param_2->Elements).field_0x8;
    *(undefined4 *)&(param_1->Elements).field_0xc = *(undefined4 *)&(param_2->Elements).field_0xc;
    *(undefined8 *)&(param_2->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_2->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(param_1->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(param_1->Elements).field_0x20 =
           *(undefined8 *)&(param_2->Elements).field_0x20;
      *(undefined8 *)&(param_2->Elements).field_0x20 = 0;
      *(undefined4 *)&(param_1->Elements).field_0x28 =
           *(undefined4 *)&(param_2->Elements).field_0x28;
      *(undefined4 *)&(param_1->Elements).field_0x2c =
           *(undefined4 *)&(param_2->Elements).field_0x2c;
      *(undefined8 *)&(param_2->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(param_1->Elements).field_0x30 = *(undefined4 *)&(param_2->Elements).field_0x30;
    *(undefined4 *)&(param_1->Elements).field_0x34 = *(undefined4 *)&(param_2->Elements).field_0x34;
    *(undefined4 *)&(param_2->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_2->Elements).field_0x34 = 0;
  }
  if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(param_1->Hash).InlineData = *(undefined4 *)(param_2->Hash).InlineData;
  }
  FVar2 = (param_1->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (param_1->Hash).SecondaryData = (param_2->Hash).SecondaryData;
  (param_2->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  param_1->HashSize = param_2->HashSize;
  param_2->HashSize = 0;
  return;
}

// Move<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_> @ 14dcab900

void __cdecl
TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
::
Move<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>
          (TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
           *param_1,
          TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
          *param_2)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (param_1 != param_2) {
    if (*(void **)&param_1->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->Elements);
    }
    _Src = &(param_2->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = *(undefined8 *)&param_2->Elements;
    _Dst = &(param_1->Elements).field_0x10;
    *(undefined8 *)&param_2->Elements = 0;
    *(undefined4 *)&(param_1->Elements).field_0x8 = *(undefined4 *)&(param_2->Elements).field_0x8;
    *(undefined4 *)&(param_1->Elements).field_0xc = *(undefined4 *)&(param_2->Elements).field_0xc;
    *(undefined8 *)&(param_2->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_2->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(param_1->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(param_1->Elements).field_0x20 =
           *(undefined8 *)&(param_2->Elements).field_0x20;
      *(undefined8 *)&(param_2->Elements).field_0x20 = 0;
      *(undefined4 *)&(param_1->Elements).field_0x28 =
           *(undefined4 *)&(param_2->Elements).field_0x28;
      *(undefined4 *)&(param_1->Elements).field_0x2c =
           *(undefined4 *)&(param_2->Elements).field_0x2c;
      *(undefined8 *)&(param_2->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(param_1->Elements).field_0x30 = *(undefined4 *)&(param_2->Elements).field_0x30;
    *(undefined4 *)&(param_1->Elements).field_0x34 = *(undefined4 *)&(param_2->Elements).field_0x34;
    *(undefined4 *)&(param_2->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_2->Elements).field_0x34 = 0;
  }
  if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(param_1->Hash).InlineData = *(undefined4 *)(param_2->Hash).InlineData;
  }
  FVar2 = (param_1->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (param_1->Hash).SecondaryData = (param_2->Hash).SecondaryData;
  (param_2->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  param_1->HashSize = param_2->HashSize;
  param_2->HashSize = 0;
  return;
}

// Move<TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>_> @ 14dcaba00

void __cdecl
TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::
Move<TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>_>
          (TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *param_1,
          TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          *param_2)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (param_1 != param_2) {
    TSparseArray<TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&param_1->Elements,0,*(int *)&(param_1->Elements).field_0x8);
    if (*(void **)&param_1->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->Elements);
    }
    _Src = &(param_2->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = *(undefined8 *)&param_2->Elements;
    _Dst = &(param_1->Elements).field_0x10;
    *(undefined8 *)&param_2->Elements = 0;
    *(undefined4 *)&(param_1->Elements).field_0x8 = *(undefined4 *)&(param_2->Elements).field_0x8;
    *(undefined4 *)&(param_1->Elements).field_0xc = *(undefined4 *)&(param_2->Elements).field_0xc;
    *(undefined8 *)&(param_2->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_2->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(param_1->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(param_1->Elements).field_0x20 =
           *(undefined8 *)&(param_2->Elements).field_0x20;
      *(undefined8 *)&(param_2->Elements).field_0x20 = 0;
      *(undefined4 *)&(param_1->Elements).field_0x28 =
           *(undefined4 *)&(param_2->Elements).field_0x28;
      *(undefined4 *)&(param_1->Elements).field_0x2c =
           *(undefined4 *)&(param_2->Elements).field_0x2c;
      *(undefined8 *)&(param_2->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(param_1->Elements).field_0x30 = *(undefined4 *)&(param_2->Elements).field_0x30;
    *(undefined4 *)&(param_1->Elements).field_0x34 = *(undefined4 *)&(param_2->Elements).field_0x34;
    *(undefined4 *)&(param_2->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_2->Elements).field_0x34 = 0;
  }
  if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(param_1->Hash).InlineData = *(undefined4 *)(param_2->Hash).InlineData;
  }
  FVar2 = (param_1->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (param_1->Hash).SecondaryData = (param_2->Hash).SecondaryData;
  (param_2->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  param_1->HashSize = param_2->HashSize;
  param_2->HashSize = 0;
  return;
}

// Move<TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>_> @ 14dcabb10

void __cdecl
TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
::
Move<TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>_>
          (TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
           *param_1,
          TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
          *param_2)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (param_1 != param_2) {
    TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&param_1->Elements,0,*(int *)&(param_1->Elements).field_0x8);
    if (*(void **)&param_1->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->Elements);
    }
    _Src = &(param_2->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = *(undefined8 *)&param_2->Elements;
    _Dst = &(param_1->Elements).field_0x10;
    *(undefined8 *)&param_2->Elements = 0;
    *(undefined4 *)&(param_1->Elements).field_0x8 = *(undefined4 *)&(param_2->Elements).field_0x8;
    *(undefined4 *)&(param_1->Elements).field_0xc = *(undefined4 *)&(param_2->Elements).field_0xc;
    *(undefined8 *)&(param_2->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_2->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(param_1->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(param_1->Elements).field_0x20 =
           *(undefined8 *)&(param_2->Elements).field_0x20;
      *(undefined8 *)&(param_2->Elements).field_0x20 = 0;
      *(undefined4 *)&(param_1->Elements).field_0x28 =
           *(undefined4 *)&(param_2->Elements).field_0x28;
      *(undefined4 *)&(param_1->Elements).field_0x2c =
           *(undefined4 *)&(param_2->Elements).field_0x2c;
      *(undefined8 *)&(param_2->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(param_1->Elements).field_0x30 = *(undefined4 *)&(param_2->Elements).field_0x30;
    *(undefined4 *)&(param_1->Elements).field_0x34 = *(undefined4 *)&(param_2->Elements).field_0x34;
    *(undefined4 *)&(param_2->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_2->Elements).field_0x34 = 0;
  }
  if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(param_1->Hash).InlineData = *(undefined4 *)(param_2->Hash).InlineData;
  }
  FVar2 = (param_1->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (param_1->Hash).SecondaryData = (param_2->Hash).SecondaryData;
  (param_2->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  param_1->HashSize = param_2->HashSize;
  param_2->HashSize = 0;
  return;
}

// RemoveImpl<TObjectPtr<AActor_const_>_> @ 14dcaca90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::
RemoveImpl<TObjectPtr<AActor_const_>_>
          (TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator> *this
          ,uint param_1,TObjectPtr<AActor_const_> *param_2)

{
  uint uVar1;
  longlong lVar2;
  AActor *pAVar3;
  AActor *pAVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  uint *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  
  FVar8 = (this->Hash).SecondaryData;
  if (FVar8 == (ForElementType<FSetElementId>)0x0) {
    FVar8 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar9 = *(uint *)((longlong)FVar8 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar9 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar2 = *(longlong *)&this->Elements;
    pAVar3 = (param_2->field0_0x0).DebugPtr;
    lVar12 = (longlong)(int)uVar9 * 0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar3 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar3);
    }
    pAVar4 = *(AActor **)(lVar2 + lVar12);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar4 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar4);
    }
    if (pAVar4 == pAVar3) break;
    uVar9 = *(uint *)(lVar2 + 8 + lVar12);
    if (uVar9 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&(this->Elements).field_0x28)) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar11 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar9 & 0x1f) & 1) != 0) goto LAB_14dcacba9;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
LAB_14dcacba9:
  lVar12 = lVar12 + *(longlong *)&this->Elements;
  FVar8 = (this->Hash).SecondaryData;
  if (FVar8 == (ForElementType<FSetElementId>)0x0) {
    FVar8 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar10 = (uint *)((longlong)FVar8 + (longlong)*(int *)(lVar12 + 0xc) * 4);
  while( true ) {
    uVar1 = *puVar10;
    if ((uVar1 == 0xffffffff) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar6)) break;
    if (uVar1 == uVar9) {
      *puVar10 = *(uint *)(lVar12 + 8);
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar9,1);
      return 1;
    }
    puVar10 = (uint *)(*(longlong *)&this->Elements + 8 + (longlong)(int)uVar1 * 0x10);
  }
  pcVar5 = (code *)swi(3);
  iVar7 = (*pcVar5)();
  return iVar7;
}

// RemoveImpl<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams> @ 14dcacc40

int __thiscall
TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState,0>,FDefaultSetAllocator>
::RemoveImpl<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams>
          (TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState,0>,FDefaultSetAllocator>
           *this,uint param_1,FMovieGraphImagePreviewDataPoolParams *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar7 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar2 = *(longlong *)&this->Elements;
    lVar9 = (longlong)(int)uVar7 * 0x68;
    if (((((*(int *)(lVar9 + lVar2) == (param_2->RenderInitParams).Size.field0_0x0._s_0.X) &&
          (*(int *)(lVar9 + 4 + lVar2) == (param_2->RenderInitParams).Size.field0_0x0._s_0.Y)) &&
         ((param_2->RenderInitParams).TargetGamma == *(float *)(lVar9 + 8 + lVar2))) &&
        (((bool)*(char *)(lVar9 + 0xc + lVar2) == (param_2->RenderInitParams).bForceLinearGamma &&
         (*(EPixelFormat *)(lVar9 + 0xd + lVar2) == (param_2->RenderInitParams).PixelFormat)))) &&
       (((bool)*(char *)(lVar9 + 0xe + lVar2) == (param_2->RenderInitParams).bIncludeInPreviewWindow
        && (bVar4 = FMovieGraphRenderDataIdentifier::operator==
                              ((FMovieGraphRenderDataIdentifier *)(lVar2 + 0x10 + lVar9),
                               &param_2->Identifier), bVar4)))) break;
    uVar7 = *(uint *)(lVar9 + 0x60 + lVar2);
    if (uVar7 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
    if ((*(int *)&(this->Elements).field_0x28 <= (int)uVar7) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_14dcacd98;
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
LAB_14dcacd98:
  FVar6 = (this->Hash).SecondaryData;
  lVar2 = *(longlong *)&this->Elements;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar9 + 100 + lVar2) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar7) {
      *puVar8 = *(uint *)(lVar9 + 0x60 + lVar2);
      TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar7,1);
      TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 0x60 + (longlong)(int)uVar1 * 0x68);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator> @ 14dcad990

TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
::
TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
          (TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
           *this,TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
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
    TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// TSet<TTuple<FSoftClassPath,FMovieGraphStringArray>,TDefaultMapHashableKeyFuncs<FSoftClassPath,FMovieGraphStringArray,0>,FDefaultSetAllocator> @ 14dcadac0

TSet<TTuple<FSoftClassPath,FMovieGraphStringArray>,TDefaultMapHashableKeyFuncs<FSoftClassPath,FMovieGraphStringArray,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FSoftClassPath,FMovieGraphStringArray>,TDefaultMapHashableKeyFuncs<FSoftClassPath,FMovieGraphStringArray,0>,FDefaultSetAllocator>
::
TSet<TTuple<FSoftClassPath,FMovieGraphStringArray>,TDefaultMapHashableKeyFuncs<FSoftClassPath,FMovieGraphStringArray,0>,FDefaultSetAllocator>
          (TSet<TTuple<FSoftClassPath,FMovieGraphStringArray>,TDefaultMapHashableKeyFuncs<FSoftClassPath,FMovieGraphStringArray,0>,FDefaultSetAllocator>
           *this,TSet<TTuple<FSoftClassPath,FMovieGraphStringArray>,TDefaultMapHashableKeyFuncs<FSoftClassPath,FMovieGraphStringArray,0>,FDefaultSetAllocator>
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
    TSparseArray<TSparseSetElement<TTuple<FSoftClassPath,FMovieGraphStringArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator> @ 14dcadbf0

TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
* __thiscall
TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
::
TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
          (TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
           *this,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
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
    TSparseArray<TSparseSetElement<FMovieGraphRenderDataIdentifier>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// operator= @ 14dcb35b0

TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> * __thiscall
TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::operator=
          (TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *this,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (this != param_1) {
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
  }
  return this;
}

// operator= @ 14dcb36b0

TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> * __thiscall
TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::operator=
          (TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *this,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  int iVar2;
  
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
    iVar2 = *(int *)&(param_1->Elements).field_0x8;
    TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,iVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
               (int *)&(this->Elements).field_0xc);
    puVar1 = &(param_1->Elements).field_0x10;
    this_00 = &(this->Elements).field_0x10;
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    if (this_00 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar2 != 0) {
      memcpy(*(void **)&this->Elements,*(void **)&param_1->Elements,(longlong)iVar2 << 4);
    }
    return this;
  }
  return this;
}

// operator= @ 14dcb3780

TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator> * __thiscall
TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::operator=
          (TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator> *this
          ,TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>
           *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator> *pTVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  if (this == param_1) {
    return this;
  }
  UE::Core::Private::
  CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
  iVar6 = *(int *)&(param_1->Elements).field_0x8;
  lVar11 = (longlong)iVar6;
  TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this->Elements,iVar6);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar6,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
             (int *)&(this->Elements).field_0xc);
  puVar2 = &(this->Elements).field_0x10;
  puVar1 = &(param_1->Elements).field_0x10;
  *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
  *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
  if (puVar2 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar12 = 0;
  if (0 < iVar6) {
    uVar10 = 1;
    puVar9 = (undefined4 *)(*(longlong *)&this->Elements + 8);
    lVar13 = *(longlong *)&param_1->Elements - *(longlong *)&this->Elements;
    do {
      if ((iVar12 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar12)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>
                    *)(*pcVar4)();
          return pTVar7;
        }
      }
      puVar2 = *(undefined1 **)&(param_1->Elements).field_0x20;
      puVar8 = puVar1;
      if (puVar2 != (undefined1 *)0x0) {
        puVar8 = puVar2;
      }
      iVar6 = iVar12;
      if (iVar12 < 0) {
        iVar6 = iVar12 + 0x1f;
      }
      if ((*(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) & uVar10) == 0) {
        puVar9[-2] = *(undefined4 *)((longlong)puVar9 + lVar13 + -8);
        puVar9[-1] = *(undefined4 *)(lVar13 + -4 + (longlong)puVar9);
      }
      else {
        pUVar3 = *(UObject **)((longlong)puVar9 + lVar13 + -8);
        *(UObject **)(puVar9 + -2) = pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        *puVar9 = *(undefined4 *)(lVar13 + (longlong)puVar9);
        puVar9[1] = *(undefined4 *)(lVar13 + 4 + (longlong)puVar9);
      }
      iVar12 = iVar12 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      puVar9 = puVar9 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return this;
}

// operator= @ 14dcb3920

TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
::operator=(TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
            *this,TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  if (this == param_1) {
    return this;
  }
  UE::Core::Private::
  CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
  iVar6 = *(int *)&(param_1->Elements).field_0x8;
  lVar11 = (longlong)iVar6;
  TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this->Elements,iVar6);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar6,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
             (int *)&(this->Elements).field_0xc);
  puVar2 = &(this->Elements).field_0x10;
  puVar1 = &(param_1->Elements).field_0x10;
  *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
  *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
  if (puVar2 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar12 = 0;
  if (0 < iVar6) {
    uVar10 = 1;
    puVar9 = (undefined4 *)(*(longlong *)&this->Elements + 8);
    lVar13 = *(longlong *)&param_1->Elements - *(longlong *)&this->Elements;
    do {
      if ((iVar12 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar12)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                    *)(*pcVar4)();
          return pTVar7;
        }
      }
      puVar2 = *(undefined1 **)&(param_1->Elements).field_0x20;
      puVar8 = puVar1;
      if (puVar2 != (undefined1 *)0x0) {
        puVar8 = puVar2;
      }
      iVar6 = iVar12;
      if (iVar12 < 0) {
        iVar6 = iVar12 + 0x1f;
      }
      if ((*(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) & uVar10) == 0) {
        puVar9[-2] = *(undefined4 *)((longlong)puVar9 + lVar13 + -8);
        puVar9[-1] = *(undefined4 *)(lVar13 + -4 + (longlong)puVar9);
      }
      else {
        pUVar3 = *(UObject **)((longlong)puVar9 + lVar13 + -8);
        *(UObject **)(puVar9 + -2) = pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        *puVar9 = *(undefined4 *)(lVar13 + (longlong)puVar9);
        puVar9[1] = *(undefined4 *)(lVar13 + 4 + (longlong)puVar9);
      }
      iVar12 = iVar12 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      puVar9 = puVar9 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return this;
}

// operator= @ 14dcb3ac0

TSet<TObjectPtr<UMovieGraphFileOutputNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphFileOutputNode>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TObjectPtr<UMovieGraphFileOutputNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphFileOutputNode>,0>,FDefaultSetAllocator>
::operator=(TSet<TObjectPtr<UMovieGraphFileOutputNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphFileOutputNode>,0>,FDefaultSetAllocator>
            *this,TSet<TObjectPtr<UMovieGraphFileOutputNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphFileOutputNode>,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSet<TObjectPtr<UMovieGraphFileOutputNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphFileOutputNode>,0>,FDefaultSetAllocator>
  *pTVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  if (this == param_1) {
    return this;
  }
  UE::Core::Private::
  CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
  iVar6 = *(int *)&(param_1->Elements).field_0x8;
  lVar11 = (longlong)iVar6;
  TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphFileOutputNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this->Elements,iVar6);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar6,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
             (int *)&(this->Elements).field_0xc);
  puVar2 = &(this->Elements).field_0x10;
  puVar1 = &(param_1->Elements).field_0x10;
  *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
  *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
  if (puVar2 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar12 = 0;
  if (0 < iVar6) {
    uVar10 = 1;
    puVar9 = (undefined4 *)(*(longlong *)&this->Elements + 8);
    lVar13 = *(longlong *)&param_1->Elements - *(longlong *)&this->Elements;
    do {
      if ((iVar12 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar12)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSet<TObjectPtr<UMovieGraphFileOutputNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphFileOutputNode>,0>,FDefaultSetAllocator>
                    *)(*pcVar4)();
          return pTVar7;
        }
      }
      puVar2 = *(undefined1 **)&(param_1->Elements).field_0x20;
      puVar8 = puVar1;
      if (puVar2 != (undefined1 *)0x0) {
        puVar8 = puVar2;
      }
      iVar6 = iVar12;
      if (iVar12 < 0) {
        iVar6 = iVar12 + 0x1f;
      }
      if ((*(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) & uVar10) == 0) {
        puVar9[-2] = *(undefined4 *)((longlong)puVar9 + lVar13 + -8);
        puVar9[-1] = *(undefined4 *)(lVar13 + -4 + (longlong)puVar9);
      }
      else {
        pUVar3 = *(UObject **)((longlong)puVar9 + lVar13 + -8);
        *(UObject **)(puVar9 + -2) = pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        *puVar9 = *(undefined4 *)(lVar13 + (longlong)puVar9);
        puVar9[1] = *(undefined4 *)(lVar13 + 4 + (longlong)puVar9);
      }
      iVar12 = iVar12 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      puVar9 = puVar9 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return this;
}

// Find @ 14dcc85b0

TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>
* __thiscall
TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState,0>,FDefaultSetAllocator>
       *this,FMovieGraphImagePreviewDataPoolParams *param_1)

{
  uint uVar1;
  int iVar2;
  TIntPoint<int>_u_0 local_68;
  undefined8 uStack_60;
  FName local_58;
  FString local_50;
  FString local_40;
  FString local_30;
  FString local_20;
  
  local_68._s_0 = *(TIntPoint<int>_u_0_s_0 *)&(param_1->RenderInitParams).Size.field0_0x0;
  uStack_60._0_4_ = (param_1->RenderInitParams).TargetGamma;
  uStack_60._4_1_ = (param_1->RenderInitParams).bForceLinearGamma;
  uStack_60._5_1_ = (param_1->RenderInitParams).PixelFormat;
  uStack_60._6_1_ = (param_1->RenderInitParams).bIncludeInPreviewWindow;
  uStack_60._7_1_ = (param_1->RenderInitParams).field_0xf;
  local_58 = (param_1->Identifier).RootBranchName;
  ::FString::FString(&local_50,&(param_1->Identifier).LayerName);
  ::FString::FString(&local_40,&(param_1->Identifier).RendererName);
  ::FString::FString(&local_30,&(param_1->Identifier).SubResourceName);
  ::FString::FString(&local_20,&(param_1->Identifier).CameraName);
  uVar1 = UE::MovieGraph::DefaultRenderer::GetTypeHash
                    ((FMovieGraphImagePreviewDataPoolParams *)&local_68._s_0);
  iVar2 = FindIndexByHash<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams>
                    (this,uVar1,param_1);
  if (iVar2 != -1) {
    return (TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>
            *)((longlong)iVar2 * 0x68 + *(longlong *)&this->Elements);
  }
  return (TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>
          *)0x0;
}

// Rehash @ 14dcdca90

void __thiscall
TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::Rehash
          (TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator> *this
          )

{
  int *piVar1;
  int iVar2;
  UObject *pUVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
  uint *puVar10;
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
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14dcdcb67;
        uVar5 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14dcdcb67:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_ = CONCAT44(uStack_64,local_68);
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        pUVar3 = (UObject *)*puVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        uVar5 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = (uVar5 >> 0x10 ^ uVar5) & *piVar1 - 1U;
        *(uint *)((longlong)puVar9 + 0xc) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dcdcc60

void __thiscall
TSet<TObjectPtr<UMovieGraphFileOutputNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphFileOutputNode>,0>,FDefaultSetAllocator>
::Rehash(TSet<TObjectPtr<UMovieGraphFileOutputNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphFileOutputNode>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  UObject *pUVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
  uint *puVar10;
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
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14dcdcd37;
        uVar5 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14dcdcd37:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_ = CONCAT44(uStack_64,local_68);
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        pUVar3 = (UObject *)*puVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        uVar5 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = (uVar5 >> 0x10 ^ uVar5) & *piVar1 - 1U;
        *(uint *)((longlong)puVar9 + 0xc) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dcdce30

void __thiscall
TSet<TTuple<int,UE::MovieGraph::FRenderTimeStatistics>,TDefaultMapHashableKeyFuncs<int,UE::MovieGraph::FRenderTimeStatistics,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,UE::MovieGraph::FRenderTimeStatistics>,TDefaultMapHashableKeyFuncs<int,UE::MovieGraph::FRenderTimeStatistics,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14dcdcf0c;
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
LAB_14dcdcf0c:
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
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[7] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[6] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dcdcfc0

void __thiscall
TSet<TTuple<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14dcdd09c;
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
LAB_14dcdd09c:
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
                 ((longlong)local_30.CurrentBitIndex * 0x60 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x5c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 0xb) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dcdd180

void __thiscall
TSet<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  UObject *pUVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
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
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_40.Array;
      }
      uVar5 = *puVar9;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14dcdd257;
        uVar5 = puVar9[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14dcdd257:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_ = CONCAT44(uStack_64,local_68);
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        pUVar3 = *(UObject **)
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18);
        lVar6 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        uVar5 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = (uVar5 >> 0x10 ^ uVar5) & *piVar1 - 1U;
        *(uint *)(lVar6 + 0x14) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dcdd360

void __thiscall
TSet<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  UObject *pUVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
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
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_40.Array;
      }
      uVar5 = *puVar9;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14dcdd437;
        uVar5 = puVar9[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14dcdd437:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_ = CONCAT44(uStack_64,local_68);
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        pUVar3 = *(UObject **)
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18);
        lVar6 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        uVar5 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = (uVar5 >> 0x10 ^ uVar5) & *piVar1 - 1U;
        *(uint *)(lVar6 + 0x14) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dcdd540

void __thiscall
TSet<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
  int local_68;
  uint uStack_64;
  FSoftObjectPath FStack_60;
  TSet<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_40;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_38;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    uVar5 = *(uint *)&(this->Elements).field_0x28;
    FStack_60.AssetPath.PackageName = (FName)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    FStack_60.AssetPath.AssetName.Number = 0;
    FStack_60.SubPathString.Data.AllocatorInstance.Data._0_4_ = 0;
    if (uVar5 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)FStack_60.AssetPath.PackageName;
      }
      uVar2 = *puVar9;
      FStack_60.SubPathString.Data.AllocatorInstance.Data._0_4_ = 0;
      local_68 = 0;
      while (uVar2 == 0) {
        FStack_60.SubPathString.Data.AllocatorInstance.Data._0_4_ =
             (int)FStack_60.SubPathString.Data.AllocatorInstance.Data + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < local_68)
        goto LAB_14dcdd617;
        uVar2 = (puVar9 + 1)[lVar6];
      }
      uStack_64 = -uVar2 & uVar2;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      FStack_60.AssetPath.AssetName.Number =
           (int)lVar6 + -1 + (int)FStack_60.SubPathString.Data.AllocatorInstance.Data;
      if ((int)uVar5 < (int)FStack_60.AssetPath.AssetName.Number) {
LAB_14dcdd617:
        FStack_60.AssetPath.AssetName.Number = uVar5;
      }
    }
    FStack_60.AssetPath.AssetName.ComparisonIndex.Value = 0xffffffff;
    local_38.UnvisitedBitMask = 0xffffffff;
    local_38.CurrentBitIndex = FStack_60.AssetPath.AssetName.Number;
    local_38._28_4_ = FStack_60.SubPathString.Data.AllocatorInstance.Data._4_4_;
    local_38.BaseBitIndex = (int)FStack_60.SubPathString.Data.AllocatorInstance.Data;
    local_38._padding_._0_4_ = local_68;
    local_38._padding_._4_4_ = uStack_64;
    local_40 = this;
    local_38.Array = (TBitArray<FDefaultBitArrayAllocator> *)FStack_60.AssetPath.PackageName;
    if ((int)FStack_60.AssetPath.AssetName.Number < (int)uVar5) {
      do {
        iVar4 = local_38.CurrentBitIndex;
        lVar6 = *(longlong *)&local_40->Elements + (longlong)local_38.CurrentBitIndex * 0x40;
        FSoftObjectPath::FSoftObjectPath(&FStack_60,(FSoftObjectPath *)(lVar6 + 8));
        uVar5 = ::GetTypeHash(&FStack_60);
        if ((void *)CONCAT44(FStack_60.SubPathString.Data.AllocatorInstance.Data._4_4_,
                             (int)FStack_60.SubPathString.Data.AllocatorInstance.Data) !=
            (void *)0x0) {
          FMemory::Free((void *)CONCAT44(FStack_60.SubPathString.Data.AllocatorInstance.Data._4_4_,
                                         (int)FStack_60.SubPathString.Data.AllocatorInstance.Data));
        }
        uVar5 = *piVar1 - 1U & uVar5;
        *(uint *)(lVar6 + 0x3c) = uVar5;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar6 + 0x38) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar4;
        local_38.UnvisitedBitMask = local_38.UnvisitedBitMask & ~local_38._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_38);
      } while (local_38.CurrentBitIndex < (local_38.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dcdd700

void __thiscall
TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  TIntPoint<int>_u_0 *pTVar8;
  uint *puVar9;
  int local_a8;
  uint uStack_a4;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_80;
  TIntPoint<int>_u_0 local_60;
  TIntPoint<int>_u_0 TStack_58;
  TIntPoint<int>_u_0 local_50;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_a8 = 0;
    uStack_a4 = 1;
    iStack_94 = 0;
    iStack_90 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_80.Array;
      }
      uVar4 = *puVar9;
      iStack_90 = 0;
      local_a8 = 0;
      while (uVar4 == 0) {
        iStack_90 = iStack_90 + 0x20;
        lVar5 = (longlong)local_a8;
        local_a8 = local_a8 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_a8) goto LAB_14dcdd7d7;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_a4 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_a4 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_94 = (int)lVar5 + -1 + iStack_90;
      if (iVar2 < iStack_94) {
LAB_14dcdd7d7:
        iStack_94 = iVar2;
      }
    }
    local_80._padding_._0_4_ = local_a8;
    local_80._padding_._4_4_ = uStack_a4;
    local_80.UnvisitedBitMask = 0xffffffff;
    local_80.CurrentBitIndex = iStack_94;
    local_80._28_4_ = uStack_8c;
    local_80.BaseBitIndex = iStack_90;
    if (iStack_94 < iVar2) {
      do {
        iVar2 = local_80.CurrentBitIndex;
        pTVar8 = (TIntPoint<int>_u_0 *)
                 (*(longlong *)&this->Elements + (longlong)local_80.CurrentBitIndex * 0x68);
        local_60 = *pTVar8;
        TStack_58 = pTVar8[1];
        local_50 = pTVar8[2];
        ::FString::FString(&local_48,(FString *)&pTVar8[3]._s_0);
        ::FString::FString(&local_38,(FString *)&pTVar8[5]._s_0);
        ::FString::FString(&local_28,(FString *)&pTVar8[7]._s_0);
        ::FString::FString(&local_18,(FString *)&pTVar8[9]._s_0);
        uVar4 = UE::MovieGraph::DefaultRenderer::GetTypeHash
                          ((FMovieGraphImagePreviewDataPoolParams *)&local_60._s_0);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)pTVar8 + 100) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        pTVar8[0xc]._s_0.X = *(int *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_80.UnvisitedBitMask = local_80.UnvisitedBitMask & ~local_80._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_80);
      } while (local_80.CurrentBitIndex < (local_80.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dcdd8e0

void __thiscall
TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  TIntPoint<int>_u_0 *pTVar8;
  uint *puVar9;
  int local_a8;
  uint uStack_a4;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_80;
  TIntPoint<int>_u_0 local_60;
  TIntPoint<int>_u_0 TStack_58;
  TIntPoint<int>_u_0 local_50;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_a8 = 0;
    uStack_a4 = 1;
    iStack_94 = 0;
    iStack_90 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_80.Array;
      }
      uVar4 = *puVar9;
      iStack_90 = 0;
      local_a8 = 0;
      while (uVar4 == 0) {
        iStack_90 = iStack_90 + 0x20;
        lVar5 = (longlong)local_a8;
        local_a8 = local_a8 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_a8) goto LAB_14dcdd9b7;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_a4 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_a4 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_94 = (int)lVar5 + -1 + iStack_90;
      if (iVar2 < iStack_94) {
LAB_14dcdd9b7:
        iStack_94 = iVar2;
      }
    }
    local_80._padding_._0_4_ = local_a8;
    local_80._padding_._4_4_ = uStack_a4;
    local_80.UnvisitedBitMask = 0xffffffff;
    local_80.CurrentBitIndex = iStack_94;
    local_80._28_4_ = uStack_8c;
    local_80.BaseBitIndex = iStack_90;
    if (iStack_94 < iVar2) {
      do {
        iVar2 = local_80.CurrentBitIndex;
        pTVar8 = (TIntPoint<int>_u_0 *)
                 (*(longlong *)&this->Elements + (longlong)local_80.CurrentBitIndex * 0x68);
        local_60 = *pTVar8;
        TStack_58 = pTVar8[1];
        local_50 = pTVar8[2];
        ::FString::FString(&local_48,(FString *)&pTVar8[3]._s_0);
        ::FString::FString(&local_38,(FString *)&pTVar8[5]._s_0);
        ::FString::FString(&local_28,(FString *)&pTVar8[7]._s_0);
        ::FString::FString(&local_18,(FString *)&pTVar8[9]._s_0);
        uVar4 = UE::MovieGraph::DefaultRenderer::GetTypeHash
                          ((FMovieGraphImagePreviewDataPoolParams *)&local_60._s_0);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)pTVar8 + 100) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        pTVar8[0xc]._s_0.X = *(int *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_80.UnvisitedBitMask = local_80.UnvisitedBitMask & ~local_80._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_80);
      } while (local_80.CurrentBitIndex < (local_80.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dcddac0

void __thiscall
TSet<TTuple<FMovieGraphRenderDataIdentifier,int>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,int,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FMovieGraphRenderDataIdentifier,int>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,int,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FName *pFVar8;
  uint *puVar9;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  FMovieGraphRenderDataIdentifier local_50;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_98 = 0;
    uStack_94 = 1;
    iStack_84 = 0;
    iStack_80 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_70.Array;
      }
      uVar4 = *puVar9;
      iStack_80 = 0;
      local_98 = 0;
      while (uVar4 == 0) {
        iStack_80 = iStack_80 + 0x20;
        lVar5 = (longlong)local_98;
        local_98 = local_98 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_14dcddb97;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_94 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_94 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_84 = (int)lVar5 + -1 + iStack_80;
      if (iVar2 < iStack_84) {
LAB_14dcddb97:
        iStack_84 = iVar2;
      }
    }
    local_70._padding_._0_4_ = local_98;
    local_70._padding_._4_4_ = uStack_94;
    local_70.UnvisitedBitMask = 0xffffffff;
    local_70.CurrentBitIndex = iStack_84;
    local_70._28_4_ = uStack_7c;
    local_70.BaseBitIndex = iStack_80;
    if (iStack_84 < iVar2) {
      do {
        iVar2 = local_70.CurrentBitIndex;
        pFVar8 = (FName *)(*(longlong *)&this->Elements + (longlong)local_70.CurrentBitIndex * 0x58)
        ;
        local_50.RootBranchName = *pFVar8;
        ::FString::FString(&local_50.LayerName,(FString *)(pFVar8 + 1));
        ::FString::FString(&local_50.RendererName,(FString *)(pFVar8 + 3));
        ::FString::FString(&local_50.SubResourceName,(FString *)(pFVar8 + 5));
        ::FString::FString(&local_50.CameraName,(FString *)(pFVar8 + 7));
        uVar4 = ::GetTypeHash(&local_50);
        uVar4 = *piVar1 - 1U & uVar4;
        pFVar8[10].Number = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        pFVar8[10].ComparisonIndex.Value = *(uint *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
      } while (local_70.CurrentBitIndex < (local_70.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dcddc90

void __thiscall
TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FName *pFVar8;
  uint *puVar9;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  FMovieGraphRenderDataIdentifier local_50;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_98 = 0;
    uStack_94 = 1;
    iStack_84 = 0;
    iStack_80 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_70.Array;
      }
      uVar4 = *puVar9;
      iStack_80 = 0;
      local_98 = 0;
      while (uVar4 == 0) {
        iStack_80 = iStack_80 + 0x20;
        lVar5 = (longlong)local_98;
        local_98 = local_98 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_14dcddd67;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_94 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_94 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_84 = (int)lVar5 + -1 + iStack_80;
      if (iVar2 < iStack_84) {
LAB_14dcddd67:
        iStack_84 = iVar2;
      }
    }
    local_70._padding_._0_4_ = local_98;
    local_70._padding_._4_4_ = uStack_94;
    local_70.UnvisitedBitMask = 0xffffffff;
    local_70.CurrentBitIndex = iStack_84;
    local_70._28_4_ = uStack_7c;
    local_70.BaseBitIndex = iStack_80;
    if (iStack_84 < iVar2) {
      do {
        iVar2 = local_70.CurrentBitIndex;
        pFVar8 = (FName *)(*(longlong *)&this->Elements + (longlong)local_70.CurrentBitIndex * 200);
        local_50.RootBranchName = *pFVar8;
        ::FString::FString(&local_50.LayerName,(FString *)(pFVar8 + 1));
        ::FString::FString(&local_50.RendererName,(FString *)(pFVar8 + 3));
        ::FString::FString(&local_50.SubResourceName,(FString *)(pFVar8 + 5));
        ::FString::FString(&local_50.CameraName,(FString *)(pFVar8 + 7));
        uVar4 = ::GetTypeHash(&local_50);
        uVar4 = *piVar1 - 1U & uVar4;
        pFVar8[0x18].Number = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        pFVar8[0x18].ComparisonIndex.Value = *(uint *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
      } while (local_70.CurrentBitIndex < (local_70.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dcdde70

void __thiscall
TSet<TTuple<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FName *pFVar8;
  uint *puVar9;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  FMovieGraphRenderDataIdentifier local_50;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_98 = 0;
    uStack_94 = 1;
    iStack_84 = 0;
    iStack_80 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_70.Array;
      }
      uVar4 = *puVar9;
      iStack_80 = 0;
      local_98 = 0;
      while (uVar4 == 0) {
        iStack_80 = iStack_80 + 0x20;
        lVar5 = (longlong)local_98;
        local_98 = local_98 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_14dcddf47;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_94 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_94 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_84 = (int)lVar5 + -1 + iStack_80;
      if (iVar2 < iStack_84) {
LAB_14dcddf47:
        iStack_84 = iVar2;
      }
    }
    local_70._padding_._0_4_ = local_98;
    local_70._padding_._4_4_ = uStack_94;
    local_70.UnvisitedBitMask = 0xffffffff;
    local_70.CurrentBitIndex = iStack_84;
    local_70._28_4_ = uStack_7c;
    local_70.BaseBitIndex = iStack_80;
    if (iStack_84 < iVar2) {
      do {
        iVar2 = local_70.CurrentBitIndex;
        pFVar8 = (FName *)(*(longlong *)&this->Elements + (longlong)local_70.CurrentBitIndex * 0x60)
        ;
        local_50.RootBranchName = *pFVar8;
        ::FString::FString(&local_50.LayerName,(FString *)(pFVar8 + 1));
        ::FString::FString(&local_50.RendererName,(FString *)(pFVar8 + 3));
        ::FString::FString(&local_50.SubResourceName,(FString *)(pFVar8 + 5));
        ::FString::FString(&local_50.CameraName,(FString *)(pFVar8 + 7));
        uVar4 = ::GetTypeHash(&local_50);
        uVar4 = *piVar1 - 1U & uVar4;
        pFVar8[0xb].Number = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        pFVar8[0xb].ComparisonIndex.Value = *(uint *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
      } while (local_70.CurrentBitIndex < (local_70.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dcde050

void __thiscall
TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FName *pFVar8;
  uint *puVar9;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  FMovieGraphRenderDataIdentifier local_50;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_98 = 0;
    uStack_94 = 1;
    iStack_84 = 0;
    iStack_80 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_70.Array;
      }
      uVar4 = *puVar9;
      iStack_80 = 0;
      local_98 = 0;
      while (uVar4 == 0) {
        iStack_80 = iStack_80 + 0x20;
        lVar5 = (longlong)local_98;
        local_98 = local_98 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_14dcde127;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_94 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_94 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_84 = (int)lVar5 + -1 + iStack_80;
      if (iVar2 < iStack_84) {
LAB_14dcde127:
        iStack_84 = iVar2;
      }
    }
    local_70._padding_._0_4_ = local_98;
    local_70._padding_._4_4_ = uStack_94;
    local_70.UnvisitedBitMask = 0xffffffff;
    local_70.CurrentBitIndex = iStack_84;
    local_70._28_4_ = uStack_7c;
    local_70.BaseBitIndex = iStack_80;
    if (iStack_84 < iVar2) {
      do {
        iVar2 = local_70.CurrentBitIndex;
        pFVar8 = (FName *)(*(longlong *)&this->Elements + (longlong)local_70.CurrentBitIndex * 0x58)
        ;
        local_50.RootBranchName = *pFVar8;
        ::FString::FString(&local_50.LayerName,(FString *)(pFVar8 + 1));
        ::FString::FString(&local_50.RendererName,(FString *)(pFVar8 + 3));
        ::FString::FString(&local_50.SubResourceName,(FString *)(pFVar8 + 5));
        ::FString::FString(&local_50.CameraName,(FString *)(pFVar8 + 7));
        uVar4 = ::GetTypeHash(&local_50);
        uVar4 = *piVar1 - 1U & uVar4;
        pFVar8[10].Number = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        pFVar8[10].ComparisonIndex.Value = *(uint *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
      } while (local_70.CurrentBitIndex < (local_70.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dcde220

void __thiscall
TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  TIntPoint<int>_u_0 *pTVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
  TIntPoint<int>_u_0 local_58;
  TIntPoint<int>_u_0 TStack_50;
  undefined4 local_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
  *local_38;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58._s_0.X = 0;
    local_58._s_0.Y = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar5 = *puVar9;
      iStack_40 = 0;
      local_58._s_0.X = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58._s_0.X;
        local_58._s_0.X = local_58._s_0.X + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58._s_0.X)
        goto LAB_14dcde2f7;
        uVar5 = puVar9[lVar6 + 1];
      }
      local_58._s_0.Y = -uVar5 & uVar5;
      uVar7 = (ulonglong)(uint)local_58._s_0.Y * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_14dcde2f7:
        iStack_44 = iVar3;
      }
    }
    local_48 = 0xffffffff;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    local_30._padding_._0_4_ = local_58._s_0.X;
    local_30._padding_._4_4_ = local_58._s_0.Y;
    local_38 = this;
    if (iStack_44 < iVar3) {
      do {
        iVar3 = local_30.CurrentBitIndex;
        pTVar2 = (TIntPoint<int>_u_0 *)
                 (*(longlong *)&local_38->Elements + (longlong)local_30.CurrentBitIndex * 0x28);
        local_58 = *pTVar2;
        TStack_50 = pTVar2[1];
        lVar6 = *(longlong *)&local_38->Elements + (longlong)local_30.CurrentBitIndex * 0x28;
        uVar5 = UE::MovieGraph::DefaultRenderer::GetTypeHash
                          ((FRenderTargetInitParams *)&local_58._s_0);
        uVar5 = uVar5 & *piVar1 - 1U;
        *(uint *)(lVar6 + 0x24) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar3;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dcde3c0

void __thiscall
TSet<TTuple<FSoftClassPath,FMovieGraphStringArray>,TDefaultMapHashableKeyFuncs<FSoftClassPath,FMovieGraphStringArray,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FSoftClassPath,FMovieGraphStringArray>,TDefaultMapHashableKeyFuncs<FSoftClassPath,FMovieGraphStringArray,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FSoftObjectPath *pFVar8;
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14dcde497;
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
LAB_14dcde497:
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
        pFVar8 = (FSoftObjectPath *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x38);
        uVar4 = ::GetTypeHash(pFVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)&pFVar8[1].SubPathString.Data.AllocatorInstance.Data + 4) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)&pFVar8[1].SubPathString.Data.AllocatorInstance.Data =
             *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dcde550

void __thiscall
TSet<TTuple<FName,TObjectPtr<UMovieGraphQuickRenderModeSettings>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMovieGraphQuickRenderModeSettings>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,TObjectPtr<UMovieGraphQuickRenderModeSettings>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMovieGraphQuickRenderModeSettings>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
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
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_40.Array;
      }
      uVar5 = *puVar9;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14dcde627;
        uVar5 = puVar9[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14dcde627:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        uVar3 = *(undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18);
        lVar6 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar6 + 0x14) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dcde700

void __thiscall
TSet<TTuple<enum_EMovieGraphQuickRenderMode,FName>,TDefaultMapHashableKeyFuncs<enum_EMovieGraphQuickRenderMode,FName,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> *pFVar5;
  uint uVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      pTVar7 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar7 = local_30.Array;
      }
      uVar6 = *(uint *)(pTVar7->AllocatorInstance).InlineData;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar3 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14dcde7dc;
        uVar6 = *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar3 * 4 + 4);
      }
      uStack_54 = -uVar6 & uVar6;
      uVar4 = (ulonglong)uStack_54 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iStack_44 = (int)lVar3 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14dcde7dc:
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
        lVar3 = *(longlong *)this + (longlong)local_30.CurrentBitIndex * 0x14;
        uVar6 = *piVar1 - 1U &
                (uint)*(byte *)(*(longlong *)this + (longlong)local_30.CurrentBitIndex * 0x14);
        *(uint *)(lVar3 + 0x10) = uVar6;
        pFVar5 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar5 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar4 = (longlong)*piVar1 - 1U & (ulonglong)uVar6;
        *(undefined4 *)(lVar3 + 0xc) = *(undefined4 *)(pFVar5->InlineData + uVar4 * 4);
        *(int *)(pFVar5->InlineData + uVar4 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dcde8a0

void __thiscall
TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
::Rehash(TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FName *pFVar8;
  uint *puVar9;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  FMovieGraphRenderDataIdentifier local_50;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_98 = 0;
    uStack_94 = 1;
    iStack_84 = 0;
    iStack_80 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_70.Array;
      }
      uVar4 = *puVar9;
      iStack_80 = 0;
      local_98 = 0;
      while (uVar4 == 0) {
        iStack_80 = iStack_80 + 0x20;
        lVar5 = (longlong)local_98;
        local_98 = local_98 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_14dcde977;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_94 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_94 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_84 = (int)lVar5 + -1 + iStack_80;
      if (iVar2 < iStack_84) {
LAB_14dcde977:
        iStack_84 = iVar2;
      }
    }
    local_70._padding_._0_4_ = local_98;
    local_70._padding_._4_4_ = uStack_94;
    local_70.UnvisitedBitMask = 0xffffffff;
    local_70.CurrentBitIndex = iStack_84;
    local_70._28_4_ = uStack_7c;
    local_70.BaseBitIndex = iStack_80;
    if (iStack_84 < iVar2) {
      do {
        iVar2 = local_70.CurrentBitIndex;
        pFVar8 = (FName *)(*(longlong *)&this->Elements + (longlong)local_70.CurrentBitIndex * 0x50)
        ;
        local_50.RootBranchName = *pFVar8;
        ::FString::FString(&local_50.LayerName,(FString *)(pFVar8 + 1));
        ::FString::FString(&local_50.RendererName,(FString *)(pFVar8 + 3));
        ::FString::FString(&local_50.SubResourceName,(FString *)(pFVar8 + 5));
        ::FString::FString(&local_50.CameraName,(FString *)(pFVar8 + 7));
        uVar4 = ::GetTypeHash(&local_50);
        uVar4 = *piVar1 - 1U & uVar4;
        pFVar8[9].Number = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        pFVar8[9].ComparisonIndex.Value = *(uint *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
      } while (local_70.CurrentBitIndex < (local_70.Array)->NumBits);
    }
  }
  return;
}

// RemoveByIndex @ 14dcdee00

void __thiscall
TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
::RemoveByIndex(TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
                *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int *piVar7;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Elements).field_0x28)) {
    puVar6 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_14dcdee72;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14dcdee72:
  FVar4 = (this->Hash).SecondaryData;
  lVar5 = (longlong)param_1 * 0x68 + *(longlong *)&this->Elements;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar4 + (longlong)*(int *)(lVar5 + 100) * 4);
  while( true ) {
    iVar1 = *piVar7;
    if (iVar1 == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iVar1 == param_1) break;
    piVar7 = (int *)(*(longlong *)&this->Elements + 0x60 + (longlong)iVar1 * 0x68);
  }
  *piVar7 = *(int *)(lVar5 + 0x60);
  TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this->Elements,param_1,1);
  TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// RemoveByIndex @ 14dcdef20

void __thiscall
TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
::RemoveByIndex(TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
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
    goto LAB_14dcdef92;
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
LAB_14dcdef92:
  lVar1 = *(longlong *)&this->Elements + (longlong)param_1 * 0x28;
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar5 + (longlong)*(int *)(lVar1 + 0x24) * 4);
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
    piVar7 = (int *)(*(longlong *)&this->Elements + (longlong)iVar2 * 0x28 + 0x20);
  }
  *piVar7 = *(int *)(lVar1 + 0x20);
  TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this->Elements,param_1,1);
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// Reserve @ 14dce0810

void __thiscall
TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
::Reserve(TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
          *this,int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  if ((uint)(*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) <
      (uint)param_1) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)param_1);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,param_1);
    if ((uint)param_1 < 4) {
      iVar3 = 1;
    }
    else {
      uVar1 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar3 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((this->HashSize == 0) || (this->HashSize < iVar3)) {
      this->HashSize = iVar3;
      Rehash(this);
    }
  }
  return;
}

// Reset @ 14dce0890

void __thiscall
TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x8);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// Reset @ 14dce0910

void __thiscall
TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x8);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// Reset @ 14dce0990

void __thiscall
TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x8);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// Reset @ 14dce0a10

void __thiscall
TSet<TTuple<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x8);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// TryReplaceExisting @ 14dce8eb0

bool __thiscall
TSet<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  ForElementType<FSetElementId> FVar12;
  undefined8 *puVar13;
  void *_Dst;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  FSoftObjectPath local_a8;
  undefined8 local_88;
  FSoftObjectPath local_80;
  undefined8 local_60;
  FSoftObjectPath local_58;
  
  bVar8 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    uVar4 = *(undefined8 *)param_2;
    FSoftObjectPath::FSoftObjectPath(&local_a8,(FSoftObjectPath *)&param_2->field_0x8);
    uVar15 = 0xffffffff;
    iVar14 = -1;
    if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
      FVar12 = (this->Hash).SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&this->Hash;
      }
      for (iVar3 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
          iVar14 = -1, iVar3 != -1;
          iVar3 = *(int *)((longlong)iVar3 * 0x40 + 0x38 + *(longlong *)&this->Elements)) {
        local_60 = uVar4;
        FSoftObjectPath::FSoftObjectPath(&local_58,&local_a8);
        puVar13 = (undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar3 * 0x40);
        local_88 = *puVar13;
        FSoftObjectPath::FSoftObjectPath(&local_80,(FSoftObjectPath *)(puVar13 + 1));
        bVar8 = FSoftObjectPath::operator==(&local_80,&local_58);
        if (local_80.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.SubPathString.Data.AllocatorInstance.Data);
        }
        if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
        }
        iVar14 = iVar3;
        if (bVar8) break;
      }
    }
    if (local_a8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.SubPathString.Data.AllocatorInstance.Data);
    }
    bVar8 = iVar14 != -1;
    if (bVar8) {
      _Dst = (void *)((longlong)iVar14 * 0x40 + *(longlong *)&this->Elements);
      DestructItems<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,int>
                (*(TTuple<int,TSoftObjectPtr<UMaterialInterface>_> **)((longlong)_Dst + 0x28),
                 *(int *)((longlong)_Dst + 0x30));
      if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x28));
      }
      if (*(void **)((longlong)_Dst + 0x18) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x18));
      }
      memmove(_Dst,param_2,0x38);
      iVar3 = *param_3;
      puVar1 = &(this->Elements).field_0x10;
      lVar5 = *(longlong *)&this->Elements;
      bVar7 = (byte)iVar3 & 0x1f;
      uVar16 = 1 << bVar7 | 1U >> 0x20 - bVar7;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
      lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar1;
      }
      if (((*(uint *)(puVar11 + lVar2) & uVar16) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      if (*(int *)&(this->Elements).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x40 + lVar5) = iVar3;
      }
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x40) = 0xffffffff;
      if (0 < *(int *)&(this->Elements).field_0x34) {
        uVar15 = *(undefined4 *)&(this->Elements).field_0x30;
      }
      *(undefined4 *)(lVar5 + 4 + (longlong)iVar3 * 0x40) = uVar15;
      puVar11 = &(this->Elements).field_0x34;
      *(int *)puVar11 = *(int *)puVar11 + 1;
      *(int *)&(this->Elements).field_0x30 = iVar3;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar1;
      }
      *(uint *)(puVar11 + lVar2) = *(uint *)(puVar11 + lVar2) & ~uVar16;
      *param_3 = iVar14;
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar8;
  }
  return bVar8;
}

// TryReplaceExisting @ 14dce91c0

bool __thiscall
TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  void *_Dst;
  uint uVar13;
  bool bVar14;
  
  bVar14 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar9 = FindIndexByHash<FMovieGraphRenderDataIdentifier>
                      (this,param_1,(FMovieGraphRenderDataIdentifier *)param_2);
    bVar14 = iVar9 != -1;
    if (bVar14) {
      _Dst = (void *)((longlong)iVar9 * 200 + *(longlong *)&this->Elements);
      FMovieGraphRenderLayerOutputData::~FMovieGraphRenderLayerOutputData
                ((FMovieGraphRenderLayerOutputData *)((longlong)_Dst + 0x48));
      if (*(void **)((longlong)_Dst + 0x38) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x38));
      }
      if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x28));
      }
      if (*(void **)((longlong)_Dst + 0x18) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x18));
      }
      if (*(void **)((longlong)_Dst + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 8));
      }
      memmove(_Dst,param_2,0xc0);
      iVar3 = *param_3;
      puVar1 = &(this->Elements).field_0x10;
      lVar4 = *(longlong *)&this->Elements;
      bVar6 = (byte)iVar3 & 0x1f;
      uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
      lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      if (((*(uint *)(puVar12 + lVar2) & uVar13) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (*(int *)&(this->Elements).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 200 + lVar4) = iVar3;
      }
      uVar10 = 0xffffffff;
      puVar11 = (undefined4 *)((longlong)iVar3 * 200 + lVar4);
      *puVar11 = 0xffffffff;
      if (0 < *(int *)&(this->Elements).field_0x34) {
        uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
      }
      puVar11[1] = uVar10;
      puVar12 = &(this->Elements).field_0x34;
      *(int *)puVar12 = *(int *)puVar12 + 1;
      *(int *)&(this->Elements).field_0x30 = iVar3;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      *(uint *)(puVar12 + lVar2) = *(uint *)(puVar12 + lVar2) & ~uVar13;
      *param_3 = iVar9;
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// TryReplaceExisting @ 14dce93d0

bool __thiscall
TSet<TTuple<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>
          *param_2,int *param_3,bool *param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ForElementType<FSetElementId> FVar4;
  void *_Dst;
  
  iVar1 = *(int *)&(this->Elements).field_0x8;
  bVar3 = false;
  iVar2 = *(int *)&(this->Elements).field_0x34;
  if ((iVar1 - iVar2 != 1) && (iVar1 != iVar2)) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x60 + 0x58 + *(longlong *)&this->Elements))
    {
      bVar3 = FMovieGraphRenderDataIdentifier::operator==
                        ((FMovieGraphRenderDataIdentifier *)
                         (*(longlong *)&this->Elements + (longlong)iVar1 * 0x60),
                         (FMovieGraphRenderDataIdentifier *)param_2);
      if (bVar3) {
        bVar3 = iVar1 != -1;
        if (bVar3) {
          _Dst = (void *)((longlong)iVar1 * 0x60 + *(longlong *)&this->Elements);
          if (*(void **)((longlong)_Dst + 0x48) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)_Dst + 0x48));
          }
          if (*(void **)((longlong)_Dst + 0x38) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)_Dst + 0x38));
          }
          if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)_Dst + 0x28));
          }
          if (*(void **)((longlong)_Dst + 0x18) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)_Dst + 0x18));
          }
          if (*(void **)((longlong)_Dst + 8) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)_Dst + 8));
          }
          memmove(_Dst,param_2,0x58);
          TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,*param_3,1);
          *param_3 = iVar1;
        }
        goto LAB_14dce9461;
      }
    }
    bVar3 = false;
  }
LAB_14dce9461:
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar3;
  }
  return bVar3;
}

// TryReplaceExisting @ 14dce9520

bool __thiscall
TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<FMovieGraphRenderDataIdentifier> *param_2,
          int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  ForElementType<FSetElementId> FVar14;
  void *_Dst;
  uint uVar15;
  
  iVar3 = *(int *)&(this->Elements).field_0x8;
  bVar8 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar3 - iVar4 != 1) && (iVar3 != iVar4)) {
    FVar14 = (this->Hash).SecondaryData;
    if (FVar14 == (ForElementType<FSetElementId>)0x0) {
      FVar14 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar3 = *(int *)((longlong)FVar14 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar3 != -1; iVar3 = *(int *)((longlong)iVar3 * 0x50 + 0x48 + *(longlong *)&this->Elements))
    {
      bVar8 = FMovieGraphRenderDataIdentifier::operator==
                        ((FMovieGraphRenderDataIdentifier *)
                         (*(longlong *)&this->Elements + (longlong)iVar3 * 0x50),
                         (FMovieGraphRenderDataIdentifier *)param_2);
      if (bVar8) {
        bVar8 = iVar3 != -1;
        if (bVar8) {
          _Dst = (void *)((longlong)iVar3 * 0x50 + *(longlong *)&this->Elements);
          if (*(void **)((longlong)_Dst + 0x38) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)_Dst + 0x38));
          }
          if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)_Dst + 0x28));
          }
          if (*(void **)((longlong)_Dst + 0x18) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)_Dst + 0x18));
          }
          if (*(void **)((longlong)_Dst + 8) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)_Dst + 8));
          }
          memmove(_Dst,param_2,0x48);
          iVar4 = *param_3;
          puVar1 = &(this->Elements).field_0x10;
          lVar5 = *(longlong *)&this->Elements;
          bVar7 = (byte)iVar4 & 0x1f;
          uVar15 = 1 << bVar7 | 1U >> 0x20 - bVar7;
          if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
          lVar2 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = puVar1;
          }
          if (((*(uint *)(puVar12 + lVar2) & uVar15) == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("AllocationFlags[Index]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                 ,0xc5,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          if (*(int *)&(this->Elements).field_0x34 != 0) {
            *(int *)(lVar5 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x50) = iVar4;
          }
          uVar11 = 0xffffffff;
          puVar13 = (undefined4 *)((longlong)iVar4 * 0x50 + lVar5);
          *puVar13 = 0xffffffff;
          if (0 < *(int *)&(this->Elements).field_0x34) {
            uVar11 = *(undefined4 *)&(this->Elements).field_0x30;
          }
          puVar13[1] = uVar11;
          puVar12 = &(this->Elements).field_0x34;
          *(int *)puVar12 = *(int *)puVar12 + 1;
          *(int *)&(this->Elements).field_0x30 = iVar4;
          if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = puVar1;
          }
          *(uint *)(puVar12 + lVar2) = *(uint *)(puVar12 + lVar2) & ~uVar15;
          *param_3 = iVar3;
        }
        goto LAB_14dce95b0;
      }
    }
    bVar8 = false;
  }
LAB_14dce95b0:
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar8;
  }
  return bVar8;
}

// UnhashElements @ 14dce9c30

void __thiscall
TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::UnhashElements
          (TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator> *this
          )

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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14dce9d2b;
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
LAB_14dce9d2b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14dce9e20;
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
LAB_14dce9e20:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0xc + (longlong)local_60.CurrentBitIndex * 0x10) * 4) =
         0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14dce9ec0

void __thiscall
TSet<TObjectPtr<UMovieGraphFileOutputNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphFileOutputNode>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TObjectPtr<UMovieGraphFileOutputNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphFileOutputNode>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14dce9fbb;
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
LAB_14dce9fbb:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14dcea0b0;
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
LAB_14dcea0b0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphFileOutputNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0xc + (longlong)local_60.CurrentBitIndex * 0x10) * 4) =
         0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14dcea150

void __thiscall
TSet<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14dcea24b;
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
LAB_14dcea24b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14dcea340;
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
LAB_14dcea340:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UMovieGraphBurnInWidget>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// UnhashElements @ 14dcea3e0

void __thiscall
TSet<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14dcea4db;
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
LAB_14dcea4db:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14dcea5d0;
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
LAB_14dcea5d0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// UnhashElements @ 14dcea670

void __thiscall
TSet<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14dcea76b;
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
LAB_14dcea76b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14dcea860;
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
LAB_14dcea860:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x40 + 0x3c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14dcea900

void __thiscall
TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14dcea9fb;
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
LAB_14dcea9fb:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14dceaaf0;
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
LAB_14dceaaf0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x20 + 0x1c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14dceab90

void __thiscall
TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14dceac8b;
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
LAB_14dceac8b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14dcead80;
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
LAB_14dcead80:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x68 + 100 + *(longlong *)&this->Elements) * 4) =
         0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14dceae20

void __thiscall
TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14dceaf1b;
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
LAB_14dceaf1b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14dceb010;
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
LAB_14dceb010:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x24 + (longlong)local_60.CurrentBitIndex * 0x28) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14dceb0b0

void __thiscall
TSet<TTuple<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14dceb1ab;
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
LAB_14dceb1ab:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14dceb2a0;
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
LAB_14dceb2a0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x20 + 0x1c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// Union @ 14dceb340

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator> * __thiscall
TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::Union
          (TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator> *this
          ,TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>
           *__return_storage_ptr__,
          TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>
          *param_1)

{
  ForElementType<FSetElementId> FVar1;
  UObject *pUVar2;
  longlong lVar3;
  TObjectPtr<AActor>_u_0 TVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ForElementType<FSetElementId> FVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  TObjectPtr<AActor>_u_0 local_res8;
  uint local_98;
  uint uStack_94;
  undefined8 uStack_90;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  ulonglong uVar15;
  
  uVar15 = 0;
  uVar13 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  uVar6 = 1;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  uVar14 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar11 = ((*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34) -
           *(int *)&(this->Elements).field_0x34) + *(int *)&(this->Elements).field_0x8;
  uVar12 = 1;
  local_res8 = (TObjectPtr<AActor>_u_0)this;
  if (uVar11 == 0) goto LAB_14dceb5d6;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar11);
  if (3 < uVar11) {
    uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar12 <= __return_storage_ptr__->HashSize))
  goto LAB_14dceb5d6;
  __return_storage_ptr__->HashSize = uVar12;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar12 != 0) {
    uVar11 = uVar12;
    if (uVar12 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar11 = 0;
        goto LAB_14dceb41e;
      }
    }
    else {
LAB_14dceb41e:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar11,4);
    }
    if (0 < (int)uVar12) {
      uVar17 = (ulonglong)uVar12;
      uVar10 = uVar15;
      do {
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar1;
        }
        uVar7 = uVar10 & (longlong)(int)uVar12 - 1U;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)FVar9 + uVar7 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    uVar11 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
    TStack_60.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(__return_storage_ptr__->Elements).field_0x10;
    local_98 = 0;
    uStack_94 = 1;
    uStack_84 = 0;
    uStack_80 = 0;
    uVar10 = uVar15;
    if (uVar11 != 0) {
      puVar20 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)TStack_60.Array;
      }
      uVar12 = *puVar20;
      uVar17 = uVar15;
      while (uVar12 == 0) {
        uStack_80 = (int)uVar17 + 0x20;
        uVar17 = (ulonglong)uStack_80;
        iVar8 = (int)uVar10;
        local_98 = iVar8 + 1;
        uVar10 = (ulonglong)local_98;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_98)
        goto LAB_14dceb509;
        uVar12 = puVar20[(longlong)iVar8 + 1];
      }
      uStack_94 = -uVar12 & uVar12;
      uVar10 = (ulonglong)uStack_94 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_84 = (int)lVar3 + -1 + uStack_80;
      uVar10 = (ulonglong)uStack_84;
      if ((int)uVar11 < (int)uStack_84) {
LAB_14dceb509:
        uVar10 = (ulonglong)uVar11;
        uStack_84 = uVar11;
      }
    }
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60.CurrentBitIndex = uStack_84;
    TStack_60._28_4_ = uStack_7c;
    TStack_60.BaseBitIndex = uStack_80;
    TStack_60._padding_._0_4_ = local_98;
    TStack_60._padding_._4_4_ = uStack_94;
    if ((int)uVar10 < (int)uVar11) {
      do {
        puVar22 = (undefined8 *)
                  ((longlong)(int)uVar10 * 0x10 + *(longlong *)&__return_storage_ptr__->Elements);
        pUVar2 = (UObject *)*puVar22;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        uVar11 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
                 -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        uVar11 = (uVar11 >> 0x10 ^ uVar11) & __return_storage_ptr__->HashSize - 1U;
        *(uint *)((longlong)puVar22 + 0xc) = uVar11;
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar1;
        }
        uVar17 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(puVar22 + 1) = *(undefined4 *)((longlong)FVar9 + uVar17 * 4);
        *(int *)((longlong)FVar9 + uVar17 * 4) = (int)uVar10;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
        uVar10 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
  }
LAB_14dceb5d6:
  TVar4 = local_res8;
  uVar18 = 0;
  uVar11 = (uint)((local_res8.DebugPtr)->PrimaryActorTick)._padding_;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(local_res8.DebugPtr)->_padding_;
  uVar10 = uVar15;
  uVar12 = 1;
  uVar16 = uVar18;
  uVar19 = uVar18;
  if (uVar11 != 0) {
    uVar10 = (ulonglong)uVar11;
    plVar21 = (longlong *)(local_res8.DebugPtr)->_padding_;
    if ((longlong *)(local_res8.DebugPtr)->_padding_ == (longlong *)0x0) {
      plVar21 = (longlong *)TStack_60.Array;
    }
    uVar12 = (uint)*plVar21;
    uVar17 = uVar15;
    uVar7 = uVar15;
    uVar19 = uVar13;
    uVar16 = uVar13;
    while (uVar12 == 0) {
      iVar8 = (int)uVar17;
      uVar19 = (int)uVar7 + 0x20;
      uVar7 = (ulonglong)uVar19;
      uVar16 = iVar8 + 1;
      uVar17 = (ulonglong)uVar16;
      uVar12 = 1;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
      goto LAB_14dceb65d;
      uVar12 = *(uint *)((longlong)plVar21 + (longlong)iVar8 * 4 + 4);
    }
    uVar12 = -uVar12 & uVar12;
    uVar10 = (ulonglong)uVar12 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar5 = (uVar19 - 1) + (int)lVar3;
    if ((int)uVar11 < (int)uVar5) {
      uVar5 = uVar11;
    }
    uVar10 = (ulonglong)uVar5;
  }
LAB_14dceb65d:
  TStack_60.CurrentBitIndex = (int)uVar10;
  uStack_90 = CONCAT44(uVar12,uVar16);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = uStack_90;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = uVar19;
  if (TStack_60.CurrentBitIndex < (int)uVar11) {
    do {
      Emplace<TObjectPtr<AActor>_const_&>
                (__return_storage_ptr__,(TObjectPtr<AActor> *)&local_res8.ObjectPtr,
                 (bool *)((longlong)(int)uVar10 * 0x10 + *(longlong *)&(TVar4.DebugPtr)->_padding_))
      ;
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      uVar10 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  uVar11 = *(uint *)&(param_1->Elements).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
  uVar10 = uVar15;
  if (uVar11 != 0) {
    puVar20 = *(uint **)&(param_1->Elements).field_0x20;
    uVar10 = (ulonglong)uVar11;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)TStack_60.Array;
    }
    uVar12 = *puVar20;
    uVar17 = uVar15;
    uVar18 = uVar13;
    uVar14 = uVar13;
    while (uVar12 == 0) {
      iVar8 = (int)uVar15;
      uVar18 = (int)uVar17 + 0x20;
      uVar17 = (ulonglong)uVar18;
      uVar14 = iVar8 + 1;
      uVar15 = (ulonglong)uVar14;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_14dceb759;
      uVar12 = puVar20[(longlong)iVar8 + 1];
    }
    uVar6 = -uVar12 & uVar12;
    uVar15 = (ulonglong)uVar6 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = (uVar18 - 1) + (int)lVar3;
    if ((int)uVar11 < (int)uVar12) {
      uVar12 = uVar11;
    }
    uVar10 = (ulonglong)uVar12;
  }
LAB_14dceb759:
  TStack_60.CurrentBitIndex = (int)uVar10;
  uStack_90 = CONCAT44(uVar6,uVar14);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = uStack_90;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = uVar18;
  if (TStack_60.CurrentBitIndex < (int)uVar11) {
    do {
      Emplace<TObjectPtr<AActor>_const_&>
                (__return_storage_ptr__,(TObjectPtr<AActor> *)&local_res8.ObjectPtr,
                 (bool *)((longlong)(int)uVar10 * 0x10 + *(longlong *)&param_1->Elements));
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      uVar10 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Union @ 14dceb810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
::Union(TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
        *this,TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
              *__return_storage_ptr__,
       TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
       *param_1)

{
  ForElementType<FSetElementId> FVar1;
  UObject *pUVar2;
  longlong lVar3;
  TObjectPtr<UActorComponent>_u_0 TVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ForElementType<FSetElementId> FVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  TObjectPtr<UActorComponent>_u_0 local_res8;
  uint local_98;
  uint uStack_94;
  undefined8 uStack_90;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  ulonglong uVar15;
  
  uVar15 = 0;
  uVar13 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  uVar6 = 1;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  uVar14 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar11 = ((*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34) -
           *(int *)&(this->Elements).field_0x34) + *(int *)&(this->Elements).field_0x8;
  uVar12 = 1;
  local_res8 = (TObjectPtr<UActorComponent>_u_0)this;
  if (uVar11 == 0) goto LAB_14dcebaa6;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar11);
  if (3 < uVar11) {
    uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar12 <= __return_storage_ptr__->HashSize))
  goto LAB_14dcebaa6;
  __return_storage_ptr__->HashSize = uVar12;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar12 != 0) {
    uVar11 = uVar12;
    if (uVar12 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar11 = 0;
        goto LAB_14dceb8ee;
      }
    }
    else {
LAB_14dceb8ee:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar11,4);
    }
    if (0 < (int)uVar12) {
      uVar17 = (ulonglong)uVar12;
      uVar10 = uVar15;
      do {
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar1;
        }
        uVar7 = uVar10 & (longlong)(int)uVar12 - 1U;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)FVar9 + uVar7 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    uVar11 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
    TStack_60.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(__return_storage_ptr__->Elements).field_0x10;
    local_98 = 0;
    uStack_94 = 1;
    uStack_84 = 0;
    uStack_80 = 0;
    uVar10 = uVar15;
    if (uVar11 != 0) {
      puVar20 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)TStack_60.Array;
      }
      uVar12 = *puVar20;
      uVar17 = uVar15;
      while (uVar12 == 0) {
        uStack_80 = (int)uVar17 + 0x20;
        uVar17 = (ulonglong)uStack_80;
        iVar8 = (int)uVar10;
        local_98 = iVar8 + 1;
        uVar10 = (ulonglong)local_98;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_98)
        goto LAB_14dceb9d9;
        uVar12 = puVar20[(longlong)iVar8 + 1];
      }
      uStack_94 = -uVar12 & uVar12;
      uVar10 = (ulonglong)uStack_94 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_84 = (int)lVar3 + -1 + uStack_80;
      uVar10 = (ulonglong)uStack_84;
      if ((int)uVar11 < (int)uStack_84) {
LAB_14dceb9d9:
        uVar10 = (ulonglong)uVar11;
        uStack_84 = uVar11;
      }
    }
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60.CurrentBitIndex = uStack_84;
    TStack_60._28_4_ = uStack_7c;
    TStack_60.BaseBitIndex = uStack_80;
    TStack_60._padding_._0_4_ = local_98;
    TStack_60._padding_._4_4_ = uStack_94;
    if ((int)uVar10 < (int)uVar11) {
      do {
        puVar22 = (undefined8 *)
                  ((longlong)(int)uVar10 * 0x10 + *(longlong *)&__return_storage_ptr__->Elements);
        pUVar2 = (UObject *)*puVar22;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        uVar11 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
                 -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        uVar11 = (uVar11 >> 0x10 ^ uVar11) & __return_storage_ptr__->HashSize - 1U;
        *(uint *)((longlong)puVar22 + 0xc) = uVar11;
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar1;
        }
        uVar17 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(puVar22 + 1) = *(undefined4 *)((longlong)FVar9 + uVar17 * 4);
        *(int *)((longlong)FVar9 + uVar17 * 4) = (int)uVar10;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
        uVar10 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
  }
LAB_14dcebaa6:
  TVar4 = local_res8;
  uVar18 = 0;
  uVar11 = (uint)(local_res8.DebugPtr)->_padding_;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(local_res8.DebugPtr)->_padding_;
  uVar10 = uVar15;
  uVar12 = 1;
  uVar16 = uVar18;
  uVar19 = uVar18;
  if (uVar11 != 0) {
    uVar10 = (ulonglong)uVar11;
    plVar21 = (longlong *)(local_res8.DebugPtr)->_padding_;
    if ((longlong *)(local_res8.DebugPtr)->_padding_ == (longlong *)0x0) {
      plVar21 = (longlong *)TStack_60.Array;
    }
    uVar12 = (uint)*plVar21;
    uVar17 = uVar15;
    uVar7 = uVar15;
    uVar19 = uVar13;
    uVar16 = uVar13;
    while (uVar12 == 0) {
      iVar8 = (int)uVar17;
      uVar19 = (int)uVar7 + 0x20;
      uVar7 = (ulonglong)uVar19;
      uVar16 = iVar8 + 1;
      uVar17 = (ulonglong)uVar16;
      uVar12 = 1;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
      goto LAB_14dcebb2d;
      uVar12 = *(uint *)((longlong)plVar21 + (longlong)iVar8 * 4 + 4);
    }
    uVar12 = -uVar12 & uVar12;
    uVar10 = (ulonglong)uVar12 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar5 = (uVar19 - 1) + (int)lVar3;
    if ((int)uVar11 < (int)uVar5) {
      uVar5 = uVar11;
    }
    uVar10 = (ulonglong)uVar5;
  }
LAB_14dcebb2d:
  TStack_60.CurrentBitIndex = (int)uVar10;
  uStack_90 = CONCAT44(uVar12,uVar16);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = uStack_90;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = uVar19;
  if (TStack_60.CurrentBitIndex < (int)uVar11) {
    do {
      Emplace<TObjectPtr<UActorComponent>_const_&>
                (__return_storage_ptr__,(TObjectPtr<UActorComponent> *)&local_res8.ObjectPtr,
                 (bool *)((longlong)(int)uVar10 * 0x10 + *(longlong *)&(TVar4.DebugPtr)->_padding_))
      ;
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      uVar10 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  uVar11 = *(uint *)&(param_1->Elements).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
  uVar10 = uVar15;
  if (uVar11 != 0) {
    puVar20 = *(uint **)&(param_1->Elements).field_0x20;
    uVar10 = (ulonglong)uVar11;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)TStack_60.Array;
    }
    uVar12 = *puVar20;
    uVar17 = uVar15;
    uVar18 = uVar13;
    uVar14 = uVar13;
    while (uVar12 == 0) {
      iVar8 = (int)uVar15;
      uVar18 = (int)uVar17 + 0x20;
      uVar17 = (ulonglong)uVar18;
      uVar14 = iVar8 + 1;
      uVar15 = (ulonglong)uVar14;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_14dcebc29;
      uVar12 = puVar20[(longlong)iVar8 + 1];
    }
    uVar6 = -uVar12 & uVar12;
    uVar15 = (ulonglong)uVar6 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = (uVar18 - 1) + (int)lVar3;
    if ((int)uVar11 < (int)uVar12) {
      uVar12 = uVar11;
    }
    uVar10 = (ulonglong)uVar12;
  }
LAB_14dcebc29:
  TStack_60.CurrentBitIndex = (int)uVar10;
  uStack_90 = CONCAT44(uVar6,uVar14);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = uStack_90;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = uVar18;
  if (TStack_60.CurrentBitIndex < (int)uVar11) {
    do {
      Emplace<TObjectPtr<UActorComponent>_const_&>
                (__return_storage_ptr__,(TObjectPtr<UActorComponent> *)&local_res8.ObjectPtr,
                 (bool *)((longlong)(int)uVar10 * 0x10 + *(longlong *)&param_1->Elements));
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      uVar10 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Emplace<TPairInitializer<UE::Math::TIntPoint<int>_const_&,TSharedPtr<SVirtualWindow,1>_const_&>_> @ 14dcfc900

FSetElementId __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<UE::Math::TIntPoint<int>_const_&,TSharedPtr<SVirtualWindow,1>_const_&>_>
          (TSet<TTuple<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UE::Math::TIntPoint<int>_const_&,TSharedPtr<SVirtualWindow,1>_const_&>
                 *param_1,bool *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  void *_Dst;
  uint uVar11;
  int iVar12;
  char *in_R9;
  uint uVar13;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar1 = *(longlong *)&this->Elements;
    iVar12 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar1);
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar12;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar12 * 0x20 + lVar1) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = *puVar2;
    lVar1 = puVar2[1];
    *(longlong *)((longlong)local_48.Pointer + 0x10) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  iVar12 = (int)*(undefined8 *)local_48.Pointer;
  uVar11 = (uint)((ulonglong)*(undefined8 *)local_48.Pointer >> 0x20);
  uVar7 = iVar12 - uVar11 ^ uVar11 >> 0xd;
  bVar14 = false;
  uVar5 = (-0x61c88647 - uVar7) - uVar11 ^ uVar7 << 8;
  uVar13 = (uVar11 - uVar5) - uVar7 ^ uVar5 >> 0xd;
  uVar7 = (uVar7 - uVar13) - uVar5 ^ uVar13 >> 0xc;
  uVar5 = (uVar5 - uVar7) - uVar13 ^ uVar7 << 0x10;
  uVar13 = (uVar13 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar7 = (uVar7 - uVar13) - uVar5 ^ uVar13 >> 3;
  uVar5 = (uVar5 - uVar7) - uVar13 ^ uVar7 << 10;
  iVar10 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = (uVar13 - uVar5) - uVar7 ^ uVar5 >> 0xf;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar10 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        uVar3 = *(undefined8 *)((longlong)iVar10 * 0x20 + lVar1);
        if (((int)uVar3 == iVar12) && ((uint)((ulonglong)uVar3 >> 0x20) == uVar11)) {
          bVar14 = iVar10 != -1;
          if (bVar14) {
            _Dst = (void *)((longlong)iVar10 * 0x20 + lVar1);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x10));
            memmove(_Dst,local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + lVar1);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<FMoviePipelinePassIdentifier_&&>_> @ 14dcfcd00

FSetElementId __thiscall
TSet<TTuple<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FMoviePipelinePassIdentifier_&&>_>
          (TSet<TTuple<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FMoviePipelinePassIdentifier_&&> *param_2,
          bool *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int local_res8 [2];
  bool *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xd0,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0xd0 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xd0 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<208,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<208,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>_>
       *)0x0) {
    TKeyInitializer<FMoviePipelinePassIdentifier_&&>::
    operator<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>_TTuple<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>
              ((TKeyInitializer<FMoviePipelinePassIdentifier_&&> *)param_3,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 200) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  bVar4 = TryReplaceExisting(this,(uint)param_2,local_38.Pointer,local_res8,in_stack_00000028);
  if (!bVar4) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0xcc) = uVar7;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 200) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_res8[0];
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FMoviePipelinePassIdentifier_&&>_> @ 14dcfce90

FSetElementId __thiscall
TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FMoviePipelinePassIdentifier_&&>_>
          (TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FMoviePipelinePassIdentifier_&&> *param_2,
          bool *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 in_register_00000014;
  FMoviePipelinePassIdentifier *_Src;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  undefined8 *puVar10;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x38 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  _Src = (FMoviePipelinePassIdentifier *)0x0;
  if (local_38.Pointer != (FMoviePipelinePassIdentifier *)0x0) {
    puVar10 = *(undefined8 **)param_3;
    ((local_38.Pointer)->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ((local_38.Pointer)->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar10;
    *puVar10 = 0;
    ((local_38.Pointer)->Data).ArrayNum = *(int *)(puVar10 + 1);
    ((local_38.Pointer)->Data).ArrayMax = *(int *)((longlong)puVar10 + 0xc);
    puVar10[1] = 0;
    (((FString *)((longlong)local_38.Pointer + 0x10))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (((FString *)((longlong)local_38.Pointer + 0x10))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)puVar10[2];
    puVar10[2] = 0;
    (((FString *)((longlong)local_38.Pointer + 0x10))->Data).ArrayNum = *(int *)(puVar10 + 3);
    (((FString *)((longlong)local_38.Pointer + 0x10))->Data).ArrayMax =
         *(int *)((longlong)puVar10 + 0x1c);
    puVar10[3] = 0;
    (((FMoviePipelinePassIdentifier *)((longlong)local_38.Pointer + 0x20))->Name).Data.
    AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (((FMoviePipelinePassIdentifier *)((longlong)local_38.Pointer + 0x20))->Name).Data.ArrayNum = 0;
    (((FMoviePipelinePassIdentifier *)((longlong)local_38.Pointer + 0x20))->Name).Data.ArrayMax = 0;
    DestructItems<FString,int>((FString *)0x0,0);
    *(undefined4 *)
     &(((FMoviePipelinePassIdentifier *)((longlong)local_38.Pointer + 0x20))->CameraName).Data.
      AllocatorInstance.Data = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar1 = *(int *)&(this->Elements).field_0x8;
  bVar4 = false;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if ((iVar1 - iVar5 != 1) && (iVar1 != iVar5)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x38 + 0x30 + *(longlong *)&this->Elements))
    {
      bVar4 = FMoviePipelinePassIdentifier::operator==
                        ((FMoviePipelinePassIdentifier *)
                         (*(longlong *)&this->Elements + (longlong)iVar1 * 0x38),_Src);
      if (bVar4) {
        bVar4 = iVar1 != -1;
        if (bVar4) {
          puVar10 = (undefined8 *)((longlong)iVar1 * 0x38 + *(longlong *)&this->Elements);
          DestructItems<FString,int>((FString *)puVar10[4],*(int *)(puVar10 + 5));
          if ((void *)puVar10[4] != (void *)0x0) {
            FMemory::Free((void *)puVar10[4]);
          }
          if ((void *)puVar10[2] != (void *)0x0) {
            FMemory::Free((void *)puVar10[2]);
          }
          if ((void *)*puVar10 != (void *)0x0) {
            FMemory::Free((void *)*puVar10);
          }
          memmove(puVar10,_Src,0x30);
          TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,local_38.Index,1);
          local_38.Index = iVar1;
        }
        goto LAB_14dcfd018;
      }
    }
    bVar4 = false;
  }
LAB_14dcfd018:
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar4;
  }
  if (bVar4 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)&_Src[1].CameraName.Data.AllocatorInstance.Data + 4) = uVar7;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)&_Src[1].CameraName.Data.AllocatorInstance.Data =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<int_const_&>_> @ 14dcfd150

FSetElementId __thiscall
TSet<TTuple<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData>,TDefaultMapHashableKeyFuncs<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<int_const_&>_>
          (TSet<TTuple<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData>,TDefaultMapHashableKeyFuncs<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<int_const_&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  bool bVar10;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar7 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x10);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  puVar9 = &(this->Elements).field_0x8;
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar3);
  if (local_38.Pointer != (int *)0x0) {
    *(int *)local_38.Pointer = **(int **)param_3;
    *(int *)((longlong)local_38.Pointer + 4) = 0;
    *(int *)((longlong)local_38.Pointer + 8) = -1;
  }
  iVar8 = *(int *)puVar9;
  bVar10 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(int *)(lVar2 + (longlong)iVar8 * 0x10) == *(int *)local_38.Pointer) {
          bVar10 = iVar8 != -1;
          if (bVar10) {
            *(undefined8 *)(lVar2 + (longlong)iVar8 * 0x10) = *(undefined8 *)local_38.Pointer;
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 8 + (longlong)iVar8 * 0x10);
      } while (iVar8 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar10;
  }
  if (bVar10 == false) {
    uVar5 = *(int *)puVar9 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar5) {
      uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0xc) = uVar5;
      FVar6 = (this->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar4 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(int *)((longlong)local_38.Pointer + 8) = *(int *)((longlong)FVar6 + uVar4 * 4);
      *(int *)((longlong)FVar6 + uVar4 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar7;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_> @ 14dcfd360

FSetElementId __thiscall
TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
          (TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<unsigned_int_const_&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  bool bVar6;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_28;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x10);
    iVar5 = iVar5 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  if (local_28.Pointer != (TSparseSetElement<TTuple<unsigned_int,bool>_> *)0x0) {
    *(undefined4 *)local_28.Pointer = **(undefined4 **)param_3;
    *(undefined1 *)((longlong)local_28.Pointer + 4) = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 8) = 0xffffffff;
  }
  iVar5 = *(int *)&(this->Elements).field_0x8;
  bVar6 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar5 - iVar3 != 1) && (iVar5 != iVar3)) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar5 = *(int *)((longlong)FVar4 +
                    ((ulonglong)(this->HashSize - 1) & (ulonglong)param_2 & 0xffffffff) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x10) == *(int *)local_28.Pointer) {
          bVar6 = iVar5 != -1;
          if (bVar6) {
            *(undefined8 *)(lVar2 + (longlong)iVar5 * 0x10) = *(undefined8 *)local_28.Pointer;
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            local_28.Index = iVar5;
          }
          break;
        }
        iVar5 = *(int *)(lVar2 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar6;
  }
  if (bVar6 == false) {
    RehashOrLink(this,(uint)param_2,local_28.Pointer,local_28.Index);
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_28.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&>_> @ 14dcfd500

FSetElementId __thiscall
TSet<TTuple<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&>_>
          (TSet<TTuple<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&> *param_2,
          bool *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int local_res8 [2];
  bool *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x140,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x140 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x140 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<320,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<320,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>_>
       *)0x0) {
    TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&>::
    operator<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>_TTuple<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>
              ((TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&> *)param_3,local_38.Pointer)
    ;
    *(undefined4 *)((longlong)local_38.Pointer + 0x138) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  bVar4 = TryReplaceExisting(this,(uint)param_2,local_38.Pointer,local_res8,in_stack_00000028);
  if (!bVar4) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0x13c) = uVar7;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0x138) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_res8[0];
  return (FSetElementId)param_1;
}

// FindIndexByHash<FMovieGraphRenderDataIdentifier> @ 14dcfdbb0

int __thiscall
TSet<TTuple<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>,FDefaultSetAllocator>
::FindIndexByHash<FMovieGraphRenderDataIdentifier>
          (TSet<TTuple<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>,FDefaultSetAllocator>
           *this,uint param_1,FMovieGraphRenderDataIdentifier *param_2)

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
        iVar1 != -1;
        iVar1 = *(int *)((longlong)iVar1 * 0x140 + 0x138 + *(longlong *)&this->Elements)) {
      bVar2 = FMovieGraphRenderDataIdentifier::operator==
                        ((FMovieGraphRenderDataIdentifier *)
                         (*(longlong *)&this->Elements + (longlong)iVar1 * 0x140),param_2);
      if (bVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<FMovieGraphRenderDataIdentifier> @ 14dcfdc50

int __thiscall
TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
::FindIndexByHash<FMovieGraphRenderDataIdentifier>
          (TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
           *this,uint param_1,FMovieGraphRenderDataIdentifier *param_2)

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
        iVar1 != -1; iVar1 = *(int *)(*(longlong *)&this->Elements + 0x48 + (longlong)iVar1 * 0x50))
    {
      bVar2 = FMovieGraphRenderDataIdentifier::operator==
                        ((FMovieGraphRenderDataIdentifier *)
                         (*(longlong *)&this->Elements + (longlong)iVar1 * 0x50),param_2);
      if (bVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<FMoviePipelinePassIdentifier> @ 14dcfdcf0

int __thiscall
TSet<TTuple<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams,0>,FDefaultSetAllocator>
::FindIndexByHash<FMoviePipelinePassIdentifier>
          (TSet<TTuple<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams,0>,FDefaultSetAllocator>
           *this,uint param_1,FMoviePipelinePassIdentifier *param_2)

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
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0xd0 + 200 + *(longlong *)&this->Elements))
    {
      bVar2 = FMoviePipelinePassIdentifier::operator==
                        ((FMoviePipelinePassIdentifier *)
                         (*(longlong *)&this->Elements + (longlong)iVar1 * 0xd0),param_2);
      if (bVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<FMoviePipelinePassIdentifier> @ 14dcfdd90

int __thiscall
TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
::FindIndexByHash<FMoviePipelinePassIdentifier>
          (TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
           *this,uint param_1,FMoviePipelinePassIdentifier *param_2)

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
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x38 + 0x30 + *(longlong *)&this->Elements))
    {
      bVar2 = FMoviePipelinePassIdentifier::operator==
                        ((FMoviePipelinePassIdentifier *)
                         (*(longlong *)&this->Elements + (longlong)iVar1 * 0x38),param_2);
      if (bVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14dcfde30

int __thiscall
TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar1 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      iVar3 = (param_2->Data).ArrayNum;
      lVar4 = (longlong)iVar1 * 0x38;
      iVar2 = *(int *)(*(longlong *)&this->Elements + 8 + lVar4);
      if (iVar2 == iVar3) {
        if (iVar2 < 2) {
          return iVar1;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*(longlong *)&this->Elements + lVar4),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar6 = iVar3 == 0;
      }
      else {
        bVar6 = iVar2 + iVar3 == 1;
      }
      if (bVar6) {
        return iVar1;
      }
      iVar1 = *(int *)(lVar4 + 0x30 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// RemoveImpl<FMovieGraphRenderDataIdentifier> @ 14dd08780

int __thiscall
TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
::RemoveImpl<FMovieGraphRenderDataIdentifier>
          (TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
           *this,uint param_1,FMovieGraphRenderDataIdentifier *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  longlong lVar7;
  FMovieGraphRenderDataIdentifier *this_00;
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
    this_00 = (FMovieGraphRenderDataIdentifier *)
              (*(longlong *)&this->Elements + (longlong)(int)uVar6 * 200);
    bVar3 = FMovieGraphRenderDataIdentifier::operator==(this_00,param_2);
    if (bVar3) break;
    uVar6 = this_00[2].SubResourceName.Data.ArrayNum;
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14dd0886e;
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
LAB_14dd0886e:
  FVar5 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + (longlong)(int)uVar6 * 200;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar9 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar7 + 0xc4) * 4);
  while( true ) {
    uVar1 = *puVar9;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar9 = *(uint *)(lVar7 + 0xc0);
      TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<200,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<200,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar9 = (uint *)(*(longlong *)&this->Elements + 0xc0 + (longlong)(int)uVar1 * 200);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator> @ 14dd09330

TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
::
TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
          (TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
           *this,TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
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
    TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator> @ 14dd09460

TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::
TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          (TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
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
    TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// operator= @ 14dd0e790

TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
::operator=(TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
            *this,TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                  *param_1)

{
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
    TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=(&this->Elements,&param_1->Elements);
  }
  return this;
}

// Rehash @ 14dd3b6b0

void __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 *puVar11;
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
      uVar4 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14dd3b78c;
        uVar4 = puVar10[lVar5 + 1];
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
LAB_14dd3b78c:
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
        puVar11 = (undefined8 *)
                  ((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar9 = (uint)((ulonglong)*puVar11 >> 0x20);
        uVar7 = (int)*puVar11 - uVar9 ^ uVar9 >> 0xd;
        uVar4 = (-0x61c88647 - uVar7) - uVar9 ^ uVar7 << 8;
        uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 >> 0xd;
        uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 0xc;
        uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 0x10;
        uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 >> 5;
        uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 3;
        uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 10;
        uVar4 = ((uVar9 - uVar4) - uVar7 ^ uVar4 >> 0xf) & *piVar1 - 1U;
        *(uint *)((longlong)puVar11 + 0x1c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar11 + 3) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
        *(int *)((longlong)FVar8 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dd3b8c0

void __thiscall
TSet<TTuple<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData>,TDefaultMapHashableKeyFuncs<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData>,TDefaultMapHashableKeyFuncs<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14dd3b99c;
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
LAB_14dd3b99c:
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
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[3] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[2] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dd3ba50

void __thiscall
TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14dd3bb2c;
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
LAB_14dd3bb2c:
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
                 ((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x1c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 3) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dd3bc10

void __thiscall
TSet<TTuple<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FName *pFVar8;
  uint *puVar9;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  FMovieGraphRenderDataIdentifier local_50;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_98 = 0;
    uStack_94 = 1;
    iStack_84 = 0;
    iStack_80 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_70.Array;
      }
      uVar4 = *puVar9;
      iStack_80 = 0;
      local_98 = 0;
      while (uVar4 == 0) {
        iStack_80 = iStack_80 + 0x20;
        lVar5 = (longlong)local_98;
        local_98 = local_98 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_14dd3bce7;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_94 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_94 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_84 = (int)lVar5 + -1 + iStack_80;
      if (iVar2 < iStack_84) {
LAB_14dd3bce7:
        iStack_84 = iVar2;
      }
    }
    local_70._padding_._0_4_ = local_98;
    local_70._padding_._4_4_ = uStack_94;
    local_70.UnvisitedBitMask = 0xffffffff;
    local_70.CurrentBitIndex = iStack_84;
    local_70._28_4_ = uStack_7c;
    local_70.BaseBitIndex = iStack_80;
    if (iStack_84 < iVar2) {
      do {
        iVar2 = local_70.CurrentBitIndex;
        pFVar8 = (FName *)(*(longlong *)&this->Elements + (longlong)local_70.CurrentBitIndex * 0x140
                          );
        local_50.RootBranchName = *pFVar8;
        ::FString::FString(&local_50.LayerName,(FString *)(pFVar8 + 1));
        ::FString::FString(&local_50.RendererName,(FString *)(pFVar8 + 3));
        ::FString::FString(&local_50.SubResourceName,(FString *)(pFVar8 + 5));
        ::FString::FString(&local_50.CameraName,(FString *)(pFVar8 + 7));
        uVar4 = ::GetTypeHash(&local_50);
        uVar4 = *piVar1 - 1U & uVar4;
        pFVar8[0x27].Number = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        pFVar8[0x27].ComparisonIndex.Value = *(uint *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
      } while (local_70.CurrentBitIndex < (local_70.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dd3bdf0

void __thiscall
TSet<TTuple<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FString *pFVar8;
  uint *puVar9;
  undefined1 local_58 [16];
  FString local_48;
  TSet<TTuple<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams,0>,FDefaultSetAllocator>
  *local_38;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_58._8_8_ = &(this->Elements).field_0x10;
    local_58._0_4_ = 0;
    local_58._4_4_ = 1;
    local_48.Data.AllocatorInstance.Data._4_4_ = 0;
    local_48.Data.ArrayNum = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_58._8_8_;
      }
      uVar4 = *puVar9;
      local_48.Data.ArrayNum = 0;
      local_58._0_4_ = 0;
      while (uVar4 == 0) {
        local_48.Data.ArrayNum = local_48.Data.ArrayNum + 0x20;
        lVar5 = (longlong)(int)local_58._0_4_;
        local_58._0_4_ = local_58._0_4_ + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_58._0_4_)
        goto LAB_14dd3bec7;
        uVar4 = puVar9[lVar5 + 1];
      }
      local_58._4_4_ = -uVar4 & uVar4;
      uVar6 = (ulonglong)(uint)local_58._4_4_ * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_48.Data.AllocatorInstance.Data._4_4_ = (int)lVar5 + -1 + local_48.Data.ArrayNum;
      if (iVar2 < local_48.Data.AllocatorInstance.Data._4_4_) {
LAB_14dd3bec7:
        local_48.Data.AllocatorInstance.Data._4_4_ = iVar2;
      }
    }
    local_48.Data.AllocatorInstance.Data._0_4_ = 0xffffffff;
    local_30._padding_._0_4_ = local_58._0_4_;
    local_30._padding_._4_4_ = local_58._4_4_;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = local_48.Data.AllocatorInstance.Data._4_4_;
    local_30._28_4_ = local_48.Data.ArrayMax;
    local_30.BaseBitIndex = local_48.Data.ArrayNum;
    local_38 = this;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_58._8_8_;
    if (local_48.Data.AllocatorInstance.Data._4_4_ < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        pFVar8 = (FString *)
                 (*(longlong *)&local_38->Elements + (longlong)local_30.CurrentBitIndex * 0xd0);
        ::FString::FString((FString *)local_58,pFVar8);
        ::FString::FString(&local_48,pFVar8 + 1);
        uVar4 = ::GetTypeHash((FMoviePipelinePassIdentifier *)local_58);
        uVar4 = *piVar1 - 1U & uVar4;
        pFVar8[0xc].Data.ArrayMax = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        pFVar8[0xc].Data.ArrayNum = *(int *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dd3bfb0

void __thiscall
TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FString *pFVar8;
  uint *puVar9;
  undefined1 local_58 [16];
  FString local_48;
  TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
  *local_38;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_58._8_8_ = &(this->Elements).field_0x10;
    local_58._0_4_ = 0;
    local_58._4_4_ = 1;
    local_48.Data.AllocatorInstance.Data._4_4_ = 0;
    local_48.Data.ArrayNum = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_58._8_8_;
      }
      uVar4 = *puVar9;
      local_48.Data.ArrayNum = 0;
      local_58._0_4_ = 0;
      while (uVar4 == 0) {
        local_48.Data.ArrayNum = local_48.Data.ArrayNum + 0x20;
        lVar5 = (longlong)(int)local_58._0_4_;
        local_58._0_4_ = local_58._0_4_ + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_58._0_4_)
        goto LAB_14dd3c087;
        uVar4 = puVar9[lVar5 + 1];
      }
      local_58._4_4_ = -uVar4 & uVar4;
      uVar6 = (ulonglong)(uint)local_58._4_4_ * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_48.Data.AllocatorInstance.Data._4_4_ = (int)lVar5 + -1 + local_48.Data.ArrayNum;
      if (iVar2 < local_48.Data.AllocatorInstance.Data._4_4_) {
LAB_14dd3c087:
        local_48.Data.AllocatorInstance.Data._4_4_ = iVar2;
      }
    }
    local_48.Data.AllocatorInstance.Data._0_4_ = 0xffffffff;
    local_30._padding_._0_4_ = local_58._0_4_;
    local_30._padding_._4_4_ = local_58._4_4_;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = local_48.Data.AllocatorInstance.Data._4_4_;
    local_30._28_4_ = local_48.Data.ArrayMax;
    local_30.BaseBitIndex = local_48.Data.ArrayNum;
    local_38 = this;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_58._8_8_;
    if (local_48.Data.AllocatorInstance.Data._4_4_ < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        pFVar8 = (FString *)
                 (*(longlong *)&local_38->Elements + (longlong)local_30.CurrentBitIndex * 0x38);
        ::FString::FString((FString *)local_58,pFVar8);
        ::FString::FString(&local_48,pFVar8 + 1);
        uVar4 = ::GetTypeHash((FMoviePipelinePassIdentifier *)local_58);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)&pFVar8[3].Data.AllocatorInstance.Data + 4) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)&pFVar8[3].Data.AllocatorInstance.Data =
             *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 14dd3c160

void __thiscall
TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>
              *param_2,int param_3)

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
  *(uint *)&param_2->field_0x1c = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x18 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// Remove @ 14dd3c1f0

int __thiscall
TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
::Remove(TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
         *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  uint *puVar9;
  
  if (*(int *)&(this->Elements).field_0x8 == *(int *)&(this->Elements).field_0x34) {
    return 0;
  }
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 != 0xffffffff) {
    do {
      lVar7 = (longlong)(int)uVar6 * 0x10;
      if (*(uint *)(lVar7 + *(longlong *)&this->Elements) == param_1) {
        if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
          puVar8 = *(undefined1 **)&(this->Elements).field_0x20;
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &(this->Elements).field_0x10;
          }
          if ((*(uint *)(puVar8 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4)
               >> (uVar6 & 0x1f) & 1) != 0) goto LAB_14dd3c2c8;
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
LAB_14dd3c2c8:
        FVar5 = (this->Hash).SecondaryData;
        lVar7 = *(longlong *)&this->Elements + lVar7;
        if (FVar5 == (ForElementType<FSetElementId>)0x0) {
          FVar5 = (ForElementType<FSetElementId>)&this->Hash;
        }
        puVar9 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar7 + 0xc) * 4);
        while( true ) {
          uVar1 = *puVar9;
          if ((uVar1 == 0xffffffff) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash"), bVar3)) break;
          if (uVar1 == uVar6) {
            *puVar9 = *(uint *)(lVar7 + 8);
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,uVar6,1);
            return 1;
          }
          puVar9 = (uint *)(*(longlong *)&this->Elements + 8 + (longlong)(int)uVar1 * 0x10);
        }
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      uVar6 = *(uint *)(lVar7 + *(longlong *)&this->Elements + 8);
    } while (uVar6 != 0xffffffff);
  }
  return 0;
}

// Reserve @ 14dd3d390

void __thiscall
TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Reserve(TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          *this,int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  if ((uint)(*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) <
      (uint)param_1) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)param_1);
    }
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,param_1);
    if ((uint)param_1 < 4) {
      iVar3 = 1;
    }
    else {
      uVar1 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar3 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((this->HashSize == 0) || (this->HashSize < iVar3)) {
      this->HashSize = iVar3;
      Rehash(this);
    }
  }
  return;
}

// Reserve @ 14dd3d410

void __thiscall
TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Reserve(TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          *this,int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  if ((uint)(*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) <
      (uint)param_1) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)param_1);
    }
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,param_1);
    if ((uint)param_1 < 4) {
      iVar3 = 1;
    }
    else {
      uVar1 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar3 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((this->HashSize == 0) || (this->HashSize < iVar3)) {
      this->HashSize = iVar3;
      Rehash(this);
    }
  }
  return;
}

// Reset @ 14dd3d630

void __thiscall
TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x8);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// Reset @ 14dd3d6b0

void __thiscall
TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,4,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// TryReplaceExisting @ 14dd47470

bool __thiscall
TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>
          *param_2,int *param_3,bool *param_4)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  void *_Dst;
  bool bVar6;
  
  iVar5 = *(int *)&(this->Elements).field_0x8;
  bVar6 = false;
  iVar1 = *(int *)&(this->Elements).field_0x34;
  if ((iVar5 - iVar1 != 1) && (iVar5 != iVar1)) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar5 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar5 * 0x20 + lVar2) == *(longlong *)param_2) {
          bVar6 = iVar5 != -1;
          if (bVar6) {
            _Dst = (void *)((longlong)iVar5 * 0x20 + lVar2);
            pvVar3 = *(void **)((longlong)_Dst + 8);
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
            memmove(_Dst,param_2,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,*param_3,1);
            *param_3 = iVar5;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + lVar2);
      } while (iVar5 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar6;
  }
  return bVar6;
}

// TryReplaceExisting @ 14dd47580

bool __thiscall
TSet<TTuple<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  void *_Dst;
  uint uVar13;
  bool bVar14;
  
  bVar14 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar9 = FindIndexByHash<FMovieGraphRenderDataIdentifier>
                      (this,param_1,(FMovieGraphRenderDataIdentifier *)param_2);
    bVar14 = iVar9 != -1;
    if (bVar14) {
      _Dst = (void *)((longlong)iVar9 * 0x140 + *(longlong *)&this->Elements);
      UMovieGraphCommandLineEncoderNode::FEncoderParams::~FEncoderParams
                ((FEncoderParams *)((longlong)_Dst + 0x48));
      if (*(void **)((longlong)_Dst + 0x38) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x38));
      }
      if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x28));
      }
      if (*(void **)((longlong)_Dst + 0x18) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x18));
      }
      if (*(void **)((longlong)_Dst + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 8));
      }
      memmove(_Dst,param_2,0x138);
      iVar3 = *param_3;
      puVar1 = &(this->Elements).field_0x10;
      lVar4 = *(longlong *)&this->Elements;
      bVar6 = (byte)iVar3 & 0x1f;
      uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
      lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      if (((*(uint *)(puVar12 + lVar2) & uVar13) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (*(int *)&(this->Elements).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x140 + lVar4) = iVar3;
      }
      uVar10 = 0xffffffff;
      puVar11 = (undefined4 *)((longlong)iVar3 * 0x140 + lVar4);
      *puVar11 = 0xffffffff;
      if (0 < *(int *)&(this->Elements).field_0x34) {
        uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
      }
      puVar11[1] = uVar10;
      puVar12 = &(this->Elements).field_0x34;
      *(int *)puVar12 = *(int *)puVar12 + 1;
      *(int *)&(this->Elements).field_0x30 = iVar3;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      *(uint *)(puVar12 + lVar2) = *(uint *)(puVar12 + lVar2) & ~uVar13;
      *param_3 = iVar9;
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// TryReplaceExisting @ 14dd477b0

bool __thiscall
TSet<TTuple<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>
  *this_00;
  uint uVar13;
  bool bVar14;
  
  bVar14 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar9 = FindIndexByHash<FMoviePipelinePassIdentifier>
                      (this,param_1,(FMoviePipelinePassIdentifier *)param_2);
    bVar14 = iVar9 != -1;
    if (bVar14) {
      this_00 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>
                 *)((longlong)iVar9 * 0xd0 + *(longlong *)&this->Elements);
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1>,FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>
      ::
      ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>
                (this_00);
      memmove(this_00,param_2,200);
      iVar3 = *param_3;
      puVar1 = &(this->Elements).field_0x10;
      lVar4 = *(longlong *)&this->Elements;
      bVar6 = (byte)iVar3 & 0x1f;
      uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
      lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      if (((*(uint *)(puVar12 + lVar2) & uVar13) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (*(int *)&(this->Elements).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0xd0 + lVar4) = iVar3;
      }
      uVar10 = 0xffffffff;
      puVar11 = (undefined4 *)((longlong)iVar3 * 0xd0 + lVar4);
      *puVar11 = 0xffffffff;
      if (0 < *(int *)&(this->Elements).field_0x34) {
        uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
      }
      puVar11[1] = uVar10;
      puVar12 = &(this->Elements).field_0x34;
      *(int *)puVar12 = *(int *)puVar12 + 1;
      *(int *)&(this->Elements).field_0x30 = iVar3;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      *(uint *)(puVar12 + lVar2) = *(uint *)(puVar12 + lVar2) & ~uVar13;
      *param_3 = iVar9;
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// UnhashElements @ 14dd479e0

void __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14dd47adb;
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
LAB_14dd47adb:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14dd47bd0;
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
LAB_14dd47bd0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x20 + 0x1c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14dd47c70

void __thiscall
TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14dd47d6b;
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
LAB_14dd47d6b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14dd47e60;
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
LAB_14dd47e60:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x38 + 0x34 + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// Emplace<TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>_> @ 14dd630c0

FSetElementId __thiscall
TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>_>
          (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  FWeakObjectPtr FVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  FWeakObjectPtr *_Src;
  uint uVar10;
  char *in_R9;
  undefined1 *puVar11;
  bool bVar12;
  FWeakObjectPtr local_res10;
  FSparseArrayAllocationInfo local_48;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar5 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar5 = iVar5 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer == (FWeakObjectPtr *)0x0) {
    _Src = (FWeakObjectPtr *)0x0;
  }
  else {
    *(FWeakObjectPtr *)local_48.Pointer = **(FWeakObjectPtr **)param_2;
    ((FWeakObjectPtr *)((longlong)local_48.Pointer + 8))->ObjectIndex = 0;
    ((FWeakObjectPtr *)((longlong)local_48.Pointer + 8))->ObjectSerialNumber = 0;
    ((FWeakObjectPtr *)((longlong)local_48.Pointer + 0x10))->ObjectIndex = 0;
    ((FWeakObjectPtr *)((longlong)local_48.Pointer + 0x10))->ObjectSerialNumber = 0;
    ((FWeakObjectPtr *)((longlong)local_48.Pointer + 0x18))->ObjectIndex = -1;
    _Src = local_48.Pointer;
  }
  FVar3 = *_Src;
  bVar12 = false;
  uVar10 = FVar3.ObjectSerialNumber ^ FVar3.ObjectIndex;
  if (*(int *)puVar11 - *(int *)&(this->Elements).field_0x34 != 1) {
    local_res10 = FVar3;
    iVar5 = FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                      (this,uVar10,(TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res10);
    bVar12 = iVar5 != -1;
    if (bVar12) {
      local_res10 = (FWeakObjectPtr)((longlong)iVar5 * 0x20 + *(longlong *)&this->Elements);
      if (*(void **)((longlong)local_res10 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)local_res10 + 8));
      }
      memmove((void *)local_res10,_Src,0x18);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar5;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar7 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
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
      uVar10 = this->HashSize - 1U & uVar10;
      _Src[3].ObjectSerialNumber = uVar10;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      _Src[3].ObjectIndex = *(int *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<int_&&,float_const_&>_> @ 14dd632e0

FSetElementId __thiscall
TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
Emplace<TPairInitializer<int_&&,float_const_&>_>
          (TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
           *this,TPairInitializer<int_&&,float_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  char *in_R9;
  bool bVar11;
  FSparseArrayAllocationInfo local_38;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x10);
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (uint *)0x0) {
    puVar3 = *(uint **)(param_2 + 8);
    *(uint *)local_38.Pointer = **(uint **)param_2;
    *(uint *)((longlong)local_38.Pointer + 4) = *puVar3;
    *(uint *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  iVar10 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar7 = *(uint *)local_38.Pointer;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar7) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar10 * 0x10) == uVar7) {
          bVar11 = iVar10 != -1;
          if (bVar11) {
            *(undefined8 *)(lVar2 + (longlong)iVar10 * 0x10) = *(undefined8 *)local_38.Pointer;
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar2 + 8 + (longlong)iVar10 * 0x10);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & uVar7;
      *(uint *)((longlong)local_38.Pointer + 0xc) = uVar7;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(uint *)((longlong)local_38.Pointer + 8) = *(uint *)((longlong)FVar8 + uVar5 * 4);
      *(int *)((longlong)FVar8 + uVar5 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<TObjectPtr<UMovieGraphConfig>_&&,TObjectPtr<UMovieGraphConfig>_&&>_> @ 14dd634e0

FSetElementId __thiscall
TSet<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<TObjectPtr<UMovieGraphConfig>_&&,TObjectPtr<UMovieGraphConfig>_&&>_>
          (TSet<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<TObjectPtr<UMovieGraphConfig>_&&,TObjectPtr<UMovieGraphConfig>_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  UObject *pUVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar1 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar7 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar7);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>_> *)
      0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    pUVar5 = (UObject *)**(undefined8 **)param_2;
    *(UObject **)local_38.Pointer = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    pUVar5 = (UObject *)*puVar4;
    *(UObject **)((longlong)local_38.Pointer + 8) = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  pUVar5 = *(UObject **)local_38.Pointer;
  local_res8[0] = local_38.Index;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  uVar8 = ((uint)((ulonglong)pUVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar5 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  bVar6 = TryReplaceExisting(this,uVar8,local_38.Pointer,local_res8,in_R9);
  if (!bVar6) {
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
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)((longlong)local_38.Pointer + 0x14) = uVar8;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)((longlong)local_38.Pointer + 0x10) =
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

// EmplaceByHash<TKeyInitializer<int_const_&>_> @ 14dd636d0

FSetElementId __thiscall
TSet<TTuple<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData>,TDefaultMapHashableKeyFuncs<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<int_const_&>_>
          (TSet<TTuple<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData>,TDefaultMapHashableKeyFuncs<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<int_const_&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  bool bVar10;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar7 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x10);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  puVar9 = &(this->Elements).field_0x8;
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar3);
  if (local_38.Pointer != (int *)0x0) {
    *(int *)local_38.Pointer = **(int **)param_3;
    *(int *)((longlong)local_38.Pointer + 4) = 0;
    *(int *)((longlong)local_38.Pointer + 8) = -1;
  }
  iVar8 = *(int *)puVar9;
  bVar10 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(int *)(lVar2 + (longlong)iVar8 * 0x10) == *(int *)local_38.Pointer) {
          bVar10 = iVar8 != -1;
          if (bVar10) {
            *(undefined8 *)(lVar2 + (longlong)iVar8 * 0x10) = *(undefined8 *)local_38.Pointer;
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 8 + (longlong)iVar8 * 0x10);
      } while (iVar8 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar10;
  }
  if (bVar10 == false) {
    uVar5 = *(int *)puVar9 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar5) {
      uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0xc) = uVar5;
      FVar6 = (this->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar4 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(int *)((longlong)local_38.Pointer + 8) = *(int *)((longlong)FVar6 + uVar4 * 4);
      *(int *)((longlong)FVar6 + uVar4 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar7;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<int_const_&>_> @ 14dd638e0

FSetElementId __thiscall
TSet<TTuple<int,UMoviePipeline::FRenderTimeStatistics>,TDefaultMapHashableKeyFuncs<int,UMoviePipeline::FRenderTimeStatistics,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<int_const_&>_>
          (TSet<TTuple<int,UMoviePipeline::FRenderTimeStatistics>,TDefaultMapHashableKeyFuncs<int,UMoviePipeline::FRenderTimeStatistics,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<int_const_&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  bool bVar10;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar7 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar2);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  puVar9 = &(this->Elements).field_0x8;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar3);
  if (local_38.Pointer != (int *)0x0) {
    *(int *)local_38.Pointer = **(int **)param_3;
    ((int *)((longlong)local_38.Pointer + 8))[0] = 0;
    ((int *)((longlong)local_38.Pointer + 8))[1] = 0;
    ((int *)((longlong)local_38.Pointer + 0x10))[0] = 0;
    ((int *)((longlong)local_38.Pointer + 0x10))[1] = 0;
    *(int *)((longlong)local_38.Pointer + 0x18) = -1;
  }
  iVar8 = *(int *)puVar9;
  bVar10 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar8 != -1) {
      do {
        if (*(int *)((longlong)iVar8 * 0x20 + *(longlong *)&this->Elements) ==
            *(int *)local_38.Pointer) {
          bVar10 = iVar8 != -1;
          if (bVar10) {
            memmove((void *)((longlong)iVar8 * 0x20 + *(longlong *)&this->Elements),local_38.Pointer
                    ,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *(longlong *)&this->Elements);
      } while (iVar8 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar10;
  }
  if (bVar10 == false) {
    uVar5 = *(int *)puVar9 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar5) {
      uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0x1c) = uVar5;
      FVar6 = (this->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar4 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(int *)((longlong)local_38.Pointer + 0x18) = *(int *)((longlong)FVar6 + uVar4 * 4);
      *(int *)((longlong)FVar6 + uVar4 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar7;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FMoviePipelinePassIdentifier_const_&>_> @ 14dd63b00

FSetElementId __thiscall
TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FMoviePipelinePassIdentifier_const_&>_>
          (TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FMoviePipelinePassIdentifier_const_&> *param_2,
          bool *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  FString *pFVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  int local_res8 [2];
  bool *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0x38 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer ==
      (TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_> *
      )0x0) {
    local_38.Pointer =
         (TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>
          *)0x0;
  }
  else {
    pFVar4 = *(FString **)param_3;
    ::FString::FString(local_38.Pointer,pFVar4);
    ::FString::FString((FString *)((longlong)local_38.Pointer + 0x10),pFVar4 + 1);
    *(undefined8 *)((longlong)local_38.Pointer + 0x20) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x28) = 0;
    DestructItems<FString,int>((FString *)0x0,0);
    *(undefined4 *)((longlong)local_38.Pointer + 0x30) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  bVar5 = TryReplaceExisting(this,(uint)param_2,local_38.Pointer,local_res8,in_stack_00000028);
  if (!bVar5) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & (uint)param_2;
      *(uint *)&((TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>
                  *)local_38.Pointer)->field_0x34 = uVar8;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)
       &((TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>
          *)local_38.Pointer)->field_0x30 = *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_res8[0];
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FMoviePipelinePassIdentifier_const_&>_> @ 14dd63cc0

FSetElementId __thiscall
TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FMoviePipelinePassIdentifier_const_&>_>
          (TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FMoviePipelinePassIdentifier_const_&> *param_2,
          bool *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  FString *pFVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  int local_res8 [2];
  bool *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0x30);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>
       *)0x0) {
    pFVar4 = *(FString **)param_3;
    ::FString::FString(local_38.Pointer,pFVar4);
    ::FString::FString((FString *)((longlong)local_38.Pointer + 0x10),pFVar4 + 1);
    *(undefined8 *)((longlong)local_38.Pointer + 0x20) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x28) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  bVar5 = TryReplaceExisting(this,(uint)param_2,local_38.Pointer,local_res8,in_stack_00000028);
  if (!bVar5) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0x2c) = uVar8;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)((longlong)local_38.Pointer + 0x28) =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_res8[0];
  return (FSetElementId)param_1;
}

// FindIndexByHash<TObjectPtr<UMovieGraphConfig_const_>_> @ 14dd64c70

int __thiscall
TSet<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>,FDefaultSetAllocator>
::FindIndexByHash<TObjectPtr<UMovieGraphConfig_const_>_>
          (TSet<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>,FDefaultSetAllocator>
           *this,uint param_1,TObjectPtr<UMovieGraphConfig_const_> *param_2)

{
  int iVar1;
  UMovieGraphConfig *pUVar2;
  UMovieGraphConfig *pUVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)(*(longlong *)&this->Elements + 0x10 + (longlong)iVar1 * 0x18))
    {
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UMovieGraphConfig *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      pUVar3 = *(UMovieGraphConfig **)((longlong)iVar1 * 0x18 + *(longlong *)&this->Elements);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UMovieGraphConfig *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      if (pUVar3 == pUVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> @ 14dd64d40

int __thiscall
TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
          (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *param_2)

{
  int iVar1;
  bool bVar2;
  ForElementType<FSetElementId> FVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + *(longlong *)&this->Elements))
    {
      local_res8 = param_2->WeakPtr;
      local_res20 = *(FWeakObjectPtr *)((longlong)iVar1 * 0x20 + *(longlong *)&this->Elements);
      bVar2 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject_const_,bool>
                        ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res20,
                         (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res8);
      if (bVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<FMoviePipelinePassIdentifier> @ 14dd64df0

int __thiscall
TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FMoviePipelinePassIdentifier>
          (TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FMoviePipelinePassIdentifier *param_2)

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
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x30 + 0x28 + *(longlong *)&this->Elements))
    {
      bVar2 = FMoviePipelinePassIdentifier::operator==
                        ((FMoviePipelinePassIdentifier *)
                         (*(longlong *)&this->Elements + (longlong)iVar1 * 0x30),param_2);
      if (bVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// Move<TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>_> @ 14dd688d0

void __cdecl
TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
::
Move<TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>_>
          (TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
           *param_1,
          TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
          *param_2)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (param_1 != param_2) {
    TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&param_1->Elements,0,*(int *)&(param_1->Elements).field_0x8);
    if (*(void **)&param_1->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->Elements);
    }
    _Src = &(param_2->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = *(undefined8 *)&param_2->Elements;
    _Dst = &(param_1->Elements).field_0x10;
    *(undefined8 *)&param_2->Elements = 0;
    *(undefined4 *)&(param_1->Elements).field_0x8 = *(undefined4 *)&(param_2->Elements).field_0x8;
    *(undefined4 *)&(param_1->Elements).field_0xc = *(undefined4 *)&(param_2->Elements).field_0xc;
    *(undefined8 *)&(param_2->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_2->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(param_1->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(param_1->Elements).field_0x20 =
           *(undefined8 *)&(param_2->Elements).field_0x20;
      *(undefined8 *)&(param_2->Elements).field_0x20 = 0;
      *(undefined4 *)&(param_1->Elements).field_0x28 =
           *(undefined4 *)&(param_2->Elements).field_0x28;
      *(undefined4 *)&(param_1->Elements).field_0x2c =
           *(undefined4 *)&(param_2->Elements).field_0x2c;
      *(undefined8 *)&(param_2->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(param_1->Elements).field_0x30 = *(undefined4 *)&(param_2->Elements).field_0x30;
    *(undefined4 *)&(param_1->Elements).field_0x34 = *(undefined4 *)&(param_2->Elements).field_0x34;
    *(undefined4 *)&(param_2->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_2->Elements).field_0x34 = 0;
  }
  if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(param_1->Hash).InlineData = *(undefined4 *)(param_2->Hash).InlineData;
  }
  FVar2 = (param_1->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (param_1->Hash).SecondaryData = (param_2->Hash).SecondaryData;
  (param_2->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  param_1->HashSize = param_2->HashSize;
  param_2->HashSize = 0;
  return;
}

// TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator> @ 14dd69cb0

TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
::
TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
          (TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
           *this,TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
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
    TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// Find @ 14dd82520

TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_> * __thiscall
TSet<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>,FDefaultSetAllocator>
       *this,TObjectPtr<UMovieGraphConfig_const_> param_1)

{
  UObject *pUVar1;
  int iVar2;
  uint uVar3;
  
  pUVar1 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  uVar3 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  iVar2 = FindIndexByHash<TObjectPtr<UMovieGraphConfig_const_>_>
                    (this,uVar3 >> 0x10 ^ uVar3,
                     (TObjectPtr<UMovieGraphConfig_const_> *)param_1.field0_0x0);
  if (iVar2 != -1) {
    return (TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_> *)
           (*(longlong *)&this->Elements + (longlong)iVar2 * 0x18);
  }
  return (TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_> *)0x0;
}

// Find @ 14dd825c0

TTuple<FString,TObjectPtr<UMoviePipelineShotConfig>_> * __thiscall
TSet<TTuple<FString,TObjectPtr<UMoviePipelineShotConfig>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UMoviePipelineShotConfig>,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<FString,TObjectPtr<UMoviePipelineShotConfig>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UMoviePipelineShotConfig>,0>,FDefaultSetAllocator>
       *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & uVar2) * 4);
    while (iVar3 != -1) {
      iVar1 = (param_1->Data).ArrayNum;
      lVar5 = (longlong)iVar3 * 0x20;
      iVar3 = *(int *)(*(longlong *)&this->Elements + 8 + lVar5);
      if (iVar3 == iVar1) {
        if (iVar3 < 2) goto LAB_14dd82678;
        iVar3 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*(longlong *)&this->Elements + lVar5),
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
      }
      else {
        bVar7 = iVar3 + iVar1 == 1;
      }
      if (bVar7) {
LAB_14dd82678:
        return (TTuple<FString,TObjectPtr<UMoviePipelineShotConfig>_> *)
               (*(longlong *)&this->Elements + lVar5);
      }
      iVar3 = *(int *)(lVar5 + 0x18 + *(longlong *)&this->Elements);
    }
  }
  return (TTuple<FString,TObjectPtr<UMoviePipelineShotConfig>_> *)0x0;
}

// Rehash @ 14dd98d10

void __thiscall
TSet<TTuple<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData>,TDefaultMapHashableKeyFuncs<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData>,TDefaultMapHashableKeyFuncs<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14dd98dec;
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
LAB_14dd98dec:
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
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[3] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[2] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dd98ea0

void __thiscall
TSet<TTuple<int,UMoviePipeline::FRenderTimeStatistics>,TDefaultMapHashableKeyFuncs<int,UMoviePipeline::FRenderTimeStatistics,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,UMoviePipeline::FRenderTimeStatistics>,TDefaultMapHashableKeyFuncs<int,UMoviePipeline::FRenderTimeStatistics,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14dd98f7c;
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
LAB_14dd98f7c:
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
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[7] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[6] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dd99030

void __thiscall
TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  undefined8 *puVar8;
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
      uVar7 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14dd9910c;
        uVar7 = puVar9[lVar4 + 1];
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
LAB_14dd9910c:
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
        puVar8 = (undefined8 *)
                 ((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar7 = ((uint)((ulonglong)*puVar8 >> 0x20) ^ (uint)*puVar8) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x1c) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar8 + 3) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14dd991d0

void __thiscall
TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FString *pFVar8;
  uint *puVar9;
  undefined1 local_58 [16];
  FString local_48;
  TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
  *local_38;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_58._8_8_ = &(this->Elements).field_0x10;
    local_58._0_4_ = 0;
    local_58._4_4_ = 1;
    local_48.Data.AllocatorInstance.Data._4_4_ = 0;
    local_48.Data.ArrayNum = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_58._8_8_;
      }
      uVar4 = *puVar9;
      local_48.Data.ArrayNum = 0;
      local_58._0_4_ = 0;
      while (uVar4 == 0) {
        local_48.Data.ArrayNum = local_48.Data.ArrayNum + 0x20;
        lVar5 = (longlong)(int)local_58._0_4_;
        local_58._0_4_ = local_58._0_4_ + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_58._0_4_)
        goto LAB_14dd992a7;
        uVar4 = puVar9[lVar5 + 1];
      }
      local_58._4_4_ = -uVar4 & uVar4;
      uVar6 = (ulonglong)(uint)local_58._4_4_ * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_48.Data.AllocatorInstance.Data._4_4_ = (int)lVar5 + -1 + local_48.Data.ArrayNum;
      if (iVar2 < local_48.Data.AllocatorInstance.Data._4_4_) {
LAB_14dd992a7:
        local_48.Data.AllocatorInstance.Data._4_4_ = iVar2;
      }
    }
    local_48.Data.AllocatorInstance.Data._0_4_ = 0xffffffff;
    local_30._padding_._0_4_ = local_58._0_4_;
    local_30._padding_._4_4_ = local_58._4_4_;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = local_48.Data.AllocatorInstance.Data._4_4_;
    local_30._28_4_ = local_48.Data.ArrayMax;
    local_30.BaseBitIndex = local_48.Data.ArrayNum;
    local_38 = this;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_58._8_8_;
    if (local_48.Data.AllocatorInstance.Data._4_4_ < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        pFVar8 = (FString *)
                 (*(longlong *)&local_38->Elements + (longlong)local_30.CurrentBitIndex * 0x30);
        ::FString::FString((FString *)local_58,pFVar8);
        ::FString::FString(&local_48,pFVar8 + 1);
        uVar4 = ::GetTypeHash((FMoviePipelinePassIdentifier *)local_58);
        uVar4 = *piVar1 - 1U & uVar4;
        pFVar8[2].Data.ArrayMax = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        pFVar8[2].Data.ArrayNum = *(int *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// TryReplaceExisting @ 14dda8580

bool __thiscall
TSet<UMovieGraphConfig_*,DefaultKeyFuncs<UMovieGraphConfig_*,0>,FDefaultSetAllocator>::
TryReplaceExisting(TSet<UMovieGraphConfig_*,DefaultKeyFuncs<UMovieGraphConfig_*,0>,FDefaultSetAllocator>
                   *this,uint param_1,TSparseSetElement<UMovieGraphConfig_*> *param_2,int *param_3,
                  bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  
  iVar12 = *(int *)&(this->Elements).field_0x8;
  bVar14 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar12 - iVar3 != 1) && (iVar12 != iVar3)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar12 = *(int *)((longlong)FVar11 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar12 != -1) {
      do {
        if (*(longlong *)(*(longlong *)&this->Elements + (longlong)iVar12 * 0x10) ==
            *(longlong *)param_2) {
          bVar14 = iVar12 != -1;
          if (bVar14) {
            puVar1 = &(this->Elements).field_0x10;
            *(longlong *)(*(longlong *)&this->Elements + (longlong)iVar12 * 0x10) =
                 *(longlong *)param_2;
            iVar3 = *param_3;
            lVar4 = *(longlong *)&this->Elements;
            bVar6 = (byte)iVar3 & 0x1f;
            uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            if (((*(uint *)(puVar10 + lVar2) & uVar13) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar4 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x10) = iVar3;
            }
            uVar9 = 0xffffffff;
            *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x10) = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar9 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            *(undefined4 *)(lVar4 + 4 + (longlong)iVar3 * 0x10) = uVar9;
            puVar10 = &(this->Elements).field_0x34;
            *(int *)puVar10 = *(int *)puVar10 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar3;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
            *param_3 = iVar12;
          }
          break;
        }
        iVar12 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// TryReplaceExisting @ 14dda8790

bool __thiscall
TSet<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  uint uVar13;
  bool bVar14;
  TObjectPtr<UMovieGraphConfig_const_>_u_0 local_res8;
  
  bVar14 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    local_res8.ObjectPtr.field0_0x0 = *(FObjectPtr *)param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending) &&
       (local_res8.DebugPtr != (UMovieGraphConfig *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    iVar10 = FindIndexByHash<TObjectPtr<UMovieGraphConfig_const_>_>
                       (this,param_1,(TObjectPtr<UMovieGraphConfig_const_> *)&local_res8.ObjectPtr);
    bVar14 = iVar10 != -1;
    if (bVar14) {
      memmove((void *)(*(longlong *)&this->Elements + (longlong)iVar10 * 0x18),param_2,0x10);
      iVar4 = *param_3;
      puVar1 = &(this->Elements).field_0x10;
      lVar5 = *(longlong *)&this->Elements;
      bVar7 = (byte)iVar4 & 0x1f;
      uVar13 = 1 << bVar7 | 1U >> 0x20 - bVar7;
      if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
      lVar3 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      if (((*(uint *)(puVar12 + lVar3) & uVar13) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if (*(int *)&(this->Elements).field_0x34 != 0) {
        *(int *)(lVar5 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x18) = iVar4;
      }
      puVar2 = (undefined4 *)(lVar5 + (longlong)iVar4 * 0x18);
      uVar11 = 0xffffffff;
      *puVar2 = 0xffffffff;
      if (0 < *(int *)&(this->Elements).field_0x34) {
        uVar11 = *(undefined4 *)&(this->Elements).field_0x30;
      }
      puVar2[1] = uVar11;
      puVar12 = &(this->Elements).field_0x34;
      *(int *)puVar12 = *(int *)puVar12 + 1;
      *(int *)&(this->Elements).field_0x30 = iVar4;
      if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      *(uint *)(puVar12 + lVar3) = *(uint *)(puVar12 + lVar3) & ~uVar13;
      *param_3 = iVar10;
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// TryReplaceExisting @ 14dda8980

bool __thiscall
TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  ForElementType<FSetElementId> FVar14;
  undefined8 *_Dst;
  uint uVar15;
  
  iVar3 = *(int *)&(this->Elements).field_0x8;
  bVar8 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar3 - iVar4 != 1) && (iVar3 != iVar4)) {
    FVar14 = (this->Hash).SecondaryData;
    if (FVar14 == (ForElementType<FSetElementId>)0x0) {
      FVar14 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar3 = *(int *)((longlong)FVar14 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar3 != -1; iVar3 = *(int *)((longlong)iVar3 * 0x38 + 0x30 + *(longlong *)&this->Elements))
    {
      bVar8 = FMoviePipelinePassIdentifier::operator==
                        ((FMoviePipelinePassIdentifier *)
                         (*(longlong *)&this->Elements + (longlong)iVar3 * 0x38),
                         (FMoviePipelinePassIdentifier *)param_2);
      if (bVar8) {
        bVar8 = iVar3 != -1;
        if (bVar8) {
          _Dst = (undefined8 *)((longlong)iVar3 * 0x38 + *(longlong *)&this->Elements);
          DestructItems<FString,int>((FString *)_Dst[4],*(int *)(_Dst + 5));
          if ((void *)_Dst[4] != (void *)0x0) {
            FMemory::Free((void *)_Dst[4]);
          }
          if ((void *)_Dst[2] != (void *)0x0) {
            FMemory::Free((void *)_Dst[2]);
          }
          if ((void *)*_Dst != (void *)0x0) {
            FMemory::Free((void *)*_Dst);
          }
          memmove(_Dst,param_2,0x30);
          iVar4 = *param_3;
          puVar1 = &(this->Elements).field_0x10;
          lVar5 = *(longlong *)&this->Elements;
          bVar7 = (byte)iVar4 & 0x1f;
          uVar15 = 1 << bVar7 | 1U >> 0x20 - bVar7;
          if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
          lVar2 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = puVar1;
          }
          if (((*(uint *)(puVar12 + lVar2) & uVar15) == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("AllocationFlags[Index]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                 ,0xc5,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          if (*(int *)&(this->Elements).field_0x34 != 0) {
            *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x38 + lVar5) = iVar4;
          }
          uVar11 = 0xffffffff;
          puVar13 = (undefined4 *)((longlong)iVar4 * 0x38 + lVar5);
          *puVar13 = 0xffffffff;
          if (0 < *(int *)&(this->Elements).field_0x34) {
            uVar11 = *(undefined4 *)&(this->Elements).field_0x30;
          }
          puVar13[1] = uVar11;
          puVar12 = &(this->Elements).field_0x34;
          *(int *)puVar12 = *(int *)puVar12 + 1;
          *(int *)&(this->Elements).field_0x30 = iVar4;
          if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = puVar1;
          }
          *(uint *)(puVar12 + lVar2) = *(uint *)(puVar12 + lVar2) & ~uVar15;
          *param_3 = iVar3;
        }
        goto LAB_14dda8a0d;
      }
    }
    bVar8 = false;
  }
LAB_14dda8a0d:
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar8;
  }
  return bVar8;
}

// TryReplaceExisting @ 14dda8bd0

bool __thiscall
TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  code *pcVar7;
  byte bVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  ForElementType<FSetElementId> FVar14;
  undefined8 *_Dst;
  uint uVar15;
  
  iVar3 = *(int *)&(this->Elements).field_0x8;
  bVar9 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar3 - iVar4 != 1) && (iVar3 != iVar4)) {
    FVar14 = (this->Hash).SecondaryData;
    if (FVar14 == (ForElementType<FSetElementId>)0x0) {
      FVar14 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar3 = *(int *)((longlong)FVar14 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar3 != -1; iVar3 = *(int *)((longlong)iVar3 * 0x30 + 0x28 + *(longlong *)&this->Elements))
    {
      bVar9 = FMoviePipelinePassIdentifier::operator==
                        ((FMoviePipelinePassIdentifier *)
                         (*(longlong *)&this->Elements + (longlong)iVar3 * 0x30),
                         (FMoviePipelinePassIdentifier *)param_2);
      if (bVar9) {
        bVar9 = iVar3 != -1;
        if (bVar9) {
          _Dst = (undefined8 *)((longlong)iVar3 * 0x30 + *(longlong *)&this->Elements);
          puVar5 = (undefined8 *)_Dst[4];
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5,1);
          }
          if ((void *)_Dst[2] != (void *)0x0) {
            FMemory::Free((void *)_Dst[2]);
          }
          if ((void *)*_Dst != (void *)0x0) {
            FMemory::Free((void *)*_Dst);
          }
          memmove(_Dst,param_2,0x28);
          iVar4 = *param_3;
          puVar1 = &(this->Elements).field_0x10;
          lVar6 = *(longlong *)&this->Elements;
          bVar8 = (byte)iVar4 & 0x1f;
          uVar15 = 1 << bVar8 | 1U >> 0x20 - bVar8;
          if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          puVar13 = *(undefined1 **)&(this->Elements).field_0x20;
          lVar2 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
          if (puVar13 == (undefined1 *)0x0) {
            puVar13 = puVar1;
          }
          if (((*(uint *)(puVar13 + lVar2) & uVar15) == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AllocationFlags[Index]",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                  ,0xc5,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          if (*(int *)&(this->Elements).field_0x34 != 0) {
            *(int *)(lVar6 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x30) = iVar4;
          }
          uVar12 = 0xffffffff;
          *(undefined4 *)(lVar6 + (longlong)iVar4 * 0x30) = 0xffffffff;
          if (0 < *(int *)&(this->Elements).field_0x34) {
            uVar12 = *(undefined4 *)&(this->Elements).field_0x30;
          }
          *(undefined4 *)(lVar6 + 4 + (longlong)iVar4 * 0x30) = uVar12;
          puVar13 = &(this->Elements).field_0x34;
          *(int *)puVar13 = *(int *)puVar13 + 1;
          *(int *)&(this->Elements).field_0x30 = iVar4;
          if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          puVar13 = *(undefined1 **)&(this->Elements).field_0x20;
          if (puVar13 == (undefined1 *)0x0) {
            puVar13 = puVar1;
          }
          *(uint *)(puVar13 + lVar2) = *(uint *)(puVar13 + lVar2) & ~uVar15;
          *param_3 = iVar3;
        }
        goto LAB_14dda8c60;
      }
    }
    bVar9 = false;
  }
LAB_14dda8c60:
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar9;
  }
  return bVar9;
}

